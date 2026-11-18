// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 4

// ~TWidgetSlotWithAttributeSupport<SStackBox::FSlot> @ 146990890

void __thiscall
TWidgetSlotWithAttributeSupport<SStackBox::FSlot>::
~TWidgetSlotWithAttributeSupport<SStackBox::FSlot>
          (TWidgetSlotWithAttributeSupport<SStackBox::FSlot> *this)

{
  SWidget *pSVar1;
  
  *(undefined ***)this = &_vftable__for__TSlotBase<SStackBox::FSlot>__;
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

// GetContainerName @ 1469ce690

/* WARNING: Enum "Type": Some values do not have unique names */

FName __thiscall
TWidgetSlotWithAttributeSupport<SStackBox::FSlot>::GetContainerName
          (TWidgetSlotWithAttributeSupport<SStackBox::FSlot> *this)

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

// GetContainerSortOrder @ 1469ce6e0

uint __thiscall
TWidgetSlotWithAttributeSupport<SStackBox::FSlot>::GetContainerSortOrder
          (TWidgetSlotWithAttributeSupport<SStackBox::FSlot> *this)

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

// GetContainerWidget @ 1469ce780

SWidget * __thiscall
TWidgetSlotWithAttributeSupport<SStackBox::FSlot>::GetContainerWidget
          (TWidgetSlotWithAttributeSupport<SStackBox::FSlot> *this)

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

