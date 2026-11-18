// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 16

// SetNodeCustomDebugTraceData @ 14d4d01e0

void __thiscall
FStateTreeReadOnlyExecutionContext::SetNodeCustomDebugTraceData
          (FStateTreeReadOnlyExecutionContext *this,FNodeCustomDebugData *param_1)

{
  FScriptContainerElement *pFVar1;
  FNodeCustomDebugData *pFVar2;
  undefined1 local_res8 [8];
  
  if (((this->NodeCustomDebugTraceData).MergePolicy != Unset) &&
     (1 < (this->NodeCustomDebugTraceData).TraceDebuggerString.Data.ArrayNum)) {
    `FStateTreeReadOnlyExecutionContext::SetNodeCustomDebugTraceData'::__l2::<lambda_1>::operator()
              (local_res8);
  }
  pFVar2 = &this->NodeCustomDebugTraceData;
  if (pFVar2 != param_1) {
    pFVar1 = (pFVar2->TraceDebuggerString).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (pFVar2->TraceDebuggerString).Data.AllocatorInstance.Data =
         (param_1->TraceDebuggerString).Data.AllocatorInstance.Data;
    (param_1->TraceDebuggerString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->NodeCustomDebugTraceData).TraceDebuggerString.Data.ArrayNum =
         (param_1->TraceDebuggerString).Data.ArrayNum;
    (this->NodeCustomDebugTraceData).TraceDebuggerString.Data.ArrayMax =
         (param_1->TraceDebuggerString).Data.ArrayMax;
    (param_1->TraceDebuggerString).Data.ArrayNum = 0;
    (param_1->TraceDebuggerString).Data.ArrayMax = 0;
    (this->NodeCustomDebugTraceData).MergePolicy = param_1->MergePolicy;
    ::FString::Reset(&param_1->TraceDebuggerString,0);
    param_1->MergePolicy = Unset;
  }
  return;
}

// FStateTreeReadOnlyExecutionContext @ 14d4ebae0

FStateTreeReadOnlyExecutionContext * __thiscall
FStateTreeReadOnlyExecutionContext::FStateTreeReadOnlyExecutionContext
          (FStateTreeReadOnlyExecutionContext *this,TNotNull<UObject_*> param_1,
          TNotNull<UStateTree_const_*> param_2,FStateTreeInstanceData *param_3)

{
  FStateTreeReadOnlyExecutionContext(this,param_1,param_2,(param_3->InstanceStorage).Object);
  this->_padding_ = (longlong)&___7FStateTreeReadOnlyExecutionContext__6B_;
  return this;
}

// FStateTreeReadOnlyExecutionContext @ 14d4ebb10

FStateTreeReadOnlyExecutionContext * __thiscall
FStateTreeReadOnlyExecutionContext::FStateTreeReadOnlyExecutionContext
          (FStateTreeReadOnlyExecutionContext *this,TNotNull<UObject_*> param_1,
          TNotNull<UStateTree_const_*> param_2,FStateTreeInstanceStorage *param_3)

{
  TNotNull<UE::StateTree::Debug::FRuntimeValidationInstanceData_*> TVar1;
  bool bVar2;
  FRuntimeValidation local_res8 [4];
  
  this->Owner = param_1.Val;
  this->RootStateTree = param_2.Val;
  this->Storage = param_3;
  this->_padding_ = (longlong)&___7FStateTreeReadOnlyExecutionContext__6B_;
  (this->NodeCustomDebugTraceData).TraceDebuggerString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->NodeCustomDebugTraceData).TraceDebuggerString.Data.ArrayNum = 0;
  (this->NodeCustomDebugTraceData).TraceDebuggerString.Data.ArrayMax = 0;
  (this->NodeCustomDebugTraceData).MergePolicy = Unset;
  this->OuterTraceId = 0;
  FMRSWRecursiveAccessDetector::AcquireReadAccess(&this->Storage->AccessDetector);
  bVar2 = UStateTree::IsReadyToRun(this->RootStateTree);
  if (bVar2) {
    TVar1.Val = (this->Storage->RuntimeValidationData).Ptr;
    if (TVar1.Val == (FRuntimeValidationInstanceData *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    UE::StateTree::Debug::FRuntimeValidation::FRuntimeValidation(local_res8,TVar1);
    UE::StateTree::Debug::FRuntimeValidation::SetContext
              (local_res8,this->Owner,this->RootStateTree,false);
  }
  return this;
}

// ~FStateTreeReadOnlyExecutionContext @ 14d4ec9d0

void __thiscall
FStateTreeReadOnlyExecutionContext::~FStateTreeReadOnlyExecutionContext
          (FStateTreeReadOnlyExecutionContext *this)

{
  FMRSWRecursiveAccessDetector *pFVar1;
  FStateTreeInstanceStorage *pFVar2;
  FScriptContainerElement *pFVar3;
  
  pFVar2 = this->Storage;
  this->_padding_ = (longlong)&___7FStateTreeReadOnlyExecutionContext__6B_;
  FMRSWRecursiveAccessDetector::RemoveReaderFromTls(&pFVar2->AccessDetector);
  LOCK();
  pFVar1 = &pFVar2->AccessDetector;
  pFVar1->State = (atomic<unsigned___int64>)((longlong)pFVar1->State + -1);
  UNLOCK();
  pFVar3 = (this->NodeCustomDebugTraceData).TraceDebuggerString.Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// DebugPrintInternalLayout @ 14d4f4190

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FStateTreeReadOnlyExecutionContext::DebugPrintInternalLayout
          (FStateTreeReadOnlyExecutionContext *this)

{
  FString local_28;
  FLogScopedVerbosityOverride local_18;
  
  FLogScopedVerbosityOverride::FLogScopedVerbosityOverride
            (&local_18,(FLogCategoryBase *)&LogStateTree,Log);
  if (4 < (byte)LogStateTree._0_1_) {
    UStateTree::DebugInternalLayoutAsString(this->RootStateTree,&local_28);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStateTree);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  FLogScopedVerbosityOverride::~FLogScopedVerbosityOverride(&local_18);
  return;
}

// GetActiveFrames @ 14d4fad80

/* WARNING: Enum "Type": Some values do not have unique names */

TArrayView<FStateTreeExecutionFrame_const_,int> * __thiscall
FStateTreeReadOnlyExecutionContext::GetActiveFrames
          (FStateTreeReadOnlyExecutionContext *this,
          TArrayView<FStateTreeExecutionFrame_const_,int> *__return_storage_ptr__)

{
  UStateTree *pUVar1;
  UObject *pUVar2;
  bool bVar3;
  FName local_res8;
  FString local_58;
  FString local_48;
  FString local_38;
  
  bVar3 = UStateTree::IsReadyToRun(this->RootStateTree);
  if (bVar3) {
    TArrayView<FStateTreeExecutionFrame_const_,int>::
    TArrayView<FStateTreeExecutionFrame_const_,int><TArray<FStateTreeExecutionFrame,TSizedDefaultAllocator<32>_>_const_&,TArray<FStateTreeExecutionFrame,TSizedDefaultAllocator<32>_>_>
              (__return_storage_ptr__,&(this->Storage->ExecutionState).ActiveFrames);
    return __return_storage_ptr__;
  }
  if (FVisualLogger::bIsRecording != 0) {
    pUVar1 = this->RootStateTree;
    if ((pUVar1 == (UStateTree *)0x0) || (*(longlong *)&pUVar1->field_0x10 == 0)) {
      ::FString::FString(&local_48,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)pUVar1,&local_48,(UObject *)0x0,None);
    }
    pUVar2 = this->Owner;
    if (pUVar2 == (UObject *)0x0) {
      ::FString::FString(&local_58,L"None");
    }
    else {
      local_res8.ComparisonIndex.Value = *(uint *)&pUVar2->field_0x18;
      local_res8.Number = *(uint *)&pUVar2->field_0x1c;
      ::FName::ToString(&local_res8,&local_58);
    }
    GetInstanceDescriptionInternal(this,&local_38);
    if (this->Owner == (UObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    FVisualLogger::CategorizedLogfImpl
              (this->Owner,(FName *)&LogStateTree.field_0x4,Warning,
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
    pUVar1 = this->RootStateTree;
    if ((pUVar1 == (UStateTree *)0x0) || (*(longlong *)&pUVar1->field_0x10 == 0)) {
      ::FString::FString(&local_58,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)pUVar1,&local_58,(UObject *)0x0,None);
    }
    pUVar2 = this->Owner;
    if (pUVar2 == (UObject *)0x0) {
      ::FString::FString(&local_48,L"None");
    }
    else {
      local_res8.ComparisonIndex.Value = *(uint *)&pUVar2->field_0x18;
      local_res8.Number = *(uint *)&pUVar2->field_0x1c;
      ::FName::ToString(&local_res8,&local_48);
    }
    GetInstanceDescriptionInternal(this,&local_38);
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
  __return_storage_ptr__->DataPtr = (FStateTreeExecutionFrame *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetActiveStateName @ 14d4fb020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall
FStateTreeReadOnlyExecutionContext::GetActiveStateName
          (FStateTreeReadOnlyExecutionContext *this,FString *__return_storage_ptr__)

{
  EStateTreeRunStatus EVar1;
  ushort uVar2;
  UStateTree *pUVar3;
  UObject *pUVar4;
  code *pcVar5;
  FStateTreeExecutionState *pFVar6;
  bool bVar7;
  FString *pFVar8;
  void *pvVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  ForAnyElementType FVar13;
  ForAnyElementType FVar14;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  int iVar17;
  ulonglong uVar18;
  FScriptContainerElement *pFVar19;
  undefined1 auStack_968 [32];
  FScriptContainerElement *local_948;
  FScriptContainerElement *local_940;
  FScriptContainerElement *local_938;
  FScriptContainerElement *local_930;
  int local_928;
  uint local_924;
  undefined8 local_920;
  longlong local_918;
  UStateTree *local_910;
  FString local_908;
  FString local_8f8;
  FString local_8e8;
  FString local_8d8;
  FName local_8c8;
  FName local_8c0;
  FName local_8b8;
  longlong local_8b0;
  FStateTreeExecutionState *local_8a8;
  FString *local_8a0;
  undefined1 local_898 [8];
  FString local_890;
  FString local_880;
  TStringBuilderBase<wchar_t> local_868;
  wchar_t local_848 [1024];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_968;
  local_8a0 = __return_storage_ptr__;
  bVar7 = UStateTree::IsReadyToRun(this->RootStateTree);
  if (bVar7) {
    local_868.Base = local_848;
    local_910 = this->RootStateTree;
    local_8a8 = &this->Storage->ExecutionState;
    iVar17 = 0;
    local_868.CurPos = local_848;
    local_868.bIsDynamic = false;
    local_868.bIsExternal = false;
    local_868.End = (wchar_t *)local_48;
    iVar10 = (this->Storage->ExecutionState).ActiveFrames.ArrayNum;
    local_924 = 0;
    if (0 < iVar10) {
      local_918 = 0;
      do {
        pFVar6 = local_8a8;
        pUVar3 = local_910;
        lVar15 = local_918;
        uVar11 = 0;
        uVar12 = 0;
        if ((int)local_924 < iVar10) {
          uVar12 = ~local_924 >> 0x1f;
        }
        if (uVar12 == 0) {
          local_948 = (FScriptContainerElement *)(longlong)(int)local_924;
          local_940 = (FScriptContainerElement *)(longlong)iVar10;
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar5 = (code *)swi(3);
            pFVar8 = (FString *)(*pcVar5)();
            return pFVar8;
          }
        }
        pFVar16 = (pFVar6->ActiveFrames).AllocatorInstance.Data + lVar15;
        lVar15 = *(longlong *)pFVar16;
        local_8b0 = lVar15;
        if (0 < iVar17) {
          if (local_868.End < local_868.CurPos + 2) {
            TStringBuilderBase<wchar_t>::Extend(&local_868,2);
          }
          pvVar9 = FGenericPlatformString::Memcpy(local_868.CurPos,L" >",4);
          local_868.CurPos = (wchar_t *)((longlong)pvVar9 + 4);
        }
        if (*(UStateTree **)pFVar16 == (UStateTree *)0x0) {
          bVar7 = pUVar3 == (UStateTree *)0x0;
        }
        else {
          bVar7 = *(UStateTree **)pFVar16 == pUVar3;
        }
        if (!bVar7) {
          if (local_868.End < local_868.CurPos + 2) {
            TStringBuilderBase<wchar_t>::Extend(&local_868,2);
          }
          pvVar9 = FGenericPlatformString::Memcpy(local_868.CurPos,L" [",4);
          local_868.CurPos = (wchar_t *)((longlong)pvVar9 + 4);
          if (*(longlong *)pFVar16 == 0) {
            local_920 = 0;
            local_8b8 = (FName)&local_920;
          }
          else {
            local_8b8 = UE::CoreUObject::Private::GetFName((UObject *)local_898);
          }
          local_8b8 = *(FName *)local_8b8;
          ::FName::AppendString(&local_8b8,&local_868);
          if (local_868.End < local_868.CurPos + 1) {
            TStringBuilderBase<wchar_t>::Extend(&local_868,1);
          }
          *local_868.CurPos = L']';
          local_868.CurPos = local_868.CurPos + 1;
          local_910 = *(UStateTree **)pFVar16;
        }
        if (pFVar16[0x3c] != (FScriptContainerElement)0x0) {
          local_928 = iVar17 * 3;
          pFVar19 = pFVar16 + 0x2c;
          uVar18 = uVar11;
          do {
            if ((((longlong)uVar18 < 0) || ((int)(uint)(byte)pFVar16[0x3c] <= (int)uVar11)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index >= 0 && Index < (int32)NumStates",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Public\\StateTreeExecutionTypes.h"
                                   ,0x219,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              pFVar8 = (FString *)(*pcVar5)();
              return pFVar8;
            }
            uVar2 = *(ushort *)pFVar19;
            if (uVar2 != 0xffff) {
              if (*(int *)(lVar15 + 0x58) <= (int)(uint)uVar2) {
                local_948 = (FScriptContainerElement *)(longlong)(int)(uint)uVar2;
                local_940 = (FScriptContainerElement *)(longlong)*(int *)(lVar15 + 0x58);
                bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar7) {
                  pcVar5 = (code *)swi(3);
                  pFVar8 = (FString *)(*pcVar5)();
                  return pFVar8;
                }
              }
              lVar15 = *(longlong *)(lVar15 + 0x50);
              if (0 < iVar17) {
                if (local_868.End < local_868.CurPos + 1) {
                  TStringBuilderBase<wchar_t>::Extend(&local_868,1);
                }
                pvVar9 = FGenericPlatformString::Memcpy(local_868.CurPos,L"\n",2);
                local_868.CurPos = (wchar_t *)((longlong)pvVar9 + 2);
              }
              TStringBuilderBase<wchar_t>::AppendfImpl(&local_868,L"%*s-");
              ::FName::AppendString((FName *)((ulonglong)uVar2 * 0x78 + lVar15 + 0x10),&local_868);
              iVar17 = iVar17 + 1;
              local_928 = local_928 + 3;
              lVar15 = local_8b0;
            }
            uVar12 = (int)uVar11 + 1;
            uVar11 = (ulonglong)uVar12;
            uVar18 = uVar18 + 1;
            pFVar19 = pFVar19 + 2;
          } while ((int)uVar12 < (int)(uint)(byte)pFVar16[0x3c]);
        }
        local_924 = local_924 + 1;
        local_918 = local_918 + 0x70;
        iVar10 = (local_8a8->ActiveFrames).ArrayNum;
        __return_storage_ptr__ = local_8a0;
      } while ((int)local_924 < iVar10);
    }
    EVar1 = local_8a8->TreeRunStatus;
    if (EVar1 != Running) {
      if (EVar1 == Succeeded) {
        if (local_868.End < local_868.CurPos + 0xb) {
          TStringBuilderBase<wchar_t>::Extend(&local_868,0xb);
        }
        pvVar9 = FGenericPlatformString::Memcpy(local_868.CurPos,L" SUCCEEDED\n",0x16);
        local_868.CurPos = (wchar_t *)((longlong)pvVar9 + 0x16);
      }
      else if (EVar1 == Failed) {
        if (local_868.End < local_868.CurPos + 8) {
          TStringBuilderBase<wchar_t>::Extend(&local_868,8);
        }
        pvVar9 = FGenericPlatformString::Memcpy(local_868.CurPos,L" FAILED\n",0x10);
        local_868.CurPos = (wchar_t *)((longlong)pvVar9 + 0x10);
      }
      else {
        if (local_868.End < local_868.CurPos + 3) {
          TStringBuilderBase<wchar_t>::Extend(&local_868,3);
        }
        pvVar9 = FGenericPlatformString::Memcpy(local_868.CurPos,L"--\n",6);
        local_868.CurPos = (wchar_t *)((longlong)pvVar9 + 6);
      }
    }
    if (local_868.End < local_868.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_868,1);
    }
    *local_868.CurPos = L'\0';
    ::FString::FString(__return_storage_ptr__,local_868.Base);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_868);
  }
  else {
    if (FVisualLogger::bIsRecording != 0) {
      pUVar3 = this->RootStateTree;
      if ((pUVar3 == (UStateTree *)0x0) || (*(longlong *)&pUVar3->field_0x10 == 0)) {
        ::FString::FString(&local_8f8,L"None");
      }
      else {
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)pUVar3,&local_8f8,(UObject *)0x0,None)
        ;
      }
      pUVar4 = this->Owner;
      FVar14.Data = (FScriptContainerElement *)L"";
      if (local_8f8.Data.ArrayNum != 0) {
        FVar14.Data = local_8f8.Data.AllocatorInstance.Data;
      }
      if (pUVar4 == (UObject *)0x0) {
        ::FString::FString(&local_908,L"None");
      }
      else {
        local_8c8.ComparisonIndex.Value = *(uint *)&pUVar4->field_0x18;
        local_8c8.Number = *(uint *)&pUVar4->field_0x1c;
        ::FName::ToString(&local_8c8,&local_908);
      }
      FVar13.Data = (FScriptContainerElement *)L"";
      if (local_908.Data.ArrayNum != 0) {
        FVar13.Data = local_908.Data.AllocatorInstance.Data;
      }
      pFVar8 = GetInstanceDescriptionInternal(this,&local_890);
      if ((pFVar8->Data).ArrayNum == 0) {
        local_948 = (FScriptContainerElement *)0x15060d16c;
      }
      else {
        local_948 = (pFVar8->Data).AllocatorInstance.Data;
      }
      if (this->Owner == (UObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      local_940 = (FScriptContainerElement *)0x152b38618;
      local_938 = FVar13.Data;
      local_930 = FVar14.Data;
      FVisualLogger::CategorizedLogfImpl
                (this->Owner,(FName *)&LogStateTree.field_0x4,Warning,
                 L"%s: %hs: StateTree context is not initialized properly (\'%s\' using StateTree \'%s\')"
                );
      if (local_890.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_890.Data.AllocatorInstance.Data);
      }
      if (local_908.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_908.Data.AllocatorInstance.Data);
      }
      if (local_8f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_8f8.Data.AllocatorInstance.Data);
      }
    }
    if (2 < (byte)LogStateTree._0_1_) {
      pUVar3 = this->RootStateTree;
      if ((pUVar3 == (UStateTree *)0x0) || (*(longlong *)&pUVar3->field_0x10 == 0)) {
        ::FString::FString(&local_8d8,L"None");
      }
      else {
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)pUVar3,&local_8d8,(UObject *)0x0,None)
        ;
      }
      pUVar4 = this->Owner;
      FVar14.Data = (FScriptContainerElement *)L"";
      if (local_8d8.Data.ArrayNum != 0) {
        FVar14.Data = local_8d8.Data.AllocatorInstance.Data;
      }
      if (pUVar4 == (UObject *)0x0) {
        ::FString::FString(&local_8e8,L"None");
      }
      else {
        local_8c0.ComparisonIndex.Value = *(uint *)&pUVar4->field_0x18;
        local_8c0.Number = *(uint *)&pUVar4->field_0x1c;
        ::FName::ToString(&local_8c0,&local_8e8);
      }
      FVar13.Data = (FScriptContainerElement *)L"";
      if (local_8e8.Data.ArrayNum != 0) {
        FVar13.Data = local_8e8.Data.AllocatorInstance.Data;
      }
      GetInstanceDescriptionInternal(this,&local_880);
      local_948 = FVar13.Data;
      local_940 = FVar14.Data;
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStateTree);
      if (local_880.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_880.Data.AllocatorInstance.Data);
      }
      if (local_8e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_8e8.Data.AllocatorInstance.Data);
      }
      if (local_8d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_8d8.Data.AllocatorInstance.Data);
      }
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
  }
  return __return_storage_ptr__;
}

// GetActiveStateNames @ 14d4fb6e0

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
FStateTreeReadOnlyExecutionContext::GetActiveStateNames
          (FStateTreeReadOnlyExecutionContext *this,
          TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  ushort uVar1;
  UStateTree *pUVar2;
  UObject *pUVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar7;
  FScriptContainerElement FVar8;
  longlong lVar9;
  ulonglong uVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  undefined1 local_res8 [8];
  TArray<FName,TSizedDefaultAllocator<32>_> *local_res10;
  uint local_res18;
  FName local_res20;
  ForAnyElementType local_d8;
  int local_d0;
  int iStack_cc;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FName local_88;
  FScriptContainerElement *local_80;
  FStateTreeInstanceStorage *local_78;
  FString local_70;
  FString local_60 [2];
  
  local_res10 = __return_storage_ptr__;
  bVar6 = UStateTree::IsReadyToRun(this->RootStateTree);
  if (bVar6) {
    local_78 = this->Storage;
    local_d8.Data = (FScriptContainerElement *)0x0;
    local_d0 = 0;
    iStack_cc = 0;
    local_res18 = (local_78->ExecutionState).ActiveFrames.ArrayNum;
    uVar10 = (ulonglong)(int)local_res18;
    pFVar15 = (local_78->ExecutionState).ActiveFrames.AllocatorInstance.Data;
    pFVar11 = pFVar15 + uVar10 * 0x70;
    local_80 = pFVar11;
    while( true ) {
      if ((local_78->ExecutionState).ActiveFrames.ArrayNum != (int)uVar10) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FStateTreeExecutionFrame_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar15 == pFVar11) break;
      FVar8 = pFVar15[0x3c];
      iVar13 = 0;
      lVar4 = *(longlong *)pFVar15;
      lVar14 = 0;
      if (FVar8 != (FScriptContainerElement)0x0) {
        pFVar12 = pFVar15 + 0x2c;
        do {
          if (((lVar14 < 0) || ((int)(uint)(byte)FVar8 <= iVar13)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index >= 0 && Index < (int32)NumStates",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Public\\StateTreeExecutionTypes.h"
                                 ,0x219,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            pTVar7 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
            return pTVar7;
          }
          uVar1 = *(ushort *)pFVar12;
          if (uVar1 != 0xffff) {
            if ((*(int *)(lVar4 + 0x58) <= (int)(uint)uVar1) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              pTVar7 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
              return pTVar7;
            }
            pFVar11 = (FScriptContainerElement *)
                      (*(longlong *)(lVar4 + 0x50) + (ulonglong)uVar1 * 0x78 + 0x10);
            if (((local_d8.Data <= pFVar11) && (pFVar11 < local_d8.Data + (longlong)iStack_cc * 8))
               && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar6)) {
              pcVar5 = (code *)swi(3);
              pTVar7 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
              return pTVar7;
            }
            if (local_d0 == iStack_cc) {
              local_d0 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x408,&local_d8,&iStack_cc);
            }
            lVar9 = (longlong)local_d0;
            local_d0 = local_d0 + 1;
            *(undefined8 *)(local_d8.Data + lVar9 * 8) = *(undefined8 *)pFVar11;
          }
          FVar8 = pFVar15[0x3c];
          iVar13 = iVar13 + 1;
          lVar14 = lVar14 + 1;
          pFVar12 = pFVar12 + 2;
          pFVar11 = local_80;
        } while (iVar13 < (int)(uint)(byte)FVar8);
      }
      pFVar15 = pFVar15 + 0x70;
      uVar10 = (ulonglong)local_res18;
    }
    (local_res10->AllocatorInstance).Data = local_d8.Data;
    local_res10->ArrayNum = local_d0;
    local_res10->ArrayMax = iStack_cc;
    __return_storage_ptr__ = local_res10;
  }
  else {
    if (FVisualLogger::bIsRecording != 0) {
      pUVar2 = this->RootStateTree;
      if ((pUVar2 == (UStateTree *)0x0) || (*(longlong *)&pUVar2->field_0x10 == 0)) {
        ::FString::FString(&local_b8,L"None");
      }
      else {
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)pUVar2,&local_b8,(UObject *)0x0,None);
      }
      pUVar3 = this->Owner;
      if (pUVar3 == (UObject *)0x0) {
        ::FString::FString(&local_c8,L"None");
      }
      else {
        local_res20.ComparisonIndex.Value = *(uint *)&pUVar3->field_0x18;
        local_res20.Number = *(uint *)&pUVar3->field_0x1c;
        ::FName::ToString(&local_res20,&local_c8);
      }
      GetInstanceDescriptionInternal(this,&local_70);
      if (this->Owner == (UObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      FVisualLogger::CategorizedLogfImpl
                (this->Owner,(FName *)&LogStateTree.field_0x4,Warning,
                 L"%s: %hs: StateTree context is not initialized properly (\'%s\' using StateTree \'%s\')"
                );
      if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Data.AllocatorInstance.Data);
      }
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
    }
    if (2 < (byte)LogStateTree._0_1_) {
      pUVar2 = this->RootStateTree;
      if ((pUVar2 == (UStateTree *)0x0) || (*(longlong *)&pUVar2->field_0x10 == 0)) {
        ::FString::FString(&local_98,L"None");
      }
      else {
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)pUVar2,&local_98,(UObject *)0x0,None);
      }
      pUVar3 = this->Owner;
      if (pUVar3 == (UObject *)0x0) {
        ::FString::FString(&local_a8,L"None");
      }
      else {
        local_88.ComparisonIndex.Value = *(uint *)&pUVar3->field_0x18;
        local_88.Number = *(uint *)&pUVar3->field_0x1c;
        ::FName::ToString(&local_88,&local_a8);
      }
      GetInstanceDescriptionInternal(this,local_60);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStateTree);
      if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
      }
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
    }
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
  }
  return __return_storage_ptr__;
}

// GetDebugInfoString @ 14d4fd020

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FStateTreeReadOnlyExecutionContext::GetDebugInfoString
          (FStateTreeReadOnlyExecutionContext *this,FString *__return_storage_ptr__)

{
  EStateTreeRunStatus EVar1;
  ushort uVar2;
  FStateTreeInstanceStorage *pFVar3;
  UScriptStruct *pUVar4;
  code *pcVar5;
  bool bVar6;
  void *pvVar7;
  UPackage *pUVar8;
  UEnum *this_00;
  FString *pFVar9;
  longlong lVar10;
  FStateTreeEvaluatorBase *pFVar11;
  UScriptStruct *pUVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulong64 uVar16;
  FScriptContainerElement *pFVar17;
  wchar_t *pwVar18;
  longlong lVar19;
  longlong *plVar20;
  uint uVar21;
  int iVar22;
  longlong lVar23;
  FStateTreeExecutionState *pFVar24;
  int iVar25;
  FScriptContainerElement *pFVar26;
  undefined1 auStack_1188 [32];
  FScriptContainerElement *local_1168;
  FScriptContainerElement *local_1160;
  undefined1 local_1158 [8];
  longlong local_1150;
  int local_1148;
  longlong local_1140;
  FScriptContainerElement *local_1138;
  uint local_1130;
  FStateTreeReadOnlyExecutionContext *local_1128;
  FScriptContainerElement *local_1120;
  FStateTreeExecutionState *local_1118;
  FScriptContainerElement *local_1110;
  FString *local_1108;
  FText local_1100;
  FString local_10f0;
  FString local_10e0;
  FString local_10d0;
  FString local_10c0;
  void *local_10b0 [2];
  FString local_10a0;
  FString local_1090;
  void *local_1080 [3];
  TStringBuilderBase<wchar_t> local_1068;
  wchar_t local_1048 [2048];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_1188;
  local_1068.Base = local_1048;
  local_1068.CurPos = local_1048;
  local_1068.End = (wchar_t *)local_48;
  local_1068.bIsDynamic = false;
  local_1068.bIsExternal = false;
  local_1128 = this;
  local_1108 = __return_storage_ptr__;
  pvVar7 = FGenericPlatformString::Memcpy(local_1048,L"StateTree (asset: \'",0x26);
  local_1068.CurPos = (wchar_t *)((longlong)pvVar7 + 0x26);
  UObjectBaseUtility::GetFullName
            ((UObjectBaseUtility *)this->RootStateTree,&local_1068,(UObject *)0x0,None);
  if (local_1068.End < local_1068.CurPos + 2) {
    TStringBuilderBase<wchar_t>::Extend(&local_1068,2);
  }
  pvVar7 = FGenericPlatformString::Memcpy(local_1068.CurPos,L"\')",4);
  local_1068.CurPos = (wchar_t *)((longlong)pvVar7 + 4);
  bVar6 = UStateTree::IsReadyToRun(this->RootStateTree);
  if (bVar6) {
    pFVar3 = this->Storage;
    pFVar24 = &pFVar3->ExecutionState;
    local_1118 = pFVar24;
    if (local_1068.End < local_1068.CurPos + 8) {
      TStringBuilderBase<wchar_t>::Extend(&local_1068,8);
    }
    pvVar7 = FGenericPlatformString::Memcpy(local_1068.CurPos,L"Status: ",0x10);
    local_1068.CurPos = (wchar_t *)((longlong)pvVar7 + 0x10);
    EVar1 = (pFVar3->ExecutionState).TreeRunStatus;
    this_00 = Z_Registration_Info_UEnum_EStateTreeRunStatus.OuterSingleton;
    if (Z_Registration_Info_UEnum_EStateTreeRunStatus.OuterSingleton == (UEnum *)0x0) {
      pUVar8 = Z_Construct_UPackage__Script_StateTreeModule();
      this_00 = GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeRunStatus,
                              (UObject *)pUVar8,L"EStateTreeRunStatus");
      Z_Registration_Info_UEnum_EStateTreeRunStatus.OuterSingleton = this_00;
      if ((this_00 == (UEnum *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("EnumClass != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                             ,0xd13,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        pFVar9 = (FString *)(*pcVar5)();
        return pFVar9;
      }
    }
    UEnum::GetDisplayNameTextByValue(this_00,&local_1100,(ulonglong)EVar1);
    pFVar9 = FText::ToString(&local_1100);
    iVar25 = (pFVar9->Data).ArrayNum;
    pFVar26 = (pFVar9->Data).AllocatorInstance.Data;
    iVar22 = iVar25 + -1;
    if (iVar25 == 0) {
      iVar22 = 0;
    }
    uVar16 = (ulong64)iVar22;
    if (local_1068.End < local_1068.CurPos + uVar16) {
      TStringBuilderBase<wchar_t>::Extend(&local_1068,uVar16);
    }
    if (iVar22 != 0) {
      pvVar7 = FGenericPlatformString::Memcpy(local_1068.CurPos,pFVar26,uVar16 * 2);
      local_1068.CurPos = (wchar_t *)((longlong)pvVar7 + uVar16 * 2);
    }
    if (local_1100.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1100.TextData.Reference + 0x10))(local_1100.TextData.Reference);
    }
    if (local_1068.End < local_1068.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_1068,1);
    }
    pvVar7 = FGenericPlatformString::Memcpy(local_1068.CurPos,L"\n",2);
    local_1068.CurPos = (wchar_t *)((longlong)pvVar7 + 2);
    if (local_1068.End < (wchar_t *)((longlong)pvVar7 + 0x20)) {
      TStringBuilderBase<wchar_t>::Extend(&local_1068,0xf);
    }
    pvVar7 = FGenericPlatformString::Memcpy(local_1068.CurPos,L"Current State:\n",0x1e);
    local_1068.CurPos = (wchar_t *)((longlong)pvVar7 + 0x1e);
    local_1130 = (pFVar3->ExecutionState).ActiveFrames.ArrayNum;
    uVar14 = (ulonglong)(int)local_1130;
    pFVar26 = (pFVar24->ActiveFrames).AllocatorInstance.Data;
    local_1110 = pFVar26 + uVar14 * 0x70;
    while( true ) {
      pFVar17 = local_1110;
      local_1138 = pFVar26;
      if ((pFVar24->ActiveFrames).ArrayNum != (int)uVar14) {
        local_1158[0] = 0;
        `TCheckedPointerIterator<FStateTreeExecutionFrame_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_1158);
      }
      __return_storage_ptr__ = local_1108;
      if (pFVar26 == pFVar17) break;
      lVar23 = *(longlong *)pFVar26;
      lVar19 = lVar23;
      local_1140 = lVar23;
      if (((byte)pFVar26[0x6a] & 1) != 0) {
        local_1160 = (FScriptContainerElement *)0x152b38730;
        local_1168 = (FScriptContainerElement *)0x152b38748;
        TStringBuilderBase<wchar_t>::AppendfImpl
                  (&local_1068,L"\nEvaluators\n  [ %-30s | %8s | %8s | %15s ]\n");
        uVar2 = *(ushort *)(lVar23 + 0x268);
        uVar21 = (uint)uVar2;
        if ((uint)uVar2 < (uint)*(ushort *)(lVar23 + 0x26a) + (uint)uVar2) {
          iVar22 = (uint)uVar2 << 4;
          do {
            if ((((*(int *)(lVar23 + 0x7c) < 1) || ((int)uVar21 < 0)) ||
                (*(int *)(lVar23 + 0x7c) <= (int)uVar21)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid() && IsValidIndex(Index)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStructContainer.h"
                                   ,0x7c,L""), bVar6)) {
              pcVar5 = (code *)swi(3);
              pFVar9 = (FString *)(*pcVar5)();
              return pFVar9;
            }
            if (((*(int *)(lVar23 + 0x7c) < 1) || (*(int *)(lVar23 + 0x7c) <= (int)uVar21)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("NumItems > 0 && Index < NumItems",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStructContainer.h"
                                   ,0x100,L""), bVar6)) {
              pcVar5 = (code *)swi(3);
              pFVar9 = (FString *)(*pcVar5)();
              return pFVar9;
            }
            lVar19 = *(longlong *)(lVar23 + 0x70);
            lVar10 = (longlong)(*(int *)(lVar23 + 0x78) - iVar22);
            pFVar11 = UE::StructUtils::GetStructRef<FStateTreeEvaluatorBase_const_>
                                (*(UScriptStruct **)(lVar10 + -0x10 + lVar19),
                                 (void *)(*(int *)(lVar10 + -8 + lVar19) + lVar19));
            pFVar9 = FStateTreeDataHandle::Describe
                               ((FStateTreeDataHandle *)&pFVar11->field_0x18,&local_10e0);
            if ((pFVar9->Data).ArrayNum == 0) {
              pwVar18 = L"";
            }
            else {
              pwVar18 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
            }
            uVar2 = *(ushort *)&pFVar11->field_0x12;
            ::FName::ToString((FName *)&pFVar11->field_0x8,&local_10f0);
            local_1168 = (FScriptContainerElement *)CONCAT44(local_1168._4_4_,(uint)uVar2);
            local_1160 = (FScriptContainerElement *)pwVar18;
            TStringBuilderBase<wchar_t>::AppendfImpl(&local_1068,L"| %-30s | %8d | %8d | %15s |\n");
            if (local_10f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_10f0.Data.AllocatorInstance.Data);
            }
            if (local_10e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_10e0.Data.AllocatorInstance.Data);
            }
            uVar21 = uVar21 + 1;
            iVar22 = iVar22 + 0x10;
            lVar19 = local_1140;
            pFVar26 = local_1138;
          } while ((int)uVar21 <
                   (int)((uint)*(ushort *)(local_1140 + 0x26a) +
                        (uint)*(ushort *)(local_1140 + 0x268)));
        }
        if (local_1068.End < local_1068.CurPos + 0xe) {
          TStringBuilderBase<wchar_t>::Extend(&local_1068,0xe);
        }
        pvVar7 = FGenericPlatformString::Memcpy(local_1068.CurPos,L"\nGlobal Tasks\n",0x1c);
        local_1068.CurPos = (wchar_t *)((longlong)pvVar7 + 0x1c);
        uVar2 = *(ushort *)(lVar19 + 0x26c);
        uVar21 = (uint)uVar2;
        if ((uint)uVar2 < (uint)*(ushort *)(lVar19 + 0x26e) + (uint)uVar2) {
          iVar22 = (uint)uVar2 << 4;
          do {
            if ((((*(int *)(lVar23 + 0x7c) < 1) || ((int)uVar21 < 0)) ||
                (*(int *)(lVar23 + 0x7c) <= (int)uVar21)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid() && IsValidIndex(Index)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStructContainer.h"
                                   ,0x7c,L""), bVar6)) {
              pcVar5 = (code *)swi(3);
              pFVar9 = (FString *)(*pcVar5)();
              return pFVar9;
            }
            if (((*(int *)(lVar23 + 0x7c) < 1) || (*(int *)(lVar23 + 0x7c) <= (int)uVar21)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("NumItems > 0 && Index < NumItems",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStructContainer.h"
                                   ,0x100,L""), bVar6)) {
              pcVar5 = (code *)swi(3);
              pFVar9 = (FString *)(*pcVar5)();
              return pFVar9;
            }
            lVar19 = *(longlong *)(lVar23 + 0x70);
            lVar10 = (longlong)(*(int *)(lVar23 + 0x78) - iVar22);
            pUVar4 = *(UScriptStruct **)(lVar10 + -0x10 + lVar19);
            plVar20 = (longlong *)(*(int *)(lVar10 + -8 + lVar19) + lVar19);
            if ((plVar20 == (longlong *)0x0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("StructMemory != nullptr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                                   ,0x22,L""), bVar6)) {
              pcVar5 = (code *)swi(3);
              pFVar9 = (FString *)(*pcVar5)();
              return pFVar9;
            }
            if ((pUVar4 == (UScriptStruct *)0x0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ScriptStruct != nullptr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                                   ,0x23,L""), bVar6)) {
              pcVar5 = (code *)swi(3);
              pFVar9 = (FString *)(*pcVar5)();
              return pFVar9;
            }
            pUVar12 = FStateTreeTaskBase::StaticStruct();
            if (pUVar4 != pUVar12) {
              pUVar12 = FStateTreeTaskBase::StaticStruct();
              if (pUVar12 != (UScriptStruct *)0x0) {
                iVar25 = (int)pUVar12->_padding_;
                if (((int)pUVar4->_padding_ < iVar25) ||
                   ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar25 * 8) !=
                    &pUVar12->_padding_)) {
                  bVar6 = false;
                }
                else {
                  bVar6 = true;
                }
                if (bVar6) goto LAB_14d4fd6ae;
              }
              pUVar12 = FStateTreeTaskBase::StaticStruct();
              pFVar9 = UObjectBaseUtility::GetPathName
                                 ((UObjectBaseUtility *)pUVar12,&local_10c0,(UObject *)0x0);
              if ((pFVar9->Data).ArrayNum == 0) {
                pwVar18 = L"";
              }
              else {
                pwVar18 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
              }
              pFVar9 = UObjectBaseUtility::GetPathName
                                 ((UObjectBaseUtility *)pUVar4,&local_10d0,(UObject *)0x0);
              if ((pFVar9->Data).ArrayNum == 0) {
                local_1168 = (FScriptContainerElement *)0x15060d16c;
              }
              else {
                local_1168 = (pFVar9->Data).AllocatorInstance.Data;
              }
              local_1160 = (FScriptContainerElement *)pwVar18;
              bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("ScriptStruct == TBaseStructure<T>::Get() || ScriptStruct->IsChildOf(TBaseStructure<T>::Get())"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                                 ,0x27,L"Incompatible struct types: Cannot cast \'%s\' to \'%s\'");
              if (local_10d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_10d0.Data.AllocatorInstance.Data);
              }
              if (local_10c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_10c0.Data.AllocatorInstance.Data);
              }
              if (bVar6) {
                pcVar5 = (code *)swi(3);
                pFVar9 = (FString *)(*pcVar5)();
                return pFVar9;
              }
            }
