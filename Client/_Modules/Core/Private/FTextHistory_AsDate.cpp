// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// FTextHistory_AsDate @ 141736a00

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FTextHistory_AsDate * __thiscall
FTextHistory_AsDate::FTextHistory_AsDate
          (FTextHistory_AsDate *this,FString *param_1,FDateTime param_2,Type param_3,
          FString *param_4,TSharedPtr<FCulture,1> *param_5)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FTextHistory_Generated__6B_;
  this->_padding_ = 0;
  this->_padding_ = (longlong)(param_1->Data).AllocatorInstance.Data;
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)&this->_padding_ = (param_1->Data).ArrayNum;
  *(int *)((longlong)&this->_padding_ + 4) = (param_1->Data).ArrayMax;
  (param_1->Data).ArrayNum = 0;
  (param_1->Data).ArrayMax = 0;
  FTextHistory::MarkDisplayStringUpToDate((FTextHistory *)this);
  (this->SourceDateTime).Ticks = param_2.Ticks;
  this->DateStyle = param_3;
  this->_padding_ = (longlong)&___7FTextHistory_AsDate__6B_;
  (this->TimeZone).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TimeZone).Data.AllocatorInstance.Data = (param_4->Data).AllocatorInstance.Data;
  (param_4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TimeZone).Data.ArrayNum = (param_4->Data).ArrayNum;
  (this->TimeZone).Data.ArrayMax = (param_4->Data).ArrayMax;
  (param_4->Data).ArrayNum = 0;
  (param_4->Data).ArrayMax = 0;
  (this->TargetCulture).Object = param_5->Object;
  (this->TargetCulture).SharedReferenceCount.ReferenceController =
       (param_5->SharedReferenceCount).ReferenceController;
  (param_5->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_5->Object = (FCulture *)0x0;
  if (this->DateStyle == Custom) {
    this->DateStyle = Default;
  }
  pFVar1 = (param_4->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_5->SharedReferenceCount).ReferenceController);
  return this;
}

// BuildInvariantDisplayString @ 141749970

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FString * __thiscall
FTextHistory_AsDate::BuildInvariantDisplayString
          (FTextHistory_AsDate *this,FString *__return_storage_ptr__)

{
  FCulture *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  FInternationalization *pFVar5;
  FString *pFVar6;
  
  pFVar5 = FInternationalization::Get();
  if (pFVar5->bIsInitialized != true) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("I18N.IsInitialized() == true",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\TextHistory.cpp"
                       ,0x7d5,
                       L"FInternationalization is not initialized. An FText formatting method was likely used in static object initialization - this is not supported."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar3)();
      return pFVar6;
    }
  }
  if ((pFVar5->InvariantCulture).Object == (FCulture *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar3)();
      return pFVar6;
    }
  }
  pFVar1 = (pFVar5->InvariantCulture).Object;
  pTVar2 = (pFVar5->InvariantCulture).SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pFVar1 == (FCulture *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar3)();
      return pFVar6;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  FTextChronoFormatter::AsDate
            (__return_storage_ptr__,&this->SourceDateTime,this->DateStyle,&this->TimeZone,pFVar1);
  return __return_storage_ptr__;
}

// BuildLocalizedDisplayString @ 14174a2a0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FString * __thiscall
FTextHistory_AsDate::BuildLocalizedDisplayString
          (FTextHistory_AsDate *this,FString *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FInternationalization *pFVar4;
  FString *pFVar5;
  FCulture *pFVar6;
  
  pFVar4 = FInternationalization::Get();
  if (pFVar4->bIsInitialized != true) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("I18N.IsInitialized() == true",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\TextHistory.cpp"
                       ,0x7cc,
                       L"FInternationalization is not initialized. An FText formatting method was likely used in static object initialization - this is not supported."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar2)();
      return pFVar5;
    }
  }
  pFVar6 = (this->TargetCulture).Object;
  if (pFVar6 == (FCulture *)0x0) {
    if ((pFVar4->CurrentLocale).Object == (FCulture *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FString *)(*pcVar2)();
        return pFVar5;
      }
    }
    pFVar6 = (pFVar4->CurrentLocale).Object;
    pTVar1 = (pFVar4->CurrentLocale).SharedReferenceCount.ReferenceController;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar6 == (FCulture *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FString *)(*pcVar2)();
        return pFVar5;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  FTextChronoFormatter::AsDate
            (__return_storage_ptr__,&this->SourceDateTime,this->DateStyle,&this->TimeZone,pFVar6);
  return __return_storage_ptr__;
}

// GetType @ 141761ba0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

ETextHistoryType __thiscall FTextHistory_AsDate::GetType(FTextHistory_AsDate *this)

{
  return AsDate;
}

// IdenticalTo @ 1417631f0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

