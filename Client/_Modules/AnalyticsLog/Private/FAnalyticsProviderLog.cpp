// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnalyticsLog
// Functions: 15

// FAnalyticsProviderLog @ 14ea17200

FAnalyticsProviderLog * __thiscall
FAnalyticsProviderLog::FAnalyticsProviderLog
          (FAnalyticsProviderLog *this,
          TDelegate<FString___cdecl(FString_const_&,bool),FDefaultDelegateUserPolicy> *param_1)

{
  TUniquePtr<FArchive,TDefaultDelete<FArchive>_> *pTVar1;
  TUniquePtr<UE::Tasks::FPipe,TDefaultDelete<UE::Tasks::FPipe>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  FArchive *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FString *pFVar8;
  IFileManager *pIVar9;
  FArchive *pFVar10;
  undefined8 *puVar11;
  FPipe *pFVar12;
  FPipe *pFVar13;
  FAnalyticsProviderLog *pFVar14;
  ForAnyElementType FVar15;
  uint uVar16;
  int iVar17;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  longlong local_78;
  undefined8 local_70;
  FString local_68;
  FReadAccessScope local_58;
  FReadAccessScope local_40;
  
  pFVar13 = (FPipe *)0x0;
  pTVar1 = &this->FileWriter;
  pTVar2 = &this->WriterPipe;
  (this->UserID).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UserID).Data.ArrayNum = 0;
  (this->UserID).Data.ArrayMax = 0;
  this->_padding_ = (longlong)&___7FAnalyticsProviderLog__6B_;
  (this->SessionID).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SessionID).Data.ArrayNum = 0;
  (this->SessionID).Data.ArrayMax = 0;
  (this->DefaultEventAttributes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DefaultEventAttributes).ArrayNum = 0;
  (this->DefaultEventAttributes).ArrayMax = 0;
  pTVar1->Ptr = (FArchive *)0x0;
  pTVar2->Ptr = (FPipe *)0x0;
  ::FString::FString(&local_98,L"FileName");
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,&local_58);
  pFVar12 = pFVar13;
  if (*(int *)&param_1->field_0x10 != 0) {
    pFVar12 = *(FPipe **)&param_1->field_0x8;
  }
  (**(code **)((longlong)pFVar12->LastTask + 0x60))(pFVar12,&local_a8,&local_98,1);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_58);
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (local_a8.Data.ArrayNum < 2) {
    ::FString::operator=(&local_a8,L"Telemetry.json");
  }
  ::FString::FString(&local_88,L"FolderPath");
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,&local_40);
  pFVar12 = pFVar13;
  if (*(int *)&param_1->field_0x10 != 0) {
    pFVar12 = *(FPipe **)&param_1->field_0x8;
  }
  (**(code **)((longlong)pFVar12->LastTask + 0x60))(pFVar12,&local_d8,&local_88);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_40);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_d8.Data.ArrayNum < 2) {
    pFVar8 = FWindowsPlatformMisc::GetEnvironmentVariable(&local_68,L"UE_TELEMETRY_DIR");
    if (&local_d8 != pFVar8) {
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
      local_d8.Data.AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
      (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_d8.Data.ArrayNum = (pFVar8->Data).ArrayNum;
      local_d8.Data.ArrayMax = (pFVar8->Data).ArrayMax;
      (pFVar8->Data).ArrayNum = 0;
      (pFVar8->Data).ArrayMax = 0;
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_d8.Data.ArrayNum < 2) {
      pFVar8 = FPaths::ProjectSavedDir();
      local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar3 = (pFVar8->Data).ArrayNum;
      _Src = (pFVar8->Data).AllocatorInstance.Data;
      local_c8.Data.ArrayNum = iVar3;
      uVar16 = (0xb - (uint)((pFVar8->Data).ArrayNum != 0)) + iVar3;
      if ((int)uVar16 < iVar3) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
      }
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar16,0,(ForAnyElementType *)&local_c8,iVar3,&local_c8.Data.ArrayMax);
      if (iVar3 != 0) {
        memcpy(local_c8.Data.AllocatorInstance.Data,_Src,(longlong)iVar3 * 2);
      }
      ::FString::PathAppend(&local_c8,L"Telemetry",9);
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
      local_d8.Data.AllocatorInstance.Data = local_c8.Data.AllocatorInstance.Data;
      local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_d8.Data.ArrayNum = local_c8.Data.ArrayNum;
      local_d8.Data.ArrayMax = local_c8.Data.ArrayMax;
      local_c8.Data.ArrayNum = 0;
      local_c8.Data.ArrayMax = 0;
    }
  }
  iVar3 = local_d8.Data.ArrayNum;
  FVar15.Data = local_d8.Data.AllocatorInstance.Data;
  iVar17 = local_a8.Data.ArrayNum + -1;
  if (local_a8.Data.ArrayNum == 0) {
    iVar17 = 0;
  }
  local_b8.Data.ArrayNum = local_d8.Data.ArrayNum;
  if ((local_d8.Data.ArrayNum == 0) && (iVar17 != -1)) {
    iVar7 = iVar17 + 2;
LAB_14ea17480:
    local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (iVar7 != 0) goto LAB_14ea17489;
    local_b8.Data.ArrayMax = 0;
  }
  else {
    iVar7 = iVar17 + 1;
    if (local_d8.Data.ArrayNum == 0) goto LAB_14ea17480;
LAB_14ea17489:
    local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    uVar16 = local_d8.Data.ArrayNum + iVar7;
    if ((int)uVar16 < local_d8.Data.ArrayNum) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar16,0,(ForAnyElementType *)&local_b8,local_d8.Data.ArrayNum,
               &local_b8.Data.ArrayMax);
    if (iVar3 != 0) {
      memcpy(local_b8.Data.AllocatorInstance.Data,FVar15.Data,(longlong)iVar3 * 2);
    }
  }
  ::FString::PathAppend(&local_b8,(wchar_t *)local_a8.Data.AllocatorInstance.Data,iVar17);
  pIVar9 = IFileManager::Get();
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_b8.Data.ArrayNum != 0) {
    FVar15.Data = local_b8.Data.AllocatorInstance.Data;
  }
  pFVar10 = (FArchive *)(**(code **)((longlong)*pIVar9 + 0x20))(pIVar9,FVar15.Data,4);
  if (pTVar1 == (TUniquePtr<FArchive,TDefaultDelete<FArchive>_> *)&local_78) {
    if (pFVar10 != (FArchive *)0x0) {
      puVar11 = *(undefined8 **)pFVar10;
      goto LAB_14ea17530;
    }
  }
  else {
    pFVar4 = pTVar1->Ptr;
    pTVar1->Ptr = pFVar10;
    if (pFVar4 != (FArchive *)0x0) {
      puVar11 = *(undefined8 **)pFVar4;
      pFVar10 = pFVar4;
LAB_14ea17530:
      (*(code *)*puVar11)(pFVar10,1);
    }
  }
  if (pTVar1->Ptr != (FArchive *)0x0) {
    pFVar12 = ::operator_new(0x28);
    if (pFVar12 != (FPipe *)0x0) {
      pFVar13 = UE::Tasks::FPipe::FPipe(pFVar12,L"FAnalyticsProviderLog_Writer");
    }
    if (pTVar2 == (TUniquePtr<UE::Tasks::FPipe,TDefaultDelete<UE::Tasks::FPipe>_> *)&local_70) {
      if (pFVar13 == (FPipe *)0x0) goto LAB_14ea17603;
      if ((pFVar13->TaskCount != (atomic<unsigned___int64>)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("!HasWork()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\Pipe.h"
                             ,0x2a,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        pFVar14 = (FAnalyticsProviderLog *)(*pcVar5)();
        return pFVar14;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pFVar13->EmptyEventRef).SharedReferenceCount.ReferenceController);
    }
    else {
      pFVar12 = pTVar2->Ptr;
      pTVar2->Ptr = pFVar13;
      if (pFVar12 == (FPipe *)0x0) goto LAB_14ea17603;
      if ((pFVar12->TaskCount != (atomic<unsigned___int64>)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("!HasWork()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\Pipe.h"
                             ,0x2a,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        pFVar14 = (FAnalyticsProviderLog *)(*pcVar5)();
        return pFVar14;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pFVar12->EmptyEventRef).SharedReferenceCount.ReferenceController);
      pFVar13 = pFVar12;
    }
    ::operator_delete(pFVar13,0x28);
  }
LAB_14ea17603:
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  return this;
}

// ~FAnalyticsProviderLog @ 14ea17670

void __thiscall FAnalyticsProviderLog::~FAnalyticsProviderLog(FAnalyticsProviderLog *this)

{
  FPipe *pFVar1;
  FArchive *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  
  this->_padding_ = (longlong)&___7FAnalyticsProviderLog__6B_;
  pFVar1 = (this->WriterPipe).Ptr;
  if (pFVar1 != (FPipe *)0x0) {
    if (pFVar1->TaskCount != (atomic<unsigned___int64>)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!HasWork()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\Pipe.h"
                         ,0x2a,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar1->EmptyEventRef).SharedReferenceCount.ReferenceController);
    ::operator_delete(pFVar1,0x28);
  }
  pFVar2 = (this->FileWriter).Ptr;
  if (pFVar2 != (FArchive *)0x0) {
    (*(code *)**(undefined8 **)pFVar2)(pFVar2,1);
  }
  DestructItems<FAnalyticsEventAttribute,int>
            ((FAnalyticsEventAttribute *)(this->DefaultEventAttributes).AllocatorInstance.Data,
             (this->DefaultEventAttributes).ArrayNum);
  pFVar3 = (this->DefaultEventAttributes).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->SessionID).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->UserID).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  this->_padding_ = (longlong)&___7IAnalyticsProvider__6B_;
  return;
}

