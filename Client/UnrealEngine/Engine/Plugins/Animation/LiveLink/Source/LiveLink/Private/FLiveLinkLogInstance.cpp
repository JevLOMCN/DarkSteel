// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 20

// FLiveLinkLogInstance @ 14d0115a0

FLiveLinkLogInstance * __thiscall
FLiveLinkLogInstance::FLiveLinkLogInstance(FLiveLinkLogInstance *this)

{
  longlong local_res8;
  LARGE_INTEGER local_res10 [3];
  
  this->_padding_ = (longlong)&___7FLiveLinkLogInstance__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CriticalSection,4000);
  (this->ToUpdateMessages).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ToUpdateMessages).ArrayNum = 0;
  (this->ToUpdateMessages).ArrayMax = 0;
  (this->RepeatableMessages).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RepeatableMessages).ArrayNum = 0;
  (this->RepeatableMessages).ArrayMax = 0;
  (this->DisabledMessages).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DisabledMessages).ArrayNum = 0;
  (this->DisabledMessages).ArrayMax = 0;
  this->ErrorCount = (TAtomic<int>)0x0;
  this->WarningCount = (TAtomic<int>)0x0;
  this->InfoCount = (TAtomic<int>)0x0;
  this->bSilentMode = false;
  this->bLogAllRepeatableMessage = false;
  FDateTime::Now();
  QueryPerformanceCounter(local_res10);
  this->HighPerformanceClockDelta =
       (double)(local_res8 % 864000000000) * __real_3e7ad7f29abcaf48 -
       ((double)local_res10[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
       __real_4170000000000000);
  return this;
}

// ~FLiveLinkLogInstance @ 14d016030

void __thiscall FLiveLinkLogInstance::~FLiveLinkLogInstance(FLiveLinkLogInstance *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FLiveLinkLogInstance__6B_;
  pFVar1 = (this->DisabledMessages).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FLiveLinkLogInstance::FRepeatableMessage,int>
            ((FRepeatableMessage *)(this->RepeatableMessages).AllocatorInstance.Data,
             (this->RepeatableMessages).ArrayNum);
  pFVar1 = (this->RepeatableMessages).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSharedRef<FTokenizedMessage,1>,int>
            ((TSharedRef<FTokenizedMessage,1> *)(this->ToUpdateMessages).AllocatorInstance.Data,
             (this->ToUpdateMessages).ArrayNum);
  pFVar1 = (this->ToUpdateMessages).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00014d01608e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  return;
}

