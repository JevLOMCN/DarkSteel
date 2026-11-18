// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 11

// TOptional<FText> @ 1417336d0

TOptional<FText> * __thiscall
TOptional<FText>::TOptional<FText>(TOptional<FText> *this,FText *param_1)

{
  ITextData *pIVar1;
  code *pcVar2;
  bool bVar3;
  TOptional<FText> *pTVar4;
  undefined1 local_res8 [8];
  
  (this->field0_0x0).TypedValue.TextData.Reference = (ITextData *)0x0;
  pIVar1 = (param_1->TextData).Reference;
  (this->field0_0x0).TypedValue.TextData.Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  (this->field0_0x0).TypedValue.Flags = param_1->Flags;
  if ((this->field0_0x0).TypedValue.TextData.Reference == (ITextData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TOptional<FText> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return this;
}

// operator= @ 141739900

TOptional<FText> * __thiscall TOptional<FText>::operator=(TOptional<FText> *this,FText *param_1)

{
  code *pcVar1;
  bool bVar2;
  TOptional<FText> *pTVar3;
  
  if (param_1 != (FText *)this) {
    if (*(longlong **)&this->field0_0x0 != (longlong *)0x0) {
      (**(code **)(**(longlong **)&this->field0_0x0 + 0x10))();
    }
    FText::FText((FText *)this,param_1);
    if ((this->field0_0x0).TypedValue.TextData.Reference == (ITextData *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x171,
                         L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TOptional<FText> *)(*pcVar1)();
        return pTVar3;
      }
    }
  }
  return this;
}

// GetValue @ 141762290

FText * __thiscall TOptional<FText>::GetValue(TOptional<FText> *this)

{
  code *pcVar1;
  bool bVar2;
  FText *pFVar3;
  
  if ((this->field0_0x0).TypedValue.TextData.Reference == (ITextData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FText *)(*pcVar1)();
      return pFVar3;
    }
  }
  return (FText *)this;
}

// ~TOptional<FIoBuffer> @ 1417a6320

void __thiscall TOptional<FIoBuffer>::~TOptional<FIoBuffer>(TOptional<FIoBuffer> *this)

{
  int *piVar1;
  int iVar2;
  BufCore *this_00;
  
  if ((this->bIsSet != false) &&
     (this_00 = (this->TypedValue).CorePtr.Reference, this_00 != (BufCore *)0x0)) {
    FIoBuffer::BufCore::CheckRefCount(this_00);
    LOCK();
    piVar1 = &this_00->NumRefs;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FIoBuffer::BufCore::~BufCore(this_00);
      ::operator_delete(this_00,0x20);
      return;
    }
  }
  return;
}

// operator-> @ 1417aab80

FIoBuffer * __thiscall TOptional<FIoBuffer>::operator->(TOptional<FIoBuffer> *this)

{
  code *pcVar1;
  bool bVar2;
  FIoBuffer *pFVar3;
  
  if (this->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FIoBuffer *)(*pcVar1)();
      return pFVar3;
    }
  }
  return &this->TypedValue;
}

// Reset @ 1419671d0

void __thiscall
TOptional<TValueOrError<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>_>
::Reset(TOptional<TValueOrError<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>_>
        *this)

{
  code *pcVar1;
  bool bVar2;
  ulonglong uVar3;
  
  if (this->bIsSet != false) {
    uVar3 = (ulonglong)(this->TypedValue).Variant.TypeIndex;
    if (2 < uVar3) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<struct_TCompiledToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar3])(this);
    this->bIsSet = false;
  }
  return;
}

// operator-> @ 141a9dbd0

FCrashReportingThread * __thiscall
TOptional<FCrashReportingThread>::operator->(TOptional<FCrashReportingThread> *this)

{
  code *pcVar1;
  bool bVar2;
  FCrashReportingThread *pFVar3;
  
  if (this->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FCrashReportingThread *)(*pcVar1)();
      return pFVar3;
    }
  }
  return &this->TypedValue;
}

// Emplace<> @ 141ae4100

FMutuallyReachableVertexSetContext * __thiscall
TOptional<AlgoImpl::FMutuallyReachableVertexSetContext>::Emplace<>
          (TOptional<AlgoImpl::FMutuallyReachableVertexSetContext> *this)

