// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreOnline
// Functions: 2

// FElement @ 1446158e0

FElement * __thiscall
FJsonSerializerPolicy_NestedVariant::FElement::FElement
          (FElement *this,
          TSharedPtr<TNestedVariantMap<FString,bool,__int64,double,FString>,1> *param_1)

{
  code *pcVar1;
  atomic<int> aVar2;
  bool bVar3;
  atomic<int> aVar4;
  FElement *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  undefined1 *puVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  ulonglong uVar11;
  
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  (this->Identifier).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Identifier).Data.ArrayNum = 0;
  (this->Identifier).Data.ArrayMax = 0;
  *(undefined1 *)&(this->Value)._padding_ = 0;
  (this->Value).TypeIndex = '\0';
  this->bHasBeenProcessed = false;
  this->bIsKeyValuePair = false;
  if ((param_1->Object == (TNestedVariantMap<FString,bool,__int64,double,FString> *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FElement *)(*pcVar1)();
    return pFVar5;
  }
  pTVar6 = *(TReferenceControllerBase<1> **)&param_1->Object->field_0x58;
  puVar7 = &param_1->Object->field_0x50;
  pTVar8 = pTVar6;
  pTVar9 = pTVar10;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar6->SharedReferenceCount;
    do {
      pTVar8 = pTVar10;
      if (aVar2 == (atomic<int>)0x0) goto LAB_144615975;
      LOCK();
      aVar4 = pTVar6->SharedReferenceCount;
      bVar3 = aVar2 == aVar4;
      if (bVar3) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar3);
    pTVar8 = pTVar6;
    pTVar9 = *(TReferenceControllerBase<1> **)puVar7;
  }
LAB_144615975:
  pTVar6 = pTVar9 + 5;
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = pTVar10;
  }
  if ((pTVar6 != (TReferenceControllerBase<1> *)puVar7) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FElement *)(*pcVar1)();
    return pFVar5;
  }
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FElement *)(*pcVar1)();
      return pFVar5;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FElement *)(*pcVar1)();
      return pFVar5;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar11 = (ulonglong)(this->Value).TypeIndex;
  if ((5 < uVar11) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FElement *)(*pcVar1)();
    return pFVar5;
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar11] != UE::Core::Private::TDestructorCaller<bool>::Destruct
     ) {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar11])(&this->Value);
  }
  (this->Value)._padding_ = (longlong)pTVar9;
  (this->Value)._padding_ = (longlong)pTVar8;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->Value).TypeIndex = '\x05';
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return this;
}

// ~FElement @ 144616030

void __thiscall FJsonSerializerPolicy_NestedVariant::FElement::~FElement(FElement *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)(this->Value).TypeIndex;
  if (5 < uVar4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar4])(&this->Value);
  pFVar1 = (this->Identifier).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

