// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreOnline
// Functions: 16

// ReadNumber<wchar_t> @ 1446133c0

void __cdecl
FJsonSerializerPolicy_NestedVariant::ReadNumber<wchar_t>
          (TJsonReader<wchar_t> *param_1,
          TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>
          *param_2)

{
  double dVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  wint_t wVar5;
  int iVar6;
  wchar_t *pwVar7;
  
  if ((param_1->CurrentToken != Number) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentToken == EJsonToken::Number",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonReader.h"
                         ,200,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((param_1->StringValue).Data.ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(param_1->StringValue).Data.AllocatorInstance.Data;
  }
  wVar5 = *pwVar7;
  if ((wVar5 == 0x2d) || (wVar5 == 0x2b)) {
    pwVar7 = (wchar_t *)((longlong)pwVar7 + 2);
    wVar5 = *pwVar7;
  }
  if (wVar5 != 0) {
    wVar5 = *pwVar7;
    do {
      if ((wVar5 == 0x2e) || (iVar6 = iswdigit(wVar5), iVar6 == 0)) {
        if ((param_1->CurrentToken != Number) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("CurrentToken == EJsonToken::Number",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonReader.h"
                               ,0xc2,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        bVar2 = param_2->TypeIndex;
        dVar1 = param_1->NumberValue;
        if ((5 < (ulonglong)bVar2) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[bVar2] !=
            UE::Core::Private::TDestructorCaller<__int64>::Destruct) {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[bVar2])(param_2);
        }
        param_2->_padding_ = (longlong)dVar1;
        param_2->TypeIndex = '\x02';
        return;
      }
      wVar5 = *(wint_t *)((longlong)pwVar7 + 2);
      pwVar7 = (wchar_t *)((longlong)pwVar7 + 2);
    } while (wVar5 != 0);
  }
  if ((param_1->CurrentToken != Number) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentToken == EJsonToken::Number",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonReader.h"
                         ,0xc2,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  bVar2 = param_2->TypeIndex;
  dVar1 = param_1->NumberValue;
  if ((5 < (ulonglong)bVar2) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[bVar2])(param_2);
  param_2->_padding_ = (longlong)dVar1;
  param_2->TypeIndex = '\x01';
  return;
}

// SerializeIfArray<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> @ 144613ea0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
FJsonSerializerPolicy_NestedVariant::SerializeIfArray<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>
          (TArray<TSharedRef<FJsonSerializerPolicy_NestedVariant::FElement,1>,TSizedDefaultAllocator<32>_>
           *param_1,TSharedRef<FJsonSerializerPolicy_NestedVariant::FElement,1> *param_2,
          TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *param_3,bool param_4)

{
  TSharedRef<FJsonSerializerPolicy_NestedVariant::FElement,1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  FElement *pFVar3;
  longlong *plVar4;
  longlong lVar5;
  code *pcVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  undefined1 uVar10;
  int iVar11;
  uint uVar12;
  TReferenceControllerBase<1> *pTVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong lVar17;
  TReferenceControllerBase<1> *local_48;
  TReferenceControllerBase<1> *pTStack_40;
  
  uVar16 = (ulonglong)(param_2->Object->Value).TypeIndex;
  if ((5 < uVar16) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    uVar10 = (*pcVar6)();
    return (bool)uVar10;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,bool,__int64,double,FString,TSharedRef<class_TNestedVariantArray<class_FString,bool,__int64,double,class_FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar16) == '\0') {
    return false;
  }
  if (param_2->Object->bHasBeenProcessed != false) {
    TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteArrayEnd(param_3);
    return true;
  }
  param_2->Object->bHasBeenProcessed = true;
  pTVar1 = (TSharedRef<FJsonSerializerPolicy_NestedVariant::FElement,1> *)
           (param_1->AllocatorInstance).Data;
  if (((pTVar1 <= param_2) && (param_2 < pTVar1 + param_1->ArrayMax)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar9)) {
    pcVar6 = (code *)swi(3);
    uVar10 = (*pcVar6)();
    return (bool)uVar10;
  }
  iVar11 = param_1->ArrayNum;
  if (iVar11 == param_1->ArrayMax) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar11 + 1;
  pFVar14 = (param_1->AllocatorInstance).Data + (longlong)iVar11 * 0x10;
  *(FElement **)pFVar14 = param_2->Object;
  pTVar2 = (param_2->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar14 + 8) = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (param_4) {
    TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteArrayStart(param_3);
  }
  else {
    TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteArrayStart<FString_&>
              (param_3,&param_2->Object->Identifier);
  }
  pFVar3 = param_2->Object;
  if (((pFVar3->Value).TypeIndex != '\x04') &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    uVar10 = (*pcVar6)();
    return (bool)uVar10;
  }
  pTVar2 = (TReferenceControllerBase<1> *)(pFVar3->Value)._padding_;
  plVar4 = (longlong *)(pFVar3->Value)._padding_;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if ((plVar4 == (longlong *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    uVar10 = (*pcVar6)();
    return (bool)uVar10;
  }
  pTVar8 = _UNK_150651568;
  pTVar7 = ___xmm_00000000000000000000000000000010;
  uVar15 = (int)plVar4[1] - 1;
  if (-1 < (int)uVar15) {
    lVar17 = (longlong)(int)uVar15 * 0x18;
    do {
      if ((plVar4 == (longlong *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        uVar10 = (*pcVar6)();
        return (bool)uVar10;
      }
      uVar12 = 0;
      if ((int)uVar15 < (int)plVar4[1]) {
        uVar12 = ~uVar15 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        uVar10 = (*pcVar6)();
        return (bool)uVar10;
      }
      lVar5 = *plVar4;
      pTVar13 = ::operator_new(0x40);
      if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
        pTStack_40 = pTVar8;
        local_48 = pTVar7;
      }
      else {
        pTVar13->SharedReferenceCount = (atomic<int>)0x1;
        pTVar13->WeakReferenceCount = (atomic<int>)0x1;
        pTVar13->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_UFElement_FJsonSerializerPolicy_NestedVariant___00_SharedPointerInternals__6B_
        ;
        pTVar13[1]._padding_ = 0;
        pTVar13[1].SharedReferenceCount = (atomic<int>)0x0;
        pTVar13[1].WeakReferenceCount = (atomic<int>)0x0;
        TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>
        ::
        TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>
                  ((TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>
                    *)(pTVar13 + 2),
                   (TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>
                    *)(lVar5 + lVar17));
        local_48 = pTVar13 + 1;
        *(undefined2 *)&pTVar13[3].SharedReferenceCount = 0;
        pTStack_40 = pTVar13;
        if ((local_48 == (TReferenceControllerBase<1> *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L""), bVar9)) {
          pcVar6 = (code *)swi(3);
          uVar10 = (*pcVar6)();
          return (bool)uVar10;
        }
      }
      pFVar14 = (param_1->AllocatorInstance).Data;
      if (((pFVar14 <= (FScriptContainerElement *)&local_48) &&
          ((FScriptContainerElement *)&local_48 < pFVar14 + (longlong)param_1->ArrayMax * 0x10)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar6 = (code *)swi(3);
        uVar10 = (*pcVar6)();
        return (bool)uVar10;
      }
      iVar11 = param_1->ArrayNum;
      if (iVar11 == param_1->ArrayMax) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      param_1->ArrayNum = iVar11 + 1;
      pFVar14 = (param_1->AllocatorInstance).Data + (longlong)iVar11 * 0x10;
      *(TReferenceControllerBase<1> **)pFVar14 = local_48;
      *(TReferenceControllerBase<1> **)(pFVar14 + 8) = pTStack_40;
      if (pTStack_40 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTStack_40->SharedReferenceCount = (atomic<int>)((int)pTStack_40->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_40);
      lVar17 = lVar17 + -0x18;
      uVar15 = uVar15 - 1;
    } while (-1 < (int)uVar15);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return true;
}

// SerializeIfNumber<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> @ 1446142c0

bool __cdecl
FJsonSerializerPolicy_NestedVariant::SerializeIfNumber<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>
          (TSharedRef<FJsonSerializerPolicy_NestedVariant::FElement,1> *param_1,
          TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *param_2,bool param_3)

{
  int iVar1;
  FElement *pFVar2;
  FElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  EJsonToken EVar7;
  double *pdVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined2 local_res8 [4];
  undefined2 local_res20 [4];
  
  uVar11 = (ulonglong)(param_1->Object->Value).TypeIndex;
  if ((5 < uVar11) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  pFVar2 = param_1->Object;
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<__int64,bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar11) == '\0') {
    uVar11 = (ulonglong)(pFVar2->Value).TypeIndex;
    if ((5 < uVar11) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<double,bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar11) == '\0') {
      return false;
    }
    pdVar8 = TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>
             ::Get<double>(&param_1->Object->Value);
    if (param_3) {
      iVar1 = (param_2->Stack).ArrayNum;
      if (0 < iVar1) {
        uVar9 = 0;
        if ((int)(iVar1 - 1U) < iVar1) {
          uVar9 = ~(iVar1 - 1U) >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        if (((*(int *)((param_2->Stack).AllocatorInstance.Data +
                      (longlong)(param_2->Stack).ArrayNum * 4 + -4) != 5) &&
            (param_2->PreviousTokenWritten != Identifier)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("CanWriteValueWithoutIdentifier()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                               ,0xde,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
      }
      EVar7 = param_2->PreviousTokenWritten;
      if ((EVar7 != CurlyOpen) && ((Identifier < EVar7 || ((0x1013U >> (EVar7 & 0x1f) & 1) == 0))))
      {
        local_res20[0] = 0x2c;
        (**(code **)(*(longlong *)param_2->Stream + 0x188))(param_2->Stream,local_res20,2);
        param_2->PreviousTokenWritten = Comma;
      }
    }
    else {
      iVar1 = (param_2->Stack).ArrayNum;
      pFVar2 = param_1->Object;
      uVar10 = iVar1 - 1;
      uVar9 = 0;
      if ((int)uVar10 < iVar1) {
        uVar9 = ~uVar10 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      if ((*(int *)((param_2->Stack).AllocatorInstance.Data +
                   (longlong)(param_2->Stack).ArrayNum * 4 + -4) != 6) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Stack.Top() == EJson::Object",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                             ,0x110,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteIdentifier
                (param_2,&pFVar2->Identifier);
    }
    EVar7 = TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteValueOnly
                      (param_2,*pdVar8);
    param_2->PreviousTokenWritten = EVar7;
    return true;
  }
  if (param_3) {
    if (((pFVar2->Value).TypeIndex != '\x01') &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    bVar5 = TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::CanWriteValueWithoutIdentifier
                      (param_2);
    if ((!bVar5) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("CanWriteValueWithoutIdentifier()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                           ,0xde,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    EVar7 = param_2->PreviousTokenWritten;
    if ((EVar7 != CurlyOpen) && ((Identifier < EVar7 || ((0x1013U >> (EVar7 & 0x1f) & 1) == 0)))) {
      local_res8[0] = 0x2c;
      (**(code **)(*(longlong *)param_2->Stream + 0x188))(param_2->Stream,local_res8,2);
      param_2->PreviousTokenWritten = Comma;
    }
  }
  else {
    if (((pFVar2->Value).TypeIndex != '\x01') &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    iVar1 = (param_2->Stack).ArrayNum;
    pFVar3 = param_1->Object;
    uVar10 = iVar1 - 1;
    uVar9 = 0;
    if ((int)uVar10 < iVar1) {
      uVar9 = ~uVar10 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    if ((*(int *)((param_2->Stack).AllocatorInstance.Data +
                 (longlong)(param_2->Stack).ArrayNum * 4 + -4) != 6) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Stack.Top() == EJson::Object",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                           ,0x110,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteIdentifier
              (param_2,&pFVar3->Identifier);
  }
  EVar7 = TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteValueOnly
                    (param_2,(pFVar2->Value)._padding_);
  param_2->PreviousTokenWritten = EVar7;
  return true;
}

// SerializeIfObject<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> @ 1446146d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
FJsonSerializerPolicy_NestedVariant::SerializeIfObject<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>
          (TArray<TSharedRef<FJsonSerializerPolicy_NestedVariant::FElement,1>,TSizedDefaultAllocator<32>_>
           *param_1,TSharedRef<FJsonSerializerPolicy_NestedVariant::FElement,1> *param_2,
          TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *param_3,bool param_4)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  uint uVar2;
  TSharedRef<FJsonSerializerPolicy_NestedVariant::FElement,1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  FElement *pFVar5;
  longlong *plVar6;
  code *pcVar7;
  TReferenceControllerBase<1> *pTVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 uVar11;
  int iVar12;
  TReferenceControllerBase<1> *pTVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  int iVar16;
  TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>
  *pTVar17;
  uint uVar18;
  ulonglong uVar19;
  uint uVar20;
  TBitArray<FDefaultBitArrayAllocator> *pTVar21;
  longlong lVar22;
  undefined1 local_res10 [8];
  ForAnyElementType local_108;
  undefined8 local_100;
  ForAnyElementType local_f8;
  undefined8 local_f0;
  TReferenceControllerBase<1> *local_e8;
  TReferenceControllerBase<1> *pTStack_e0;
  longlong local_d8;
  longlong local_d0;
  TReferenceControllerBase<1> *local_c8;
  int local_c0;
  int local_bc;
  longlong *local_b8;
  int iStack_b0;
  uint uStack_ac;
  TBitArray<FDefaultBitArrayAllocator> *local_a8;
  undefined4 uStack_a0;
  int iStack_9c;
  int local_98;
  undefined4 uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  undefined4 local_3c;
  
  uVar19 = (ulonglong)(param_2->Object->Value).TypeIndex;
  if ((5 < uVar19) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0x12f,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    uVar11 = (*pcVar7)();
    return (bool)uVar11;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>,bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<class_TNestedVariantMap<class_FString,bool,__int64,double,class_FString>,1>_>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar19) == '\0') {
    bVar10 = false;
  }
  else if (param_2->Object->bHasBeenProcessed == false) {
    param_2->Object->bHasBeenProcessed = true;
    pTVar3 = (TSharedRef<FJsonSerializerPolicy_NestedVariant::FElement,1> *)
             (param_1->AllocatorInstance).Data;
    if (((pTVar3 <= param_2) && (param_2 < pTVar3 + param_1->ArrayMax)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar10)) {
      pcVar7 = (code *)swi(3);
      uVar11 = (*pcVar7)();
      return (bool)uVar11;
    }
    iVar12 = param_1->ArrayNum;
    if (iVar12 == param_1->ArrayMax) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar12 + 1;
    pFVar15 = (param_1->AllocatorInstance).Data + (longlong)iVar12 * 0x10;
    *(FElement **)pFVar15 = param_2->Object;
    pTVar4 = (param_2->SharedReferenceCount).ReferenceController;
    *(TReferenceControllerBase<1> **)(pFVar15 + 8) = pTVar4;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (param_4) {
      TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteObjectStart(param_3);
    }
    else {
      TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteObjectStart<FString_&>
                (param_3,&param_2->Object->Identifier);
    }
    pFVar5 = param_2->Object;
    local_f8.Data = (FScriptContainerElement *)0x0;
    local_f0 = 0;
    local_108.Data = (FScriptContainerElement *)0x0;
    local_100 = 0;
    if (((pFVar5->Value).TypeIndex != '\x05') &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index == TypeIndex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                            ,0x97,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      uVar11 = (*pcVar7)();
      return (bool)uVar11;
    }
    local_c8 = (TReferenceControllerBase<1> *)(pFVar5->Value)._padding_;
    plVar6 = (longlong *)(pFVar5->Value)._padding_;
    if (local_c8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_c8->SharedReferenceCount = (atomic<int>)((int)local_c8->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      local_c8->SharedReferenceCount = (atomic<int>)((int)local_c8->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_c8);
    if ((plVar6 == (longlong *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x44d,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      uVar11 = (*pcVar7)();
      return (bool)uVar11;
    }
    iVar12 = (int)plVar6[5];
    pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar6 + 2);
    iStack_b0 = 0;
    uStack_ac = 1;
    local_98 = 0;
    iStack_9c = iStack_b0;
    if (iVar12 != 0) {
      pTVar21 = (TBitArray<FDefaultBitArrayAllocator> *)plVar6[4];
      if ((TBitArray<FDefaultBitArrayAllocator> *)plVar6[4] ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar21 = pTVar1;
      }
      uVar20 = *(uint *)(pTVar21->AllocatorInstance).InlineData;
      local_98 = 0;
      iStack_b0 = 0;
      while (uVar20 == 0) {
        lVar14 = (longlong)iStack_b0;
        local_98 = local_98 + 0x20;
        iStack_b0 = iStack_b0 + 1;
        iStack_9c = iVar12;
        if ((int)(iVar12 + -1 + (iVar12 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_b0) goto LAB_14461492d;
        uVar20 = *(uint *)((pTVar21->AllocatorInstance).InlineData + lVar14 * 4 + 4);
      }
      uStack_ac = -uVar20 & uVar20;
      uVar19 = (ulonglong)uStack_ac * 2 + 1;
      lVar14 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_c0 = (int)lVar14;
      iStack_9c = local_98 + -1 + local_c0;
      if (iVar12 < iStack_9c) {
        iStack_9c = iVar12;
      }
    }
LAB_14461492d:
    uVar20 = *(uint *)(plVar6 + 5);
    uStack_94 = local_3c;
    uVar18 = uVar20 & 0xffffffe0;
    iStack_90 = (int)plVar6[1] - *(int *)((longlong)plVar6 + 0x34);
    uStack_a0 = 0xffffffff;
    TStack_80._padding_ = CONCAT44(uStack_ac,iStack_b0);
    TStack_80.CurrentBitIndex = iStack_9c;
    TStack_80.UnvisitedBitMask = 0xffffffff;
    iVar16 = (int)uVar20 >> 5;
    TStack_80._28_4_ = local_3c;
    TStack_80.BaseBitIndex = local_98;
    uStack_60 = CONCAT44(uStack_8c,iStack_90);
    local_b8 = plVar6;
    local_a8 = pTVar1;
    local_88 = plVar6;
    TStack_80.Array = pTVar1;
    if ((((int)uVar20 < 0) || (iVar12 < (int)uVar20)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      uVar11 = (*pcVar7)();
      return (bool)uVar11;
    }
    uVar2 = *(uint *)(plVar6 + 5);
    if (uVar20 != uVar2) {
      pTVar21 = pTVar1;
      if ((TBitArray<FDefaultBitArrayAllocator> *)plVar6[4] !=
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar21 = (TBitArray<FDefaultBitArrayAllocator> *)plVar6[4];
      }
      uVar20 = -1 << ((byte)uVar20 & 0x1f) &
               *(uint *)((pTVar21->AllocatorInstance).InlineData + (longlong)iVar16 * 4);
      while (uVar20 == 0) {
        lVar14 = (longlong)iVar16;
        uVar18 = uVar18 + 0x20;
        iVar16 = iVar16 + 1;
        uVar20 = uVar2;
        if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
        goto LAB_144614a30;
        uVar20 = *(uint *)((pTVar21->AllocatorInstance).InlineData + lVar14 * 4 + 4);
      }
      uVar19 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
      lVar14 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_bc = (int)lVar14;
      uVar20 = local_bc + -1 + uVar18;
      if ((int)uVar2 < (int)uVar20) {
        uVar20 = uVar2;
      }
    }
LAB_144614a30:
    while( true ) {
      plVar9 = local_88;
      if ((int)local_88[1] - *(int *)((longlong)local_88 + 0x34) != (int)uStack_60) {
        local_res10[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (((TStack_80.CurrentBitIndex == uVar20) && (TStack_80.Array == pTVar1)) &&
         (plVar9 == plVar6)) break;
      pFVar15 = (FScriptContainerElement *)(*plVar9 + (longlong)TStack_80.CurrentBitIndex * 0x30);
      if (((local_f8.Data <= pFVar15) && (pFVar15 < local_f8.Data + (longlong)local_f0._4_4_ * 0x10)
          ) && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar10)) {
        pcVar7 = (code *)swi(3);
        uVar11 = (*pcVar7)();
        return (bool)uVar11;
      }
      iVar12 = (int)local_f0;
      if ((int)local_f0 == local_f0._4_4_) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_f8,(int *)((longlong)&local_f0 + 4));
      }
      local_f0 = CONCAT44(local_f0._4_4_,iVar12 + 1);
      ::FString::FString((FString *)(local_f8.Data + (longlong)iVar12 * 0x10),(FString *)pFVar15);
      pTVar17 = (TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>
                 *)(pFVar15 + 0x10);
      if (((local_108.Data <= pTVar17) &&
          (pTVar17 < (TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>
                      *)(local_108.Data + (longlong)local_100._4_4_ * 0x18))) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar7 = (code *)swi(3);
        uVar11 = (*pcVar7)();
        return (bool)uVar11;
      }
      iVar12 = (int)local_100;
      if ((int)local_100 == local_100._4_4_) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&local_108,(int *)((longlong)&local_100 + 4));
      }
      local_100 = CONCAT44(local_100._4_4_,iVar12 + 1);
      TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>
      ::
      TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>
                ((TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>
                  *)(local_108.Data + (longlong)iVar12 * 0x18),pTVar17);
      TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
    }
    if ((int)local_f0 != (int)local_100) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Keys.Num() == Values.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreOnline\\Public\\Online\\NestedVariantJson.h"
                          ,0x121,L"");
      if (bVar10) {
        pcVar7 = (code *)swi(3);
        uVar11 = (*pcVar7)();
        return (bool)uVar11;
      }
    }
    pTVar8 = _UNK_150651568;
    pTVar4 = ___xmm_00000000000000000000000000000010;
    uVar20 = (int)local_100 - 1;
    if (-1 < (int)uVar20) {
      lVar14 = (longlong)(int)uVar20 << 4;
      lVar22 = (longlong)(int)uVar20 * 0x18;
      iVar12 = (int)local_100;
      while( true ) {
        uVar18 = 0;
        if ((int)uVar20 < iVar12) {
          uVar18 = ~uVar20 >> 0x1f;
        }
        local_d8 = lVar22;
        local_d0 = lVar14;
        if ((uVar18 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          uVar11 = (*pcVar7)();
          return (bool)uVar11;
        }
        pTVar17 = (TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>
                   *)(local_108.Data + lVar22);
        uVar18 = 0;
        if ((int)uVar20 < (int)local_f0) {
          uVar18 = ~uVar20 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          uVar11 = (*pcVar7)();
          return (bool)uVar11;
        }
        pFVar15 = local_f8.Data + lVar14;
        pTVar13 = ::operator_new(0x40);
        if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
          pTStack_e0 = pTVar8;
          local_e8 = pTVar4;
        }
        else {
          pTVar13->SharedReferenceCount = (atomic<int>)0x1;
          pTVar13->WeakReferenceCount = (atomic<int>)0x1;
          pTVar13->_padding_ =
               (longlong)
               &
               ___7__TIntrusiveReferenceController_UFElement_FJsonSerializerPolicy_NestedVariant___00_SharedPointerInternals__6B_
          ;
          ::FString::FString((FString *)(pTVar13 + 1),(FString *)pFVar15);
          TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>
          ::
          TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>
                    ((TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>
                      *)(pTVar13 + 2),pTVar17);
          local_e8 = pTVar13 + 1;
          *(undefined2 *)&pTVar13[3].SharedReferenceCount = 0x100;
          pTStack_e0 = pTVar13;
          if ((local_e8 == (TReferenceControllerBase<1> *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InObject != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x246,L""), bVar10)) {
            pcVar7 = (code *)swi(3);
            uVar11 = (*pcVar7)();
            return (bool)uVar11;
          }
        }
        pFVar15 = (param_1->AllocatorInstance).Data;
        if (((pFVar15 <= (FScriptContainerElement *)&local_e8) &&
            ((FScriptContainerElement *)&local_e8 < pFVar15 + (longlong)param_1->ArrayMax * 0x10))
           && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar10)) {
          pcVar7 = (code *)swi(3);
          uVar11 = (*pcVar7)();
          return (bool)uVar11;
        }
        iVar12 = param_1->ArrayNum;
        if (iVar12 == param_1->ArrayMax) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        pFVar15 = (param_1->AllocatorInstance).Data + (longlong)iVar12 * 0x10;
        param_1->ArrayNum = iVar12 + 1;
        *(TReferenceControllerBase<1> **)pFVar15 = local_e8;
        *(TReferenceControllerBase<1> **)(pFVar15 + 8) = pTStack_e0;
        if (pTStack_e0 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTStack_e0->SharedReferenceCount =
               (atomic<int>)((int)pTStack_e0->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_e0);
        lVar22 = local_d8 + -0x18;
        lVar14 = local_d0 + -0x10;
        uVar20 = uVar20 - 1;
        local_d8 = lVar22;
        local_d0 = lVar14;
        if ((int)uVar20 < 0) break;
        iVar12 = (int)local_100;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_c8);
    DestructItems<TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>,int>
              ((TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>
                *)local_108.Data,(int)local_100);
    if ((TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>
         *)local_108.Data !=
        (TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>
         *)0x0) {
      FMemory::Free(local_108.Data);
    }
    DestructItems<FString,int>((FString *)local_f8.Data,(int)local_f0);
    if (local_f8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data);
    }
    bVar10 = true;
  }
  else {
    TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteObjectEnd(param_3);
    bVar10 = true;
  }
  return bVar10;
}

// SerializeIfString<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> @ 144614ed0

bool __cdecl
FJsonSerializerPolicy_NestedVariant::SerializeIfString<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>
          (TSharedRef<FJsonSerializerPolicy_NestedVariant::FElement,1> *param_1,
          TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *param_2,bool param_3)

{
  uchar uVar1;
  EJsonToken EVar2;
  int iVar3;
  FElement *pFVar4;
  longlong lVar5;
  FElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  ulonglong uVar13;
  undefined2 local_res8 [4];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  
  uVar13 = (ulonglong)(param_1->Object->Value).TypeIndex;
  if (5 < uVar13) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      uVar9 = (*pcVar7)();
      return (bool)uVar9;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FString,bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar13) == '\0') {
    bVar8 = false;
  }
  else {
    pFVar4 = param_1->Object;
    uVar1 = (pFVar4->Value).TypeIndex;
    if (param_3) {
      if (uVar1 != '\x03') {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L"");
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          uVar9 = (*pcVar7)();
          return (bool)uVar9;
        }
      }
      bVar8 = TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::
              CanWriteValueWithoutIdentifier(param_2);
      if (!bVar8) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("CanWriteValueWithoutIdentifier()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                           ,0xde,L"");
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          uVar9 = (*pcVar7)();
          return (bool)uVar9;
        }
      }
      EVar2 = param_2->PreviousTokenWritten;
      if ((EVar2 != CurlyOpen) && ((Identifier < EVar2 || ((0x1013U >> (EVar2 & 0x1f) & 1) == 0))))
      {
        local_res8[0] = 0x2c;
        (**(code **)(*(longlong *)param_2->Stream + 0x188))(param_2->Stream,local_res8,2);
        param_2->PreviousTokenWritten = Comma;
      }
      lVar5 = (pFVar4->Value)._padding_;
      puVar12 = &local_28;
      iVar3 = (int)(pFVar4->Value)._padding_;
      iStack_20 = iVar3 + -1;
      if (iVar3 == 0) {
        iStack_20 = 0;
      }
      local_48 = (undefined4)lVar5;
      uStack_44 = (undefined4)((ulonglong)lVar5 >> 0x20);
      local_28 = local_48;
      uStack_24 = uStack_44;
    }
    else {
      if (uVar1 != '\x03') {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L"");
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          uVar9 = (*pcVar7)();
          return (bool)uVar9;
        }
      }
      iVar3 = (param_2->Stack).ArrayNum;
      pFVar6 = param_1->Object;
      uVar11 = iVar3 - 1;
      uVar10 = 0;
      if ((int)uVar11 < iVar3) {
        uVar10 = ~uVar11 >> 0x1f;
      }
      if (uVar10 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          uVar9 = (*pcVar7)();
          return (bool)uVar9;
        }
      }
      if (*(int *)((param_2->Stack).AllocatorInstance.Data +
                  (longlong)(param_2->Stack).ArrayNum * 4 + -4) != 6) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Stack.Top() == EJson::Object",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                           ,0x110,L"");
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          uVar9 = (*pcVar7)();
          return (bool)uVar9;
        }
      }
      TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteIdentifier
                (param_2,&pFVar6->Identifier);
      lVar5 = (pFVar4->Value)._padding_;
      puVar12 = &local_18;
      iVar3 = (int)(pFVar4->Value)._padding_;
      iStack_10 = iVar3 + -1;
      if (iVar3 == 0) {
        iStack_10 = 0;
      }
      local_38 = (undefined4)lVar5;
      uStack_34 = (undefined4)((ulonglong)lVar5 >> 0x20);
      local_18 = local_38;
      uStack_14 = uStack_34;
    }
    (**(code **)(param_2->_padding_ + 0x28))(param_2,puVar12);
    bVar8 = true;
    param_2->PreviousTokenWritten = String;
  }
  return bVar8;
}

// AddValueToArray @ 1446164e0

void __cdecl
FJsonSerializerPolicy_NestedVariant::AddValueToArray
          (StackState *param_1,
          TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>
          *param_2)

{
  TNestedVariantArray<FString,bool,__int64,double,FString> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  if ((param_1->Array).Object == (TNestedVariantArray<FString,bool,__int64,double,FString> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pTVar1 = (param_1->Array).Object;
  if ((*(TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>
         **)&pTVar1->field_0x0 <= param_2) &&
     (param_2 < *(TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>
                  **)&pTVar1->field_0x0 + *(int *)(&pTVar1->field_0x8 + 4))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = *(int *)&pTVar1->field_0x8;
  if (iVar4 == *(int *)(&pTVar1->field_0x8 + 4)) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,(ForAnyElementType *)pTVar1,(int *)(&pTVar1->field_0x8 + 4));
  }
  *(int *)&pTVar1->field_0x8 = iVar4 + 1;
  TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>
  ::
  TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>
            ((TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>
              *)(*(FScriptContainerElement **)&pTVar1->field_0x0 + (longlong)iVar4 * 0x18),param_2);
  return;
}

// AddValueToObject @ 1446165d0

void __cdecl
FJsonSerializerPolicy_NestedVariant::AddValueToObject
          (StackState *param_1,FString *param_2,
          TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>
          *param_3)

{
  code *pcVar1;
  bool bVar2;
  FString *local_18;
  TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>
  *local_10;
  
  if ((param_1->Object).Object == (TNestedVariantMap<FString,bool,__int64,double,FString> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_18 = param_2;
  local_10 = param_3;
  TSet<TTuple<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>_>,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FString_const_&,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>_const_&>_>
            ((TSet<TTuple<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>_>,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>,0>,FDefaultSetAllocator>
              *)(param_1->Object).Object,
             (TPairInitializer<FString_const_&,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>_const_&>
              *)&stack0x00000008,(bool *)&local_18);
  return;
}

// GetValueFromState @ 144617150

bool __cdecl
FJsonSerializerPolicy_NestedVariant::GetValueFromState
          (StackState *param_1,
          TSharedPtr<TNestedVariantArray<FString,bool,__int64,double,FString>,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  TNestedVariantArray<FString,bool,__int64,double,FString> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  if (param_1->Type != Array) {
    return false;
  }
  pTVar1 = (param_1->Array).SharedReferenceCount.ReferenceController;
  pTVar2 = (param_1->Array).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (param_2->SharedReferenceCount).ReferenceController;
  param_2->Object = pTVar2;
  (param_2->SharedReferenceCount).ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return true;
}

// GetValueFromState @ 1446171a0

bool __cdecl
FJsonSerializerPolicy_NestedVariant::GetValueFromState
          (StackState *param_1,
          TSharedPtr<TNestedVariantMap<FString,bool,__int64,double,FString>,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  TNestedVariantMap<FString,bool,__int64,double,FString> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  if (param_1->Type != Object) {
    return false;
  }
  pTVar1 = (param_1->Object).SharedReferenceCount.ReferenceController;
  pTVar2 = (param_1->Object).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (param_2->SharedReferenceCount).ReferenceController;
  param_2->Object = pTVar2;
  (param_2->SharedReferenceCount).ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return true;
}

// GetValueFromState @ 1446171f0

bool __cdecl
FJsonSerializerPolicy_NestedVariant::GetValueFromState
          (StackState *param_1,
          TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>
          *param_2)

{
  byte bVar1;
  TNestedVariantMap<FString,bool,__int64,double,FString> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  TNestedVariantArray<FString,bool,__int64,double,FString> *pTVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  
  if (param_1->Type != Array) {
    if (param_1->Type != Object) {
      return false;
    }
    pTVar2 = (param_1->Object).Object;
    if (pTVar2 != (TNestedVariantMap<FString,bool,__int64,double,FString> *)0x0) {
      pTVar3 = (param_1->Object).SharedReferenceCount.ReferenceController;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      bVar1 = param_2->TypeIndex;
      if ((5 < (ulonglong)bVar1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[bVar1])(param_2);
      param_2->_padding_ = (longlong)pTVar2;
      param_2->_padding_ = (longlong)pTVar3;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      param_2->TypeIndex = '\x05';
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return true;
    }
  }
  pTVar4 = (param_1->Array).Object;
  if (pTVar4 == (TNestedVariantArray<FString,bool,__int64,double,FString> *)0x0) {
    return false;
  }
  pTVar3 = (param_1->Array).SharedReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar1 = param_2->TypeIndex;
  if ((5 < (ulonglong)bVar1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[bVar1] ==
      UE::Core::Private::
      TDestructorCaller<TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>::
      Destruct) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)param_2->_padding_);
  }
  else {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[bVar1])(param_2);
  }
  param_2->_padding_ = (longlong)pTVar4;
  param_2->_padding_ = (longlong)pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  param_2->TypeIndex = '\x04';
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return true;
}

// ReadArrayEnd @ 144618c40

void __cdecl
FJsonSerializerPolicy_NestedVariant::ReadArrayEnd
          (StackState *param_1,
          TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>
          *param_2)

{
  byte bVar1;
  TNestedVariantArray<FString,bool,__int64,double,FString> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  
  if ((param_1->Array).Object == (TNestedVariantArray<FString,bool,__int64,double,FString> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pTVar2 = (param_1->Array).Object;
  pTVar3 = (param_1->Array).SharedReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pTVar2 == (TNestedVariantArray<FString,bool,__int64,double,FString> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  bVar1 = param_2->TypeIndex;
  if (5 < (ulonglong)bVar1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[bVar1])(param_2);
  param_2->_padding_ = (longlong)pTVar2;
  param_2->_padding_ = (longlong)pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  param_2->TypeIndex = '\x04';
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// ReadArrayStart @ 144618d40

void __cdecl FJsonSerializerPolicy_NestedVariant::ReadArrayStart(StackState *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TNestedVariantArray<FString,bool,__int64,double,FString> *pTVar8;
  TNestedVariantArray<FString,bool,__int64,double,FString> *local_18;
  FSharedReferencer<1> local_10;
  
  param_1->Type = Array;
  pTVar6 = ::operator_new(0x30);
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar8 = (TNestedVariantArray<FString,bool,__int64,double,FString> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8 = (TNestedVariantArray<FString,bool,__int64,double,FString> *)(pTVar6 + 1);
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TNestedVariantArray_VFString___N_JNV1____00_SharedPointerInternals__6B_
    ;
    pTVar6[1]._padding_ = 0;
    pTVar6[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[2]._padding_ = 0;
    pTVar6[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7 = pTVar6;
    if (pTVar8 == (TNestedVariantArray<FString,bool,__int64,double,FString> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      goto LAB_144618e46;
    }
  }
  if (((*(longlong *)&pTVar8->field_0x10 == 0) || (*(longlong *)&pTVar8->field_0x18 == 0)) ||
     (*(int *)(*(longlong *)&pTVar8->field_0x18 + 8) < 1)) {
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(TNestedVariantArray<FString,bool,__int64,double,FString> **)&pTVar8->field_0x10 = pTVar8;
    if (pTVar7 != *(TReferenceControllerBase<1> **)&pTVar8->field_0x18) {
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->WeakReferenceCount = (atomic<int>)((int)pTVar7->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar8->field_0x18;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      *(TReferenceControllerBase<1> **)&pTVar8->field_0x18 = pTVar7;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  }
LAB_144618e46:
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18 = pTVar8;
  local_10.ReferenceController = pTVar7;
  if (&param_1->Array !=
      (TSharedPtr<TNestedVariantArray<FString,bool,__int64,double,FString>,1> *)&local_18) {
    (param_1->Array).Object = pTVar8;
    local_18 = (TNestedVariantArray<FString,bool,__int64,double,FString> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(param_1->Array).SharedReferenceCount,&local_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return;
}

// ReadNull @ 144618ec0

void __cdecl
FJsonSerializerPolicy_NestedVariant::ReadNull
          (TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>
           *param_1)

{
  return;
}

// ReadObjectEnd @ 144618ed0

void __cdecl
FJsonSerializerPolicy_NestedVariant::ReadObjectEnd
          (StackState *param_1,
          TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>
          *param_2)

{
  byte bVar1;
  TNestedVariantMap<FString,bool,__int64,double,FString> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  
  if ((param_1->Object).Object == (TNestedVariantMap<FString,bool,__int64,double,FString> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pTVar2 = (param_1->Object).Object;
  pTVar3 = (param_1->Object).SharedReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pTVar2 == (TNestedVariantMap<FString,bool,__int64,double,FString> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  bVar1 = param_2->TypeIndex;
  if (5 < (ulonglong)bVar1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[bVar1])(param_2);
  param_2->_padding_ = (longlong)pTVar2;
  param_2->_padding_ = (longlong)pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  param_2->TypeIndex = '\x05';
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// ReadObjectStart @ 144618fd0

void __cdecl FJsonSerializerPolicy_NestedVariant::ReadObjectStart(StackState *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TNestedVariantMap<FString,bool,__int64,double,FString> *pTVar8;
  TNestedVariantMap<FString,bool,__int64,double,FString> *local_18;
  FSharedReferencer<1> local_10;
  
  param_1->Type = Object;
  pTVar6 = ::operator_new(0x70);
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar8 = (TNestedVariantMap<FString,bool,__int64,double,FString> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8 = (TNestedVariantMap<FString,bool,__int64,double,FString> *)(pTVar6 + 1);
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TNestedVariantMap_VFString___N_JNV1____00_SharedPointerInternals__6B_
    ;
    pTVar6[2]._padding_ = 0;
    pTVar6[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[1]._padding_ = 0;
    pTVar6[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[3]._padding_ = 0;
    pTVar6[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[3].WeakReferenceCount = (atomic<int>)0x80;
    *(undefined4 *)&pTVar6[4]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pTVar6[4]._padding_ + 4) = 0;
    pTVar6[5]._padding_ = 0;
    pTVar6[6]._padding_ = 0;
    pTVar6[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[6].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7 = pTVar6;
    if (pTVar8 == (TNestedVariantMap<FString,bool,__int64,double,FString> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      goto LAB_1446190fe;
    }
  }
  if (((*(longlong *)&pTVar8->field_0x50 == 0) || (*(longlong *)&pTVar8->field_0x58 == 0)) ||
     (*(int *)(*(longlong *)&pTVar8->field_0x58 + 8) < 1)) {
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(TNestedVariantMap<FString,bool,__int64,double,FString> **)&pTVar8->field_0x50 = pTVar8;
    if (pTVar7 != *(TReferenceControllerBase<1> **)&pTVar8->field_0x58) {
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->WeakReferenceCount = (atomic<int>)((int)pTVar7->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar8->field_0x58;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))();
        }
      }
      *(TReferenceControllerBase<1> **)&pTVar8->field_0x58 = pTVar7;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  }
LAB_1446190fe:
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18 = pTVar8;
  local_10.ReferenceController = pTVar7;
  if (&param_1->Object !=
      (TSharedPtr<TNestedVariantMap<FString,bool,__int64,double,FString>,1> *)&local_18) {
    (param_1->Object).Object = pTVar8;
    local_18 = (TNestedVariantMap<FString,bool,__int64,double,FString> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(param_1->Object).SharedReferenceCount,&local_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return;
}

// ResetValue @ 144619e50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FJsonSerializerPolicy_NestedVariant::ResetValue
          (TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>
           *param_1)

{
  code *pcVar1;
  ulonglong uVar2;
  longlong lVar3;
  bool bVar4;
  ulonglong uVar5;
  undefined1 auStack_68 [32];
  ulonglong local_48;
  longlong lStack_40;
  ulonglong local_38;
  TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>
  local_30;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_30._padding_._0_1_ = 0;
  local_30.TypeIndex = 0;
  if (&local_30 != param_1) {
    uVar5 = *(ulonglong *)&param_1->TypeIndex;
    uVar2 = param_1->_padding_;
    lVar3 = param_1->_padding_;
    local_38 = local_38 & 0xffffffffffffff00;
    local_48 = local_48 & 0xffffffffffffff00;
    param_1->_padding_ = local_48;
    param_1->_padding_ = lStack_40;
    *(ulonglong *)&param_1->TypeIndex = local_38;
    local_48 = uVar2;
    lStack_40 = lVar3;
    local_38 = uVar5;
    if (5 < (uVar5 & 0xff)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5 & 0xff] !=
        UE::Core::Private::TDestructorCaller<bool>::Destruct) {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5 & 0xff])(&local_48);
    }
  }
  uVar5 = (ulonglong)local_30.TypeIndex;
  if (5 < uVar5) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar5] != UE::Core::Private::TDestructorCaller<bool>::Destruct)
  {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar5])(&local_30);
  }
  return;
}

