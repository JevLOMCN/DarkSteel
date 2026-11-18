// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Analytics
// Functions: 14

// TSharedPtr<IAnalyticsSpan,1><FAnalyticsSpan> @ 1431320b0

TSharedPtr<IAnalyticsSpan,1> * __thiscall
TSharedPtr<IAnalyticsSpan,1>::TSharedPtr<IAnalyticsSpan,1><FAnalyticsSpan>
          (TSharedPtr<IAnalyticsSpan,1> *this,TSharedRef<FAnalyticsSpan,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = (IAnalyticsSpan *)param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedPtr<IAnalyticsSpan,1><IAnalyticsSpan> @ 143132170

TSharedPtr<IAnalyticsSpan,1> * __thiscall
TSharedPtr<IAnalyticsSpan,1>::TSharedPtr<IAnalyticsSpan,1><IAnalyticsSpan>
          (TSharedPtr<IAnalyticsSpan,1> *this,TWeakPtr<IAnalyticsSpan,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  bool bVar4;
  
  this->Object = (IAnalyticsSpan *)0x0;
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

// TSharedPtr<IAnalyticsProvider,1> @ 143133180

TSharedPtr<IAnalyticsProvider,1> * __thiscall
TSharedPtr<IAnalyticsProvider,1>::TSharedPtr<IAnalyticsProvider,1>
          (TSharedPtr<IAnalyticsProvider,1> *this,TSharedPtr<IAnalyticsProvider,1> *param_1)

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

// TSharedPtr<IAnalyticsProvider,1> @ 1431331b0

TSharedPtr<IAnalyticsProvider,1> * __thiscall
TSharedPtr<IAnalyticsProvider,1>::TSharedPtr<IAnalyticsProvider,1>
          (TSharedPtr<IAnalyticsProvider,1> *this,FNullTag *param_1)

{
  this->Object = (IAnalyticsProvider *)0x0;
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<IAnalyticsSpan,1> @ 1431331d0

TSharedPtr<IAnalyticsSpan,1> * __thiscall
TSharedPtr<IAnalyticsSpan,1>::TSharedPtr<IAnalyticsSpan,1>
          (TSharedPtr<IAnalyticsSpan,1> *this,TSharedPtr<IAnalyticsSpan,1> *param_1)

{
  this->Object = param_1->Object;
  (this->SharedReferenceCount).ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (IAnalyticsSpan *)0x0;
  return this;
}

// TSharedPtr<IAnalyticsSpan,1> @ 143133200

TSharedPtr<IAnalyticsSpan,1> * __thiscall
TSharedPtr<IAnalyticsSpan,1>::TSharedPtr<IAnalyticsSpan,1>
          (TSharedPtr<IAnalyticsSpan,1> *this,TSharedPtr<IAnalyticsSpan,1> *param_1)

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

// TSharedPtr<IAnalyticsSpan,1> @ 143133230

TSharedPtr<IAnalyticsSpan,1> * __thiscall
TSharedPtr<IAnalyticsSpan,1>::TSharedPtr<IAnalyticsSpan,1>
          (TSharedPtr<IAnalyticsSpan,1> *this,FNullTag *param_1)

{
  this->Object = (IAnalyticsSpan *)0x0;
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~TSharedPtr<IAnalyticsProvider,1> @ 1431337d0

void __thiscall
TSharedPtr<IAnalyticsProvider,1>::~TSharedPtr<IAnalyticsProvider,1>
          (TSharedPtr<IAnalyticsProvider,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// ~TSharedPtr<IAnalyticsSpan,1> @ 1431337e0

void __thiscall
TSharedPtr<IAnalyticsSpan,1>::~TSharedPtr<IAnalyticsSpan,1>(TSharedPtr<IAnalyticsSpan,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// operator= @ 143133d00

TSharedPtr<IAnalyticsProvider,1> * __thiscall
TSharedPtr<IAnalyticsProvider,1>::operator=
          (TSharedPtr<IAnalyticsProvider,1> *this,TSharedPtr<IAnalyticsProvider,1> *param_1)

{
  if (this != param_1) {
    this->Object = param_1->Object;
    param_1->Object = (IAnalyticsProvider *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&param_1->SharedReferenceCount);
  }
  return this;
}

// operator= @ 143133d40

TSharedPtr<IAnalyticsProvider,1> * __thiscall
TSharedPtr<IAnalyticsProvider,1>::operator=
          (TSharedPtr<IAnalyticsProvider,1> *this,TSharedPtr<IAnalyticsProvider,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  IAnalyticsProvider *pIVar2;
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

// operator= @ 143133d90

TSharedPtr<IAnalyticsSpan,1> * __thiscall
TSharedPtr<IAnalyticsSpan,1>::operator=
          (TSharedPtr<IAnalyticsSpan,1> *this,TSharedPtr<IAnalyticsSpan,1> *param_1)

{
  if (this != param_1) {
    this->Object = param_1->Object;
    param_1->Object = (IAnalyticsSpan *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&param_1->SharedReferenceCount);
  }
  return this;
}

// operator-> @ 143133e20

IAnalyticsProvider * __thiscall
TSharedPtr<IAnalyticsProvider,1>::operator->(TSharedPtr<IAnalyticsProvider,1> *this)

{
  code *pcVar1;
  bool bVar2;
  IAnalyticsProvider *pIVar3;
  
  if (this->Object != (IAnalyticsProvider *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (IAnalyticsProvider *)(*pcVar1)();
    return pIVar3;
  }
  return this->Object;
}

// operator-> @ 143133e70

IAnalyticsSpan * __thiscall
TSharedPtr<IAnalyticsSpan,1>::operator->(TSharedPtr<IAnalyticsSpan,1> *this)

{
  code *pcVar1;
  bool bVar2;
  IAnalyticsSpan *pIVar3;
  
  if (this->Object != (IAnalyticsSpan *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (IAnalyticsSpan *)(*pcVar1)();
    return pIVar3;
  }
  return this->Object;
}

