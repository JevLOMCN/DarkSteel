// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 17

// ~TWidgetSlotWithAttributeSupport<UE::Slate::Private::SContainerAttribute::FSlot> @ 14254a9e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TWidgetSlotWithAttributeSupport<UE::Slate::Private::SContainerAttribute::FSlot>::
~TWidgetSlotWithAttributeSupport<UE::Slate::Private::SContainerAttribute::FSlot>
          (TWidgetSlotWithAttributeSupport<UE::Slate::Private::SContainerAttribute::FSlot> *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&this->field_0x8;
  *(undefined ***)this = &_vftable__for__TSlotBase<UE::Slate::Private::SContainerAttribute::FSlot>__
  ;
  *(undefined ***)&this->field_0x20 =
       &_vftable__for__SlateAttributePrivate__ISlateAttributeContainer__;
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x19) != -0x24) {
      UE::Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)
                 &`protected:_void___cdecl_FChildren::Debug_TestDestroyTag(void)const___ptr64'::__l3
                  ::LOG_Static,(FLogCategoryBase *)&LogSlate);
    }
    if (*(SWidget **)(lVar1 + 8) != (SWidget *)0x0) {
      SlateAttributePrivate::ISlateAttributeContainer::RemoveContainerWidget
                ((ISlateAttributeContainer *)&this->field_0x20,*(SWidget **)(lVar1 + 8));
    }
  }
  *(undefined ***)this = &___7FSlotBase__6B_;
  FSlotBase::DetatchParentFromContent((FSlotBase *)this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x18);
  return;
}

// GetContainerName @ 14257f240

/* WARNING: Enum "Type": Some values do not have unique names */

FName __thiscall
TWidgetSlotWithAttributeSupport<UE::Slate::Private::SContainerAttribute::FSlot>::GetContainerName
          (TWidgetSlotWithAttributeSupport<UE::Slate::Private::SContainerAttribute::FSlot> *this)

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

// GetContainerSortOrder @ 14257f290

uint __thiscall
TWidgetSlotWithAttributeSupport<UE::Slate::Private::SContainerAttribute::FSlot>::
GetContainerSortOrder
          (TWidgetSlotWithAttributeSupport<UE::Slate::Private::SContainerAttribute::FSlot> *this)

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

// GetContainerWidget @ 14257f330

/* WARNING: Enum "Type": Some values do not have unique names */

SWidget * __thiscall
TWidgetSlotWithAttributeSupport<UE::Slate::Private::SContainerAttribute::FSlot>::GetContainerWidget
          (TWidgetSlotWithAttributeSupport<UE::Slate::Private::SContainerAttribute::FSlot> *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  SWidget *pSVar4;
  
  lVar1 = *(longlong *)&this[-1].field_0x10;
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x19) != -0x24) {
      UE::Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)
                 &`protected:_void___cdecl_FChildren::Debug_TestDestroyTag(void)const___ptr64'::__l3
                  ::LOG_Static,(FLogCategoryBase *)&LogSlate);
    }
    if (*(SWidget **)(lVar1 + 8) != (SWidget *)0x0) {
      return *(SWidget **)(lVar1 + 8);
    }
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("WidgetPtr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\WidgetSlotWithAttributeSupport.h"
                     ,0x48,L"Slot Attributes has to be registered after the FSlot is constructed.");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pSVar4 = (SWidget *)(*pcVar2)();
    return pSVar4;
  }
  return (SWidget *)0x0;
}

// ~TWidgetSlotWithAttributeSupport<SOverlay::FOverlaySlot> @ 1425c0800

void __thiscall
TWidgetSlotWithAttributeSupport<SOverlay::FOverlaySlot>::
~TWidgetSlotWithAttributeSupport<SOverlay::FOverlaySlot>
          (TWidgetSlotWithAttributeSupport<SOverlay::FOverlaySlot> *this)

{
  SWidget *pSVar1;
  
  *(undefined ***)this = &_vftable__for__TSlotBase<SOverlay::FOverlaySlot>__;
  *(undefined ***)&this->field_0x20 =
       &_vftable__for__SlateAttributePrivate__ISlateAttributeContainer__;
  pSVar1 = FSlotBase::GetOwnerWidget((FSlotBase *)this);
  if (pSVar1 != (SWidget *)0x0) {
    FSlateAttributeMetaData::RemoveContainerWidget
              (pSVar1,(ISlateAttributeContainer *)&this->field_0x20);
  }
  FSlotBase::~FSlotBase((FSlotBase *)this);
  return;
}