// operator() @ 14d01a5c0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall
`FLiveLinkLogInstance::CreateTokenizedMessage'::__l27::<lambda_1>::operator()
          (void *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  code *pcVar2;
  bool bVar3;
  FText *pFVar4;
  FText *pFVar5;
  FTextFormat *pFVar6;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_a8;
  FTextFormat local_98;
  TSharedPtr<FCulture,1> local_88;
  FFormatArgumentValue local_78;
  FText local_58;
  FNumberFormattingOptions local_48;
  FText local_30;
  FTextFormat local_20;
  
  FNumberFormattingOptions::FNumberFormattingOptions(&local_48);
  local_48.MinimumIntegralDigits = 2;
  local_88.Object = (FCulture *)0x0;
  local_88.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar4 = FText::AsNumber(&local_30,*(int *)(*(longlong *)this + 8),&local_48,&local_88);
  pFVar5 = FText::AsLocalizable_Advanced_LocText
                     (&local_58,L"LiveLinkLogInstance",L"OccuredFrequency",L"({0})");
  pFVar6 = FTextFormat::FTextFormat(&local_20,pFVar5,Default);
  local_78.Type = Text;
  FText::FText((FText *)&local_78.TextValue,pFVar4);
  if (local_78.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FText *)(*pcVar2)();
      return pFVar4;
    }
  }
  local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,&local_a8.AllocatorInstance,1,&local_a8.ArrayMax);
  ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
            (local_a8.AllocatorInstance.Data,&local_78,1);
  local_98.TextFormatData.Object = (pFVar6->TextFormatData).Object;
  local_98.TextFormatData.SharedReferenceCount.ReferenceController =
       (pFVar6->TextFormatData).SharedReferenceCount.ReferenceController;
  if (local_98.TextFormatData.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_98.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_98.TextFormatData.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  FText::Format(__return_storage_ptr__,&local_98,&local_a8);
  DestructItems<FFormatArgumentValue,int>
            ((FFormatArgumentValue *)local_a8.AllocatorInstance.Data,local_a8.ArrayNum);
  if ((FFormatArgumentValue *)local_a8.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
    FMemory::Free(local_a8.AllocatorInstance.Data);
  }
  if (local_78.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_78.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pFVar6->TextFormatData).SharedReferenceCount.ReferenceController);
  pIVar1 = (pFVar4->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// CreateInstance @ 14d035940

void __cdecl FLiveLinkLogInstance::CreateInstance(void)

{
  FLiveLinkLog FVar1;
  code *pcVar2;
  TUniquePtr<FLiveLinkLog,TDefaultDelete<FLiveLinkLog>_> TVar3;
  TUniquePtr<FLiveLinkLog,TDefaultDelete<FLiveLinkLog>_> TVar4;
  bool bVar5;
  FLiveLinkLogInstance *pFVar6;
  FLLMScope local_res8 [2];
  FName local_res10;
  longlong local_res18;
  LARGE_INTEGER local_res20;
  FMemScope local_18 [2];
  
  FLLMScope::FLLMScope
            (local_res8,LLMTagDeclaration_LiveLink_LiveLinkLogInstance.UniqueName,false,None,Default
             ,true);
  local_res10 = LLMTagDeclaration_LiveLink_LiveLinkLogInstance.UniqueName;
  FMemScope::FMemScope(local_18,&local_res10,true);
  if (FLiveLinkLog::Instance.Ptr != (FLiveLinkLog *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6492301340914483290>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\LiveLinkLogInstance.cpp"
                       ,0x5a,"FLiveLinkLog::Instance == nullptr");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (FLiveLinkLog::Instance.Ptr != (FLiveLinkLog *)0x0) {
      DestroyInstance();
    }
  }
  pFVar6 = ::operator_new(0x78);
  if (pFVar6 != (FLiveLinkLogInstance *)0x0) {
    pFVar6->_padding_ = (longlong)&___7FLiveLinkLogInstance__6B_;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&pFVar6->CriticalSection,4000);
    (pFVar6->ToUpdateMessages).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar6->ToUpdateMessages).ArrayNum = 0;
    (pFVar6->ToUpdateMessages).ArrayMax = 0;
    (pFVar6->RepeatableMessages).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar6->RepeatableMessages).ArrayNum = 0;
    (pFVar6->RepeatableMessages).ArrayMax = 0;
    (pFVar6->DisabledMessages).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar6->DisabledMessages).ArrayNum = 0;
    (pFVar6->DisabledMessages).ArrayMax = 0;
    pFVar6->ErrorCount = (TAtomic<int>)0x0;
    pFVar6->WarningCount = (TAtomic<int>)0x0;
    pFVar6->InfoCount = (TAtomic<int>)0x0;
    pFVar6->bSilentMode = false;
    pFVar6->bLogAllRepeatableMessage = false;
    FDateTime::Now();
    QueryPerformanceCounter(&local_res20);
    pFVar6->HighPerformanceClockDelta =
         (double)(local_res18 % 864000000000) * __real_3e7ad7f29abcaf48 -
         ((double)local_res20.QuadPart * FGenericPlatformTime::SecondsPerCycle +
         __real_4170000000000000);
  }
  TVar3.Ptr = FLiveLinkLog::Instance.Ptr;
  TVar4.Ptr = FLiveLinkLog::Instance.Ptr;
  LiveLinkLogDetail::PrivateInstance = pFVar6;
  if (((FLiveLinkLogInstance *)FLiveLinkLog::Instance.Ptr != pFVar6) &&
     (TVar4.Ptr = (FLiveLinkLog *)pFVar6, FLiveLinkLog::Instance.Ptr != (FLiveLinkLog *)0x0)) {
    FVar1 = *FLiveLinkLog::Instance.Ptr;
    FLiveLinkLog::Instance.Ptr = (FLiveLinkLog *)pFVar6;
    (**(code **)FVar1)(TVar3.Ptr,1);
    TVar4.Ptr = FLiveLinkLog::Instance.Ptr;
  }
  FLiveLinkLog::Instance.Ptr = TVar4.Ptr;
  FMemScope::~FMemScope(local_18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// CreateTokenizedMessage @ 14d037b40

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TSharedPtr<FTokenizedMessage,1> * __thiscall
FLiveLinkLogInstance::CreateTokenizedMessage
          (FLiveLinkLogInstance *this,TSharedPtr<FTokenizedMessage,1> *__return_storage_ptr__,
          Type param_1,FName param_2,FLiveLinkSubjectKey *param_3,FString *param_4)

{
  TAtomic<int> *pTVar1;
  int *piVar2;
  FName *pFVar3;
  atomic<int> aVar4;
  int iVar5;
  FRepeatableMessageData *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  int iVar10;
  TReferenceControllerBase<1> *pTVar11;
  bool bVar12;
  uint uVar13;
  bool bVar14;
  atomic<int> aVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  FText *pFVar20;
  TSharedRef<FTextToken,1> *pTVar21;
  FRepeatableMessage *pFVar22;
  TSharedRef<FLiveLinkLogInstance::FRepeatableMessageData,1> *pTVar23;
  undefined8 *puVar24;
  ulong64 uVar25;
  TSharedRef<FTokenizedMessage,1> *pTVar26;
  TSharedPtr<FTokenizedMessage,1> *pTVar27;
  FString *pFVar28;
  uint uVar29;
  wchar_t *pwVar30;
  FSharedReferencer<1> FVar31;
  atomic<int> *paVar32;
  FTokenizedMessage *pFVar33;
  LPCRITICAL_SECTION lpCriticalSection;
  FName *pFVar34;
  bool bVar35;
  bool bVar36;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar38 [16];
  FSharedReferencer<1> FStack_300;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_2f8;
  FDelegateAllocation local_2f0;
  FRepeatableMessage *local_2e0;
  TReferenceControllerBase<1> *local_2d8;
  FTokenizedMessage *local_2c8;
  TReferenceControllerBase<1> *pTStack_2c0;
  TSharedRef<FTokenizedMessage,1> local_2b8;
  undefined8 local_2a8;
  FSharedReferencer<1> local_2a0;
  LARGE_INTEGER local_298 [2];
  LPCRITICAL_SECTION local_288;
  TSharedRef<IMessageToken,1> local_280;
  undefined8 local_270;
  FSharedReferencer<1> local_268;
  TSharedRef<IMessageToken,1> local_260;
  TSharedRef<IMessageToken,1> local_250;
  TSharedRef<IMessageToken,1> local_240;
  undefined1 local_230 [32];
  void *pvStack_210;
  int local_208;
  TSharedRef<IMessageToken,1> local_1f8;
  FString local_1e8;
  FString local_1d8;
  TSharedRef<FDynamicTextToken,1> local_1c8;
  FDestructionSentinel local_1b8;
  FDestructionSentinel local_1a0;
  FDestructionSentinel local_188;
  FDelegateAllocation *local_170;
  FText local_168;
  FText local_158;
  TSharedRef<FLiveLinkLogInstance::FRepeatableMessageData,1> local_148;
  TSharedRef<FTokenizedMessage,1> local_138;
  FText local_128;
  TSharedRef<FTokenizedMessage,1> local_118;
  TSharedRef<FTokenizedMessage,1> local_108;
  TSharedRef<FTextToken,1> local_f8;
  FText local_e8;
  TSharedRef<FTokenizedMessage,1> local_d8;
  TSharedRef<FTextToken,1> local_c8;
  FText local_b8;
  TSharedRef<FTokenizedMessage,1> local_a8;
  TSharedRef<FTextToken,1> local_98;
  FText local_88;
  FText local_78;
  TSharedRef<FTokenizedMessage,1> local_68;
  TSharedRef<FTextToken,1> local_58;
  undefined1 auVar37 [16];
  
  if (param_2 != (FName)0x0) {
    pFVar34 = (FName *)(this->DisabledMessages).AllocatorInstance.Data;
    pFVar3 = pFVar34 + (this->DisabledMessages).ArrayNum;
    for (; pFVar34 != pFVar3; pFVar34 = pFVar34 + 1) {
      if (*pFVar34 == param_2) {
        __return_storage_ptr__->Object = (FTokenizedMessage *)0x0;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        return __return_storage_ptr__;
      }
    }
  }
  if (param_1 == Error) {
    lVar19 = 0x60;
  }
  else if ((param_1 == PerformanceWarning) || (param_1 == Warning)) {
    lVar19 = 100;
  }
  else {
    lVar19 = 0x68;
  }
  LOCK();
  piVar2 = (int *)((longlong)(this->CriticalSection).CriticalSection.Opaque1 + lVar19 + -8);
  *piVar2 = *piVar2 + 1;
  UNLOCK();
  if (param_2 == (FName)0x0) {
    pFVar20 = FText::FText(&local_168);
    FTokenizedMessage::Create(&local_2b8,param_1,pFVar20);
    if (local_168.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_168.TextData.Reference + 0x10))();
    }
    pFVar33 = local_2b8.Object;
    pFVar20 = FText::FromString(&local_158,param_4);
    pTVar21 = FTextToken::Create(&local_58,pFVar20,true);
    local_280.Object = (IMessageToken *)pTVar21->Object;
    local_280.SharedReferenceCount.ReferenceController =
         (pTVar21->SharedReferenceCount).ReferenceController;
    if (local_280.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_280.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_280.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FTokenizedMessage::AddToken(pFVar33,&local_68,&local_280);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_280.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
    if (local_158.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_158.TextData.Reference + 0x10))();
    }
    FTokenizedMessage::SetIdentifier(local_2b8.Object,(FName)0x0);
    if (this->bSilentMode == false) {
      LogMessage(this,param_1,param_4);
    }
    __return_storage_ptr__->Object = local_2b8.Object;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         local_2b8.SharedReferenceCount.ReferenceController;
    if (local_2b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_2b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_2b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2b8.SharedReferenceCount.ReferenceController);
  }
  else {
    bVar14 = this->bSilentMode;
    lpCriticalSection = (LPCRITICAL_SECTION)&this->CriticalSection;
    bVar12 = false;
    FStack_300.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    bVar35 = bVar14 == false;
    local_288 = lpCriticalSection;
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection(lpCriticalSection);
    pFVar22 = FindRepeatableMessage(this,param_2,param_3);
    local_2e0 = pFVar22;
    if (pFVar22 == (FRepeatableMessage *)0x0) {
      uVar16 = TArray<FLiveLinkLogInstance::FRepeatableMessage,TSizedDefaultAllocator<32>_>::
               AddZeroed(&this->RepeatableMessages);
      uVar29 = 0;
      if ((int)uVar16 < (this->RepeatableMessages).ArrayNum) {
        uVar29 = ~uVar16 >> 0x1f;
      }
      if ((uVar29 == 0) &&
         (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar36)) {
        pcVar9 = (code *)swi(3);
        pTVar27 = (TSharedPtr<FTokenizedMessage,1> *)(*pcVar9)();
        return pTVar27;
      }
      pFVar22 = (FRepeatableMessage *)
                ((this->RepeatableMessages).AllocatorInstance.Data + (longlong)(int)uVar16 * 0x40);
      pFVar22->MessageID = param_2;
      uVar29 = (param_3->Source).B;
      uVar16 = (param_3->Source).C;
      uVar13 = (param_3->Source).D;
      (pFVar22->SubjectKey).Source.A = (param_3->Source).A;
      (pFVar22->SubjectKey).Source.B = uVar29;
      (pFVar22->SubjectKey).Source.C = uVar16;
      (pFVar22->SubjectKey).Source.D = uVar13;
      (pFVar22->SubjectKey).SubjectName.Name = (param_3->SubjectName).Name;
      local_2e0 = pFVar22;
      pTVar23 = MakeShared<FLiveLinkLogInstance::FRepeatableMessageData,1>(&local_148);
      pFVar6 = (pFVar22->Data).Object;
      pTVar7 = (pFVar22->Data).SharedReferenceCount.ReferenceController;
      pTVar11 = (pTVar23->SharedReferenceCount).ReferenceController;
      (pFVar22->Data).Object = pTVar23->Object;
      (pFVar22->Data).SharedReferenceCount.ReferenceController = pTVar11;
      pTVar23->Object = pFVar6;
      (pTVar23->SharedReferenceCount).ReferenceController = pTVar7;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_148.SharedReferenceCount.ReferenceController);
      pFVar33 = (FTokenizedMessage *)0x0;
    }
    else {
      local_2a0.ReferenceController = (pFVar22->Token).WeakReferenceCount.ReferenceController;
      pFVar33 = (FTokenizedMessage *)0x0;
      if (local_2a0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        aVar4 = (local_2a0.ReferenceController)->SharedReferenceCount;
        do {
          pFVar33 = (FTokenizedMessage *)0x0;
          if (aVar4 == (atomic<int>)0x0) {
            local_2a0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
            goto LAB_14d037d9d;
          }
          LOCK();
          aVar15 = (local_2a0.ReferenceController)->SharedReferenceCount;
          bVar36 = aVar4 == aVar15;
          if (bVar36) {
            (local_2a0.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
            aVar15 = aVar4;
          }
          UNLOCK();
          aVar4 = aVar15;
        } while (!bVar36);
        if (local_2a0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          pFVar33 = (pFVar22->Token).Object;
        }
      }
LAB_14d037d9d:
      local_2a8 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_300,&local_2a0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2a0.ReferenceController);
      if (pFVar33 == (FTokenizedMessage *)0x0) {
        LOCK();
        ((pFVar22->Data).Object)->Occurrence = (TAtomic<int>)0x0;
        UNLOCK();
      }
    }
    LOCK();
    pTVar1 = &((pFVar22->Data).Object)->Occurrence;
    *pTVar1 = (TAtomic<int>)((int)*pTVar1 + 1);
    UNLOCK();
    QueryPerformanceCounter(local_298);
    pFVar22 = local_2e0;
    auVar37._8_8_ = extraout_XMM0_Qb;
    auVar37._0_8_ = extraout_XMM0_Qa;
    auVar38._8_8_ = 0;
    auVar38._0_8_ =
         ((double)local_298[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
         this->HighPerformanceClockDelta) * __real_416312d000000000 + __real_42e312d000000010;
    auVar38 = roundpd(auVar37,auVar38,1);
    LOCK();
    ((local_2e0->Data).Object)->LastTimeOccured = (TAtomic<FTimespan>)(longlong)auVar38._0_8_;
    UNLOCK();
    if (pFVar33 == (FTokenizedMessage *)0x0) {
      local_2d8 = (local_2e0->Data).SharedReferenceCount.ReferenceController;
      pFVar6 = (local_2e0->Data).Object;
      if (local_2d8 == (TReferenceControllerBase<1> *)0x0) {
        paVar32 = (atomic<int> *)&DAT_00000008;
      }
      else {
        paVar32 = &local_2d8->SharedReferenceCount;
        LOCK();
        *paVar32 = (atomic<int>)((int)*paVar32 + 1);
        UNLOCK();
        LOCK();
        *paVar32 = (atomic<int>)((int)*paVar32 + 1);
        UNLOCK();
      }
      local_2f8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_2f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_2f0.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_2f8,(FWriteAccessScope *)&local_188);
      local_170 = &local_2f0;
      puVar24 = UE::Core::Private::DelegateAllocate(0x28,&local_2f0);
      if (puVar24 != (undefined8 *)0x0) {
        *puVar24 = &
                   ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar25 = FDelegateHandle::GenerateNewID();
        puVar24[2] = uVar25;
        *puVar24 = &TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`FLiveLinkLogInstance::CreateTokenizedMessage'::`27'::<lambda_1>_>
                    ::_vftable_;
        puVar24[3] = pFVar6;
        puVar24[4] = local_2d8;
        if (local_2d8 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          *paVar32 = (atomic<int>)((int)*paVar32 + 1);
          UNLOCK();
        }
      }
      pTVar7 = local_2d8;
      if (local_188.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_188.Accessor,&local_188);
      }
      FText::FText((FText *)local_230);
      local_230[0x10] = true;
      local_208 = 0;
      local_230._24_8_ = 0;
      pvStack_210 = (void *)0x0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_2f8,(FWriteAccessScope *)&local_1b8);
      if (pvStack_210 != (void *)0x0) {
        FMemory::Free(pvStack_210);
      }
      pvStack_210 = (void *)local_2f0.DelegateAllocator;
      local_208 = local_2f0.DelegateSize;
      local_2f0.DelegateSize = 0;
      local_2f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      if (local_1b8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1b8.Accessor,&local_1b8);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_2f8,(FWriteAccessScope *)&local_1a0);
      if ((local_2f0.DelegateSize != 0) &&
         (local_2f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_2f0.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_2f0,0,0,0x10);
        local_2f0.DelegateSize = 0;
      }
      if (local_1a0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1a0.Accessor,&local_1a0);
      }
      if (local_2f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_2f0.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2f8.AccessDetector);
      FDynamicTextToken::Create(&local_1c8,(TAttribute<FText> *)local_230);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_230 + 0x18));
      if ((ITextData *)local_230._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_230._0_8_ + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
      pFVar20 = FText::FText(&local_128);
      pTVar26 = FTokenizedMessage::Create(&local_138,param_1,pFVar20);
      local_268.ReferenceController = (pTVar26->SharedReferenceCount).ReferenceController;
      pFVar33 = pTVar26->Object;
      if (local_268.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_268.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_268.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_270 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_300,&local_268);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_268.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_138.SharedReferenceCount.ReferenceController);
      if (local_128.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_128.TextData.Reference + 0x10))();
      }
      if ((pFVar33 == (FTokenizedMessage *)0x0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar14)) {
        pcVar9 = (code *)swi(3);
        pTVar27 = (TSharedPtr<FTokenizedMessage,1> *)(*pcVar9)();
        return pTVar27;
      }
      local_1f8.Object = (IMessageToken *)local_1c8.Object;
      local_1f8.SharedReferenceCount.ReferenceController =
           local_1c8.SharedReferenceCount.ReferenceController;
      if (local_1c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_1c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_1c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      FTokenizedMessage::AddToken(pFVar33,&local_118,&local_1f8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_118.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1f8.SharedReferenceCount.ReferenceController);
      iVar17 = ::FString::Find(param_4,L"@@",2,IgnoreCase,FromStart,-1);
      if (iVar17 != -1) {
        do {
          if ((pFVar33 == (FTokenizedMessage *)0x0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar14)) {
            pcVar9 = (code *)swi(3);
            pTVar27 = (TSharedPtr<FTokenizedMessage,1> *)(*pcVar9)();
            return pTVar27;
          }
          iVar5 = (param_4->Data).ArrayNum;
          iVar18 = iVar5 + -1;
          if (iVar5 == 0) {
            iVar18 = 0;
          }
          if (iVar17 < iVar18) {
            iVar18 = iVar17;
          }
          iVar10 = 0;
          if (0 < iVar18) {
            iVar10 = iVar18;
          }
          if (iVar5 == 0) {
            pwVar30 = L"";
          }
          else {
            pwVar30 = (wchar_t *)(param_4->Data).AllocatorInstance.Data;
          }
          ::FString::ConstructFromPtrSize(&local_1e8,pwVar30,iVar10);
          pFVar20 = FText::FromString(&local_e8,&local_1e8);
          pTVar21 = FTextToken::Create(&local_f8,pFVar20,true);
          local_260.Object = (IMessageToken *)pTVar21->Object;
          local_260.SharedReferenceCount.ReferenceController =
               (pTVar21->SharedReferenceCount).ReferenceController;
          if (local_260.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_260.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_260.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          FTokenizedMessage::AddToken(pFVar33,&local_108,&local_260);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_108.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_260.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_f8.SharedReferenceCount.ReferenceController);
          if (local_e8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
          }
          if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
          }
          if ((pFVar33 == (FTokenizedMessage *)0x0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar14)) {
            pcVar9 = (code *)swi(3);
            pTVar27 = (TSharedPtr<FTokenizedMessage,1> *)(*pcVar9)();
            return pTVar27;
          }
          ::FName::ToString(&(param_3->SubjectName).Name,&local_1d8);
          pFVar20 = FText::FromString(&local_b8,&local_1d8);
          pTVar21 = FTextToken::Create(&local_c8,pFVar20,true);
          local_250.Object = (IMessageToken *)pTVar21->Object;
          local_250.SharedReferenceCount.ReferenceController =
               (pTVar21->SharedReferenceCount).ReferenceController;
          if (local_250.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_250.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_250.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          FTokenizedMessage::AddToken(pFVar33,&local_d8,&local_250);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_d8.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_250.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_c8.SharedReferenceCount.ReferenceController);
          if (local_b8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
          }
          if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
          }
          ::FString::RemoveAt(param_4,0,iVar17 + 2,No);
          iVar17 = ::FString::Find(param_4,L"@@",2,IgnoreCase,FromStart,-1);
          lpCriticalSection = local_288;
          pFVar22 = local_2e0;
        } while (iVar17 != -1);
      }
      iVar18 = (param_4->Data).ArrayNum;
      iVar17 = iVar18 + -1;
      if (iVar18 == 0) {
        iVar17 = 0;
      }
      if (0 < iVar17) {
        if ((pFVar33 == (FTokenizedMessage *)0x0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar14)) {
          pcVar9 = (code *)swi(3);
          pTVar27 = (TSharedPtr<FTokenizedMessage,1> *)(*pcVar9)();
          return pTVar27;
        }
        pFVar20 = FText::FromString(&local_88,param_4);
        pTVar21 = FTextToken::Create(&local_98,pFVar20,true);
        local_240.Object = (IMessageToken *)pTVar21->Object;
        local_240.SharedReferenceCount.ReferenceController =
             (pTVar21->SharedReferenceCount).ReferenceController;
        if (local_240.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_240.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_240.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        FTokenizedMessage::AddToken(pFVar33,&local_a8,&local_240);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_a8.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_240.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_98.SharedReferenceCount.ReferenceController);
        if (local_88.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
        }
      }
      if ((pFVar33 == (FTokenizedMessage *)0x0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar14)) {
        pcVar9 = (code *)swi(3);
        pTVar27 = (TSharedPtr<FTokenizedMessage,1> *)(*pcVar9)();
        return pTVar27;
      }
      FTokenizedMessage::SetIdentifier(pFVar33,param_2);
      FVar31.ReferenceController = FStack_300.ReferenceController;
      (pFVar22->Token).Object = pFVar33;
      if (FStack_300.ReferenceController != (pFVar22->Token).WeakReferenceCount.ReferenceController)
      {
        if (FStack_300.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (FStack_300.ReferenceController)->WeakReferenceCount =
               (atomic<int>)((int)(FStack_300.ReferenceController)->WeakReferenceCount + 1);
          UNLOCK();
        }
        pTVar7 = (pFVar22->Token).WeakReferenceCount.ReferenceController;
        if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar32 = &pTVar7->WeakReferenceCount;
          aVar4 = *paVar32;
          *paVar32 = (atomic<int>)((int)*paVar32 + -1);
          UNLOCK();
          if (aVar4 == (atomic<int>)0x1) {
            (**(code **)(pTVar7->_padding_ + 8))(pTVar7,1);
          }
        }
        (pFVar22->Token).WeakReferenceCount.ReferenceController = FVar31.ReferenceController;
      }
      if ((pFVar33 == (FTokenizedMessage *)0x0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x408,L""), bVar14)) {
        pcVar9 = (code *)swi(3);
        pTVar27 = (TSharedPtr<FTokenizedMessage,1> *)(*pcVar9)();
        return pTVar27;
      }
      pTStack_2c0 = FStack_300.ReferenceController;
      if (FVar31.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FVar31.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FVar31.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_2c8 = pFVar33;
      if ((pFVar33 == (FTokenizedMessage *)0x0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x25d,L""), bVar14)) {
        pcVar9 = (code *)swi(3);
        pTVar27 = (TSharedPtr<FTokenizedMessage,1> *)(*pcVar9)();
        return pTVar27;
      }
      pFVar8 = (this->ToUpdateMessages).AllocatorInstance.Data;
      if (((pFVar8 <= (FScriptContainerElement *)&local_2c8) &&
          ((FScriptContainerElement *)&local_2c8 <
           pFVar8 + (longlong)(this->ToUpdateMessages).ArrayMax * 0x10)) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar14)) {
        pcVar9 = (code *)swi(3);
        pTVar27 = (TSharedPtr<FTokenizedMessage,1> *)(*pcVar9)();
        return pTVar27;
      }
      iVar17 = (this->ToUpdateMessages).ArrayNum;
      piVar2 = &(this->ToUpdateMessages).ArrayMax;
      if (iVar17 == *piVar2) {
        iVar17 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&(this->ToUpdateMessages).AllocatorInstance,piVar2);
      }
      (this->ToUpdateMessages).ArrayNum = iVar17 + 1;
      pFVar8 = (this->ToUpdateMessages).AllocatorInstance.Data;
      *(FTokenizedMessage **)(pFVar8 + (longlong)iVar17 * 0x10) = local_2c8;
      *(TReferenceControllerBase<1> **)(pFVar8 + (longlong)iVar17 * 0x10 + 8) = pTStack_2c0;
      if (pTStack_2c0 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTStack_2c0->SharedReferenceCount =
             (atomic<int>)((int)pTStack_2c0->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_2c0);
      bVar12 = true;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1c8.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2d8)
      ;
    }
    else {
      FVar31.ReferenceController = FStack_300.ReferenceController;
      if ((bVar14 != false) || (bVar35 = true, this->bLogAllRepeatableMessage == false)) {
        bVar35 = false;
      }
    }
    LeaveCriticalSection(lpCriticalSection);
    if (bVar35) {
      if (pFVar33 == (FTokenizedMessage *)0x0) {
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Token.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\LiveLinkLogInstance.cpp"
                            ,0x1a1,L"");
        if (bVar14) {
          pcVar9 = (code *)swi(3);
          pTVar27 = (TSharedPtr<FTokenizedMessage,1> *)(*pcVar9)();
          return pTVar27;
        }
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        if (bVar14) {
          pcVar9 = (code *)swi(3);
          pTVar27 = (TSharedPtr<FTokenizedMessage,1> *)(*pcVar9)();
          return pTVar27;
        }
      }
      pFVar20 = FTokenizedMessage::ToText(pFVar33,&local_78);
      pFVar28 = FText::ToString(pFVar20);
      LogMessage(this,param_1,pFVar28);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
    }
    if (bVar12) {
      if (FVar31.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FVar31.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FVar31.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      __return_storage_ptr__->Object = pFVar33;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           FVar31.ReferenceController;
    }
    else {
      __return_storage_ptr__->Object = (FTokenizedMessage *)0x0;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar31.ReferenceController);
  }
  return __return_storage_ptr__;
}

