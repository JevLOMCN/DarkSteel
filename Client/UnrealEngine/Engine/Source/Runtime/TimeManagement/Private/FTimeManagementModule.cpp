// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TimeManagement
// Functions: 3

// GetTimedDataInputCollection @ 146035c80

FTimedDataInputCollection * __thiscall
FTimeManagementModule::GetTimedDataInputCollection(FTimeManagementModule *this)

{
  return &this->Collection;
}

// GetAllCommonFrameRates @ 146035c90

TArrayView<FCommonFrameRateInfo_const_,int> * __thiscall
FTimeManagementModule::GetAllCommonFrameRates
          (FTimeManagementModule *this,
          TArrayView<FCommonFrameRateInfo_const_,int> *__return_storage_ptr__)

{
  __return_storage_ptr__->DataPtr = FCommonFrameRates::AllFrameRates;
  __return_storage_ptr__->ArrayNum = 0xe;
  return __return_storage_ptr__;
}

// CreateFrameRatePicker @ 146035cb0

TSharedRef<SFrameRatePicker,1> * __thiscall
FTimeManagementModule::CreateFrameRatePicker
          (FTimeManagementModule *this,TSharedRef<SFrameRatePicker,1> *__return_storage_ptr__,
          FArguments *param_1)

{
  byte *pbVar1;
  ITextData *pIVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  SFrameRatePicker *pSVar5;
  bool bVar6;
  char cVar7;
  byte bVar8;
  TSharedRef<SFrameRatePicker,1> *pTVar9;
  T0RequiredArgs local_res10 [8];
  FLLMScope local_res18 [2];
  FName local_res20;
  FMemScope local_38;
  TSlateDecl<SFrameRatePicker,RequiredArgs::T0RequiredArgs> local_30;
  
  FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_38,&local_res20,true);
  TSlateDecl<SFrameRatePicker,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SFrameRatePicker,RequiredArgs::T0RequiredArgs>
            (&local_30,"SFrameRatePicker",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TimeManagement\\Private\\TimeManagementModule.cpp"
             ,0x13,local_res10);
  FMemScope::~FMemScope(&local_38);
  FLLMScope::~FLLMScope(local_res18);
  pSVar5 = local_30._Widget.Object;
  if (local_30._Widget.Object == (SFrameRatePicker *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TSharedRef<SFrameRatePicker,1> *)(*pcVar4)();
      return pTVar9;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)local_30._Widget.Object,(FSlateBaseNamedArgs *)param_1);
  SFrameRatePicker::Construct(local_30._Widget.Object,param_1);
  if (local_30._Widget.Object == (SFrameRatePicker *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TSharedRef<SFrameRatePicker,1> *)(*pcVar4)();
      return pTVar9;
    }
  }
  if (((local_30._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar7 = (**(code **)((local_30._Widget.Object)->_padding_ + 0x228))(local_30._Widget.Object);
    bVar8 = 0;
    if (cVar7 == '\0') goto LAB_146035dd9;
  }
  bVar8 = 0x20;
LAB_146035dd9:
  *(byte *)&(local_30._Widget.Object)->_padding_ = (byte)(local_30._Widget.Object)->_padding_ & 0xdf
  ;
  *(byte *)&(local_30._Widget.Object)->_padding_ =
       (byte)(local_30._Widget.Object)->_padding_ | bVar8;
  if (local_30._Widget.Object == (SFrameRatePicker *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TSharedRef<SFrameRatePicker,1> *)(*pcVar4)();
      return pTVar9;
    }
  }
  pbVar1 = (byte *)((longlong)&(local_30._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if (local_30._Widget.Object == (SFrameRatePicker *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TSharedRef<SFrameRatePicker,1> *)(*pcVar4)();
      return pTVar9;
    }
  }
  __return_storage_ptr__->Object = local_30._Widget.Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_30._Widget.SharedReferenceCount.ReferenceController;
  local_30._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_30._Widget.Object = (SFrameRatePicker *)0x0;
  if (pSVar5 == (SFrameRatePicker *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TSharedRef<SFrameRatePicker,1> *)(*pcVar4)();
      return pTVar9;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_1->_Font).Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->_Font).Value.CompositeFont.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->_IsPresetRecommended);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_1->_NotRecommendedToolTip).Getter)
  ;
  pIVar2 = (param_1->_NotRecommendedToolTip).Value.TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_1->_NotRecommendedText).Getter);
  pIVar2 = (param_1->_NotRecommendedText).Value.TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_1->_RecommendedText).Getter);
  pIVar2 = (param_1->_RecommendedText).Value.TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  DestructItems<FCommonFrameRateInfo,int>
            ((FCommonFrameRateInfo *)(param_1->_PresetValues).AllocatorInstance.Data,
             (param_1->_PresetValues).ArrayNum);
  pFVar3 = (param_1->_PresetValues).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_1->_HasMultipleValues).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->_OnValueChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_1->_Value).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_1->_ContentPadding).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_1->_ForegroundColor).Getter);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)param_1);
  return __return_storage_ptr__;
}

