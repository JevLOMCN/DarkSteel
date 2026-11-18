// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 11

// FTableImportTask @ 14d4261d0

FTableImportTask * __thiscall
TraceServices::FTableImportTask::FTableImportTask
          (FTableImportTask *this,FString *param_1,FName param_2,
          TFunction<void___cdecl(TSharedPtr<TraceServices::FTableImportCallbackParams,1>)> *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  lVar1 = *(longlong *)param_3;
  *(longlong *)&this->Callback = lVar1;
  *(undefined8 *)&(this->Callback).field_0x28 = 0;
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)&param_3->field_0x10;
    if (*(undefined8 **)&param_3->field_0x28 != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)&param_3->field_0x28;
    }
    (**(code **)*puVar2)(puVar2,&(this->Callback).field_0x10);
  }
  (this->Table).Object = (TImportTable<TraceServices::FImportTableRow> *)0x0;
  (this->Table).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->Messages).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Messages).ArrayNum = 0;
  (this->Messages).ArrayMax = 0;
  (this->ColumnNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ColumnNames).ArrayNum = 0;
  (this->ColumnNames).ArrayMax = 0;
  ::FString::FString(&this->FilePath,param_1);
  this->TableId = param_2;
  (this->Separator).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Separator).Data.ArrayNum = 0;
  (this->Separator).Data.ArrayMax = 0;
  if (*(longlong *)param_3 != 0) {
    plVar3 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar3 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  return this;
}

// ~FTableImportTask @ 14d42cb90

void __thiscall TraceServices::FTableImportTask::~FTableImportTask(FTableImportTask *this)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  pFVar1 = (this->Separator).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FilePath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->ColumnNames).AllocatorInstance.Data,(this->ColumnNames).ArrayNum);
  pFVar1 = (this->ColumnNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSharedRef<FTokenizedMessage,1>,int>
            ((TSharedRef<FTokenizedMessage,1> *)(this->Messages).AllocatorInstance.Data,
             (this->Messages).ArrayNum);
  pFVar1 = (this->Messages).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Table).SharedReferenceCount.ReferenceController);
  if (*(longlong *)&this->Callback != 0) {
    plVar2 = *(longlong **)&(this->Callback).field_0x28;
    plVar3 = (longlong *)&(this->Callback).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar3 = plVar2;
    }
                    /* WARNING: Could not recover jumptable at 0x00014d42cc0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x10))();
    return;
  }
  return;
}

// operator() @ 14d430000

/* WARNING: Removing unreachable block (ram,0x00014d430149) */