{
  if (this->bIsSet != false) {
    AlgoImpl::FMutuallyReachableVertexSetContext::~FMutuallyReachableVertexSetContext
              (&this->TypedValue);
  }
  *(undefined8 *)&(this->TypedValue).VisitedReferences.Elements.field_0x10 = 0;
  *(undefined8 *)&(this->TypedValue).VisitedReferences.Elements.field_0x18 = 0;
  (this->TypedValue).VisitedReferences.Hash.InlineData[0] = '\0';
  (this->TypedValue).VisitedReferences.Hash.InlineData[1] = '\0';
  (this->TypedValue).VisitedReferences.Hash.InlineData[2] = '\0';
  (this->TypedValue).VisitedReferences.Hash.InlineData[3] = '\0';
  (this->TypedValue).VisitedReferences.Hash._padding_ = 0;
  *(undefined8 *)&(this->TypedValue).VisitedReferences.HashSize = 0;
  *(undefined8 *)&(this->TypedValue).VisitedDependencies.Elements.field_0x10 = 0;
  *(undefined8 *)&(this->TypedValue).VisitedDependencies.Elements.field_0x18 = 0;
  (this->TypedValue).VisitedDependencies.Hash.InlineData[0] = '\0';
  (this->TypedValue).VisitedDependencies.Hash.InlineData[1] = '\0';
  (this->TypedValue).VisitedDependencies.Hash.InlineData[2] = '\0';
  (this->TypedValue).VisitedDependencies.Hash.InlineData[3] = '\0';
  (this->TypedValue).VisitedDependencies.Hash._padding_ = 0;
  *(undefined8 *)&(this->TypedValue).VisitedDependencies.HashSize = 0;
  *(undefined8 *)&(this->TypedValue).MaximalMRVS.Elements.field_0x10 = 0;
  *(undefined8 *)&(this->TypedValue).MaximalMRVS.Elements.field_0x18 = 0;
  (this->TypedValue).MaximalMRVS.Hash.InlineData[0] = '\0';
  (this->TypedValue).MaximalMRVS.Hash.InlineData[1] = '\0';
  (this->TypedValue).MaximalMRVS.Hash.InlineData[2] = '\0';
  (this->TypedValue).MaximalMRVS.Hash.InlineData[3] = '\0';
  (this->TypedValue).MaximalMRVS.Hash._padding_ = 0;
  *(undefined8 *)&(this->TypedValue).MaximalMRVS.HashSize = 0;
  *(undefined8 *)&(this->TypedValue).Culprits.Elements.field_0x10 = 0;
  *(undefined8 *)&(this->TypedValue).Culprits.Elements.field_0x18 = 0;
  (this->TypedValue).Culprits.Hash.InlineData[0] = '\0';
  (this->TypedValue).Culprits.Hash.InlineData[1] = '\0';
  (this->TypedValue).Culprits.Hash.InlineData[2] = '\0';
  (this->TypedValue).Culprits.Hash.InlineData[3] = '\0';
  (this->TypedValue).Culprits.Hash._padding_ = 0;
  *(undefined8 *)&(this->TypedValue).Culprits.HashSize = 0;
  *(undefined8 *)&(this->TypedValue).VisitedReferences.Elements = 0;
  *(undefined8 *)&(this->TypedValue).VisitedReferences.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->TypedValue).VisitedReferences.Elements.field_0x20 = 0;
  *(undefined4 *)&(this->TypedValue).VisitedReferences.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->TypedValue).VisitedReferences.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->TypedValue).VisitedReferences.Elements.field_0x34 = 0;
  *(undefined4 *)&(this->TypedValue).VisitedReferences.Elements.field_0x30 = 0xffffffff;
  (this->TypedValue).VisitedReferences.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  *(undefined8 *)&(this->TypedValue).VisitedDependencies.Elements = 0;
  *(undefined8 *)&(this->TypedValue).VisitedDependencies.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->TypedValue).VisitedDependencies.Elements.field_0x20 = 0;
  *(undefined4 *)&(this->TypedValue).VisitedDependencies.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->TypedValue).VisitedDependencies.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->TypedValue).VisitedDependencies.Elements.field_0x34 = 0;
  *(undefined4 *)&(this->TypedValue).VisitedDependencies.Elements.field_0x30 = 0xffffffff;
  (this->TypedValue).VisitedDependencies.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  *(undefined8 *)&(this->TypedValue).MaximalMRVS.Elements = 0;
  *(undefined8 *)&(this->TypedValue).MaximalMRVS.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->TypedValue).MaximalMRVS.Elements.field_0x20 = 0;
  *(undefined4 *)&(this->TypedValue).MaximalMRVS.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->TypedValue).MaximalMRVS.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->TypedValue).MaximalMRVS.Elements.field_0x34 = 0;
  *(undefined4 *)&(this->TypedValue).MaximalMRVS.Elements.field_0x30 = 0xffffffff;
  (this->TypedValue).MaximalMRVS.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  *(undefined8 *)&(this->TypedValue).Culprits.Elements = 0;
  *(undefined8 *)&(this->TypedValue).Culprits.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->TypedValue).Culprits.Elements.field_0x20 = 0;
  *(undefined4 *)&(this->TypedValue).Culprits.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->TypedValue).Culprits.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->TypedValue).Culprits.Elements.field_0x34 = 0;
  *(undefined4 *)&(this->TypedValue).Culprits.Elements.field_0x30 = 0xffffffff;
  (this->TypedValue).Culprits.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->TypedValue).Stack.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TypedValue).Stack.ArrayNum = 0;
  (this->TypedValue).Stack.ArrayMax = 0;
  (this->TypedValue).Cycle.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TypedValue).Cycle.ArrayNum = 0;
  (this->TypedValue).Cycle.ArrayMax = 0;
  this->bIsSet = true;
  return &this->TypedValue;
}

