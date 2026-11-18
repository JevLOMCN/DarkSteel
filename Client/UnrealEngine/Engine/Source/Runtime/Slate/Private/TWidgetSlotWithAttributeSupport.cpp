// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 40

// ~TWidgetSlotWithAttributeSupport<SHorizontalBox::FSlot> @ 1426ffa80

void __thiscall
TWidgetSlotWithAttributeSupport<SHorizontalBox::FSlot>::
~TWidgetSlotWithAttributeSupport<SHorizontalBox::FSlot>
          (TWidgetSlotWithAttributeSupport<SHorizontalBox::FSlot> *this)

{
  SWidget *pSVar1;
  
  *(undefined ***)this = &_vftable__for__TSlotBase<SHorizontalBox::FSlot>__;
  *(undefined ***)&this->field_0x20 =
       &_vftable__for__SlateAttributePrivate__ISlateAttributeContainer__;
  pSVar1 = FSlotBase::GetOwnerWidget((FSlotBase *)this);
  if (pSVar1 != (SWidget *)0x0) {
    SlateAttributePrivate::ISlateAttributeContainer::RemoveContainerWidget
              ((ISlateAttributeContainer *)&this->field_0x20,pSVar1);
  }
  FSlotBase::~FSlotBase((FSlotBase *)this);
  return;
}

// GetContainerName @ 14273c6f0

/* WARNING: Enum "Type": Some values do not have unique names */

FName __thiscall
TWidgetSlotWithAttributeSupport<SHorizontalBox::FSlot>::GetContainerName
          (TWidgetSlotWithAttributeSupport<SHorizontalBox::FSlot> *this)

{
  longlong lVar1;
  FName in_RDX;
  
  lVar1 = *(longlong *)&this[-1].field_0x10;
  if (*(char *)(lVar1 + 0x19) != -0x24) {
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_FChildren::Debug_TestDestroyTag(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogSlate);
  }
  *(undefined8 *)in_RDX = *(undefined8 *)(lVar1 + 0x10);
  return in_RDX;
}

// GetContainerSortOrder @ 14273c740

