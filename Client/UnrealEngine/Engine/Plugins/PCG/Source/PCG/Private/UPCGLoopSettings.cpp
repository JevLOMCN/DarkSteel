// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 9

// StaticClass @ 149b9c010

UClass * __cdecl UPCGLoopSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGLoopSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGLoopSettings",
               &Z_Registration_Info_UClass_UPCGLoopSettings.InnerSingleton,
               StaticRegisterNativesUPCGLoopSettings,0x108,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGLoopSettings>,
               InternalVTableHelperCtorCaller<UPCGLoopSettings>,local_res8,
               UPCGSubgraphSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGLoopSettings.InnerSingleton;
}

// UPCGLoopSettings @ 149be6cf0

UPCGLoopSettings * __thiscall
UPCGLoopSettings::UPCGLoopSettings(UPCGLoopSettings *this,FVTableHelper *param_1)

{
  UPCGSubgraphSettings::UPCGSubgraphSettings((UPCGSubgraphSettings *)this,param_1);
  this->bUseGraphDefaultPinUsage = true;
  this->_padding_ = (longlong)&___7UPCGLoopSettings__6B_;
  (this->LoopPins).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LoopPins).Data.ArrayNum = 0;
  (this->LoopPins).Data.ArrayMax = 0;
  (this->FeedbackPins).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FeedbackPins).Data.ArrayNum = 0;
  (this->FeedbackPins).Data.ArrayMax = 0;
  this->bTokenizeOnWhiteSpace = false;
  return this;
}

// UPCGLoopSettings @ 149be6d50

UPCGLoopSettings * __thiscall
UPCGLoopSettings::UPCGLoopSettings(UPCGLoopSettings *this,FObjectInitializer *param_1)

{
  UPCGSubgraphSettings::UPCGSubgraphSettings((UPCGSubgraphSettings *)this,param_1);
  this->bUseGraphDefaultPinUsage = true;
  this->_padding_ = (longlong)&___7UPCGLoopSettings__6B_;
  (this->LoopPins).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LoopPins).Data.ArrayNum = 0;
  (this->LoopPins).Data.ArrayMax = 0;
  (this->FeedbackPins).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FeedbackPins).Data.ArrayNum = 0;
  (this->FeedbackPins).Data.ArrayMax = 0;
  this->bTokenizeOnWhiteSpace = false;
  return this;
}

// ~UPCGLoopSettings @ 149be9aa0

void __thiscall UPCGLoopSettings::~UPCGLoopSettings(UPCGLoopSettings *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPCGLoopSettings__6B_;
  pFVar1 = (this->FeedbackPins).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LoopPins).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UPCGSubgraphSettings::~UPCGSubgraphSettings((UPCGSubgraphSettings *)this);
  return;
}

// CreateElement @ 149c050e0