LAB_14d4fd6ae:
            if ((char)plVar20[4] < '\0') {
              puVar13 = (undefined8 *)(**(code **)(*plVar20 + 0x50))(plVar20,local_10b0);
              pvVar7 = (void *)*puVar13;
              iVar25 = *(int *)(puVar13 + 1) + -1;
              if (*(int *)(puVar13 + 1) == 0) {
                iVar25 = 0;
              }
              uVar16 = (ulong64)iVar25;
              if (local_1068.End < local_1068.CurPos + uVar16) {
                TStringBuilderBase<wchar_t>::Extend(&local_1068,uVar16);
              }
              if (iVar25 != 0) {
                pvVar7 = FGenericPlatformString::Memcpy(local_1068.CurPos,pvVar7,uVar16 * 2);
                local_1068.CurPos = (wchar_t *)((longlong)pvVar7 + uVar16 * 2);
              }
              if (local_10b0[0] != (void *)0x0) {
                FMemory::Free(local_10b0[0]);
              }
            }
            uVar21 = uVar21 + 1;
            iVar22 = iVar22 + 0x10;
            lVar19 = local_1140;
            pFVar26 = local_1138;
          } while ((int)uVar21 <
                   (int)((uint)*(ushort *)(local_1140 + 0x26e) +
                        (uint)*(ushort *)(local_1140 + 0x26c)));
        }
      }
      local_1148 = 0;
      local_1150 = 0;
      if (pFVar26[0x3c] != (FScriptContainerElement)0x0) {
        pFVar17 = pFVar26 + 0x2c;
        do {
          iVar22 = local_1148;
          local_1120 = pFVar17;
          if (((local_1150 < 0) || ((int)(uint)(byte)pFVar26[0x3c] <= local_1148)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index >= 0 && Index < (int32)NumStates",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Public\\StateTreeExecutionTypes.h"
                                 ,0x219,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            pFVar9 = (FString *)(*pcVar5)();
            return pFVar9;
          }
          uVar2 = *(ushort *)pFVar17;
          if (uVar2 != 0xffff) {
            if (*(int *)(lVar19 + 0x58) <= (int)(uint)uVar2) {
              local_1168 = (FScriptContainerElement *)(longlong)(int)(uint)uVar2;
              local_1160 = (FScriptContainerElement *)(longlong)*(int *)(lVar19 + 0x58);
              bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar6) {
                pcVar5 = (code *)swi(3);
                pFVar9 = (FString *)(*pcVar5)();
                return pFVar9;
              }
            }
            lVar23 = (ulonglong)uVar2 * 0x78 + *(longlong *)(lVar19 + 0x50);
            if (local_1068.End < local_1068.CurPos + 1) {
              TStringBuilderBase<wchar_t>::Extend(&local_1068,1);
            }
            *local_1068.CurPos = L'[';
            local_1068.CurPos = local_1068.CurPos + 1;
            ::FName::AppendString((FName *)(lVar23 + 0x10),&local_1068);
            if (local_1068.End < local_1068.CurPos + 2) {
              TStringBuilderBase<wchar_t>::Extend(&local_1068,2);
            }
            pvVar7 = FGenericPlatformString::Memcpy(local_1068.CurPos,L"]\n",4);
            local_1068.CurPos = (wchar_t *)((longlong)pvVar7 + 4);
            if (*(char *)(lVar23 + 0x6e) != '\0') {
              if (local_1068.End < (wchar_t *)((longlong)pvVar7 + 0x14)) {
                TStringBuilderBase<wchar_t>::Extend(&local_1068,8);
              }
              pvVar7 = FGenericPlatformString::Memcpy(local_1068.CurPos,L"\nTasks:\n",0x10);
              lVar19 = local_1140;
              local_1068.CurPos = (wchar_t *)((longlong)pvVar7 + 0x10);
              uVar2 = *(ushort *)(lVar23 + 0x4e);
              uVar21 = (uint)uVar2;
              if ((uint)uVar2 < (uint)*(byte *)(lVar23 + 0x6e) + (uint)uVar2) {
                iVar25 = (uint)uVar2 << 4;
                do {
                  if ((((*(int *)(lVar19 + 0x7c) < 1) || ((int)uVar21 < 0)) ||
                      (*(int *)(lVar19 + 0x7c) <= (int)uVar21)) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("IsValid() && IsValidIndex(Index)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStructContainer.h"
                                         ,0x7c,L""), bVar6)) {
                    pcVar5 = (code *)swi(3);
                    pFVar9 = (FString *)(*pcVar5)();
                    return pFVar9;
                  }
                  if (((*(int *)(lVar19 + 0x7c) < 1) || (*(int *)(lVar19 + 0x7c) <= (int)uVar21)) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("NumItems > 0 && Index < NumItems",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStructContainer.h"
                                         ,0x100,L""), bVar6)) {
                    pcVar5 = (code *)swi(3);
                    pFVar9 = (FString *)(*pcVar5)();
                    return pFVar9;
                  }
                  lVar10 = *(longlong *)(lVar19 + 0x70);
                  lVar15 = (longlong)(*(int *)(lVar19 + 0x78) - iVar25);
                  pUVar4 = *(UScriptStruct **)(lVar15 + -0x10 + lVar10);
                  plVar20 = (longlong *)(*(int *)(lVar15 + -8 + lVar10) + lVar10);
                  if ((plVar20 == (longlong *)0x0) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("StructMemory != nullptr",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                                         ,0x22,L""), bVar6)) {
                    pcVar5 = (code *)swi(3);
                    pFVar9 = (FString *)(*pcVar5)();
                    return pFVar9;
                  }
                  if ((pUVar4 == (UScriptStruct *)0x0) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("ScriptStruct != nullptr",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                                         ,0x23,L""), bVar6)) {
                    pcVar5 = (code *)swi(3);
                    pFVar9 = (FString *)(*pcVar5)();
                    return pFVar9;
                  }
                  pUVar12 = FStateTreeTaskBase::StaticStruct();
                  if (pUVar4 != pUVar12) {
                    pUVar12 = FStateTreeTaskBase::StaticStruct();
                    if (pUVar12 != (UScriptStruct *)0x0) {
                      iVar22 = (int)pUVar12->_padding_;
                      if (((int)pUVar4->_padding_ < iVar22) ||
                         ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar22 * 8) !=
                          &pUVar12->_padding_)) {
                        bVar6 = false;
                      }
                      else {
                        bVar6 = true;
                      }
                      if (bVar6) goto LAB_14d4fda83;
                    }
                    pUVar12 = FStateTreeTaskBase::StaticStruct();
                    pFVar9 = UObjectBaseUtility::GetPathName
                                       ((UObjectBaseUtility *)pUVar12,&local_1090,(UObject *)0x0);
                    if ((pFVar9->Data).ArrayNum == 0) {
                      pwVar18 = L"";
                    }
                    else {
                      pwVar18 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
                    }
                    pFVar9 = UObjectBaseUtility::GetPathName
                                       ((UObjectBaseUtility *)pUVar4,&local_10a0,(UObject *)0x0);
                    if ((pFVar9->Data).ArrayNum == 0) {
                      local_1168 = (FScriptContainerElement *)0x15060d16c;
                    }
                    else {
                      local_1168 = (pFVar9->Data).AllocatorInstance.Data;
                    }
                    local_1160 = (FScriptContainerElement *)pwVar18;
                    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("ScriptStruct == TBaseStructure<T>::Get() || ScriptStruct->IsChildOf(TBaseStructure<T>::Get())"
                                       ,
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                                       ,0x27,
                                       L"Incompatible struct types: Cannot cast \'%s\' to \'%s\'");
                    if (local_10a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_10a0.Data.AllocatorInstance.Data);
                    }
                    if (local_1090.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_1090.Data.AllocatorInstance.Data);
                    }
                    if (bVar6) {
                      pcVar5 = (code *)swi(3);
                      pFVar9 = (FString *)(*pcVar5)();
                      return pFVar9;
                    }
                  }
