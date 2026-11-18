// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 14

// GetTestFlags @ 141adb510

EAutomationTestFlags __thiscall
TaskGraphTests::FTaskGraphAnyTask::GetTestFlags(FTaskGraphAnyTask *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141adb520

bool __thiscall TaskGraphTests::FTaskGraphAnyTask::IsStressTest(FTaskGraphAnyTask *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141adb530

uint __thiscall TaskGraphTests::FTaskGraphAnyTask::GetRequiredDeviceNum(FTaskGraphAnyTask *this)

{
  return 1;
}

// GetTestSourceFileName @ 141adb540

FString * __thiscall
TaskGraphTests::FTaskGraphAnyTask::GetTestSourceFileName
          (FTaskGraphAnyTask *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Async\\TaskGraphTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141adb570

int __thiscall TaskGraphTests::FTaskGraphAnyTask::GetTestSourceFileLine(FTaskGraphAnyTask *this)

{
  return 0x589;
}

// GetTests @ 141adb580

/* WARNING: Removing unreachable block (ram,0x000141adb6fe) */

void __thiscall
TaskGraphTests::FTaskGraphAnyTask::GetTests
          (FTaskGraphAnyTask *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  FString *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  undefined8 local_18;
  undefined8 local_10;
  
  pFVar1 = &this->PrettyNameDotNotation;
  pFVar5 = (param_1->AllocatorInstance).Data;
  if (((pFVar5 <= pFVar1) && (pFVar1 < pFVar5 + (longlong)param_1->ArrayMax * 0x10)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  ::FString::FString((FString *)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 0x10),pFVar1)
  ;
  pFVar5 = (param_2->AllocatorInstance).Data;
  local_18 = 0;
  local_10 = 0;
  if (((pFVar5 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar5 + (longlong)param_2->ArrayMax * 0x10)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = param_2->ArrayNum;
  if (iVar4 == param_2->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar4 + 1;
  pFVar5 = (param_2->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar5 = 0;
  *(undefined8 *)pFVar5 = local_18;
  *(undefined4 *)(pFVar5 + 8) = (undefined4)local_10;
  *(undefined4 *)(pFVar5 + 0xc) = local_10._4_4_;
  return;
}

// RunTest @ 141adb720

bool __thiscall TaskGraphTests::FTaskGraphAnyTask::RunTest(FTaskGraphAnyTask *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141adb760

FString * __thiscall
TaskGraphTests::FTaskGraphAnyTask::GetBeautifiedTestName
          (FTaskGraphAnyTask *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// <lambda_invoker_cdecl> @ 141adea30

void __cdecl
`TaskGraphTests::FTaskGraphAnyTask::TestBody'::__l3::<lambda_1>::<lambda_invoker_cdecl>(void)

{
  return;
}

// <lambda_invoker_cdecl> @ 141adec10

void __cdecl
`TaskGraphTests::FTaskGraphAnyTask::TestBody'::__l3::<lambda_2>::<lambda_invoker_cdecl>(void)

{
  return;
}

// <lambda_invoker_cdecl> @ 141adec80

void __cdecl
`TaskGraphTests::FTaskGraphAnyTask::TestBody'::__l11::<lambda_3>::<lambda_invoker_cdecl>(void)

{
  return;
}

// <lambda_invoker_cdecl> @ 141adecb0

void __cdecl
`TaskGraphTests::FTaskGraphAnyTask::TestBody'::__l11::<lambda_4>::<lambda_invoker_cdecl>(void)

{
  return;
}

// FTaskGraphAnyTask @ 141b27520

FTaskGraphAnyTask * __thiscall
TaskGraphTests::FTaskGraphAnyTask::FTaskGraphAnyTask(FTaskGraphAnyTask *this,FString *param_1)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  EAutomationTestFlags EVar3;
  FString *pFVar4;
  FAutomationTestFramework *this_00;
  longlong lVar5;
  FString local_28;
  FString local_18;
  
  FAutomationTestBase::FAutomationTestBase((FAutomationTestBase *)this,param_1,false);
  this->_padding_ = (longlong)&___7FTaskGraphAnyTask_TaskGraphTests__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[.][ApplicationContextMask][EngineFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Async::TaskGraph::AnyTask");
  pFVar4 = ::FString::Replace(pFVar4,&local_18,L"::",L".",IgnoreCase);
  if (pFVar1 != pFVar4) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->PrettyNameDotNotation).Data.ArrayNum = (pFVar4->Data).ArrayNum;
    (this->PrettyNameDotNotation).Data.ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  EVar3 = this->TestFlags;
  if ((EVar3 & (ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext)) == None
     ) {
    EVar3 = EVar3 | (ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext);
    this->TestFlags = EVar3;
  }
  if ((EVar3 & (NegativeFilter|StressFilter|PerfFilter|ProductFilter|EngineFilter|SmokeFilter)) ==
      None) {
    this->TestFlags = EVar3 | EngineFilter;
  }
  this_00 = FAutomationTestFramework::Get();
  ::FString::FString(&local_18,"[.][ApplicationContextMask][EngineFilter]");
  local_28.Data.ArrayNum = (this->PrettyNameDotNotation).Data.ArrayNum;
  lVar5 = (longlong)local_28.Data.ArrayNum;
  pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_28.Data.ArrayNum == 0) {
    local_28.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_28.Data.ArrayNum,0,(ForAnyElementType *)&local_28,local_28.Data.ArrayNum,
               &local_28.Data.ArrayMax);
    memcpy(local_28.Data.AllocatorInstance.Data,pFVar2,lVar5 * 2);
  }
  FAutomationTestFramework::RegisterAutomationTestTags(this_00,&local_28,&local_18,true);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return this;
}

// TestBody @ 141ba09c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TaskGraphTests::FTaskGraphAnyTask::TestBody(FTaskGraphAnyTask *this,FString *param_1)

{
  int *piVar1;
  atomic<unsigned_int> *paVar2;
  code *pcVar3;
  int iVar4;
  atomic<unsigned_int> aVar5;
  undefined8 *puVar6;
  code *pcVar7;
  bool bVar8;
  TRefCountPtr<FBaseGraphTask> TVar9;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar10;
  longlong lVar11;
  longlong lVar12;
  code **ppcVar13;
  undefined1 *puVar14;
  undefined1 auStackY_1d8 [32];
  FTaskBase *local_198;
  FBaseGraphTask *local_190;
  FTaskBase *local_188;
  undefined8 *local_180;
  undefined1 local_178 [16];
  undefined1 local_168 [8];
  undefined1 local_160 [8];
  code *local_158 [2];
  undefined **local_148;
  code *local_140;
  undefined8 local_130;
  code *local_128 [2];
  undefined **local_118;
  code *local_110;
  undefined8 local_100;
  code *local_f8 [2];
  undefined **local_e8;
  code *local_e0;
  undefined8 local_d0;
  code *local_c8 [2];
  undefined **local_b8;
  code *local_b0;
  undefined8 local_a0;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> local_98;
  int local_70;
  int local_6c;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> local_68;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  FBaseGraphTask::CreateGraphEvent();
  local_140 = `TaskGraphTests::FTaskGraphAnyTask::TestBody'::__l3::<lambda_1>::
              <lambda_invoker_cdecl>;
  local_130 = 0;
  local_148 = &___7__TFunction_OwnedObject_P6AXXZ_00_0A__Function_Private_Core_UE__6B_;
  local_158[0] = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
  FFunctionGraphTask::CreateAndDispatchWhenReady
            ((TUniqueFunction<void___cdecl(void)> *)local_178,(TStatIdData *)local_158,
             (TRefCountPtr<FBaseGraphTask> *)&TStatId::TStatId_NAME_None,(Type)&local_198);
  local_100 = 0;
  local_110 = `TaskGraphTests::FTaskGraphAnyTask::TestBody'::__l3::<lambda_2>::
              <lambda_invoker_cdecl>;
  local_118 = &___7__TFunction_OwnedObject_P6AXXZ_00_0A__Function_Private_Core_UE__6B_;
  local_128[0] = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
  FFunctionGraphTask::CreateAndDispatchWhenReady
            ((TUniqueFunction<void___cdecl(void)> *)(local_178 + 8),(TStatIdData *)local_128,
             (TRefCountPtr<FBaseGraphTask> *)&TStatId::TStatId_NAME_None,(Type)&local_198);
  lVar11 = 2;
  local_98.SecondaryData = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
  local_70 = 2;
  UE::Core::Private::
  ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
            (8,8,2,0,&local_98,2,&local_6c);
  FVar10 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_98;
  if (local_98.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FVar10 = local_98.SecondaryData;
  }
  ConstructItems<TRefCountPtr<FBaseGraphTask>,TRefCountPtr<FBaseGraphTask>,int>
            ((void *)FVar10,(TRefCountPtr<FBaseGraphTask> *)local_178,2);
  puVar14 = local_168;
  lVar12 = 2;
  do {
    puVar6 = *(undefined8 **)(puVar14 + -8);
    puVar14 = puVar14 + -8;
    lVar12 = lVar12 + -1;
    if (puVar6 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar6 + 6);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)*puVar6)(puVar6,1);
      }
    }
  } while (lVar12 != 0);
  AnyTaskCompleted((TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)&local_190);
  FWindowsPlatformProcess::Sleep(__real_3dcccccd);
  if (local_190->field_0xd0 != '\0') {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("!CompletedEvent->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Async\\TaskGraphTest.cpp"
                       ,0x596,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  if (local_198->ExtendedPriority == TaskEvent) {
    LOCK();
    local_198->RefCount = (atomic<unsigned_int>)((int)local_198->RefCount + 1);
    UNLOCK();
  }
  UE::Tasks::Private::FTaskBase::TryLaunch(local_198,0);
  FBaseGraphTask::Wait(local_190,AnyNormalThreadNormalTask);
  if (local_190 != (FBaseGraphTask *)0x0) {
    LOCK();
    puVar14 = &local_190->field_0x30;
    iVar4 = *(int *)puVar14;
    *(int *)puVar14 = *(int *)puVar14 + -1;
    UNLOCK();
    if ((iVar4 == 1) && (local_190 != (FBaseGraphTask *)0x0)) {
      (*(code *)**(undefined8 **)local_190)(local_190,1);
    }
  }
  FVar10 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_98;
  if (local_98.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FVar10 = local_98.SecondaryData;
  }
  DestructItems<TRefCountPtr<FBaseGraphTask>,int>((TRefCountPtr<FBaseGraphTask> *)FVar10,local_70);
  if (local_98.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FMemory::Free((void *)local_98.SecondaryData);
  }
  if (local_198 != (FTaskBase *)0x0) {
    LOCK();
    paVar2 = &local_198->RefCount;
    aVar5 = *paVar2;
    *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
    UNLOCK();
    if ((aVar5 == (atomic<unsigned_int>)0x1) && (local_198 != (FTaskBase *)0x0)) {
      (**(code **)local_198->_padding_)(local_198,1);
    }
  }
  FBaseGraphTask::CreateGraphEvent();
  local_d0 = 0;
  local_e0 = `TaskGraphTests::FTaskGraphAnyTask::TestBody'::__l11::<lambda_3>::
             <lambda_invoker_cdecl>;
  local_e8 = &___7__TFunction_OwnedObject_P6AXXZ_00_0A__Function_Private_Core_UE__6B_;
  local_f8[0] = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
  FFunctionGraphTask::CreateAndDispatchWhenReady
            ((TUniqueFunction<void___cdecl(void)> *)local_168,(TStatIdData *)local_f8,
             (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
              *)&TStatId::TStatId_NAME_None,MainQueue);
  local_a0 = 0;
  local_b0 = `TaskGraphTests::FTaskGraphAnyTask::TestBody'::__l11::<lambda_4>::
             <lambda_invoker_cdecl>;
  local_b8 = &___7__TFunction_OwnedObject_P6AXXZ_00_0A__Function_Private_Core_UE__6B_;
  local_c8[0] = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
  FFunctionGraphTask::CreateAndDispatchWhenReady
            ((TUniqueFunction<void___cdecl(void)> *)(local_168 + 8),(TStatIdData *)local_c8,
             (TRefCountPtr<FBaseGraphTask> *)&TStatId::TStatId_NAME_None,(Type)&local_188);
  local_68.SecondaryData = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
  local_40 = 2;
  UE::Core::Private::
  ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
            (8,8,2,0,&local_68,2,&local_3c);
  FVar10 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_68;
  if (local_68.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FVar10 = local_68.SecondaryData;
  }
  ConstructItems<TRefCountPtr<FBaseGraphTask>,TRefCountPtr<FBaseGraphTask>,int>
            ((void *)FVar10,(TRefCountPtr<FBaseGraphTask> *)local_168,2);
  ppcVar13 = local_158;
  do {
    pcVar7 = ppcVar13[-1];
    ppcVar13 = ppcVar13 + -1;
    lVar11 = lVar11 + -1;
    if (pcVar7 != (code *)0x0) {
      LOCK();
      pcVar3 = pcVar7 + 0x30;
      iVar4 = *(int *)pcVar3;
      *(int *)pcVar3 = *(int *)pcVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (*(code *)**(undefined8 **)pcVar7)(pcVar7,1);
      }
    }
  } while (lVar11 != 0);
  TVar9 = AnyTaskCompleted((TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                            *)&local_180);
                    /* WARNING: Load size is inaccurate */
  FBaseGraphTask::Wait(*TVar9.Reference,AnyNormalThreadNormalTask);
  if (local_180 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_180 + 6);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar4 == 1) && (local_180 != (undefined8 *)0x0)) {
      (**(code **)*local_180)();
    }
  }
  if (local_188->ExtendedPriority == TaskEvent) {
    LOCK();
    local_188->RefCount = (atomic<unsigned_int>)((int)local_188->RefCount + 1);
    UNLOCK();
  }
  UE::Tasks::Private::FTaskBase::TryLaunch(local_188,0);
  FVar10 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_68;
  if (local_68.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FVar10 = local_68.SecondaryData;
  }
  DestructItems<TRefCountPtr<FBaseGraphTask>,int>((TRefCountPtr<FBaseGraphTask> *)FVar10,local_40);
  if (local_68.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FMemory::Free((void *)local_68.SecondaryData);
  }
  if (local_188 != (FTaskBase *)0x0) {
    LOCK();
    paVar2 = &local_188->RefCount;
    aVar5 = *paVar2;
    *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
    UNLOCK();
    if ((aVar5 == (atomic<unsigned_int>)0x1) && (local_188 != (FTaskBase *)0x0)) {
      (**(code **)local_188->_padding_)(local_188,1);
    }
  }
  return;
}

