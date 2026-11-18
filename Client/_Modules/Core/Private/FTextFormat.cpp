// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 19

// FTextFormat @ 141735280

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FTextFormat * __thiscall
FTextFormat::FTextFormat
          (FTextFormat *this,FString *param_1,
          TSharedRef<FTextFormatPatternDefinition_const_,1> *param_2,ETextFormatFlags param_3)

{
  ETextFormatFlags local_res20 [8];
  
  local_res20[0] = param_3;
  MakeShared<FTextFormatData,1,FString,enum_ETextFormatFlags_&,TSharedRef<FTextFormatPatternDefinition_const_,1>_>
            (&this->TextFormatData,param_1,local_res20,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// FTextFormat @ 1417352c0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FTextFormat * __thiscall
FTextFormat::FTextFormat
          (FTextFormat *this,FText *param_1,
          TSharedRef<FTextFormatPatternDefinition_const_,1> *param_2,ETextFormatFlags param_3)

{
  undefined1 local_res8 [8];
  ETextFormatFlags local_res20 [8];
  FText local_18;
  
  local_18.TextData.Reference = (param_1->TextData).Reference;
  local_res20[0] = param_3;
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 8))
              (local_18.TextData.Reference,local_res8);
  }
  local_18.Flags = param_1->Flags;
  MakeShared<FTextFormatData,1,FText,enum_ETextFormatFlags_&,TSharedRef<FTextFormatPatternDefinition_const_,1>_>
            (&this->TextFormatData,&local_18,local_res20,param_2);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// FTextFormat @ 141735350

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FTextFormat * __thiscall
FTextFormat::FTextFormat(FTextFormat *this,FText *param_1,ETextFormatFlags param_2)

{
  TSharedRef<FTextFormatPatternDefinition_const_,1> *pTVar1;
  undefined1 local_res8 [8];
  ETextFormatFlags local_res18 [8];
  FText local_28;
  TSharedRef<FTextFormatPatternDefinition_const_,1> local_18;
  
  local_res18[0] = param_2;
  pTVar1 = FTextFormatPatternDefinition::GetDefault(&local_18);
  local_28.TextData.Reference = (param_1->TextData).Reference;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 8))
              (local_28.TextData.Reference,local_res8);
  }
  local_28.Flags = param_1->Flags;
  MakeShared<FTextFormatData,1,FText,enum_ETextFormatFlags_&,TSharedRef<FTextFormatPatternDefinition_const_,1>_>
            (&this->TextFormatData,&local_28,local_res18,pTVar1);
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// FTextFormat @ 1417353e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FTextFormat * __thiscall FTextFormat::FTextFormat(FTextFormat *this)

