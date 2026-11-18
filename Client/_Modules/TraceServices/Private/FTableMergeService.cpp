// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 1

// MergeTables @ 14d4794a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __cdecl
TraceServices::FTableMergeService::MergeTables
          (TSharedPtr<TraceServices::IUntypedTable,1> *param_1,
          TSharedPtr<TraceServices::IUntypedTable,1> *param_2,
          TFunction<void___cdecl(TSharedPtr<TraceServices::FTableDiffCallbackParams,1>)> *param_3)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined1 auStackY_118 [32];
  FTaskHandle local_e8 [2];
  longlong local_d8;
  longlong local_c8 [3];
  longlong *local_b0;
  undefined1 local_a8 [72];
  longlong *local_60;
  TImportTable<TraceServices::FImportTableRow> *local_58;
  FSharedReferencer<1> FStack_50;
  ForAnyElementType local_48;
  undefined8 local_40;
  ForAnyElementType local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_118;
  local_d8 = *(longlong *)param_3;
  local_b0 = (longlong *)0x0;
  if (local_d8 != 0) {
    puVar3 = (undefined8 *)&param_3->field_0x10;
    if (*(undefined8 **)&param_3->field_0x28 != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)&param_3->field_0x28;
    }
    (**(code **)*puVar3)(puVar3,local_c8);
  }
  local_a8._0_8_ = param_1->Object;
  local_a8._8_8_ = (param_1->SharedReferenceCount).ReferenceController;
  if ((TReferenceControllerBase<1> *)local_a8._8_8_ != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_a8._8_8_)->SharedReferenceCount =
         (atomic<int>)
         ((int)((TReferenceControllerBase<1> *)local_a8._8_8_)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_a8._16_8_ = param_2->Object;
  local_a8._24_8_ = (param_2->SharedReferenceCount).ReferenceController;
  if ((TReferenceControllerBase<1> *)local_a8._24_8_ != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_a8._24_8_)->SharedReferenceCount =
         (atomic<int>)
         ((int)((TReferenceControllerBase<1> *)local_a8._24_8_)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_a8._32_8_ = local_d8;
  local_60 = (longlong *)0x0;
  if (local_d8 != 0) {
    plVar4 = local_c8;
    if (local_b0 != (longlong *)0x0) {
      plVar4 = local_b0;
    }
    (**(code **)*plVar4)(plVar4,local_a8 + 0x30);
  }
  local_48.Data = (FScriptContainerElement *)0x0;
  local_58 = (TImportTable<TraceServices::FImportTableRow> *)0x0;
  FStack_50.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_40._0_4_ = 0;
  local_40._4_4_ = 0;
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30._0_4_ = 0;
  local_30._4_4_ = 0;
  if (local_d8 != 0) {
    plVar4 = local_c8;
    if (local_b0 != (longlong *)0x0) {
      plVar4 = local_b0;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  local_e8[0].Pimpl.Reference = (TRefCountPtr<UE::Tasks::Private::FTaskBase>)(FTaskBase *)0x0;
  UE::Tasks::Private::FTaskHandle::Launch<TraceServices::FTableMergeTask>
            (local_e8,
             L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\TableMergeTask.cpp(204)"
             ,(FTableMergeTask *)local_a8,Default,None,None);
  if (local_e8[0].Pimpl.Reference != (FTaskBase *)0x0) {
    LOCK();
    paVar1 = (atomic<unsigned_int> *)((longlong)local_e8[0].Pimpl.Reference + 0x30);
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<unsigned_int>)0x1) {
      (*(code *)**(undefined8 **)local_e8[0].Pimpl.Reference)(local_e8[0].Pimpl.Reference,1);
    }
  }
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  DestructItems<TSharedRef<FTokenizedMessage,1>,int>
            ((TSharedRef<FTokenizedMessage,1> *)local_48.Data,(int)local_40);
  if ((TSharedRef<FTokenizedMessage,1> *)local_48.Data != (TSharedRef<FTokenizedMessage,1> *)0x0) {
    FMemory::Free(local_48.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_50.ReferenceController);
  if (local_a8._32_8_ != 0) {
    plVar4 = (longlong *)(local_a8 + 0x30);
    if (local_60 != (longlong *)0x0) {
      plVar4 = local_60;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_a8._24_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_a8._8_8_);
  if (*(longlong *)param_3 != 0) {
    plVar4 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar4 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  return;
}

