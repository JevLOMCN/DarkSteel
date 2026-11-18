// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 11

// Call @ 14426fa80

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<bool_(__cdecl*)(UClass_const_*,UClass_const_*),bool,UClass_const_*,UClass_const_*>
::Call(void *param_1,UClass **param_2,UClass **param_3)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014426fa8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)param_1)(*param_2,*param_3);
  return (bool)uVar1;
}

// Call @ 14426faa0

bool __cdecl
UE::Core::Private::Function::TFunctionRefCaller<bool_(__cdecl*)(UClass_const_*),bool,UClass_const_*>
::Call(void *param_1,UClass **param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014426faa6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)param_1)(*param_2);
  return (bool)uVar1;
}

// Call @ 1442b6ce0

void __cdecl
UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(unsigned_int),void,unsigned_int>::
Call(void *param_1,uint *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001442b6ce5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_1)(*param_2);
  return;
}

// Call @ 1442b6cf0

FString * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UObjectReplicationBridge::PrintRelevantObjectsForConnections'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,FString,unsigned_int>
::Call(FString *__return_storage_ptr__,void *param_1,uint *param_2)

{
  FString local_18;
  
  Net::Private::FReplicationFiltering::PrintFilterObjectInfo
            (*(FReplicationFiltering **)param_1,&local_18,*param_2,
             **(uint **)((longlong)param_1 + 8));
  ::FString::PrintfImpl(__return_storage_ptr__,L"\t%s");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// Call @ 1442b6d60

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Net::Private::FReplicationPollTask::DoTask'::__l2::<lambda_1>,void,unsigned_int>
::Call(void *param_1,uint *param_2)

{
  Net::Private::FObjectPoller::PushModelPollObject
            ((FObjectPoller *)**(undefined8 **)param_1,*param_2,
             *(FNetStatsContext **)((longlong)param_1 + 8),
             (FPreUpdateAndPollStats *)((*(undefined8 **)param_1)[1] + 0x18));
  return;
}

// Call @ 1442b6d80

FString * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UObjectReplicationBridge::PrintReplicatedObjects'::__l2::<lambda_1>,FString,unsigned_int>
::Call(FString *__return_storage_ptr__,void *param_1,uint *param_2)

{
  `UObjectReplicationBridge::PrintReplicatedObjects'::__l2::<lambda_1>::operator()
            (param_1,__return_storage_ptr__,*param_2);
  return __return_storage_ptr__;
}

// Call @ 1442b6db0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Net::Private::FReplicationPollTask::DoTask'::__l2::<lambda_2>,void,unsigned_int>
::Call(void *param_1,uint *param_2)

{
  Net::Private::FObjectPoller::ForcePollObject
            ((FObjectPoller *)**(undefined8 **)param_1,*param_2,
             *(FNetStatsContext **)((longlong)param_1 + 8),
             (FPreUpdateAndPollStats *)((*(undefined8 **)param_1)[1] + 0x18));
  return;
}

// Call @ 1442b6dd0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Net::Private::FReplicationPrioritization::UpdatePrioritiesForNewAndDeletedObjects'::__l2::<lambda_3>,void,unsigned_int>
::Call(void *param_1,uint *param_2)

{
  `UE::Net::Private::FReplicationPrioritization::UpdatePrioritiesForNewAndDeletedObjects'::__l2::
  <lambda_3>::operator()(param_1,*param_2);
  return;
}

// Call @ 1442fbe20

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Net::Private::FReplicationWriter::FreeHugeObjectSendQueue'::__l2::<lambda_1>,void,UE::Net::Private::FReplicationWriter::FHugeObjectContext_const_&>
::Call(void *param_1,FHugeObjectContext *param_2)

{
  ForElementType<UE::Net::Private::FReplicationWriter::FObjectRecord> FVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  ForElementType<UE::Net::Private::FReplicationWriter::FObjectRecord> FVar6;
  uint uVar7;
  undefined1 auStackX_10 [8];
  
  FVar6 = (param_2->BatchRecord).ObjectReplicationRecords.AllocatorInstance.SecondaryData;
  iVar2 = (param_2->BatchRecord).ObjectReplicationRecords.ArrayNum;
  if (FVar6 == (ForElementType<UE::Net::Private::FReplicationWriter::FObjectRecord>)0x0) {
    FVar6 = (ForElementType<UE::Net::Private::FReplicationWriter::FObjectRecord>)
            &param_2->BatchRecord;
  }
  FVar1 = (ForElementType<UE::Net::Private::FReplicationWriter::FObjectRecord>)
          ((longlong)FVar6 + (longlong)iVar2 * 0x18);
  while( true ) {
    if ((param_2->BatchRecord).ObjectReplicationRecords.ArrayNum != iVar2) {
      auStackX_10[0] = 0;
      `TCheckedPointerIterator<UE::Net::Private::FReplicationWriter::FObjectRecord_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(auStackX_10);
    }
    if (FVar6 == FVar1) break;
    lVar3 = *(longlong *)param_1;
    uVar7 = *(uint *)((longlong)FVar6 + 8) & 0xfffff;
    if (*(int *)(lVar3 + 0xc0) <= (int)uVar7) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (((*(uint *)((longlong)FVar6 + 8) & 0x2000000) != 0) &&
       (0x40 < *(ushort *)(*(longlong *)(lVar3 + 0xb8) + 8 + (ulonglong)uVar7 * 0x10))) {
      Net::Private::FGlobalChangeMaskAllocator::Free
                (&Net::Private::s_DefaultChangeMaskAllocator,*(void **)FVar6);
    }
    FVar6 = (ForElementType<UE::Net::Private::FReplicationWriter::FObjectRecord>)
            ((longlong)FVar6 + 0x18);
  }
  return;
}

// Call @ 1442fbe30

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Net::Private::FReplicationWriter::HandleDiscardedRecord'::__l6::<lambda_1>,void,UE::Net::Private::FReplicationWriter::FHugeObjectContext_const_&>
::Call(void *param_1,FHugeObjectContext *param_2)

{
  ForElementType<UE::Net::Private::FReplicationWriter::FObjectRecord> FVar1;
  ushort uVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  ForElementType<UE::Net::Private::FReplicationWriter::FObjectRecord> FVar7;
  uint uVar8;
  FReplicationInfo *pFVar9;
  undefined1 auStackX_8 [8];
  
  Net::Private::FReplicationWriter::GetReplicationInfo
            (*(FReplicationWriter **)param_1,param_2->RootObjectInternalIndex);
  FVar7 = (param_2->BatchRecord).ObjectReplicationRecords.AllocatorInstance.SecondaryData;
  iVar3 = (param_2->BatchRecord).ObjectReplicationRecords.ArrayNum;
  if (FVar7 == (ForElementType<UE::Net::Private::FReplicationWriter::FObjectRecord>)0x0) {
    FVar7 = (ForElementType<UE::Net::Private::FReplicationWriter::FObjectRecord>)
            &param_2->BatchRecord;
  }
  FVar1 = (ForElementType<UE::Net::Private::FReplicationWriter::FObjectRecord>)
          ((longlong)FVar7 + (longlong)iVar3 * 0x18);
  while( true ) {
    if ((param_2->BatchRecord).ObjectReplicationRecords.ArrayNum != iVar3) {
      auStackX_8[0] = 0;
      `TCheckedPointerIterator<UE::Net::Private::FReplicationWriter::FObjectRecord_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(auStackX_8);
    }
    if (FVar7 == FVar1) break;
    lVar4 = *(longlong *)param_1;
    uVar8 = *(uint *)((longlong)FVar7 + 8) & 0xfffff;
    if (*(int *)(lVar4 + 0xc0) <= (int)uVar8) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar9 = (FReplicationInfo *)((ulonglong)uVar8 * 0x10 + *(longlong *)(lVar4 + 0xb8));
    uVar2 = (pFVar9->field1_0x8)._s_1.ChangeMaskBitCount;
    Net::Private::FReplicationWriter::HandleDiscardedRecord
              (*(FReplicationWriter **)param_1,(FRecordInfo *)FVar7,pFVar9,
               (FReplicationRecord *)((longlong)FVar7 + 0x10));
    if (((*(uint *)((longlong)FVar7 + 8) & 0x2000000) != 0) && (0x40 < uVar2)) {
      Net::Private::FGlobalChangeMaskAllocator::Free
                (&Net::Private::s_DefaultChangeMaskAllocator,*(void **)FVar7);
    }
    FVar7 = (ForElementType<UE::Net::Private::FReplicationWriter::FObjectRecord>)
            ((longlong)FVar7 + 0x18);
  }
  return;
}

// Call @ 1442fbe40

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Net::Private::FReplicationWriter::HandleDeliveredRecord'::__l80::<lambda_1>,void,UE::Net::Private::FReplicationWriter::FHugeObjectContext_const_&>
::Call(void *param_1,FHugeObjectContext *param_2)

{
  ForElementType<UE::Net::Private::FReplicationWriter::FObjectRecord> FVar1;
  ushort uVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  ForElementType<UE::Net::Private::FReplicationWriter::FObjectRecord> FVar7;
  uint uVar8;
  FReplicationInfo *pFVar9;
  undefined1 auStackX_8 [8];
  
  Net::Private::FReplicationWriter::GetReplicationInfo
            (*(FReplicationWriter **)param_1,param_2->RootObjectInternalIndex);
  FVar7 = (param_2->BatchRecord).ObjectReplicationRecords.AllocatorInstance.SecondaryData;
  iVar3 = (param_2->BatchRecord).ObjectReplicationRecords.ArrayNum;
  if (FVar7 == (ForElementType<UE::Net::Private::FReplicationWriter::FObjectRecord>)0x0) {
    FVar7 = (ForElementType<UE::Net::Private::FReplicationWriter::FObjectRecord>)
            &param_2->BatchRecord;
  }
  FVar1 = (ForElementType<UE::Net::Private::FReplicationWriter::FObjectRecord>)
          ((longlong)FVar7 + (longlong)iVar3 * 0x18);
  while( true ) {
    if ((param_2->BatchRecord).ObjectReplicationRecords.ArrayNum != iVar3) {
      auStackX_8[0] = 0;
      `TCheckedPointerIterator<UE::Net::Private::FReplicationWriter::FObjectRecord_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(auStackX_8);
    }
    if (FVar7 == FVar1) break;
    lVar4 = *(longlong *)param_1;
    uVar8 = *(uint *)((longlong)FVar7 + 8) & 0xfffff;
    if (*(int *)(lVar4 + 0xc0) <= (int)uVar8) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar9 = (FReplicationInfo *)((ulonglong)uVar8 * 0x10 + *(longlong *)(lVar4 + 0xb8));
    uVar2 = (pFVar9->field1_0x8)._s_1.ChangeMaskBitCount;
    Net::Private::FReplicationWriter::HandleDeliveredRecord
              (*(FReplicationWriter **)param_1,(FRecordInfo *)FVar7,pFVar9,
               (FReplicationRecord *)((longlong)FVar7 + 0x10));
    if (((*(uint *)((longlong)FVar7 + 8) & 0x2000000) != 0) && (0x40 < uVar2)) {
      Net::Private::FGlobalChangeMaskAllocator::Free
                (&Net::Private::s_DefaultChangeMaskAllocator,*(void **)FVar7);
    }
    FVar7 = (ForElementType<UE::Net::Private::FReplicationWriter::FObjectRecord>)
            ((longlong)FVar7 + 0x18);
  }
  Net::Private::FNetExports::AcknowledgeBatchExports
            (*(FNetExports **)(*(longlong *)param_1 + 0x1e0),&param_2->BatchExports);
  return;
}

