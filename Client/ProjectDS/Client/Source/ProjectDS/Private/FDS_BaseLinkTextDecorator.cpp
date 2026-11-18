// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 2

// CreateDecoratorWidget @ 14b42c7f0

TSharedPtr<SWidget,1> * __thiscall
FDS_BaseLinkTextDecorator::CreateDecoratorWidget
          (FDS_BaseLinkTextDecorator *this,TSharedPtr<SWidget,1> *__return_storage_ptr__,
          FTextRunInfo *param_1,FTextBlockStyle *param_2)

{
  int iVar1;
  void *pvVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  TTuple<FString,FString> *pTVar5;
  FLinearColor *pFVar6;
  TSharedRef<SWidget,1> *pTVar7;
  FString local_88;
  FString local_78;
  TSharedRef<SWidget,1> local_68;
  FLinearColor_u_0 local_58;
  TDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy> local_48;
  
  ::FString::FString((FString *)&local_68,L"linkdata");
  pTVar5 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                   *)&param_1->_padding_,(FString *)&local_68);
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (pTVar5 == (TTuple<FString,FString> *)0x0) {
    local_78.Data.ArrayNum = 0;
    local_78.Data.ArrayMax = 0;
  }
  else {
    iVar1 = *(int *)&pTVar5->field_0x18;
    pvVar2 = *(void **)&pTVar5->field_0x10;
    local_78.Data.ArrayNum = iVar1;
    if (iVar1 == 0) {
      local_78.Data.ArrayNum = 0;
      local_78.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar1,0,(ForAnyElementType *)&local_78,iVar1,&local_78.Data.ArrayMax);
      memcpy(local_78.Data.AllocatorInstance.Data,pvVar2,(longlong)iVar1 * 2);
    }
  }
  if (local_68.Object != (SWidget *)0x0) {
    FMemory::Free(local_68.Object);
  }
  ::FString::FString((FString *)&local_68,L"color");
  pTVar5 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                   *)&param_1->_padding_,(FString *)&local_68);
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (pTVar5 == (TTuple<FString,FString> *)0x0) {
    local_88.Data.ArrayNum = 0;
    local_88.Data.ArrayMax = 0;
  }
  else {
    iVar1 = *(int *)&pTVar5->field_0x18;
    pvVar2 = *(void **)&pTVar5->field_0x10;
    local_88.Data.ArrayNum = iVar1;
    if (iVar1 == 0) {
      local_88.Data.ArrayNum = 0;
      local_88.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar1,0,(ForAnyElementType *)&local_88,iVar1,&local_88.Data.ArrayMax);
      memcpy(local_88.Data.AllocatorInstance.Data,pvVar2,(longlong)iVar1 * 2);
    }
  }
  if (local_68.Object != (SWidget *)0x0) {
    FMemory::Free(local_68.Object);
  }
  bVar4 = FLinearColor::InitFromString((FLinearColor *)&local_58._s_0,&local_88);
  if (!bVar4) {
    if ((param_2->ColorAndOpacity).ColorUseRule == UseColor_ColorTable) {
      pFVar6 = FSlateColor::GetColorFromTable(&param_2->ColorAndOpacity);
      local_58._s_0.R = (pFVar6->field0_0x0)._s_0.R;
      local_58._s_0.G = (pFVar6->field0_0x0)._s_0.G;
      local_58._s_0.B = (pFVar6->field0_0x0)._s_0.B;
      local_58._s_0.A = (pFVar6->field0_0x0)._s_0.A;
    }
    else {
      local_58._s_0.R = (param_2->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.R;
      local_58._s_0.G = (param_2->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.G;
      local_58._s_0.B = (param_2->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.B;
      local_58._s_0.A = (param_2->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.A;
    }
  }
  local_48._0_8_ = 0;
  local_48._8_8_ = 0;
  local_48._16_4_ = 0;
  TDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&local_48,&this->OnClick);
  pTVar7 = CreateLinkWidget(this,&local_68,&param_1->Content,&local_78,param_2,
                            (FLinearColor *)&local_58._s_0,this->Underline,&local_48);
  __return_storage_ptr__->Object = pTVar7->Object;
  pTVar3 = (pTVar7->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// CreateLinkWidget @ 14b42cd30

TSharedRef<SWidget,1> * __thiscall
FDS_BaseLinkTextDecorator::CreateLinkWidget
          (FDS_BaseLinkTextDecorator *this,TSharedRef<SWidget,1> *__return_storage_ptr__,
          FText *param_1,FString *param_2,FTextBlockStyle *param_3,FLinearColor *param_4,
          bool param_5,TDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy> *param_6)

{
  int iVar1;
  ITextData *pIVar2;
  FScriptContainerElement *_Src;
  code *pcVar3;
  TDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy> *this_00;
  SDS_LinkText *pSVar4;
  FSharedReferencer<1> FVar5;
  TRefCountPtr<ITextData> TVar6;
  ForAnyElementType _Src_00;
  bool bVar7;
  char cVar8;
  byte bVar9;
  FArguments *pFVar10;
  TSharedRef<SWidget,1> *pTVar11;
  longlong lVar12;
  undefined1 local_res10 [8];
  FName local_res18;
  FMemScope local_res20;
  TSlateDecl<SDS_LinkText,RequiredArgs::T0RequiredArgs> local_c18;
  FDestructionSentinel local_c00;
  FDestructionSentinel local_be8;
  FText local_bc8;
  FString local_bb8;
  FTextBlockStyle local_ba8;
  undefined8 local_8c8;
  undefined8 uStack_8c0;
  undefined1 local_8b8 [8];
  ForAnyElementType FStack_8b0;
  int local_8a8;
  undefined1 local_8a0;
  undefined1 local_898 [784];
  undefined1 local_588 [8];
  ForAnyElementType FStack_580;
  int local_578;
  bool local_570;
  FArguments local_568;
  
  FText::FText(&local_bc8);
  local_bb8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_bb8.Data.ArrayNum = 0;
  local_bb8.Data.ArrayMax = 0;
  FTextBlockStyle::FTextBlockStyle(&local_ba8);
  TVar6.Reference = local_bc8.TextData.Reference;
  pIVar2 = (param_1->TextData).Reference;
  local_8b8 = (undefined1  [8])0x0;
  FStack_8b0.Data = (FScriptContainerElement *)0x0;
  local_8a8 = 0;
  local_8a0 = 0;
  if (local_bc8.TextData.Reference != pIVar2) {
    local_bc8.TextData.Reference = pIVar2;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res10);
    }
    if (TVar6.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar6.Reference + 0x10))(TVar6.Reference);
    }
  }
  local_bc8.Flags = param_1->Flags;
  if (&local_bb8 != param_2) {
    iVar1 = (param_2->Data).ArrayNum;
    _Src = (param_2->Data).AllocatorInstance.Data;
    local_bb8.Data.ArrayNum = iVar1;
    if ((iVar1 == 0) && (local_bb8.Data.ArrayMax == 0)) {
      local_bb8.Data.ArrayNum = 0;
      local_bb8.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar1,local_bb8.Data.ArrayMax,(ForAnyElementType *)&local_bb8,iVar1,
                 &local_bb8.Data.ArrayMax);
      if (iVar1 != 0) {
        memcpy(local_bb8.Data.AllocatorInstance.Data,_Src,(longlong)iVar1 * 2);
      }
    }
  }
  FTextBlockStyle::operator=(&local_ba8,param_3);
  this_00 = param_6;
  local_8c8 = *(undefined8 *)&param_4->field0_0x0;
  uStack_8c0 = *(undefined8 *)((longlong)&param_4->field0_0x0 + 8);
  TDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy> *)local_8b8,
             param_6);
  local_8a0 = param_5;
  pFVar10 = SDS_LinkText::FArguments::FArguments(&local_568);
  local_898._0_8_ = local_bc8.TextData.Reference;
  if (local_bc8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_bc8.TextData.Reference + 8))
              (local_bc8.TextData.Reference,&param_6);
  }
  _Src_00.Data = local_bb8.Data.AllocatorInstance.Data;
  lVar12 = (longlong)local_bb8.Data.ArrayNum;
  local_898._8_4_ = local_bc8.Flags;
  local_898._16_8_ = (FScriptContainerElement *)0x0;
  local_898._24_4_ = local_bb8.Data.ArrayNum;
  if (local_bb8.Data.ArrayNum == 0) {
    local_898._28_4_ = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_bb8.Data.ArrayNum,0,(ForAnyElementType *)(local_898 + 0x10),
               local_bb8.Data.ArrayNum,(int *)(local_898 + 0x1c));
    memcpy((void *)local_898._16_8_,_Src_00.Data,lVar12 * 2);
  }
  FTextBlockStyle::FTextBlockStyle((FTextBlockStyle *)(local_898 + 0x20),&local_ba8);
  local_898._768_8_ = local_8c8;
  local_898._776_8_ = uStack_8c0;
  local_588 = (undefined1  [8])0x0;
  FStack_580.Data = (FScriptContainerElement *)0x0;
  local_578 = 0;
  TDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy> *)local_588,
             (TDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy> *)local_8b8);
  local_570 = (bool)local_8a0;
  FDS_LinkTextData::operator=(&pFVar10->_LinkTextData,(FDS_LinkTextData *)local_898);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_588,
             (FWriteAccessScope *)&local_c00);
  if ((local_578 != 0) && (FStack_580.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_580.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_580,0,0,0x10);
    local_578 = 0;
  }
  if (local_c00.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c00.Accessor,&local_c00);
  }
  if (FStack_580.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_580.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_588);
  FTextBlockStyle::~FTextBlockStyle((FTextBlockStyle *)(local_898 + 0x20));
  if ((FScriptContainerElement *)local_898._16_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_898._16_8_);
  }
  if ((ITextData *)local_898._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_898._0_8_ + 0x10))();
  }
  FLLMScope::FLLMScope
            ((FLLMScope *)&param_4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  TSlateDecl<SDS_LinkText,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SDS_LinkText,RequiredArgs::T0RequiredArgs>
            (&local_c18,"SDS_LinkText",
             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Slate\\Decorators\\DS_BaseLinkTextDecorator.h"
             ,0x2e,(T0RequiredArgs *)&param_5);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope((FLLMScope *)&param_4);
  pSVar4 = local_c18._Widget.Object;
  if (local_c18._Widget.Object == (SDS_LinkText *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pTVar11 = (TSharedRef<SWidget,1> *)(*pcVar3)();
      return pTVar11;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)local_c18._Widget.Object,(FSlateBaseNamedArgs *)pFVar10);
  SDS_LinkText::Construct(local_c18._Widget.Object,pFVar10);
  if (local_c18._Widget.Object == (SDS_LinkText *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pTVar11 = (TSharedRef<SWidget,1> *)(*pcVar3)();
      return pTVar11;
    }
  }
  if (((local_c18._Widget.Object)->field_0x30 & 0x10) == 0) {
    cVar8 = (**(code **)(*(longlong *)local_c18._Widget.Object + 0x228))(local_c18._Widget.Object);
    bVar9 = 0;
    if (cVar8 == '\0') goto LAB_14b42d136;
  }
  bVar9 = 0x20;
LAB_14b42d136:
  (local_c18._Widget.Object)->field_0x30 = (local_c18._Widget.Object)->field_0x30 & 0xdf;
  (local_c18._Widget.Object)->field_0x30 = (local_c18._Widget.Object)->field_0x30 | bVar9;
  if (local_c18._Widget.Object == (SDS_LinkText *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pTVar11 = (TSharedRef<SWidget,1> *)(*pcVar3)();
      return pTVar11;
    }
  }
  (local_c18._Widget.Object)->field_0x31 = (local_c18._Widget.Object)->field_0x31 | 4;
  if (local_c18._Widget.Object == (SDS_LinkText *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pTVar11 = (TSharedRef<SWidget,1> *)(*pcVar3)();
      return pTVar11;
    }
  }
  FVar5.ReferenceController = local_c18._Widget.SharedReferenceCount.ReferenceController;
  local_c18._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_c18._Widget.Object = (SDS_LinkText *)0x0;
  if (pSVar4 == (SDS_LinkText *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pTVar11 = (TSharedRef<SWidget,1> *)(*pcVar3)();
      return pTVar11;
    }
  }
  __return_storage_ptr__->Object = (SWidget *)pSVar4;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = FVar5.ReferenceController;
  if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar5.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar5.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  FDS_LinkTextData::~FDS_LinkTextData(&local_568._LinkTextData);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_568);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_8b8,
             (FWriteAccessScope *)&local_be8);
  if ((local_8a8 != 0) && (FStack_8b0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_8b0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_8b0,0,0,0x10);
    local_8a8 = 0;
  }
  if (local_be8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_be8.Accessor,&local_be8);
  }
  if (FStack_8b0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_8b0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_8b8);
  FTextBlockStyle::~FTextBlockStyle(&local_ba8);
  if (local_bb8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_bb8.Data.AllocatorInstance.Data);
  }
  if (local_bc8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_bc8.TextData.Reference + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  if (*(void **)&this_00->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this_00->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return __return_storage_ptr__;
}