uint __thiscall
TWidgetSlotWithAttributeSupport<SHorizontalBox::FSlot>::GetContainerSortOrder
          (TWidgetSlotWithAttributeSupport<SHorizontalBox::FSlot> *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  
  if ((*(longlong *)&this[-1].field_0x10 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("FSlotBase::GetOwner()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\WidgetSlotWithAttributeSupport.h"
                         ,0x53,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  iVar4 = (**(code **)(**(longlong **)&this[-1].field_0x10 + 0x18))();
  uVar3 = 0;
  if (0 < iVar4) {
    do {
      puVar5 = (undefined1 *)
               (**(code **)(**(longlong **)&this[-1].field_0x10 + 0x20))
                         (*(longlong **)&this[-1].field_0x10,uVar3);
      if (puVar5 == &this[-1].field_0x8) {
        return uVar3;
      }
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < iVar4);
  }
  return 0xffffffff;
}

// GetContainerWidget @ 14273c7e0

SWidget * __thiscall
TWidgetSlotWithAttributeSupport<SHorizontalBox::FSlot>::GetContainerWidget
          (TWidgetSlotWithAttributeSupport<SHorizontalBox::FSlot> *this)

{
  code *pcVar1;
  bool bVar2;
  SWidget *pSVar3;
  
  pSVar3 = FSlotBase::GetOwnerWidget((FSlotBase *)&this[-1].field_0x8);
  if ((pSVar3 == (SWidget *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("WidgetPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\WidgetSlotWithAttributeSupport.h"
                         ,0x48,
                         L"Slot Attributes has to be registered after the FSlot is constructed."),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SWidget *)(*pcVar1)();
    return pSVar3;
  }
  return pSVar3;
}

// ~TWidgetSlotWithAttributeSupport<SPrioritizedWrapBox::FSlot> @ 1427b76e0

void __thiscall
TWidgetSlotWithAttributeSupport<SPrioritizedWrapBox::FSlot>::
~TWidgetSlotWithAttributeSupport<SPrioritizedWrapBox::FSlot>
          (TWidgetSlotWithAttributeSupport<SPrioritizedWrapBox::FSlot> *this)

{
  SWidget *pSVar1;
  
  *(undefined ***)this = &_vftable__for__TSlotBase<SPrioritizedWrapBox::FSlot>__;
  *(undefined ***)&this->field_0x20 =
       &_vftable__for__SlateAttributePrivate__ISlateAttributeContainer__;
  pSVar1 = FSlotBase::GetOwnerWidget((FSlotBase *)this);
  if (pSVar1 != (SWidget *)0x0) {
    SlateAttributePrivate::ISlateAttributeContainer::RemoveContainerWidget
              ((ISlateAttributeContainer *)&this->field_0x20,pSVar1);
  }
  FSlotBase::~FSlotBase((FSlotBase *)this);
  return;
}

// Construct @ 1427ee490

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TWidgetSlotWithAttributeSupport<SPrioritizedWrapBox::FSlot>::Construct
          (TWidgetSlotWithAttributeSupport<SPrioritizedWrapBox::FSlot> *this,FChildren *param_1,
          FSlotArguments *param_2)

{
  SWidget *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  FName local_res10;
  FName local_res18;
  FString local_48;
  FString local_38;
  undefined8 local_28;
  TReferenceControllerBase<1> *pTStack_20;
  
  cVar4 = (**(code **)(param_1->_padding_ + 0x28))(param_1);
  if (cVar4 == '\0') {
    if (param_1->Debug_DestroyedTag != 0xdc) {
      UE::Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)
                 &`protected:_void___cdecl_FChildren::Debug_TestDestroyTag(void)const___ptr64'::__l3
                  ::LOG_Static,(FLogCategoryBase *)&LogSlate);
    }
    local_res10 = param_1->Name;
    ::FName::ToString(&local_res10,&local_48);
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("SlotOwner.SupportSlotWithSlateAttribute()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\WidgetSlotWithAttributeSupport.h"
                       ,0x30,
                       L"The FChildren \'%s\' does not support SlateSlotAttribute but use a Slot type that does."
                      );
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (param_1->Debug_DestroyedTag != 0xdc) {
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_FChildren::Debug_TestDestroyTag(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogSlate);
  }
  bVar5 = ::FName::IsWithinBounds((FNameEntryId)(param_1->Name).ComparisonIndex.Value);
  if (!bVar5) {
    if (param_1->Debug_DestroyedTag != 0xdc) {
      UE::Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)
                 &`protected:_void___cdecl_FChildren::Debug_TestDestroyTag(void)const___ptr64'::__l3
                  ::LOG_Static,(FLogCategoryBase *)&LogSlate);
    }
    local_res18 = param_1->Name;
    ::FName::ToString(&local_res18,&local_38);
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("SlotOwner.GetName().IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\WidgetSlotWithAttributeSupport.h"
                       ,0x31,L"The FChildren \'%s\' does not have a valid name.");
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pSVar1 = (param_2->ChildWidget).Object;
  if (pSVar1 != (SWidget *)0x0) {
    pTVar2 = (param_2->ChildWidget).SharedReferenceCount.ReferenceController;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    FSlotBase::DetatchParentFromContent((FSlotBase *)this);
    local_28 = *(undefined8 *)&this->field_0x10;
    pTStack_20 = *(TReferenceControllerBase<1> **)&this->field_0x18;
    *(SWidget **)&this->field_0x10 = pSVar1;
    *(TReferenceControllerBase<1> **)&this->field_0x18 = pTVar2;
    FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)this);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  }
  FSlotBase::SetOwner((FSlotBase *)this,param_1);
  return;
}

// GetContainerName @ 14280edc0

/* WARNING: Enum "Type": Some values do not have unique names */

FName __thiscall
TWidgetSlotWithAttributeSupport<SPrioritizedWrapBox::FSlot>::GetContainerName
          (TWidgetSlotWithAttributeSupport<SPrioritizedWrapBox::FSlot> *this)

{
  longlong lVar1;
  FName in_RDX;
  
  lVar1 = *(longlong *)&this[-1].field_0x10;
  if (*(char *)(lVar1 + 0x19) != -0x24) {
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_FChildren::Debug_TestDestroyTag(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogSlate);
  }
  *(undefined8 *)in_RDX = *(undefined8 *)(lVar1 + 0x10);
  return in_RDX;
}

// GetContainerSortOrder @ 14280ee10

uint __thiscall
TWidgetSlotWithAttributeSupport<SPrioritizedWrapBox::FSlot>::GetContainerSortOrder
          (TWidgetSlotWithAttributeSupport<SPrioritizedWrapBox::FSlot> *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  
  if ((*(longlong *)&this[-1].field_0x10 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("FSlotBase::GetOwner()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\WidgetSlotWithAttributeSupport.h"
                         ,0x53,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  iVar4 = (**(code **)(**(longlong **)&this[-1].field_0x10 + 0x18))();
  uVar3 = 0;
  if (0 < iVar4) {
    do {
      puVar5 = (undefined1 *)
               (**(code **)(**(longlong **)&this[-1].field_0x10 + 0x20))
                         (*(longlong **)&this[-1].field_0x10,uVar3);
      if (puVar5 == &this[-1].field_0x8) {
        return uVar3;
      }
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < iVar4);
  }
  return 0xffffffff;
}

// GetContainerWidget @ 14280eeb0

SWidget * __thiscall
TWidgetSlotWithAttributeSupport<SPrioritizedWrapBox::FSlot>::GetContainerWidget
          (TWidgetSlotWithAttributeSupport<SPrioritizedWrapBox::FSlot> *this)

{
  code *pcVar1;
  bool bVar2;
  SWidget *pSVar3;
  
  pSVar3 = FSlotBase::GetOwnerWidget((FSlotBase *)&this[-1].field_0x8);
  if ((pSVar3 == (SWidget *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("WidgetPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\WidgetSlotWithAttributeSupport.h"
                         ,0x48,
                         L"Slot Attributes has to be registered after the FSlot is constructed."),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SWidget *)(*pcVar1)();
    return pSVar3;
  }
  return pSVar3;
}

// ~TWidgetSlotWithAttributeSupport<FBasicLayoutWidgetSlot> @ 1428bf630

void __thiscall
TWidgetSlotWithAttributeSupport<FBasicLayoutWidgetSlot>::
~TWidgetSlotWithAttributeSupport<FBasicLayoutWidgetSlot>
          (TWidgetSlotWithAttributeSupport<FBasicLayoutWidgetSlot> *this)

{
  SWidget *pSVar1;
  
  *(undefined ***)this = &_vftable__for__TSlotBase<FBasicLayoutWidgetSlot>__;
  *(undefined ***)&this->field_0x20 =
       &_vftable__for__SlateAttributePrivate__ISlateAttributeContainer__;
  pSVar1 = FSlotBase::GetOwnerWidget((FSlotBase *)this);
  if (pSVar1 != (SWidget *)0x0) {
    SlateAttributePrivate::ISlateAttributeContainer::RemoveContainerWidget
              ((ISlateAttributeContainer *)&this->field_0x20,pSVar1);
  }
  FSlotBase::~FSlotBase((FSlotBase *)this);
  return;
}

// ~TWidgetSlotWithAttributeSupport<SGridPanel::FSlot> @ 1428bf680

void __thiscall
TWidgetSlotWithAttributeSupport<SGridPanel::FSlot>::
~TWidgetSlotWithAttributeSupport<SGridPanel::FSlot>
          (TWidgetSlotWithAttributeSupport<SGridPanel::FSlot> *this)

{
  SWidget *pSVar1;
  
  *(undefined ***)this = &_vftable__for__TSlotBase<SGridPanel::FSlot>__;
  *(undefined ***)&this->field_0x20 =
       &_vftable__for__SlateAttributePrivate__ISlateAttributeContainer__;
  pSVar1 = FSlotBase::GetOwnerWidget((FSlotBase *)this);
  if (pSVar1 != (SWidget *)0x0) {
    SlateAttributePrivate::ISlateAttributeContainer::RemoveContainerWidget
              ((ISlateAttributeContainer *)&this->field_0x20,pSVar1);
  }
  FSlotBase::~FSlotBase((FSlotBase *)this);
  return;
}

// ~TWidgetSlotWithAttributeSupport<SResponsiveGridPanel::FSlot> @ 1428bf6d0

void __thiscall
TWidgetSlotWithAttributeSupport<SResponsiveGridPanel::FSlot>::
~TWidgetSlotWithAttributeSupport<SResponsiveGridPanel::FSlot>
          (TWidgetSlotWithAttributeSupport<SResponsiveGridPanel::FSlot> *this)

{
  SWidget *pSVar1;
  
  *(undefined ***)this = &_vftable__for__TSlotBase<SResponsiveGridPanel::FSlot>__;
  *(undefined ***)&this->field_0x20 =
       &_vftable__for__SlateAttributePrivate__ISlateAttributeContainer__;
  pSVar1 = FSlotBase::GetOwnerWidget((FSlotBase *)this);
  if (pSVar1 != (SWidget *)0x0) {
    SlateAttributePrivate::ISlateAttributeContainer::RemoveContainerWidget
              ((ISlateAttributeContainer *)&this->field_0x20,pSVar1);
  }
  FSlotBase::~FSlotBase((FSlotBase *)this);
  return;
}

// ~TWidgetSlotWithAttributeSupport<SScrollBox::FSlot> @ 1428bf720

void __thiscall
TWidgetSlotWithAttributeSupport<SScrollBox::FSlot>::
~TWidgetSlotWithAttributeSupport<SScrollBox::FSlot>
          (TWidgetSlotWithAttributeSupport<SScrollBox::FSlot> *this)

{
  SWidget *pSVar1;
  
  *(undefined ***)this = &_vftable__for__TSlotBase<SScrollBox::FSlot>__;
  *(undefined ***)&this->field_0x20 =
       &_vftable__for__SlateAttributePrivate__ISlateAttributeContainer__;
  pSVar1 = FSlotBase::GetOwnerWidget((FSlotBase *)this);
  if (pSVar1 != (SWidget *)0x0) {
    SlateAttributePrivate::ISlateAttributeContainer::RemoveContainerWidget
              ((ISlateAttributeContainer *)&this->field_0x20,pSVar1);
  }
  FSlotBase::~FSlotBase((FSlotBase *)this);
  return;
}

// Construct @ 1428f7a10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TWidgetSlotWithAttributeSupport<FBasicLayoutWidgetSlot>::Construct
          (TWidgetSlotWithAttributeSupport<FBasicLayoutWidgetSlot> *this,FChildren *param_1,
          FSlotArguments *param_2)

{
  SWidget *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  FName local_res10;
  FName local_res18;
  FString local_48;
  FString local_38;
  undefined8 local_28;
  TReferenceControllerBase<1> *pTStack_20;
  
  cVar4 = (**(code **)(param_1->_padding_ + 0x28))(param_1);
  if (cVar4 == '\0') {
    if (param_1->Debug_DestroyedTag != 0xdc) {
      UE::Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)
                 &`protected:_void___cdecl_FChildren::Debug_TestDestroyTag(void)const___ptr64'::__l3
                  ::LOG_Static,(FLogCategoryBase *)&LogSlate);
    }
    local_res10 = param_1->Name;
    ::FName::ToString(&local_res10,&local_48);
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("SlotOwner.SupportSlotWithSlateAttribute()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\WidgetSlotWithAttributeSupport.h"
                       ,0x30,
                       L"The FChildren \'%s\' does not support SlateSlotAttribute but use a Slot type that does."
                      );
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (param_1->Debug_DestroyedTag != 0xdc) {
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_FChildren::Debug_TestDestroyTag(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogSlate);
  }
  bVar5 = ::FName::IsWithinBounds((FNameEntryId)(param_1->Name).ComparisonIndex.Value);
  if (!bVar5) {
    if (param_1->Debug_DestroyedTag != 0xdc) {
      UE::Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)
                 &`protected:_void___cdecl_FChildren::Debug_TestDestroyTag(void)const___ptr64'::__l3
                  ::LOG_Static,(FLogCategoryBase *)&LogSlate);
    }
    local_res18 = param_1->Name;
    ::FName::ToString(&local_res18,&local_38);
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("SlotOwner.GetName().IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\WidgetSlotWithAttributeSupport.h"
                       ,0x31,L"The FChildren \'%s\' does not have a valid name.");
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pSVar1 = (param_2->ChildWidget).Object;
  if (pSVar1 != (SWidget *)0x0) {
    pTVar2 = (param_2->ChildWidget).SharedReferenceCount.ReferenceController;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    FSlotBase::DetatchParentFromContent((FSlotBase *)this);
    local_28 = *(undefined8 *)&this->field_0x10;
    pTStack_20 = *(TReferenceControllerBase<1> **)&this->field_0x18;
    *(SWidget **)&this->field_0x10 = pSVar1;
    *(TReferenceControllerBase<1> **)&this->field_0x18 = pTVar2;
    FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)this);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  }
  FSlotBase::SetOwner((FSlotBase *)this,param_1);
  return;
}

// Construct @ 1428f7be0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TWidgetSlotWithAttributeSupport<SGridPanel::FSlot>::Construct
          (TWidgetSlotWithAttributeSupport<SGridPanel::FSlot> *this,FChildren *param_1,
          FSlotArguments *param_2)

{
  SWidget *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  FName local_res10;
  FName local_res18;
  FString local_48;
  FString local_38;
  undefined8 local_28;
  TReferenceControllerBase<1> *pTStack_20;
  
  cVar4 = (**(code **)(param_1->_padding_ + 0x28))(param_1);
  if (cVar4 == '\0') {
    if (param_1->Debug_DestroyedTag != 0xdc) {
      UE::Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)
                 &`protected:_void___cdecl_FChildren::Debug_TestDestroyTag(void)const___ptr64'::__l3
                  ::LOG_Static,(FLogCategoryBase *)&LogSlate);
    }
    local_res10 = param_1->Name;
    ::FName::ToString(&local_res10,&local_48);
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("SlotOwner.SupportSlotWithSlateAttribute()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\WidgetSlotWithAttributeSupport.h"
                       ,0x30,
                       L"The FChildren \'%s\' does not support SlateSlotAttribute but use a Slot type that does."
                      );
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (param_1->Debug_DestroyedTag != 0xdc) {
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_FChildren::Debug_TestDestroyTag(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogSlate);
  }
  bVar5 = ::FName::IsWithinBounds((FNameEntryId)(param_1->Name).ComparisonIndex.Value);
  if (!bVar5) {
    if (param_1->Debug_DestroyedTag != 0xdc) {
      UE::Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)
                 &`protected:_void___cdecl_FChildren::Debug_TestDestroyTag(void)const___ptr64'::__l3
                  ::LOG_Static,(FLogCategoryBase *)&LogSlate);
    }
    local_res18 = param_1->Name;
    ::FName::ToString(&local_res18,&local_38);
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("SlotOwner.GetName().IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\WidgetSlotWithAttributeSupport.h"
                       ,0x31,L"The FChildren \'%s\' does not have a valid name.");
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pSVar1 = (param_2->ChildWidget).Object;
  if (pSVar1 != (SWidget *)0x0) {
    pTVar2 = (param_2->ChildWidget).SharedReferenceCount.ReferenceController;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    FSlotBase::DetatchParentFromContent((FSlotBase *)this);
    local_28 = *(undefined8 *)&this->field_0x10;
    pTStack_20 = *(TReferenceControllerBase<1> **)&this->field_0x18;
    *(SWidget **)&this->field_0x10 = pSVar1;
    *(TReferenceControllerBase<1> **)&this->field_0x18 = pTVar2;
    FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)this);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  }
  FSlotBase::SetOwner((FSlotBase *)this,param_1);
  return;
}