TSharedPtr<IPCGElement,1> * __thiscall
UPCGLoopSettings::CreateElement
          (UPCGLoopSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedPtr<IPCGElement,1> *pTVar4;
  
  pTVar3 = ::operator_new(0x18);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    __return_storage_ptr__->Object = (IPCGElement *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFPCGLoopElement___00_SharedPointerInternals__6B_;
    pTVar3[1]._padding_ = (longlong)&___7FPCGLoopElement__6B_;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedPtr<IPCGElement,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
    __return_storage_ptr__->Object = (IPCGElement *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return __return_storage_ptr__;
}

// GetLoopPinNames @ 149c24110

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
UPCGLoopSettings::GetLoopPinNames
          (UPCGLoopSettings *this,FPCGContext *param_1,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_3,bool param_4)

{
  FPCGPinProperties *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  UPCGGraph *pUVar7;
  UPCGPin *pUVar8;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar9;
  FName *pFVar10;
  FString *pFVar11;
  FText *pFVar12;
  FText *pFVar13;
  FTextFormat *pFVar14;
  UClass *pUVar15;
  ForAnyElementType FVar16;
  longlong lVar17;
  UPCGNode *pUVar18;
  FPCGPinProperties *pFVar19;
  FName *pFVar20;
  FScriptContainerElement *pFVar21;
  FScriptContainerElement *pFVar22;
  undefined1 local_158 [4];
  int local_154;
  TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> local_150;
  FScriptContainerElement *local_140;
  FScriptContainerElement *local_138;
  TArray<FString,TSizedDefaultAllocator<32>_> local_130;
  TArray<FString,TSizedDefaultAllocator<32>_> local_120;
  TArray<FString,TSizedDefaultAllocator<32>_> local_110;
  TArray<FString,TSizedDefaultAllocator<32>_> local_100;
  FScriptContainerElement *local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  FName local_d8;
  FName local_d0;
  TStringView<wchar_t> local_c8;
  FString local_b8;
  FString local_a8;
  FText local_98;
  FText local_88;
  TArray<FString,TSizedDefaultAllocator<32>_> local_78;
  FString local_68;
  FText local_58;
  FTextFormat local_48;
  
  local_154 = 0;
  if (this->bUseGraphDefaultPinUsage == false) {
    bVar4 = this->bTokenizeOnWhiteSpace == false;
    if (bVar4) {
      pTVar9 = PCGHelpers::GetStringArrayFromCommaSeparatedList(&local_130,&this->LoopPins);
    }
    else {
      pTVar9 = PCGHelpers::GetStringArrayFromCommaSeparatedString
                         (&local_120,&this->LoopPins,param_1);
    }
    pFVar22 = (pTVar9->AllocatorInstance).Data;
    (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    local_154 = pTVar9->ArrayNum;
    lVar17 = (longlong)local_154;
    pTVar9->ArrayNum = 0;
    pTVar9->ArrayMax = 0;
    local_140 = pFVar22;
    if ((bVar4) &&
       (DestructItems<FString,int>((FString *)local_130.AllocatorInstance.Data,local_130.ArrayNum),
       local_130.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_130.AllocatorInstance.Data);
    }
    if ((!bVar4) &&
       (DestructItems<FString,int>((FString *)local_120.AllocatorInstance.Data,local_120.ArrayNum),
       local_120.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_120.AllocatorInstance.Data);
    }
    pFVar21 = pFVar22 + lVar17 * 0x10;
    for (; pFVar22 != pFVar21; pFVar22 = pFVar22 + 0x10) {
      iVar6 = param_2->ArrayNum;
      if (iVar6 == param_2->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar6 + 1;
      pFVar2 = (param_2->AllocatorInstance).Data;
      iVar5 = *(int *)(pFVar22 + 8) + -1;
      if (*(int *)(pFVar22 + 8) == 0) {
        iVar5 = 0;
      }
      pFVar10 = ::FName::FName(&local_d8,iVar5,*(wchar_t **)&pFVar22->field_0x0,FNAME_Add);
      *(FName *)(pFVar2 + (longlong)iVar6 * 8) = *pFVar10;
    }
    bVar4 = this->bTokenizeOnWhiteSpace == false;
    if (bVar4) {
      pTVar9 = PCGHelpers::GetStringArrayFromCommaSeparatedList(&local_110,&this->FeedbackPins);
    }
    else {
      pTVar9 = PCGHelpers::GetStringArrayFromCommaSeparatedString
                         (&local_100,&this->FeedbackPins,param_1);
    }
    pFVar22 = local_140;
    if (&local_78 != pTVar9) {
      DestructItems<FString,int>((FString *)local_140,local_154);
      if (pFVar22 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar22);
      }
      local_140 = (pTVar9->AllocatorInstance).Data;
      (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      local_154 = pTVar9->ArrayNum;
      pTVar9->ArrayNum = 0;
      pTVar9->ArrayMax = 0;
    }
    pFVar22 = local_140;
    iVar6 = local_154;
    if ((bVar4) &&
       (DestructItems<FString,int>((FString *)local_110.AllocatorInstance.Data,local_110.ArrayNum),
       local_110.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_110.AllocatorInstance.Data);
    }
    if ((!bVar4) &&
       (DestructItems<FString,int>((FString *)local_100.AllocatorInstance.Data,local_100.ArrayNum),
       local_100.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_100.AllocatorInstance.Data);
    }
    local_150.AllocatorInstance.Data = (FScriptContainerElement *)&param_2->ArrayNum;
    local_138 = pFVar22 + (longlong)iVar6 * 0x10;
LAB_149c24530:
    pFVar21 = local_140;
    if (pFVar22 != local_138) {
      pFVar20 = (FName *)(param_2->AllocatorInstance).Data;
      pFVar10 = pFVar20 + param_2->ArrayNum;
      for (; pFVar20 != pFVar10; pFVar20 = pFVar20 + 1) {
        pFVar11 = ::FString::FString(&local_68,(FString *)pFVar22);
        local_e8 = (pFVar11->Data).AllocatorInstance.Data;
        iVar6 = (pFVar11->Data).ArrayNum;
        iStack_e0 = iVar6 + -1;
        if (iVar6 == 0) {
          iStack_e0 = 0;
        }
        local_c8._12_4_ = uStack_dc;
        local_c8.Size = iStack_e0;
        local_c8.DataPtr = (wchar_t *)local_e8;
        bVar4 = ::FName::Equals(*pFVar20,&local_c8);
        pFVar21 = (pFVar11->Data).AllocatorInstance.Data;
        if (pFVar21 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar21);
        }
        if (bVar4) {
          if (((param_4) || (param_1 == (FPCGContext *)0x0)) || ((byte)LogPCG._0_1_ < 3))
          goto LAB_149c24602;
          pFVar12 = FText::FromString(&local_58,(FString *)pFVar22);
          pFVar13 = FText::AsLocalizable_Advanced_LocText
                              (&local_88,L"PCGLoopElement",L"SameLabelAppearsTwice",
                               L"Label \'{0}\' appears in both the loop pins and the feedback pins")
          ;
          pFVar14 = FTextFormat::FTextFormat(&local_48,pFVar13,Default);
          pFVar12 = FText::Format<FText>(&local_98,pFVar14,pFVar12);
          FText::ToString(pFVar12);
          FPCGContext::GetTaskName(param_1,&local_a8);
          FPCGContext::GetExecutionSourceName(param_1,&local_b8);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b8.Data.AllocatorInstance.Data);
          }
          if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a8.Data.AllocatorInstance.Data);
          }
          if (local_98.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
          }
          if (local_88.TextData.Reference == (ITextData *)0x0) goto LAB_149c24602;
          (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
          pFVar22 = pFVar22 + 0x10;
          goto LAB_149c24530;
        }
      }
      iVar6 = param_3->ArrayNum;
      if (iVar6 == param_3->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&param_3->AllocatorInstance,&param_3->ArrayMax);
      }
      param_3->ArrayNum = iVar6 + 1;
      pFVar21 = (param_3->AllocatorInstance).Data;
      iVar5 = *(int *)(pFVar22 + 8) + -1;
      if (*(int *)(pFVar22 + 8) == 0) {
        iVar5 = 0;
      }
      pFVar10 = ::FName::FName(&local_d0,iVar5,*(wchar_t **)&pFVar22->field_0x0,FNAME_Add);
      *(FName *)(pFVar21 + (longlong)iVar6 * 8) = *pFVar10;
LAB_149c24602:
      pFVar22 = pFVar22 + 0x10;
      goto LAB_149c24530;
    }
    DestructItems<FString,int>((FString *)local_140,local_154);
    if (pFVar21 == (FScriptContainerElement *)0x0) goto LAB_149c24769;
    FMemory::Free(pFVar21);
    FVar16.Data = local_150.AllocatorInstance.Data;
  }
  else {
    pUVar7 = UPCGBaseSubgraphSettings::GetSubgraph((UPCGBaseSubgraphSettings *)this);
    if (pUVar7 == (UPCGGraph *)0x0) {
      return;
    }
    pUVar18 = (pUVar7->InputNode).field0_0x0.DebugPtr;
    if ((pUVar18 == (UPCGNode *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("SubgraphInputNode",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGLoopElement.cpp"
                           ,100,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    UPCGNode::InputPinProperties(pUVar18,&local_150);
    iVar6 = local_150.ArrayNum;
    pFVar19 = (FPCGPinProperties *)
              (local_150.AllocatorInstance.Data + (longlong)local_150.ArrayNum * 0x30);
    FVar16.Data = local_150.AllocatorInstance.Data;
    while( true ) {
      if (local_150.ArrayNum != iVar6) {
        local_158[0] = 0;
        `TCheckedPointerIterator<FPCGPinProperties,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_158);
      }
      if ((FPCGPinProperties *)FVar16.Data == pFVar19) break;
      if (((FPCGPinProperties *)FVar16.Data)->Usage == Loop) {
        pFVar1 = (FPCGPinProperties *)(param_2->AllocatorInstance).Data;
        if (((pFVar1 <= FVar16.Data) &&
            (FVar16.Data < (FPCGPinProperties *)(&pFVar1->Label + param_2->ArrayMax))) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar5 = param_2->ArrayNum;
        if (iVar5 == param_2->ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        param_2->ArrayNum = iVar5 + 1;
        pFVar10 = &((FPCGPinProperties *)FVar16.Data)->Label;
        FVar16.Data = FVar16.Data + 0x30;
        *(FName *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 8) = *pFVar10;
      }
      else {
        if (((FPCGPinProperties *)FVar16.Data)->Usage == Feedback) {
          pUVar8 = UPCGNode::GetOutputPin(pUVar18,(FName *)FVar16.Data);
          iVar5 = UPCGPin::EdgeCount(pUVar8);
          if (0 < iVar5) {
            pFVar1 = (FPCGPinProperties *)(param_3->AllocatorInstance).Data;
            if (((pFVar1 <= FVar16.Data) &&
                (FVar16.Data < (FPCGPinProperties *)(&pFVar1->Label + param_3->ArrayMax))) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            iVar5 = param_3->ArrayNum;
            if (iVar5 == param_3->ArrayMax) {
              iVar5 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x408,&param_3->AllocatorInstance,&param_3->ArrayMax);
            }
            param_3->ArrayNum = iVar5 + 1;
            *(FName *)((param_3->AllocatorInstance).Data + (longlong)iVar5 * 8) =
                 ((FPCGPinProperties *)FVar16.Data)->Label;
          }
        }
        FVar16.Data = FVar16.Data + 0x30;
      }
    }
    DestructItems<FPCGPinProperties,int>
              ((FPCGPinProperties *)local_150.AllocatorInstance.Data,local_150.ArrayNum);
    if ((FPCGPinProperties *)local_150.AllocatorInstance.Data != (FPCGPinProperties *)0x0) {
      FMemory::Free(local_150.AllocatorInstance.Data);
    }
LAB_149c24769:
    FVar16.Data = (FScriptContainerElement *)&param_2->ArrayNum;
  }
  if ((((FPCGPinProperties *)FVar16.Data)->Label).ComparisonIndex.Value != 0) {
    return;
  }
  if (param_1 == (FPCGContext *)0x0) {
    pUVar18 = (UPCGNode *)this->_padding_;
  }
  else {
    pUVar18 = param_1->Node;
  }
  if (pUVar18 != (UPCGNode *)0x0) {
    pUVar15 = Z_Construct_UClass_UPCGSubgraphNode_NoRegister();
    iVar6 = (int)pUVar15->_padding_;
    if ((iVar6 <= *(int *)(pUVar18->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar18->_padding_ + 0x30) + (longlong)iVar6 * 8)
        == &pUVar15->_padding_)) goto LAB_149c247bb;
  }
  pUVar18 = (UPCGNode *)0x0;
LAB_149c247bb:
  if ((pUVar18 != (UPCGNode *)0x0) &&
     (pUVar8 = UPCGNode::GetFirstConnectedInputPin(pUVar18), pUVar8 != (UPCGPin *)0x0)) {
    pFVar22 = (param_2->AllocatorInstance).Data;
    pFVar19 = &pUVar8->Properties;
    if ((pFVar22 <= pFVar19) &&
       ((pFVar19 < pFVar22 + (longlong)param_2->ArrayMax * 8 &&
        (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar4)))) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar6 = param_2->ArrayNum;
    if (iVar6 == param_2->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar6 + 1;
    *(FName *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 8) = pFVar19->Label;
  }
  return;
}

// GetPrivateStaticClass @ 149c256d0

UClass * __cdecl UPCGLoopSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGLoopSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGLoopSettings",
               &Z_Registration_Info_UClass_UPCGLoopSettings.InnerSingleton,
               StaticRegisterNativesUPCGLoopSettings,0x108,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGLoopSettings>,
               InternalVTableHelperCtorCaller<UPCGLoopSettings>,local_res8,
               UPCGSubgraphSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGLoopSettings.InnerSingleton;
}

// IsDynamicGraph @ 149c2d4c0

bool __thiscall UPCGLoopSettings::IsDynamicGraph(UPCGLoopSettings *this)

{
  return true;
}

// StaticRegisterNativesUPCGLoopSettings @ 149c35440

void __cdecl UPCGLoopSettings::StaticRegisterNativesUPCGLoopSettings(void)

{
  return;
}