LAB_14d4fda83:
                  if ((char)plVar20[4] < '\0') {
                    puVar13 = (undefined8 *)(**(code **)(*plVar20 + 0x50))(plVar20,local_1080);
                    pvVar7 = (void *)*puVar13;
                    iVar22 = *(int *)(puVar13 + 1) + -1;
                    if (*(int *)(puVar13 + 1) == 0) {
                      iVar22 = 0;
                    }
                    uVar16 = (ulong64)iVar22;
                    if (local_1068.End < local_1068.CurPos + uVar16) {
                      TStringBuilderBase<wchar_t>::Extend(&local_1068,uVar16);
                    }
                    if (iVar22 != 0) {
                      pvVar7 = FGenericPlatformString::Memcpy(local_1068.CurPos,pvVar7,uVar16 * 2);
                      local_1068.CurPos = (wchar_t *)((longlong)pvVar7 + uVar16 * 2);
                    }
                    if (local_1080[0] != (void *)0x0) {
                      FMemory::Free(local_1080[0]);
                    }
                  }
                  uVar21 = uVar21 + 1;
                  iVar25 = iVar25 + 0x10;
                  pFVar26 = local_1138;
                  iVar22 = local_1148;
                } while ((int)uVar21 <
                         (int)((uint)*(byte *)(lVar23 + 0x6e) + (uint)*(ushort *)(lVar23 + 0x4e)));
              }
            }
          }
          local_1148 = iVar22 + 1;
          pFVar17 = local_1120 + 2;
          local_1150 = local_1150 + 1;
          lVar19 = local_1140;
          local_1120 = pFVar17;
        } while (local_1148 < (int)(uint)(byte)pFVar26[0x3c]);
      }
      pFVar26 = pFVar26 + 0x70;
      uVar14 = (ulonglong)local_1130;
      pFVar24 = local_1118;
    }
  }
  else {
    if (local_1068.End < local_1068.CurPos + 0x2e) {
      TStringBuilderBase<wchar_t>::Extend(&local_1068,0x2e);
    }
    pvVar7 = FGenericPlatformString::Memcpy
                       (local_1068.CurPos,L"StateTree context is not initialized properly.",0x5c);
    local_1068.CurPos = (wchar_t *)((longlong)pvVar7 + 0x5c);
  }
  if (local_1068.End < local_1068.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_1068,1);
  }
  *local_1068.CurPos = L'\0';
  ::FString::FString(__return_storage_ptr__,local_1068.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_1068);
  return __return_storage_ptr__;
}

