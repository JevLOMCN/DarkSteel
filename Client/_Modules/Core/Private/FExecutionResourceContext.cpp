// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// Get @ 1415c4b20

TRefCountPtr<IExecutionResource> __cdecl FExecutionResourceContext::Get(void)

{
  int iVar1;
  longlong lVar2;
  TRefCountPtr<IExecutionResource> *pTVar3;
  FTask *pFVar4;
  TTuple<LowLevelTasks::FTask_const_*,TArray<TRefCountPtr<IExecutionResource>,TSizedDefaultAllocator<32>_>_>
  *pTVar5;
  IExecutionResource IVar6;
  IExecutionResource *in_RCX;
  undefined8 *puVar7;
  undefined1 local_res10 [8];
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  pFVar4 = LowLevelTasks::FTask::GetActiveTask();
  if (*(FTask **)(lVar2 + 0xc0) == pFVar4) {
    puVar7 = (undefined8 *)(lVar2 + 200);
  }
  else {
    pTVar5 = TSet<TTuple<LowLevelTasks::FTask_const_*,TArray<TRefCountPtr<IExecutionResource>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<LowLevelTasks::FTask_const_*,TArray<TRefCountPtr<IExecutionResource>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<LowLevelTasks::FTask_const_*,TArray<TRefCountPtr<IExecutionResource>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<LowLevelTasks::FTask_const_*,TArray<TRefCountPtr<IExecutionResource>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                     *)(lVar2 + 0xd8),pFVar4);
    puVar7 = (undefined8 *)&pTVar5->field_0x8;
    if (pTVar5 == (TTuple<LowLevelTasks::FTask_const_*,TArray<TRefCountPtr<IExecutionResource>,TSizedDefaultAllocator<32>_>_>
                   *)0x0) {
      puVar7 = (undefined8 *)0x0;
    }
  }
  if ((puVar7 != (undefined8 *)0x0) && (*(int *)(puVar7 + 1) != 0)) {
    IVar6 = (IExecutionResource)::operator_new(0x28);
    if (IVar6 != (IExecutionResource)0x0) {
      *(undefined4 *)((longlong)IVar6 + 0x10) = 0;
      *(undefined ***)IVar6 = &FCompositeExecutionResource::_vftable__for__IExecutionResource__;
      *(undefined ***)((longlong)IVar6 + 8) =
           &FCompositeExecutionResource::_vftable__for__FThreadSafeRefCountedObject__;
      *(longlong *)((longlong)IVar6 + 0x18) = 0;
      iVar1 = *(int *)(puVar7 + 1);
      pTVar3 = (TRefCountPtr<IExecutionResource> *)*puVar7;
      *(int *)((longlong)IVar6 + 0x20) = iVar1;
      if (iVar1 == 0) {
        *(int *)((longlong)IVar6 + 0x24) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,iVar1,0,(ForAnyElementType *)((longlong)IVar6 + 0x18),iVar1,
                   (int *)((longlong)IVar6 + 0x24));
        ConstructItems<TRefCountPtr<IExecutionResource>,TRefCountPtr<IExecutionResource>,int>
                  (((ForAnyElementType *)((longlong)IVar6 + 0x18))->Data,pTVar3,iVar1);
      }
      *in_RCX = IVar6;
      (**(code **)(*(longlong *)IVar6 + 8))(IVar6,local_res10);
      return (TRefCountPtr<IExecutionResource>)in_RCX;
    }
  }
  *in_RCX = (IExecutionResource)0x0;
  return (TRefCountPtr<IExecutionResource>)in_RCX;
}