// DestroyInstance @ 14d0396b0

void __cdecl FLiveLinkLogInstance::DestroyInstance(void)

{
  code *pcVar1;
  bool bVar2;
  TUniquePtr<FLiveLinkLog,TDefaultDelete<FLiveLinkLog>_> TVar3;
  TUniquePtr<FLiveLinkLog,TDefaultDelete<FLiveLinkLog>_> TVar4;
  FLLMScope local_res8 [2];
  FName local_res10;
  FMemScope local_res18 [2];
  
  FLLMScope::FLLMScope
            (local_res8,LLMTagDeclaration_LiveLink_LiveLinkLogInstance.UniqueName,false,None,Default
             ,true);
  local_res10 = LLMTagDeclaration_LiveLink_LiveLinkLogInstance.UniqueName;
  FMemScope::FMemScope(local_res18,&local_res10,true);
  TVar3 = FLiveLinkLog::Instance;
  if (FLiveLinkLog::Instance.Ptr == (FLiveLinkLog *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6492301340914483303>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\LiveLinkLogInstance.cpp"
                       ,0x67,"FLiveLinkLog::Instance");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    TVar4.Ptr = (FLiveLinkLog *)0x0;
    TVar3 = FLiveLinkLog::Instance;
    if (FLiveLinkLog::Instance.Ptr == (FLiveLinkLog *)0x0) goto LAB_14d03975d;
  }
  FLiveLinkLog::Instance.Ptr = (FLiveLinkLog *)0x0;
  TVar4.Ptr = (FLiveLinkLog *)0x0;
  if (TVar3.Ptr != (FLiveLinkLog *)0x0) {
    (**(code **)*TVar3.Ptr)(TVar3.Ptr,1);
    TVar4 = FLiveLinkLog::Instance;
  }
LAB_14d03975d:
  FLiveLinkLog::Instance.Ptr = (FLiveLinkLog *)0x0;
  if (TVar4.Ptr != (FLiveLinkLog *)0x0) {
    (**(code **)*TVar4.Ptr)(TVar4.Ptr,1);
  }
  LiveLinkLogDetail::PrivateInstance = (FLiveLinkLogInstance *)0x0;
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// FindRepeatableMessage @ 14d042420

FRepeatableMessage * __thiscall
FLiveLinkLogInstance::FindRepeatableMessage
          (FLiveLinkLogInstance *this,FName param_1,FLiveLinkSubjectKey *param_2)

{
  FRepeatableMessage *pFVar1;
  uint *puVar2;
  FRepeatableMessage *pFVar3;
  
  pFVar1 = (FRepeatableMessage *)(this->RepeatableMessages).AllocatorInstance.Data;
  pFVar3 = pFVar1 + (this->RepeatableMessages).ArrayNum;
  if (pFVar1 != pFVar3) {
    puVar2 = &(pFVar1->SubjectKey).Source.D;
    do {
      if (((pFVar1->MessageID == param_1) && (*(FName *)(puVar2 + 1) == (param_2->SubjectName).Name)
          ) && (((puVar2[-1] == (param_2->Source).C && puVar2[-2] == (param_2->Source).B) &&
                ((FGuid *)(puVar2 + -3))->A == (param_2->Source).A) &&
                (param_2->Source).D == *puVar2)) {
        return pFVar1;
      }
      pFVar1 = pFVar1 + 1;
      puVar2 = puVar2 + 0x10;
    } while (pFVar1 != pFVar3);
  }
  return (FRepeatableMessage *)0x0;
}

// FindRepeatableMessage @ 14d042490

FRepeatableMessage * __thiscall
FLiveLinkLogInstance::FindRepeatableMessage
          (FLiveLinkLogInstance *this,FName param_1,FLiveLinkSubjectKey *param_2)

{
  FRepeatableMessage *pFVar1;
  uint *puVar2;
  FRepeatableMessage *pFVar3;
  
  pFVar1 = (FRepeatableMessage *)(this->RepeatableMessages).AllocatorInstance.Data;
  pFVar3 = pFVar1 + (this->RepeatableMessages).ArrayNum;
  if (pFVar1 != pFVar3) {
    puVar2 = &(pFVar1->SubjectKey).Source.D;
    do {
      if (((pFVar1->MessageID == param_1) && (*(FName *)(puVar2 + 1) == (param_2->SubjectName).Name)
          ) && (((puVar2[-1] == (param_2->Source).C && puVar2[-2] == (param_2->Source).B) &&
                ((FGuid *)(puVar2 + -3))->A == (param_2->Source).A) &&
                (param_2->Source).D == *puVar2)) {
        return pFVar1;
      }
      pFVar1 = pFVar1 + 1;
      puVar2 = puVar2 + 0x10;
    } while (pFVar1 != pFVar3);
  }
  return (FRepeatableMessage *)0x0;
}

// GetLogCount @ 14d04f120

void __thiscall
FLiveLinkLogInstance::GetLogCount(FLiveLinkLogInstance *this,int *param_1,int *param_2,int *param_3)

{
  *param_1 = (int)this->ErrorCount;
  *param_2 = (int)this->WarningCount;
  *param_3 = (int)this->InfoCount;
  return;
}

// GetOccurrence @ 14d050e20

TTuple<int,FTimespan> * __thiscall
FLiveLinkLogInstance::GetOccurrence
          (FLiveLinkLogInstance *this,TTuple<int,FTimespan> *__return_storage_ptr__,FName param_1,
          FLiveLinkSubjectKey *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  undefined8 uVar1;
  FName *pFVar2;
  uint *puVar3;
  FName *pFVar4;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar2 = (FName *)(this->RepeatableMessages).AllocatorInstance.Data;
  pFVar4 = pFVar2 + (longlong)(this->RepeatableMessages).ArrayNum * 8;
  if (pFVar2 != pFVar4) {
    puVar3 = &pFVar2[2].Number;
    do {
      if (((*pFVar2 == param_1) && (*(FName *)(puVar3 + 1) == (param_2->SubjectName).Name)) &&
         ((((((FName *)(puVar3 + -1))->ComparisonIndex).Value == (param_2->Source).C &&
           puVar3[-2] == (param_2->Source).B) && puVar3[-3] == (param_2->Source).A) &&
          (param_2->Source).D == *puVar3)) {
        uVar1 = *(undefined8 *)pFVar2[4];
        *(undefined4 *)__return_storage_ptr__ = *(undefined4 *)((longlong)pFVar2[4] + 8);
        *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar1;
        goto LAB_14d050ebb;
      }
      pFVar2 = pFVar2 + 8;
      puVar3 = puVar3 + 0x10;
    } while (pFVar2 != pFVar4);
  }
  *(undefined4 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
LAB_14d050ebb:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return __return_storage_ptr__;
}

// GetSelectedOccurrence @ 14d054910

TTuple<int,FTimespan> * __thiscall
FLiveLinkLogInstance::GetSelectedOccurrence
          (FLiveLinkLogInstance *this,TTuple<int,FTimespan> *__return_storage_ptr__)

{
  *(undefined4 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  return __return_storage_ptr__;
}

// IncrementLogCount @ 14d05ac50

void __thiscall FLiveLinkLogInstance::IncrementLogCount(FLiveLinkLogInstance *this,Type param_1)

{
  if (param_1 == Error) {
    LOCK();
    this->ErrorCount = (TAtomic<int>)((int)this->ErrorCount + 1);
    UNLOCK();
    return;
  }
  if ((param_1 != PerformanceWarning) && (param_1 != Warning)) {
    LOCK();
    this->InfoCount = (TAtomic<int>)((int)this->InfoCount + 1);
    UNLOCK();
    return;
  }
  LOCK();
  this->WarningCount = (TAtomic<int>)((int)this->WarningCount + 1);
  UNLOCK();
  return;
}

// IsMessageEnabled @ 14d05f8a0

bool __cdecl FLiveLinkLogInstance::IsMessageEnabled(FName param_1)

{
  FName *pFVar1;
  FName *pFVar2;
  
  if ((FLiveLinkLog::Instance.Ptr != (FLiveLinkLog *)0x0) &&
     ((FLiveLinkLogInstance *)FLiveLinkLog::Instance.Ptr == LiveLinkLogDetail::PrivateInstance)) {
    if (param_1 != (FName)0x0) {
      pFVar2 = (FName *)(LiveLinkLogDetail::PrivateInstance->DisabledMessages).AllocatorInstance.
                        Data;
      pFVar1 = pFVar2 + (LiveLinkLogDetail::PrivateInstance->DisabledMessages).ArrayNum;
      for (; pFVar2 != pFVar1; pFVar2 = pFVar2 + 1) {
        if (*pFVar2 == param_1) {
          return false;
        }
      }
    }
    return true;
  }
  return false;
}

// LogMessage @ 14d061180

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FLiveLinkLogInstance::LogMessage(FLiveLinkLogInstance *this,Type param_1,FString *param_2)

{
  if (param_1 == Error) {
    if (1 < (byte)LogLiveLink._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogLiveLink);
      return;
    }
  }
  else if ((param_1 == PerformanceWarning) || (param_1 == Warning)) {
    if (2 < (byte)LogLiveLink._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLiveLink);
      return;
    }
  }
  else if (4 < (byte)LogLiveLink._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogLiveLink);
    return;
  }
  return;
}