// GetInstanceDebugId @ 14d4fdfe0

FStateTreeInstanceDebugId __thiscall
FStateTreeReadOnlyExecutionContext::GetInstanceDebugId(FStateTreeReadOnlyExecutionContext *this)

{
  FStateTreeInstanceStorage *pFVar1;
  FStateTreeInstanceDebugId FVar2;
  ulong64 uVar3;
  FStateTreeInstanceDebugId in_RDX;
  
  pFVar1 = this->Storage;
  if (((pFVar1->ExecutionState).InstanceDebugId.Id == 0xffffffff) ||
     ((pFVar1->ExecutionState).InstanceDebugId.SerialNumber == 0xffffffff)) {
    uVar3 = FObjectTrace::AllocateInstanceId();
    FVar2.SerialNumber = (uint)uVar3;
    FVar2.Id = (uint)(uVar3 >> 0x20);
    (pFVar1->ExecutionState).InstanceDebugId = FVar2;
  }
  *(FStateTreeInstanceDebugId *)in_RDX = (pFVar1->ExecutionState).InstanceDebugId;
  return in_RDX;
}

// GetInstanceDescriptionInternal @ 14d4fe060

FString * __thiscall
FStateTreeReadOnlyExecutionContext::GetInstanceDescriptionInternal
          (FStateTreeReadOnlyExecutionContext *this,FString *__return_storage_ptr__)