bool __thiscall
FTextHistory_AsDate::IdenticalTo
          (FTextHistory_AsDate *this,FTextHistory *param_1,ETextIdenticalModeFlags param_2)

{
  int iVar1;
  bool bVar2;
  
  if ((this->SourceDateTime).Ticks != *(longlong *)&param_1[1].Mutex) {
    return false;
  }
  if (this->DateStyle != (Type)param_1[2]._padding_) {
    return false;
  }
  iVar1 = (this->TimeZone).Data.ArrayNum;
  if (iVar1 == *(int *)&param_1[2].Mutex) {
    if (iVar1 < 2) goto LAB_14176323e;
    iVar1 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(this->TimeZone).Data.AllocatorInstance.Data,
                       *(wchar_t **)&param_1[2]._padding_);
    bVar2 = iVar1 == 0;
  }
  else {
    bVar2 = iVar1 + *(int *)&param_1[2].Mutex == 1;
  }
  if (!bVar2) {
    return false;
  }
LAB_14176323e:
  if ((this->TargetCulture).Object != (FCulture *)param_1[3]._padding_) {
    return false;
  }
  return true;
}

// ReadFromBuffer @ 14176f6c0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

wchar_t * __thiscall
FTextHistory_AsDate::ReadFromBuffer
          (FTextHistory_AsDate *this,wchar_t *param_1,wchar_t *param_2,wchar_t *param_3)