// ~TWidgetSlotWithAttributeSupport<SVerticalBox::FSlot> @ 1425c0850

void __thiscall
TWidgetSlotWithAttributeSupport<SVerticalBox::FSlot>::
~TWidgetSlotWithAttributeSupport<SVerticalBox::FSlot>
          (TWidgetSlotWithAttributeSupport<SVerticalBox::FSlot> *this)

{
  SWidget *pSVar1;
  
  *(undefined ***)this = &_vftable__for__TSlotBase<SVerticalBox::FSlot>__;
  *(undefined ***)&this->field_0x20 =
       &_vftable__for__SlateAttributePrivate__ISlateAttributeContainer__;
  pSVar1 = FSlotBase::GetOwnerWidget((FSlotBase *)this);
  if (pSVar1 != (SWidget *)0x0) {
    FSlateAttributeMetaData::RemoveContainerWidget
              (pSVar1,(ISlateAttributeContainer *)&this->field_0x20);
  }
  FSlotBase::~FSlotBase((FSlotBase *)this);
  return;
}

// Construct @ 1425d2850

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TWidgetSlotWithAttributeSupport<SOverlay::FOverlaySlot>::Construct
          (TWidgetSlotWithAttributeSupport<SOverlay::FOverlaySlot> *this,FChildren *param_1,
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

// Construct @ 1425d2a20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TWidgetSlotWithAttributeSupport<SBoxPanel::FSlot>::Construct
          (TWidgetSlotWithAttributeSupport<SBoxPanel::FSlot> *this,FChildren *param_1,
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

// GetContainerName @ 1425e0020

/* WARNING: Enum "Type": Some values do not have unique names */

FName __thiscall
TWidgetSlotWithAttributeSupport<SOverlay::FOverlaySlot>::GetContainerName
          (TWidgetSlotWithAttributeSupport<SOverlay::FOverlaySlot> *this)

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

// GetContainerName @ 1425e0070

/* WARNING: Enum "Type": Some values do not have unique names */

FName __thiscall
TWidgetSlotWithAttributeSupport<SVerticalBox::FSlot>::GetContainerName
          (TWidgetSlotWithAttributeSupport<SVerticalBox::FSlot> *this)

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

// GetContainerSortOrder @ 1425e00c0

uint __thiscall
TWidgetSlotWithAttributeSupport<SOverlay::FOverlaySlot>::GetContainerSortOrder
          (TWidgetSlotWithAttributeSupport<SOverlay::FOverlaySlot> *this)

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

// GetContainerSortOrder @ 1425e0160

uint __thiscall
TWidgetSlotWithAttributeSupport<SVerticalBox::FSlot>::GetContainerSortOrder
          (TWidgetSlotWithAttributeSupport<SVerticalBox::FSlot> *this)

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

// GetContainerWidget @ 1425e0200

SWidget * __thiscall
TWidgetSlotWithAttributeSupport<SOverlay::FOverlaySlot>::GetContainerWidget
          (TWidgetSlotWithAttributeSupport<SOverlay::FOverlaySlot> *this)

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

// GetContainerWidget @ 1425e0250

SWidget * __thiscall
TWidgetSlotWithAttributeSupport<SVerticalBox::FSlot>::GetContainerWidget
          (TWidgetSlotWithAttributeSupport<SVerticalBox::FSlot> *this)

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

// operator() @ 15048fcc0

bool __thiscall
`TWidgetSlotWithAttributeSupport<UE::Slate::Private::SContainerAttribute::FSlot>::
RequestSortAttribute'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<4391091812295508028>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4391091812295508028>,
                       &`public:___cdecl_`public:_void___cdecl_TWidgetSlotWithAttributeSupport<UE::Slate::Private::SContainerAttribute::FSlot>::RequestSortAttribute(void)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150490610

bool __thiscall
`TWidgetSlotWithAttributeSupport<SOverlay::FOverlaySlot>::RequestSortAttribute'::__l2::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<4391091812295508028>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4391091812295508028>,
                       &`public:___cdecl_`public:_void___cdecl_TWidgetSlotWithAttributeSupport<SOverlay::FOverlaySlot>::RequestSortAttribute(void)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150490650

bool __thiscall
`TWidgetSlotWithAttributeSupport<SBoxPanel::FSlot>::RequestSortAttribute'::__l2::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<4391091812295508028>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4391091812295508028>,
                       &`public:___cdecl_`public:_void___cdecl_TWidgetSlotWithAttributeSupport<SBoxPanel::FSlot>::RequestSortAttribute(void)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

