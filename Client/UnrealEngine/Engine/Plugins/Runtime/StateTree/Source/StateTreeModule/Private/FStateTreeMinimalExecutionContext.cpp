// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 11

// FStateTreeMinimalExecutionContext @ 14d4eb9b0

FStateTreeMinimalExecutionContext * __thiscall
FStateTreeMinimalExecutionContext::FStateTreeMinimalExecutionContext
          (FStateTreeMinimalExecutionContext *this,UObject *param_1,UStateTree *param_2,
          FStateTreeInstanceData *param_3)

{
  if ((param_2 != (UStateTree *)0x0) && (param_1 != (UObject *)0x0)) {
    FStateTreeMinimalExecutionContext
              (this,(TNotNull<UObject_*>)param_1,(TNotNull<UStateTree_const_*>)param_2,
               (param_3->InstanceStorage).Object);
    this->_padding_ = (longlong)&___7FStateTreeMinimalExecutionContext__6B_;
    return this;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// FStateTreeMinimalExecutionContext @ 14d4eb9f0

FStateTreeMinimalExecutionContext * __thiscall
FStateTreeMinimalExecutionContext::FStateTreeMinimalExecutionContext
          (FStateTreeMinimalExecutionContext *this,UObject *param_1,UStateTree *param_2,
          FStateTreeInstanceStorage *param_3)

{
  if ((param_2 != (UStateTree *)0x0) && (param_1 != (UObject *)0x0)) {
    FStateTreeMinimalExecutionContext
              (this,(TNotNull<UObject_*>)param_1,(TNotNull<UStateTree_const_*>)param_2,param_3);
    this->_padding_ = (longlong)&___7FStateTreeMinimalExecutionContext__6B_;
    return this;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// FStateTreeMinimalExecutionContext @ 14d4eba30

FStateTreeMinimalExecutionContext * __thiscall
FStateTreeMinimalExecutionContext::FStateTreeMinimalExecutionContext
          (FStateTreeMinimalExecutionContext *this,TNotNull<UObject_*> param_1,
          TNotNull<UStateTree_const_*> param_2,FStateTreeInstanceData *param_3)

{
  FStateTreeMinimalExecutionContext(this,param_1,param_2,(param_3->InstanceStorage).Object);
  this->_padding_ = (longlong)&___7FStateTreeMinimalExecutionContext__6B_;
  return this;
}

// FStateTreeMinimalExecutionContext @ 14d4eba60

FStateTreeMinimalExecutionContext * __thiscall
FStateTreeMinimalExecutionContext::FStateTreeMinimalExecutionContext
          (FStateTreeMinimalExecutionContext *this,TNotNull<UObject_*> param_1,
          TNotNull<UStateTree_const_*> param_2,FStateTreeInstanceStorage *param_3)

{
  TNotNull<UE::StateTree::Debug::FRuntimeValidationInstanceData_*> TVar1;
  bool bVar2;
  FRuntimeValidation local_res8 [4];
  
  FStateTreeReadOnlyExecutionContext::FStateTreeReadOnlyExecutionContext
            ((FStateTreeReadOnlyExecutionContext *)this,param_1,param_2,param_3);
  this->_padding_ = (longlong)&___7FStateTreeMinimalExecutionContext__6B_;
  this->bAllowedToScheduleNextTick = true;
  FMRSWRecursiveAccessDetector::AcquireWriteAccess
            ((FMRSWRecursiveAccessDetector *)(this->_padding_ + 0x110));
  bVar2 = UStateTree::IsReadyToRun((UStateTree *)this->_padding_);
  if (bVar2) {
    TVar1.Val = *(FRuntimeValidationInstanceData **)(this->_padding_ + 0x120);
    if (TVar1.Val == (FRuntimeValidationInstanceData *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    UE::StateTree::Debug::FRuntimeValidation::FRuntimeValidation(local_res8,TVar1);
    UE::StateTree::Debug::FRuntimeValidation::SetContext
              (local_res8,(UObject *)this->_padding_,(UStateTree *)this->_padding_,true);
  }
  return this;
}

// ~FStateTreeMinimalExecutionContext @ 14d4ec960

void __thiscall
FStateTreeMinimalExecutionContext::~FStateTreeMinimalExecutionContext
          (FStateTreeMinimalExecutionContext *this)

{
  longlong *plVar1;
  longlong lVar2;
  
  this->_padding_ = (longlong)&___7FStateTreeMinimalExecutionContext__6B_;
  FMRSWRecursiveAccessDetector::ReleaseWriteAccess
            ((FMRSWRecursiveAccessDetector *)(this->_padding_ + 0x110));
  lVar2 = this->_padding_;
  this->_padding_ = (longlong)&___7FStateTreeReadOnlyExecutionContext__6B_;
  FMRSWRecursiveAccessDetector::RemoveReaderFromTls((FMRSWRecursiveAccessDetector *)(lVar2 + 0x110))
  ;
  LOCK();
  plVar1 = (longlong *)(lVar2 + 0x110);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  return;
}

// AddScheduledTickRequest @ 14d4ef290

/* WARNING: Enum "Type": Some values do not have unique names */

FScheduledTickHandle __thiscall
FStateTreeMinimalExecutionContext::AddScheduledTickRequest
          (FStateTreeMinimalExecutionContext *this,FStateTreeScheduledTick param_1)

{
  UObjectBaseUtility *pUVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  atomic<unsigned_int> aVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined8 in_R8;
  FName local_res8;
  FName local_res20;
  int local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  bVar6 = UStateTree::IsReadyToRun((UStateTree *)this->_padding_);
  if (bVar6) {
    lVar2 = this->_padding_;
    LOCK();
    UNLOCK();
    iVar9 = (int)::Value + 1;
    aVar5 = (atomic<unsigned_int>)((int)::Value + 1);
    if (iVar9 == 0) {
      LOCK();
      UNLOCK();
      iVar9 = (int)::Value + 2;
      aVar5 = (atomic<unsigned_int>)((int)::Value + 2);
    }
    ::Value = aVar5;
    uStack_94 = (undefined4)in_R8;
    uStack_90 = (undefined4)((ulonglong)in_R8 >> 0x20);
    local_98 = iVar9;
    if (((*(int **)(lVar2 + 0x50) <= &local_98) &&
        (&local_98 < *(int **)(lVar2 + 0x50) + (longlong)*(int *)(lVar2 + 0x5c) * 3)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (FScheduledTickHandle)uVar7;
    }
    iVar8 = *(int *)(lVar2 + 0x58);
    if (iVar8 == *(int *)(lVar2 + 0x5c)) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x40c,(ForAnyElementType *)(lVar2 + 0x50),(int *)(lVar2 + 0x5c));
    }
    *(int *)(lVar2 + 0x58) = iVar8 + 1;
    lVar3 = *(longlong *)(lVar2 + 0x50);
    *(ulonglong *)(lVar3 + (longlong)iVar8 * 0xc) = CONCAT44(uStack_94,local_98);
    *(undefined4 *)(lVar3 + (longlong)iVar8 * 0xc + 8) = uStack_90;
    FStateTreeExecutionState::CacheScheduledTickRequest((FStateTreeExecutionState *)(lVar2 + 0x10));
    ScheduleNextTick(this,ScheduledTickRequest);
    *(int *)param_1 = iVar9;
  }
  else {
    if (FVisualLogger::bIsRecording != 0) {
      pUVar1 = (UObjectBaseUtility *)this->_padding_;
      if ((pUVar1 == (UObjectBaseUtility *)0x0) || (*(longlong *)&pUVar1->field_0x10 == 0)) {
        ::FString::FString(&local_78,L"None");
      }
      else {
        UObjectBaseUtility::GetFullName(pUVar1,&local_78,(UObject *)0x0,None);
      }
      if (this->_padding_ == 0) {
        ::FString::FString(&local_88,L"None");
      }
      else {
        local_res8 = *(FName *)(this->_padding_ + 0x18);
        ::FName::ToString(&local_res8,&local_88);
      }
      FStateTreeReadOnlyExecutionContext::GetInstanceDescriptionInternal
                ((FStateTreeReadOnlyExecutionContext *)this,&local_48);
      if ((UObject *)this->_padding_ == (UObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)this->_padding_,(FName *)&LogStateTree.field_0x4,Warning,
                 L"%s: %hs: StateTree context is not initialized properly (\'%s\' using StateTree \'%s\')"
                );
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
    }
    if (2 < (byte)LogStateTree._0_1_) {
      pUVar1 = (UObjectBaseUtility *)this->_padding_;
      if ((pUVar1 == (UObjectBaseUtility *)0x0) || (*(longlong *)&pUVar1->field_0x10 == 0)) {
        ::FString::FString(&local_58,L"None");
      }
      else {
        UObjectBaseUtility::GetFullName(pUVar1,&local_58,(UObject *)0x0,None);
      }
      if (this->_padding_ == 0) {
        ::FString::FString(&local_68,L"None");
      }
      else {
        local_res20 = *(FName *)(this->_padding_ + 0x18);
        ::FName::ToString(&local_res20,&local_68);
      }
      FStateTreeReadOnlyExecutionContext::GetInstanceDescriptionInternal
                ((FStateTreeReadOnlyExecutionContext *)this,&local_38);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStateTree);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
    *(undefined4 *)param_1 = 0;
  }
  return (uint)param_1.NextDeltaTime;
}

// GetMutableExecutionExtension @ 14d4fe510

FStateTreeExecutionExtension * __thiscall
FStateTreeMinimalExecutionContext::GetMutableExecutionExtension
          (FStateTreeMinimalExecutionContext *this)

{
  int iVar1;
  FStateTreeExecutionExtension *pFVar2;
  bool bVar3;
  UPackage *pUVar4;
  UScriptStruct *local_res8;
  UScriptStruct **local_res10 [3];
  
  pFVar2 = *(FStateTreeExecutionExtension **)(this->_padding_ + 0x78);
  local_res8 = *(UScriptStruct **)(this->_padding_ + 0x70);
  if (pFVar2 == (FStateTreeExecutionExtension *)0x0) {
    return (FStateTreeExecutionExtension *)0x0;
  }
  if (local_res8 == (UScriptStruct *)0x0) {
    return (FStateTreeExecutionExtension *)0x0;
  }
  if (Z_Registration_Info_UScriptStruct_FStateTreeExecutionExtension.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeExecutionExtension.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeExecutionExtension,(UObject *)pUVar4,
                         L"StateTreeExecutionExtension");
  }
  if (local_res8 == Z_Registration_Info_UScriptStruct_FStateTreeExecutionExtension.OuterSingleton) {
    return pFVar2;
  }
  if (Z_Registration_Info_UScriptStruct_FStateTreeExecutionExtension.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeExecutionExtension.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeExecutionExtension,(UObject *)pUVar4,
                         L"StateTreeExecutionExtension");
    if (Z_Registration_Info_UScriptStruct_FStateTreeExecutionExtension.OuterSingleton ==
        (UScriptStruct *)0x0) goto LAB_14d4fe5c6;
  }
  iVar1 = (int)(Z_Registration_Info_UScriptStruct_FStateTreeExecutionExtension.OuterSingleton)->
               _padding_;
  if (((int)local_res8->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(local_res8->_padding_ + (longlong)iVar1 * 8) !=
      &(Z_Registration_Info_UScriptStruct_FStateTreeExecutionExtension.OuterSingleton)->_padding_))
  {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    return pFVar2;
  }
LAB_14d4fe5c6:
  local_res10[0] = &local_res8;
  bVar3 = `UE::StructUtils::GetStructPtr<FStateTreeExecutionExtension,FStateTreeExecutionExtension>'
          ::__l7::<lambda_1>::operator()(local_res10);
  if (bVar3) {
    return pFVar2;
  }
  return (FStateTreeExecutionExtension *)0x0;
}

// RemoveScheduledTickRequest @ 14d503cb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FStateTreeMinimalExecutionContext::RemoveScheduledTickRequest
          (FStateTreeMinimalExecutionContext *this,FScheduledTickHandle param_1)

{
  UObjectBaseUtility *pUVar1;
  bool bVar2;
  FName local_res8;
  FString local_48;
  FString local_38;
  FString local_28;
  
  bVar2 = UStateTree::IsReadyToRun((UStateTree *)this->_padding_);
  if (bVar2) {
    bVar2 = FStateTreeExecutionState::RemoveScheduledTickRequest
                      ((FStateTreeExecutionState *)(this->_padding_ + 0x10),param_1);
    if (bVar2) {
      ScheduleNextTick(this,ScheduledTickRequest);
      return;
    }
  }
  else {
    if (FVisualLogger::bIsRecording != 0) {
      pUVar1 = (UObjectBaseUtility *)this->_padding_;
      if ((pUVar1 == (UObjectBaseUtility *)0x0) || (*(longlong *)&pUVar1->field_0x10 == 0)) {
        ::FString::FString(&local_38,L"None");
      }
      else {
        UObjectBaseUtility::GetFullName(pUVar1,&local_38,(UObject *)0x0,None);
      }
      if (this->_padding_ == 0) {
        ::FString::FString(&local_48,L"None");
      }
      else {
        local_res8 = *(FName *)(this->_padding_ + 0x18);
        ::FName::ToString(&local_res8,&local_48);
      }
      FStateTreeReadOnlyExecutionContext::GetInstanceDescriptionInternal
                ((FStateTreeReadOnlyExecutionContext *)this,&local_28);
      if ((UObject *)this->_padding_ == (UObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)this->_padding_,(FName *)&LogStateTree.field_0x4,Warning,
                 L"%s: %hs: StateTree context is not initialized properly (\'%s\' using StateTree \'%s\')"
                );
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    if (2 < (byte)LogStateTree._0_1_) {
      pUVar1 = (UObjectBaseUtility *)this->_padding_;
      if ((pUVar1 == (UObjectBaseUtility *)0x0) || (*(longlong *)&pUVar1->field_0x10 == 0)) {
        ::FString::FString(&local_48,L"None");
      }
      else {
        UObjectBaseUtility::GetFullName(pUVar1,&local_48,(UObject *)0x0,None);
      }
      if (this->_padding_ == 0) {
        ::FString::FString(&local_38,L"None");
      }
      else {
        local_res8 = *(FName *)(this->_padding_ + 0x18);
        ::FName::ToString(&local_res8,&local_38);
      }
      FStateTreeReadOnlyExecutionContext::GetInstanceDescriptionInternal
                ((FStateTreeReadOnlyExecutionContext *)this,&local_28);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStateTree);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// ScheduleNextTick @ 14d5079a0

void __thiscall
FStateTreeMinimalExecutionContext::ScheduleNextTick
          (FStateTreeMinimalExecutionContext *this,ETickReason param_1)

{
  FStateTreeExecutionExtension *pFVar1;
  ETickReason local_res8 [8];
  longlong local_28;
  longlong local_20;
  longlong local_18;
  
  if ((this->bAllowedToScheduleNextTick != false) &&
     ((*(byte *)(this->_padding_ + 0x276) & 0x20) != 0)) {
    pFVar1 = GetMutableExecutionExtension(this);
    if (pFVar1 != (FStateTreeExecutionExtension *)0x0) {
      local_28 = this->_padding_;
      local_20 = this->_padding_;
      local_18 = this->_padding_;
      local_res8[0] = param_1;
      (**(code **)((longlong)*pFVar1 + 0x18))(pFVar1,&local_28,local_res8);
    }
  }
  return;
}

// SendEvent @ 14d5133e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FStateTreeMinimalExecutionContext::SendEvent
          (FStateTreeMinimalExecutionContext *this,FGameplayTag param_1,FConstStructView *param_2,
          FName param_3)

{
  UObjectBaseUtility *pUVar1;
  bool bVar2;
  FName local_res8;
  FName local_res10;
  FString local_58;
  FString local_48;
  FConstStructView local_38;
  
  local_res10 = param_1.TagName;
  if (!__CsvProfilerStat882) {
    FCsvProfilerTrace::OutputInlineStatExclusive("StateTree_SendEvent");
    __CsvProfilerStat882 = true;
  }
  FCsvProfiler::BeginExclusiveStat("StateTree_SendEvent","CSV_StateTree_SendEvent");
  bVar2 = UStateTree::IsReadyToRun((UStateTree *)this->_padding_);
  if (bVar2) {
    if (FVisualLogger::bIsRecording != 0) {
      ::FName::ToString(&local_res10,&local_48);
      FStateTreeReadOnlyExecutionContext::GetInstanceDescriptionInternal
                ((FStateTreeReadOnlyExecutionContext *)this,(FString *)&local_38);
      if ((UObject *)this->_padding_ == (UObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)this->_padding_,(FName *)&LogStateTree.field_0x4,All,
                 L"%s: Send Event \'%s\'");
      if (local_38.ScriptStruct != (UScriptStruct *)0x0) {
        FMemory::Free(local_38.ScriptStruct);
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    if (6 < (byte)LogStateTree._0_1_) {
      ::FName::ToString(&local_res10,&local_48);
      FStateTreeReadOnlyExecutionContext::GetInstanceDescriptionInternal
                ((FStateTreeReadOnlyExecutionContext *)this,(FString *)&local_38);
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogStateTree);
      if (local_38.ScriptStruct != (UScriptStruct *)0x0) {
        FMemory::Free(local_38.ScriptStruct);
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    if (-1 < StateTreeDebugChannel->Enabled) {
      ::FName::ToString(&local_res10,&local_48);
      UE::StateTreeTrace::OutputLogEventTrace
                ((TNotNull<FStateTreeReadOnlyExecutionContext_const_*>)this,Log,L"Send Event \'%s\'"
                );
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    local_38.ScriptStruct = param_2->ScriptStruct;
    local_38.StructMemory = param_2->StructMemory;
    bVar2 = FStateTreeEventQueue::SendEvent
                      (*(FStateTreeEventQueue **)(this->_padding_ + 200),(UObject *)this->_padding_,
                       (FGameplayTag *)&local_res10,&local_38,param_3);
    if (bVar2) {
      ScheduleNextTick(this,Event);
      if ((UStateTree *)this->_padding_ == (UStateTree *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      local_38.ScriptStruct = param_2->ScriptStruct;
      local_38.StructMemory = param_2->StructMemory;
      UE::StateTree::Debug::EventSent
                (this,(UStateTree *)this->_padding_,(FGameplayTag)local_res10,&local_38,param_3);
    }
  }
  else {
    if (FVisualLogger::bIsRecording != 0) {
      pUVar1 = (UObjectBaseUtility *)this->_padding_;
      if ((pUVar1 == (UObjectBaseUtility *)0x0) || (*(longlong *)&pUVar1->field_0x10 == 0)) {
        ::FString::FString(&local_48,L"None");
      }
      else {
        UObjectBaseUtility::GetFullName(pUVar1,&local_48,(UObject *)0x0,None);
      }
      if (this->_padding_ == 0) {
        ::FString::FString(&local_58,L"None");
      }
      else {
        local_res8 = *(FName *)(this->_padding_ + 0x18);
        ::FName::ToString(&local_res8,&local_58);
      }
      FStateTreeReadOnlyExecutionContext::GetInstanceDescriptionInternal
                ((FStateTreeReadOnlyExecutionContext *)this,(FString *)&local_38);
      if ((UObject *)this->_padding_ == (UObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)this->_padding_,(FName *)&LogStateTree.field_0x4,Warning,
                 L"%s: %hs: StateTree context is not initialized properly (\'%s\' using StateTree \'%s\')"
                );
      if (local_38.ScriptStruct != (UScriptStruct *)0x0) {
        FMemory::Free(local_38.ScriptStruct);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    if (2 < (byte)LogStateTree._0_1_) {
      pUVar1 = (UObjectBaseUtility *)this->_padding_;
      if ((pUVar1 == (UObjectBaseUtility *)0x0) || (*(longlong *)&pUVar1->field_0x10 == 0)) {
        ::FString::FString(&local_58,L"None");
      }
      else {
        UObjectBaseUtility::GetFullName(pUVar1,&local_58,(UObject *)0x0,None);
      }
      if (this->_padding_ == 0) {
        ::FString::FString(&local_48,L"None");
      }
      else {
        local_res8 = *(FName *)(this->_padding_ + 0x18);
        ::FName::ToString(&local_res8,&local_48);
      }
      FStateTreeReadOnlyExecutionContext::GetInstanceDescriptionInternal
                ((FStateTreeReadOnlyExecutionContext *)this,(FString *)&local_38);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStateTree);
      if (local_38.ScriptStruct != (UScriptStruct *)0x0) {
        FMemory::Free(local_38.ScriptStruct);
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
  }
  FCsvProfiler::EndExclusiveStat("StateTree_SendEvent");
  return;
}

// UpdateScheduledTickRequest @ 14d523c20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FStateTreeMinimalExecutionContext::UpdateScheduledTickRequest
          (FStateTreeMinimalExecutionContext *this,FScheduledTickHandle param_1,
          FStateTreeScheduledTick param_2)

{
  uint *puVar1;
  UObjectBaseUtility *pUVar2;
  longlong lVar3;
  bool bVar4;
  uint *puVar5;
  FName local_res8;
  ETickReason EStackX_1c;
  FString local_58;
  FString local_48;
  FString local_38;
  
  bVar4 = UStateTree::IsReadyToRun((UStateTree *)this->_padding_);
  if (bVar4) {
    lVar3 = this->_padding_;
    puVar5 = *(uint **)(lVar3 + 0x50);
    puVar1 = puVar5 + (longlong)*(int *)(lVar3 + 0x58) * 3;
    if (puVar5 != puVar1) {
      while (*puVar5 != param_1.Value) {
        puVar5 = puVar5 + 3;
        if (puVar5 == puVar1) {
          return;
        }
      }
      local_res8.ComparisonIndex.Value = (uint)param_2.NextDeltaTime;
      if (((float)local_res8.ComparisonIndex.Value != (float)puVar5[1]) ||
         (EStackX_1c = param_2.Reason, *(ETickReason *)(puVar5 + 2) != EStackX_1c)) {
        *(FStateTreeScheduledTick *)(puVar5 + 1) = param_2;
        local_res8 = (FName)param_2;
        FStateTreeExecutionState::CacheScheduledTickRequest
                  ((FStateTreeExecutionState *)(lVar3 + 0x10));
        ScheduleNextTick(this,ScheduledTickRequest);
        return;
      }
    }
  }
  else {
    if (FVisualLogger::bIsRecording != 0) {
      pUVar2 = (UObjectBaseUtility *)this->_padding_;
      if ((pUVar2 == (UObjectBaseUtility *)0x0) || (*(longlong *)&pUVar2->field_0x10 == 0)) {
        ::FString::FString(&local_48,L"None");
      }
      else {
        UObjectBaseUtility::GetFullName(pUVar2,&local_48,(UObject *)0x0,None);
      }
      if (this->_padding_ == 0) {
        ::FString::FString(&local_58,L"None");
      }
      else {
        local_res8 = *(FName *)(this->_padding_ + 0x18);
        ::FName::ToString(&local_res8,&local_58);
      }
      FStateTreeReadOnlyExecutionContext::GetInstanceDescriptionInternal
                ((FStateTreeReadOnlyExecutionContext *)this,&local_38);
      if ((UObject *)this->_padding_ == (UObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)this->_padding_,(FName *)&LogStateTree.field_0x4,Warning,
                 L"%s: %hs: StateTree context is not initialized properly (\'%s\' using StateTree \'%s\')"
                );
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    if (2 < (byte)LogStateTree._0_1_) {
      pUVar2 = (UObjectBaseUtility *)this->_padding_;
      if ((pUVar2 == (UObjectBaseUtility *)0x0) || (*(longlong *)&pUVar2->field_0x10 == 0)) {
        ::FString::FString(&local_58,L"None");
      }
      else {
        UObjectBaseUtility::GetFullName(pUVar2,&local_58,(UObject *)0x0,None);
      }
      if (this->_padding_ == 0) {
        ::FString::FString(&local_48,L"None");
      }
      else {
        local_res8 = *(FName *)(this->_padding_ + 0x18);
        ::FName::ToString(&local_res8,&local_48);
      }
      FStateTreeReadOnlyExecutionContext::GetInstanceDescriptionInternal
                ((FStateTreeReadOnlyExecutionContext *)this,&local_38);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStateTree);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