// LogMessage @ 14d061230

void __thiscall
FLiveLinkLogInstance::LogMessage
          (FLiveLinkLogInstance *this,Type param_1,FName param_2,FLiveLinkSubjectKey *param_3,
          FString *param_4)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TAtomic<int> *pTVar1;
  FName *pFVar2;
  int *piVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  FRepeatableMessageData *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  uint uVar9;
  bool bVar10;
  uint uVar11;
  longlong lVar12;
  FRepeatableMessage *pFVar13;
  TSharedRef<FLiveLinkLogInstance::FRepeatableMessageData,1> *pTVar14;
  uint uVar15;
  FName *pFVar16;
  ForAnyElementType FVar17;
  bool bVar18;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar20 [16];
  LARGE_INTEGER local_res18;
  FLiveLinkSubjectKey *local_res20;
  FTimespan local_88;
  FString local_80;
  FString local_70;
  TSharedRef<FLiveLinkLogInstance::FRepeatableMessageData,1> local_60;
  FString local_50;
  undefined1 auVar19 [16];
  
  if (param_2 != (FName)0x0) {
    pFVar16 = (FName *)(this->DisabledMessages).AllocatorInstance.Data;
    pFVar2 = pFVar16 + (this->DisabledMessages).ArrayNum;
    for (; pFVar16 != pFVar2; pFVar16 = pFVar16 + 1) {
      if (*pFVar16 == param_2) {
        return;
      }
    }
  }
  if (param_1 == Error) {
    lVar12 = 0x60;
  }
  else if ((param_1 == PerformanceWarning) || (param_1 == Warning)) {
    lVar12 = 100;
  }
  else {
    lVar12 = 0x68;
  }
  LOCK();
  piVar3 = (int *)((longlong)(this->CriticalSection).CriticalSection.Opaque1 + lVar12 + -8);
  *piVar3 = *piVar3 + 1;
  UNLOCK();
  local_res20 = param_3;
  if ((param_3->SubjectName).Name != (FName)0x0) {
    ::FName::ToString(&(param_3->SubjectName).Name,&local_70);
    FVar17.Data = (FScriptContainerElement *)L"";
    if (local_70.Data.ArrayNum != 0) {
      FVar17.Data = local_70.Data.AllocatorInstance.Data;
    }
    ::FString::ReplaceInline(param_4,L"@@",(wchar_t *)FVar17.Data,IgnoreCase);
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
  }
  bVar10 = this->bSilentMode;
  if (param_2 == (FName)0x0) {
    if (bVar10 != false) {
      return;
    }
  }
  else {
    bVar18 = bVar10 == false;
    lpCriticalSection = &this->CriticalSection;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar13 = FindRepeatableMessage(this,param_2,param_3);
    if (pFVar13 == (FRepeatableMessage *)0x0) {
      uVar11 = TArray<FLiveLinkLogInstance::FRepeatableMessage,TSizedDefaultAllocator<32>_>::
               AddZeroed(&this->RepeatableMessages);
      uVar15 = 0;
      if ((int)uVar11 < (this->RepeatableMessages).ArrayNum) {
        uVar15 = ~uVar11 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar13 = (FRepeatableMessage *)
                ((this->RepeatableMessages).AllocatorInstance.Data + (longlong)(int)uVar11 * 0x40);
      pFVar13->MessageID = param_2;
      uVar15 = (local_res20->Source).B;
      uVar11 = (local_res20->Source).C;
      uVar9 = (local_res20->Source).D;
      (pFVar13->SubjectKey).Source.A = (local_res20->Source).A;
      (pFVar13->SubjectKey).Source.B = uVar15;
      (pFVar13->SubjectKey).Source.C = uVar11;
      (pFVar13->SubjectKey).Source.D = uVar9;
      (pFVar13->SubjectKey).SubjectName.Name = (local_res20->SubjectName).Name;
      pTVar14 = MakeShared<FLiveLinkLogInstance::FRepeatableMessageData,1>(&local_60);
      pFVar6 = (pFVar13->Data).Object;
      pTVar7 = (pFVar13->Data).SharedReferenceCount.ReferenceController;
      pTVar8 = (pTVar14->SharedReferenceCount).ReferenceController;
      (pFVar13->Data).Object = pTVar14->Object;
      (pFVar13->Data).SharedReferenceCount.ReferenceController = pTVar8;
      pTVar14->Object = pFVar6;
      (pTVar14->SharedReferenceCount).ReferenceController = pTVar7;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_60.SharedReferenceCount.ReferenceController);
    }
    else if ((bVar10 == false) && (this->bLogAllRepeatableMessage != false)) {
      bVar18 = true;
    }
    else {
      bVar18 = false;
    }
    LOCK();
    pTVar1 = &((pFVar13->Data).Object)->Occurrence;
    *pTVar1 = (TAtomic<int>)((int)*pTVar1 + 1);
    UNLOCK();
    QueryPerformanceCounter(&local_res18);
    auVar19._8_8_ = extraout_XMM0_Qb;
    auVar19._0_8_ = extraout_XMM0_Qa;
    auVar20._8_8_ = 0;
    auVar20._0_8_ =
         ((double)local_res18.QuadPart * FGenericPlatformTime::SecondsPerCycle +
         this->HighPerformanceClockDelta) * __real_416312d000000000 + __real_42e312d000000010;
    auVar20 = roundpd(auVar19,auVar20,1);
    LOCK();
    ((pFVar13->Data).Object)->LastTimeOccured = (TAtomic<FTimespan>)(longlong)auVar20._0_8_;
    UNLOCK();
    if (bVar18) {
      local_88.Ticks = *(long64 *)&((pFVar13->Data).Object)->LastTimeOccured;
      FTimespan::ToString(&local_88,&local_50);
      ::FString::PrintfImpl(&local_80,L"Occurred %d time. Last occurrence %s. %s");
      if (param_4 != &local_80) {
        pFVar4 = (param_4->Data).AllocatorInstance.Data;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
        (param_4->Data).AllocatorInstance.Data = local_80.Data.AllocatorInstance.Data;
        (param_4->Data).ArrayNum = local_80.Data.ArrayNum;
        (param_4->Data).ArrayMax = local_80.Data.ArrayMax;
        local_80.Data.ArrayNum = 0;
        local_80.Data.ArrayMax = 0;
        local_80.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80.Data.AllocatorInstance.Data);
      }
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        goto LAB_14d061549;
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (!bVar18) {
      return;
    }
  }