{
  wchar_t *pwVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::FString(&TokenMarker,*TextStringificationUtil::LocGenDateMarker);
      atexit(`FTextHistory_AsDate::ReadFromBuffer'::__l2::
             _dynamic_atexit_destructor_for__TokenMarker__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  pwVar1 = TextStringificationUtil::ReadDateTimeFromBuffer
                     (param_1,&TokenMarker,&this->SourceDateTime,&this->DateStyle,(Type *)0x0,
                      (FString *)0x0,&this->TimeZone,&this->TargetCulture);
  if (pwVar1 == (wchar_t *)0x0) {
    return (wchar_t *)0x0;
  }
  FTextHistory::MarkDisplayStringOutOfDate((FTextHistory *)this);
  return pwVar1;
}

// Serialize @ 14177a560

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall
FTextHistory_AsDate::Serialize(FTextHistory_AsDate *this,FStructuredArchiveRecord param_1)

{
  long64 *plVar1;
  undefined1 *puVar2;
  FCulture *this_00;
  FScriptContainerElement *_Src;
  bool bVar3;
  bool bVar4;
  FArchive *pFVar5;
  FArchive *pFVar6;
  FString *pFVar7;
  FInternationalization *this_01;
  TSharedPtr<FCulture,1> *pTVar8;
  ForAnyElementType FVar9;
  int iVar10;
  undefined4 local_res8 [2];
  FSlotBase local_res10;
  FSlotBase local_res18 [2];
  TSharedPtr<FCulture,1> local_48;
  FString local_38;
  
  local_res8[0] = 0;
  local_res10.StructuredArchive = (FStructuredArchive *)param_1;
  local_res18[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar5 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
  if ((pFVar5->field_0x28 & 1) != 0) {
    FTextHistory::MarkDisplayStringOutOfDate((FTextHistory *)this);
  }
  pFVar6 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res10);
  pFVar5 = (local_res10.StructuredArchive)->Formatter->Inner;
  plVar1 = (long64 *)**(longlong **)&pFVar5->field_0x8;
  if ((long64 *)(*(longlong **)&pFVar5->field_0x8)[1] < plVar1 + 1) {
    if ((pFVar5->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar5 + 0x188))(pFVar5,&this->SourceDateTime,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar5,(ulong64 *)&this->SourceDateTime);
    }
  }
  else {
    (this->SourceDateTime).Ticks = *plVar1;
    **(longlong **)&pFVar5->field_0x8 = **(longlong **)&pFVar5->field_0x8 + 8;
  }
  bVar4 = true;
  bVar3 = false;
  local_res8[0] = CONCAT31(local_res8[0]._1_3_,(char)this->DateStyle);
  pFVar5 = (local_res10.StructuredArchive)->Formatter->Inner;
  puVar2 = (undefined1 *)**(undefined8 **)&pFVar5->field_0x8;
  if ((undefined1 *)(*(undefined8 **)&pFVar5->field_0x8)[1] < puVar2 + 1) {
    (**(code **)(*(longlong *)pFVar5 + 0x188))(pFVar5,local_res8,1);
  }
  else {
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,*puVar2);
    **(longlong **)&pFVar5->field_0x8 = **(longlong **)&pFVar5->field_0x8 + 1;
  }
  this->DateStyle = (int)(char)local_res8[0];
  if (0x1a5 < *(int *)&pFVar6->field_0x40) {
    ::operator<<((local_res10.StructuredArchive)->Formatter->Inner,&this->TimeZone);
  }
  if ((pFVar6->field_0x28 & 4) == 0) {
    if ((pFVar6->field_0x28 & 1) == 0) {
      return;
    }
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    ::operator<<((local_res10.StructuredArchive)->Formatter->Inner,&local_38);
    FVar9.Data = local_38.Data.AllocatorInstance.Data;
    if (1 < local_38.Data.ArrayNum) {
      this_01 = FInternationalization::Get();
      pTVar8 = FInternationalization::GetCulture(this_01,&local_48,&local_38);
      if (&this->TargetCulture != pTVar8) {
        (this->TargetCulture).Object = pTVar8->Object;
        pTVar8->Object = (FCulture *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->TargetCulture).SharedReferenceCount,&pTVar8->SharedReferenceCount);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)
                 CONCAT44(local_48.SharedReferenceCount.ReferenceController._4_4_,
                          (int)local_48.SharedReferenceCount.ReferenceController));
      FVar9.Data = local_38.Data.AllocatorInstance.Data;
    }
    goto LAB_14177a7df;
  }
  this_00 = (this->TargetCulture).Object;
  if (this_00 == (FCulture *)0x0) {
    bVar4 = false;
    bVar3 = true;
    local_48.SharedReferenceCount.ReferenceController._0_4_ = 0;
    FVar9.Data = (FScriptContainerElement *)0x0;
LAB_14177a736:
    local_48.Object = (FCulture *)0x0;
    local_48.SharedReferenceCount.ReferenceController._4_4_ = 0;
    if ((bVar3) && (FVar9.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(FVar9.Data);
    }
    if (bVar4) goto LAB_14177a751;
  }
  else {
    pFVar7 = FCulture::GetName(this_00);
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar10 = (pFVar7->Data).ArrayNum;
    _Src = (pFVar7->Data).AllocatorInstance.Data;
    local_38.Data.ArrayNum = iVar10;
    if (iVar10 == 0) {
      local_38.Data.ArrayNum = 0;
      local_38.Data.ArrayMax = 0;
      iVar10 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar10,0,(ForAnyElementType *)&local_38,iVar10,&local_38.Data.ArrayMax);
      memcpy(local_38.Data.AllocatorInstance.Data,_Src,(longlong)iVar10 * 2);
      iVar10 = local_38.Data.ArrayNum;
    }
    FVar9.Data = local_38.Data.AllocatorInstance.Data;
    local_48.Object = (FCulture *)0x0;
    local_48.SharedReferenceCount.ReferenceController._0_4_ = iVar10;
    if (iVar10 == 0) goto LAB_14177a736;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar10,0,(ForAnyElementType *)&local_48,iVar10,
               (int *)((longlong)&local_48.SharedReferenceCount.ReferenceController + 4));
    memcpy(local_48.Object,FVar9.Data,(longlong)iVar10 * 2);
LAB_14177a751:
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  ::operator<<((local_res10.StructuredArchive)->Formatter->Inner,(FString *)&local_48);
  FVar9.Data = (FScriptContainerElement *)local_48.Object;
LAB_14177a7df:
  if ((FCulture *)FVar9.Data != (FCulture *)0x0) {
    FMemory::Free(FVar9.Data);
  }
  return;
}

// ShouldReadFromBuffer @ 14177dfc0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

bool __thiscall
FTextHistory_AsDate::ShouldReadFromBuffer(FTextHistory_AsDate *this,wchar_t *param_1)

{
  int iVar1;
  
  iVar1 = wcsncmp(param_1,*TextStringificationUtil::LocGenDateMarker,0xb);
  return iVar1 == 0;
}

// StaticShouldReadFromBuffer @ 14177ea40

bool __cdecl FTextHistory_AsDate::StaticShouldReadFromBuffer(wchar_t *param_1)

{
  int iVar1;
  
  iVar1 = wcsncmp(param_1,*TextStringificationUtil::LocGenDateMarker,0xb);
  return iVar1 == 0;
}

// WriteToBuffer @ 141784f90

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

bool __thiscall
FTextHistory_AsDate::WriteToBuffer(FTextHistory_AsDate *this,FString *param_1,bool param_2)

{
  TSharedPtr<FCulture,1> local_18;
  
  local_18.Object = (this->TargetCulture).Object;
  local_18.SharedReferenceCount.ReferenceController =
       (this->TargetCulture).SharedReferenceCount.ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  TextStringificationUtil::WriteDateTimeToBuffer
            (param_1,*TextStringificationUtil::LocGenDateMarker,&this->SourceDateTime,
             &this->DateStyle,(Type *)0x0,(FString *)0x0,&this->TimeZone,&local_18,param_2);
  return true;
}