void __thiscall
`TraceServices::FTableImportTask::LoadFileToStringArray'::__l2::<lambda_1>::operator()
          (void *this,TStringView<wchar_t> *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FString *pFVar6;
  FScriptContainerElement *pFVar7;
  FString local_38;
  FString local_28;
  wchar_t *local_18;
  undefined8 uStack_10;
  
  local_18 = param_1->DataPtr;
  uStack_10 = *(undefined8 *)&param_1->Size;
  pFVar2 = *(ForAnyElementType **)this;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  pFVar6 = ::FString::ConstructFromPtrSize
                     (&local_28,param_1->DataPtr,(int)*(undefined8 *)&param_1->Size);
  if (&local_38 != pFVar6) {
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    local_38.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
    (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = (pFVar6->Data).ArrayNum;
    local_38.Data.ArrayMax = (pFVar6->Data).ArrayMax;
    (pFVar6->Data).ArrayNum = 0;
    (pFVar6->Data).ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (((pFVar2->Data <= (FScriptContainerElement *)&local_38) &&
      ((FScriptContainerElement *)&local_38 <
       pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 0x10)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar5 + 1;
  pFVar7 = pFVar2->Data + (longlong)iVar5 * 0x10;
  *(undefined8 *)pFVar7 = 0;
  *(FScriptContainerElement **)pFVar7 = local_38.Data.AllocatorInstance.Data;
  *(int *)(pFVar7 + 8) = local_38.Data.ArrayNum;
  *(int *)(pFVar7 + 0xc) = local_38.Data.ArrayMax;
  return;
}

// operator() @ 14d434ef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall TraceServices::FTableImportTask::operator()(FTableImportTask *this)

{
  int *piVar1;
  int iVar2;
  FName FVar3;
  undefined8 *puVar4;
  code *pcVar5;
  bool bVar6;
  atomic<int> aVar7;
  TReferenceControllerBase<1> *pTVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  TReferenceControllerBase<1> *pTVar11;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined1 local_c8 [8];
  FSharedReferencer<1> local_c0;
  undefined8 *local_b8 [2];
  code *local_a8 [5];
  undefined8 *local_80;
  longlong local_78;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong *local_50;
  TReferenceControllerBase<1> *local_48;
  TReferenceControllerBase<1> *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  aVar7 = (atomic<int>)ImportTable(this);
  pTVar8 = ::operator_new(0x40);
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    pTVar8 = (TReferenceControllerBase<1> *)0x0;
    pTVar11 = (TReferenceControllerBase<1> *)&DAT_00000010;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    _DAT_00000010 = this->TableId;
  }
  else {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar11 = pTVar8 + 1;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFTableImportCallbackParams_TraceServices___00_SharedPointerInternals__6B_
    ;
    pTVar8[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar8[1]._padding_ = 0;
    pTVar8[2]._padding_ = 0;
    pTVar8[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar8[3]._padding_ = 0;
    pTVar8[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8[3].WeakReferenceCount = (atomic<int>)0x0;
    if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    FVar3 = this->TableId;
    if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pTVar11->_padding_ = (longlong)FVar3;
    if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
  }
  pTVar11->SharedReferenceCount = aVar7;
  local_c0.ReferenceController = (this->Table).SharedReferenceCount.ReferenceController;
  local_c8 = (undefined1  [8])(this->Table).Object;
  if (local_c0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_c0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_c0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pTVar11 + 1 == (TReferenceControllerBase<1> *)local_c8) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_c0.ReferenceController);
    if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
  }
  else {
    pTVar11[1]._padding_ = (longlong)local_c8;
    local_c8 = (undefined1  [8])0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pTVar11[1].SharedReferenceCount,&local_c0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_c0.ReferenceController);
  }
  TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_> *)(pTVar11 + 2),
             &this->Messages);
  local_78 = *(longlong *)&this->Callback;
  local_50 = (longlong *)0x0;
  if (local_78 != 0) {
    puVar4 = *(undefined8 **)&(this->Callback).field_0x28;
    puVar9 = (undefined8 *)&(this->Callback).field_0x10;
    if (puVar4 != (undefined8 *)0x0) {
      puVar9 = puVar4;
    }
    (**(code **)*puVar9)(puVar9,&local_68);
  }
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_a8[0] = (code *)0x0;
  local_48 = pTVar11;
  local_40 = pTVar8;
  local_80 = FMemory::Malloc(0x50,0x10);
  *local_80 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`TraceServices::FTableImportTask::operator()'::`2'::<lambda_1>,1,1>
               ::_vftable_;
  plVar10 = local_80 + 2;
  *plVar10 = local_78;
  local_80[7] = local_50;
  local_50 = (longlong *)0x0;
  local_80[4] = local_68;
  local_80[5] = uStack_60;
  local_80[6] = local_58;
  if (*plVar10 != 0) {
    local_78 = 0;
  }
  local_80[8] = local_48;
  local_80[9] = local_40;
  local_40 = (TReferenceControllerBase<1> *)0x0;
  local_48 = (TReferenceControllerBase<1> *)0x0;
  if (plVar10 != (longlong *)0x0) {
    local_a8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`TraceServices::FTableImportTask::operator()'::__l2::<lambda_1>,void>
                  ::Call;
  }
  local_d8 = 1;
  FFunctionGraphTask::CreateAndDispatchWhenReady
            ((TUniqueFunction<void___cdecl(void)> *)local_b8,(TStatIdData *)local_a8,
             (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
              *)&TStatId::TStatId_NAME_None,MainQueue);
  if (local_b8[0] != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_b8[0] + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*local_b8[0])(local_b8[0],1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
  if (local_78 != 0) {
    plVar10 = &local_68;
    if (local_50 != (longlong *)0x0) {
      plVar10 = local_50;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return;
}

// AddError @ 14d43a4a0

void __thiscall TraceServices::FTableImportTask::AddError(FTableImportTask *this,FText *param_1)

{
  TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TSharedRef<FTokenizedMessage,1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TSharedRef<FTokenizedMessage,1> *pTVar8;
  FScriptContainerElement *pFVar9;
  TSharedRef<FTokenizedMessage,1> local_18;
  
  pTVar1 = &this->Messages;
  pTVar8 = FTokenizedMessage::Create(&local_18,Error,param_1);
  pTVar3 = (TSharedRef<FTokenizedMessage,1> *)(pTVar1->AllocatorInstance).Data;
  if ((pTVar3 <= pTVar8) && (pTVar8 < pTVar3 + (this->Messages).ArrayMax)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar7 = (this->Messages).ArrayNum;
  piVar2 = &(this->Messages).ArrayMax;
  if (iVar7 == *piVar2) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Messages).ArrayNum = iVar7 + 1;
  pFVar9 = (pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
  *(FTokenizedMessage **)pFVar9 = pTVar8->Object;
  pTVar4 = (pTVar8->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar9 + 8) = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// CreateLayout @ 14d44b0b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014d44b5e7) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff98 : 0x00014d44b5eb */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

bool __thiscall
TraceServices::FTableImportTask::CreateLayout(FTableImportTask *this,FString *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  FText *pFVar7;
  undefined ***pppuVar8;
  wchar_t *pwVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  uint uVar12;
  TTableLayout<TraceServices::FImportTableRow> *pTVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  undefined1 auStackY_2a8 [32];
  longlong local_258;
  TArray<FString,TSizedDefaultAllocator<32>_> local_250;
  TTableLayout<TraceServices::FImportTableRow> *local_240;
  FString local_238;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_228;
  longlong local_218;
  FString local_210;
  FString local_200;
  FString local_1f0;
  FString local_1e0;
  FString local_1d0;
  code *local_1b8;
  undefined **local_1a8;
  uint local_1a0;
  undefined ***local_190;
  FText local_188;
  code *local_178 [2];
  undefined **local_168;
  uint local_160;
  undefined8 local_150;
  code *local_148 [2];
  undefined **local_138;
  uint local_130;
  undefined8 local_120;
  code *local_118 [2];
  undefined **local_108;
  uint local_100;
  undefined8 local_f0;
  code *local_e8 [2];
  undefined **local_d8;
  uint local_d0;
  undefined8 local_c0;
  FStringFormatArg local_b8;
  FString local_98;
  undefined4 local_88;
  undefined4 local_84;
  code *local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  uVar14 = 0;
  local_250.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_250.ArrayNum = 0;
  local_250.ArrayMax = 0;
  SplitLineIntoValues(this,param_1,&local_250);
  if (local_250.ArrayNum == (this->ColumnNames).ArrayNum) {
    if (((this->Table).Object == (TImportTable<TraceServices::FImportTableRow> *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    pTVar13 = (TTableLayout<TraceServices::FImportTableRow> *)&((this->Table).Object)->_padding_;
    local_240 = pTVar13;
    if (0 < local_250.ArrayNum) {
      local_258 = 0;
      local_218 = 0;
      uVar11 = uVar14;
      do {
        lVar16 = local_218;
        uVar15 = ~uVar14 >> 0x1f;
        uVar12 = 0;
        if ((int)uVar14 < (this->ColumnNames).ArrayNum) {
          uVar12 = uVar15;
        }
        if ((uVar12 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        if (*(int *)((this->ColumnNames).AllocatorInstance.Data + lVar16 + 8) < 2) {
          FStringFormatArg::FStringFormatArg(&local_b8,uVar14);
          local_228.ArrayNum = 1;
          local_228.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,1,0,&local_228.AllocatorInstance,1,&local_228.ArrayMax);
          ConstructItems<FStringFormatArg,FStringFormatArg,int>
                    (local_228.AllocatorInstance.Data,&local_b8,1);
          ::FString::FormatImpl(&local_238,L"Column {0}",&local_228);
          uVar12 = 0;
          if ((int)uVar14 < (this->ColumnNames).ArrayNum) {
            uVar12 = uVar15;
          }
          if ((uVar12 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
          pFVar10 = (this->ColumnNames).AllocatorInstance.Data + local_258 * 0x10;
          if (pFVar10 != (FScriptContainerElement *)&local_238) {
            if (*(void **)pFVar10 != (void *)0x0) {
              FMemory::Free(*(void **)pFVar10);
            }
            *(FScriptContainerElement **)pFVar10 = local_238.Data.AllocatorInstance.Data;
            local_238.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            *(int *)(pFVar10 + 8) = local_238.Data.ArrayNum;
            *(int *)(pFVar10 + 0xc) = local_238.Data.ArrayMax;
            local_238.Data.ArrayNum = 0;
            local_238.Data.ArrayMax = 0;
          }
          if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_238.Data.AllocatorInstance.Data);
          }
          DestructItems<FStringFormatArg,int>
                    ((FStringFormatArg *)local_228.AllocatorInstance.Data,local_228.ArrayNum);
          if ((FStringFormatArg *)local_228.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
            FMemory::Free(local_228.AllocatorInstance.Data);
          }
          if (local_b8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b8.StringValue.Data.AllocatorInstance.Data);
          }
        }
        uVar12 = 0;
        if ((int)uVar14 < local_250.ArrayNum) {
          uVar12 = uVar15;
        }
        if ((uVar12 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        lVar16 = local_258 * 0x10;
        pFVar10 = local_250.AllocatorInstance.Data + lVar16;
        if (*(int *)(pFVar10 + 8) < 2) {
          local_1a8 = &UE::Core::Private::Function::
                       TFunction_OwnedObject<`TraceServices::FTableImportTask::CreateLayout'::`7'::<lambda_1>,0,0>
                       ::_vftable_;
          local_1b8 = UE::Core::Private::Function::
                      TFunctionRefCaller<`TraceServices::FTableImportTask::CreateLayout'::__l7::<lambda_1>,TraceServices::FColumnValueContainer,TraceServices::FImportTableRow_const_&>
                      ::Call;
          local_190 = (undefined ***)0x0;
          uVar12 = 0;
          if ((int)uVar14 < (this->ColumnNames).ArrayNum) {
            uVar12 = uVar15;
          }
          local_1a0 = uVar14;
          if ((uVar12 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
          pFVar10 = (this->ColumnNames).AllocatorInstance.Data;
          if (*(int *)(pFVar10 + lVar16 + 8) == 0) {
            pwVar9 = L"";
          }
          else {
            pwVar9 = *(wchar_t **)(pFVar10 + lVar16);
          }
          ::FString::FString(&local_98,pwVar9);
          local_88 = 2;
          local_84 = 0x80000000;
          local_78 = local_1b8;
          local_50 = 0;
          if (local_1b8 != (code *)0x0) {
            pppuVar8 = &local_1a8;
            if (local_190 != (undefined ***)0x0) {
              pppuVar8 = local_190;
            }
            (*(code *)**pppuVar8)(pppuVar8,&local_68);
          }
          pFVar10 = (pTVar13->Columns).AllocatorInstance.Data;
          if (((pFVar10 <= (FScriptContainerElement *)&local_98) &&
              ((FScriptContainerElement *)&local_98 <
               pFVar10 + (longlong)(pTVar13->Columns).ArrayMax * 0x50)) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar3)) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
          iVar5 = (int)*(longlong *)&(pTVar13->Columns).ArrayNum;
          piVar1 = &(pTVar13->Columns).ArrayMax;
          if (iVar5 == *piVar1) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x1050,&(pTVar13->Columns).AllocatorInstance,piVar1);
          }
          (pTVar13->Columns).ArrayNum = iVar5 + 1;
          pFVar10 = (pTVar13->Columns).AllocatorInstance.Data + (longlong)iVar5 * 0x50;
          *(undefined8 *)pFVar10 = 0;
          *(FScriptContainerElement **)pFVar10 = local_98.Data.AllocatorInstance.Data;
          local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          *(int *)(pFVar10 + 8) = local_98.Data.ArrayNum;
          *(int *)(pFVar10 + 0xc) = local_98.Data.ArrayMax;
          local_98.Data.ArrayNum = 0;
          local_98.Data.ArrayMax = 0;
          *(undefined4 *)(pFVar10 + 0x10) = local_88;
          *(undefined4 *)(pFVar10 + 0x14) = local_84;
          *(code **)(pFVar10 + 0x20) = local_78;
          *(undefined8 *)(pFVar10 + 0x48) = local_50;
          local_50 = 0;
          *(undefined4 *)(pFVar10 + 0x30) = local_68;
          *(undefined4 *)(pFVar10 + 0x34) = uStack_64;
          *(undefined4 *)(pFVar10 + 0x38) = uStack_60;
          *(undefined4 *)(pFVar10 + 0x3c) = uStack_5c;
          *(undefined8 *)(pFVar10 + 0x40) = local_58;
          if (*(longlong *)(pFVar10 + 0x20) == 0) {
            if (local_78 != (code *)0x0) {
              (**(code **)(CONCAT44(uStack_64,local_68) + 0x10))();
            }
          }
          else {
            local_78 = (code *)0x0;
          }
          if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_98.Data.AllocatorInstance.Data);
          }
          if (local_1b8 != (code *)0x0) {
            pppuVar8 = &local_1a8;
            if (local_190 != (undefined ***)0x0) {
              pppuVar8 = local_190;
            }
            (*(code *)(*pppuVar8)[2])();
          }
        }
        else {
          ::FString::FString(&local_1d0,L"inf");
          iVar5 = *(int *)(pFVar10 + 8);
          uVar12 = uVar11;
          if (iVar5 == local_1d0.Data.ArrayNum) {
            if (1 < iVar5) {
              iVar5 = wcscmp(*(wchar_t **)pFVar10,(wchar_t *)local_1d0.Data.AllocatorInstance.Data);
              bVar3 = iVar5 == 0;
              goto LAB_14d44b662;
            }
LAB_14d44b77e:
            bVar3 = true;
          }
          else {
            bVar3 = iVar5 + local_1d0.Data.ArrayNum == 1;
LAB_14d44b662:
            if (bVar3) goto LAB_14d44b77e;
            ::FString::FString(&local_1e0,L"-inf");
            iVar5 = *(int *)(pFVar10 + 8);
            uVar12 = uVar11 | 2;
            if (iVar5 == local_1e0.Data.ArrayNum) {
              if (iVar5 < 2) goto LAB_14d44b77e;
              iVar5 = wcscmp(*(wchar_t **)pFVar10,(wchar_t *)local_1e0.Data.AllocatorInstance.Data);
              bVar3 = iVar5 == 0;
            }
            else {
              bVar3 = iVar5 + local_1e0.Data.ArrayNum == 1;
            }
            if (bVar3) goto LAB_14d44b77e;
            ::FString::FString(&local_1f0,L"infinity");
            iVar5 = *(int *)(pFVar10 + 8);
            uVar12 = uVar11 | 6;
            if (iVar5 == local_1f0.Data.ArrayNum) {
              if (iVar5 < 2) goto LAB_14d44b77e;
              iVar5 = wcscmp(*(wchar_t **)pFVar10,(wchar_t *)local_1f0.Data.AllocatorInstance.Data);
              bVar3 = iVar5 == 0;
            }
            else {
              bVar3 = iVar5 + local_1f0.Data.ArrayNum == 1;
            }
            if (bVar3) goto LAB_14d44b77e;
            ::FString::FString(&local_200,L"-infinity");
            iVar5 = *(int *)(pFVar10 + 8);
            uVar12 = uVar11 | 0xe;
            if (iVar5 == local_200.Data.ArrayNum) {
              if (iVar5 < 2) goto LAB_14d44b77e;
              iVar5 = wcscmp(*(wchar_t **)pFVar10,(wchar_t *)local_200.Data.AllocatorInstance.Data);
              bVar3 = iVar5 == 0;
            }
            else {
              bVar3 = iVar5 + local_200.Data.ArrayNum == 1;
            }
            if (bVar3) goto LAB_14d44b77e;
            ::FString::FString(&local_210,L"nan");
            uVar12 = 0x1e;
            iVar5 = *(int *)(pFVar10 + 8);
            if (iVar5 == local_210.Data.ArrayNum) {
              if (iVar5 < 2) goto LAB_14d44b77e;
              iVar5 = wcscmp(*(wchar_t **)pFVar10,(wchar_t *)local_210.Data.AllocatorInstance.Data);
              bVar3 = iVar5 == 0;
            }
            else {
              bVar3 = iVar5 + local_210.Data.ArrayNum == 1;
            }
            if (bVar3) goto LAB_14d44b77e;
            bVar3 = false;
          }
          if (((uVar12 & 0x10) != 0) &&
             (uVar12 = uVar12 & 0xffffffef,
             local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_210.Data.AllocatorInstance.Data);
          }
          if (((uVar12 & 8) != 0) &&
             (uVar12 = uVar12 & 0xfffffff7,
             local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_200.Data.AllocatorInstance.Data);
          }
          if (((uVar12 & 4) != 0) &&
             (uVar12 = uVar12 & 0xfffffffb,
             local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
          }
          if (((uVar12 & 2) != 0) &&
             (uVar12 = uVar12 & 0xfffffffd,
             local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
          }
          if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
          }
          uVar11 = uVar12;
          if (bVar3) {
            local_168 = &UE::Core::Private::Function::
                         TFunction_OwnedObject<`TraceServices::FTableImportTask::CreateLayout'::`7'::<lambda_1>,0,0>
                         ::_vftable_;
            local_178[0] = UE::Core::Private::Function::
                           TFunctionRefCaller<`TraceServices::FTableImportTask::CreateLayout'::__l7::<lambda_1>,TraceServices::FColumnValueContainer,TraceServices::FImportTableRow_const_&>
                           ::Call;
            local_150 = 0;
            uVar12 = 0;
            if ((int)uVar14 < (this->ColumnNames).ArrayNum) {
              uVar12 = uVar15;
            }
            local_160 = uVar14;
            if ((uVar12 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              uVar4 = (*pcVar2)();
              return (bool)uVar4;
            }
            pTVar13 = local_240;
            pFVar10 = (this->ColumnNames).AllocatorInstance.Data;
            if (*(int *)(pFVar10 + lVar16 + 8) == 0) {
              pwVar9 = L"";
            }
            else {
              pwVar9 = *(wchar_t **)(pFVar10 + lVar16);
            }
            TTableLayout<TraceServices::FImportTableRow>::AddColumn<double>
                      (local_240,pwVar9,
                       (TFunction<TraceServices::FColumnValueContainer___cdecl(TraceServices::FImportTableRow_const_&)>
                        *)local_178,0x80000000);
          }
          else {
            bVar3 = ::FString::IsNumeric((FString *)pFVar10);
            if (bVar3) {
              iVar6 = ::FString::Find((FString *)pFVar10,L".",1,IgnoreCase,FromStart,-1);
              iVar5 = (this->ColumnNames).ArrayNum;
              if (iVar6 == -1) {
                local_108 = &UE::Core::Private::Function::
                             TFunction_OwnedObject<`TraceServices::FTableImportTask::CreateLayout'::`7'::<lambda_1>,0,0>
                             ::_vftable_;
                local_f0 = 0;
                local_118[0] = UE::Core::Private::Function::
                               TFunctionRefCaller<`TraceServices::FTableImportTask::CreateLayout'::__l7::<lambda_1>,TraceServices::FColumnValueContainer,TraceServices::FImportTableRow_const_&>
                               ::Call;
                uVar12 = 0;
                if ((int)uVar14 < iVar5) {
                  uVar12 = uVar15;
                }
                local_100 = uVar14;
                if ((uVar12 == 0) &&
                   (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar3)) {
                  pcVar2 = (code *)swi(3);
                  uVar4 = (*pcVar2)();
                  return (bool)uVar4;
                }
                pTVar13 = local_240;
                pFVar10 = (this->ColumnNames).AllocatorInstance.Data;
                if (*(int *)(pFVar10 + lVar16 + 8) == 0) {
                  pwVar9 = L"";
                }
                else {
                  pwVar9 = *(wchar_t **)(pFVar10 + lVar16);
                }
                TTableLayout<TraceServices::FImportTableRow>::AddColumn<unsigned_int>
                          (local_240,pwVar9,
                           (TFunction<TraceServices::FColumnValueContainer___cdecl(TraceServices::FImportTableRow_const_&)>
                            *)local_118,0x80000000);
              }
              else {
                local_138 = &UE::Core::Private::Function::
                             TFunction_OwnedObject<`TraceServices::FTableImportTask::CreateLayout'::`7'::<lambda_1>,0,0>
                             ::_vftable_;
                local_120 = 0;
                local_148[0] = UE::Core::Private::Function::
                               TFunctionRefCaller<`TraceServices::FTableImportTask::CreateLayout'::__l7::<lambda_1>,TraceServices::FColumnValueContainer,TraceServices::FImportTableRow_const_&>
                               ::Call;
                uVar12 = 0;
                if ((int)uVar14 < iVar5) {
                  uVar12 = uVar15;
                }
                local_130 = uVar14;
                if ((uVar12 == 0) &&
                   (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar3)) {
                  pcVar2 = (code *)swi(3);
                  uVar4 = (*pcVar2)();
                  return (bool)uVar4;
                }
                pTVar13 = local_240;
                pFVar10 = (this->ColumnNames).AllocatorInstance.Data;
                if (*(int *)(pFVar10 + lVar16 + 8) == 0) {
                  pwVar9 = L"";
                }
                else {
                  pwVar9 = *(wchar_t **)(pFVar10 + lVar16);
                }
                TTableLayout<TraceServices::FImportTableRow>::AddColumn<double>
                          (local_240,pwVar9,
                           (TFunction<TraceServices::FColumnValueContainer___cdecl(TraceServices::FImportTableRow_const_&)>
                            *)local_148,0x80000000);
              }
            }
            else {
              local_d8 = &UE::Core::Private::Function::
                          TFunction_OwnedObject<`TraceServices::FTableImportTask::CreateLayout'::`7'::<lambda_1>,0,0>
                          ::_vftable_;
              local_e8[0] = UE::Core::Private::Function::
                            TFunctionRefCaller<`TraceServices::FTableImportTask::CreateLayout'::__l7::<lambda_1>,TraceServices::FColumnValueContainer,TraceServices::FImportTableRow_const_&>
                            ::Call;
              local_c0 = 0;
              uVar12 = 0;
              if ((int)uVar14 < (this->ColumnNames).ArrayNum) {
                uVar12 = uVar15;
              }
              local_d0 = uVar14;
              if ((uVar12 == 0) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar3)) {
                pcVar2 = (code *)swi(3);
                uVar4 = (*pcVar2)();
                return (bool)uVar4;
              }
              pTVar13 = local_240;
              pFVar10 = (this->ColumnNames).AllocatorInstance.Data;
              if (*(int *)(pFVar10 + lVar16 + 8) == 0) {
                pwVar9 = L"";
              }
              else {
                pwVar9 = *(wchar_t **)(pFVar10 + lVar16);
              }
              TTableLayout<TraceServices::FImportTableRow>::AddColumn<wchar_t_const_*>
                        (local_240,pwVar9,
                         (TFunction<TraceServices::FColumnValueContainer___cdecl(TraceServices::FImportTableRow_const_&)>
                          *)local_e8,0);
            }
          }
        }
        uVar14 = uVar14 + 1;
        local_258 = local_258 + 1;
        local_218 = local_218 + 0x10;
      } while ((int)uVar14 < local_250.ArrayNum);
    }
    bVar3 = true;
  }
  else {
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_188,L"TableImportTask",L"ValuesMismatchMsg1",
                        L"Import failed because the number of values on line 1 does not match the number of columns in the header line."
                       );
    AddError(this,pFVar7);
    if (local_188.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_188.TextData.Reference + 0x10))();
    }
    bVar3 = false;
  }
  DestructItems<FString,int>((FString *)local_250.AllocatorInstance.Data,local_250.ArrayNum);
  if (local_250.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_250.AllocatorInstance.Data);
  }
  return bVar3;
}

// ImportTable @ 14d472320

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

ETableImportResult __thiscall TraceServices::FTableImportTask::ImportTable(FTableImportTask *this)

{
  code *pcVar1;
  bool bVar2;
  ETableImportResult EVar3;
  TSharedRef<TraceServices::TImportTable<TraceServices::FImportTableRow>,1> *pTVar4;
  FText *pFVar5;
  FText *pFVar6;
  FTextFormat *pFVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_res8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_118;
  TImportTable<TraceServices::FImportTableRow> *local_108;
  FSharedReferencer<1> local_100;
  code *local_f8;
  TArray<FString,TSizedDefaultAllocator<32>_> **local_f0;
  TSharedRef<TraceServices::TImportTable<TraceServices::FImportTableRow>,1> local_e8;
  FText local_d8;
  FText local_c8;
  FText local_b8;
  FText local_a8;
  FText local_98;
  FText local_88;
  FText local_78;
  FTextFormat local_68;
  FText local_58;
  FTextFormat local_48;
  FText local_38;
  FTextFormat local_28;
  
  pTVar4 = MakeShared<TraceServices::TImportTable<TraceServices::FImportTableRow>,1>(&local_e8);
  local_100.ReferenceController = (pTVar4->SharedReferenceCount).ReferenceController;
  local_108 = pTVar4->Object;
  if (local_100.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_100.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_100.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  EVar3 = ESuccess;
  if (&this->Table !=
      (TSharedPtr<TraceServices::TImportTable<TraceServices::FImportTableRow>,1> *)&local_108) {
    (this->Table).Object = local_108;
    local_108 = (TImportTable<TraceServices::FImportTableRow> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Table).SharedReferenceCount,&local_100);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_100.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e8.SharedReferenceCount.ReferenceController);
  local_res8 = &local_118;
  local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pwVar9 = L"";
  local_f0 = &local_res8;
  local_118.ArrayNum = 0;
  local_118.ArrayMax = 0;
  local_f8 = UE::Core::Private::Function::
             TFunctionRefCaller<`TraceServices::FTableImportTask::LoadFileToStringArray'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
             ::Call;
  if ((this->FilePath).Data.ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(this->FilePath).Data.AllocatorInstance.Data;
  }
  bVar2 = FFileHelper::LoadFileToStringWithLineVisitor
                    (pwVar8,(TFunctionRef<void___cdecl(TStringView<wchar_t>)> *)&local_f8);
  if (bVar2) {
    if (local_118.ArrayNum < 2) {
      pFVar5 = FText::FromString(&local_58,&this->FilePath);
      pFVar6 = FText::AsLocalizable_Advanced_LocText
                         (&local_a8,L"TableImportTask",L"NotEnoughtLinesMsg",
                          L"Import failed because the files did not contain a minimum of 2 lines.");
      pFVar7 = FTextFormat::FTextFormat(&local_48,pFVar6,Default);
      pFVar5 = FText::Format<FText>(&local_b8,pFVar7,pFVar5);
      AddError(this,pFVar5);
      if (local_b8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
      }
      if (local_a8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
      }
    }
    else {
      bVar2 = ::FString::EndsWith(&this->FilePath,L".csv",4,IgnoreCase);
      if (bVar2) {
        pwVar8 = L",";
LAB_14d47253f:
        ::FString::operator=(&this->Separator,pwVar8);
      }
      else {
        bVar2 = ::FString::EndsWith(&this->FilePath,L".tsv",4,IgnoreCase);
        if (bVar2) {
          pwVar8 = L"\t";
          goto LAB_14d47253f;
        }
      }
      if (local_118.ArrayNum < 1) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          EVar3 = (*pcVar1)();
          return EVar3;
        }
      }
      if ((this->Separator).Data.ArrayNum != 0) {
        pwVar9 = (wchar_t *)(this->Separator).Data.AllocatorInstance.Data;
      }
      ::FString::ParseIntoArray
                ((FString *)local_118.AllocatorInstance.Data,&this->ColumnNames,pwVar9,false);
      if ((this->ColumnNames).ArrayNum == 0) {
        pFVar5 = FText::FromString(&local_38,&this->FilePath);
        pFVar6 = FText::AsLocalizable_Advanced_LocText
                           (&local_88,L"TableImportTask",L"NoColumnsMsg",
                            L"Import failed because the file did not contain any columns.");
        pFVar7 = FTextFormat::FTextFormat(&local_28,pFVar6,Default);
        pFVar5 = FText::Format<FText>(&local_98,pFVar7,pFVar5);
        AddError(this,pFVar5);
        if (local_98.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
        }
        if (local_88.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
        }
      }
      else {
        if (local_118.ArrayNum < 2) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            EVar3 = (*pcVar1)();
            return EVar3;
          }
        }
        bVar2 = CreateLayout(this,(FString *)(local_118.AllocatorInstance.Data + 0x10));
        if (bVar2) {
          bVar2 = ParseData(this,&local_118);
          if (bVar2) goto LAB_14d472686;
        }
      }
    }
  }
  else {
    pFVar5 = FText::FromString(&local_78,&this->FilePath);
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_c8,L"TableImportTask",L"FailedToReadMsg",
                        L"Import failed because file {0} could not be read:");
    pFVar7 = FTextFormat::FTextFormat(&local_68,pFVar6,Default);
    pFVar5 = FText::Format<FText>(&local_d8,pFVar7,pFVar5);
    AddError(this,pFVar5);
    if (local_d8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_d8.TextData.Reference + 0x10))();
    }
    if (local_c8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
    }
  }
  EVar3 = EFail;