{
  uchar *puVar1;
  UScriptStruct *pUVar2;
  bool bVar3;
  bool bVar4;
  FStateTreeExecutionExtension *pFVar5;
  FString *pFVar6;
  FName local_res8;
  FString local_48;
  void *local_38 [2];
  UObject *local_28;
  UStateTree *local_20;
  FStateTreeInstanceStorage *local_18;
  
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  puVar1 = (this->Storage->ExecutionState).ExecutionExtension.InstancedStruct.StructMemory;
  if ((puVar1 == (uchar *)0x0) ||
     (pUVar2 = (this->Storage->ExecutionState).ExecutionExtension.InstancedStruct.ScriptStruct.
               field0_0x0.DebugPtr, pUVar2 == (UScriptStruct *)0x0)) {
    local_res8.ComparisonIndex.Value = *(uint *)&this->Owner->field_0x18;
    local_res8.Number = *(uint *)&this->Owner->field_0x1c;
    ::FName::ToString(&local_res8,&local_48);
    pFVar6 = &local_48;
    bVar4 = false;
    bVar3 = true;
  }
  else {
    pFVar5 = UE::StructUtils::GetStructRef<FStateTreeExecutionExtension>(pUVar2,puVar1);
    local_28 = this->Owner;
    local_20 = this->RootStateTree;
    local_18 = this->Storage;
    pFVar6 = (FString *)(**(code **)((longlong)*pFVar5 + 8))(pFVar5,local_38,&local_28);
    bVar4 = true;
    bVar3 = false;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
  (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (pFVar6->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (pFVar6->Data).ArrayMax;
  (pFVar6->Data).ArrayNum = 0;
  (pFVar6->Data).ArrayMax = 0;
  if (bVar3) {
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  if ((bVar4) && (local_38[0] != (void *)0x0)) {
    FMemory::Free(local_38[0]);
  }
  return __return_storage_ptr__;
}

// GetLastTickStatus @ 14d4fe160

/* WARNING: Enum "Type": Some values do not have unique names */

EStateTreeRunStatus __thiscall
FStateTreeReadOnlyExecutionContext::GetLastTickStatus(FStateTreeReadOnlyExecutionContext *this)

{
  UStateTree *pUVar1;
  UObject *pUVar2;
  bool bVar3;
  FName local_res8;
  FString local_48;
  FString local_38;
  FString local_28;
  
  bVar3 = UStateTree::IsReadyToRun(this->RootStateTree);
  if (bVar3) {
    return (this->Storage->ExecutionState).LastTickStatus;
  }
  if (FVisualLogger::bIsRecording != 0) {
    pUVar1 = this->RootStateTree;
    if ((pUVar1 == (UStateTree *)0x0) || (*(longlong *)&pUVar1->field_0x10 == 0)) {
      ::FString::FString(&local_38,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)pUVar1,&local_38,(UObject *)0x0,None);
    }
    pUVar2 = this->Owner;
    if (pUVar2 == (UObject *)0x0) {
      ::FString::FString(&local_48,L"None");
    }
    else {
      local_res8.ComparisonIndex.Value = *(uint *)&pUVar2->field_0x18;
      local_res8.Number = *(uint *)&pUVar2->field_0x1c;
      ::FName::ToString(&local_res8,&local_48);
    }
    GetInstanceDescriptionInternal(this,&local_28);
    if (this->Owner == (UObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    FVisualLogger::CategorizedLogfImpl
              (this->Owner,(FName *)&LogStateTree.field_0x4,Warning,
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
    pUVar1 = this->RootStateTree;
    if ((pUVar1 == (UStateTree *)0x0) || (*(longlong *)&pUVar1->field_0x10 == 0)) {
      ::FString::FString(&local_48,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)pUVar1,&local_48,(UObject *)0x0,None);
    }
    pUVar2 = this->Owner;
    if (pUVar2 == (UObject *)0x0) {
      ::FString::FString(&local_38,L"None");
    }
    else {
      local_res8.ComparisonIndex.Value = *(uint *)&pUVar2->field_0x18;
      local_res8.Number = *(uint *)&pUVar2->field_0x1c;
      ::FName::ToString(&local_res8,&local_38);
    }
    GetInstanceDescriptionInternal(this,&local_28);
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
  return Failed;
}

// GetNextScheduledTick @ 14d4fe700

/* WARNING: Enum "Type": Some values do not have unique names */

FStateTreeScheduledTick __thiscall
FStateTreeReadOnlyExecutionContext::GetNextScheduledTick(FStateTreeReadOnlyExecutionContext *this)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  UStateTree *pUVar5;
  UObject *pUVar6;
  FStateTreeInstanceStorage *pFVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  FStateTreeScheduledTick FVar13;
  float *pfVar14;
  int iVar15;
  FStateTreeScheduledTick in_RDX;
  uint uVar16;
  float fVar17;
  ulonglong uVar18;
  FStateTreeReadOnlyExecutionContext *pFVar19;
  FStateTreeReadOnlyExecutionContext *pFVar20;
  FScriptContainerElement *pFVar21;
  FScriptContainerElement *pFVar22;
  int iVar23;
  longlong lVar24;
  longlong lVar25;
  undefined1 uVar26;
  FStateTreeExecutionState *pFVar27;
  ulonglong uVar28;
  uint uVar29;
  undefined8 local_res8;
  undefined1 local_res20;
  undefined8 local_158;
  undefined1 local_150;
  uint local_148;
  undefined1 local_144;
  undefined1 local_143 [3];
  int local_140;
  int local_13c;
  float local_138;
  undefined4 uStack_134;
  FScriptContainerElement *local_130;
  longlong local_128;
  FString local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  FName local_e0;
  FName local_d8;
  longlong local_d0;
  FScriptContainerElement *local_c8;
  FStateTreeExecutionState *local_c0;
  FStateTreeScheduledTick local_b8;
  FStateTreeReadOnlyExecutionContext *local_b0;
  FStateTreeReadOnlyExecutionContext *local_a8;
  FStateTreeReadOnlyExecutionContext *local_a0;
  FStateTreeReadOnlyExecutionContext *local_98;
  FString local_90;
  FString local_80 [4];
  
  bVar10 = UStateTree::IsReadyToRun(this->RootStateTree);
  if (bVar10) {
    pFVar7 = this->Storage;
    pFVar27 = &pFVar7->ExecutionState;
    local_c0 = pFVar27;
    if ((pFVar7->ExecutionState).TreeRunStatus == Running) {
      iVar15 = (pFVar7->ExecutionState).ActiveFrames.ArrayNum;
      uVar18 = 0;
      uVar28 = uVar18;
      if (iVar15 < 1) {
        bVar10 = false;
        bVar12 = false;
        local_150 = 0;
        uVar26 = 0;
        fVar17 = SUB84(local_158,0);
        pFVar19 = local_158;
        iVar23 = (((this->Storage->EventQueue).Object)->SharedEvents).ArrayNum;
      }
      else {
        do {
          uVar16 = (uint)uVar18;
          uVar29 = 0;
          if ((int)uVar16 < iVar15) {
            uVar29 = ~uVar16 >> 0x1f;
          }
          if ((uVar29 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            FVar13 = (FStateTreeScheduledTick)(*pcVar8)();
            return FVar13;
          }
          if ((*(byte *)(*(longlong *)((pFVar27->ActiveFrames).AllocatorInstance.Data + uVar28) +
                        0x276) & 0x20) == 0) {
            *(undefined4 *)in_RDX = 0;
            *(undefined1 *)((longlong)in_RDX + 4) = 2;
            return in_RDX;
          }
          iVar15 = (pFVar7->ExecutionState).ActiveFrames.ArrayNum;
          uVar18 = (ulonglong)(uVar16 + 1);
          uVar28 = uVar28 + 0x70;
        } while ((int)(uVar16 + 1) < iVar15);
        bVar10 = false;
        bVar12 = false;
        uVar26 = 0;
        local_150 = 0;
        bVar9 = false;
        local_res20 = 0;
        local_148 = 0;
        fVar17 = SUB84(local_158,0);
        iVar4 = (((this->Storage->EventQueue).Object)->SharedEvents).ArrayNum;
        local_13c = (this->Storage->BroadcastedDelegates).ArrayNum;
        local_140 = iVar4;
        pFVar19 = local_158;
        iVar23 = iVar4;
        if (0 < iVar15) {
          local_128 = 0;
          do {
            lVar24 = local_128;
            uVar29 = 0;
            if ((int)local_148 < iVar15) {
              uVar29 = ~local_148 >> 0x1f;
            }
            if ((uVar29 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               uVar26 = local_res20, bVar12 = bVar9, bVar11)) {
              pcVar8 = (code *)swi(3);
              FVar13 = (FStateTreeScheduledTick)(*pcVar8)();
              return FVar13;
            }
            uVar28 = 0;
            local_c8 = (pFVar27->ActiveFrames).AllocatorInstance.Data;
            local_d0 = *(longlong *)(local_c8 + lVar24);
            bVar1 = *(byte *)(*(longlong *)(local_c8 + lVar24) + 0x276);
            if (((bVar1 & 8) != 0) || ((iVar4 != 0 && ((bVar1 & 0x10) != 0)))) {
              bVar12 = true;
              bVar9 = true;
            }
            if (local_c8[lVar24 + 0x3c] != (FScriptContainerElement)0x0) {
              pFVar21 = local_c8 + lVar24 + 0x2c;
              uVar18 = uVar28;
              do {
                local_130 = pFVar21;
                if ((((longlong)uVar28 < 0) ||
                    ((int)(uint)(byte)local_c8[lVar24 + 0x3c] <= (int)uVar18)) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Index >= 0 && Index < (int32)NumStates",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Public\\StateTreeExecutionTypes.h"
                                        ,0x219,L""), bVar12)) {
                  pcVar8 = (code *)swi(3);
                  FVar13 = (FStateTreeScheduledTick)(*pcVar8)();
                  return FVar13;
                }
                lVar24 = local_d0;
                uVar3 = *(ushort *)pFVar21;
                if ((*(int *)(local_d0 + 0x58) <= (int)(uint)uVar3) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar12)) {
                  pcVar8 = (code *)swi(3);
                  FVar13 = (FStateTreeScheduledTick)(*pcVar8)();
                  return FVar13;
                }
                lVar24 = *(longlong *)(lVar24 + 0x50);
                lVar25 = (ulonglong)uVar3 * 0x78;
                if (((*(byte *)(lVar25 + 0x75 + lVar24) & 0x20) == 0) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("State.bEnabled",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\StateTreeExecutionContext.cpp"
                                        ,0x1b9,L"Only enabled states are in ActiveStates."), bVar12)
                   ) {
                  pcVar8 = (code *)swi(3);
                  FVar13 = (FStateTreeScheduledTick)(*pcVar8)();
                  return FVar13;
                }
                bVar1 = *(byte *)(lVar25 + 0x75 + lVar24);
                if ((char)bVar1 < '\0') {
                  if ((!bVar10) ||
                     (pfVar14 = (float *)(lVar25 + 0x60 + lVar24),
                     *pfVar14 <= fVar17 && fVar17 != *pfVar14)) {
                    fVar17 = *(float *)(lVar25 + 0x60 + lVar24);
                    bVar10 = true;
                    local_138 = fVar17;
                    uStack_134 = CONCAT31(uStack_134._1_3_,3);
                    pFVar19 = (FStateTreeReadOnlyExecutionContext *)CONCAT44(uStack_134,fVar17);
                    local_158 = pFVar19;
                    local_150 = 1;
                  }
                }
                else if (!bVar10) {
                  bVar2 = *(byte *)(lVar25 + 0x74 + lVar24);
                  if (((bVar2 & 0x10) == 0) && ((iVar4 == 0 || ((bVar2 & 0x20) == 0)))) {
                    if ((((bVar2 & 0x40) != 0) || ((iVar4 != 0 && ((char)bVar2 < '\0')))) ||
                       ((local_13c != 0 && ((bVar1 & 1) != 0)))) {
                      bVar9 = true;
                      local_res20 = 5;
                    }
                  }
                  else {
                    bVar9 = true;
                    local_res20 = 4;
                  }
                }
                uVar29 = (int)uVar18 + 1;
                uVar18 = (ulonglong)uVar29;
                pFVar21 = local_130 + 2;
                uVar28 = uVar28 + 1;
                local_130 = pFVar21;
                lVar24 = local_128;
                uVar26 = local_res20;
                bVar12 = bVar9;
              } while ((int)uVar29 < (int)(uint)(byte)local_c8[local_128 + 0x3c]);
            }
            local_148 = local_148 + 1;
            local_128 = lVar24 + 0x70;
            iVar15 = (local_c0->ActiveFrames).ArrayNum;
            pFVar27 = local_c0;
            iVar23 = local_140;
          } while ((int)local_148 < iVar15);
        }
      }
      if ((!bVar10) && (bVar12)) {
        *(undefined4 *)in_RDX = 0;
        *(undefined1 *)((longlong)in_RDX + 4) = uVar26;
        return in_RDX;
      }
      pfVar14 = (float *)&local_158;
      if (!bVar10) {
        pfVar14 = (float *)0x0;
      }
      if ((pfVar14 != (float *)0x0) && (*pfVar14 <= 0.0)) {
        *(undefined1 *)((longlong)in_RDX + 4) = *(undefined1 *)(pfVar14 + 1);
        *(undefined4 *)in_RDX = 0;
        return in_RDX;
      }
      pFVar20 = pFVar19;
      local_res8 = this;
      if (0 < (pFVar27->ScheduledTickRequests).ArrayNum) {
        local_b8 = pFVar27->CachedScheduledTickRequest;
        if ((local_b8.NextDeltaTime == 0.0) || (local_b8.NextDeltaTime == __real_38d1b717)) {
          *(FStateTreeScheduledTick *)in_RDX = local_b8;
          return in_RDX;
        }
        local_res8._5_3_ = (undefined3)((ulonglong)this >> 0x28);
        local_res8._0_5_ = local_b8._0_5_;
        pFVar20 = local_res8;
        if (bVar10) {
          local_b0._0_4_ = SUB84(pFVar19,0);
          local_a8 = local_res8;
          bVar10 = local_b0._0_4_ < local_b8.NextDeltaTime;
          local_b0 = pFVar19;
          if (bVar10) {
            pFVar20 = pFVar19;
          }
        }
        bVar10 = true;
        local_150 = 1;
        fVar17 = SUB84(pFVar20,0);
        local_158 = pFVar20;
      }
      iVar15 = (this->Storage->TransitionRequests).ArrayNum;
      if (iVar15 < 0) {
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L"");
        if (bVar12) {
          pcVar8 = (code *)swi(3);
          FVar13 = (FStateTreeScheduledTick)(*pcVar8)();
          return FVar13;
        }
      }
      else if (0 < iVar15) {
        *(undefined4 *)in_RDX = 0x38d1b717;
        *(undefined1 *)((longlong)in_RDX + 4) = 6;
        return in_RDX;
      }
      if ((iVar23 != 0) && (this->Storage->bIsOwningEventQueue != false)) {
        *(undefined4 *)in_RDX = 0x38d1b717;
        *(undefined1 *)((longlong)in_RDX + 4) = 7;
        return in_RDX;
      }
      if (pFVar27->bHasPendingCompletedState != false) {
        *(undefined4 *)in_RDX = 0x38d1b717;
        *(undefined1 *)((longlong)in_RDX + 4) = 8;
        return in_RDX;
      }
      iVar15 = (pFVar27->DelayedTransitions).ArrayNum;
      if (0 < iVar15) {
        pFVar21 = (pFVar27->DelayedTransitions).AllocatorInstance.Data;
        pFVar22 = pFVar21 + (longlong)iVar15 * 0x30;
        while( true ) {
          pFVar19 = pFVar20;
          if ((pFVar27->DelayedTransitions).ArrayNum != iVar15) {
            `TCheckedPointerIterator<FStateTreeTransitionDelayedState_const_,int,0>::operator!='::
            __l2::<lambda_1>::operator()(&local_144);
          }
          if (pFVar21 == pFVar22) break;
          local_res8._0_5_ = CONCAT14(9,*(float *)(pFVar21 + 0x20));
          if (bVar10) {
            local_98 = local_res8;
            bVar10 = true;
            local_a0._0_4_ = SUB84(pFVar19,0);
            local_158 = local_res8;
            if (local_a0._0_4_ < *(float *)(pFVar21 + 0x20)) {
              local_158 = pFVar19;
            }
            pFVar21 = pFVar21 + 0x30;
            pFVar20 = local_158;
            local_a0 = pFVar19;
          }
          else {
            bVar10 = true;
            local_158 = local_res8;
            pFVar21 = pFVar21 + 0x30;
            pFVar20 = local_res8;
          }
        }
        fVar17 = (float)local_158;
      }
      if (bVar10) {
        if (fVar17 < 0.0) {
          `FStateTreeScheduledTick::MakeCustomTickRate'::__l2::<lambda_1>::operator()(local_143);
        }
        if (fVar17 <= 0.0) {
          fVar17 = 0.0;
        }
        *(float *)in_RDX = fVar17;
        *(undefined1 *)((longlong)in_RDX + 4) = local_158._4_1_;
        return in_RDX;
      }
    }
  }
  else {
    if (FVisualLogger::bIsRecording != 0) {
      pUVar5 = this->RootStateTree;
      if ((pUVar5 == (UStateTree *)0x0) || (*(longlong *)&pUVar5->field_0x10 == 0)) {
        ::FString::FString(&local_110,L"None");
      }
      else {
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)pUVar5,&local_110,(UObject *)0x0,None)
        ;
      }
      pUVar6 = this->Owner;
      if (pUVar6 == (UObject *)0x0) {
        ::FString::FString(&local_120,L"None");
      }
      else {
        local_e0.ComparisonIndex.Value = *(uint *)&pUVar6->field_0x18;
        local_e0.Number = *(uint *)&pUVar6->field_0x1c;
        ::FName::ToString(&local_e0,&local_120);
      }
      GetInstanceDescriptionInternal(this,&local_90);
      if (this->Owner == (UObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      FVisualLogger::CategorizedLogfImpl
                (this->Owner,(FName *)&LogStateTree.field_0x4,Warning,
                 L"%s: %hs: StateTree context is not initialized properly (\'%s\' using StateTree \'%s\')"
                );
      if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Data.AllocatorInstance.Data);
      }
      if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_120.Data.AllocatorInstance.Data);
      }
      if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_110.Data.AllocatorInstance.Data);
      }
    }
    if (2 < (byte)LogStateTree._0_1_) {
      pUVar5 = this->RootStateTree;
      if ((pUVar5 == (UStateTree *)0x0) || (*(longlong *)&pUVar5->field_0x10 == 0)) {
        ::FString::FString(&local_f0,L"None");
      }
      else {
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)pUVar5,&local_f0,(UObject *)0x0,None);
      }
      pUVar6 = this->Owner;
      if (pUVar6 == (UObject *)0x0) {
        ::FString::FString(&local_100,L"None");
      }
      else {
        local_d8.ComparisonIndex.Value = *(uint *)&pUVar6->field_0x18;
        local_d8.Number = *(uint *)&pUVar6->field_0x1c;
        ::FName::ToString(&local_d8,&local_100);
      }
      GetInstanceDescriptionInternal(this,local_80);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStateTree);
      if (local_80[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80[0].Data.AllocatorInstance.Data);
      }
      if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.Data.AllocatorInstance.Data);
      }
      if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f0.Data.AllocatorInstance.Data);
      }
    }
  }
  *(undefined4 *)in_RDX = 0x4b000000;
  *(undefined1 *)((longlong)in_RDX + 4) = 0;
  return in_RDX;
}

