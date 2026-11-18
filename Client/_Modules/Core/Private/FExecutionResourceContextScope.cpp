// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// FExecutionResourceContextScope @ 141583e70

FExecutionResourceContextScope * __thiscall
FExecutionResourceContextScope::FExecutionResourceContextScope
          (FExecutionResourceContextScope *this,TRefCountPtr<IExecutionResource> param_1)

{
  FTask *pFVar1;
  IExecutionResource local_res8;
  
  local_res8 = *param_1.Reference;
  *param_1.Reference = (IExecutionResource)0x0;
  pFVar1 = LowLevelTasks::FTask::GetActiveTask();
  ExecutionResourceImpl::FState::Push
            ((FState *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc0)
             ,pFVar1,&local_res8);
  if (*param_1.Reference != (IExecutionResource)0x0) {
    (**(code **)(*(longlong *)*param_1.Reference + 0x10))();
  }
  return this;
}

// ~FExecutionResourceContextScope @ 141589780

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FExecutionResourceContextScope::~FExecutionResourceContextScope
          (FExecutionResourceContextScope *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FTask *pFVar4;
  TTuple<LowLevelTasks::FTask_const_*,TArray<TRefCountPtr<IExecutionResource>,TSizedDefaultAllocator<32>_>_>
  *pTVar5;
  uint uVar6;
  longlong *local_res10;
  longlong *local_res18;
  FTask *local_res20;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  pFVar4 = LowLevelTasks::FTask::GetActiveTask();
  if (*(FTask **)(lVar1 + 0xc0) == pFVar4) {
    TArray<TRefCountPtr<IExecutionResource>,TSizedDefaultAllocator<32>_>::Pop
              ((TArray<TRefCountPtr<IExecutionResource>,TSizedDefaultAllocator<32>_> *)(lVar1 + 200)
               ,(EAllowShrinking)&local_res10);
    if (local_res10 != (longlong *)0x0) {
      (**(code **)(*local_res10 + 0x10))();
    }
    if (*(int *)(lVar1 + 0xd0) == 0) {
      *(longlong *)(lVar1 + 0xc0) = 1;
      if (*(int *)(lVar1 + 0xd4) != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,(ForAnyElementType *)(lVar1 + 200),0,(int *)(lVar1 + 0xd4));
        return;
      }
    }
  }
  else {
    pTVar5 = TSet<TTuple<LowLevelTasks::FTask_const_*,TArray<TRefCountPtr<IExecutionResource>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<LowLevelTasks::FTask_const_*,TArray<TRefCountPtr<IExecutionResource>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<LowLevelTasks::FTask_const_*,TArray<TRefCountPtr<IExecutionResource>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<LowLevelTasks::FTask_const_*,TArray<TRefCountPtr<IExecutionResource>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                     *)(lVar1 + 0xd8),pFVar4);
    if (pTVar5 == (TTuple<LowLevelTasks::FTask_const_*,TArray<TRefCountPtr<IExecutionResource>,TSizedDefaultAllocator<32>_>_>
                   *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x288,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TArray<TRefCountPtr<IExecutionResource>,TSizedDefaultAllocator<32>_>::Pop
              ((TArray<TRefCountPtr<IExecutionResource>,TSizedDefaultAllocator<32>_> *)
               &pTVar5->field_0x8,(EAllowShrinking)&local_res18);
    if (local_res18 != (longlong *)0x0) {
      (**(code **)(*local_res18 + 0x10))();
    }
    if ((*(int *)&pTVar5->field_0x10 == 0) && (*(int *)(lVar1 + 0xe0) != *(int *)(lVar1 + 0x10c))) {
      uVar6 = ((uint)((ulonglong)pFVar4 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar4 >> 4)) *
              -0x7a143595;
      uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
      local_res20 = pFVar4;
      TSet<TTuple<LowLevelTasks::FTask_const_*,TArray<TRefCountPtr<IExecutionResource>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<LowLevelTasks::FTask_const_*,TArray<TRefCountPtr<IExecutionResource>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::RemoveImpl<LowLevelTasks::FTask_const_*>
                ((TSet<TTuple<LowLevelTasks::FTask_const_*,TArray<TRefCountPtr<IExecutionResource>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<LowLevelTasks::FTask_const_*,TArray<TRefCountPtr<IExecutionResource>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                  *)(lVar1 + 0xd8),uVar6 >> 0x10 ^ uVar6,&local_res20);
    }
  }
  return;
}