LAB_14d061549:
  LogMessage(this,param_1,param_4);
  return;
}

// SetEnableMessage @ 14d07e5a0

void __cdecl FLiveLinkLogInstance::SetEnableMessage(FName param_1,bool param_2)

{
  int *piVar1;
  int iVar2;
  FName *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  FLiveLinkLogInstance *pFVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  FName *pFVar11;
  FName local_res18;
  
  pFVar6 = LiveLinkLogDetail::PrivateInstance;
  if (((FLiveLinkLog::Instance.Ptr != (FLiveLinkLog *)0x0) &&
      ((FLiveLinkLogInstance *)FLiveLinkLog::Instance.Ptr == LiveLinkLogDetail::PrivateInstance)) &&
     (param_1 != (FName)0x0)) {
    local_res18 = param_1;
    if (!param_2) {
      TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>
                (&LiveLinkLogDetail::PrivateInstance->DisabledMessages,&local_res18);
      return;
    }
    pFVar3 = (FName *)(LiveLinkLogDetail::PrivateInstance->DisabledMessages).AllocatorInstance.Data;
    iVar8 = (LiveLinkLogDetail::PrivateInstance->DisabledMessages).ArrayNum;
    for (pFVar11 = pFVar3; pFVar11 != pFVar3 + iVar8; pFVar11 = pFVar11 + 1) {
      if (*pFVar11 == param_1) {
        uVar10 = (uint)((longlong)pFVar11 - (longlong)pFVar3 >> 3);
        if (uVar10 == 0xffffffff) {
          return;
        }
        uVar9 = 0;
        if ((int)(uVar10 + 1) <= iVar8) {
          uVar9 = ~uVar10 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar2 = (pFVar6->DisabledMessages).ArrayNum;
        pFVar4 = (pFVar6->DisabledMessages).AllocatorInstance.Data;
        iVar8 = iVar2 + ~uVar10;
        if (1 < iVar8) {
          iVar8 = 1;
        }
        if (iVar8 != 0) {
          memmove(pFVar4 + (longlong)(int)uVar10 * 8,pFVar4 + (longlong)(iVar2 - iVar8) * 8,
                  (longlong)iVar8 << 3);
        }
        piVar1 = &(pFVar6->DisabledMessages).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,&(pFVar6->DisabledMessages).AllocatorInstance,
                   (pFVar6->DisabledMessages).ArrayNum,&(pFVar6->DisabledMessages).ArrayMax);
        return;
      }
    }
  }
  return;
}

