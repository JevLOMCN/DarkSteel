// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DrawPrimitiveDebugger
// Functions: 29

// TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1><FViewDebugInfo::FPrimitiveInfo_const_> @ 146cfad20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> * __thiscall
TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::
TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1><FViewDebugInfo::FPrimitiveInfo_const_>
          (TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> *this,
          TSharedRef<FViewDebugInfo::FPrimitiveInfo_const_,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedPtr<SNumericEntryBox<int>_const_,1><SNumericEntryBox<int>_const_> @ 146cfad50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TSharedPtr<SNumericEntryBox<int>_const_,1> * __thiscall
TSharedPtr<SNumericEntryBox<int>_const_,1>::
TSharedPtr<SNumericEntryBox<int>_const_,1><SNumericEntryBox<int>_const_>
          (TSharedPtr<SNumericEntryBox<int>_const_,1> *this,
          TSharedRef<SNumericEntryBox<int>_const_,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedPtr<SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1><SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>_> @ 146cfae20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TSharedPtr<SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1> * __thiscall
TSharedPtr<SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1>::
TSharedPtr<SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1><SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>_>
          (TSharedPtr<SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1> *this,
          TSharedRef<SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedPtr<SDrawPrimitiveDebugger,1><SDrawPrimitiveDebugger> @ 146cfaeb0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TSharedPtr<SDrawPrimitiveDebugger,1> * __thiscall
TSharedPtr<SDrawPrimitiveDebugger,1>::TSharedPtr<SDrawPrimitiveDebugger,1><SDrawPrimitiveDebugger>
          (TSharedPtr<SDrawPrimitiveDebugger,1> *this,TWeakPtr<SDrawPrimitiveDebugger,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  bool bVar4;
  
  this->Object = (SDrawPrimitiveDebugger *)0x0;
  pTVar1 = (param_1->WeakReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
        break;
      }
      LOCK();
      aVar3 = pTVar1->SharedReferenceCount;
      bVar4 = aVar2 == aVar3;
      if (bVar4) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar4);
  }
  if ((this->SharedReferenceCount).ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    this->Object = param_1->Object;
  }
  return this;
}

// operator*<FViewDebugInfo::FPrimitiveInfo_const_> @ 146cfb0b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPrimitiveInfo * __thiscall
TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::
operator*<FViewDebugInfo::FPrimitiveInfo_const_>
          (TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FPrimitiveInfo *pFVar3;
  
  if (this->Object != (FPrimitiveInfo *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x44d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FPrimitiveInfo *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// UEOpEquals<FViewDebugInfo::FPrimitiveInfo_const_> @ 146d01750

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::
UEOpEquals<FViewDebugInfo::FPrimitiveInfo_const_>
          (TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> *this,
          TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> *param_1)

{
  return this->Object == param_1->Object;
}

// TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> @ 146d02330

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> * __thiscall
TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::
TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>
          (TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> *this,
          TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> *param_1)

{
  this->Object = param_1->Object;
  (this->SharedReferenceCount).ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (FPrimitiveInfo *)0x0;
  return this;
}

// TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> @ 146d02360

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> * __thiscall
TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::
TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>
          (TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> *this,
          TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> @ 146d02390

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> * __thiscall
TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::
TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>
          (TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> *this,FNullTag *param_1)

{
  this->Object = (FPrimitiveInfo *)0x0;
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<SHeaderRow,1> @ 146d023b0

TSharedPtr<SHeaderRow,1> * __thiscall
TSharedPtr<SHeaderRow,1>::TSharedPtr<SHeaderRow,1>
          (TSharedPtr<SHeaderRow,1> *this,TSharedPtr<SHeaderRow,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// ~TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> @ 146d04070

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::
~TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>
          (TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// ~TSharedPtr<INumericTypeInterface<int>,1> @ 146d04080

void __thiscall
TSharedPtr<INumericTypeInterface<int>,1>::~TSharedPtr<INumericTypeInterface<int>,1>
          (TSharedPtr<INumericTypeInterface<int>,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1> @ 146d040b0

void __thiscall
TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1>
::
~TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1>
          (TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1>
           *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1> @ 146d040e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TSharedPtr<SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1>::
~TSharedPtr<SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1>
          (TSharedPtr<SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<SNumericEntryBox<int>,1> @ 146d04110

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
TSharedPtr<SNumericEntryBox<int>,1>::~TSharedPtr<SNumericEntryBox<int>,1>
          (TSharedPtr<SNumericEntryBox<int>,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<SDrawPrimitiveDebugger,1> @ 146d04140

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TSharedPtr<SDrawPrimitiveDebugger,1>::~TSharedPtr<SDrawPrimitiveDebugger,1>
          (TSharedPtr<SDrawPrimitiveDebugger,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// ~TSharedPtr<SDrawPrimitiveDebuggerListViewRow,1> @ 146d04150

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TSharedPtr<SDrawPrimitiveDebuggerListViewRow,1>::~TSharedPtr<SDrawPrimitiveDebuggerListViewRow,1>
          (TSharedPtr<SDrawPrimitiveDebuggerListViewRow,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<SExpandableArea,1> @ 146d04180

void __thiscall
TSharedPtr<SExpandableArea,1>::~TSharedPtr<SExpandableArea,1>(TSharedPtr<SExpandableArea,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<SPrimitiveDebuggerDetailView,1> @ 146d041b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TSharedPtr<SPrimitiveDebuggerDetailView,1>::~TSharedPtr<SPrimitiveDebuggerDetailView,1>
          (TSharedPtr<SPrimitiveDebuggerDetailView,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// operator= @ 146d05c30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> * __thiscall
TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::operator=
          (TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> *this,
          TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> *param_1)

{
  if (this != param_1) {
    this->Object = param_1->Object;
    param_1->Object = (FPrimitiveInfo *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&param_1->SharedReferenceCount);
  }
  return this;
}

// operator= @ 146d05c70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> * __thiscall
TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::operator=
          (TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> *this,
          TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FPrimitiveInfo *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->SharedReferenceCount).ReferenceController;
  this->Object = pFVar2;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return this;
}

// operator= @ 146d05cc0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TSharedPtr<SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1> * __thiscall
TSharedPtr<SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1>::operator=
          (TSharedPtr<SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1> *this,
          TSharedPtr<SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1> *param_1)

{
  if (this != param_1) {
    this->Object = param_1->Object;
    param_1->Object = (SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&param_1->SharedReferenceCount);
  }
  return this;
}

// operator= @ 146d05d00

TSharedPtr<IToolTip,1> * __thiscall
TSharedPtr<IToolTip,1>::operator=(TSharedPtr<IToolTip,1> *this,TSharedPtr<IToolTip,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  IToolTip *pIVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pIVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->SharedReferenceCount).ReferenceController;
  this->Object = pIVar2;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return this;
}

// operator= @ 146d05d50

TSharedPtr<SHeaderRow,1> * __thiscall
TSharedPtr<SHeaderRow,1>::operator=
          (TSharedPtr<SHeaderRow,1> *this,TSharedPtr<SHeaderRow,1> *param_1)

{
  if (this != param_1) {
    this->Object = param_1->Object;
    param_1->Object = (SHeaderRow *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&param_1->SharedReferenceCount);
  }
  return this;
}

// operator-> @ 146d066f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPrimitiveInfo * __thiscall
TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::operator->
          (TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FPrimitiveInfo *pFVar3;
  
  if (this->Object != (FPrimitiveInfo *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FPrimitiveInfo *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 146d06740

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> * __thiscall
TSharedPtr<SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1>::operator->
          (TSharedPtr<SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *pSVar3;
  
  if (this->Object != (SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// operator-> @ 146d06790

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

SDrawPrimitiveDebugger * __thiscall
TSharedPtr<SDrawPrimitiveDebugger,1>::operator->(TSharedPtr<SDrawPrimitiveDebugger,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SDrawPrimitiveDebugger *pSVar3;
  
  if (this->Object != (SDrawPrimitiveDebugger *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SDrawPrimitiveDebugger *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// operator-> @ 146d067e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

SPrimitiveDebuggerDetailView * __thiscall
TSharedPtr<SPrimitiveDebuggerDetailView,1>::operator->
          (TSharedPtr<SPrimitiveDebuggerDetailView,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SPrimitiveDebuggerDetailView *pSVar3;
  
  if (this->Object != (SPrimitiveDebuggerDetailView *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SPrimitiveDebuggerDetailView *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// ToSharedRef @ 146d33990

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TSharedRef<SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1> * __thiscall
TSharedPtr<SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1>::ToSharedRef
          (TSharedPtr<SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1> *this,
          TSharedRef<SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1>
          *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1> *pTVar4;
  
  if (this->Object == (SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1> *)
               (*pcVar2)();
      return pTVar4;
    }
  }
  __return_storage_ptr__->Object = this->Object;
  pTVar1 = (this->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__->Object ==
      (SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1> *)
               (*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