// GetStateChangeCount @ 14d4ff5b0

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
FStateTreeReadOnlyExecutionContext::GetStateChangeCount(FStateTreeReadOnlyExecutionContext *this)

{
  UStateTree *pUVar1;
  UObject *pUVar2;
  bool bVar3;
  FName local_res8;
  FString local_48;
  FString local_38;
  FString local_28;
  
  bVar3 = UStateTree::IsReadyToRun(this->RootStateTree);
  if (bVar3) {
    return (int)(this->Storage->ExecutionState).StateChangeCount;
  }
  if (FVisualLogger::bIsRecording != 0) {
    pUVar1 = this->RootStateTree;
    if ((pUVar1 == (UStateTree *)0x0) || (*(longlong *)&pUVar1->field_0x10 == 0)) {
      ::FString::FString(&local_38,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)pUVar1,&local_38,(UObject *)0x0,None);
    }
    pUVar2 = this->Owner;
    if (pUVar2 == (UObject *)0x0) {
      ::FString::FString(&local_48,L"None");
    }
    else {
      local_res8.ComparisonIndex.Value = *(uint *)&pUVar2->field_0x18;
      local_res8.Number = *(uint *)&pUVar2->field_0x1c;
      ::FName::ToString(&local_res8,&local_48);
    }
    GetInstanceDescriptionInternal(this,&local_28);
    if (this->Owner == (UObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    FVisualLogger::CategorizedLogfImpl
              (this->Owner,(FName *)&LogStateTree.field_0x4,Warning,
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
    pUVar1 = this->RootStateTree;
    if ((pUVar1 == (UStateTree *)0x0) || (*(longlong *)&pUVar1->field_0x10 == 0)) {
      ::FString::FString(&local_48,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)pUVar1,&local_48,(UObject *)0x0,None);
    }
    pUVar2 = this->Owner;
    if (pUVar2 == (UObject *)0x0) {
      ::FString::FString(&local_38,L"None");
    }
    else {
      local_res8.ComparisonIndex.Value = *(uint *)&pUVar2->field_0x18;
      local_res8.Number = *(uint *)&pUVar2->field_0x1c;
      ::FName::ToString(&local_res8,&local_38);
    }
    GetInstanceDescriptionInternal(this,&local_28);
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
  return 0;
}

// GetStateTreeRunStatus @ 14d4ffb80

/* WARNING: Enum "Type": Some values do not have unique names */

EStateTreeRunStatus __thiscall
FStateTreeReadOnlyExecutionContext::GetStateTreeRunStatus(FStateTreeReadOnlyExecutionContext *this)

{
  UStateTree *pUVar1;
  UObject *pUVar2;
  bool bVar3;
  FName local_res8;
  FString local_48;
  FString local_38;
  FString local_28;
  
  bVar3 = UStateTree::IsReadyToRun(this->RootStateTree);
  if (bVar3) {
    return (this->Storage->ExecutionState).TreeRunStatus;
  }
  if (FVisualLogger::bIsRecording != 0) {
    pUVar1 = this->RootStateTree;
    if ((pUVar1 == (UStateTree *)0x0) || (*(longlong *)&pUVar1->field_0x10 == 0)) {
      ::FString::FString(&local_38,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)pUVar1,&local_38,(UObject *)0x0,None);
    }
    pUVar2 = this->Owner;
    if (pUVar2 == (UObject *)0x0) {
      ::FString::FString(&local_48,L"None");
    }
    else {
      local_res8.ComparisonIndex.Value = *(uint *)&pUVar2->field_0x18;
      local_res8.Number = *(uint *)&pUVar2->field_0x1c;
      ::FName::ToString(&local_res8,&local_48);
    }
    GetInstanceDescriptionInternal(this,&local_28);
    if (this->Owner == (UObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    FVisualLogger::CategorizedLogfImpl
              (this->Owner,(FName *)&LogStateTree.field_0x4,Warning,
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
    pUVar1 = this->RootStateTree;
    if ((pUVar1 == (UStateTree *)0x0) || (*(longlong *)&pUVar1->field_0x10 == 0)) {
      ::FString::FString(&local_48,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)pUVar1,&local_48,(UObject *)0x0,None);
    }
    pUVar2 = this->Owner;
    if (pUVar2 == (UObject *)0x0) {
      ::FString::FString(&local_38,L"None");
    }
    else {
      local_res8.ComparisonIndex.Value = *(uint *)&pUVar2->field_0x18;
      local_res8.Number = *(uint *)&pUVar2->field_0x1c;
      ::FName::ToString(&local_res8,&local_38);
    }
    GetInstanceDescriptionInternal(this,&local_28);
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
  return Failed;
}

// operator() @ 15057dba0

bool __thiscall
`FStateTreeReadOnlyExecutionContext::SetNodeCustomDebugTraceData'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<8038259967112773809>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8038259967112773809>,
                       &`public:___cdecl_`public:_void___cdecl_FStateTreeReadOnlyExecutionContext::SetNodeCustomDebugTraceData(UE::StateTreeTrace::FNodeCustomDebugData&&___ptr64)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