// Construct @ 1428f7db0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TWidgetSlotWithAttributeSupport<SResponsiveGridPanel::FSlot>::Construct
          (TWidgetSlotWithAttributeSupport<SResponsiveGridPanel::FSlot> *this,FChildren *param_1,
          FSlotArguments *param_2)

{
  SWidget *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  FName local_res10;
  FName local_res18;
  FString local_48;
  FString local_38;
  undefined8 local_28;
  TReferenceControllerBase<1> *pTStack_20;
  
  cVar4 = (**(code **)(param_1->_padding_ + 0x28))(param_1);
  if (cVar4 == '\0') {
    if (param_1->Debug_DestroyedTag != 0xdc) {
      UE::Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)
                 &`protected:_void___cdecl_FChildren::Debug_TestDestroyTag(void)const___ptr64'::__l3
                  ::LOG_Static,(FLogCategoryBase *)&LogSlate);
    }
    local_res10 = param_1->Name;
    ::FName::ToString(&local_res10,&local_48);
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("SlotOwner.SupportSlotWithSlateAttribute()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\WidgetSlotWithAttributeSupport.h"
                       ,0x30,
                       L"The FChildren \'%s\' does not support SlateSlotAttribute but use a Slot type that does."
                      );
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (param_1->Debug_DestroyedTag != 0xdc) {
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_FChildren::Debug_TestDestroyTag(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogSlate);
  }
  bVar5 = ::FName::IsWithinBounds((FNameEntryId)(param_1->Name).ComparisonIndex.Value);
  if (!bVar5) {
    if (param_1->Debug_DestroyedTag != 0xdc) {
      UE::Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)
                 &`protected:_void___cdecl_FChildren::Debug_TestDestroyTag(void)const___ptr64'::__l3
                  ::LOG_Static,(FLogCategoryBase *)&LogSlate);
    }
    local_res18 = param_1->Name;
    ::FName::ToString(&local_res18,&local_38);
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("SlotOwner.GetName().IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\WidgetSlotWithAttributeSupport.h"
                       ,0x31,L"The FChildren \'%s\' does not have a valid name.");
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pSVar1 = (param_2->ChildWidget).Object;
  if (pSVar1 != (SWidget *)0x0) {
    pTVar2 = (param_2->ChildWidget).SharedReferenceCount.ReferenceController;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    FSlotBase::DetatchParentFromContent((FSlotBase *)this);
    local_28 = *(undefined8 *)&this->field_0x10;
    pTStack_20 = *(TReferenceControllerBase<1> **)&this->field_0x18;
    *(SWidget **)&this->field_0x10 = pSVar1;
    *(TReferenceControllerBase<1> **)&this->field_0x18 = pTVar2;
    FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)this);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  }
  FSlotBase::SetOwner((FSlotBase *)this,param_1);
  return;
}