// SetEnableMessage_Internal @ 14d07e710

void __thiscall
FLiveLinkLogInstance::SetEnableMessage_Internal
          (FLiveLinkLogInstance *this,FName param_1,bool param_2)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *this_00;
  int *piVar1;
  int iVar2;
  FName *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  FName *pFVar10;
  FName local_res10;
  
  if (param_1 != (FName)0x0) {
    this_00 = &this->DisabledMessages;
    local_res10 = param_1;
    if (!param_2) {
      TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>(this_00,&local_res10);
      return;
    }
    pFVar3 = (FName *)(this_00->AllocatorInstance).Data;
    iVar7 = (this->DisabledMessages).ArrayNum;
    for (pFVar10 = pFVar3; pFVar10 != pFVar3 + iVar7; pFVar10 = pFVar10 + 1) {
      if (*pFVar10 == param_1) {
        uVar9 = (uint)((longlong)pFVar10 - (longlong)pFVar3 >> 3);
        if (uVar9 == 0xffffffff) {
          return;
        }
        uVar8 = 0;
        if ((int)(uVar9 + 1) <= iVar7) {
          uVar8 = ~uVar9 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar2 = (this->DisabledMessages).ArrayNum;
        pFVar4 = (this_00->AllocatorInstance).Data;
        iVar7 = iVar2 + ~uVar9;
        if (1 < iVar7) {
          iVar7 = 1;
        }
        if (iVar7 != 0) {
          memmove(pFVar4 + (longlong)(int)uVar9 * 8,pFVar4 + (longlong)(iVar2 - iVar7) * 8,
                  (longlong)iVar7 << 3);
        }
        piVar1 = &(this->DisabledMessages).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,&this_00->AllocatorInstance,(this->DisabledMessages).ArrayNum,
                   &(this->DisabledMessages).ArrayMax);
        return;
      }
    }
  }
  return;
}

