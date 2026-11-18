// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 14

// FVerseStringProperty @ 142258940

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

FVerseStringProperty * __thiscall
FVerseStringProperty::FVerseStringProperty
          (FVerseStringProperty *this,FFieldVariant param_1,FGenericPropertyParams *param_2)

{
  ulonglong uVar1;
  ulonglong local_res8;
  
  uVar1 = *(ulonglong *)param_1.Container;
  if ((((uVar1 & 1) != 0) && ((UObject *)(uVar1 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
     (UE::GC::GIsIncrementalReachabilityPending)) {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
  if ((((uVar1 & 1) != 0) && ((UObject *)(uVar1 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
     (UE::GC::GIsIncrementalReachabilityPending != false)) {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
  local_res8 = uVar1;
  if ((((uVar1 & 1) != 0) && ((UObject *)(uVar1 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
     (UE::GC::GIsIncrementalReachabilityPending != false)) {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
  FProperty::FProperty
            ((FProperty *)this,(FFieldVariant)&local_res8,(FPropertyParamsBaseWithOffset *)param_2,
             CPF_HasGetValueTypeHash|CPF_ZeroConstructor);
  this->_padding_ = (longlong)&___7__TProperty_VFNativeString_Verse__VFProperty____6B_;
  FProperty::SetElementSize((FProperty *)this,0x10);
  this->_padding_ = (longlong)&___7FVerseStringProperty__6B_;
  this->Inner = (FProperty *)0x0;
  return this;
}

// operator_new @ 142259f60

void * __cdecl FVerseStringProperty::operator_new(ulong64 param_1)

{
  FField *this;
  FFieldClass *pFVar1;
  
  this = FMemory::Malloc(param_1,0);
  if (this != (FField *)0x0) {
    pFVar1 = StaticClass();
    FField::FField(this,EC_InternalUseOnlyConstructor,pFVar1);
    this->_padding_ = (longlong)&___7FVerseStringProperty__6B_;
    this[1].Next = (FField *)0x0;
    this[1].NamePrivate.ComparisonIndex = 0;
    this[1].NamePrivate.Number = 0;
    *(undefined8 *)&this[1].FlagsPrivate = 0;
    this[2]._padding_ = 0;
    this[2].ClassPrivate = (FFieldClass *)0x0;
    this[2].Owner.Container.Field = (FField *)0x0;
  }
  return this;
}

// GetFieldSize @ 14226f290

ulong64 __thiscall FVerseStringProperty::GetFieldSize(FVerseStringProperty *this)

{
  return 0x78;
}

// ~FVerseStringProperty @ 142295e40

void __thiscall FVerseStringProperty::~FVerseStringProperty(FVerseStringProperty *this)

{
  FProperty *pFVar1;
  
  this->_padding_ = (longlong)&___7FVerseStringProperty__6B_;
  pFVar1 = this->Inner;
  if (pFVar1 != (FProperty *)0x0) {
    (**(code **)(pFVar1->_padding_ + 8))(pFVar1,1);
  }
  this->Inner = (FProperty *)0x0;
  FField::~FField((FField *)this);
  return;
}

// AddCppProperty @ 142297720

void __thiscall FVerseStringProperty::AddCppProperty(FVerseStringProperty *this,FProperty *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (FProperty *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Property",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\VerseStringProperty.cpp"
                       ,0x6e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->Inner != (FProperty *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Inner",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\VerseStringProperty.cpp"
                       ,0x6f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->Inner = param_1;
  return;
}

// AddReferencedObjects @ 142297850

void __thiscall
FVerseStringProperty::AddReferencedObjects(FVerseStringProperty *this,FReferenceCollector *param_1)

{
  FProperty *pFVar1;
  
  FField::AddReferencedObjects((FField *)this,param_1);
  pFVar1 = this->Inner;
  if (pFVar1 != (FProperty *)0x0) {
    (**(code **)(pFVar1->_padding_ + 0x30))(pFVar1,param_1);
  }
  return;
}

// Construct @ 142298fe0

FField * __cdecl
FVerseStringProperty::Construct(FFieldVariant *param_1,FName *param_2,EObjectFlags param_3)

{
  ulonglong uVar1;
  FProperty *this;
  ulonglong local_res20;
  
  this = operator_new(0x78);
  if (this == (FProperty *)0x0) {
    return (FField *)0x0;
  }
  uVar1 = (param_1->Container).Unknown;
  local_res20 = uVar1;
  if ((((uVar1 & 1) == 0) || ((UObject *)(uVar1 & 0xfffffffffffffffe) == (UObject *)0x0)) ||
     (UE::GC::GIsIncrementalReachabilityPending == false)) {
    if ((uVar1 & 1) != 0) {
      if ((uVar1 & 0xfffffffffffffffe) != 0) goto LAB_14229906f;
      goto LAB_142299088;
    }
LAB_1422990ac:
    if (((uVar1 & 1) == 0) || ((uVar1 & 0xfffffffffffffffe) == 0)) goto LAB_1422990cb;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
LAB_14229906f:
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_142299088:
      if ((uVar1 & 0xfffffffffffffffe) == 0) goto LAB_1422990ac;
    }
    else {
      UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
    }
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_1422990ac;
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
LAB_1422990cb:
  FProperty::FProperty(this,(FFieldVariant)&local_res20,param_2,param_3);
  this->_padding_ = (longlong)&___7__TProperty_VFNativeString_Verse__VFProperty____6B_;
  FProperty::SetElementSize(this,0x10);
  this->_padding_ = (longlong)&___7FVerseStringProperty__6B_;
  this[1]._padding_ = 0;
  return (FField *)this;
}

// ExportText_Internal @ 14229a4d0

/* WARNING: Removing unreachable block (ram,0x00014229a5b5) */

void __thiscall
FVerseStringProperty::ExportText_Internal
          (FVerseStringProperty *this,FString *param_1,void *param_2,EPropertyPointerType param_3,
          void *param_4,UObject *param_5,int param_6,UObject *param_7)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  FUtf8String *pFVar5;
  TSharedRef<Verse::FNativeString::FCopyOnWriteContents,1> *pTVar6;
  FString *pFVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  FScriptContainerElement *_Src;
  int iVar10;
  int iVar11;
  TSharedPtr<Verse::FNativeString::FCopyOnWriteContents,1> local_c8;
  FUtf8String local_b8;
  FString local_a8;
  TSharedPtr<Verse::FNativeString::FCopyOnWriteContents,1> local_98;
  TSharedPtr<Verse::FNativeString::FCopyOnWriteContents,1> local_88;
  FString local_78;
  FUtf8String local_68;
  TSharedRef<Verse::FNativeString::FCopyOnWriteContents,1> local_58;
  TSharedRef<Verse::FNativeString::FCopyOnWriteContents,1> local_48;
  FString local_38;
  FString local_28;
  
  _Src = (FScriptContainerElement *)0x0;
  local_c8.Object = (FCopyOnWriteContents *)0x0;
  local_c8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  iVar11 = 0;
  if (param_3 == Container) {
    cVar2 = (**(code **)(this->_padding_ + 0x78))();
    if (cVar2 == '\0') {
      param_2 = (void *)((longlong)*(int *)((longlong)&this->_padding_ + 4) + (longlong)param_2);
      goto LAB_14229a542;
    }
    FProperty::GetValue_InContainer((FProperty *)this,param_2,&local_c8);
  }
  else {
LAB_14229a542:
    local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.Data.ArrayNum = 0;
    local_b8.Data.ArrayMax = 0;
    Verse::FNativeString::FCopyOnWrite::SetIfNull(param_2);
    if (((((FCopyOnWrite *)param_2)->Payload).Object == (FCopyOnWriteContents *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar4 = (((((FCopyOnWrite *)param_2)->Payload).Object)->String).Data.ArrayNum;
    pFVar5 = Verse::FNativeString::FCopyOnWrite::Write(param_2);
    iVar10 = iVar4 + -1;
    if (iVar4 == 0) {
      iVar10 = iVar11;
    }
    pFVar5 = FUtf8String::ConstructFromPtrSize
                       (&local_68,(uchar *)(pFVar5->Data).AllocatorInstance.Data,iVar10);
    if (&local_b8 != pFVar5) {
      local_b8.Data.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
      (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b8.Data.ArrayNum = (pFVar5->Data).ArrayNum;
      local_b8.Data.ArrayMax = (pFVar5->Data).ArrayMax;
      (pFVar5->Data).ArrayNum = 0;
      (pFVar5->Data).ArrayMax = 0;
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    pTVar6 = MakeShared<Verse::FNativeString::FCopyOnWriteContents,1,FUtf8String_&>
                       (&local_58,&local_b8);
    local_98.Object = pTVar6->Object;
    local_98.SharedReferenceCount.ReferenceController =
         (pTVar6->SharedReferenceCount).ReferenceController;
    if (local_98.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
    TSharedPtr<Verse::FNativeString::FCopyOnWriteContents,1>::operator=(&local_c8,&local_98);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_98.SharedReferenceCount.ReferenceController);
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
  }
  Verse::FNativeString::FCopyOnWrite::SetIfNull((FCopyOnWrite *)&local_c8);
  if ((local_c8.Object == (FCopyOnWriteContents *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar4 = ((local_c8.Object)->String).Data.ArrayNum;
  iVar9 = 0;
  iVar10 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar10 = iVar9;
  }
  bVar3 = Verse::FNativeString::FCopyOnWrite::SetIfNull((FCopyOnWrite *)&local_c8);
  if (!bVar3) {
    if ((local_c8.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) ||
       ((local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount !=
        (atomic<int>)0x1)) {
      if ((local_c8.Object == (FCopyOnWriteContents *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pTVar6 = MakeShared<Verse::FNativeString::FCopyOnWriteContents,1,FUtf8String_&>
                         (&local_48,&(local_c8.Object)->String);
      local_88.Object = pTVar6->Object;
      local_88.SharedReferenceCount.ReferenceController =
           (pTVar6->SharedReferenceCount).ReferenceController;
      if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      TSharedPtr<Verse::FNativeString::FCopyOnWriteContents,1>::operator=(&local_c8,&local_88);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_88.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_48.SharedReferenceCount.ReferenceController);
    }
    if ((local_c8.Object == (FCopyOnWriteContents *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (local_c8.Object)->CachedHash = 0;
  }
  if ((local_c8.Object == (FCopyOnWriteContents *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pFVar7 = ::FString::ConstructFromPtrSize
                     (&local_38,(uchar *)((local_c8.Object)->String).Data.AllocatorInstance.Data,
                      iVar10);
  if (&local_28 != pFVar7) {
    _Src = (pFVar7->Data).AllocatorInstance.Data;
    (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar11 = (pFVar7->Data).ArrayNum;
    (pFVar7->Data).ArrayNum = 0;
    (pFVar7->Data).ArrayMax = 0;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((param_6 & 1U) == 0) {
    pFVar8 = _Src;
    iVar4 = iVar11 + -1;
    if (iVar11 == 0) {
      iVar4 = 0;
    }
  }
  else {
    iVar4 = iVar11 + -1;
    if (iVar11 == 0) {
      iVar4 = iVar9;
    }
    if (0 < iVar4) {
      local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a8.Data.ArrayNum = iVar11;
      if (iVar11 == 0) {
        local_a8.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar11,0,(ForAnyElementType *)&local_a8,iVar11,&local_a8.Data.ArrayMax);
        memcpy(local_a8.Data.AllocatorInstance.Data,_Src,(longlong)iVar11 * 2);
      }
      ::FString::ReplaceCharWithEscapedCharInline
                (&local_a8,(TArray<wchar_t,TSizedDefaultAllocator<32>_> *)0x0);
      ::FString::PrintfImpl(&local_78,L"\"%s\"");
      iVar11 = local_78.Data.ArrayNum + -1;
      if (local_78.Data.ArrayNum == 0) {
        iVar11 = iVar9;
      }
      ::FString::AppendChars(param_1,(wchar_t *)local_78.Data.AllocatorInstance.Data,iVar11);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
      goto LAB_14229a890;
    }
    pFVar8 = (FScriptContainerElement *)L"\"\"";
    iVar4 = 2;
  }
  ::FString::AppendChars(param_1,(wchar_t *)pFVar8,iVar4);
LAB_14229a890:
  if (_Src != (FScriptContainerElement *)0x0) {
    FMemory::Free(_Src);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c8.SharedReferenceCount.ReferenceController);
  return;
}

// GetValueTypeHashInternal @ 14229eb50

uint __thiscall
FVerseStringProperty::GetValueTypeHashInternal(FVerseStringProperty *this,void *param_1)

{
  uint uVar1;
  
  uVar1 = Verse::FNativeString::FCopyOnWrite::Hash(param_1);
  return uVar1;
}

// ImportText_Internal @ 1422a02f0

wchar_t * __thiscall
FVerseStringProperty::ImportText_Internal
          (FVerseStringProperty *this,wchar_t *param_1,void *param_2,EPropertyPointerType param_3,
          UObject *param_4,int param_5,FOutputDevice *param_6)

{
  char cVar1;
  size_t sVar2;
  wchar_t *pwVar3;
  FUtf8String *pFVar4;
  TSharedRef<Verse::FNativeString::FCopyOnWriteContents,1> *pTVar5;
  int iVar6;
  wchar_t *pwVar7;
  int iVar8;
  undefined1 local_68 [8];
  TReferenceControllerBase<1> *local_60;
  FUtf8String local_58;
  FUtf8String local_48;
  TSharedPtr<Verse::FNativeString::FCopyOnWriteContents,1> local_38;
  TSharedRef<Verse::FNativeString::FCopyOnWriteContents,1> local_28;
  
  pwVar7 = (wchar_t *)0x0;
  local_68 = (undefined1  [8])0x0;
  local_60 = (TReferenceControllerBase<1> *)0x0;
  if ((param_5 & 1U) == 0) {
    ::FString::operator=((FString *)local_68,param_1);
    sVar2 = wcslen(param_1);
    pwVar3 = param_1 + (int)sVar2;
    iVar6 = (int)local_60;
LAB_1422a0412:
    pwVar7 = pwVar3;
    if (param_3 == Container) {
      cVar1 = (**(code **)(this->_padding_ + 0x70))(this);
      iVar6 = (int)local_60;
      if (cVar1 != '\0') {
        local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_58.Data.ArrayNum = 0;
        local_58.Data.ArrayMax = 0;
        iVar6 = (int)local_60 + -1;
        if ((int)local_60 == 0) {
          iVar6 = 0;
        }
        pFVar4 = FUtf8String::ConstructFromPtrSize
                           ((FUtf8String *)&local_28,(wchar_t *)local_68,iVar6);
        if (&local_58 != pFVar4) {
          local_58.Data.AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
          (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_58.Data.ArrayNum = (pFVar4->Data).ArrayNum;
          local_58.Data.ArrayMax = (pFVar4->Data).ArrayMax;
          (pFVar4->Data).ArrayNum = 0;
          (pFVar4->Data).ArrayMax = 0;
        }
        if (local_28.Object != (FCopyOnWriteContents *)0x0) {
          FMemory::Free(local_28.Object);
        }
        pTVar5 = MakeShared<Verse::FNativeString::FCopyOnWriteContents,1,FUtf8String_&>
                           (&local_28,&local_58);
        local_38.Object = pTVar5->Object;
        local_38.SharedReferenceCount.ReferenceController =
             (pTVar5->SharedReferenceCount).ReferenceController;
        if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_28.SharedReferenceCount.ReferenceController);
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        FProperty::SetValue_InContainer((FProperty *)this,param_2,&local_38);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_38.SharedReferenceCount.ReferenceController);
        goto LAB_1422a03b3;
      }
    }
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    iVar8 = iVar6 + -1;
    if (iVar6 == 0) {
      iVar8 = 0;
    }
    pFVar4 = FUtf8String::ConstructFromPtrSize((FUtf8String *)&local_28,(wchar_t *)local_68,iVar8);
    if (&local_48 != pFVar4) {
      local_48.Data.AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
      (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.Data.ArrayNum = (pFVar4->Data).ArrayNum;
      local_48.Data.ArrayMax = (pFVar4->Data).ArrayMax;
      (pFVar4->Data).ArrayNum = 0;
      (pFVar4->Data).ArrayMax = 0;
    }
    if (local_28.Object != (FCopyOnWriteContents *)0x0) {
      FMemory::Free(local_28.Object);
    }
    pTVar5 = MakeShared<Verse::FNativeString::FCopyOnWriteContents,1,FUtf8String_&>
                       (&local_28,&local_48);
    local_38.Object = pTVar5->Object;
    local_38.SharedReferenceCount.ReferenceController =
         (pTVar5->SharedReferenceCount).ReferenceController;
    if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (param_3 == Container) {
      param_2 = (void *)((longlong)*(int *)((longlong)&this->_padding_ + 4) + (longlong)param_2);
    }
    TSharedPtr<Verse::FNativeString::FCopyOnWriteContents,1>::operator=(param_2,&local_38);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  else {
    if (*param_1 != L'\"') {
      FOutputDevice::LogfImpl(param_6,L"Missing opening \'\"\' in string property value: %s");
      pwVar7 = (wchar_t *)0x0;
      goto LAB_1422a03b3;
    }
    local_38.Object = (FCopyOnWriteContents *)0x0;
    local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pwVar3 = FPropertyHelpers::ReadToken(param_1,(FString *)&local_38,false);
    if (pwVar3 != (wchar_t *)0x0) {
      if ((pwVar3 <= param_1) || (pwVar3[-1] == L'\"')) {
        if (local_68 != (undefined1  [8])0x0) {
          FMemory::Free((void *)local_68);
        }
        local_68 = (undefined1  [8])local_38.Object;
        local_60 = local_38.SharedReferenceCount.ReferenceController;
        iVar6 = (int)local_38.SharedReferenceCount.ReferenceController;
        goto LAB_1422a0412;
      }
      FOutputDevice::LogfImpl(param_6,L"Missing terminating \'\"\' in string property value: %s");
    }
    if (local_38.Object != (FCopyOnWriteContents *)0x0) {
      FMemory::Free(local_38.Object);
    }
  }
LAB_1422a03b3:
  if (local_68 != (undefined1  [8])0x0) {
    FMemory::Free((void *)local_68);
  }
  return pwVar7;
}

// LoadTypeName @ 1422a0f80

bool __thiscall
FVerseStringProperty::LoadTypeName
          (FVerseStringProperty *this,FPropertyTypeName param_1,FPropertyTag *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FByteProperty *pFVar4;
  FFieldClass *pFVar5;
  FName local_res20;
  FVerseStringProperty *local_18 [2];
  
  bVar2 = FProperty::LoadTypeName((FProperty *)this,param_1,param_2);
  if (!bVar2) {
    return false;
  }
  pFVar4 = FMemory::Malloc(0x78,0);
  if (pFVar4 == (FByteProperty *)0x0) {
    pFVar4 = (FByteProperty *)0x0;
  }
  else {
    pFVar5 = FByteProperty::StaticClass();
    FField::FField((FField *)pFVar4,EC_InternalUseOnlyConstructor,pFVar5);
    pFVar4->_padding_ = (longlong)&___7FByteProperty__6B_;
    pFVar4->_padding_ = 0;
    pFVar4->_padding_ = 0;
    pFVar4->_padding_ = 0;
    pFVar4->_padding_ = 0;
    pFVar4->_padding_ = 0;
    (pFVar4->Enum).field0_0x0.DebugPtr = (UEnum *)0x0;
    bVar2 = IsThisNotNull(this,"FField::GetFName");
    if (bVar2) {
      local_res20 = (FName)this->_padding_;
    }
    else {
      local_res20.ComparisonIndex.Value = 0;
      local_res20.Number = 0;
    }
    local_18[0] = this;
    if (((ulonglong)this & 1) != 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsUObject()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                         ,0x180,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    pFVar4 = FByteProperty::FByteProperty(pFVar4,(FFieldVariant)local_18,&local_res20,RF_NoFlags);
  }
  this->Inner = (FProperty *)pFVar4;
  return true;
}

// SaveTypeName @ 1422a6070

void __thiscall
FVerseStringProperty::SaveTypeName(FVerseStringProperty *this,FPropertyTypeNameBuilder *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  FProperty::SaveTypeName((FProperty *)this,param_1);
  if ((this->Inner != (FProperty *)0x0) && ((*(byte *)(this->Inner->_padding_ + 0x18) & 0x40) == 0))
  {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Inner || Inner->IsA<FByteProperty>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\VerseStringProperty.cpp"
                       ,0x81,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// Serialize @ 1422a6340

void __thiscall FVerseStringProperty::Serialize(FVerseStringProperty *this,FArchive *param_1)

{
  code *pcVar1;
  bool bVar2;
  FProperty *pFVar3;
  FName local_res8;
  FName local_res10;
  FFieldObjectUnion local_res18;
  undefined8 local_res20;
  
  FProperty::Serialize((FProperty *)this,param_1);
  local_res18 = (FFieldObjectUnion)this;
  if ((((ulonglong)this & 1) != 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsUObject()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                         ,0x180,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((param_1->field_0x28 & 1) == 0) {
    if (this->Inner == (FProperty *)0x0) {
      local_res20 = 0;
    }
    else {
      local_res20 = *(undefined8 *)this->Inner->_padding_;
    }
    (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&local_res20);
    pFVar3 = this->Inner;
    if (pFVar3 == (FProperty *)0x0) {
      return;
    }
  }
  else {
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&local_res8);
    if (local_res8 == (FName)0x0) {
      this->Inner = (FProperty *)0x0;
      return;
    }
    local_res10.ComparisonIndex.Value = 0;
    local_res10.Number = 0;
    pFVar3 = (FProperty *)
             FField::Construct(&local_res8,(FFieldVariant *)&local_res18,&local_res10,RF_NoFlags);
    if ((pFVar3 == (FProperty *)0x0) ||
       (((uint)(int)((FFieldClass *)pFVar3->_padding_)->CastFlags >> 0xf & 1) == 0)) {
      this->Inner = (FProperty *)0x0;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Field",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                         ,0x4aa,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar3 = this->Inner;
    }
    else {
      this->Inner = pFVar3;
    }
  }
  (**(code **)(pFVar3->_padding_ + 0x10))(pFVar3,param_1);
  return;
}

// StaticClass @ 1422a7880

FFieldClass * __cdecl FVerseStringProperty::StaticClass(void)

{
  FFieldClass *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = FProperty::StaticClass();
      FFieldClass::FFieldClass
                (&::StaticFieldClass,L"FVerseStringProperty",0x800000000000000,
                 CASTCLASS_FVerseStringProperty|CASTCLASS_FProperty|CASTCLASS_UField,pFVar1,
                 Construct);
      atexit(`FVerseStringProperty::StaticClass'::__l2::
             _dynamic_atexit_destructor_for__StaticFieldClass__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticFieldClass;
    }
  }
  return &::StaticFieldClass;
}