// Construct @ 1428f7f80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TWidgetSlotWithAttributeSupport<SScrollBox::FSlot>::Construct
          (TWidgetSlotWithAttributeSupport<SScrollBox::FSlot> *this,FChildren *param_1,
          FSlotArguments *param_2)

{
  SWidget *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  FName local_res10;
  FName local_res18;
  FString local_48;
  FString local_38;
  undefined8 local_28;
  TReferenceControllerBase<1> *pTStack_20;
  
  cVar4 = (**(code **)(param_1->_padding_ + 0x28))(param_1);
  if (cVar4 == '\0') {
    if (param_1->Debug_DestroyedTag != 0xdc) {
      UE::Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)
                 &`protected:_void___cdecl_FChildren::Debug_TestDestroyTag(void)const___ptr64'::__l3
                  ::LOG_Static,(FLogCategoryBase *)&LogSlate);
    }
    local_res10 = param_1->Name;
    ::FName::ToString(&local_res10,&local_48);
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("SlotOwner.SupportSlotWithSlateAttribute()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\WidgetSlotWithAttributeSupport.h"
                       ,0x30,
                       L"The FChildren \'%s\' does not support SlateSlotAttribute but use a Slot type that does."
                      );
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (param_1->Debug_DestroyedTag != 0xdc) {
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_FChildren::Debug_TestDestroyTag(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogSlate);
  }
  bVar5 = ::FName::IsWithinBounds((FNameEntryId)(param_1->Name).ComparisonIndex.Value);
  if (!bVar5) {
    if (param_1->Debug_DestroyedTag != 0xdc) {
      UE::Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)
                 &`protected:_void___cdecl_FChildren::Debug_TestDestroyTag(void)const___ptr64'::__l3
                  ::LOG_Static,(FLogCategoryBase *)&LogSlate);
    }
    local_res18 = param_1->Name;
    ::FName::ToString(&local_res18,&local_38);
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("SlotOwner.GetName().IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\WidgetSlotWithAttributeSupport.h"
                       ,0x31,L"The FChildren \'%s\' does not have a valid name.");
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pSVar1 = (param_2->ChildWidget).Object;
  if (pSVar1 != (SWidget *)0x0) {
    pTVar2 = (param_2->ChildWidget).SharedReferenceCount.ReferenceController;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    FSlotBase::DetatchParentFromContent((FSlotBase *)this);
    local_28 = *(undefined8 *)&this->field_0x10;
    pTStack_20 = *(TReferenceControllerBase<1> **)&this->field_0x18;
    *(SWidget **)&this->field_0x10 = pSVar1;
    *(TReferenceControllerBase<1> **)&this->field_0x18 = pTVar2;
    FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)this);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  }
  FSlotBase::SetOwner((FSlotBase *)this,param_1);
  return;
}