// operator() @ 14ea17740

void __thiscall `FAnalyticsProviderLog::RecordEvent'::__l5::<lambda_1>::operator()(void *this)

{
  bool bVar1;
  
  bVar1 = -1 < CpuChannel->Enabled;
  if (bVar1) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId169,"FAnalyticsProviderLog_WriteJob",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\AnalyticsLog\\Private\\AnalyticsProviderLog.cpp"
               ,0xa9);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId169);
  }
  FArchive::LogfImpl(*(FArchive **)(*(longlong *)this + 0x38),L"%s");
  (**(code **)(**(longlong **)(*(longlong *)this + 0x38) + 0x208))();
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// EndSession @ 14ea17b70

void __thiscall FAnalyticsProviderLog::EndSession(FAnalyticsProviderLog *this)

{
  code *pcVar1;
  FPipe *pFVar2;
  FArchive *pFVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FAnalyticsEventAttribute *local_28;
  undefined8 local_20;
  FString local_18;
  
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId106,"FAnalyticsProviderLog::EndSession",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\AnalyticsLog\\Private\\AnalyticsProviderLog.cpp"
               ,0x6a);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId106);
  }
  local_28 = (FAnalyticsEventAttribute *)0x0;
  local_20 = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x80);
  ::FString::FString(&local_18,L"EndSession");
  (*pcVar1)(this,&local_18,&local_28);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  DestructItems<FAnalyticsEventAttribute,int>(local_28,(int)local_20);
  if (local_28 != (FAnalyticsEventAttribute *)0x0) {
    FMemory::Free(local_28);
  }
  if ((this->WriterPipe).Ptr != (FPipe *)0x0) {
    bVar6 = -1 < CpuChannel->Enabled;
    if (bVar6) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId112,"FAnalyticsProviderLog::EndSession::ClosePipe",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\AnalyticsLog\\Private\\AnalyticsProviderLog.cpp"
                 ,0x70);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId112);
    }
    UE::Tasks::FPipe::WaitUntilEmpty((this->WriterPipe).Ptr,(FTimespan)0x7fffffffffffffff);
    pFVar2 = (this->WriterPipe).Ptr;
    if (pFVar2 != (FPipe *)0x0) {
      (this->WriterPipe).Ptr = (FPipe *)0x0;
      if ((pFVar2->TaskCount != (atomic<unsigned___int64>)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!HasWork()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\Pipe.h"
                             ,0x2a,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pFVar2->EmptyEventRef).SharedReferenceCount.ReferenceController);
      ::operator_delete(pFVar2,0x28);
    }
    if (bVar6) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  pFVar3 = (this->FileWriter).Ptr;
  if (pFVar3 != (FArchive *)0x0) {
    (**(code **)(*(longlong *)pFVar3 + 0x208))();
    (**(code **)(*(longlong *)(this->FileWriter).Ptr + 0x210))();
    pFVar3 = (this->FileWriter).Ptr;
    if (pFVar3 != (FArchive *)0x0) {
      (this->FileWriter).Ptr = (FArchive *)0x0;
      (*(code *)**(undefined8 **)pFVar3)(pFVar3,1);
    }
  }
  if (!bVar5) {
    return;
  }
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

// FlushEvents @ 14ea17da0

void __thiscall FAnalyticsProviderLog::FlushEvents(FAnalyticsProviderLog *this)

{
  return;
}

// GetDefaultEventAttribute @ 14ea17db0

FAnalyticsEventAttribute * __thiscall
FAnalyticsProviderLog::GetDefaultEventAttribute
          (FAnalyticsProviderLog *this,FAnalyticsEventAttribute *__return_storage_ptr__,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FAnalyticsEventAttribute *pFVar4;
  FScriptContainerElement *pFVar5;
  
  uVar3 = 0;
  if (param_1 < (this->DefaultEventAttributes).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FAnalyticsEventAttribute *)(*pcVar1)();
      return pFVar4;
    }
  }
  pFVar5 = (this->DefaultEventAttributes).AllocatorInstance.Data + (longlong)param_1 * 0x30;
  ::FString::FString(&__return_storage_ptr__->AttrName,(FString *)pFVar5);
  ::FString::FString(&__return_storage_ptr__->AttrValueString,(FString *)(pFVar5 + 0x10));
  __return_storage_ptr__->AttrValueNumber = *(double *)&pFVar5[0x20].field_0x0;
  __return_storage_ptr__->AttrValueBool = (bool)pFVar5[0x28];
  __return_storage_ptr__->AttrType = *(AttrTypeEnum *)(pFVar5 + 0x2c);
  return __return_storage_ptr__;
}

// GetDefaultEventAttributeCount @ 14ea17e70

int __thiscall FAnalyticsProviderLog::GetDefaultEventAttributeCount(FAnalyticsProviderLog *this)

{
  return (this->DefaultEventAttributes).ArrayNum;
}

// GetDefaultEventAttributesSafe @ 14ea17e80

TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> * __thiscall
FAnalyticsProviderLog::GetDefaultEventAttributesSafe
          (FAnalyticsProviderLog *this,
          TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  FAnalyticsEventAttribute *pFVar2;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = (this->DefaultEventAttributes).ArrayNum;
  pFVar2 = (FAnalyticsEventAttribute *)(this->DefaultEventAttributes).AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x30,8,iVar1,0,&__return_storage_ptr__->AllocatorInstance,iVar1,
             &__return_storage_ptr__->ArrayMax);
  ConstructItems<FAnalyticsEventAttribute,FAnalyticsEventAttribute,int>
            ((__return_storage_ptr__->AllocatorInstance).Data,pFVar2,iVar1);
  return __return_storage_ptr__;
}

// GetSessionID @ 14ea17f10

FString * __thiscall
FAnalyticsProviderLog::GetSessionID(FAnalyticsProviderLog *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->SessionID);
  return __return_storage_ptr__;
}

// GetUserID @ 14ea17f40

FString * __thiscall
FAnalyticsProviderLog::GetUserID(FAnalyticsProviderLog *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->UserID);
  return __return_storage_ptr__;
}

// RecordEvent @ 14ea17fa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FAnalyticsProviderLog::RecordEvent
          (FAnalyticsProviderLog *this,FString *param_1,
          TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_2)

{
  atomic<unsigned___int64> *paVar1;
  undefined1 *puVar2;
  int iVar3;
  FAnalyticsEventAttribute *pFVar4;
  FPipe *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  void *pvVar9;
  TExecutableTask<_public:_virtual_void___cdecl_FAnalyticsProviderLog::RecordEvent(FString_const_&,TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_>_const_&)_::_5_::<lambda_1>_>
  *this_00;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  bool bVar12;
  undefined1 auStackY_8f8 [32];
  TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> local_8b8;
  undefined1 local_8a8 [8];
  FString local_8a0;
  <lambda_1> local_890;
  FDateTime local_870;
  TStringBuilderBase<wchar_t> local_868;
  wchar_t local_848 [1024];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_8f8;
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId128,"FAnalyticsProviderLog::RecordEvent",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\AnalyticsLog\\Private\\AnalyticsProviderLog.cpp"
               ,0x80);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId128);
  }
  if (((this->FileWriter).Ptr != (FArchive *)0x0) && ((this->WriterPipe).Ptr != (FPipe *)0x0)) {
    local_868.Base = local_848;
    local_868.CurPos = local_848;
    local_868.End = (wchar_t *)local_48;
    local_868.bIsDynamic = false;
    local_868.bIsExternal = false;
    TStringBuilderBase<wchar_t>::AppendfImpl(&local_868,L"{\"EventName\":\"%s\"");
    FDateTime::UtcNow();
    FDateTime::FDateTime(&local_870,0x7b2,1,1,0,0,0,0);
    TStringBuilderBase<wchar_t>::AppendfImpl(&local_868,L",\"TimestampUTC\":%f");
    RecordId = RecordId + 1;
    TStringBuilderBase<wchar_t>::AppendfImpl(&local_868,L",\"RecordId\":%d");
    iVar3 = (this->DefaultEventAttributes).ArrayNum;
    pFVar4 = (FAnalyticsEventAttribute *)(this->DefaultEventAttributes).AllocatorInstance.Data;
    local_8b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_8b8.ArrayNum = iVar3;
    if (iVar3 == 0) {
      local_8b8.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,iVar3,0,&local_8b8.AllocatorInstance,iVar3,&local_8b8.ArrayMax);
      ConstructItems<FAnalyticsEventAttribute,FAnalyticsEventAttribute,int>
                (local_8b8.AllocatorInstance.Data,pFVar4,iVar3);
    }
    if ((&local_8b8 == param_2) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar3 = param_2->ArrayNum;
    if (iVar3 != 0) {
      iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x30,8,iVar3,&local_8b8.AllocatorInstance,&local_8b8.ArrayNum,
                         &local_8b8.ArrayMax);
      ConstructItems<FAnalyticsEventAttribute,FAnalyticsEventAttribute,int>
                (local_8b8.AllocatorInstance.Data + (longlong)iVar8 * 0x30,
                 (FAnalyticsEventAttribute *)(param_2->AllocatorInstance).Data,iVar3);
    }
    iVar3 = local_8b8.ArrayNum;
    pFVar11 = local_8b8.AllocatorInstance.Data + 0x18;
    pFVar10 = local_8b8.AllocatorInstance.Data + (longlong)local_8b8.ArrayNum * 0x30;
    while( true ) {
      if (local_8b8.ArrayNum != iVar3) {
        `TCheckedPointerIterator<FAnalyticsEventAttribute,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_8a8);
      }
      if (pFVar11 + -0x18 == pFVar10) break;
      if (*(int *)(pFVar11 + 0x14) == 4) {
        if (*(int *)(pFVar11 + -0x10) == 0) {
          TStringBuilderBase<wchar_t>::AppendfImpl(&local_868,L",\"%s\":%s");
          pFVar11 = pFVar11 + 0x30;
        }
        else {
          TStringBuilderBase<wchar_t>::AppendfImpl(&local_868,L",\"%s\":%s");
          pFVar11 = pFVar11 + 0x30;
        }
      }
      else {
        TStringBuilderBase<wchar_t>::AppendfImpl(&local_868,L",\"%s\":\"%s\"");
        pFVar11 = pFVar11 + 0x30;
      }
    }
    if (local_868.End < local_868.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_868,1);
    }
    pvVar9 = FGenericPlatformString::Memcpy(local_868.CurPos,L"}",2);
    local_868.CurPos = (wchar_t *)((longlong)pvVar9 + 2);
    if (local_868.End < (wchar_t *)((longlong)pvVar9 + 4U)) {
      TStringBuilderBase<wchar_t>::Extend(&local_868,1);
    }
    *local_868.CurPos = L'\0';
    ::FString::FString(&local_8a0,local_868.Base);
    pFVar5 = (this->WriterPipe).Ptr;
    local_890.FinalOutput.Data.AllocatorInstance.Data = local_8a0.Data.AllocatorInstance.Data;
    local_890.FinalOutput.Data.ArrayNum = local_8a0.Data.ArrayNum;
    local_890.FinalOutput.Data.ArrayMax = local_8a0.Data.ArrayMax;
    local_8a0.Data.ArrayNum = 0;
    local_8a0.Data.ArrayMax = 0;
    local_8a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_890.__this = this;
    this_00 = UE::Tasks::Private::
              TExecutableTask<`FAnalyticsProviderLog::RecordEvent'::__l5::<lambda_1>_>::Create
                        (L"FAnalyticsProviderLog_WriteJob",&local_890,Default,None,None);
    LOCK();
    paVar1 = &pFVar5->TaskCount;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
    UNLOCK();
    LOCK();
    *(int *)&this_00->field_0x34 = *(int *)&this_00->field_0x34 + 1;
    UNLOCK();
    *(FPipe **)&this_00->field_0x38 = pFVar5;
    UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)this_00,0x100);
    LOCK();
    puVar2 = &this_00->field_0x30;
    iVar3 = *(int *)puVar2;
    *(int *)puVar2 = *(int *)puVar2 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (*(code *)**(undefined8 **)this_00)(this_00,1);
    }
    if (local_890.FinalOutput.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_890.FinalOutput.Data.AllocatorInstance.Data);
    }
    if (local_8a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8a0.Data.AllocatorInstance.Data);
    }
    DestructItems<FAnalyticsEventAttribute,int>
              ((FAnalyticsEventAttribute *)local_8b8.AllocatorInstance.Data,local_8b8.ArrayNum);
    if ((FAnalyticsEventAttribute *)local_8b8.AllocatorInstance.Data !=
        (FAnalyticsEventAttribute *)0x0) {
      FMemory::Free(local_8b8.AllocatorInstance.Data);
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_868);
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// SetDefaultEventAttributes @ 14ea18440

void __thiscall
FAnalyticsProviderLog::SetDefaultEventAttributes
          (FAnalyticsProviderLog *this,
          TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FAnalyticsEventAttribute *pFVar4;
  
  pTVar1 = &this->DefaultEventAttributes;
  if (pTVar1 != param_1) {
    DestructItems<FAnalyticsEventAttribute,int>
              ((FAnalyticsEventAttribute *)(pTVar1->AllocatorInstance).Data,
               (this->DefaultEventAttributes).ArrayNum);
    iVar3 = param_1->ArrayNum;
    piVar2 = &(this->DefaultEventAttributes).ArrayMax;
    pFVar4 = (FAnalyticsEventAttribute *)(param_1->AllocatorInstance).Data;
    (this->DefaultEventAttributes).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
      return;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,iVar3,*piVar2,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<FAnalyticsEventAttribute,FAnalyticsEventAttribute,int>
              ((pTVar1->AllocatorInstance).Data,pFVar4,iVar3);
  }
  return;
}

// SetSessionID @ 14ea184e0

bool __thiscall FAnalyticsProviderLog::SetSessionID(FAnalyticsProviderLog *this,FString *param_1)

{
  ::FString::operator=(&this->SessionID,param_1);
  return true;
}

// SetUserID @ 14ea18500

void __thiscall FAnalyticsProviderLog::SetUserID(FAnalyticsProviderLog *this,FString *param_1)

{
  ::FString::operator=(&this->UserID,param_1);
  return;
}

// StartSession @ 14ea18510

bool __thiscall
FAnalyticsProviderLog::StartSession
          (FAnalyticsProviderLog *this,
          TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  FString local_18;
  
  bVar2 = -1 < CpuChannel->Enabled;
  if (bVar2) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId97,"FAnalyticsProviderLog::StartSession",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\AnalyticsLog\\Private\\AnalyticsProviderLog.cpp"
               ,0x61);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId97);
  }
  pcVar1 = *(code **)(this->_padding_ + 0x80);
  ::FString::FString(&local_18,L"StartSession");
  (*pcVar1)(this,&local_18,param_1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