LAB_14d472686:
  DestructItems<FString,int>((FString *)local_118.AllocatorInstance.Data,local_118.ArrayNum);
  if (local_118.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.AllocatorInstance.Data);
  }
  return EVar3;
}

// LoadFileToStringArray @ 14d476160

bool __thiscall
TraceServices::FTableImportTask::LoadFileToStringArray
          (FTableImportTask *this,FString *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  bool bVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_res8 [4];
  code *local_18;
  TArray<FString,TSizedDefaultAllocator<32>_> **local_10;
  
  local_10 = local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`TraceServices::FTableImportTask::LoadFileToStringArray'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
             ::Call;
  local_res8[0] = param_2;
  if ((this->FilePath).Data.ArrayNum != 0) {
    bVar1 = FFileHelper::LoadFileToStringWithLineVisitor
                      ((wchar_t *)(this->FilePath).Data.AllocatorInstance.Data,
                       (TFunctionRef<void___cdecl(TStringView<wchar_t>)> *)&local_18);
    return bVar1;
  }
  bVar1 = FFileHelper::LoadFileToStringWithLineVisitor
                    (L"",(TFunctionRef<void___cdecl(TStringView<wchar_t>)> *)&local_18);
  return bVar1;
}

// ParseData @ 14d47ba10

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
TraceServices::FTableImportTask::ParseData
          (FTableImportTask *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  longlong *plVar1;
  int *piVar2;
  TImportTable<TraceServices::FImportTableRow> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  undefined1 uVar11;
  bool bVar12;
  bool bVar13;
  int iVar14;
  int iVar15;
  undefined8 uVar16;
  longlong lVar17;
  FText *pFVar18;
  FTextFormat *pFVar19;
  TSharedRef<TraceServices::TImportTable<TraceServices::FImportTableRow>,1> *pTVar20;
  uint uVar21;
  FStringStore *pFVar22;
  wchar_t *pwVar23;
  void *pvVar24;
  FScriptContainerElement *this_00;
  uint uVar25;
  ForAnyElementType FVar26;
  longlong lVar27;
  TTableLayout<TraceServices::FImportTableRow> *pTVar28;
  FImportTableRow *this_01;
  uint uVar29;
  ETableColumnType EVar30;
  bool bVar31;
  double dVar32;
  uint local_res20;
  ForAnyElementType local_1a8;
  int local_1a0 [2];
  TArray<FString,TSizedDefaultAllocator<32>_> local_198;
  TTableLayout<TraceServices::FImportTableRow> *local_188;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_180;
  FString local_170;
  FString local_160;
  undefined4 local_150;
  undefined4 uStack_14c;
  FString local_148;
  FString local_138;
  FString local_128;
  FTextFormat local_118;
  FText local_108;
  FFormatArgumentValue local_f8;
  TSharedRef<TraceServices::TImportTable<TraceServices::FImportTableRow>,1> local_d8;
  TImportTable<TraceServices::FImportTableRow> *local_c8;
  TReferenceControllerBase<1> *pTStack_c0;
  FText local_b8;
  TSharedRef<TraceServices::TImportTable<TraceServices::FImportTableRow>,1> local_a8;
  TImportTable<TraceServices::FImportTableRow> *local_98;
  TReferenceControllerBase<1> *pTStack_90;
  FTextFormat local_88 [4];
  
  bVar6 = false;
  bVar13 = false;
  if (((this->Table).Object == (TImportTable<TraceServices::FImportTableRow> *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    uVar11 = (*pcVar5)();
    return (bool)uVar11;
  }
  iVar15 = (this->ColumnNames).ArrayNum;
  pTVar28 = (TTableLayout<TraceServices::FImportTableRow> *)&((this->Table).Object)->_padding_;
  bVar10 = false;
  local_1a8.Data = (FScriptContainerElement *)0x0;
  local_1a0[0] = 0;
  local_1a0[1] = 0;
  local_188 = pTVar28;
  iVar14 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (1,1,iVar15,&local_1a8,local_1a0,local_1a0 + 1);
  memset(local_1a8.Data + iVar14,0,(longlong)iVar15);
  dVar9 = __real_7ff8000000000000;
  dVar8 = __real_fff0000000000000;
  dVar7 = __real_7ff0000000000000;
  iVar15 = param_1->ArrayNum;
  local_res20 = 1;
  if (1 < iVar15) {
    do {
      local_198.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_198.ArrayNum = 0;
      local_198.ArrayMax = 0;
      uVar29 = 0;
      if ((int)local_res20 < iVar15) {
        uVar29 = ~local_res20 >> 0x1f;
      }
      if ((uVar29 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar5 = (code *)swi(3);
        uVar11 = (*pcVar5)();
        return (bool)uVar11;
      }
      SplitLineIntoValues(this,(FString *)
                               ((param_1->AllocatorInstance).Data +
                               (longlong)(int)local_res20 * 0x10),&local_198);
      if (local_198.ArrayNum != (this->ColumnNames).ArrayNum) {
        pFVar18 = FText::AsLocalizable_Advanced_LocText
                            (&local_b8,L"TableImportTask",L"ValuesMismatchMsg2",
                             L"Import failed because the number of values on line {0} does not match the number of columns in the header line."
                            );
        pFVar19 = FTextFormat::FTextFormat(local_88,pFVar18,Default);
        local_f8.Type = Int;
        local_f8.TextValue.field0_0x0.TypedValue.TextData.Reference =
             (TRefCountPtr<ITextData>)(ITextData *)0x0;
        local_f8.field1_0x8 = (FFormatArgumentValue_u_8)(longlong)(int)(local_res20 + 1);
        local_f8.TextValue.field0_0x0.TypedValue.Flags = 0;
        local_180.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_180.ArrayNum = 1;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,1,0,&local_180.AllocatorInstance,1,&local_180.ArrayMax);
        ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                  (local_180.AllocatorInstance.Data,&local_f8,1);
        local_118.TextFormatData.Object = (pFVar19->TextFormatData).Object;
        local_118.TextFormatData.SharedReferenceCount.ReferenceController =
             (pFVar19->TextFormatData).SharedReferenceCount.ReferenceController;
        if (local_118.TextFormatData.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_118.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount
               = (atomic<int>)
                 ((int)(local_118.TextFormatData.SharedReferenceCount.ReferenceController)->
                       SharedReferenceCount + 1);
          UNLOCK();
        }
        FText::Format(&local_108,&local_118,&local_180);
        DestructItems<FFormatArgumentValue,int>
                  ((FFormatArgumentValue *)local_180.AllocatorInstance.Data,local_180.ArrayNum);
        if ((FFormatArgumentValue *)local_180.AllocatorInstance.Data != (FFormatArgumentValue *)0x0)
        {
          FMemory::Free(local_180.AllocatorInstance.Data);
        }
        if (local_f8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)
                       *(ITextData *)local_f8.TextValue.field0_0x0.TypedValue.TextData.Reference +
                      0x10))();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((pFVar19->TextFormatData).SharedReferenceCount.ReferenceController);
        AddError(this,&local_108);
        if (local_108.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_108.TextData.Reference + 0x10))();
        }
        if (local_b8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
        }
        bVar13 = false;
LAB_14d47c6bc:
        DestructItems<FString,int>((FString *)local_198.AllocatorInstance.Data,local_198.ArrayNum);
        if (local_198.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_198.AllocatorInstance.Data);
        }
        goto LAB_14d47c78e;
      }
      if (((this->Table).Object == (TImportTable<TraceServices::FImportTableRow> *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar12)) {
        pcVar5 = (code *)swi(3);
        uVar11 = (*pcVar5)();
        return (bool)uVar11;
      }
      pTVar3 = (this->Table).Object;
      if ((pTVar3->_padding_ == 0) || (*(longlong *)(pTVar3->_padding_ + 8) == pTVar3->_padding_)) {
        iVar15 = (int)pTVar3->_padding_;
        piVar2 = (int *)((longlong)&pTVar3->_padding_ + 4);
        if (iVar15 == *piVar2) {
          iVar15 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,(ForAnyElementType *)&pTVar3->_padding_,piVar2);
          *(int *)&pTVar3->_padding_ = iVar15;
        }
        pvVar24 = (void *)((longlong)iVar15 * 0x10 + pTVar3->_padding_);
        *(int *)&pTVar3->_padding_ = iVar15 + 1;
        DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FImportTableRow>,int>
                  (pvVar24,1);
        pTVar3->_padding_ = (longlong)pvVar24;
        pTVar3->_padding_ = pTVar3->_padding_;
        uVar16 = (**(code **)(*(longlong *)pTVar3->_padding_ + 8))
                           ((longlong *)pTVar3->_padding_,pTVar3->_padding_ << 4);
        *(undefined8 *)pTVar3->_padding_ = uVar16;
      }
      pTVar3->_padding_ = pTVar3->_padding_ + 1;
      this_01 = (FImportTableRow *)
                (((longlong *)pTVar3->_padding_)[1] * 0x10 + *(longlong *)pTVar3->_padding_);
      (this_01->Values).ArrayNum = 0;
      (this_01->Values).ArrayMax = 0;
      (this_01->Values).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      plVar1 = (longlong *)(pTVar3->_padding_ + 8);
      *plVar1 = *plVar1 + 1;
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,local_198.ArrayNum,(ForAnyElementType *)this_01,&(this_01->Values).ArrayNum,
                 &(this_01->Values).ArrayMax);
      uVar29 = 0;
      lVar27 = 0;
      if (0 < local_198.ArrayNum) {
        do {
          iVar15 = (**(code **)(local_188->_padding_ + 0x18))(local_188,lVar27);
          uVar25 = ~uVar29 >> 0x1f;
          uVar21 = 0;
          if ((int)uVar29 < local_198.ArrayNum) {
            uVar21 = uVar25;
          }
          if ((uVar21 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar5 = (code *)swi(3);
            uVar11 = (*pcVar5)();
            return (bool)uVar11;
          }
          this_00 = local_198.AllocatorInstance.Data + lVar27 * 0x10;
          if (iVar15 == 5) {
            uVar21 = 0;
            if ((int)uVar29 < local_1a0[0]) {
              uVar21 = uVar25;
            }
            if ((uVar21 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar5 = (code *)swi(3);
              uVar11 = (*pcVar5)();
              return (bool)uVar11;
            }
            local_1a8.Data[lVar27] = (FScriptContainerElement)0x1;
            if (((this->Table).Object == (TImportTable<TraceServices::FImportTableRow> *)0x0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar12)) {
              pcVar5 = (code *)swi(3);
              uVar11 = (*pcVar5)();
              return (bool)uVar11;
            }
            pFVar22 = &((this->Table).Object)->StringStore;
            if (*(int *)(this_00 + 8) == 0) {
              pwVar23 = L"";
            }
            else {
              pwVar23 = *(wchar_t **)this_00;
            }
            uVar16 = (**(code **)(pFVar22->_padding_ + 0x20))(pFVar22,pwVar23);
            uVar21 = 0;
            if ((int)uVar29 < (this_01->Values).ArrayNum) {
              uVar21 = ~uVar29 >> 0x1f;
            }
            if ((uVar21 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar5 = (code *)swi(3);
              uVar11 = (*pcVar5)();
              return (bool)uVar11;
            }
            *(undefined8 *)((this_01->Values).AllocatorInstance.Data + lVar27 * 8) = uVar16;
            goto LAB_14d47c351;
          }
          if (iVar15 == 4) {
            if (*(int *)(this_00 + 8) < 2) {
              local_150 = 0;
              uVar21 = 0;
              if ((int)uVar29 < (this_01->Values).ArrayNum) {
                uVar21 = uVar25;
              }
              if ((uVar21 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar5 = (code *)swi(3);
                uVar11 = (*pcVar5)();
                return (bool)uVar11;
              }
              *(ulonglong *)((this_01->Values).AllocatorInstance.Data + lVar27 * 8) =
                   CONCAT44(uStack_14c,local_150);
            }
            else {
              bVar12 = ::FString::IsNumeric((FString *)this_00);
              if (bVar12) {
                uVar21 = 0;
                if ((int)uVar29 < local_1a0[0]) {
                  uVar21 = uVar25;
                }
                if ((uVar21 == 0) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar12)) {
                  pcVar5 = (code *)swi(3);
                  uVar11 = (*pcVar5)();
                  return (bool)uVar11;
                }
                local_1a8.Data[lVar27] = (FScriptContainerElement)0x1;
                if (*(int *)(this_00 + 8) == 0) {
                  pwVar23 = L"";
                }
                else {
                  pwVar23 = *(wchar_t **)this_00;
                }
                dVar32 = wcstod(pwVar23,(wchar_t **)0x0);
                FImportTableRow::SetValue<double>(this_01,(longlong)(int)uVar29,dVar32);
              }
              else {
                ::FString::FString(&local_148,L"inf");
                iVar15 = *(int *)(this_00 + 8);
                bVar12 = bVar13;
                if (iVar15 == local_148.Data.ArrayNum) {
                  FVar26.Data = local_170.Data.AllocatorInstance.Data;
                  if (1 < iVar15) {
                    iVar15 = wcscmp(*(wchar_t **)this_00,
                                    (wchar_t *)local_148.Data.AllocatorInstance.Data);
                    bVar13 = iVar15 == 0;
                    goto LAB_14d47bf9b;
                  }
LAB_14d47bff1:
                  bVar13 = bVar12;
                  bVar12 = true;
                }
                else {
                  bVar13 = iVar15 + local_148.Data.ArrayNum == 1;
LAB_14d47bf9b:
                  FVar26.Data = local_170.Data.AllocatorInstance.Data;
                  if (bVar13) goto LAB_14d47bff1;
                  ::FString::FString(&local_170,L"infinity");
                  FVar26.Data = local_170.Data.AllocatorInstance.Data;
                  bVar13 = true;
                  iVar15 = *(int *)(this_00 + 8);
                  bVar12 = true;
                  if (iVar15 == local_170.Data.ArrayNum) {
                    if (iVar15 < 2) goto LAB_14d47bff1;
                    iVar15 = wcscmp(*(wchar_t **)this_00,
                                    (wchar_t *)local_170.Data.AllocatorInstance.Data);
                    bVar31 = iVar15 == 0;
                  }
                  else {
                    bVar31 = iVar15 + local_170.Data.ArrayNum == 1;
                  }
                  if (bVar31) goto LAB_14d47bff1;
                  bVar12 = false;
                }
                if ((bVar13) && (bVar13 = false, FVar26.Data != (FScriptContainerElement *)0x0)) {
                  FMemory::Free(FVar26.Data);
                }
                if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_148.Data.AllocatorInstance.Data);
                }
                if (bVar12) {
                  uVar21 = 0;
                  if ((int)uVar29 < local_1a0[0]) {
                    uVar21 = ~uVar29 >> 0x1f;
                  }
                  if ((uVar21 == 0) &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar12)) {
                    pcVar5 = (code *)swi(3);
                    uVar11 = (*pcVar5)();
                    return (bool)uVar11;
                  }
                  local_1a8.Data[lVar27] = (FScriptContainerElement)0x1;
                  FImportTableRow::SetValue<double>(this_01,(longlong)(int)uVar29,dVar7);
                }
                else {
                  ::FString::FString(&local_138,L"-inf");
                  iVar15 = *(int *)(this_00 + 8);
                  if (iVar15 == local_138.Data.ArrayNum) {
                    FVar26.Data = local_160.Data.AllocatorInstance.Data;
                    if (1 < iVar15) {
                      iVar15 = wcscmp(*(wchar_t **)this_00,
                                      (wchar_t *)local_138.Data.AllocatorInstance.Data);
                      bVar12 = iVar15 == 0;
                      goto LAB_14d47c0c4;
                    }
LAB_14d47c117:
                    bVar12 = true;
                  }
                  else {
                    bVar12 = iVar15 + local_138.Data.ArrayNum == 1;
LAB_14d47c0c4:
                    FVar26.Data = local_160.Data.AllocatorInstance.Data;
                    if (bVar12) goto LAB_14d47c117;
                    ::FString::FString(&local_160,L"-infinity");
                    FVar26.Data = local_160.Data.AllocatorInstance.Data;
                    bVar6 = true;
                    iVar15 = *(int *)(this_00 + 8);
                    if (iVar15 == local_160.Data.ArrayNum) {
                      if (iVar15 < 2) goto LAB_14d47c117;
                      iVar15 = wcscmp(*(wchar_t **)this_00,
                                      (wchar_t *)local_160.Data.AllocatorInstance.Data);
                      bVar12 = iVar15 == 0;
                    }
                    else {
                      bVar12 = iVar15 + local_160.Data.ArrayNum == 1;
                    }
                    if (bVar12) goto LAB_14d47c117;
                    bVar12 = false;
                  }
                  if ((bVar6) && (bVar6 = false, FVar26.Data != (FScriptContainerElement *)0x0)) {
                    FMemory::Free(FVar26.Data);
                  }
                  if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_138.Data.AllocatorInstance.Data);
                  }
                  if (bVar12) {
                    uVar21 = 0;
                    if ((int)uVar29 < local_1a0[0]) {
                      uVar21 = ~uVar29 >> 0x1f;
                    }
                    if ((uVar21 == 0) &&
                       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar12)) {
                      pcVar5 = (code *)swi(3);
                      uVar11 = (*pcVar5)();
                      return (bool)uVar11;
                    }
                    local_1a8.Data[lVar27] = (FScriptContainerElement)0x1;
                    FImportTableRow::SetValue<double>(this_01,(longlong)(int)uVar29,dVar8);
                  }
                  else {
                    ::FString::FString(&local_128,L"nan");
                    FVar26.Data = local_128.Data.AllocatorInstance.Data;
                    iVar15 = *(int *)(this_00 + 8);
                    if (iVar15 == local_128.Data.ArrayNum) {
                      if (iVar15 < 2) {
                        bVar12 = true;
                      }
                      else {
                        iVar15 = wcscmp(*(wchar_t **)this_00,
                                        (wchar_t *)local_128.Data.AllocatorInstance.Data);
                        bVar12 = iVar15 == 0;
                      }
                    }
                    else {
                      bVar12 = iVar15 + local_128.Data.ArrayNum == 1;
                    }
                    if (FVar26.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(FVar26.Data);
                    }
                    if (!bVar12) goto LAB_14d47c4cd;
                    uVar21 = 0;
                    if ((int)uVar29 < local_1a0[0]) {
                      uVar21 = ~uVar29 >> 0x1f;
                    }
                    if ((uVar21 == 0) &&
                       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar12)) {
                      pcVar5 = (code *)swi(3);
                      uVar11 = (*pcVar5)();
                      return (bool)uVar11;
                    }
                    local_1a8.Data[lVar27] = (FScriptContainerElement)0x1;
                    FImportTableRow::SetValue<double>(this_01,(longlong)(int)uVar29,dVar9);
                  }
                }
              }
            }
          }
          else if (iVar15 == 2) {
            if (1 < *(int *)(this_00 + 8)) {
              bVar12 = ::FString::IsNumeric((FString *)this_00);
              if (bVar12) {
                iVar15 = ::FString::Find((FString *)this_00,L".",1,IgnoreCase,FromStart,-1);
                if (iVar15 == -1) {
                  uVar21 = 0;
                  if ((int)uVar29 < local_1a0[0]) {
                    uVar21 = ~uVar29 >> 0x1f;
                  }
                  if ((uVar21 == 0) &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar12)) {
                    pcVar5 = (code *)swi(3);
                    uVar11 = (*pcVar5)();
                    return (bool)uVar11;
                  }
                  local_1a8.Data[lVar27] = (FScriptContainerElement)0x1;
                  if (*(int *)(this_00 + 8) == 0) {
                    pwVar23 = L"";
                  }
                  else {
                    pwVar23 = *(wchar_t **)this_00;
                  }
                  lVar17 = _wtoi64(pwVar23);
                  FImportTableRow::SetValue<__int64>(this_01,(longlong)(int)uVar29,lVar17);
                  goto LAB_14d47c351;
                }
                EVar30 = TableColumnType_Double;
              }
              else {
LAB_14d47c4cd:
                EVar30 = TableColumnType_CString;
              }
              pTVar28 = local_188;
              TTableLayout<TraceServices::FImportTableRow>::SetColumnType
                        (local_188,(longlong)(int)uVar29,EVar30);
              pTVar20 = MakeShared<TraceServices::TImportTable<TraceServices::FImportTableRow>,1>
                                  (&local_d8);
              pTVar4 = (pTVar20->SharedReferenceCount).ReferenceController;
              pTVar3 = pTVar20->Object;
              if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
                UNLOCK();
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_d8.SharedReferenceCount.ReferenceController);
              if ((pTVar3 == (TImportTable<TraceServices::FImportTableRow> *)0x0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar13)) {
                pcVar5 = (code *)swi(3);
                uVar11 = (*pcVar5)();
                return (bool)uVar11;
              }
              TTableLayout<TraceServices::FImportTableRow>::operator=
                        ((TTableLayout<TraceServices::FImportTableRow> *)&pTVar3->_padding_,pTVar28)
              ;
              if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
                UNLOCK();
              }
              local_c8 = (this->Table).Object;
              pTStack_c0 = (this->Table).SharedReferenceCount.ReferenceController;
              (this->Table).Object = pTVar3;
              (this->Table).SharedReferenceCount.ReferenceController = pTVar4;
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTStack_c0);
              ParseData(this,param_1);
              bVar13 = true;
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar4);
              goto LAB_14d47c6bc;
            }
            FImportTableRow::SetValue<int>(this_01,(longlong)(int)uVar29,0);
          }
LAB_14d47c351:
          uVar29 = uVar29 + 1;
          lVar27 = lVar27 + 1;
        } while ((int)uVar29 < local_198.ArrayNum);
      }
      DestructItems<FString,int>((FString *)local_198.AllocatorInstance.Data,local_198.ArrayNum);
      if (local_198.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_198.AllocatorInstance.Data);
      }
      local_res20 = local_res20 + 1;
      iVar15 = param_1->ArrayNum;
      pTVar28 = local_188;
    } while ((int)local_res20 < iVar15);
  }
  if (((this->Table).Object == (TImportTable<TraceServices::FImportTableRow> *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar13)) {
    pcVar5 = (code *)swi(3);
    uVar11 = (*pcVar5)();
    return (bool)uVar11;
  }
  pFVar22 = &((this->Table).Object)->StringStore;
  (**(code **)(pFVar22->_padding_ + 0x20))(pFVar22,L"");
  uVar29 = 0;
  iVar15 = local_1a0[0];
  if (0 < local_1a0[0]) {
    do {
      uVar21 = 0;
      if ((int)uVar29 < iVar15) {
        uVar21 = ~uVar29 >> 0x1f;
      }
      if (uVar21 == 0) {
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar13) {
          pcVar5 = (code *)swi(3);
          uVar11 = (*pcVar5)();
          return (bool)uVar11;
        }
        iVar15 = local_1a0[0];
      }
      if (local_1a8.Data[(int)uVar29] == (FScriptContainerElement)0x0) {
        uVar21 = 0;
        if ((int)uVar29 < (pTVar28->Columns).ArrayNum) {
          uVar21 = ~uVar29 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar5 = (code *)swi(3);
          uVar11 = (*pcVar5)();
          return (bool)uVar11;
        }
        bVar10 = true;
        *(undefined4 *)
         ((pTVar28->Columns).AllocatorInstance.Data + (longlong)(int)uVar29 * 0x50 + 0x10) = 5;
        iVar15 = local_1a0[0];
      }
      uVar29 = uVar29 + 1;
    } while ((int)uVar29 < iVar15);
    if (bVar10) {
      pTVar20 = MakeShared<TraceServices::TImportTable<TraceServices::FImportTableRow>,1>(&local_a8)
      ;
      pTVar4 = (pTVar20->SharedReferenceCount).ReferenceController;
      pTVar3 = pTVar20->Object;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_a8.SharedReferenceCount.ReferenceController);
      if ((pTVar3 == (TImportTable<TraceServices::FImportTableRow> *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar13)) {
        pcVar5 = (code *)swi(3);
        uVar11 = (*pcVar5)();
        return (bool)uVar11;
      }
      TTableLayout<TraceServices::FImportTableRow>::operator=
                ((TTableLayout<TraceServices::FImportTableRow> *)&pTVar3->_padding_,pTVar28);
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_98 = (this->Table).Object;
      pTStack_90 = (this->Table).SharedReferenceCount.ReferenceController;
      (this->Table).Object = pTVar3;
      (this->Table).SharedReferenceCount.ReferenceController = pTVar4;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_90);
      ParseData(this,param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    }
  }
  bVar13 = true;
LAB_14d47c78e:
  if (local_1a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.Data);
  }
  return bVar13;
}

// ParseHeader @ 14d47c800

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
TraceServices::FTableImportTask::ParseHeader(FTableImportTask *this,FString *param_1)

{
  FText *pFVar1;
  FText *pFVar2;
  FTextFormat *pFVar3;
  wchar_t *pwVar4;
  FText local_48;
  FText local_38;
  FText local_28;
  FTextFormat local_18;
  
  if ((this->Separator).Data.ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(this->Separator).Data.AllocatorInstance.Data;
  }
  ::FString::ParseIntoArray(param_1,&this->ColumnNames,pwVar4,false);
  if ((this->ColumnNames).ArrayNum == 0) {
    pFVar1 = FText::FromString(&local_28,&this->FilePath);
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       (&local_38,L"TableImportTask",L"NoColumnsMsg",
                        L"Import failed because the file did not contain any columns.");
    pFVar3 = FTextFormat::FTextFormat(&local_18,pFVar2,Default);
    pFVar1 = FText::Format<FText>(&local_48,pFVar3,pFVar1);
    AddError(this,pFVar1);
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
    }
    return false;
  }
  return true;
}

// SplitLineIntoValues @ 14d48bde0

/* WARNING: Removing unreachable block (ram,0x00014d48c0b2) */
/* WARNING: Removing unreachable block (ram,0x00014d48c1bb) */

void __thiscall
TraceServices::FTableImportTask::SplitLineIntoValues
          (FTableImportTask *this,FString *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FString *pFVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  bool bVar13;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  uVar9 = 0;
  bVar13 = false;
  uVar11 = uVar9;
  uVar12 = uVar9;
  bVar3 = false;
  do {
    while( true ) {
      iVar5 = (param_1->Data).ArrayNum;
      iVar4 = iVar5 + -1;
      if (iVar5 == 0) {
        iVar4 = 0;
      }
      iVar8 = (int)uVar9;
      iVar10 = (int)uVar11;
      if (iVar4 <= iVar8) {
        pFVar6 = ::FString::Mid(param_1,&local_38,iVar10,iVar8 - iVar10);
        ::FString::TrimQuotes(pFVar6,&local_58,(bool *)0x0);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        pFVar7 = (param_2->AllocatorInstance).Data;
        if (((pFVar7 <= (FScriptContainerElement *)&local_58) &&
            ((FScriptContainerElement *)&local_58 < pFVar7 + (longlong)param_2->ArrayMax * 0x10)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar5 = param_2->ArrayNum;
        if (iVar5 == param_2->ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        param_2->ArrayNum = iVar5 + 1;
        pFVar7 = (param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
        *(undefined8 *)pFVar7 = 0;
        *(FScriptContainerElement **)pFVar7 = local_58.Data.AllocatorInstance.Data;
        *(int *)(pFVar7 + 8) = local_58.Data.ArrayNum;
        *(int *)(pFVar7 + 0xc) = local_58.Data.ArrayMax;
        return;
      }
      if ((((iVar8 < 0) || (iVar5 == 0)) || (iVar5 + -1 <= iVar8)) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                             ,0x113,
                             L"String index out of bounds: Index %i from a string with a length of %i"
                            ), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(short *)((param_1->Data).AllocatorInstance.Data + uVar12) != 0x22) break;
      if (iVar8 != 0) {
        if (iVar8 + -1 < 0) {
code_r0x00014d48beb5:
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                             ,0x113,
                             L"String index out of bounds: Index %i from a string with a length of %i"
                            );
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        else {
          iVar5 = (param_1->Data).ArrayNum;
          iVar4 = iVar5 + -1;
          if (iVar5 == 0) {
            iVar4 = 0;
          }
          if (iVar4 <= iVar8 + -1) goto code_r0x00014d48beb5;
        }
        if (*(short *)((param_1->Data).AllocatorInstance.Data + (uVar12 - 2)) == 0x5c) break;
      }
      bVar13 = bVar13 == false;
      uVar9 = (ulonglong)(iVar8 + 1);
      uVar12 = uVar12 + 2;
      bVar3 = bVar13;
    }
    if (!bVar3) {
      iVar5 = (this->Separator).Data.ArrayNum;
      iVar4 = iVar5 + -1;
      if (iVar5 == 0) {
        iVar4 = 0;
      }
      if ((iVar4 < 1) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                             ,0x107,
                             L"String index out of bounds: Index %i from a string with a length of %i"
                            ), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar7 = (this->Separator).Data.AllocatorInstance.Data;
      if (iVar8 < 0) {
code_r0x00014d48bf86:
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                           ,0x113,
                           L"String index out of bounds: Index %i from a string with a length of %i"
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      else {
        iVar5 = (param_1->Data).ArrayNum;
        iVar4 = iVar5 + -1;
        if (iVar5 == 0) {
          iVar4 = 0;
        }
        if (iVar4 <= iVar8) goto code_r0x00014d48bf86;
      }
      if (*(short *)((param_1->Data).AllocatorInstance.Data + uVar12) == *(short *)pFVar7) {
        pFVar6 = ::FString::Mid(param_1,&local_48,iVar10,iVar8 - iVar10);
        ::FString::TrimQuotes(pFVar6,&local_68,(bool *)0x0);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        pFVar7 = (param_2->AllocatorInstance).Data;
        if (((pFVar7 <= (FScriptContainerElement *)&local_68) &&
            ((FScriptContainerElement *)&local_68 < pFVar7 + (longlong)param_2->ArrayMax * 0x10)) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar5 = param_2->ArrayNum;
        if (iVar5 == param_2->ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        param_2->ArrayNum = iVar5 + 1;
        uVar11 = (ulonglong)(iVar8 + 1);
        pFVar7 = (param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
        *(undefined8 *)pFVar7 = 0;
        *(FScriptContainerElement **)pFVar7 = local_68.Data.AllocatorInstance.Data;
        local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(pFVar7 + 8) = local_68.Data.ArrayNum;
        *(int *)(pFVar7 + 0xc) = local_68.Data.ArrayMax;
        local_68.Data.ArrayNum = 0;
        local_68.Data.ArrayMax = 0;
      }
    }
    uVar9 = (ulonglong)(iVar8 + 1);
    uVar12 = uVar12 + 2;
  } while( true );
}