// GetContainerName @ 14293e610

/* WARNING: Enum "Type": Some values do not have unique names */

FName __thiscall
TWidgetSlotWithAttributeSupport<FBasicLayoutWidgetSlot>::GetContainerName
          (TWidgetSlotWithAttributeSupport<FBasicLayoutWidgetSlot> *this)

{
  longlong lVar1;
  FName in_RDX;
  
  lVar1 = *(longlong *)&this[-1].field_0x10;
  if (*(char *)(lVar1 + 0x19) != -0x24) {
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_FChildren::Debug_TestDestroyTag(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogSlate);
  }
  *(undefined8 *)in_RDX = *(undefined8 *)(lVar1 + 0x10);
  return in_RDX;
}

// GetContainerName @ 14293e660

/* WARNING: Enum "Type": Some values do not have unique names */

FName __thiscall
TWidgetSlotWithAttributeSupport<SGridPanel::FSlot>::GetContainerName
          (TWidgetSlotWithAttributeSupport<SGridPanel::FSlot> *this)

{
  longlong lVar1;
  FName in_RDX;
  
  lVar1 = *(longlong *)&this[-1].field_0x10;
  if (*(char *)(lVar1 + 0x19) != -0x24) {
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_FChildren::Debug_TestDestroyTag(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogSlate);
  }
  *(undefined8 *)in_RDX = *(undefined8 *)(lVar1 + 0x10);
  return in_RDX;
}

// GetContainerName @ 14293e6b0

/* WARNING: Enum "Type": Some values do not have unique names */

FName __thiscall
TWidgetSlotWithAttributeSupport<SResponsiveGridPanel::FSlot>::GetContainerName
          (TWidgetSlotWithAttributeSupport<SResponsiveGridPanel::FSlot> *this)

{
  longlong lVar1;
  FName in_RDX;
  
  lVar1 = *(longlong *)&this[-1].field_0x10;
  if (*(char *)(lVar1 + 0x19) != -0x24) {
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_FChildren::Debug_TestDestroyTag(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogSlate);
  }
  *(undefined8 *)in_RDX = *(undefined8 *)(lVar1 + 0x10);
  return in_RDX;
}

// GetContainerName @ 14293e700

/* WARNING: Enum "Type": Some values do not have unique names */

FName __thiscall
TWidgetSlotWithAttributeSupport<SScrollBox::FSlot>::GetContainerName
          (TWidgetSlotWithAttributeSupport<SScrollBox::FSlot> *this)

{
  longlong lVar1;
  FName in_RDX;
  
  lVar1 = *(longlong *)&this[-1].field_0x10;
  if (*(char *)(lVar1 + 0x19) != -0x24) {
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_FChildren::Debug_TestDestroyTag(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogSlate);
  }
  *(undefined8 *)in_RDX = *(undefined8 *)(lVar1 + 0x10);
  return in_RDX;
}

// GetContainerSortOrder @ 14293e750

