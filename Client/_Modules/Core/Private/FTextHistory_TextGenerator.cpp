// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 9

// FTextHistory_TextGenerator @ 141737540

FTextHistory_TextGenerator * __thiscall
FTextHistory_TextGenerator::FTextHistory_TextGenerator
          (FTextHistory_TextGenerator *this,FString *param_1,TSharedRef<ITextGenerator,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  
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
  this->_padding_ = (longlong)&___7FTextHistory_TextGenerator__6B_;
  (this->TextGenerator).Object = param_2->Object;
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  (this->TextGenerator).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// BuildInvariantDisplayString @ 141749fe0

FString * __thiscall
FTextHistory_TextGenerator::BuildInvariantDisplayString
          (FTextHistory_TextGenerator *this,FString *__return_storage_ptr__)

{
  ITextGenerator *pIVar1;
  void **ppvVar2;
  bool bVar3;
  void *local_28;
  undefined8 local_20;
  void *local_18 [2];
  
  pIVar1 = (this->TextGenerator).Object;
  bVar3 = pIVar1 == (ITextGenerator *)0x0;
  if (bVar3) {
    local_28 = (void *)0x0;
    ppvVar2 = &local_28;
    local_20 = 0;
  }
  else {
    ppvVar2 = (void **)(**(code **)((longlong)*pIVar1 + 0x10))(pIVar1,local_18);
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = *ppvVar2;
  *ppvVar2 = (void *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = *(int *)(ppvVar2 + 1);
  (__return_storage_ptr__->Data).ArrayMax = *(int *)((longlong)ppvVar2 + 0xc);
  ppvVar2[1] = (void *)0x0;
  if (bVar3) {
    if (local_28 != (void *)0x0) {
      FMemory::Free(local_28);
    }
  }
  if ((!bVar3) && (local_18[0] != (void *)0x0)) {
    FMemory::Free(local_18[0]);
  }
  return __return_storage_ptr__;
}

// BuildLocalizedDisplayString @ 14174a8e0

FString * __thiscall
FTextHistory_TextGenerator::BuildLocalizedDisplayString
          (FTextHistory_TextGenerator *this,FString *__return_storage_ptr__)

{
  ITextGenerator *pIVar1;
  void **ppvVar2;
  bool bVar3;
  void *local_28;
  undefined8 local_20;
  void *local_18 [2];
  
  pIVar1 = (this->TextGenerator).Object;
  bVar3 = pIVar1 == (ITextGenerator *)0x0;
  if (bVar3) {
    local_28 = (void *)0x0;
    ppvVar2 = &local_28;
    local_20 = 0;
  }
  else {
    ppvVar2 = (void **)(**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_18);
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = *ppvVar2;
  *ppvVar2 = (void *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = *(int *)(ppvVar2 + 1);
  (__return_storage_ptr__->Data).ArrayMax = *(int *)((longlong)ppvVar2 + 0xc);
  ppvVar2[1] = (void *)0x0;
  if (bVar3) {
    if (local_28 != (void *)0x0) {
      FMemory::Free(local_28);
    }
  }
  if ((!bVar3) && (local_18[0] != (void *)0x0)) {
    FMemory::Free(local_18[0]);
  }
  return __return_storage_ptr__;
}

// GetType @ 141761c30

ETextHistoryType __thiscall FTextHistory_TextGenerator::GetType(FTextHistory_TextGenerator *this)

{
  return TextGenerator;
}

// IdenticalTo @ 141763810

bool __thiscall
FTextHistory_TextGenerator::IdenticalTo
          (FTextHistory_TextGenerator *this,FTextHistory *param_1,ETextIdenticalModeFlags param_2)

{
  return false;
}

// Serialize @ 14177bae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FTextHistory_TextGenerator::Serialize
          (FTextHistory_TextGenerator *this,FStructuredArchiveRecord param_1)

{
  ITextGenerator *pIVar1;
  undefined8 uVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  FArchive *pFVar6;
  FArchiveState *this_00;
  FName *pFVar7;
  FStructuredArchiveSlot FVar8;
  TDelegate<TSharedRef<ITextGenerator,1>___cdecl(FStructuredArchiveRecord),FDefaultDelegateUserPolicy>
  *this_01;
  ForAnyElementType FVar9;
  FSlotBase local_res10;
  undefined1 auStack_5f8 [32];
  undefined1 local_5d8 [8];
  FName local_5d0;
  undefined1 local_5c8 [8];
  ForAnyElementType local_5c0;
  int local_5b8;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_5b0;
  undefined1 local_5a0 [8];
  ForAnyElementType local_598;
  int local_590;
  FName local_588;
  undefined8 local_580;
  ITextGenerator *local_578;
  FSharedReferencer<1> local_570;
  FSlotBase local_568;
  FName *local_560;
  FName *local_558;
  undefined8 local_550;
  FSharedReferencer<1> FStack_548;
  ITextGenerator *local_540;
  TReferenceControllerBase<1> *local_538;
  FDestructionSentinel local_530;
  FDestructionSentinel local_518;
  undefined1 local_500 [24];
  FReadAccessScope local_4e8;
  FReadAccessScope local_4d0;
  FArchiveState local_4b8;
  undefined8 local_428;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_420;
  undefined8 local_418;
  FArchiveState local_408;
  undefined8 local_378;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_370;
  undefined8 local_368;
  FReadAccessScope local_358;
  FStructuredArchiveFromArchive local_340;
  FStructuredArchiveFromArchive local_1b0;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_5f8;
  local_res10.StructuredArchive = (FStructuredArchive *)param_1;
  local_568.StructuredArchive = (FStructuredArchive *)param_1;
  pFVar6 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_568);
  if ((pFVar6->field_0x28 & 1) != 0) {
    FTextHistory::MarkDisplayStringOutOfDate((FTextHistory *)this);
  }
  this_00 = (FArchiveState *)
            UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res10);
  if ((this_00->ArIsSaving == '\0') ||
     (pIVar1 = (this->TextGenerator).Object, pIVar1 == (ITextGenerator *)0x0)) {
    local_588.ComparisonIndex.Value = 0;
    local_588.Number = 0;
    pFVar7 = &local_588;
  }
  else {
    pFVar7 = (FName *)(**(code **)((longlong)*pIVar1 + 0x18))(pIVar1,local_500);
  }
  local_5d0 = *pFVar7;
  pFVar6 = (local_res10.StructuredArchive)->Formatter->Inner;
  (**(code **)(*(longlong *)pFVar6 + 0x178))(pFVar6,&local_5d0);
  local_5b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_5b0.ArrayNum = 0;
  local_5b0.ArrayMax = 0;
  if (this_00->ArIsLoading == 0) {
    if (this_00->ArIsSaving != '\0') {
      if (local_5d0 == (FName)0x0) {
        local_5d8[0] = 0;
        bVar5 = `FTextHistory_TextGenerator::Serialize'::__l20::<lambda_2>::operator()(local_5d8);
        if (!bVar5) goto LAB_14177c0c6;
      }
      this_01 = FText::FindRegisteredTextGenerator
                          ((TDelegate<TSharedRef<ITextGenerator,1>___cdecl(FStructuredArchiveRecord),FDefaultDelegateUserPolicy>
                            *)local_5a0,local_5d0);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_01,&local_4d0);
      if (((*(int *)&this_01->field_0x10 == 0) ||
          (*(longlong **)&this_01->field_0x8 == (longlong *)0x0)) ||
         (cVar4 = (**(code **)(**(longlong **)&this_01->field_0x8 + 0x38))(), cVar4 == '\0')) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_4d0);
        local_558 = &local_5d0;
        `FTextHistory_TextGenerator::Serialize'::__l22::<lambda_3>::operator()(&local_558);
      }
      else {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_4d0);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_5a0,
                 (FWriteAccessScope *)&local_518);
      if ((local_590 != 0) && (local_598.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)local_598.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_598,0,0,0x10);
        local_590 = 0;
      }
      if (local_518.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_518.Accessor,&local_518);
      }
      if (local_598.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_598.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_5a0);
      local_580 = 0;
      local_4b8._padding_ = 0;
      local_4b8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
      local_4b8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
      local_4b8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
      local_4b8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
      local_4b8._40_8_ = 0;
      local_4b8.ArSerializingDefaults = 0;
      local_4b8.ArPortFlags = 0;
      local_4b8.ArMaxSerializeSize = 0;
      local_4b8.ArUEVer.FileVersionUE4 = 0;
      local_4b8.ArUEVer.FileVersionUE5 = 0;
      local_4b8.ArLicenseeUEVer = 0;
      local_4b8.ArEngineVer.Major = 0;
      local_4b8.ArEngineVer.Minor = 0;
      local_4b8.ArEngineVer.Patch = 0;
      local_4b8.ArEngineVer._6_2_ = 0;
      local_4b8.ArEngineVer.Changelist = 0;
      local_4b8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
      local_4b8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
      local_4b8.SavePackageData = (FArchiveSavePackageData *)0x0;
      local_4b8.SerializedProperty = (FProperty *)0x0;
      local_4b8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
      local_4b8.bCustomVersionsAreReset = false;
      local_4b8._129_7_ = 0;
      local_4b8.NextProxy = (FArchiveState *)0x0;
      FArchiveState::FArchiveState(&local_4b8);
      local_428 = 0;
      local_4b8._padding_ =
           (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
      local_420 = &local_5b0;
      local_418 = 0;
      FArchiveState::SetIsSaving(&local_4b8,true);
      (**(code **)(local_4b8._padding_ + 0x108))(&local_4b8,0);
      local_4b8._padding_ = (longlong)&___7FMemoryWriter__6B_;
      FStructuredArchiveFromArchive::FStructuredArchiveFromArchive
                (&local_1b0,(FArchive *)&local_4b8);
      if (((this->TextGenerator).Object == (ITextGenerator *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pIVar1 = (this->TextGenerator).Object;
      pcVar3 = *(code **)((longlong)*pIVar1 + 0x20);
      FVar8 = FStructuredArchiveFromArchive::GetSlot(&local_1b0);
      (*pcVar3)(pIVar1,*(undefined8 *)FVar8);
      TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<32>_>
                ((local_res10.StructuredArchive)->Formatter->Inner,&local_5b0);
      if (local_4b8.ArIsError != 0) {
        FArchiveState::SetError(this_00);
      }
      FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&local_1b0);
      FArchive::~FArchive((FArchive *)&local_4b8);
    }
    goto LAB_14177c0c6;
  }
  local_550 = 0;
  FStack_548.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->TextGenerator != (TSharedPtr<ITextGenerator,1> *)&local_550) {
    (this->TextGenerator).Object = (ITextGenerator *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->TextGenerator).SharedReferenceCount,&FStack_548);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_548.ReferenceController);
  if (local_5d0 != (FName)0x0) {
    FText::FindRegisteredTextGenerator
              ((TDelegate<TSharedRef<ITextGenerator,1>___cdecl(FStructuredArchiveRecord),FDefaultDelegateUserPolicy>
                *)local_5c8,local_5d0);
    TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<32>_>
              ((local_res10.StructuredArchive)->Formatter->Inner,&local_5b0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_5c8,&local_4e8);
    if (((local_5b8 == 0) || (local_5c0.Data == (FScriptContainerElement *)0x0)) ||
       (cVar4 = (**(code **)(*(longlong *)local_5c0.Data + 0x38))(), cVar4 == '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_4e8);
      local_560 = &local_5d0;
      bVar5 = `FTextHistory_TextGenerator::Serialize'::__l9::<lambda_1>::operator()(&local_560);
      if (bVar5) goto LAB_14177bc67;
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_4e8);
LAB_14177bc67:
      local_408._padding_ = 0;
      local_408.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
      local_408.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
      local_408.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
      local_408.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
      local_408._40_8_ = 0;
      local_408.ArSerializingDefaults = 0;
      local_408.ArPortFlags = 0;
      local_408.ArMaxSerializeSize = 0;
      local_408.ArUEVer.FileVersionUE4 = 0;
      local_408.ArUEVer.FileVersionUE5 = 0;
      local_408.ArLicenseeUEVer = 0;
      local_408.ArEngineVer.Major = 0;
      local_408.ArEngineVer.Minor = 0;
      local_408.ArEngineVer.Patch = 0;
      local_408.ArEngineVer._6_2_ = 0;
      local_408.ArEngineVer.Changelist = 0;
      local_408.CustomVersionContainer = (FCustomVersionContainer *)0x0;
      local_408.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
      local_408.SavePackageData = (FArchiveSavePackageData *)0x0;
      local_408.SerializedProperty = (FProperty *)0x0;
      local_408.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
      local_408.bCustomVersionsAreReset = false;
      local_408._129_7_ = 0;
      local_408.NextProxy = (FArchiveState *)0x0;
      FArchiveState::FArchiveState(&local_408);
      local_378 = 0;
      local_408._padding_ = (longlong)&___7FMemoryReader__6B_;
      local_370 = &local_5b0;
      local_368 = 0x7fffffffffffffff;
      FArchiveState::SetIsLoading(&local_408,true);
      (**(code **)(local_408._padding_ + 0x108))(&local_408,0);
      FStructuredArchiveFromArchive::FStructuredArchiveFromArchive
                (&local_340,(FArchive *)&local_408);
      FVar8 = FStructuredArchiveFromArchive::GetSlot(&local_340);
      uVar2 = *(undefined8 *)FVar8;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_5c8,&local_358);
      FVar9.Data = (FScriptContainerElement *)0x0;
      if (local_5b8 != 0) {
        FVar9.Data = local_5c0.Data;
      }
      (**(code **)(*(longlong *)FVar9.Data + 0x60))(FVar9.Data,&local_540,uVar2);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_358);
      local_578 = local_540;
      local_570.ReferenceController = local_538;
      if (local_538 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_538->SharedReferenceCount = (atomic<int>)((int)local_538->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (&this->TextGenerator != (TSharedPtr<ITextGenerator,1> *)&local_578) {
        (this->TextGenerator).Object = local_540;
        local_578 = (ITextGenerator *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->TextGenerator).SharedReferenceCount,&local_570);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_570.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_538)
      ;
      if (((this->TextGenerator).Object == (ITextGenerator *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pIVar1 = (this->TextGenerator).Object;
      (**(code **)((longlong)*pIVar1 + 0x20))(pIVar1,uVar2);
      if (local_408.ArIsError != 0) {
        FArchiveState::SetError(this_00);
      }
      FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&local_340);
      FArchive::~FArchive((FArchive *)&local_408);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_5c8,
               (FWriteAccessScope *)&local_530);
    if ((local_5b8 != 0) && (local_5c0.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_5c0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_5c0,0,0,0x10);
      local_5b8 = 0;
    }
    if (local_530.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_530.Accessor,&local_530);
    }
    if (local_5c0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5c0.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_5c8);
  }
  FTextHistory::MarkDisplayStringOutOfDate((FTextHistory *)this);
LAB_14177c0c6:
  if (local_5b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5b0.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 15047bd70

bool __thiscall `FTextHistory_TextGenerator::Serialize'::__l9::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7581717102600385824>);
  if (bVar2) {
    ::FName::ToString(*(FName **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7581717102600385824>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15047bdd7;
    }
  }
  bVar2 = false;
LAB_15047bdd7:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 15047be10

bool __thiscall `FTextHistory_TextGenerator::Serialize'::__l20::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7581717102600385802>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7581717102600385802>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15047be50

bool __thiscall `FTextHistory_TextGenerator::Serialize'::__l22::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7581717102600385796>);
  if (bVar2) {
    ::FName::ToString(*(FName **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7581717102600385796>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15047beb7;
    }
  }
  bVar2 = false;
LAB_15047beb7:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