{
  atomic<int> *paVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<FTextFormatPatternDefinition_const_,1> *pTVar4;
  FText *pFVar5;
  FSharedReferencer<1> FVar6;
  FTextFormat *pFVar7;
  TRefCountPtr<ITextData> TVar8;
  undefined1 local_res8 [8];
  FText local_38;
  TSharedRef<FTextFormatPatternDefinition_const_,1> local_28;
  TSharedRef<FTextFormatPatternDefinition_const_,1> local_18;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pTVar4 = FTextFormatPatternDefinition::GetDefault(&local_18);
    pFVar5 = FText::GetEmpty();
    TVar8.Reference = (pFVar5->TextData).Reference;
    local_38.TextData.Reference = TVar8.Reference;
    if (TVar8.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar8.Reference + 8))(TVar8.Reference,local_res8);
    }
    local_38.Flags = 0;
    FVar6.ReferenceController = ::operator_new(0x98);
    if (FVar6.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      EmptyInstance = ___xmm_00000000000000000000000000000010;
    }
    else {
      (FVar6.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
      (FVar6.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
      (FVar6.ReferenceController)->_padding_ =
           (longlong)
           &___7__TIntrusiveReferenceController_VFTextFormatData___00_SharedPointerInternals__6B_;
      local_28.SharedReferenceCount.ReferenceController =
           (pTVar4->SharedReferenceCount).ReferenceController;
      local_28.Object = pTVar4->Object;
      if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      FTextFormatData::FTextFormatData
                ((FTextFormatData *)(FVar6.ReferenceController + 1),&local_38,Default,&local_28);
      EmptyInstance.SharedReferenceCount.ReferenceController = FVar6.ReferenceController;
      EmptyInstance.Object = (FTextFormatData *)(FVar6.ReferenceController + 1);
      TVar8.Reference = local_38.TextData.Reference;
      if (((FTextFormatData *)(FVar6.ReferenceController + 1) == (FTextFormatData *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), TVar8.Reference = local_38.TextData.Reference, bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar7 = (FTextFormat *)(*pcVar2)();
        return pFVar7;
      }
    }
    if (TVar8.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar8.Reference + 0x10))(TVar8.Reference);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    atexit(`FTextFormatData::GetSharedEmptyInstance'::__l2::
           _dynamic_atexit_destructor_for__EmptyInstance__);
    _Init_thread_footer(&::_TSS0);
  }
  (this->TextFormatData).Object = EmptyInstance.Object;
  FVar6.ReferenceController = EmptyInstance.SharedReferenceCount.ReferenceController;
  (this->TextFormatData).SharedReferenceCount.ReferenceController =
       EmptyInstance.SharedReferenceCount.ReferenceController;
  if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar6.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  return this;
}

// ~FTextFormat @ 141739600

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall FTextFormat::~FTextFormat(FTextFormat *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TextFormatData).SharedReferenceCount.ReferenceController);
  return;
}

// FromString @ 14175aa90

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FTextFormat * __cdecl
FTextFormat::FromString
          (FTextFormat *__return_storage_ptr__,FString *param_1,
          TSharedRef<FTextFormatPatternDefinition_const_,1> *param_2,ETextFormatFlags param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  ETextFormatFlags local_res20 [8];
  TSharedRef<FTextFormatPatternDefinition_const_,1> local_18;
  
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  local_18.Object = param_2->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_res20[0] = param_3;
  local_18.SharedReferenceCount.ReferenceController = pTVar1;
  MakeShared<FTextFormatData,1,FString,enum_ETextFormatFlags_&,TSharedRef<FTextFormatPatternDefinition_const_,1>_>
            (&__return_storage_ptr__->TextFormatData,param_1,local_res20,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// FromString @ 14175ab00

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FTextFormat * __cdecl
FTextFormat::FromString
          (FTextFormat *__return_storage_ptr__,FString *param_1,ETextFormatFlags param_2)

{
  TSharedRef<FTextFormatPatternDefinition_const_,1> *pTVar1;
  ETextFormatFlags local_res18 [16];
  TSharedRef<FTextFormatPatternDefinition_const_,1> local_18;
  
  local_res18[0] = param_2;
  pTVar1 = FTextFormatPatternDefinition::GetDefault(&local_18);
  MakeShared<FTextFormatData,1,FString,enum_ETextFormatFlags_&,TSharedRef<FTextFormatPatternDefinition_const_,1>_>
            (&__return_storage_ptr__->TextFormatData,param_1,local_res18,pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pTVar1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// FromString @ 14175ab60

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FTextFormat * __cdecl
FTextFormat::FromString
          (FTextFormat *__return_storage_ptr__,FString *param_1,
          TSharedRef<FTextFormatPatternDefinition_const_,1> *param_2,ETextFormatFlags param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  FScriptContainerElement *_Src;
  longlong lVar2;
  ETextFormatFlags local_res20 [8];
  FString local_38;
  TSharedRef<FTextFormatPatternDefinition_const_,1> local_28;
  
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  local_28.Object = param_2->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38.Data.ArrayNum = (param_1->Data).ArrayNum;
  lVar2 = (longlong)local_38.Data.ArrayNum;
  _Src = (param_1->Data).AllocatorInstance.Data;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.SharedReferenceCount.ReferenceController = pTVar1;
  if (local_38.Data.ArrayNum == 0) {
    local_38.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)&local_38,local_38.Data.ArrayNum,
               &local_38.Data.ArrayMax);
    memcpy(local_38.Data.AllocatorInstance.Data,_Src,lVar2 * 2);
  }
  local_res20[0] = param_3;
  MakeShared<FTextFormatData,1,FString,enum_ETextFormatFlags_&,TSharedRef<FTextFormatPatternDefinition_const_,1>_>
            (&__return_storage_ptr__->TextFormatData,&local_38,local_res20,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// FromString @ 14175ac60

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FTextFormat * __cdecl
FTextFormat::FromString
          (FTextFormat *__return_storage_ptr__,FString *param_1,ETextFormatFlags param_2)

{
  FScriptContainerElement *_Src;
  TSharedRef<FTextFormatPatternDefinition_const_,1> *pTVar1;
  longlong lVar2;
  ETextFormatFlags local_res18 [16];
  FString local_38;
  TSharedRef<FTextFormatPatternDefinition_const_,1> local_28;
  
  pTVar1 = FTextFormatPatternDefinition::GetDefault(&local_28);
  local_38.Data.ArrayNum = (param_1->Data).ArrayNum;
  lVar2 = (longlong)local_38.Data.ArrayNum;
  _Src = (param_1->Data).AllocatorInstance.Data;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_38.Data.ArrayNum == 0) {
    local_38.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)&local_38,local_38.Data.ArrayNum,
               &local_38.Data.ArrayMax);
    memcpy(local_38.Data.AllocatorInstance.Data,_Src,lVar2 * 2);
  }
  local_res18[0] = param_2;
  MakeShared<FTextFormatData,1,FString,enum_ETextFormatFlags_&,TSharedRef<FTextFormatPatternDefinition_const_,1>_>
            (&__return_storage_ptr__->TextFormatData,&local_38,local_res18,pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pTVar1->SharedReferenceCount).ReferenceController);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetExpressionType @ 14175cec0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

EExpressionType __thiscall FTextFormat::GetExpressionType(FTextFormat *this)

{
  FMutex *this_00;
  atomic<unsigned_char> aVar1;
  FTextFormatData *pFVar2;
  code *pcVar3;
  bool bVar4;
  EExpressionType EVar5;
  
  pFVar2 = (this->TextFormatData).Object;
  this_00 = &pFVar2->CompiledDataMutex;
  if ((this_00 == (FMutex *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    EVar5 = (*pcVar3)();
    return EVar5;
  }
  LOCK();
  bVar4 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar4) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar4) {
    UE::FMutex::LockSlow(this_00);
  }
  EVar5 = pFVar2->CompiledExpressionType;
  if (this_00 != (FMutex *)0x0) {
    LOCK();
    aVar1 = this_00->State;
    this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
    UNLOCK();
    if (((byte)aVar1 & 2) != 0) {
      UE::FMutex::WakeWaitingThread(this_00);
    }
  }
  return EVar5;
}

// GetFormatArgumentNames @ 14175d220

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
FTextFormat::GetFormatArgumentNames
          (FTextFormat *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FMutex *this_00;
  atomic<unsigned_char> aVar1;
  FTextFormatData *this_01;
  code *pcVar2;
  bool bVar3;
  
  this_01 = (this->TextFormatData).Object;
  this_00 = &this_01->CompiledDataMutex;
  if ((this_00 == (FMutex *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  LOCK();
  bVar3 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar3) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar3) {
    UE::FMutex::LockSlow(this_00);
  }
  FTextFormatData::GetFormatArgumentNames_NoLock(this_01,param_1);
  if (this_00 != (FMutex *)0x0) {
    LOCK();
    aVar1 = this_00->State;
    this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
    UNLOCK();
    if (((byte)aVar1 & 2) != 0) {
      UE::FMutex::WakeWaitingThread(this_00);
    }
  }
  return;
}

// GetFormatFlags @ 14175d5d0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

ETextFormatFlags __thiscall FTextFormat::GetFormatFlags(FTextFormat *this)

{
  return ((this->TextFormatData).Object)->FormatFlags;
}

// GetPatternDefinition @ 141760720

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TSharedRef<FTextFormatPatternDefinition_const_,1> * __thiscall
FTextFormat::GetPatternDefinition
          (FTextFormat *this,
          TSharedRef<FTextFormatPatternDefinition_const_,1> *__return_storage_ptr__)

{
  FTextFormatData *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  pFVar1 = (this->TextFormatData).Object;
  __return_storage_ptr__->Object = (pFVar1->PatternDef).Object;
  pTVar2 = (pFVar1->PatternDef).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetSourceString @ 141760f30

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FString * __thiscall FTextFormat::GetSourceString(FTextFormat *this)

{
  FTextFormatData *pFVar1;
  FString *pFVar2;
  
  pFVar1 = (this->TextFormatData).Object;
  if (pFVar1->SourceType == Text) {
    FText::Rebuild(&pFVar1->SourceText);
                    /* WARNING: Could not recover jumptable at 0x000141760f5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pFVar2 = (FString *)(**(code **)((longlong)*(pFVar1->SourceText).TextData.Reference + 0x28))();
    return pFVar2;
  }
  return &pFVar1->SourceExpression;
}

// GetSourceText @ 141761080

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall FTextFormat::GetSourceText(FTextFormat *this,FText *__return_storage_ptr__)

{
  FTextFormatData *pFVar1;
  ITextData *pIVar2;
  bool bVar3;
  bool bVar4;
  FText *pFVar5;
  TRefCountPtr<ITextData> TVar6;
  undefined4 local_res8 [2];
  FText local_28;
  FText local_18;
  
  local_res8[0] = 0;
  pFVar1 = (this->TextFormatData).Object;
  if (pFVar1->SourceType == Text) {
    TVar6.Reference = (pFVar1->SourceText).TextData.Reference;
    local_28.TextData.Reference = TVar6.Reference;
    if (TVar6.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar6.Reference + 8))(TVar6.Reference,local_res8);
    }
    pFVar5 = &local_28;
    local_28.Flags = (pFVar1->SourceText).Flags;
    bVar4 = true;
    bVar3 = false;
  }
  else {
    pFVar5 = FText::FromString(&local_18,&pFVar1->SourceExpression);
    bVar4 = false;
    bVar3 = true;
    TVar6.Reference = local_28.TextData.Reference;
  }
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar2 = (pFVar5->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
  }
  __return_storage_ptr__->Flags = pFVar5->Flags;
  if (bVar3) {
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
  }
  if ((bVar4) && (TVar6.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*TVar6.Reference + 0x10))(TVar6.Reference);
  }
  return __return_storage_ptr__;
}

// IdenticalTo @ 141762f20

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
FTextFormat::IdenticalTo(FTextFormat *this,FTextFormat *param_1,ETextIdenticalModeFlags param_2)

{
  ESourceType EVar1;
  int iVar2;
  FTextFormatData *pFVar3;
  FTextFormatData *pFVar4;
  bool bVar5;
  int iVar6;
  
  pFVar3 = (this->TextFormatData).Object;
  pFVar4 = (param_1->TextFormatData).Object;
  EVar1 = pFVar3->SourceType;
  if (EVar1 == pFVar4->SourceType) {
    if (EVar1 == Text) {
      bVar5 = FText::IdenticalTo(&pFVar3->SourceText,&pFVar4->SourceText,param_2);
      return bVar5;
    }
    if ((EVar1 == String) && ((param_2 & LexicalCompareInvariants) != None)) {
      iVar6 = (pFVar3->SourceExpression).Data.ArrayNum;
      iVar2 = (pFVar4->SourceExpression).Data.ArrayNum;
      if (iVar6 != iVar2) {
        return iVar6 + iVar2 == 1;
      }
      if (1 < iVar6) {
        iVar6 = wcscmp((wchar_t *)(pFVar3->SourceExpression).Data.AllocatorInstance.Data,
                       (wchar_t *)(pFVar4->SourceExpression).Data.AllocatorInstance.Data);
        return iVar6 == 0;
      }
      return true;
    }
  }
  return false;
}

// IsValid @ 141767160

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall FTextFormat::IsValid(FTextFormat *this)

{
  FMutex *this_00;
  atomic<unsigned_char> aVar1;
  EExpressionType EVar2;
  FTextFormatData *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  
  pFVar3 = (this->TextFormatData).Object;
  this_00 = &pFVar3->CompiledDataMutex;
  if ((this_00 == (FMutex *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  LOCK();
  bVar5 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar5) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar5) {
    UE::FMutex::LockSlow(this_00);
  }
  EVar2 = pFVar3->CompiledExpressionType;
  if (this_00 != (FMutex *)0x0) {
    LOCK();
    aVar1 = this_00->State;
    this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
    UNLOCK();
    if (((byte)aVar1 & 2) != 0) {
      UE::FMutex::WakeWaitingThread(this_00);
    }
  }
  return EVar2 != Invalid;
}

// ValidatePattern @ 1417836d0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

bool __thiscall
FTextFormat::ValidatePattern
          (FTextFormat *this,TSharedPtr<FCulture,1> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  FMutex *this_00;
  atomic<unsigned_char> aVar1;
  FTextFormatData *this_01;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  this_01 = (this->TextFormatData).Object;
  this_00 = &this_01->CompiledDataMutex;
  if ((this_00 == (FMutex *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  LOCK();
  bVar3 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar3) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar3) {
    UE::FMutex::LockSlow(this_00);
  }
  bVar3 = FTextFormatData::ValidatePattern_NoLock(this_01,param_1,param_2);
  if (this_00 != (FMutex *)0x0) {
    LOCK();
    aVar1 = this_00->State;
    this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
    UNLOCK();
    if (((byte)aVar1 & 2) != 0) {
      UE::FMutex::WakeWaitingThread(this_00);
    }
  }
  return bVar3;
}

// FTextFormat @ 141be9930

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FTextFormat * __thiscall FTextFormat::FTextFormat(FTextFormat *this,FTextFormat *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  (this->TextFormatData).Object = (param_1->TextFormatData).Object;
  pTVar1 = (param_1->TextFormatData).SharedReferenceCount.ReferenceController;
  (this->TextFormatData).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