uint __thiscall
TWidgetSlotWithAttributeSupport<FBasicLayoutWidgetSlot>::GetContainerSortOrder
          (TWidgetSlotWithAttributeSupport<FBasicLayoutWidgetSlot> *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  
  if ((*(longlong *)&this[-1].field_0x10 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("FSlotBase::GetOwner()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\WidgetSlotWithAttributeSupport.h"
                         ,0x53,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  iVar4 = (**(code **)(**(longlong **)&this[-1].field_0x10 + 0x18))();
  uVar3 = 0;
  if (0 < iVar4) {
    do {
      puVar5 = (undefined1 *)
               (**(code **)(**(longlong **)&this[-1].field_0x10 + 0x20))
                         (*(longlong **)&this[-1].field_0x10,uVar3);
      if (puVar5 == &this[-1].field_0x8) {
        return uVar3;
      }
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < iVar4);
  }
  return 0xffffffff;
}

// GetContainerSortOrder @ 14293e7f0

uint __thiscall
TWidgetSlotWithAttributeSupport<SGridPanel::FSlot>::GetContainerSortOrder
          (TWidgetSlotWithAttributeSupport<SGridPanel::FSlot> *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  
  if ((*(longlong *)&this[-1].field_0x10 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("FSlotBase::GetOwner()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\WidgetSlotWithAttributeSupport.h"
                         ,0x53,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  iVar4 = (**(code **)(**(longlong **)&this[-1].field_0x10 + 0x18))();
  uVar3 = 0;
  if (0 < iVar4) {
    do {
      puVar5 = (undefined1 *)
               (**(code **)(**(longlong **)&this[-1].field_0x10 + 0x20))
                         (*(longlong **)&this[-1].field_0x10,uVar3);
      if (puVar5 == &this[-1].field_0x8) {
        return uVar3;
      }
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < iVar4);
  }
  return 0xffffffff;
}

// GetContainerSortOrder @ 14293e890

uint __thiscall
TWidgetSlotWithAttributeSupport<SResponsiveGridPanel::FSlot>::GetContainerSortOrder
          (TWidgetSlotWithAttributeSupport<SResponsiveGridPanel::FSlot> *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  
  if ((*(longlong *)&this[-1].field_0x10 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("FSlotBase::GetOwner()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\WidgetSlotWithAttributeSupport.h"
                         ,0x53,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  iVar4 = (**(code **)(**(longlong **)&this[-1].field_0x10 + 0x18))();
  uVar3 = 0;
  if (0 < iVar4) {
    do {
      puVar5 = (undefined1 *)
               (**(code **)(**(longlong **)&this[-1].field_0x10 + 0x20))
                         (*(longlong **)&this[-1].field_0x10,uVar3);
      if (puVar5 == &this[-1].field_0x8) {
        return uVar3;
      }
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < iVar4);
  }
  return 0xffffffff;
}

// GetContainerSortOrder @ 14293e930

uint __thiscall
TWidgetSlotWithAttributeSupport<SScrollBox::FSlot>::GetContainerSortOrder
          (TWidgetSlotWithAttributeSupport<SScrollBox::FSlot> *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  
  if ((*(longlong *)&this[-1].field_0x10 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("FSlotBase::GetOwner()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\WidgetSlotWithAttributeSupport.h"
                         ,0x53,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  iVar4 = (**(code **)(**(longlong **)&this[-1].field_0x10 + 0x18))();
  uVar3 = 0;
  if (0 < iVar4) {
    do {
      puVar5 = (undefined1 *)
               (**(code **)(**(longlong **)&this[-1].field_0x10 + 0x20))
                         (*(longlong **)&this[-1].field_0x10,uVar3);
      if (puVar5 == &this[-1].field_0x8) {
        return uVar3;
      }
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < iVar4);
  }
  return 0xffffffff;
}

// GetContainerWidget @ 14293e9d0

SWidget * __thiscall
TWidgetSlotWithAttributeSupport<FBasicLayoutWidgetSlot>::GetContainerWidget
          (TWidgetSlotWithAttributeSupport<FBasicLayoutWidgetSlot> *this)

{
  code *pcVar1;
  bool bVar2;
  SWidget *pSVar3;
  
  pSVar3 = FSlotBase::GetOwnerWidget((FSlotBase *)&this[-1].field_0x8);
  if ((pSVar3 == (SWidget *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("WidgetPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\WidgetSlotWithAttributeSupport.h"
                         ,0x48,
                         L"Slot Attributes has to be registered after the FSlot is constructed."),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SWidget *)(*pcVar1)();
    return pSVar3;
  }
  return pSVar3;
}

// GetContainerWidget @ 14293ea20

SWidget * __thiscall
TWidgetSlotWithAttributeSupport<SGridPanel::FSlot>::GetContainerWidget
          (TWidgetSlotWithAttributeSupport<SGridPanel::FSlot> *this)

{
  code *pcVar1;
  bool bVar2;
  SWidget *pSVar3;
  
  pSVar3 = FSlotBase::GetOwnerWidget((FSlotBase *)&this[-1].field_0x8);
  if ((pSVar3 == (SWidget *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("WidgetPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\WidgetSlotWithAttributeSupport.h"
                         ,0x48,
                         L"Slot Attributes has to be registered after the FSlot is constructed."),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SWidget *)(*pcVar1)();
    return pSVar3;
  }
  return pSVar3;
}

// GetContainerWidget @ 14293ea70

SWidget * __thiscall
TWidgetSlotWithAttributeSupport<SResponsiveGridPanel::FSlot>::GetContainerWidget
          (TWidgetSlotWithAttributeSupport<SResponsiveGridPanel::FSlot> *this)

{
  code *pcVar1;
  bool bVar2;
  SWidget *pSVar3;
  
  pSVar3 = FSlotBase::GetOwnerWidget((FSlotBase *)&this[-1].field_0x8);
  if ((pSVar3 == (SWidget *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("WidgetPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\WidgetSlotWithAttributeSupport.h"
                         ,0x48,
                         L"Slot Attributes has to be registered after the FSlot is constructed."),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SWidget *)(*pcVar1)();
    return pSVar3;
  }
  return pSVar3;
}

// GetContainerWidget @ 14293eac0

SWidget * __thiscall
TWidgetSlotWithAttributeSupport<SScrollBox::FSlot>::GetContainerWidget
          (TWidgetSlotWithAttributeSupport<SScrollBox::FSlot> *this)

{
  code *pcVar1;
  bool bVar2;
  SWidget *pSVar3;
  
  pSVar3 = FSlotBase::GetOwnerWidget((FSlotBase *)&this[-1].field_0x8);
  if ((pSVar3 == (SWidget *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("WidgetPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\WidgetSlotWithAttributeSupport.h"
                         ,0x48,
                         L"Slot Attributes has to be registered after the FSlot is constructed."),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SWidget *)(*pcVar1)();
    return pSVar3;
  }
  return pSVar3;
}

// ~TWidgetSlotWithAttributeSupport<SCanvas::FSlot> @ 1429be230

void __thiscall
TWidgetSlotWithAttributeSupport<SCanvas::FSlot>::~TWidgetSlotWithAttributeSupport<SCanvas::FSlot>
          (TWidgetSlotWithAttributeSupport<SCanvas::FSlot> *this)

{
  SWidget *pSVar1;
  
  *(undefined ***)this = &_vftable__for__TSlotBase<SCanvas::FSlot>__;
  *(undefined ***)&this->field_0x20 =
       &_vftable__for__SlateAttributePrivate__ISlateAttributeContainer__;
  pSVar1 = FSlotBase::GetOwnerWidget((FSlotBase *)this);
  if (pSVar1 != (SWidget *)0x0) {
    SlateAttributePrivate::ISlateAttributeContainer::RemoveContainerWidget
              ((ISlateAttributeContainer *)&this->field_0x20,pSVar1);
  }
  FSlotBase::~FSlotBase((FSlotBase *)this);
  return;
}

// ~TWidgetSlotWithAttributeSupport<SWrapBox::FSlot> @ 1429be280

void __thiscall
TWidgetSlotWithAttributeSupport<SWrapBox::FSlot>::~TWidgetSlotWithAttributeSupport<SWrapBox::FSlot>
          (TWidgetSlotWithAttributeSupport<SWrapBox::FSlot> *this)

{
  SWidget *pSVar1;
  
  *(undefined ***)this = &_vftable__for__TSlotBase<SWrapBox::FSlot>__;
  *(undefined ***)&this->field_0x20 =
       &_vftable__for__SlateAttributePrivate__ISlateAttributeContainer__;
  pSVar1 = FSlotBase::GetOwnerWidget((FSlotBase *)this);
  if (pSVar1 != (SWidget *)0x0) {
    SlateAttributePrivate::ISlateAttributeContainer::RemoveContainerWidget
              ((ISlateAttributeContainer *)&this->field_0x20,pSVar1);
  }
  FSlotBase::~FSlotBase((FSlotBase *)this);
  return;
}

// Construct @ 1429d0350

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TWidgetSlotWithAttributeSupport<SCanvas::FSlot>::Construct
          (TWidgetSlotWithAttributeSupport<SCanvas::FSlot> *this,FChildren *param_1,
          FSlotArguments *param_2)

{
  SWidget *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  FName local_res10;
  FName local_res18;
  FString local_48;
  FString local_38;
  undefined8 local_28;
  TReferenceControllerBase<1> *pTStack_20;
  
  cVar4 = (**(code **)(param_1->_padding_ + 0x28))(param_1);
  if (cVar4 == '\0') {
    if (param_1->Debug_DestroyedTag != 0xdc) {
      UE::Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)
                 &`protected:_void___cdecl_FChildren::Debug_TestDestroyTag(void)const___ptr64'::__l3
                  ::LOG_Static,(FLogCategoryBase *)&LogSlate);
    }
    local_res10 = param_1->Name;
    ::FName::ToString(&local_res10,&local_48);
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("SlotOwner.SupportSlotWithSlateAttribute()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\WidgetSlotWithAttributeSupport.h"
                       ,0x30,
                       L"The FChildren \'%s\' does not support SlateSlotAttribute but use a Slot type that does."
                      );
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (param_1->Debug_DestroyedTag != 0xdc) {
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_FChildren::Debug_TestDestroyTag(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogSlate);
  }
  bVar5 = ::FName::IsWithinBounds((FNameEntryId)(param_1->Name).ComparisonIndex.Value);
  if (!bVar5) {
    if (param_1->Debug_DestroyedTag != 0xdc) {
      UE::Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)
                 &`protected:_void___cdecl_FChildren::Debug_TestDestroyTag(void)const___ptr64'::__l3
                  ::LOG_Static,(FLogCategoryBase *)&LogSlate);
    }
    local_res18 = param_1->Name;
    ::FName::ToString(&local_res18,&local_38);
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("SlotOwner.GetName().IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\WidgetSlotWithAttributeSupport.h"
                       ,0x31,L"The FChildren \'%s\' does not have a valid name.");
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pSVar1 = (param_2->ChildWidget).Object;
  if (pSVar1 != (SWidget *)0x0) {
    pTVar2 = (param_2->ChildWidget).SharedReferenceCount.ReferenceController;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    FSlotBase::DetatchParentFromContent((FSlotBase *)this);
    local_28 = *(undefined8 *)&this->field_0x10;
    pTStack_20 = *(TReferenceControllerBase<1> **)&this->field_0x18;
    *(SWidget **)&this->field_0x10 = pSVar1;
    *(TReferenceControllerBase<1> **)&this->field_0x18 = pTVar2;
    FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)this);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  }
  FSlotBase::SetOwner((FSlotBase *)this,param_1);
  return;
}

// Construct @ 1429d0520

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TWidgetSlotWithAttributeSupport<SWrapBox::FSlot>::Construct
          (TWidgetSlotWithAttributeSupport<SWrapBox::FSlot> *this,FChildren *param_1,
          FSlotArguments *param_2)

{
  SWidget *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  FName local_res10;
  FName local_res18;
  FString local_48;
  FString local_38;
  undefined8 local_28;
  TReferenceControllerBase<1> *pTStack_20;
  
  cVar4 = (**(code **)(param_1->_padding_ + 0x28))(param_1);
  if (cVar4 == '\0') {
    if (param_1->Debug_DestroyedTag != 0xdc) {
      UE::Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)
                 &`protected:_void___cdecl_FChildren::Debug_TestDestroyTag(void)const___ptr64'::__l3
                  ::LOG_Static,(FLogCategoryBase *)&LogSlate);
    }
    local_res10 = param_1->Name;
    ::FName::ToString(&local_res10,&local_48);
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("SlotOwner.SupportSlotWithSlateAttribute()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\WidgetSlotWithAttributeSupport.h"
                       ,0x30,
                       L"The FChildren \'%s\' does not support SlateSlotAttribute but use a Slot type that does."
                      );
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (param_1->Debug_DestroyedTag != 0xdc) {
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_FChildren::Debug_TestDestroyTag(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogSlate);
  }
  bVar5 = ::FName::IsWithinBounds((FNameEntryId)(param_1->Name).ComparisonIndex.Value);
  if (!bVar5) {
    if (param_1->Debug_DestroyedTag != 0xdc) {
      UE::Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)
                 &`protected:_void___cdecl_FChildren::Debug_TestDestroyTag(void)const___ptr64'::__l3
                  ::LOG_Static,(FLogCategoryBase *)&LogSlate);
    }
    local_res18 = param_1->Name;
    ::FName::ToString(&local_res18,&local_38);
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("SlotOwner.GetName().IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\WidgetSlotWithAttributeSupport.h"
                       ,0x31,L"The FChildren \'%s\' does not have a valid name.");
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pSVar1 = (param_2->ChildWidget).Object;
  if (pSVar1 != (SWidget *)0x0) {
    pTVar2 = (param_2->ChildWidget).SharedReferenceCount.ReferenceController;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    FSlotBase::DetatchParentFromContent((FSlotBase *)this);
    local_28 = *(undefined8 *)&this->field_0x10;
    pTStack_20 = *(TReferenceControllerBase<1> **)&this->field_0x18;
    *(SWidget **)&this->field_0x10 = pSVar1;
    *(TReferenceControllerBase<1> **)&this->field_0x18 = pTVar2;
    FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)this);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  }
  FSlotBase::SetOwner((FSlotBase *)this,param_1);
  return;
}

// GetContainerName @ 1429eaae0

/* WARNING: Enum "Type": Some values do not have unique names */

FName __thiscall
TWidgetSlotWithAttributeSupport<SCanvas::FSlot>::GetContainerName
          (TWidgetSlotWithAttributeSupport<SCanvas::FSlot> *this)

{
  longlong lVar1;
  FName in_RDX;
  
  lVar1 = *(longlong *)&this[-1].field_0x10;
  if (*(char *)(lVar1 + 0x19) != -0x24) {
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_FChildren::Debug_TestDestroyTag(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogSlate);
  }
  *(undefined8 *)in_RDX = *(undefined8 *)(lVar1 + 0x10);
  return in_RDX;
}

// GetContainerName @ 1429eab30

/* WARNING: Enum "Type": Some values do not have unique names */

FName __thiscall
TWidgetSlotWithAttributeSupport<SWrapBox::FSlot>::GetContainerName
          (TWidgetSlotWithAttributeSupport<SWrapBox::FSlot> *this)

{
  longlong lVar1;
  FName in_RDX;
  
  lVar1 = *(longlong *)&this[-1].field_0x10;
  if (*(char *)(lVar1 + 0x19) != -0x24) {
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_FChildren::Debug_TestDestroyTag(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogSlate);
  }
  *(undefined8 *)in_RDX = *(undefined8 *)(lVar1 + 0x10);
  return in_RDX;
}

// GetContainerSortOrder @ 1429eab80

uint __thiscall
TWidgetSlotWithAttributeSupport<SCanvas::FSlot>::GetContainerSortOrder
          (TWidgetSlotWithAttributeSupport<SCanvas::FSlot> *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  
  if ((*(longlong *)&this[-1].field_0x10 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("FSlotBase::GetOwner()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\WidgetSlotWithAttributeSupport.h"
                         ,0x53,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  iVar4 = (**(code **)(**(longlong **)&this[-1].field_0x10 + 0x18))();
  uVar3 = 0;
  if (0 < iVar4) {
    do {
      puVar5 = (undefined1 *)
               (**(code **)(**(longlong **)&this[-1].field_0x10 + 0x20))
                         (*(longlong **)&this[-1].field_0x10,uVar3);
      if (puVar5 == &this[-1].field_0x8) {
        return uVar3;
      }
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < iVar4);
  }
  return 0xffffffff;
}

// GetContainerSortOrder @ 1429eac20

uint __thiscall
TWidgetSlotWithAttributeSupport<SWrapBox::FSlot>::GetContainerSortOrder
          (TWidgetSlotWithAttributeSupport<SWrapBox::FSlot> *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  
  if ((*(longlong *)&this[-1].field_0x10 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("FSlotBase::GetOwner()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\WidgetSlotWithAttributeSupport.h"
                         ,0x53,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  iVar4 = (**(code **)(**(longlong **)&this[-1].field_0x10 + 0x18))();
  uVar3 = 0;
  if (0 < iVar4) {
    do {
      puVar5 = (undefined1 *)
               (**(code **)(**(longlong **)&this[-1].field_0x10 + 0x20))
                         (*(longlong **)&this[-1].field_0x10,uVar3);
      if (puVar5 == &this[-1].field_0x8) {
        return uVar3;
      }
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < iVar4);
  }
  return 0xffffffff;
}

// GetContainerWidget @ 1429eacc0

SWidget * __thiscall
TWidgetSlotWithAttributeSupport<SCanvas::FSlot>::GetContainerWidget
          (TWidgetSlotWithAttributeSupport<SCanvas::FSlot> *this)

{
  code *pcVar1;
  bool bVar2;
  SWidget *pSVar3;
  
  pSVar3 = FSlotBase::GetOwnerWidget((FSlotBase *)&this[-1].field_0x8);
  if ((pSVar3 == (SWidget *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("WidgetPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\WidgetSlotWithAttributeSupport.h"
                         ,0x48,
                         L"Slot Attributes has to be registered after the FSlot is constructed."),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SWidget *)(*pcVar1)();
    return pSVar3;
  }
  return pSVar3;
}

// GetContainerWidget @ 1429ead10

SWidget * __thiscall
TWidgetSlotWithAttributeSupport<SWrapBox::FSlot>::GetContainerWidget
          (TWidgetSlotWithAttributeSupport<SWrapBox::FSlot> *this)

{
  code *pcVar1;
  bool bVar2;
  SWidget *pSVar3;
  
  pSVar3 = FSlotBase::GetOwnerWidget((FSlotBase *)&this[-1].field_0x8);
  if ((pSVar3 == (SWidget *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("WidgetPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\WidgetSlotWithAttributeSupport.h"
                         ,0x48,
                         L"Slot Attributes has to be registered after the FSlot is constructed."),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SWidget *)(*pcVar1)();
    return pSVar3;
  }
  return pSVar3;
}

// operator() @ 1504948c0

bool __thiscall
`TWidgetSlotWithAttributeSupport<SGridPanel::FSlot>::RequestSortAttribute'::__l2::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<4391091812295508028>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4391091812295508028>,
                       &`public:___cdecl_`public:_void___cdecl_TWidgetSlotWithAttributeSupport<SGridPanel::FSlot>::RequestSortAttribute(void)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

