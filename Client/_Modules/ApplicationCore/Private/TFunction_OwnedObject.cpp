// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ApplicationCore
// Functions: 159

// CloneToEmptyStorage @ 1423d33d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIATextRangeProvider::Clone'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FWindowsUIATextRangeProvider::Clone'::`2'::<lambda_1>,0,1>::
             _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 1423d3430

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::Close'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FWindowsUIAControlProvider::Close'::`2'::<lambda_1>,0,0>::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1423d3450

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIATextRangeProvider::Compare'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FWindowsUIATextRangeProvider::Compare'::`2'::<lambda_1>,0,1>::
             _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 1423d34b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAWindowProvider::ElementProviderFromPoint'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x30,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FWindowsUIAWindowProvider::ElementProviderFromPoint'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x20);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  puVar2[4] = uVar1;
  puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 1423d3510

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIATextRangeProvider::ExpandToEnclosingUnit'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FWindowsUIATextRangeProvider::ExpandToEnclosingUnit'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 1423d3570

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIATextRangeProvider::FindText'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x38,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FWindowsUIATextRangeProvider::FindText'::`2'::<lambda_1>,0,1>::
             _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x20);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  puVar2[4] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x30);
  puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
  puVar2[6] = uVar1;
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 1423d35d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIATextRangeProvider::GetEnclosingElement'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FWindowsUIATextRangeProvider::GetEnclosingElement'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 1423d3630

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAWindowProvider::GetFocus'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FWindowsUIAWindowProvider::GetFocus'::`2'::<lambda_1>,0,1>::
             _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 1423d3690

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAWidgetProvider::GetPatternProvider'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FWindowsUIAWidgetProvider::GetPatternProvider'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x20);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  puVar2[4] = uVar1;
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 1423d36f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAWindowProvider::GetPatternProvider'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FWindowsUIAWindowProvider::GetPatternProvider'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x20);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  puVar2[4] = uVar1;
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 1423d3750

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAWidgetProvider::GetPropertyValue'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FWindowsUIAWidgetProvider::GetPropertyValue'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x20);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  puVar2[4] = uVar1;
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 1423d37b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAWidgetProvider::GetRuntimeId'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FWindowsUIAWidgetProvider::GetRuntimeId'::`2'::<lambda_1>,0,1>::
             _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 1423d3810

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::GetSelection'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FWindowsUIAControlProvider::GetSelection'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 1423d3870

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIATextRangeProvider::GetText'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FWindowsUIATextRangeProvider::GetText'::`2'::<lambda_1>,0,1>::
             _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x20);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  puVar2[4] = uVar1;
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 1423d38d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::Invoke'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FWindowsUIAControlProvider::Invoke'::`2'::<lambda_1>,0,0>::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1423d38f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIATextRangeProvider::MoveEndpointByRange'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FWindowsUIATextRangeProvider::MoveEndpointByRange'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x20);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  puVar2[4] = uVar1;
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 1423d3950

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAWidgetProvider::Navigate'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FWindowsUIAWidgetProvider::Navigate'::`2'::<lambda_1>,0,1>::
             _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x20);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  puVar2[4] = uVar1;
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 1423d39b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::Select'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FWindowsUIAControlProvider::Select'::`2'::<lambda_1>,0,0>::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1423d39d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAWidgetProvider::SetFocus'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FWindowsUIAWidgetProvider::SetFocus'::`2'::<lambda_1>,0,0>::_vftable_
  ;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1423d39f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::SetValue'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FWindowsUIAControlProvider::SetValue'::`2'::<lambda_1>,0,1>::
             _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 1423d3a50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::SetValue'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FWindowsUIAControlProvider::SetValue'::`2'::<lambda_1>,0,1>::
             _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 1423d3ab0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::SetVisualState'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FWindowsUIAControlProvider::SetVisualState'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 1423d3b10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAWidgetProvider::SupportsInterface'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FWindowsUIAWidgetProvider::SupportsInterface'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 1423d3b70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsConsoleOutputDevice2::FConsoleWindow::ThreadProc'::__l2::<lambda_1>,1,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1423d3bb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::Toggle'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FWindowsUIAControlProvider::Toggle'::`2'::<lambda_1>,0,0>::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1423d3bd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAWidgetProvider::get_BoundingRectangle'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FWindowsUIAWidgetProvider::get_BoundingRectangle'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 1423d3c30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_CanMaximize'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FWindowsUIAControlProvider::get_CanMaximize'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 1423d3c90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_CanMinimize'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FWindowsUIAControlProvider::get_CanMinimize'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 1423d3cf0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_CanMove'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FWindowsUIAControlProvider::get_CanMove'::`2'::<lambda_1>,0,1>::
             _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 1423d3d50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_CanResize'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FWindowsUIAControlProvider::get_CanResize'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 1423d3db0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_CanRotate'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FWindowsUIAControlProvider::get_CanRotate'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 1423d3e10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_CanSelectMultiple'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FWindowsUIAControlProvider::get_CanSelectMultiple'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 1423d3e70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_DocumentRange'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FWindowsUIAControlProvider::get_DocumentRange'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 1423d3ed0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAWidgetProvider::get_FragmentRoot'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FWindowsUIAWidgetProvider::get_FragmentRoot'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 1423d3f30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAWindowProvider::get_HostRawElementProvider'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FWindowsUIAWindowProvider::get_HostRawElementProvider'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 1423d3f90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_IsModal'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FWindowsUIAControlProvider::get_IsModal'::`2'::<lambda_1>,0,1>::
             _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 1423d3ff0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_IsReadOnly'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FWindowsUIAControlProvider::get_IsReadOnly'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 1423d4050

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_IsSelected'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FWindowsUIAControlProvider::get_IsSelected'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 1423d40b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_IsSelectionRequired'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FWindowsUIAControlProvider::get_IsSelectionRequired'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 1423d4110

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_IsTopmost'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FWindowsUIAControlProvider::get_IsTopmost'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 1423d4170

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_LargeChange'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FWindowsUIAControlProvider::get_LargeChange'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 1423d41d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_Maximum'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FWindowsUIAControlProvider::get_Maximum'::`2'::<lambda_1>,0,1>::
             _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 1423d4230

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_Minimum'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FWindowsUIAControlProvider::get_Minimum'::`2'::<lambda_1>,0,1>::
             _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 1423d4290

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_SelectionContainer'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FWindowsUIAControlProvider::get_SelectionContainer'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 1423d42f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_SmallChange'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FWindowsUIAControlProvider::get_SmallChange'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 1423d4350

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_ToggleState'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FWindowsUIAControlProvider::get_ToggleState'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 1423d43b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_Value'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FWindowsUIAControlProvider::get_Value'::`2'::<lambda_1>,0,1>::
             _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 1423d4410

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_Value'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FWindowsUIAControlProvider::get_Value'::`2'::<lambda_1>,0,1>::
             _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 1423d4470

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_WindowInteractionState'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FWindowsUIAControlProvider::get_WindowInteractionState'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1423d4490

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_WindowVisualState'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FWindowsUIAControlProvider::get_WindowVisualState'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 1423d44f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FWindowsConsoleOutputDevice2::FConsoleWindow::MainWinProc'::__l104::<lambda_3>_>'::__l4::<lambda_1>,1,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1423d4530

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsConsoleOutputDevice2::FConsoleWindow::ThreadProc'::__l2::<lambda_2>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__1__ThreadProc_FConsoleWindow_FWindowsConsoleOutputDevice2__QEAAIXZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1423d4550

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsConsoleOutputDevice2::FConsoleWindow::MainWinProc'::__l104::<lambda_3>,1,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// Destroy @ 1423d84c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIATextRangeProvider::Clone'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1423d84f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::Close'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001423d84f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1423d8500

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIATextRangeProvider::Compare'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1423d8530

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAWindowProvider::ElementProviderFromPoint'::__l2::<lambda_1>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1423d8560

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIATextRangeProvider::ExpandToEnclosingUnit'::__l2::<lambda_1>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1423d8590

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIATextRangeProvider::FindText'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1423d85c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIATextRangeProvider::GetEnclosingElement'::__l2::<lambda_1>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1423d85f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAWindowProvider::GetFocus'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1423d8620

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAWidgetProvider::GetPatternProvider'::__l2::<lambda_1>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1423d8650

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAWindowProvider::GetPatternProvider'::__l2::<lambda_1>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1423d8680

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAWidgetProvider::GetPropertyValue'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1423d86b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAWidgetProvider::GetRuntimeId'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1423d86e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::GetSelection'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1423d8710

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIATextRangeProvider::GetText'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1423d8740

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::Invoke'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001423d8745. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1423d8750

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIATextRangeProvider::MoveEndpointByRange'::__l2::<lambda_1>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1423d8780

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAWidgetProvider::Navigate'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1423d87b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::Select'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001423d87b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1423d87c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAWidgetProvider::SetFocus'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001423d87c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1423d87d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::SetValue'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1423d8800

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::SetValue'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1423d8830

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::SetVisualState'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1423d8860

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAWidgetProvider::SupportsInterface'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1423d8890

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsConsoleOutputDevice2::FConsoleWindow::ThreadProc'::__l2::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001423d8895. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1423d88a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::Toggle'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001423d88a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1423d88b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAWidgetProvider::get_BoundingRectangle'::__l2::<lambda_1>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1423d88e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_CanMaximize'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1423d8910

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_CanMinimize'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1423d8940

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_CanMove'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1423d8970

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_CanResize'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1423d89a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_CanRotate'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1423d89d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_CanSelectMultiple'::__l2::<lambda_1>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1423d8a00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_DocumentRange'::__l2::<lambda_1>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1423d8a30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAWidgetProvider::get_FragmentRoot'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1423d8a60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAWindowProvider::get_HostRawElementProvider'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1423d8a90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_IsModal'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1423d8ac0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_IsReadOnly'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1423d8af0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_IsSelected'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1423d8b20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_IsSelectionRequired'::__l2::<lambda_1>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1423d8b50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_IsTopmost'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1423d8b80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_LargeChange'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1423d8bb0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_Maximum'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1423d8be0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_Minimum'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1423d8c10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_SelectionContainer'::__l2::<lambda_1>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1423d8c40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_SmallChange'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1423d8c70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_ToggleState'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1423d8ca0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_Value'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1423d8cd0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_Value'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1423d8d00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_WindowInteractionState'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001423d8d05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1423d8d10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_WindowVisualState'::__l2::<lambda_1>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1423d8d40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FWindowsConsoleOutputDevice2::FConsoleWindow::MainWinProc'::__l104::<lambda_3>_>'::__l4::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1423d8d70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsConsoleOutputDevice2::FConsoleWindow::ThreadProc'::__l2::<lambda_2>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001423d8d75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1423d8d80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsConsoleOutputDevice2::FConsoleWindow::MainWinProc'::__l104::<lambda_3>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001423d8d85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 1423dcb50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIATextRangeProvider::Clone'::__l2::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1423dcb60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::Close'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1423dcb70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIATextRangeProvider::Compare'::__l2::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1423dcb80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAWindowProvider::ElementProviderFromPoint'::__l2::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1423dcb90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIATextRangeProvider::ExpandToEnclosingUnit'::__l2::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1423dcba0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIATextRangeProvider::FindText'::__l2::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1423dcbb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIATextRangeProvider::GetEnclosingElement'::__l2::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1423dcbc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAWindowProvider::GetFocus'::__l2::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1423dcbd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAWidgetProvider::GetPatternProvider'::__l2::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1423dcbe0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAWindowProvider::GetPatternProvider'::__l2::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1423dcbf0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAWidgetProvider::GetPropertyValue'::__l2::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1423dcc00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAWidgetProvider::GetRuntimeId'::__l2::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1423dcc10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::GetSelection'::__l2::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1423dcc20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIATextRangeProvider::GetText'::__l2::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1423dcc30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::Invoke'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1423dcc40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIATextRangeProvider::MoveEndpointByRange'::__l2::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1423dcc50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAWidgetProvider::Navigate'::__l2::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1423dcc60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::Select'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1423dcc70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAWidgetProvider::SetFocus'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1423dcc80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::SetValue'::__l2::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1423dcc90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::SetValue'::__l2::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1423dcca0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::SetVisualState'::__l2::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1423dccb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAWidgetProvider::SupportsInterface'::__l2::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1423dccc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsConsoleOutputDevice2::FConsoleWindow::ThreadProc'::__l2::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1423dccd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::Toggle'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1423dcce0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAWidgetProvider::get_BoundingRectangle'::__l2::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1423dccf0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_CanMaximize'::__l2::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1423dcd00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_CanMinimize'::__l2::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1423dcd10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_CanMove'::__l2::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1423dcd20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_CanResize'::__l2::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1423dcd30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_CanRotate'::__l2::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1423dcd40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_CanSelectMultiple'::__l2::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1423dcd50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_DocumentRange'::__l2::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1423dcd60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAWidgetProvider::get_FragmentRoot'::__l2::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1423dcd70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAWindowProvider::get_HostRawElementProvider'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1423dcd80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_IsModal'::__l2::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1423dcd90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_IsReadOnly'::__l2::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1423dcda0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_IsSelected'::__l2::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1423dcdb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_IsSelectionRequired'::__l2::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1423dcdc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_IsTopmost'::__l2::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1423dcdd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_LargeChange'::__l2::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1423dcde0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_Maximum'::__l2::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1423dcdf0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_Minimum'::__l2::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1423dce00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_SelectionContainer'::__l2::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1423dce10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_SmallChange'::__l2::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1423dce20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_ToggleState'::__l2::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1423dce30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_Value'::__l2::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1423dce40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_Value'::__l2::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1423dce50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_WindowInteractionState'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1423dce60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsUIAControlProvider::get_WindowVisualState'::__l2::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1423dce70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FWindowsConsoleOutputDevice2::FConsoleWindow::MainWinProc'::__l104::<lambda_3>_>'::__l4::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 1423dce80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsConsoleOutputDevice2::FConsoleWindow::ThreadProc'::__l2::<lambda_2>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1423dce90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsConsoleOutputDevice2::FConsoleWindow::MainWinProc'::__l104::<lambda_3>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