// operator= @ 141b2b530

TOptional<_protected:_void___cdecl_UE::ConcurrentQueuesTests::FConcurrentQueuesTest::TestBody(FString_const_&)_::_20_::FNonTrivial>
* __thiscall
TOptional<`UE::ConcurrentQueuesTests::FConcurrentQueuesTest::TestBody'::__l20::FNonTrivial>::
operator=(void *this,
         TOptional<_protected:_void___cdecl_UE::ConcurrentQueuesTests::FConcurrentQueuesTest::TestBody(FString_const_&)_::_20_::FNonTrivial>
         *param_1)

{
  code *pcVar1;
  bool bVar2;
  TOptional<_protected:_void___cdecl_UE::ConcurrentQueuesTests::FConcurrentQueuesTest::TestBody(FString_const_&)_::_20_::FNonTrivial>
  *pTVar3;
  
  if (param_1 != this) {
    if (param_1->bIsSet != false) {
      if (*(char *)((longlong)this + 8) != '\0') {
        if ((*(longlong *)this == -0x3232323232323233) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("Value != (int*)0xcdcdcdcdcdcdcdcd",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\ConcurrentQueuesTest.cpp"
                               ,0x138,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          pTVar3 = (TOptional<_protected:_void___cdecl_UE::ConcurrentQueuesTests::FConcurrentQueuesTest::TestBody(FString_const_&)_::_20_::FNonTrivial>
                    *)(*pcVar1)();
          return pTVar3;
        }
        ::operator_delete(*(void **)this,4);
        *(undefined8 *)this = 0xcdcdcdcdcdcdcdcd;
      }
      *(int **)this = (param_1->TypedValue).Value;
      (param_1->TypedValue).Value = (int *)0x0;
      *(undefined1 *)((longlong)this + 8) = 1;
      return this;
    }
    if (*(char *)((longlong)this + 8) != '\0') {
      if ((*(longlong *)this == -0x3232323232323233) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Value != (int*)0xcdcdcdcdcdcdcdcd",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\ConcurrentQueuesTest.cpp"
                             ,0x138,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TOptional<_protected:_void___cdecl_UE::ConcurrentQueuesTests::FConcurrentQueuesTest::TestBody(FString_const_&)_::_20_::FNonTrivial>
                  *)(*pcVar1)();
        return pTVar3;
      }
      ::operator_delete(*(void **)this,4);
      *(undefined8 *)this = 0xcdcdcdcdcdcdcdcd;
      *(undefined1 *)((longlong)this + 8) = 0;
    }
  }
  return this;
}

// operator-> @ 141bed3d0

FDriverDateDenyListEntry * __thiscall
TOptional<FDriverDenyListEntry::FDriverDateDenyListEntry>::operator->
          (TOptional<FDriverDenyListEntry::FDriverDateDenyListEntry> *this)

{
  code *pcVar1;
  bool bVar2;
  FDriverDateDenyListEntry *pFVar3;
  
  if (this->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FDriverDateDenyListEntry *)(*pcVar1)();
      return pFVar3;
    }
  }
  return &this->TypedValue;
}

// operator-> @ 141bed420

FDriverVersionDenyListEntry * __thiscall
TOptional<FDriverDenyListEntry::FDriverVersionDenyListEntry>::operator->
          (TOptional<FDriverDenyListEntry::FDriverVersionDenyListEntry> *this)

{
  code *pcVar1;
  bool bVar2;
  FDriverVersionDenyListEntry *pFVar3;
  
  if (this->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FDriverVersionDenyListEntry *)(*pcVar1)();
      return pFVar3;
    }
  }
  return &this->TypedValue;
}

