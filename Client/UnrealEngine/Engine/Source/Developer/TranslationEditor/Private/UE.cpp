// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TranslationEditor
// Functions: 15

// Construct<FTranslationContextInfo> @ 146b925a0

void __cdecl UE::CoreUObject::Private::Construct<FTranslationContextInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// ConstructForTests<FTranslationContextInfo> @ 146b925c0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTranslationContextInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// Destruct<FTranslationContextInfo> @ 146b925e0

void __cdecl UE::CoreUObject::Private::Destruct<FTranslationContextInfo>(void *param_1)

{
  DestructItems<FTranslationChange,int>
            (*(FTranslationChange **)((longlong)param_1 + 0x20),*(int *)((longlong)param_1 + 0x28));
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FTranslationContextInfo> @ 146b92630

bool __cdecl
UE::CoreUObject::Private::Copy<FTranslationContextInfo>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FTranslationChange *pFVar4;
  FString *pFVar5;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=(param_1,param_2);
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x10),(FString *)((longlong)param_2 + 0x10));
    pFVar5 = (FString *)((longlong)param_1 + 0x20);
    if (pFVar5 != (FString *)((longlong)param_2 + 0x20)) {
      DestructItems<FTranslationChange,int>
                ((FTranslationChange *)(pFVar5->Data).AllocatorInstance.Data,
                 (((FString *)((longlong)param_1 + 0x20))->Data).ArrayNum);
      iVar2 = (((FString *)((longlong)param_2 + 0x20))->Data).ArrayNum;
      piVar1 = &(((FString *)((longlong)param_1 + 0x20))->Data).ArrayMax;
      pFVar4 = (FTranslationChange *)
               (((FString *)((longlong)param_2 + 0x20))->Data).AllocatorInstance.Data;
      iVar3 = *piVar1;
      (((FString *)((longlong)param_1 + 0x20))->Data).ArrayNum = iVar2;
      if ((iVar2 == 0) && (iVar3 == 0)) {
        *piVar1 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x38,8,iVar2,iVar3,(ForAnyElementType *)pFVar5,iVar2,piVar1);
        ConstructItems<FTranslationChange,FTranslationChange,int>
                  ((pFVar5->Data).AllocatorInstance.Data,pFVar4,iVar2);
      }
    }
    param_1 = (FString *)((longlong)param_1 + 0x30);
    param_2 = (FString *)((longlong)param_2 + 0x30);
  }
  return true;
}

// Construct<FTranslationChange> @ 146b92720

void __cdecl UE::CoreUObject::Private::Construct<FTranslationChange>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  return;
}

// ConstructForTests<FTranslationChange> @ 146b92750

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTranslationChange>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  return;
}

// Destruct<FTranslationChange> @ 146b92780

void __cdecl UE::CoreUObject::Private::Destruct<FTranslationChange>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
  }
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FTranslationChange> @ 146b927d0

bool __cdecl
UE::CoreUObject::Private::Copy<FTranslationChange>(void *param_1,void *param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=(param_1,param_2);
    *(FScriptContainerElement **)((longlong)param_1 + 0x10) =
         (((FString *)((longlong)param_2 + 0x10))->Data).AllocatorInstance.Data;
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x18),(FString *)((longlong)param_2 + 0x18));
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x28),(FString *)((longlong)param_2 + 0x28));
    param_2 = (void *)((longlong)param_2 + 0x38);
    param_1 = (int *)((longlong)param_1 + 0x38);
  }
  return true;
}

// DereferenceIfNecessary<UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FTranslationPickerTextItem,1>_>,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FTranslationPickerTextItem,1>_>_*_&> @ 146b93730

FObservableArrayPointer<TSharedPtr<FTranslationPickerTextItem,1>_> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FTranslationPickerTextItem,1>_>,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FTranslationPickerTextItem,1>_>_*_&>
          (FObservableArrayPointer<TSharedPtr<FTranslationPickerTextItem,1>_> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FTranslationPickerTextItem,1>_>,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FTranslationPickerTextItem,1>_>_*_&> @ 146b93750

FSharedObservableArray<TSharedPtr<FTranslationPickerTextItem,1>_> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FTranslationPickerTextItem,1>_>,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FTranslationPickerTextItem,1>_>_*_&>
          (FSharedObservableArray<TSharedPtr<FTranslationPickerTextItem,1>_> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>,STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>_*_&> @ 146b93770

STableRow<TSharedPtr<FTranslationPickerTextItem,1>_> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>,STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>_*_&>
          (STableRow<TSharedPtr<FTranslationPickerTextItem,1>_> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<STranslationPickerEditWidget,STranslationPickerEditWidget_*_&> @ 146b93790

/* WARNING: Enum "Type": Some values do not have unique names */

STranslationPickerEditWidget * __cdecl
UE::Core::Private::
DereferenceIfNecessary<STranslationPickerEditWidget,STranslationPickerEditWidget_*_&>
          (STranslationPickerEditWidget **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<STranslationPickerEditWindow,STranslationPickerEditWindow_*_&> @ 146b937b0

/* WARNING: Enum "Type": Some values do not have unique names */

STranslationPickerEditWindow * __cdecl
UE::Core::Private::
DereferenceIfNecessary<STranslationPickerEditWindow,STranslationPickerEditWindow_*_&>
          (STranslationPickerEditWindow **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<STranslationPickerFloatingWindow,STranslationPickerFloatingWindow_*_&> @ 146b937d0

/* WARNING: Enum "Type": Some values do not have unique names */

STranslationPickerFloatingWindow * __cdecl
UE::Core::Private::
DereferenceIfNecessary<STranslationPickerFloatingWindow,STranslationPickerFloatingWindow_*_&>
          (STranslationPickerFloatingWindow **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<STranslationWidgetPicker,STranslationWidgetPicker_*_&> @ 146b937f0

STranslationWidgetPicker * __cdecl
UE::Core::Private::DereferenceIfNecessary<STranslationWidgetPicker,STranslationWidgetPicker_*_&>
          (STranslationWidgetPicker **param_1)

{
  return *param_1;
}