// SetLogRepeatedMessage @ 14d07ea20

void __cdecl FLiveLinkLogInstance::SetLogRepeatedMessage(bool param_1)

{
  if ((FLiveLinkLog::Instance.Ptr != (FLiveLinkLog *)0x0) &&
     ((FLiveLinkLogInstance *)FLiveLinkLog::Instance.Ptr == LiveLinkLogDetail::PrivateInstance)) {
    LiveLinkLogDetail::PrivateInstance->bLogAllRepeatableMessage = param_1;
  }
  return;
}

// SetSilent @ 14d07ef60

void __cdecl FLiveLinkLogInstance::SetSilent(bool param_1)

{
  if ((FLiveLinkLog::Instance.Ptr != (FLiveLinkLog *)0x0) &&
     ((FLiveLinkLogInstance *)FLiveLinkLog::Instance.Ptr == LiveLinkLogDetail::PrivateInstance)) {
    LiveLinkLogDetail::PrivateInstance->bSilentMode = param_1;
  }
  return;
}

// Update @ 14d086450

void __thiscall FLiveLinkLogInstance::Update(FLiveLinkLogInstance *this)

{
  int *piVar1;
  int iVar2;
  TSharedRef<FTokenizedMessage,1> *pTVar3;
  
  iVar2 = (this->ToUpdateMessages).ArrayNum;
  piVar1 = &(this->ToUpdateMessages).ArrayMax;
  pTVar3 = (TSharedRef<FTokenizedMessage,1> *)(this->ToUpdateMessages).AllocatorInstance.Data;
  if (-1 < (this->ToUpdateMessages).ArrayMax) {
    DestructItems<TSharedRef<FTokenizedMessage,1>,int>(pTVar3,iVar2);
    (this->ToUpdateMessages).ArrayNum = 0;
    return;
  }
  DestructItems<TSharedRef<FTokenizedMessage,1>,int>(pTVar3,iVar2);
  (this->ToUpdateMessages).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->ToUpdateMessages).AllocatorInstance,0,piVar1);
  }
  return;
}

