// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 12

// CreateVariadicReadTable @ 148eb3050

TArray<unsigned_int,TSizedDefaultAllocator<32>_> * __thiscall
NDIDataTableLocal::FInstanceData_GameThread::CreateVariadicReadTable
          (FInstanceData_GameThread *this,
          TArray<unsigned_int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FVMExternalFunctionBindingInfo *param_1)

{
  int *piVar1;
  int *piVar2;
  FBuiltDataTable *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar8;
  FNiagaraTypeDefinition *pFVar9;
  UClass *pUVar10;
  UStruct *pUVar11;
  UScriptStruct *pUVar12;
  int iVar13;
  ulonglong uVar14;
  ForElementType<TTuple<FNiagaraVariableBase,unsigned_int>_> FVar15;
  ulonglong uVar16;
  ForElementType<TTuple<FNiagaraVariableBase,unsigned_int>_> FVar17;
  uint uVar18;
  FScriptContainerElement *this_00;
  FScriptContainerElement *pFVar19;
  undefined1 local_res10 [8];
  FVMExternalFunctionBindingInfo *local_res18;
  undefined1 local_res20 [8];
  int local_58;
  uint local_54;
  FScriptContainerElement *local_50;
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  uVar18 = (param_1->VariadicOutputs).ArrayNum;
  local_res18 = param_1;
  if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
  }
  if (0 < (int)uVar18) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar18,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  local_54 = (param_1->VariadicOutputs).ArrayNum;
  uVar14 = (ulonglong)(int)local_54;
  pFVar19 = (param_1->VariadicOutputs).AllocatorInstance.Data;
  local_50 = pFVar19 + uVar14 * 0xc;
  this_00 = pFVar19 + 8;
  do {
    pFVar4 = local_50;
    if ((param_1->VariadicOutputs).ArrayNum != (int)uVar14) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FNiagaraVariableBase_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar19 == pFVar4) {
      return __return_storage_ptr__;
    }
    if (((this->BuiltDataTable).Object == (FBuiltDataTable *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar8;
    }
    pFVar3 = (this->BuiltDataTable).Object;
    FVar17 = (pFVar3->Columns).AllocatorInstance.SecondaryData;
    FVar15 = (ForElementType<TTuple<FNiagaraVariableBase,unsigned_int>_>)&pFVar3->Columns;
    piVar2 = &(pFVar3->Columns).ArrayNum;
    iVar7 = *piVar2;
    if (FVar17 != (ForElementType<TTuple<FNiagaraVariableBase,unsigned_int>_>)0x0) {
      FVar15 = FVar17;
    }
    FVar17 = (ForElementType<TTuple<FNiagaraVariableBase,unsigned_int>_>)
             ((longlong)FVar15 + (longlong)iVar7 * 0x10);
    while( true ) {
      if (*piVar2 != iVar7) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<TTuple<FNiagaraVariableBase,unsigned_int>_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      if (FVar15 == FVar17) {
        iVar7 = -1;
        goto LAB_148eb31a6;
      }
      if ((*(longlong *)FVar15 == *(longlong *)pFVar19) &&
         (*(int *)((longlong)FVar15 + 8) == *(int *)&this_00->field_0x0)) break;
      FVar15 = (ForElementType<TTuple<FNiagaraVariableBase,unsigned_int>_>)((longlong)FVar15 + 0x10)
      ;
    }
    iVar7 = *(int *)((longlong)FVar15 + 0xc);
LAB_148eb31a6:
    pFVar9 = FNiagaraTypeDefinitionHandle::Resolve((FNiagaraTypeDefinitionHandle *)this_00);
    uVar18 = (uint)(ushort)pFVar9->Size;
    if (pFVar9->Size == 0xffff) {
      if (((pFVar9->ClassStructOrEnum).field0_0x0.DebugPtr == (UObject *)0x0) ||
         (pUVar10 = FNiagaraTypeDefinition::GetClass(pFVar9), pUVar10 != (UClass *)0x0)) {
        pFVar9->Size = 0;
        uVar18 = 0;
      }
      else {
        pUVar11 = FNiagaraTypeDefinition::GetStruct(pFVar9);
        pUVar12 = CastChecked<UScriptStruct,UStruct>(pUVar11);
        iVar13 = (int)*(short *)((longlong)&pUVar12->_padding_ + 4);
        uVar18 = iVar13 + -1 + (int)pUVar12->_padding_ & -iVar13;
        if ((0x7fff < (int)uVar18) &&
           (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_2309485622517038180>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraTypes.h"
                               ,0x39c,"StructSize <= TNumericLimits<int16>::Max()"), bVar6)) {
          pcVar5 = (code *)swi(3);
          pTVar8 = (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
          return pTVar8;
        }
        pFVar9->Size = (short)uVar18;
      }
    }
    uVar14 = (ulonglong)(longlong)(short)uVar18 >> 2;
    pFVar9 = FNiagaraTypeDefinitionHandle::Resolve((FNiagaraTypeDefinitionHandle *)this_00);
    uVar18 = (uint)(ushort)pFVar9->Size;
    if (pFVar9->Size == 0xffff) {
      if (((pFVar9->ClassStructOrEnum).field0_0x0.DebugPtr == (UObject *)0x0) ||
         (pUVar10 = FNiagaraTypeDefinition::GetClass(pFVar9), pUVar10 != (UClass *)0x0)) {
        pFVar9->Size = 0;
        uVar18 = 0;
      }
      else {
        pUVar11 = FNiagaraTypeDefinition::GetStruct(pFVar9);
        pUVar12 = CastChecked<UScriptStruct,UStruct>(pUVar11);
        iVar13 = (int)*(short *)((longlong)&pUVar12->_padding_ + 4);
        uVar18 = iVar13 + -1 + (int)pUVar12->_padding_ & -iVar13;
        if ((0x7fff < (int)uVar18) &&
           (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_2309485622517038180>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraTypes.h"
                               ,0x39c,"StructSize <= TNumericLimits<int16>::Max()"), bVar6)) {
          pcVar5 = (code *)swi(3);
          pTVar8 = (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
          return pTVar8;
        }
        pFVar9->Size = (short)uVar18;
      }
    }
    uVar16 = uVar14 & 0xffffffff;
    if ((uVar16 * 4 - (longlong)(short)uVar18 != 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumRegisters * sizeof(uint32) == Variable.GetType().GetSize()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceDataTable.cpp"
                           ,0x17a,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar8;
    }
    if ((int)uVar14 != 0) {
      if (iVar7 == -1) {
        do {
          pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
          local_58 = -1;
          if (((pFVar4 <= (FScriptContainerElement *)&local_58) &&
              ((FScriptContainerElement *)&local_58 < pFVar4 + (longlong)*piVar1 * 4)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar5 = (code *)swi(3);
            pTVar8 = (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
            return pTVar8;
          }
          iVar7 = __return_storage_ptr__->ArrayNum;
          if (iVar7 == *piVar1) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
          }
          __return_storage_ptr__->ArrayNum = iVar7 + 1;
          *(int *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 4) =
               local_58;
          uVar16 = uVar16 - 1;
        } while (uVar16 != 0);
      }
      else {
        do {
          pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
          local_58 = iVar7;
          if (((pFVar4 <= (FScriptContainerElement *)&local_58) &&
              ((FScriptContainerElement *)&local_58 < pFVar4 + (longlong)*piVar1 * 4)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar5 = (code *)swi(3);
            pTVar8 = (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
            return pTVar8;
          }
          iVar13 = __return_storage_ptr__->ArrayNum;
          if (iVar13 == *piVar1) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
          }
          iVar7 = iVar7 + 4;
          __return_storage_ptr__->ArrayNum = iVar13 + 1;
          *(int *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar13 * 4) =
               local_58;
          uVar16 = uVar16 - 1;
        } while (uVar16 != 0);
      }
    }
    pFVar19 = pFVar19 + 0xc;
    this_00 = this_00 + 0xc;
    uVar14 = (ulonglong)local_54;
    param_1 = local_res18;
  } while( true );
}

// Initialize @ 148ec8610

void __thiscall
NDIDataTableLocal::FInstanceData_GameThread::Initialize
          (FInstanceData_GameThread *this,TArrayView<FName_const_,int> *param_1,UDataTable *param_2,
          bool param_3)

{
  TSharedPtr<NDIDataTableLocal::FBuiltDataTable,1> *pTVar1;
  TArray<FName,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar2;
  uint *puVar3;
  int *piVar4;
  TArray<unsigned_int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar5;
  ForElementType<FName> FVar6;
  FName *_Src;
  longlong lVar7;
  FBuiltDataTable *pFVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  UClass *pUVar14;
  FObjectPtr_u_0 FVar15;
  TSharedPtr<NDIDataTableLocal::FBuiltDataTable,1> *pTVar16;
  FScriptContainerElement *pFVar17;
  ForElementType<unsigned_int> FVar18;
  ForElementType<unsigned_int> FVar19;
  ForElementType<FName> FVar20;
  uint uVar21;
  FObjectPtr_u_0 local_res10;
  FObjectPtr_u_0 local_res18;
  undefined1 local_res20 [8];
  int local_98 [2];
  TOptional<TArrayView<FName_const_,int>_>_u_0 local_90;
  TOptional<TArrayView<FName_const_,int>_>_u_0 local_80;
  TSharedPtr<NDIDataTableLocal::FBuiltDataTable,1> local_70;
  TSharedPtr<NDIDataTableLocal::FBuiltDataTable,1> local_60 [2];
  
  FVar15.Handle = (UObject *)0x0;
  if ((this->UserParamBinding).UObjectOffset == -1) {
    local_res10.Handle = (UObject *)0x0;
  }
  else {
    FNiagaraParameterStore::GetUObject((this->UserParamBinding).BoundStore,(int)&local_res10);
    if ((UDataTable *)local_res10.Handle != (UDataTable *)0x0) {
      pUVar14 = Z_Construct_UClass_UDataTable_NoRegister();
      bVar11 = FObjectPtr::IsA((FObjectPtr *)&local_res10,pUVar14);
      if (bVar11) {
        FVar15 = local_res10;
      }
    }
  }
  if ((UDataTable *)FVar15.Handle != (UDataTable *)0x0) {
    param_2 = (UDataTable *)FVar15;
  }
  local_res18 = (FObjectPtr_u_0)param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UDataTable *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  FWeakObjectPtr::operator=(&(this->WeakDataTable).WeakPtr,(FObjectPtr)&local_res18);
  iVar13 = 0;
  if (param_3) {
    local_80.TypedValue.DataPtr = param_1->DataPtr;
    local_80._8_8_ = *(undefined8 *)&param_1->ArrayNum;
    if (((int)*(undefined8 *)&param_1->ArrayNum == -1) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0xbd,
                            L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                           ), bVar11)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pTVar16 = GetOrCreateBuiltDataTable
                        (local_60,param_2,
                         (TOptional<TArrayView<FName_const_,int>_> *)&local_80.TypedValue);
    iVar12 = iVar13;
    iVar13 = 1;
  }
  else {
    local_90.TypedValue.DataPtr = (FName *)0x0;
    local_90.TypedValue.ArrayNum = -1;
    pTVar16 = GetOrCreateBuiltDataTable
                        (&local_70,param_2,
                         (TOptional<TArrayView<FName_const_,int>_> *)&local_90.TypedValue);
    iVar12 = 2;
  }
  pTVar1 = &this->BuiltDataTable;
  if (pTVar1 != pTVar16) {
    pTVar1->Object = pTVar16->Object;
    pTVar16->Object = (FBuiltDataTable *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->BuiltDataTable).SharedReferenceCount,&pTVar16->SharedReferenceCount);
  }
  if (iVar12 != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_70.SharedReferenceCount.ReferenceController);
  }
  if (iVar13 != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_60[0].SharedReferenceCount.ReferenceController);
  }
  if ((pTVar1->Object == (FBuiltDataTable *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pTVar2 = &this->FilteredRowNames;
  iVar13 = param_1->ArrayNum;
  _Src = param_1->DataPtr;
  piVar4 = &(this->FilteredRowNames).ArrayMax;
  this->InvalidRowReadOffset = pTVar1->Object->NumRows * pTVar1->Object->RowStride;
  (this->FilteredRowNames).ArrayNum = iVar13;
  if ((iVar13 == 0) && (*piVar4 == 0)) {
    *piVar4 = 0x10;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
              (8,4,iVar13,*piVar4,&pTVar2->AllocatorInstance,iVar13,piVar4);
    FVar20 = (this->FilteredRowNames).AllocatorInstance.SecondaryData;
    if (iVar13 != 0) {
      if (FVar20 == (ForElementType<FName>)0x0) {
        FVar20 = (ForElementType<FName>)pTVar2;
      }
      memcpy((void *)FVar20,_Src,(longlong)iVar13 << 3);
    }
  }
  pTVar5 = &this->FilteredRowDataOffset;
  uVar21 = (this->FilteredRowNames).ArrayNum + 1;
  if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar21);
  }
  piVar4 = &(this->FilteredRowDataOffset).ArrayMax;
  if (*piVar4 < (int)uVar21) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
              (4,4,uVar21,&pTVar5->AllocatorInstance,(this->FilteredRowDataOffset).ArrayNum,piVar4);
  }
  FVar20 = (this->FilteredRowNames).AllocatorInstance.SecondaryData;
  iVar13 = (this->FilteredRowNames).ArrayNum;
  if (FVar20 == (ForElementType<FName>)0x0) {
    FVar20 = (ForElementType<FName>)pTVar2;
  }
  FVar6 = (ForElementType<FName>)((longlong)FVar20 + (longlong)iVar13 * 8);
  do {
    if ((this->FilteredRowNames).ArrayNum != iVar13) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (FVar20 == FVar6) {
      this->NumFilteredRows = (this->FilteredRowDataOffset).ArrayNum;
      puVar3 = &this->InvalidRowReadOffset;
      FVar19 = (this->FilteredRowDataOffset).AllocatorInstance.SecondaryData;
      if (FVar19 == (ForElementType<unsigned_int>)0x0) {
        FVar19 = (ForElementType<unsigned_int>)pTVar5;
      }
      if ((((ulonglong)FVar19 <= puVar3) &&
          (puVar3 < (undefined1 *)
                    ((longlong)FVar19 + (longlong)(this->FilteredRowDataOffset).ArrayMax * 4))) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      iVar13 = (this->FilteredRowDataOffset).ArrayNum;
      if (iVar13 == (this->FilteredRowDataOffset).ArrayMax) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                           (0x404,&pTVar5->AllocatorInstance,piVar4);
      }
      (this->FilteredRowDataOffset).ArrayNum = iVar13 + 1;
      FVar19 = (this->FilteredRowDataOffset).AllocatorInstance.SecondaryData;
      if (FVar19 == (ForElementType<unsigned_int>)0x0) {
        FVar19 = (ForElementType<unsigned_int>)pTVar5;
      }
      *(uint *)((longlong)FVar19 + (longlong)iVar13 * 4) = *puVar3;
      return;
    }
    lVar7 = *(longlong *)FVar20;
    if ((pTVar1->Object == (FBuiltDataTable *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pFVar8 = pTVar1->Object;
    pFVar9 = (pFVar8->RowNames).AllocatorInstance.Data;
    for (pFVar17 = pFVar9; pFVar17 != pFVar9 + (longlong)(pFVar8->RowNames).ArrayNum * 8;
        pFVar17 = pFVar17 + 8) {
      if (*(longlong *)pFVar17 == lVar7) {
        uVar21 = (uint)((longlong)pFVar17 - (longlong)pFVar9 >> 3);
        if (uVar21 != 0xffffffff) goto LAB_148ec8928;
        break;
      }
    }
    uVar21 = pFVar8->NumRows;
LAB_148ec8928:
    local_98[0] = uVar21 * pFVar8->RowStride;
    FVar19 = (this->FilteredRowDataOffset).AllocatorInstance.SecondaryData;
    FVar18 = (ForElementType<unsigned_int>)pTVar5;
    if (FVar19 != (ForElementType<unsigned_int>)0x0) {
      FVar18 = FVar19;
    }
    if ((ulonglong)FVar18 <= local_98) {
      FVar18 = (ForElementType<unsigned_int>)pTVar5;
      if (FVar19 != (ForElementType<unsigned_int>)0x0) {
        FVar18 = FVar19;
      }
      if ((local_98 < (int *)((longlong)FVar18 + (longlong)*piVar4 * 4)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    iVar12 = (this->FilteredRowDataOffset).ArrayNum;
    if (iVar12 == *piVar4) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                         (0x404,&pTVar5->AllocatorInstance,piVar4);
    }
    (this->FilteredRowDataOffset).ArrayNum = iVar12 + 1;
    FVar19 = (this->FilteredRowDataOffset).AllocatorInstance.SecondaryData;
    FVar18 = (ForElementType<unsigned_int>)pTVar5;
    if (FVar19 != (ForElementType<unsigned_int>)0x0) {
      FVar18 = FVar19;
    }
    FVar20 = (ForElementType<FName>)((longlong)FVar20 + 8);
    *(int *)((longlong)FVar18 + (longlong)iVar12 * 4) = local_98[0];
  } while( true );
}

// FInstanceData_GameThread @ 148f7e9c0

FInstanceData_GameThread * __thiscall
NDISocketReaderLocal::FInstanceData_GameThread::FInstanceData_GameThread
          (FInstanceData_GameThread *this)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  __m128 _Var17;
  int iVar18;
  
  (this->UserParamBinding).UObjectOffset = -1;
  (this->UserParamBinding).BoundStore = (FNiagaraParameterStore *)0x0;
  (this->UserParamBinding).BoundVariable._padding_ = 0;
  iVar18 = FNiagaraTypeDefinitionHandle::Register
                     ((FNiagaraTypeDefinitionHandle *)
                      &(this->UserParamBinding).BoundVariable._padding_,
                      &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&(this->UserParamBinding).BoundVariable._padding_ = iVar18;
  (this->UserParamBinding).BoundVariable.VarData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->UserParamBinding).BoundVariable.VarData.ArrayNum = 0;
  (this->UserParamBinding).BoundVariable.VarData.ArrayMax = 0;
  this->DeltaSeconds = 0.0;
  this->InvDeltaSeconds = 0.0;
  puVar2 = &this->field_0x38;
  this->bIsDataValid = 0;
  this->bReadsUnfilteredTransforms = 0;
  this->bReadsFilteredTransforms = 0;
  this->bNeedsRenderUpdate = 1;
  this->bNeedsSocketRecache = 1;
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->ComponentToWorld).Rotation.XY.m128d_f64 = auVar5;
  auVar6._8_4_ = SUB84((double)fVar4,0);
  auVar6._0_8_ = (double)fVar3;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])(this->ComponentToWorld).Rotation.ZW.m128d_f64 = auVar6;
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->ComponentToWorld).Translation.XY.m128d_f64 = auVar7;
  auVar8._8_4_ = SUB84((double)fVar4,0);
  auVar8._0_8_ = (double)fVar3;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])(this->ComponentToWorld).Translation.ZW.m128d_f64 = auVar8;
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar9._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar9._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar9._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->ComponentToWorld).Scale3D.XY.m128d_f64 = auVar9;
  auVar10._8_4_ = SUB84((double)fVar4,0);
  auVar10._0_8_ = (double)fVar3;
  auVar10._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])(this->ComponentToWorld).Scale3D.ZW.m128d_f64 = auVar10;
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar11._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar11._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar11._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->PreviousComponentToWorld).Rotation.XY.m128d_f64 = auVar11;
  auVar12._8_4_ = SUB84((double)fVar4,0);
  auVar12._0_8_ = (double)fVar3;
  auVar12._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])(this->PreviousComponentToWorld).Rotation.ZW.m128d_f64 = auVar12;
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar13._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar13._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar13._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->PreviousComponentToWorld).Translation.XY.m128d_f64 = auVar13;
  auVar14._8_4_ = SUB84((double)fVar4,0);
  auVar14._0_8_ = (double)fVar3;
  auVar14._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])(this->PreviousComponentToWorld).Translation.ZW.m128d_f64 = auVar14;
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar15._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar15._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar15._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->PreviousComponentToWorld).Scale3D.XY.m128d_f64 = auVar15;
  auVar16._8_4_ = SUB84((double)fVar4,0);
  auVar16._0_8_ = (double)fVar3;
  auVar16._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])(this->PreviousComponentToWorld).Scale3D.ZW.m128d_f64 = auVar16;
  (this->ComponentToTranslatedWorld).Rotation = GlobalVectorConstants::Float0001;
  (this->ComponentToTranslatedWorld).Translation = GlobalVectorConstants::FloatZero;
  (this->ComponentToTranslatedWorld).Scale3D = GlobalVectorConstants::Float1110;
  (this->PreviousComponentToTranslatedWorld).Rotation = GlobalVectorConstants::Float0001;
  (this->PreviousComponentToTranslatedWorld).Translation = GlobalVectorConstants::FloatZero;
  _Var17 = GlobalVectorConstants::Float1110;
  this->NumSockets = 0;
  this->NumFilteredSockets = 0;
  this->NumUnfilteredSockets = 0;
  (this->SocketFilterUnfilteredIndex).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SocketFilterUnfilteredIndex).ArrayNum = 0;
  (this->SocketFilterUnfilteredIndex).ArrayMax = 0;
  (this->SocketNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SocketNames).ArrayNum = 0;
  (this->SocketNames).ArrayMax = 0;
  (this->SocketTransforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SocketTransforms).ArrayNum = 0;
  (this->SocketTransforms).ArrayMax = 0;
  (this->PreviousSocketTransforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PreviousSocketTransforms).ArrayNum = 0;
  (this->PreviousSocketTransforms).ArrayMax = 0;
  (this->ResolvedObject).WeakPtr = (FWeakObjectPtr)0x0;
  (this->PreviousComponentToTranslatedWorld).Scale3D = _Var17;
  return this;
}

// operator() @ 148f84880

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
`NDIStaticMeshLocal::FInstanceData_GameThread::Init'::__l106::<lambda_1>::operator()
          (void *this,UNiagaraScript *param_1,FVMExternalFunctionBindingInfo *param_2)

{
  byte bVar1;
  FName FVar2;
  uint uVar3;
  int iVar4;
  ForElementType<FSetElementId> FVar5;
  undefined1 auStack_128 [32];
  initializer_list<FName> local_108;
  FName local_f8;
  FName local_f0;
  FName local_e8;
  FName local_e0;
  FName local_d8;
  FName local_d0;
  FName local_c8;
  FName local_c0;
  FName local_b8;
  FName local_b0;
  FName local_a8;
  FName local_a0;
  FName local_98;
  FName local_90;
  FName local_88;
  FName local_80;
  FName local_78;
  FName local_70;
  FName local_68;
  FName local_60;
  FName local_58;
  FName local_50;
  FName local_48;
  FName local_40;
  FName local_38;
  FName local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_128;
  FVar2 = param_2->Name;
  bVar1 = **(byte **)this;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    local_f8 = NDIStaticMeshLocal::IsValidName;
    local_f0 = NDIStaticMeshLocal::GetPreSkinnedLocalBoundsName;
    local_e8 = NDIStaticMeshLocal::GetMeshBoundsName;
    local_e0 = NDIStaticMeshLocal::GetMeshBoundsWSName;
    local_d8 = NDIStaticMeshLocal::GetLocalToWorldName;
    local_d0 = NDIStaticMeshLocal::GetLocalToWorldInverseTransposedName;
    local_c8 = NDIStaticMeshLocal::GetWorldVelocityName;
    local_c0 = NDIStaticMeshLocal::SetInstanceIndexName;
    local_b8 = NDIStaticMeshLocal::GetSocketCountName;
    local_b0 = NDIStaticMeshLocal::GetFilteredSocketCountName;
    local_a8 = NDIStaticMeshLocal::GetUnfilteredSocketCountName;
    local_a0 = NDIStaticMeshLocal::RandomSocketName;
    local_98 = NDIStaticMeshLocal::RandomFilteredSocketName;
    local_90 = NDIStaticMeshLocal::RandomUnfilteredSocketName;
    local_88 = NDIStaticMeshLocal::GetSocketTransformName;
    local_80 = NDIStaticMeshLocal::GetSocketTransformWSName;
    local_78 = NDIStaticMeshLocal::GetSocketTransformWSInterpolatedName;
    local_70 = NDIStaticMeshLocal::GetFilteredSocketTransformName;
    local_68 = NDIStaticMeshLocal::GetFilteredSocketTransformWSName;
    local_60 = NDIStaticMeshLocal::GetFilteredSocketTransformWSInterpolatedName;
    local_58 = NDIStaticMeshLocal::GetUnfilteredSocketTransformName;
    local_50 = NDIStaticMeshLocal::GetUnfilteredSocketTransformWSName;
    local_48 = NDIStaticMeshLocal::GetUnfilteredSocketTransformWSInterpolatedName;
    local_40 = NDIStaticMeshLocal::GetFilteredSocketName;
    local_38 = NDIStaticMeshLocal::GetUnfilteredSocketName;
    local_108._First = &local_f8;
    local_108._Last = &local_30;
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>(&SafeFunctions,&local_108);
    atexit(`UNiagaraDataInterfaceStaticMesh::FunctionNeedsCpuAccess'::__l2::
           _dynamic_atexit_destructor_for__SafeFunctions__);
    _Init_thread_footer(&::_TSS0);
  }
  uVar3 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
  if (SafeFunctions.Elements._8_4_ != SafeFunctions.Elements._52_4_) {
    FVar5 = (ForElementType<FSetElementId>)0x15526f848;
    if (SafeFunctions.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FVar5 = SafeFunctions.Hash.SecondaryData;
    }
    for (iVar4 = *(int *)((longlong)FVar5 +
                         (ulonglong)(SafeFunctions.HashSize - 1U & FVar2.Number + uVar3) * 4);
        iVar4 != -1; iVar4 = *(int *)(SafeFunctions.Elements._0_8_ + 8 + (longlong)iVar4 * 0x10)) {
      if (*(FName *)(SafeFunctions.Elements._0_8_ + (longlong)iVar4 * 0x10) == FVar2)
      goto LAB_148f8494a;
    }
  }
  iVar4 = -1;
LAB_148f8494a:
  **(byte **)this = iVar4 == -1 | bVar1;
  return **(char **)this == '\0';
}

// AddProperty @ 148f89c00

uint __thiscall
NDIUObjectPropertyReaderLocal::FInstanceData_GameThread::AddProperty
          (FInstanceData_GameThread *this,FNiagaraVariableBase *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  FNiagaraTypeDefinition *this_00;
  FName *pFVar8;
  longlong lVar9;
  
  uVar6 = 0;
  if (0 < (this->PropertyGetters).ArrayNum) {
    lVar9 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar6 < (this->PropertyGetters).ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return uVar6;
      }
      pFVar2 = (this->PropertyGetters).AllocatorInstance.Data;
      if ((*(FName *)(pFVar2 + lVar9) == param_1->Name) &&
         (*(int *)(pFVar2 + lVar9 + 8) == (param_1->TypeDefHandle).RegisteredTypeIndex)) {
        return uVar6;
      }
      uVar6 = uVar6 + 1;
      lVar9 = lVar9 + 0x70;
    } while ((int)uVar6 < (this->PropertyGetters).ArrayNum);
  }
  iVar7 = (this->PropertyGetters).ArrayNum;
  piVar1 = &(this->PropertyGetters).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1070,&(this->PropertyGetters).AllocatorInstance,piVar1);
    (this->PropertyGetters).ArrayNum = iVar7;
  }
  (this->PropertyGetters).ArrayNum = iVar7 + 1;
  pFVar8 = (FName *)((this->PropertyGetters).AllocatorInstance.Data + (longlong)iVar7 * 0x70);
  DefaultConstructItems<NDIUObjectPropertyReaderLocal::FNDIPropertyGetter,int>(pFVar8,1);
  *pFVar8 = param_1->Name;
  pFVar8[1].ComparisonIndex.Value = (param_1->TypeDefHandle).RegisteredTypeIndex;
  this_00 = FNiagaraTypeDefinitionHandle::Resolve(&param_1->TypeDefHandle);
  iVar7 = FNiagaraTypeDefinition::GetSize(this_00);
  uVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,iVar7,&(this->PropertyData).AllocatorInstance,
                     &(this->PropertyData).ArrayNum,&(this->PropertyData).ArrayMax);
  memset((this->PropertyData).AllocatorInstance.Data + (int)uVar6,0,(longlong)iVar7);
  pFVar8[1].Number = uVar6;
  return (this->PropertyGetters).ArrayNum - 1;
}

// CalculateLODIndex @ 148f906f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
NDIStaticMeshLocal::FInstanceData_GameThread::CalculateLODIndex
          (FInstanceData_GameThread *this,UNiagaraDataInterfaceStaticMesh *param_1,
          FNiagaraSystemInstance *param_2,UStaticMesh *param_3,int *param_4,int *param_5)

{
  FNiagaraParameterStore *pFVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  FStaticMeshRenderData *pFVar10;
  FStaticMeshRenderData *pFVar11;
  FNiagaraTypeDefinition *this_00;
  int *piVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  FNiagaraUserParameterBinding *this_01;
  
  pFVar10 = UStaticMesh::GetRenderData(param_3);
  *param_4 = -1;
  *param_5 = -1;
  if (((param_1 != (UNiagaraDataInterfaceStaticMesh *)0x0) &&
      (param_2 != (FNiagaraSystemInstance *)0x0)) && (pFVar10 != (FStaticMeshRenderData *)0x0)) {
    *param_5 = (param_3->MinLOD).Default;
    if ((GNDIStaticMesh_UseInlineLODsOnly == 1) ||
       ((GNDIStaticMesh_UseInlineLODsOnly == 2 &&
        (param_1->bAllowSamplingFromStreamingLODs == false)))) {
      pFVar11 = UStaticMesh::GetRenderData(param_3);
      bVar2 = pFVar11->NumInlinedLODs;
      iVar6 = UStaticMesh::GetNumLODs(param_3);
      *param_5 = iVar6 - (uint)bVar2;
    }
    piVar12 = (this->LODIndexUserBinding).ValuePtr;
    iVar6 = param_1->LODIndex;
    if (piVar12 == (int *)0x0) {
      this_01 = &param_1->LODIndexUserParameter;
      bVar4 = FNiagaraVariableBase::IsValid((FNiagaraVariableBase *)this_01);
      if (bVar4) {
        pFVar1 = &param_2->InstanceParameters;
        (this->LODIndexUserBinding).BoundStore = pFVar1;
        (this->LODIndexUserBinding).BoundVariable._padding_ = (this_01->Parameter)._padding_;
        *(int *)&(this->LODIndexUserBinding).BoundVariable._padding_ =
             (int)(param_1->LODIndexUserParameter).Parameter._padding_;
        TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=
                  (&(this->LODIndexUserBinding).BoundVariable.VarData,
                   &(param_1->LODIndexUserParameter).Parameter.VarData);
        (this->LODIndexUserBinding).LayoutVersion =
             ((this->LODIndexUserBinding).BoundStore)->LayoutVersion;
        this_00 = FNiagaraTypeDefinitionHandle::Resolve
                            ((FNiagaraTypeDefinitionHandle *)
                             &(param_1->LODIndexUserParameter).Parameter._padding_);
        iVar7 = FNiagaraTypeDefinition::GetSize(this_00);
        if ((iVar7 != 4) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("DestVariable.GetSizeInBytes() == sizeof(T)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                               ,0x328,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        piVar12 = (int *)(**(code **)(pFVar1->_padding_ + 0x58))(pFVar1,this_01,0);
        if ((piVar12 == (int *)0x0) || (*piVar12 == -1)) {
          (this->LODIndexUserBinding).ValuePtr = (int *)0x0;
        }
        else {
          pFVar13 = (param_2->InstanceParameters).ParameterData.AllocatorInstance.Data + *piVar12;
          (this->LODIndexUserBinding).ValuePtr = (int *)pFVar13;
          if (pFVar13 != (FScriptContainerElement *)0x0) {
            iVar6 = *(int *)pFVar13;
          }
        }
      }
    }
    else {
      iVar6 = *piVar12;
    }
    uVar14 = this->MinLOD;
    if (this->MinLOD < (int)(uint)pFVar10->CurrentFirstLODIdx) {
      uVar14 = (uint)pFVar10->CurrentFirstLODIdx;
    }
    iVar7 = FStaticMeshRenderData::GetFirstValidLODIdx(pFVar10,uVar14);
    iVar8 = UStaticMesh::GetNumLODs(param_3);
    if (iVar6 < 0) {
      iVar9 = UStaticMesh::GetNumLODs(param_3);
      iVar6 = iVar6 + iVar9;
    }
    *param_4 = iVar6;
    iVar6 = iVar8 + -1;
    if (this->CachedLODIdx < iVar8 + -1) {
      iVar6 = this->CachedLODIdx;
    }
    if (iVar7 < iVar6) {
      iVar7 = iVar6;
    }
    *param_4 = iVar7;
    pFVar10 = UStaticMesh::GetRenderData(param_3);
    if ((-1 < *param_4) && (*param_4 < (pFVar10->LODResources).Array.ArrayNum)) {
      return true;
    }
  }
  return false;
}

// GetCurrentLODWithVertexColorOverrides @ 148fb3460

FStaticMeshLODResources * __thiscall
NDIStaticMeshLocal::FInstanceData_GameThread::GetCurrentLODWithVertexColorOverrides
          (FInstanceData_GameThread *this,FColorVertexBuffer **param_1)

{
  uint uVar1;
  INiagaraSceneComponentUtils *pIVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UStaticMesh *this_00;
  FStaticMeshRenderData *pFVar6;
  UObject *pUVar7;
  FColorVertexBuffer *pFVar8;
  FStaticMeshLODResources *pFVar9;
  uint uVar10;
  
  this_00 = (UStaticMesh *)FWeakObjectPtr::Get(&(this->StaticMeshWeakPtr).WeakPtr);
  *param_1 = (FColorVertexBuffer *)0x0;
  if ((this->bMeshValid != 0) && (this_00 != (UStaticMesh *)0x0)) {
    pFVar6 = UStaticMesh::GetRenderData(this_00);
    uVar1 = this->MinLOD;
    if (this->MinLOD < (int)(uint)pFVar6->CurrentFirstLODIdx) {
      uVar1 = (uint)pFVar6->CurrentFirstLODIdx;
    }
    iVar5 = FStaticMeshRenderData::GetFirstValidLODIdx(pFVar6,uVar1);
    if (iVar5 <= this->CachedLODIdx) {
      pFVar6 = UStaticMesh::GetRenderData(this_00);
      iVar5 = this->CachedLODIdx;
      if ((-1 < iVar5) && (iVar5 < (pFVar6->LODResources).Array.ArrayNum)) {
        pIVar2 = this->SceneComponentUtils;
        pcVar3 = *(code **)((longlong)*pIVar2 + 0x20);
        pUVar7 = FWeakObjectPtr::Get(&(this->ComponentWeakPtr).WeakPtr);
        pFVar8 = (FColorVertexBuffer *)(*pcVar3)(pIVar2,pUVar7,iVar5);
        *param_1 = pFVar8;
        pFVar6 = UStaticMesh::GetRenderData(this_00);
        uVar1 = this->CachedLODIdx;
        uVar10 = 0;
        if ((int)uVar1 < (pFVar6->LODResources).Array.ArrayNum) {
          uVar10 = ~uVar1 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pFVar9 = (FStaticMeshLODResources *)(*pcVar3)();
          return pFVar9;
        }
        pFVar9 = *(FStaticMeshLODResources **)
                  ((pFVar6->LODResources).Array.AllocatorInstance.Data + (longlong)(int)uVar1 * 8);
        if ((pFVar9 != (FStaticMeshLODResources *)0x0) &&
           (iVar5 = FStaticMeshLODResources::GetNumVertices(pFVar9), 0 < iVar5)) {
          if (pFVar9->BuffersSize == 0) {
            return (FStaticMeshLODResources *)0x0;
          }
          return pFVar9;
        }
      }
    }
  }
  return (FStaticMeshLODResources *)0x0;
}

// Init @ 148fbfc80

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

bool __thiscall
NDIStaticMeshLocal::FInstanceData_GameThread::Init
          (FInstanceData_GameThread *this,UNiagaraDataInterfaceStaticMesh *param_1,
          FNiagaraSystemInstance *param_2)

{
  longlong *plVar1;
  int *piVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> *pTVar4;
  EShaderPlatform EVar5;
  undefined4 uVar6;
  UNiagaraSystem *pUVar7;
  FStaticMeshSectionArray *pFVar8;
  FScriptContainerElement *pFVar9;
  FColorVertexData *pFVar10;
  code *pcVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  byte bVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined8 uVar26;
  UNiagaraDataInterfaceStaticMesh *pUVar27;
  FNiagaraSystemInstance *pFVar28;
  bool bVar29;
  undefined1 uVar30;
  int iVar31;
  int iVar32;
  INiagaraSceneComponentUtils *pIVar33;
  FStaticMeshLODResources *this_00;
  double *pdVar34;
  TQuat<float> *pTVar35;
  FString *pFVar36;
  uint uVar37;
  FStaticMeshSectionArray *pFVar38;
  FScriptContainerElement *pFVar39;
  FColorVertexData *pFVar40;
  FStaticMeshLODResources *pFVar41;
  uint uVar42;
  longlong lVar43;
  FStaticMeshLODResources *pFVar44;
  uint uVar45;
  ulonglong uVar46;
  uint uVar47;
  bool local_res8 [8];
  UNiagaraDataInterfaceStaticMesh *local_res10;
  FNiagaraSystemInstance *local_res18;
  bool local_res20 [8];
  uint local_2d8;
  char local_2d4 [2];
  undefined2 local_2d2;
  FMeshUvMappingUsage local_2d0;
  FScriptContainerElement *local_2c8;
  FStaticMeshLODResources *local_2c0;
  FStaticMeshRenderData *local_2b8;
  ushort local_2b0 [4];
  UObject *local_2a8;
  FStaticMeshLODResources *local_2a0;
  FScriptContainerElement *local_298;
  int iStack_290;
  int iStack_28c;
  FWeakObjectPtr local_288;
  FWeakObjectPtr local_280;
  FScriptContainerElement *local_278;
  UObject *local_270;
  FStaticMeshLODResources *local_268;
  int *local_260;
  TRotator<float> local_258;
  FString local_248;
  FString local_238;
  FString local_228;
  FString local_218;
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  undefined8 local_188;
  undefined8 local_180;
  FName local_178;
  UObject *local_170;
  undefined1 local_168 [24];
  FString local_150;
  TArrayView<int_const_,int> local_138;
  TArrayView<int_const_,int> local_128;
  FString local_118;
  TVector<double>_u_0 local_108;
  double local_f0;
  double local_e8;
  double local_e0;
  code *local_c8 [2];
  undefined **local_b8;
  char *local_b0;
  undefined8 local_a0;
  TQuat<float> local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78 [56];
  FStaticMeshLODResources *pFVar48;
  
  local_res10 = param_1;
  local_res18 = param_2;
  if ((param_2 == (FNiagaraSystemInstance *)0x0) &&
     (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                         ("SystemInstance",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceStaticMesh.cpp"
                          ,0x335,L""), bVar29)) {
    pcVar11 = (code *)swi(3);
    uVar30 = (*pcVar11)();
    return (bool)uVar30;
  }
  pIVar33 = FNiagaraSystemInstance::GetSceneComponentUtils(param_2);
  pFVar48 = (FStaticMeshLODResources *)0x0;
  uVar47 = 0;
  this->SceneComponentUtils = pIVar33;
  local_288.ObjectIndex = 0;
  local_288.ObjectSerialNumber = 0;
  local_188 = 0;
  FWeakObjectPtr::operator=(&local_288,(FObjectPtr)&local_188);
  (this->ComponentWeakPtr).WeakPtr = local_288;
  local_280.ObjectIndex = 0;
  local_280.ObjectSerialNumber = 0;
  local_180 = 0;
  FWeakObjectPtr::operator=(&local_280,(FObjectPtr)&local_180);
  (this->StaticMeshWeakPtr).WeakPtr = local_280;
  dVar22 = UE::Math::TMatrix<double>::Identity.M[0][1];
  (this->Transform).M[0][0] = UE::Math::TMatrix<double>::Identity.M[0][0];
  (this->Transform).M[0][1] = dVar22;
  dVar22 = UE::Math::TMatrix<double>::Identity.M[0][3];
  (this->Transform).M[0][2] = UE::Math::TMatrix<double>::Identity.M[0][2];
  (this->Transform).M[0][3] = dVar22;
  dVar22 = UE::Math::TMatrix<double>::Identity.M[1][1];
  (this->Transform).M[1][0] = UE::Math::TMatrix<double>::Identity.M[1][0];
  (this->Transform).M[1][1] = dVar22;
  dVar22 = UE::Math::TMatrix<double>::Identity.M[1][3];
  (this->Transform).M[1][2] = UE::Math::TMatrix<double>::Identity.M[1][2];
  (this->Transform).M[1][3] = dVar22;
  dVar22 = UE::Math::TMatrix<double>::Identity.M[2][1];
  (this->Transform).M[2][0] = UE::Math::TMatrix<double>::Identity.M[2][0];
  (this->Transform).M[2][1] = dVar22;
  dVar22 = UE::Math::TMatrix<double>::Identity.M[2][3];
  (this->Transform).M[2][2] = UE::Math::TMatrix<double>::Identity.M[2][2];
  (this->Transform).M[2][3] = dVar22;
  dVar22 = UE::Math::TMatrix<double>::Identity.M[3][1];
  (this->Transform).M[3][0] = UE::Math::TMatrix<double>::Identity.M[3][0];
  (this->Transform).M[3][1] = dVar22;
  dVar22 = UE::Math::TMatrix<double>::Identity.M[3][3];
  (this->Transform).M[3][2] = UE::Math::TMatrix<double>::Identity.M[3][2];
  (this->Transform).M[3][3] = dVar22;
  dVar22 = UE::Math::TMatrix<double>::Identity.M[0][1];
  (this->TransformInverseTransposed).M[0][0] = UE::Math::TMatrix<double>::Identity.M[0][0];
  (this->TransformInverseTransposed).M[0][1] = dVar22;
  dVar22 = UE::Math::TMatrix<double>::Identity.M[0][3];
  (this->TransformInverseTransposed).M[0][2] = UE::Math::TMatrix<double>::Identity.M[0][2];
  (this->TransformInverseTransposed).M[0][3] = dVar22;
  dVar22 = UE::Math::TMatrix<double>::Identity.M[1][1];
  (this->TransformInverseTransposed).M[1][0] = UE::Math::TMatrix<double>::Identity.M[1][0];
  (this->TransformInverseTransposed).M[1][1] = dVar22;
  dVar22 = UE::Math::TMatrix<double>::Identity.M[1][3];
  (this->TransformInverseTransposed).M[1][2] = UE::Math::TMatrix<double>::Identity.M[1][2];
  (this->TransformInverseTransposed).M[1][3] = dVar22;
  dVar22 = UE::Math::TMatrix<double>::Identity.M[2][1];
  (this->TransformInverseTransposed).M[2][0] = UE::Math::TMatrix<double>::Identity.M[2][0];
  (this->TransformInverseTransposed).M[2][1] = dVar22;
  dVar22 = UE::Math::TMatrix<double>::Identity.M[2][3];
  (this->TransformInverseTransposed).M[2][2] = UE::Math::TMatrix<double>::Identity.M[2][2];
  (this->TransformInverseTransposed).M[2][3] = dVar22;
  dVar22 = UE::Math::TMatrix<double>::Identity.M[3][1];
  (this->TransformInverseTransposed).M[3][0] = UE::Math::TMatrix<double>::Identity.M[3][0];
  (this->TransformInverseTransposed).M[3][1] = dVar22;
  dVar22 = UE::Math::TMatrix<double>::Identity.M[3][3];
  (this->TransformInverseTransposed).M[3][2] = UE::Math::TMatrix<double>::Identity.M[3][2];
  (this->TransformInverseTransposed).M[3][3] = dVar22;
  dVar22 = UE::Math::TMatrix<double>::Identity.M[0][1];
  (this->PrevTransform).M[0][0] = UE::Math::TMatrix<double>::Identity.M[0][0];
  (this->PrevTransform).M[0][1] = dVar22;
  dVar22 = UE::Math::TMatrix<double>::Identity.M[0][3];
  (this->PrevTransform).M[0][2] = UE::Math::TMatrix<double>::Identity.M[0][2];
  (this->PrevTransform).M[0][3] = dVar22;
  dVar22 = UE::Math::TMatrix<double>::Identity.M[1][1];
  (this->PrevTransform).M[1][0] = UE::Math::TMatrix<double>::Identity.M[1][0];
  (this->PrevTransform).M[1][1] = dVar22;
  dVar22 = UE::Math::TMatrix<double>::Identity.M[1][3];
  (this->PrevTransform).M[1][2] = UE::Math::TMatrix<double>::Identity.M[1][2];
  (this->PrevTransform).M[1][3] = dVar22;
  dVar22 = UE::Math::TMatrix<double>::Identity.M[2][1];
  (this->PrevTransform).M[2][0] = UE::Math::TMatrix<double>::Identity.M[2][0];
  (this->PrevTransform).M[2][1] = dVar22;
  dVar22 = UE::Math::TMatrix<double>::Identity.M[2][3];
  (this->PrevTransform).M[2][2] = UE::Math::TMatrix<double>::Identity.M[2][2];
  (this->PrevTransform).M[2][3] = dVar22;
  dVar22 = UE::Math::TMatrix<double>::Identity.M[3][1];
  (this->PrevTransform).M[3][0] = UE::Math::TMatrix<double>::Identity.M[3][0];
  (this->PrevTransform).M[3][1] = dVar22;
  dVar22 = UE::Math::TMatrix<double>::Identity.M[3][3];
  (this->PrevTransform).M[3][2] = UE::Math::TMatrix<double>::Identity.M[3][2];
  (this->PrevTransform).M[3][3] = dVar22;
  dVar22 = UE::Math::TMatrix<double>::Identity.M[0][1];
  (this->PrevTransformInverseTransposed).M[0][0] = UE::Math::TMatrix<double>::Identity.M[0][0];
  (this->PrevTransformInverseTransposed).M[0][1] = dVar22;
  dVar22 = UE::Math::TMatrix<double>::Identity.M[0][3];
  (this->PrevTransformInverseTransposed).M[0][2] = UE::Math::TMatrix<double>::Identity.M[0][2];
  (this->PrevTransformInverseTransposed).M[0][3] = dVar22;
  dVar22 = UE::Math::TMatrix<double>::Identity.M[1][1];
  (this->PrevTransformInverseTransposed).M[1][0] = UE::Math::TMatrix<double>::Identity.M[1][0];
  (this->PrevTransformInverseTransposed).M[1][1] = dVar22;
  dVar22 = UE::Math::TMatrix<double>::Identity.M[1][3];
  (this->PrevTransformInverseTransposed).M[1][2] = UE::Math::TMatrix<double>::Identity.M[1][2];
  (this->PrevTransformInverseTransposed).M[1][3] = dVar22;
  dVar22 = UE::Math::TMatrix<double>::Identity.M[2][1];
  (this->PrevTransformInverseTransposed).M[2][0] = UE::Math::TMatrix<double>::Identity.M[2][0];
  (this->PrevTransformInverseTransposed).M[2][1] = dVar22;
  dVar22 = UE::Math::TMatrix<double>::Identity.M[2][3];
  (this->PrevTransformInverseTransposed).M[2][2] = UE::Math::TMatrix<double>::Identity.M[2][2];
  (this->PrevTransformInverseTransposed).M[2][3] = dVar22;
  dVar22 = UE::Math::TMatrix<double>::Identity.M[3][1];
  (this->PrevTransformInverseTransposed).M[3][0] = UE::Math::TMatrix<double>::Identity.M[3][0];
  (this->PrevTransformInverseTransposed).M[3][1] = dVar22;
  dVar22 = UE::Math::TMatrix<double>::Identity.M[3][3];
  (this->PrevTransformInverseTransposed).M[3][2] = UE::Math::TMatrix<double>::Identity.M[3][2];
  (this->PrevTransformInverseTransposed).M[3][3] = dVar22;
  this->Rotation = UE::Math::TQuat<float>::Identity;
  this->PrevRotation = UE::Math::TQuat<float>::Identity;
  this->DeltaSeconds = 0.0;
  *(undefined8 *)&(this->PreSkinnedLocalBoundsCenter).field0_0x0 =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  (this->PreSkinnedLocalBoundsCenter).field0_0x0._s_0.Z =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)&(this->PreSkinnedLocalBoundsExtents).field0_0x0 =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  (this->PreSkinnedLocalBoundsExtents).field0_0x0._s_0.Z =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)&(this->OwnerToMeshVector).field0_0x0 =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  (this->OwnerToMeshVector).field0_0x0._s_0.Z =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  uVar26 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar6 = *(undefined4 *)&this->field_0x328;
  (this->PhysicsVelocity).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->PhysicsVelocity).field0_0x0._s_0.Y = (double)uVar26;
  (this->PhysicsVelocity).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar37 = ((uint)param_1->bCaptureTransformsPerFrame ^ ZPULL(uVar6,0,1)) & 1 ^ uVar6;
  *(uint *)&this->field_0x328 = uVar37;
  bVar29 = param_1->bUsePhysicsBodyVelocity;
  this->NumFilteredSections = 0;
  this->NumUnfilteredSections = 0;
  local_298 = (FScriptContainerElement *)&(this->FilteredAndUnfilteredSections).ArrayMax;
  *(uint *)&this->field_0x328 = ((bVar29 & 1) * 2 ^ uVar37 & 0xfffffffd) & 0xffffff83;
  (this->FilteredAndUnfilteredSections).ArrayNum = 0;
  if (*(int *)local_298 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->FilteredAndUnfilteredSections).AllocatorInstance,0,(int *)local_298);
  }
  piVar2 = &(this->FilteredAndUnfilteredSectionInfos).ArrayMax;
  (this->FilteredAndUnfilteredSectionInfos).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,&(this->FilteredAndUnfilteredSectionInfos).AllocatorInstance,0,piVar2);
  }
  this->NumFilteredTriangles = 0;
  this->NumUnfilteredTriangles = 0;
  piVar2 = &this->CachedLODIdx;
  this->ChangeId = param_1->ChangeId;
  local_2c8 = (FScriptContainerElement *)&(this->CachedSockets).ArrayNum;
  this->MinLOD = 0;
  *piVar2 = 0;
  *(int *)local_2c8 = 0;
  local_278 = (FScriptContainerElement *)&(this->CachedSockets).ArrayMax;
  if (*(int *)local_278 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,0x10,0,&(this->CachedSockets).AllocatorInstance,0,(int *)local_278);
  }
  local_260 = &(this->FilteredAndUnfilteredSockets).ArrayMax;
  this->NumFilteredSockets = 0;
  (this->FilteredAndUnfilteredSockets).ArrayNum = 0;
  if (*local_260 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,0,&(this->FilteredAndUnfilteredSockets).AllocatorInstance,0,local_260);
  }
  FNiagaraParameterDirectBinding<UObject_*>::Init
            (&this->MeshParameterBinding,(FNiagaraParameterStore *)local_168,
             (FNiagaraVariable *)&param_2->InstanceParameters);
  local_2a8 = (UObject *)0x0;
  if ((this->MeshParameterBinding).UObjectOffset == -1) {
    local_270 = (UObject *)0x0;
  }
  else {
    FNiagaraParameterStore::GetUObject((this->MeshParameterBinding).BoundStore,(int)&local_270);
  }
  this_00 = (FStaticMeshLODResources *)
            UNiagaraDataInterfaceStaticMesh::ResolveStaticMesh(param_1,&local_2a8,param_2,local_270)
  ;
  local_170 = local_2a8;
  local_2c0 = this_00;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_2a8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_2a8);
  }
  FWeakObjectPtr::operator=(&(this->ComponentWeakPtr).WeakPtr,(FObjectPtr)&local_170);
  pFVar28 = local_res18;
  this->InstanceIndex = param_1->InstanceIndex;
  UpdateTransforms(this,local_2a8,local_res18);
  dVar22 = (this->Transform).M[0][1];
  dVar23 = (this->Transform).M[0][2];
  dVar24 = (this->Transform).M[0][3];
  (this->PrevTransform).M[0][0] = (this->Transform).M[0][0];
  (this->PrevTransform).M[0][1] = dVar22;
  dVar22 = (this->Transform).M[1][0];
  dVar25 = (this->Transform).M[1][1];
  (this->PrevTransform).M[0][2] = dVar23;
  (this->PrevTransform).M[0][3] = dVar24;
  dVar23 = (this->Transform).M[1][2];
  dVar24 = (this->Transform).M[1][3];
  (this->PrevTransform).M[1][0] = dVar22;
  (this->PrevTransform).M[1][1] = dVar25;
  dVar22 = (this->Transform).M[2][0];
  dVar25 = (this->Transform).M[2][1];
  (this->PrevTransform).M[1][2] = dVar23;
  (this->PrevTransform).M[1][3] = dVar24;
  dVar23 = (this->Transform).M[2][2];
  dVar24 = (this->Transform).M[2][3];
  (this->PrevTransform).M[2][0] = dVar22;
  (this->PrevTransform).M[2][1] = dVar25;
  dVar22 = (this->Transform).M[3][0];
  dVar25 = (this->Transform).M[3][1];
  (this->PrevTransform).M[2][2] = dVar23;
  (this->PrevTransform).M[2][3] = dVar24;
  dVar23 = (this->Transform).M[3][2];
  dVar24 = (this->Transform).M[3][3];
  (this->PrevTransform).M[3][0] = dVar22;
  (this->PrevTransform).M[3][1] = dVar25;
  dVar22 = (this->TransformInverseTransposed).M[0][0];
  dVar25 = (this->TransformInverseTransposed).M[0][1];
  (this->PrevTransform).M[3][2] = dVar23;
  (this->PrevTransform).M[3][3] = dVar24;
  dVar23 = (this->TransformInverseTransposed).M[0][2];
  dVar24 = (this->TransformInverseTransposed).M[0][3];
  (this->PrevTransformInverseTransposed).M[0][0] = dVar22;
  (this->PrevTransformInverseTransposed).M[0][1] = dVar25;
  dVar22 = (this->TransformInverseTransposed).M[1][0];
  dVar25 = (this->TransformInverseTransposed).M[1][1];
  (this->PrevTransformInverseTransposed).M[0][2] = dVar23;
  (this->PrevTransformInverseTransposed).M[0][3] = dVar24;
  dVar23 = (this->TransformInverseTransposed).M[1][2];
  dVar24 = (this->TransformInverseTransposed).M[1][3];
  (this->PrevTransformInverseTransposed).M[1][0] = dVar22;
  (this->PrevTransformInverseTransposed).M[1][1] = dVar25;
  dVar22 = (this->TransformInverseTransposed).M[2][0];
  dVar25 = (this->TransformInverseTransposed).M[2][1];
  (this->PrevTransformInverseTransposed).M[1][2] = dVar23;
  (this->PrevTransformInverseTransposed).M[1][3] = dVar24;
  dVar23 = (this->TransformInverseTransposed).M[2][2];
  dVar24 = (this->TransformInverseTransposed).M[2][3];
  (this->PrevTransformInverseTransposed).M[2][0] = dVar22;
  (this->PrevTransformInverseTransposed).M[2][1] = dVar25;
  dVar22 = (this->TransformInverseTransposed).M[3][0];
  dVar25 = (this->TransformInverseTransposed).M[3][1];
  (this->PrevTransformInverseTransposed).M[2][2] = dVar23;
  (this->PrevTransformInverseTransposed).M[2][3] = dVar24;
  uVar6 = *(undefined4 *)((this->TransformInverseTransposed).M[3] + 2);
  uVar15 = *(undefined4 *)((longlong)(this->TransformInverseTransposed).M[3] + 0x14);
  uVar16 = *(undefined4 *)((this->TransformInverseTransposed).M[3] + 3);
  uVar17 = *(undefined4 *)((longlong)(this->TransformInverseTransposed).M[3] + 0x1c);
  (this->PrevTransformInverseTransposed).M[3][0] = dVar22;
  (this->PrevTransformInverseTransposed).M[3][1] = dVar25;
  fVar18 = (this->Rotation).X;
  fVar19 = (this->Rotation).Y;
  fVar20 = (this->Rotation).Z;
  fVar21 = (this->Rotation).W;
  *(undefined4 *)((this->PrevTransformInverseTransposed).M[3] + 2) = uVar6;
  *(undefined4 *)((longlong)(this->PrevTransformInverseTransposed).M[3] + 0x14) = uVar15;
  *(undefined4 *)((this->PrevTransformInverseTransposed).M[3] + 3) = uVar16;
  *(undefined4 *)((longlong)(this->PrevTransformInverseTransposed).M[3] + 0x1c) = uVar17;
  (this->PrevRotation).X = fVar18;
  (this->PrevRotation).Y = fVar19;
  (this->PrevRotation).Z = fVar20;
  (this->PrevRotation).W = fVar21;
  if (this->bUsePhysicsVelocity != 0) {
    pdVar34 = (double *)
              (**(code **)((longlong)*this->SceneComponentUtils + 0x30))
                        (this->SceneComponentUtils,local_78);
    dVar22 = pdVar34[1];
    (this->PhysicsVelocity).field0_0x0._s_0.X = *pdVar34;
    (this->PhysicsVelocity).field0_0x0._s_0.Y = dVar22;
    (this->PhysicsVelocity).field0_0x0._s_0.Z = pdVar34[2];
  }
  if (GNiagaraFailStaticMeshDataInterface != 0) {
    if (4 < (byte)LogNiagara._0_1_) {
      UObjectBaseUtility::GetFullName
                ((UObjectBaseUtility *)param_1,(FString *)(local_168 + 8),(UObject *)0x0,None);
      UE::Logging::Private::BasicLog<5>
                (&`public:_bool___cdecl_NDIStaticMeshLocal::FInstanceData_GameThread::Init(UNiagaraDataInterfaceStaticMesh*___ptr64,FNiagaraSystemInstance*___ptr64)___ptr64'
                  ::__l16::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      if ((FWeakObjectPtr)local_168._8_8_ != (FWeakObjectPtr)0x0) {
        FMemory::Free((void *)local_168._8_8_);
      }
    }
    return false;
  }
  EVar5 = GRHIGlobals.ShaderPlatformForFeatureLevel[(int)pFVar28->FeatureLevel];
  pFVar41 = pFVar48;
  if (this_00 == (FStaticMeshLODResources *)0x0) {
    if (4 < (byte)LogNiagara._0_1_) {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_1,&local_150,(UObject *)0x0,None);
      UE::Logging::Private::BasicLog<5>
                (&`public:_bool___cdecl_NDIStaticMeshLocal::FInstanceData_GameThread::Init(UNiagaraDataInterfaceStaticMesh*___ptr64,FNiagaraSystemInstance*___ptr64)___ptr64'
                  ::__l37::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_150.Data.AllocatorInstance.Data);
      }
    }
    local_2a0 = (FStaticMeshLODResources *)0x0;
  }
  else {
    bVar29 = UStaticMesh::HasValidNaniteData((UStaticMesh *)this_00);
    if ((!bVar29) ||
       (bVar29 = UStaticMesh::HasNaniteFallbackMesh((UStaticMesh *)this_00,EVar5), bVar29)) {
      if (((this_00->VertexBuffers).ColorVertexBuffer._padding_ & 0x20000000000) == 0) {
        uVar37 = (uint)param_1->_padding_;
        if (((uVar37 >> 2 & 1) == 0) || ((uVar37 >> 1 & 1) != 0)) {
          local_b8 = &
                     ___7__TFunction_OwnedObject_V<lambda_1>__GK___Init_FInstanceData_GameThread_NDIStaticMeshLocal__QEAA_NPEAVUNiagaraDataInterfaceStaticMesh__PEAVFNiagaraSystemInstance___Z__0A__0A__Function_Private_Core_UE__6B_
          ;
          local_b0 = local_2d4;
          local_2d4[0] = '\0';
          local_a0 = 0;
          local_c8[0] = UE::Core::Private::Function::
                        TFunctionRefCaller<`NDIStaticMeshLocal::FInstanceData_GameThread::Init'::__l106::<lambda_1>,bool,UNiagaraScript_const_*,FVMExternalFunctionBindingInfo_const_&>
                        ::Call;
          FNiagaraDataInterfaceUtilities::ForEachVMFunction
                    ((UNiagaraDataInterface *)param_1,local_res18,
                     (TFunction<bool___cdecl(UNiagaraScript_const_*,FVMExternalFunctionBindingInfo_const_&)>
                      *)local_c8);
          if (local_2d4[0] != '\0') {
            if ((((uint)param_1->_padding_ >> 1 & 1) != 0) && (4 < (byte)LogNiagara._0_1_)) {
              if (*(longlong *)&this_00->Sections == 0) {
                ::FString::FString(&local_1b8,L"None");
              }
              else {
                UObjectBaseUtility::GetFullName
                          ((UObjectBaseUtility *)this_00,&local_1b8,(UObject *)0x0,None);
              }
              pUVar7 = local_res18->System;
              if ((pUVar7 == (UNiagaraSystem *)0x0) || (pUVar7->_padding_ == 0)) {
                ::FString::FString(&local_208,L"None");
              }
              else {
                UObjectBaseUtility::GetFullName
                          ((UObjectBaseUtility *)pUVar7,&local_208,(UObject *)0x0,None);
              }
              UE::Logging::Private::BasicLog<5>
                        (&`public:_bool___cdecl_NDIStaticMeshLocal::FInstanceData_GameThread::Init(UNiagaraDataInterfaceStaticMesh*___ptr64,FNiagaraSystemInstance*___ptr64)___ptr64'
                          ::__l113::LOG_Static,(FLogCategoryBase *)&LogNiagara);
              if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_208.Data.AllocatorInstance.Data);
              }
              goto LAB_148fc0429;
            }
            goto LAB_148fc0433;
          }
        }
        else {
          bVar29 = FNiagaraUtilities::AreBufferSRVsAlwaysCreated(GMaxRHIShaderPlatform);
          if (!bVar29) {
            if (4 < (byte)LogNiagara._0_1_) {
              if (*(longlong *)&this_00->Sections == 0) {
                ::FString::FString(&local_1c8,L"None");
              }
              else {
                UObjectBaseUtility::GetFullName
                          ((UObjectBaseUtility *)this_00,&local_1c8,(UObject *)0x0,None);
              }
              pUVar7 = local_res18->System;
              if ((pUVar7 == (UNiagaraSystem *)0x0) || (pUVar7->_padding_ == 0)) {
                ::FString::FString(&local_1d8,L"None");
              }
              else {
                UObjectBaseUtility::GetFullName
                          ((UObjectBaseUtility *)pUVar7,&local_1d8,(UObject *)0x0,None);
              }
              UE::Logging::Private::BasicLog<5>
                        (&`public:_bool___cdecl_NDIStaticMeshLocal::FInstanceData_GameThread::Init(UNiagaraDataInterfaceStaticMesh*___ptr64,FNiagaraSystemInstance*___ptr64)___ptr64'
                          ::__l87::LOG_Static,(FLogCategoryBase *)&LogNiagara);
              if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
              }
              if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
              }
            }
            this_00 = (FStaticMeshLODResources *)0x0;
            local_2c0 = (FStaticMeshLODResources *)0x0;
          }
        }
      }
      local_2a0 = (FStaticMeshLODResources *)0x0;
      if (this_00 == (FStaticMeshLODResources *)0x0) goto LAB_148fc0442;
      local_2b8 = UStaticMesh::GetRenderData((UStaticMesh *)this_00);
      if ((local_2b8 != (FStaticMeshRenderData *)0x0) &&
         (bVar29 = CalculateLODIndex(this,param_1,local_res18,(UStaticMesh *)this_00,piVar2,
                                     &this->MinLOD), bVar29)) {
        uVar37 = *piVar2;
        uVar42 = 0;
        if ((int)uVar37 < (local_2b8->LODResources).Array.ArrayNum) {
          uVar42 = ~uVar37 >> 0x1f;
        }
        if ((uVar42 == 0) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar29)) {
          pcVar11 = (code *)swi(3);
          uVar30 = (*pcVar11)();
          return (bool)uVar30;
        }
        pFVar41 = *(FStaticMeshLODResources **)
                   ((local_2b8->LODResources).Array.AllocatorInstance.Data +
                   (longlong)(int)uVar37 * 8);
        if (pFVar41 != (FStaticMeshLODResources *)0x0) {
          LOCK();
          *(int *)&pFVar41->_padding_ = (int)pFVar41->_padding_ + 1;
          UNLOCK();
          local_2a0 = pFVar41;
          goto LAB_148fc0442;
        }
      }
    }
    else {
      if (2 < (byte)LogNiagara._0_1_) {
        if (*(longlong *)&this_00->Sections == 0) {
          ::FString::FString(&local_1e8,L"None");
        }
        else {
          UObjectBaseUtility::GetFullName
                    ((UObjectBaseUtility *)this_00,&local_1e8,(UObject *)0x0,None);
        }
        pUVar7 = local_res18->System;
        if ((pUVar7 == (UNiagaraSystem *)0x0) || (pUVar7->_padding_ == 0)) {
          ::FString::FString(&local_1f8,L"None");
        }
        else {
          UObjectBaseUtility::GetFullName
                    ((UObjectBaseUtility *)pUVar7,&local_1f8,(UObject *)0x0,None);
        }
        UE::Logging::Private::BasicLog<3>
                  (&`public:_bool___cdecl_NDIStaticMeshLocal::FInstanceData_GameThread::Init(UNiagaraDataInterfaceStaticMesh*___ptr64,FNiagaraSystemInstance*___ptr64)___ptr64'
                    ::__l59::LOG_Static,(FLogCategoryBase *)&LogNiagara);
        local_1b8.Data.AllocatorInstance.Data = local_1e8.Data.AllocatorInstance.Data;
        if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
          local_1b8.Data.AllocatorInstance.Data = local_1e8.Data.AllocatorInstance.Data;
        }
LAB_148fc0429:
        if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
        }
      }
LAB_148fc0433:
      local_2a0 = (FStaticMeshLODResources *)0x0;
    }
    local_2c0 = (FStaticMeshLODResources *)0x0;
    pFVar41 = (FStaticMeshLODResources *)0x0;
    this_00 = pFVar48;
  }
LAB_148fc0442:
  local_268 = this_00;
  if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
     (this_00 == (FStaticMeshLODResources *)0x0)) {
    FWeakObjectPtr::operator=(&(this->StaticMeshWeakPtr).WeakPtr,(FObjectPtr)&local_268);
    uVar37 = -(uint)(this_00 != (FStaticMeshLODResources *)0x0) & 8 |
             *(uint *)&this->field_0x328 & 0xfffffff7;
    this->bMeshValid = -(uint)(this_00 != (FStaticMeshLODResources *)0x0) >> 3;
    if (this_00 != (FStaticMeshLODResources *)0x0) goto LAB_148fc0794;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)this_00);
    FWeakObjectPtr::operator=(&(this->StaticMeshWeakPtr).WeakPtr,(FObjectPtr)&local_268);
    this->bMeshValid = 1;
    uVar37 = *(uint *)&this->field_0x328;
LAB_148fc0794:
    uVar37 = ((uint)*(byte *)((longlong)&(this_00->VertexBuffers).ColorVertexBuffer._padding_ + 5)
              << 3 ^ uVar37) & 0x10 ^ uVar37;
    *(uint *)&this->field_0x328 = uVar37;
    bVar14 = *(byte *)((longlong)&(this_00->VertexBuffers).ColorVertexBuffer._padding_ + 4) >> 3;
    uVar37 = ((uint)bVar14 << 5 ^ uVar37) & 0x20 ^ uVar37;
    *(uint *)&this->field_0x328 = uVar37;
    if ((bVar14 & 1) != 0) {
      uVar42 = uVar47;
      if ((int)(pFVar41->AreaWeightedSampler)._padding_ == *(int *)&(pFVar41->Sections).field_0x28)
      {
        uVar42 = bVar14 & 1;
      }
      *(uint *)&this->field_0x328 = (uVar42 << 5 ^ uVar37) & 0x20 ^ uVar37;
      uVar37 = (((pFVar41->AreaWeightedSectionSamplers).ArrayNum ==
                 *(int *)&(pFVar41->Sections).field_0x28 & uVar42) << 5 ^ uVar37) & 0x20 ^ uVar37;
      *(uint *)&this->field_0x328 = uVar37;
    }
    if (((uVar37 & 0x20) == 0) ||
       (uVar42 = 0x40, ((this_00->VertexBuffers).ColorVertexBuffer._padding_ & 0x40000000000) == 0))
    {
      uVar42 = uVar47;
    }
    *(uint *)&this->field_0x328 = uVar37 & 0xffffffbf | uVar42;
    uVar37 = *(uint *)&(pFVar41->Sections).field_0x28;
    if ((int)uVar37 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar37);
    }
    if ((this->FilteredAndUnfilteredSections).ArrayMax < (int)uVar37) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar37,&(this->FilteredAndUnfilteredSections).AllocatorInstance,
                 (this->FilteredAndUnfilteredSections).ArrayNum,
                 &(this->FilteredAndUnfilteredSections).ArrayMax);
    }
    uVar37 = *(uint *)&(pFVar41->Sections).field_0x28;
    if ((int)uVar37 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar37);
    }
    if ((this->FilteredAndUnfilteredSectionInfos).ArrayMax < (int)uVar37) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,uVar37,&(this->FilteredAndUnfilteredSectionInfos).AllocatorInstance,
                 (this->FilteredAndUnfilteredSectionInfos).ArrayNum,
                 &(this->FilteredAndUnfilteredSectionInfos).ArrayMax);
    }
    pUVar27 = local_res10;
    local_2d8 = 0;
    if (0 < *(int *)&(pFVar41->Sections).field_0x28) {
      pTVar3 = &this->FilteredAndUnfilteredSections;
      pFVar44 = pFVar48;
      do {
        uVar42 = (uint)pFVar44;
        uVar37 = uVar47;
        if ((int)uVar42 < *(int *)&(pFVar41->Sections).field_0x28) {
          uVar37 = ~uVar42 >> 0x1f;
        }
        if ((uVar37 == 0) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar29)) {
          pcVar11 = (code *)swi(3);
          uVar30 = (*pcVar11)();
          return (bool)uVar30;
        }
        pFVar8 = *(FStaticMeshSectionArray **)&(pFVar41->Sections).field_0x20;
        pFVar38 = &pFVar41->Sections;
        if (pFVar8 != (FStaticMeshSectionArray *)0x0) {
          pFVar38 = pFVar8;
        }
        if (*(int *)(&pFVar38->field_0x8 + (longlong)(int)uVar42 * 0x1c) != 0) {
          if ((pUVar27->SectionFilter).AllowedMaterialSlots.ArrayNum == 0) {
LAB_148fc0af0:
            pFVar9 = (pTVar3->AllocatorInstance).Data;
            iVar31 = this->NumFilteredSections;
            if (((pFVar9 <= (FScriptContainerElement *)&local_2d8) &&
                ((FScriptContainerElement *)&local_2d8 <
                 pFVar9 + (longlong)(this->FilteredAndUnfilteredSections).ArrayMax * 4)) &&
               (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar29)) {
              pcVar11 = (code *)swi(3);
              uVar30 = (*pcVar11)();
              return (bool)uVar30;
            }
            iVar32 = (this->FilteredAndUnfilteredSections).ArrayNum;
            if (iVar32 == (this->FilteredAndUnfilteredSections).ArrayMax) {
              iVar32 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&pTVar3->AllocatorInstance,(int *)local_298);
            }
            (this->FilteredAndUnfilteredSections).ArrayNum = iVar32 + 1;
            pFVar9 = (pTVar3->AllocatorInstance).Data + (longlong)iVar31 * 4;
            memmove(pFVar9 + 4,pFVar9,(longlong)(iVar32 - iVar31) << 2);
            *(uint *)((pTVar3->AllocatorInstance).Data + (longlong)iVar31 * 4) = local_2d8;
            this->NumFilteredSections = this->NumFilteredSections + 1;
            lVar43 = (longlong)(int)local_2d8;
            uVar37 = uVar47;
            if ((int)local_2d8 < *(int *)&(pFVar41->Sections).field_0x28) {
              uVar37 = ~local_2d8 >> 0x1f;
            }
            if ((uVar37 == 0) &&
               (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar29)) {
              pcVar11 = (code *)swi(3);
              uVar30 = (*pcVar11)();
              return (bool)uVar30;
            }
            pFVar8 = *(FStaticMeshSectionArray **)&(pFVar41->Sections).field_0x20;
            pFVar38 = &pFVar41->Sections;
            if (pFVar8 != (FStaticMeshSectionArray *)0x0) {
              pFVar38 = pFVar8;
            }
            this->NumFilteredTriangles =
                 this->NumFilteredTriangles + *(int *)(&pFVar38->field_0x8 + lVar43 * 0x1c);
          }
          else {
            lVar43 = (longlong)(int)local_2d8;
            uVar37 = uVar47;
            if ((int)local_2d8 < *(int *)&(pFVar41->Sections).field_0x28) {
              uVar37 = ~local_2d8 >> 0x1f;
            }
            if ((uVar37 == 0) &&
               (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar29)) {
              pcVar11 = (code *)swi(3);
              uVar30 = (*pcVar11)();
              return (bool)uVar30;
            }
            pFVar8 = *(FStaticMeshSectionArray **)&(pFVar41->Sections).field_0x20;
            pFVar38 = &pFVar41->Sections;
            if (pFVar8 != (FStaticMeshSectionArray *)0x0) {
              pFVar38 = pFVar8;
            }
            pFVar39 = (pUVar27->SectionFilter).AllowedMaterialSlots.AllocatorInstance.Data;
            pFVar9 = pFVar39 + (longlong)(pUVar27->SectionFilter).AllowedMaterialSlots.ArrayNum * 4;
            if (pFVar39 != pFVar9) {
              do {
                if (*(int *)pFVar39 == *(int *)(&pFVar38->field_0x0 + lVar43 * 0x1c))
                goto LAB_148fc0af0;
                pFVar39 = pFVar39 + 4;
              } while (pFVar39 != pFVar9);
            }
            pFVar9 = (pTVar3->AllocatorInstance).Data;
            if (((pFVar9 <= (FScriptContainerElement *)&local_2d8) &&
                ((FScriptContainerElement *)&local_2d8 <
                 pFVar9 + (longlong)(this->FilteredAndUnfilteredSections).ArrayMax * 4)) &&
               (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar29)) {
              pcVar11 = (code *)swi(3);
              uVar30 = (*pcVar11)();
              return (bool)uVar30;
            }
            iVar31 = (this->FilteredAndUnfilteredSections).ArrayNum;
            if (iVar31 == (this->FilteredAndUnfilteredSections).ArrayMax) {
              iVar31 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&pTVar3->AllocatorInstance,(int *)local_298);
            }
            (this->FilteredAndUnfilteredSections).ArrayNum = iVar31 + 1;
            *(uint *)((pTVar3->AllocatorInstance).Data + (longlong)iVar31 * 4) = local_2d8;
            this->NumUnfilteredSections = this->NumUnfilteredSections + 1;
            lVar43 = (longlong)(int)local_2d8;
            uVar37 = uVar47;
            if ((int)local_2d8 < *(int *)&(pFVar41->Sections).field_0x28) {
              uVar37 = ~local_2d8 >> 0x1f;
            }
            if ((uVar37 == 0) &&
               (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar29)) {
              pcVar11 = (code *)swi(3);
              uVar30 = (*pcVar11)();
              return (bool)uVar30;
            }
            pFVar8 = *(FStaticMeshSectionArray **)&(pFVar41->Sections).field_0x20;
            pFVar38 = &pFVar41->Sections;
            if (pFVar8 != (FStaticMeshSectionArray *)0x0) {
              pFVar38 = pFVar8;
            }
            this->NumUnfilteredTriangles =
                 this->NumUnfilteredTriangles + *(int *)(&pFVar38->field_0x8 + lVar43 * 0x1c);
          }
        }
        local_2d8 = local_2d8 + 1;
        pFVar44 = (FStaticMeshLODResources *)(ulonglong)local_2d8;
        this_00 = local_2c0;
        param_1 = local_res10;
      } while ((int)local_2d8 < *(int *)&(pFVar41->Sections).field_0x28);
    }
    pFVar44 = (FStaticMeshLODResources *)&pFVar41->AreaWeightedSectionSamplers;
    if (this->bIsCpuUniformlyDistributedSampling == 0) {
      pFVar44 = pFVar48;
    }
    iStack_290 = this->NumFilteredSections;
    local_298 = (this->FilteredAndUnfilteredSections).AllocatorInstance.Data;
    if ((iStack_290 < 0) &&
       (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar29)) {
      pcVar11 = (code *)swi(3);
      uVar30 = (*pcVar11)();
      return (bool)uVar30;
    }
    local_138._12_4_ = iStack_28c;
    local_138.ArrayNum = iStack_290;
    local_138.DataPtr = (int *)local_298;
    FNDISectionAreaWeightedSampler::Init
              (pFVar41,&local_138,
               (TArray<FStaticMeshSectionAreaWeightedTriangleSampler,TMemoryImageAllocator<0>_> *)
               pFVar44,&this->FilteredAndUnfilteredSectionInfos);
    iStack_290 = this->NumUnfilteredSections;
    local_298 = (this->FilteredAndUnfilteredSections).AllocatorInstance.Data +
                (longlong)this->NumFilteredSections * 4;
    if ((iStack_290 < 0) &&
       (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar29)) {
      pcVar11 = (code *)swi(3);
      uVar30 = (*pcVar11)();
      return (bool)uVar30;
    }
    local_128._12_4_ = iStack_28c;
    local_128.ArrayNum = iStack_290;
    local_128.DataPtr = (int *)local_298;
    FNDISectionAreaWeightedSampler::Init
              (pFVar41,&local_128,
               (TArray<FStaticMeshSectionAreaWeightedTriangleSampler,TMemoryImageAllocator<0>_> *)
               pFVar44,&this->FilteredAndUnfilteredSectionInfos);
    iVar31 = *(int *)&(this_00->VertexBuffers).ColorVertexBuffer.ColorComponentsSRV.Reference;
    uVar46 = (ulonglong)iVar31;
    local_2b8 = (FStaticMeshRenderData *)CONCAT44(local_2b8._4_4_,iVar31);
    if (0 < iVar31) {
      if (0xffff < iVar31) {
        if (2 < (byte)LogNiagara._0_1_) {
          if ((local_2a8 == (UObject *)0x0) || (*(longlong *)&local_2a8->field_0x10 == 0)) {
            ::FString::FString(&local_248,L"None");
          }
          else {
            UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)local_2a8,&local_248,(UObject *)0x0,None);
          }
          if (*(longlong *)&this_00->Sections == 0) {
            ::FString::FString(&local_198,L"None");
          }
          else {
            UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)this_00,&local_198,(UObject *)0x0,None);
          }
          if (param_1->_padding_ == 0) {
            ::FString::FString(&local_1a8,L"None");
          }
          else {
            UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)param_1,&local_1a8,(UObject *)0x0,None);
          }
          UE::Logging::Private::BasicLog<3>
                    (&`public:_bool___cdecl_NDIStaticMeshLocal::FInstanceData_GameThread::Init(UNiagaraDataInterfaceStaticMesh*___ptr64,FNiagaraSystemInstance*___ptr64)___ptr64'
                      ::__l166::LOG_Static,(FLogCategoryBase *)&LogNiagara);
          if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
          }
          if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_198.Data.AllocatorInstance.Data);
          }
          if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_248.Data.AllocatorInstance.Data);
          }
        }
        bVar29 = false;
        goto LAB_148fc1646;
      }
      iVar32 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x30,0x10,iVar31,&(this->CachedSockets).AllocatorInstance,(int *)local_2c8
                          ,(int *)local_278);
      DefaultConstructItems<UE::Math::TTransform<float>,int>
                ((this->CachedSockets).AllocatorInstance.Data + (longlong)iVar32 * 0x30,iVar31);
      if (0 < iVar31) {
        local_2c0 = (FStaticMeshLODResources *)0x0;
        pFVar41 = pFVar48;
        pFVar44 = pFVar48;
        do {
          uVar45 = (uint)pFVar41;
          uVar42 = ~uVar45 >> 0x1f;
          uVar37 = uVar47;
          if ((int)uVar45 < (this->CachedSockets).ArrayNum) {
            uVar37 = uVar42;
          }
          if ((uVar37 == 0) &&
             (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar29)) {
            pcVar11 = (code *)swi(3);
            uVar30 = (*pcVar11)();
            return (bool)uVar30;
          }
          local_2c8 = (this->CachedSockets).AllocatorInstance.Data;
          uVar37 = uVar47;
          if ((int)uVar45 <
              *(int *)&(this_00->VertexBuffers).ColorVertexBuffer.ColorComponentsSRV.Reference) {
            uVar37 = uVar42;
          }
          if ((uVar37 == 0) &&
             (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar29)) {
            pcVar11 = (code *)swi(3);
            uVar30 = (*pcVar11)();
            return (bool)uVar30;
          }
          lVar43 = *(longlong *)
                    (&((this_00->VertexBuffers).ColorVertexBuffer.VertexData)->field_0x0 +
                    (longlong)pFVar44 * 8);
          auVar12._4_4_ = (float)*(double *)(lVar43 + 0x38);
          auVar12._0_4_ = (float)*(double *)(lVar43 + 0x30);
          auVar12._8_4_ = (float)*(double *)(lVar43 + 0x40);
          auVar12._12_4_ = 0;
          *(undefined1 (*) [16])(local_2c8 + (longlong)local_2c0 + 0x10) = auVar12;
          uVar37 = uVar47;
          if ((int)uVar45 < (this->CachedSockets).ArrayNum) {
            uVar37 = uVar42;
          }
          if ((uVar37 == 0) &&
             (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar29)) {
            pcVar11 = (code *)swi(3);
            uVar30 = (*pcVar11)();
            return (bool)uVar30;
          }
          local_2c8 = (this->CachedSockets).AllocatorInstance.Data;
          uVar37 = uVar47;
          if ((int)uVar45 <
              *(int *)&(this_00->VertexBuffers).ColorVertexBuffer.ColorComponentsSRV.Reference) {
            uVar37 = uVar42;
          }
          if ((uVar37 == 0) &&
             (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar29)) {
            pcVar11 = (code *)swi(3);
            uVar30 = (*pcVar11)();
            return (bool)uVar30;
          }
          lVar43 = *(longlong *)
                    (&((this_00->VertexBuffers).ColorVertexBuffer.VertexData)->field_0x0 +
                    (longlong)pFVar44 * 8);
          local_258.Roll = (float)*(double *)(lVar43 + 0x58);
          local_258.Yaw = (float)*(double *)(lVar43 + 0x50);
          local_258.Pitch = (float)*(double *)(lVar43 + 0x48);
          pTVar35 = UE::Math::TRotator<float>::Quaternion(&local_258,&local_98);
          local_88._0_4_ = pTVar35->X;
          local_88._4_4_ = pTVar35->Y;
          uStack_80._0_4_ = pTVar35->Z;
          uStack_80._4_4_ = pTVar35->W;
          *(undefined8 *)(local_2c8 + (longlong)local_2c0) = local_88;
          *(undefined8 *)(local_2c8 + (longlong)local_2c0 + 8) = uStack_80;
          uVar37 = uVar47;
          if ((int)uVar45 < (this->CachedSockets).ArrayNum) {
            uVar37 = uVar42;
          }
          if ((uVar37 == 0) &&
             (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar29)) {
            pcVar11 = (code *)swi(3);
            uVar30 = (*pcVar11)();
            return (bool)uVar30;
          }
          local_2c8 = (this->CachedSockets).AllocatorInstance.Data;
          uVar37 = uVar47;
          if ((int)uVar45 <
              *(int *)&(this_00->VertexBuffers).ColorVertexBuffer.ColorComponentsSRV.Reference) {
            uVar37 = uVar42;
          }
          if ((uVar37 == 0) &&
             (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar29)) {
            pcVar11 = (code *)swi(3);
            uVar30 = (*pcVar11)();
            return (bool)uVar30;
          }
          pFVar41 = (FStaticMeshLODResources *)(ulonglong)(uVar45 + 1);
          lVar43 = *(longlong *)
                    (&((this_00->VertexBuffers).ColorVertexBuffer.VertexData)->field_0x0 +
                    (longlong)pFVar44 * 8);
          pFVar44 = (FStaticMeshLODResources *)((longlong)&pFVar44->_padding_ + 1);
          auVar13._4_4_ = (float)*(double *)(lVar43 + 0x68);
          auVar13._0_4_ = (float)*(double *)(lVar43 + 0x60);
          auVar13._8_4_ = (float)*(double *)(lVar43 + 0x70);
          auVar13._12_4_ = 0;
          *(undefined1 (*) [16])(local_2c8 + (longlong)local_2c0 + 0x20) = auVar13;
          local_2c0 = (FStaticMeshLODResources *)((longlong)local_2c0 + 0x30);
        } while ((longlong)pFVar44 < (longlong)uVar46);
        uVar46 = (ulonglong)local_2b8 & 0xffffffff;
        pFVar41 = local_2a0;
        param_1 = local_res10;
      }
      this->NumFilteredSockets = 0;
      if (0 < (param_1->FilteredSockets).ArrayNum) {
        if ((this->FilteredAndUnfilteredSockets).ArrayMax < (int)uVar46) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,(int)uVar46,&(this->FilteredAndUnfilteredSockets).AllocatorInstance,
                     (this->FilteredAndUnfilteredSockets).ArrayNum,local_260);
        }
        if (0 < (param_1->FilteredSockets).ArrayNum) {
          pTVar4 = &this->FilteredAndUnfilteredSockets;
          local_res10 = (UNiagaraDataInterfaceStaticMesh *)0x0;
          pFVar41 = pFVar48;
          do {
            uVar42 = (uint)pFVar41;
            uVar37 = uVar47;
            if ((int)uVar42 < (param_1->FilteredSockets).ArrayNum) {
              uVar37 = ~uVar42 >> 0x1f;
            }
            if ((uVar37 == 0) &&
               (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar29)) {
              pcVar11 = (code *)swi(3);
              uVar30 = (*pcVar11)();
              return (bool)uVar30;
            }
            pFVar10 = (this_00->VertexBuffers).ColorVertexBuffer.VertexData;
            local_178 = *(FName *)((param_1->FilteredSockets).AllocatorInstance.Data +
                                  (longlong)local_res10);
            for (pFVar40 = pFVar10;
                pFVar40 !=
                (FColorVertexData *)
                ((longlong)&pFVar10->field_0x0 +
                (longlong)
                *(int *)&(this_00->VertexBuffers).ColorVertexBuffer.ColorComponentsSRV.Reference * 8
                ); pFVar40 = (FColorVertexData *)&pFVar40->field_0x8) {
              if (*(FName *)(*(longlong *)pFVar40 + 0x28) == local_178) {
                lVar43 = (longlong)pFVar40 - (longlong)pFVar10 >> 3;
                if ((int)lVar43 != -1) {
                  this->NumFilteredSockets = this->NumFilteredSockets + 1;
                  local_2d2 = (undefined2)lVar43;
                  pFVar9 = (pTVar4->AllocatorInstance).Data;
                  if (((pFVar9 <= (FScriptContainerElement *)&local_2d2) &&
                      ((FScriptContainerElement *)&local_2d2 <
                       pFVar9 + (longlong)(this->FilteredAndUnfilteredSockets).ArrayMax * 2)) &&
                     (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar29)) {
                    pcVar11 = (code *)swi(3);
                    uVar30 = (*pcVar11)();
                    return (bool)uVar30;
                  }
                  iVar31 = (this->FilteredAndUnfilteredSockets).ArrayNum;
                  if (iVar31 == (this->FilteredAndUnfilteredSockets).ArrayMax) {
                    iVar31 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x202,&pTVar4->AllocatorInstance,local_260);
                  }
                  (this->FilteredAndUnfilteredSockets).ArrayNum = iVar31 + 1;
                  *(undefined2 *)((pTVar4->AllocatorInstance).Data + (longlong)iVar31 * 2) =
                       local_2d2;
                  goto LAB_148fc14bd;
                }
                break;
              }
            }
            if (2 < (byte)LogNiagara._0_1_) {
              if ((local_2a8 == (UObject *)0x0) || (*(longlong *)&local_2a8->field_0x10 == 0)) {
                ::FString::FString(&local_218,L"None");
              }
              else {
                UObjectBaseUtility::GetFullName
                          ((UObjectBaseUtility *)local_2a8,&local_218,(UObject *)0x0,None);
              }
              local_2c8 = (FScriptContainerElement *)L"";
              if (local_218.Data.ArrayNum != 0) {
                local_2c8 = local_218.Data.AllocatorInstance.Data;
              }
              if (*(longlong *)&this_00->Sections == 0) {
                ::FString::FString(&local_228,L"None");
              }
              else {
                UObjectBaseUtility::GetFullName
                          ((UObjectBaseUtility *)this_00,&local_228,(UObject *)0x0,None);
              }
              local_278 = (FScriptContainerElement *)L"";
              if (local_228.Data.ArrayNum != 0) {
                local_278 = local_228.Data.AllocatorInstance.Data;
              }
              pFVar36 = ::FName::ToString(&local_178,&local_118);
              if ((pFVar36->Data).ArrayNum == 0) {
                local_298 = (FScriptContainerElement *)0x15060d16c;
              }
              else {
                local_298 = (pFVar36->Data).AllocatorInstance.Data;
              }
              if (param_1->_padding_ == 0) {
                ::FString::FString(&local_238,L"None");
              }
              else {
                UObjectBaseUtility::GetFullName
                          ((UObjectBaseUtility *)param_1,&local_238,(UObject *)0x0,None);
              }
              UE::Logging::Private::BasicLog<3>
                        (&`public:_bool___cdecl_NDIStaticMeshLocal::FInstanceData_GameThread::Init(UNiagaraDataInterfaceStaticMesh*___ptr64,FNiagaraSystemInstance*___ptr64)___ptr64'
                          ::__l194::LOG_Static,(FLogCategoryBase *)&LogNiagara);
              if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_238.Data.AllocatorInstance.Data);
              }
              if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_118.Data.AllocatorInstance.Data);
              }
              if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_228.Data.AllocatorInstance.Data);
              }
              if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_218.Data.AllocatorInstance.Data);
              }
            }
LAB_148fc14bd:
            local_res10 = (UNiagaraDataInterfaceStaticMesh *)((longlong)local_res10 + 8);
            pFVar41 = (FStaticMeshLODResources *)(ulonglong)(uVar42 + 1);
          } while ((int)(uVar42 + 1) < (param_1->FilteredSockets).ArrayNum);
          uVar46 = (ulonglong)local_2b8 & 0xffffffff;
          pFVar41 = local_2a0;
        }
        do {
          local_2b0[0] = (ushort)pFVar48;
          TArray<unsigned_short,TSizedDefaultAllocator<32>_>::AddUniqueImpl<unsigned_short>
                    (&this->FilteredAndUnfilteredSockets,local_2b0);
          uVar37 = (int)pFVar48 + 1;
          pFVar48 = (FStaticMeshLODResources *)(ulonglong)uVar37;
        } while ((int)uVar37 < (int)uVar46);
      }
    }
    UStaticMesh::GetBounds
              ((UStaticMesh *)this_00,(TBoxSphereBounds<double,double> *)&local_108._s_0);
    (this->PreSkinnedLocalBoundsCenter).field0_0x0._s_0.X = (float)local_108._s_0.X;
    (this->PreSkinnedLocalBoundsCenter).field0_0x0._s_0.Y = (float)local_108._s_0.Y;
    (this->PreSkinnedLocalBoundsCenter).field0_0x0._s_0.Z = (float)local_108._s_0.Z;
    (this->PreSkinnedLocalBoundsExtents).field0_0x0._s_0.X = (float)local_f0;
    (this->PreSkinnedLocalBoundsExtents).field0_0x0._s_0.Y = (float)local_e8;
    (this->PreSkinnedLocalBoundsExtents).field0_0x0._s_0.Z = (float)local_e0;
  }
  pFVar28 = local_res18;
  local_res8[0] = false;
  local_res20[0] = false;
  FNiagaraSystemInstance::EvaluateBoundFunction
            (local_res18,GetTriangleCoordAtUVName,local_res8,local_res20);
  FNiagaraSystemInstance::EvaluateBoundFunction
            (pFVar28,GetTriangleCoordInAabbName,local_res8,local_res20);
  if ((this_00 == (FStaticMeshLODResources *)0x0) || (((uint)this_00->_padding_ >> 0x1e & 1) != 0))
  {
    bVar29 = false;
  }
  else {
    bVar29 = true;
  }
  if ((local_res8[0] == false) || (!bVar29)) {
    local_2d0.RequiresCpuAccess = false;
  }
  else {
    local_2d0.RequiresCpuAccess = true;
  }
  if (((local_res20[0] == false) || (!bVar29)) || (((uint)param_1->_padding_ >> 2 & 1) == 0)) {
    local_2d0.RequiresGpuAccess = false;
  }
  else {
    local_2d0.RequiresGpuAccess = true;
  }
  this->UvMappingUsage = local_2d0;
  if (this->UvMappingIndexSet != -1) {
    UpdateUvMapping(this,pFVar28);
  }
  bVar29 = true;
LAB_148fc1646:
  if (pFVar41 != (FStaticMeshLODResources *)0x0) {
    plVar1 = &pFVar41->_padding_;
    LOCK();
    lVar43 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar43 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar41->_padding_)(pFVar41,1);
    }
  }
  return bVar29;
}

// Tick @ 148fce040

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
NDIStaticMeshLocal::FInstanceData_GameThread::Tick
          (FInstanceData_GameThread *this,UNiagaraDataInterfaceStaticMesh *param_1,
          FNiagaraSystemInstance *param_2,float param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  UObject *pUVar10;
  UStaticMesh *pUVar11;
  UStaticMesh *pUVar12;
  double *pdVar13;
  int local_res8;
  undefined4 uStackX_c;
  int local_58 [2];
  UObject *local_50;
  undefined1 local_48 [48];
  
  pUVar10 = FWeakObjectPtr::Get(&(this->ComponentWeakPtr).WeakPtr);
  if ((((this->bComponentValid == 0) || (pUVar10 != (UObject *)0x0)) &&
      ((pUVar11 = (UStaticMesh *)FWeakObjectPtr::Get(&(this->StaticMeshWeakPtr).WeakPtr),
       this->bMeshValid == 0 || (pUVar11 != (UStaticMesh *)0x0)))) &&
     ((param_1 == (UNiagaraDataInterfaceStaticMesh *)0x0 || (this->ChangeId == param_1->ChangeId))))
  {
    pUVar12 = (UStaticMesh *)0x0;
    local_50 = (UObject *)0x0;
    if (param_1 != (UNiagaraDataInterfaceStaticMesh *)0x0) {
      if ((this->MeshParameterBinding).UObjectOffset != -1) {
        FNiagaraParameterStore::GetUObject((this->MeshParameterBinding).BoundStore,(int)&local_res8)
        ;
        pUVar12 = (UStaticMesh *)CONCAT44(uStackX_c,local_res8);
      }
      pUVar12 = UNiagaraDataInterfaceStaticMesh::ResolveStaticMesh
                          (param_1,&local_50,param_2,(UObject *)pUVar12);
    }
    if ((pUVar10 == local_50) && (pUVar11 == pUVar12)) {
      if (pUVar11 != (UStaticMesh *)0x0) {
        local_res8 = -1;
        bVar9 = CalculateLODIndex(this,param_1,param_2,pUVar11,&local_res8,local_58);
        if (!bVar9) {
          return true;
        }
        if (local_res8 != this->CachedLODIdx) {
          return true;
        }
      }
      this->DeltaSeconds = param_3;
      pUVar10 = FWeakObjectPtr::Get(&(this->ComponentWeakPtr).WeakPtr);
      if (this->bCaptureTransformsPerFrame != 0) {
        dVar1 = (this->Transform).M[0][1];
        dVar2 = (this->Transform).M[0][2];
        dVar3 = (this->Transform).M[0][3];
        (this->PrevTransform).M[0][0] = (this->Transform).M[0][0];
        (this->PrevTransform).M[0][1] = dVar1;
        dVar1 = (this->Transform).M[1][0];
        dVar4 = (this->Transform).M[1][1];
        (this->PrevTransform).M[0][2] = dVar2;
        (this->PrevTransform).M[0][3] = dVar3;
        dVar2 = (this->Transform).M[1][2];
        dVar3 = (this->Transform).M[1][3];
        (this->PrevTransform).M[1][0] = dVar1;
        (this->PrevTransform).M[1][1] = dVar4;
        dVar1 = (this->Transform).M[2][0];
        dVar4 = (this->Transform).M[2][1];
        (this->PrevTransform).M[1][2] = dVar2;
        (this->PrevTransform).M[1][3] = dVar3;
        dVar2 = (this->Transform).M[2][2];
        dVar3 = (this->Transform).M[2][3];
        (this->PrevTransform).M[2][0] = dVar1;
        (this->PrevTransform).M[2][1] = dVar4;
        dVar1 = (this->Transform).M[3][0];
        dVar4 = (this->Transform).M[3][1];
        (this->PrevTransform).M[2][2] = dVar2;
        (this->PrevTransform).M[2][3] = dVar3;
        dVar2 = (this->Transform).M[3][2];
        dVar3 = (this->Transform).M[3][3];
        (this->PrevTransform).M[3][0] = dVar1;
        (this->PrevTransform).M[3][1] = dVar4;
        dVar1 = (this->TransformInverseTransposed).M[0][0];
        dVar4 = (this->TransformInverseTransposed).M[0][1];
        (this->PrevTransform).M[3][2] = dVar2;
        (this->PrevTransform).M[3][3] = dVar3;
        dVar2 = (this->TransformInverseTransposed).M[0][2];
        dVar3 = (this->TransformInverseTransposed).M[0][3];
        (this->PrevTransformInverseTransposed).M[0][0] = dVar1;
        (this->PrevTransformInverseTransposed).M[0][1] = dVar4;
        dVar1 = (this->TransformInverseTransposed).M[1][0];
        dVar4 = (this->TransformInverseTransposed).M[1][1];
        (this->PrevTransformInverseTransposed).M[0][2] = dVar2;
        (this->PrevTransformInverseTransposed).M[0][3] = dVar3;
        dVar2 = (this->TransformInverseTransposed).M[1][2];
        dVar3 = (this->TransformInverseTransposed).M[1][3];
        (this->PrevTransformInverseTransposed).M[1][0] = dVar1;
        (this->PrevTransformInverseTransposed).M[1][1] = dVar4;
        dVar1 = (this->TransformInverseTransposed).M[2][0];
        dVar4 = (this->TransformInverseTransposed).M[2][1];
        (this->PrevTransformInverseTransposed).M[1][2] = dVar2;
        (this->PrevTransformInverseTransposed).M[1][3] = dVar3;
        dVar2 = (this->TransformInverseTransposed).M[2][2];
        dVar3 = (this->TransformInverseTransposed).M[2][3];
        (this->PrevTransformInverseTransposed).M[2][0] = dVar1;
        (this->PrevTransformInverseTransposed).M[2][1] = dVar4;
        dVar1 = (this->TransformInverseTransposed).M[3][0];
        dVar4 = (this->TransformInverseTransposed).M[3][1];
        (this->PrevTransformInverseTransposed).M[2][2] = dVar2;
        (this->PrevTransformInverseTransposed).M[2][3] = dVar3;
        dVar2 = (this->TransformInverseTransposed).M[3][2];
        dVar3 = (this->TransformInverseTransposed).M[3][3];
        (this->PrevTransformInverseTransposed).M[3][0] = dVar1;
        (this->PrevTransformInverseTransposed).M[3][1] = dVar4;
        fVar5 = (this->Rotation).X;
        fVar6 = (this->Rotation).Y;
        fVar7 = (this->Rotation).Z;
        fVar8 = (this->Rotation).W;
        (this->PrevTransformInverseTransposed).M[3][2] = dVar2;
        (this->PrevTransformInverseTransposed).M[3][3] = dVar3;
        (this->PrevRotation).X = fVar5;
        (this->PrevRotation).Y = fVar6;
        (this->PrevRotation).Z = fVar7;
        (this->PrevRotation).W = fVar8;
        UpdateTransforms(this,pUVar10,param_2);
      }
      if (this->bUsePhysicsVelocity != 0) {
        pdVar13 = (double *)
                  (**(code **)((longlong)*this->SceneComponentUtils + 0x30))
                            (this->SceneComponentUtils,local_48,pUVar10);
        dVar1 = pdVar13[1];
        (this->PhysicsVelocity).field0_0x0._s_0.X = *pdVar13;
        (this->PhysicsVelocity).field0_0x0._s_0.Y = dVar1;
        (this->PhysicsVelocity).field0_0x0._s_0.Z = pdVar13[2];
      }
      if ((this->UvMappingIndexSet != -1) && (*(longlong *)&(this->UvMapping).field_0x8 == 0)) {
        UpdateUvMapping(this,param_2);
      }
      return false;
    }
  }
  return true;
}

// UpdateTransforms @ 148fd1310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
NDIStaticMeshLocal::FInstanceData_GameThread::UpdateTransforms
          (FInstanceData_GameThread *this,UObject *param_1,FNiagaraSystemInstance *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  double dVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [12];
  undefined1 auVar15 [12];
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  uint uVar19;
  uint uVar20;
  char cVar21;
  bool bVar22;
  int iVar23;
  TMatrix<double> *pTVar24;
  uint uVar25;
  longlong lVar26;
  TTransform<double> *this_00;
  longlong lVar27;
  longlong lVar28;
  double extraout_XMM0_Qb;
  double dVar35;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar41;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  double dVar47;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined4 uVar50;
  undefined4 uVar51;
  undefined1 auVar52 [16];
  double dVar53;
  double dVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined4 uVar58;
  undefined4 uVar59;
  undefined4 uVar60;
  uint uVar61;
  uint uVar62;
  uint uVar63;
  uint uVar64;
  undefined1 auStackY_2f8 [32];
  TTransform<double> local_2b8;
  TMatrix<double> local_228;
  TMatrix<double> local_1a8;
  TTransform<double> local_128;
  ulonglong local_c8;
  uint uVar46;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  dVar41 = (param_2->WorldTransform).Rotation.XY.m128d_f64[1];
  (this->SystemInstanceWorldTransform).Rotation.XY.m128d_f64[0] =
       (param_2->WorldTransform).Rotation.XY.m128d_f64[0];
  (this->SystemInstanceWorldTransform).Rotation.XY.m128d_f64[1] = dVar41;
  dVar41 = (param_2->WorldTransform).Rotation.ZW.m128d_f64[1];
  (this->SystemInstanceWorldTransform).Rotation.ZW.m128d_f64[0] =
       (param_2->WorldTransform).Rotation.ZW.m128d_f64[0];
  (this->SystemInstanceWorldTransform).Rotation.ZW.m128d_f64[1] = dVar41;
  dVar41 = (param_2->WorldTransform).Translation.XY.m128d_f64[1];
  (this->SystemInstanceWorldTransform).Translation.XY.m128d_f64[0] =
       (param_2->WorldTransform).Translation.XY.m128d_f64[0];
  (this->SystemInstanceWorldTransform).Translation.XY.m128d_f64[1] = dVar41;
  dVar41 = (param_2->WorldTransform).Translation.ZW.m128d_f64[1];
  (this->SystemInstanceWorldTransform).Translation.ZW.m128d_f64[0] =
       (param_2->WorldTransform).Translation.ZW.m128d_f64[0];
  (this->SystemInstanceWorldTransform).Translation.ZW.m128d_f64[1] = dVar41;
  dVar41 = (param_2->WorldTransform).Scale3D.XY.m128d_f64[1];
  (this->SystemInstanceWorldTransform).Scale3D.XY.m128d_f64[0] =
       (param_2->WorldTransform).Scale3D.XY.m128d_f64[0];
  (this->SystemInstanceWorldTransform).Scale3D.XY.m128d_f64[1] = dVar41;
  dVar41 = (param_2->WorldTransform).Scale3D.ZW.m128d_f64[1];
  (this->SystemInstanceWorldTransform).Scale3D.ZW.m128d_f64[0] =
       (param_2->WorldTransform).Scale3D.ZW.m128d_f64[0];
  (this->SystemInstanceWorldTransform).Scale3D.ZW.m128d_f64[1] = dVar41;
  uVar2 = *(undefined8 *)((longlong)&(param_2->LWCTile).field0_0x0 + 4);
  (this->LWCTileOffset).field0_0x0._s_0.X =
       (double)(param_2->LWCTile).field0_0x0._s_0.X * __real_c140000000000000;
  dVar41 = (double)(float)((ulonglong)uVar2 >> 0x20) * _UNK_151d3bdc8;
  (this->LWCTileOffset).field0_0x0._s_0.Y =
       (double)(float)uVar2 * ___xmm_c140000000000000c140000000000000;
  (this->LWCTileOffset).field0_0x0._s_0.Z = dVar41;
  local_128.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_128.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_128.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_128.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_128.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_128.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_128.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  dVar41 = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_128.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_128.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_128.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_128.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_128.Scale3D.XY.m128d_f64[1] = dVar41;
  cVar21 = (**(code **)((longlong)*this->SceneComponentUtils + 0x18))
                     (this->SceneComponentUtils,local_128.Scale3D.XY.m128d_f64[0],&local_128,
                      &this->ISMTransforms);
  if (cVar21 == '\0') {
    piVar1 = &(this->ISMTransforms).ArrayMax;
    (this->ISMTransforms).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,0x10,0,&(this->ISMTransforms).AllocatorInstance,0,piVar1);
    }
    local_128.Rotation.XY.m128d_f64[0] =
         (this->SystemInstanceWorldTransform).Rotation.XY.m128d_f64[0];
    local_128.Rotation.XY.m128d_f64[1] =
         (this->SystemInstanceWorldTransform).Rotation.XY.m128d_f64[1];
    local_128.Rotation.ZW.m128d_f64[0] =
         (this->SystemInstanceWorldTransform).Rotation.ZW.m128d_f64[0];
    local_128.Rotation.ZW.m128d_f64[1] =
         (this->SystemInstanceWorldTransform).Rotation.ZW.m128d_f64[1];
    local_128.Translation.XY.m128d_f64[0] =
         (this->SystemInstanceWorldTransform).Translation.XY.m128d_f64[0];
    local_128.Translation.XY.m128d_f64[1] =
         (this->SystemInstanceWorldTransform).Translation.XY.m128d_f64[1];
    local_128.Translation.ZW.m128d_f64[0] =
         (this->SystemInstanceWorldTransform).Translation.ZW.m128d_f64[0];
    local_128.Translation.ZW.m128d_f64[1] =
         (this->SystemInstanceWorldTransform).Translation.ZW.m128d_f64[1];
    local_128.Scale3D.XY.m128d_f64[0] = (this->SystemInstanceWorldTransform).Scale3D.XY.m128d_f64[0]
    ;
    local_128.Scale3D.XY.m128d_f64[1] = (this->SystemInstanceWorldTransform).Scale3D.XY.m128d_f64[1]
    ;
    local_128.Scale3D.ZW.m128d_f64[0] = (this->SystemInstanceWorldTransform).Scale3D.ZW.m128d_f64[0]
    ;
    local_128.Scale3D.ZW.m128d_f64[1] = (this->SystemInstanceWorldTransform).Scale3D.ZW.m128d_f64[1]
    ;
    *(undefined8 *)&(this->OwnerToMeshVector).field0_0x0 =
         UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    (this->OwnerToMeshVector).field0_0x0._s_0.Z =
         UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  }
  else {
    iVar23 = this->InstanceIndex;
    dVar35 = extraout_XMM0_Qb;
    if ((-1 < iVar23) && (iVar23 < (this->ISMTransforms).ArrayNum)) {
      if ((iVar23 < 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar4 = (this->ISMTransforms).AllocatorInstance.Data;
      lVar26 = (longlong)iVar23 * 0x60;
      local_128.Rotation.XY.m128d_f64[0] = *(double *)(pFVar4 + lVar26);
      local_128.Rotation.XY.m128d_f64[1] = *(double *)(pFVar4 + lVar26 + 8);
      local_128.Rotation.ZW.m128d_f64[0] = *(double *)(pFVar4 + lVar26 + 0x10);
      local_128.Rotation.ZW.m128d_f64[1] = *(double *)(pFVar4 + lVar26 + 0x10 + 8);
      local_128.Translation.XY.m128d_f64 = *(double (*) [2])(pFVar4 + lVar26 + 0x20);
      local_128.Translation.ZW.m128d_f64[0] = *(double *)(pFVar4 + lVar26 + 0x30);
      local_128.Translation.ZW.m128d_f64[1] = *(double *)(pFVar4 + lVar26 + 0x30 + 8);
      local_128.Scale3D.XY.m128d_f64[0] = *(double *)(pFVar4 + lVar26 + 0x40);
      dVar35 = *(double *)(pFVar4 + lVar26 + 0x40 + 8);
      local_128.Scale3D.ZW.m128d_f64[0] = *(double *)(pFVar4 + lVar26 + 0x50);
      dVar41 = *(double *)(pFVar4 + lVar26 + 0x50 + 8);
      local_128.Scale3D.XY.m128d_f64[1] = dVar35;
      local_128.Scale3D.ZW.m128d_f64[1] = dVar41;
    }
    auVar38 = *(undefined1 (*) [16])(this->SystemInstanceWorldTransform).Translation.XY.m128d_f64;
    auVar14._4_8_ = dVar41;
    auVar14._0_4_ = local_128.Translation.XY.m128d_f64[0]._4_4_;
    auVar36._0_8_ = auVar14._0_8_ << 0x20;
    auVar36._8_4_ = local_128.Translation.XY.m128d_f64[1]._0_4_;
    auVar36._12_4_ = local_128.Translation.XY.m128d_f64[1]._4_4_;
    dVar41 = (this->SystemInstanceWorldTransform).Translation.ZW.m128d_f64[0];
    auVar15._4_8_ = dVar35;
    auVar15._0_4_ = auVar38._4_4_;
    auVar30._0_8_ = auVar15._0_8_ << 0x20;
    auVar30._8_4_ = auVar38._8_4_;
    auVar30._12_4_ = auVar38._12_4_;
    (this->OwnerToMeshVector).field0_0x0._s_0.X =
         (float)(local_128.Translation.XY.m128d_f64[0] - auVar38._0_8_);
    (this->OwnerToMeshVector).field0_0x0._s_0.Y = (float)(auVar36._8_8_ - auVar30._8_8_);
    (this->OwnerToMeshVector).field0_0x0._s_0.Z =
         (float)(local_128.Translation.ZW.m128d_f64[0] - dVar41);
    local_128.Translation.XY.m128d_f64[0] =
         local_128.Translation.XY.m128d_f64[0] + (this->LWCTileOffset).field0_0x0._s_0.X;
    local_128.Translation.XY.m128d_f64[1] =
         local_128.Translation.XY.m128d_f64[1] + (this->LWCTileOffset).field0_0x0._s_0.Y;
    local_128.Translation.ZW.m128d_f64[0] =
         local_128.Translation.ZW.m128d_f64[0] + (this->LWCTileOffset).field0_0x0._s_0.Z;
    local_128.Translation.ZW.m128d_f64[1] = local_128.Translation.ZW.m128d_f64[1] + 0.0;
  }
  this_00 = &local_128;
  pTVar24 = UE::Math::TTransform<double>::ToMatrixWithScale(this_00,&local_228);
  uVar64 = _UNK_15061cc8c;
  uVar63 = _UNK_15061cc88;
  uVar20 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar19 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  auVar38._8_8_ = local_128.Scale3D.XY.m128d_f64[1];
  auVar38._0_8_ = local_128.Scale3D.XY.m128d_f64[0];
  dVar41 = pTVar24->M[0][1];
  uVar46 = (uint)((ulonglong)local_128.Scale3D.ZW.m128d_f64[0] >> 0x20);
  auVar42._0_8_ =
       (double)CONCAT44(uVar46 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(local_128.Scale3D.ZW.m128d_f64[0],0) &
                        (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auVar42._8_4_ = SUB84(local_128.Scale3D.ZW.m128d_f64[1],0) & _UNK_15061cc88;
  auVar42._12_4_ = (uint)((ulonglong)local_128.Scale3D.ZW.m128d_f64[1] >> 0x20) & _UNK_15061cc8c;
  (this->Transform).M[0][0] = pTVar24->M[0][0];
  (this->Transform).M[0][1] = dVar41;
  dVar41 = pTVar24->M[0][3];
  uVar61 = SUB84(local_128.Scale3D.XY.m128d_f64[0],0) & uVar19;
  uVar62 = (uint)((ulonglong)local_128.Scale3D.XY.m128d_f64[0] >> 0x20) & uVar20;
  uVar63 = SUB84(local_128.Scale3D.XY.m128d_f64[1],0) & uVar63;
  uVar64 = (uint)((ulonglong)local_128.Scale3D.XY.m128d_f64[1] >> 0x20) & uVar64;
  (this->Transform).M[0][2] = pTVar24->M[0][2];
  (this->Transform).M[0][3] = dVar41;
  dVar41 = pTVar24->M[1][1];
  (this->Transform).M[1][0] = pTVar24->M[1][0];
  (this->Transform).M[1][1] = dVar41;
  dVar41 = pTVar24->M[1][3];
  (this->Transform).M[1][2] = pTVar24->M[1][2];
  (this->Transform).M[1][3] = dVar41;
  dVar41 = pTVar24->M[2][1];
  (this->Transform).M[2][0] = pTVar24->M[2][0];
  (this->Transform).M[2][1] = dVar41;
  dVar41 = pTVar24->M[2][3];
  (this->Transform).M[2][2] = pTVar24->M[2][2];
  (this->Transform).M[2][3] = dVar41;
  dVar41 = pTVar24->M[3][1];
  (this->Transform).M[3][0] = pTVar24->M[3][0];
  (this->Transform).M[3][1] = dVar41;
  dVar41 = pTVar24->M[3][3];
  (this->Transform).M[3][2] = pTVar24->M[3][2];
  (this->Transform).M[3][3] = dVar41;
  auVar37._8_8_ =
       -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[3] < auVar42._8_8_);
  auVar37._0_8_ =
       -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[2] < auVar42._0_8_);
  uVar25 = movmskpd((int)this_00,auVar37);
  auVar29._8_8_ =
       -(ulonglong)
        ((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < (double)CONCAT44(uVar64,uVar63));
  auVar29._0_8_ =
       -(ulonglong)
        ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < (double)CONCAT44(uVar62,uVar61));
  iVar23 = movmskpd((int)pTVar24,auVar29);
  if ((uVar25 & 0x3fffffff) == 0 && iVar23 == 0) {
    local_2b8.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    local_2b8.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    local_2b8.Translation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    local_2b8.Translation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    local_2b8.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    local_2b8.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  }
  else {
    dVar12 = local_128.Rotation.XY.m128d_f64[0] *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    dVar13 = local_128.Rotation.XY.m128d_f64[1] *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    uVar59 = SUB84(dVar13,0);
    uVar60 = (undefined4)((ulonglong)dVar13 >> 0x20);
    dVar10 = local_128.Rotation.ZW.m128d_f64[0] *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    dVar11 = local_128.Rotation.ZW.m128d_f64[1] *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    uVar58 = (undefined4)((ulonglong)dVar11 >> 0x20);
    lVar26 = -(ulonglong)
              ((double)CONCAT44(uVar46 & uVar20,SUB84(local_128.Scale3D.ZW.m128d_f64[0],0) & uVar19)
              <= (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
    auVar52._8_4_ = uVar59;
    auVar52._0_8_ = dVar12;
    auVar52._12_4_ = uVar60;
    lVar27 = -(ulonglong)
              ((double)CONCAT44(uVar62,uVar61) <=
              (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
    lVar28 = -(ulonglong)
              ((double)CONCAT44(uVar64,uVar63) <=
              (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
    auVar6._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
    auVar6._0_8_ = local_128.Scale3D.ZW.m128d_f64[0];
    auVar6._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
    auVar30 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar6);
    auVar38 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar38);
    local_2b8.Scale3D.XY.m128d_f64[0]._0_4_ = ~(uint)lVar27 & auVar38._0_4_;
    local_2b8.Scale3D.XY.m128d_f64[0]._4_4_ = ~(uint)((ulonglong)lVar27 >> 0x20) & auVar38._4_4_;
    local_2b8.Scale3D.XY.m128d_f64[1]._0_4_ = ~(uint)lVar28 & auVar38._8_4_;
    local_2b8.Scale3D.XY.m128d_f64[1]._4_4_ = ~(uint)((ulonglong)lVar28 >> 0x20) & auVar38._12_4_;
    dVar53 = local_128.Translation.XY.m128d_f64[0] *
             (double)CONCAT44(local_2b8.Scale3D.XY.m128d_f64[0]._4_4_,
                              local_2b8.Scale3D.XY.m128d_f64[0]._0_4_);
    dVar54 = local_128.Translation.XY.m128d_f64[1] *
             (double)CONCAT44(local_2b8.Scale3D.XY.m128d_f64[1]._4_4_,
                              local_2b8.Scale3D.XY.m128d_f64[1]._0_4_);
    auVar43._8_4_ = uVar59;
    auVar43._0_8_ = dVar12;
    auVar43._12_4_ = uVar60;
    local_2b8.Scale3D.ZW.m128d_f64[0] =
         (double)CONCAT44(~(uint)((ulonglong)lVar26 >> 0x20) & auVar30._4_4_,
                          ~(uint)lVar26 & auVar30._0_4_);
    dVar47 = auVar43._8_8_;
    auVar31._8_4_ = SUB84(dVar10,0);
    auVar31._0_8_ = dVar47;
    auVar31._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
    auVar55._8_4_ = SUB84(dVar54,0);
    auVar55._0_8_ = dVar53;
    uVar50 = (undefined4)((ulonglong)dVar54 >> 0x20);
    auVar55._12_4_ = uVar50;
    dVar8 = local_128.Translation.ZW.m128d_f64[0] * local_2b8.Scale3D.ZW.m128d_f64[0];
    dVar41 = local_128.Translation.ZW.m128d_f64[1] * 0.0;
    auVar9._8_4_ = SUB84(dVar11,0);
    auVar9._0_8_ = dVar10;
    auVar9._12_4_ = uVar58;
    auVar30 = blendpd(auVar52,auVar9,2);
    auVar39._8_4_ = SUB84(dVar54,0);
    auVar39._0_8_ = dVar53;
    auVar39._12_4_ = uVar50;
    auVar7._8_4_ = SUB84(dVar41,0);
    auVar7._0_8_ = dVar8;
    auVar7._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
    auVar38 = blendpd(auVar39,auVar7,2);
    auVar56._0_8_ = auVar55._8_8_ * dVar12 - dVar47 * dVar53;
    auVar56._8_8_ = dVar8 * dVar13 - auVar31._8_8_ * dVar54;
    auVar40._0_8_ = auVar38._0_8_ * dVar10 - auVar30._0_8_ * dVar8;
    auVar40._8_8_ = auVar38._8_8_ * dVar11 - auVar30._8_8_ * dVar41;
    dVar41 = auVar56._8_8_ + auVar56._8_8_;
    dVar35 = auVar40._0_8_ + auVar40._0_8_;
    uVar50 = SUB84(dVar35,0);
    uVar51 = (undefined4)((ulonglong)dVar35 >> 0x20);
    auVar38 = blendpd(auVar56,auVar40,2);
    auVar57._0_8_ = auVar38._0_8_ + auVar38._0_8_;
    auVar57._8_8_ = auVar38._8_8_ + auVar38._8_8_;
    auVar48._8_4_ = uVar50;
    auVar48._0_8_ = dVar41;
    auVar48._12_4_ = uVar51;
    auVar32._8_4_ = uVar50;
    auVar32._0_8_ = dVar41;
    auVar32._12_4_ = uVar51;
    auVar44._8_4_ = uVar50;
    auVar44._0_8_ = dVar41;
    auVar44._12_4_ = uVar51;
    auVar38 = blendpd(auVar44,auVar57,2);
    auVar49._0_8_ = auVar48._8_8_ * dVar12 - dVar41 * dVar47;
    auVar49._8_8_ = auVar57._0_8_ * dVar13 - auVar32._8_8_ * dVar10;
    auVar33._8_4_ = SUB84(auVar57._8_8_,0);
    auVar33._0_8_ = auVar57._0_8_;
    auVar33._12_4_ = (int)((ulonglong)auVar57._8_8_ >> 0x20);
    auVar45._0_8_ = auVar38._0_8_ * dVar10 - auVar57._0_8_ * auVar30._0_8_;
    auVar45._8_8_ = auVar38._8_8_ * dVar11 - auVar33._8_8_ * auVar30._8_8_;
    auVar34._8_4_ = SUB84(auVar49._8_8_,0);
    auVar34._0_8_ = auVar49._0_8_;
    auVar34._12_4_ = (int)((ulonglong)auVar49._8_8_ >> 0x20);
    auVar38 = blendpd(auVar49,auVar45,2);
    local_2b8.Rotation.XY.m128d_f64[1]._0_4_ = uVar59;
    local_2b8.Rotation.XY.m128d_f64[0] = dVar12;
    local_2b8.Rotation.XY.m128d_f64[1]._4_4_ = uVar60;
    local_2b8.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar11,0);
    local_2b8.Rotation.ZW.m128d_f64[0] = dVar10;
    local_2b8.Rotation.ZW.m128d_f64[1]._4_4_ = uVar58;
    local_2b8.Translation.XY.m128d_f64[1] = 0.0 - (dVar35 * dVar11 + dVar54 + auVar45._0_8_);
    local_2b8.Translation.XY.m128d_f64[0] = 0.0 - (dVar41 * dVar11 + dVar53 + auVar34._8_8_);
    local_2b8.Translation.ZW.m128d_f64[1] = 0.0;
    local_2b8.Translation.ZW.m128d_f64[0] = 0.0 - (auVar57._0_8_ * dVar11 + dVar8 + auVar38._0_8_);
    local_2b8.Scale3D.ZW.m128d_f64[1] = 0.0;
  }
  pTVar24 = UE::Math::TTransform<double>::ToMatrixWithScale(&local_2b8,&local_1a8);
  dVar41 = pTVar24->M[1][0];
  dVar35 = pTVar24->M[3][0];
  dVar8 = pTVar24->M[2][0];
  uVar50 = *(undefined4 *)(pTVar24->M[0] + 1);
  uVar51 = *(undefined4 *)((longlong)pTVar24->M[0] + 0xc);
  dVar10 = pTVar24->M[1][1];
  dVar11 = pTVar24->M[2][1];
  dVar12 = pTVar24->M[3][1];
  dVar13 = pTVar24->M[0][2];
  dVar47 = pTVar24->M[1][2];
  uVar58 = *(undefined4 *)(pTVar24->M[2] + 2);
  uVar59 = *(undefined4 *)((longlong)pTVar24->M[2] + 0x14);
  dVar53 = pTVar24->M[3][2];
  uVar60 = *(undefined4 *)(pTVar24->M[0] + 3);
  uVar16 = *(undefined4 *)((longlong)pTVar24->M[0] + 0x1c);
  dVar54 = pTVar24->M[1][3];
  uVar17 = *(undefined4 *)(pTVar24->M[2] + 3);
  uVar18 = *(undefined4 *)((longlong)pTVar24->M[2] + 0x1c);
  dVar3 = pTVar24->M[3][3];
  (this->TransformInverseTransposed).M[0][0] = pTVar24->M[0][0];
  (this->TransformInverseTransposed).M[0][1] = dVar41;
  (this->TransformInverseTransposed).M[0][2] = dVar8;
  (this->TransformInverseTransposed).M[0][3] = dVar35;
  *(undefined4 *)(this->TransformInverseTransposed).M[1] = uVar50;
  *(undefined4 *)((longlong)(this->TransformInverseTransposed).M[1] + 4) = uVar51;
  *(int *)((this->TransformInverseTransposed).M[1] + 1) = SUB84(dVar10,0);
  *(int *)((longlong)(this->TransformInverseTransposed).M[1] + 0xc) =
       (int)((ulonglong)dVar10 >> 0x20);
  (this->TransformInverseTransposed).M[1][2] = dVar11;
  (this->TransformInverseTransposed).M[1][3] = dVar12;
  (this->TransformInverseTransposed).M[2][0] = dVar13;
  (this->TransformInverseTransposed).M[2][1] = dVar47;
  *(undefined4 *)((this->TransformInverseTransposed).M[2] + 2) = uVar58;
  *(undefined4 *)((longlong)(this->TransformInverseTransposed).M[2] + 0x14) = uVar59;
  *(int *)((this->TransformInverseTransposed).M[2] + 3) = SUB84(dVar53,0);
  *(int *)((longlong)(this->TransformInverseTransposed).M[2] + 0x1c) =
       (int)((ulonglong)dVar53 >> 0x20);
  *(undefined4 *)(this->TransformInverseTransposed).M[3] = uVar60;
  *(undefined4 *)((longlong)(this->TransformInverseTransposed).M[3] + 4) = uVar16;
  *(int *)((this->TransformInverseTransposed).M[3] + 1) = SUB84(dVar54,0);
  *(int *)((longlong)(this->TransformInverseTransposed).M[3] + 0xc) =
       (int)((ulonglong)dVar54 >> 0x20);
  (this->Rotation).X = (float)local_128.Rotation.XY.m128d_f64[0];
  (this->Rotation).Y = (float)local_128.Rotation.XY.m128d_f64[1];
  (this->Rotation).Z = (float)local_128.Rotation.ZW.m128d_f64[0];
  (this->Rotation).W = (float)local_128.Rotation.ZW.m128d_f64[1];
  *(undefined4 *)((this->TransformInverseTransposed).M[3] + 2) = uVar17;
  *(undefined4 *)((longlong)(this->TransformInverseTransposed).M[3] + 0x14) = uVar18;
  *(int *)((this->TransformInverseTransposed).M[3] + 3) = SUB84(dVar3,0);
  *(int *)((longlong)(this->TransformInverseTransposed).M[3] + 0x1c) =
       (int)((ulonglong)dVar3 >> 0x20);
  return;
}

// UpdateTransformsInstanceIndexChanged @ 148fd1a80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
NDIStaticMeshLocal::FInstanceData_GameThread::UpdateTransformsInstanceIndexChanged
          (FInstanceData_GameThread *this)

{
  double dVar1;
  double dVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [12];
  undefined1 auVar15 [12];
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  uint uVar22;
  uint uVar23;
  bool bVar24;
  int iVar25;
  TMatrix<double> *pTVar26;
  uint uVar27;
  FScriptContainerElement *pFVar28;
  TTransform<double> *this_00;
  longlong lVar29;
  longlong lVar30;
  longlong lVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  double dVar47;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined4 uVar50;
  undefined4 uVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined4 uVar55;
  undefined4 uVar56;
  double dVar57;
  double dVar61;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined4 uVar62;
  uint uVar63;
  undefined4 uVar64;
  uint uVar65;
  undefined4 uVar66;
  uint uVar67;
  uint uVar68;
  undefined4 uVar69;
  undefined4 uVar70;
  TTransform<double> local_2b8;
  TTransform<double> local_258;
  TMatrix<double> local_1a8;
  TMatrix<double> local_128 [2];
  uint uVar46;
  
  iVar25 = this->InstanceIndex;
  if ((iVar25 < 0) || ((this->ISMTransforms).ArrayNum <= iVar25)) {
    pFVar28 = (FScriptContainerElement *)&this->SystemInstanceWorldTransform;
  }
  else {
    if (iVar25 < 0) {
      bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar24) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar28 = (this->ISMTransforms).AllocatorInstance.Data + (longlong)iVar25 * 0x60;
  }
  auVar39 = *(undefined1 (*) [16])(pFVar28 + 0x20);
  local_2b8.Rotation.XY.m128d_f64[0] = *(double *)&pFVar28->field_0x0;
  local_2b8.Rotation.XY.m128d_f64[1] = *(double *)(pFVar28 + 8);
  local_2b8.Rotation.ZW.m128d_f64[0] = *(double *)(pFVar28 + 0x10);
  local_2b8.Rotation.ZW.m128d_f64[1] = *(double *)(pFVar28 + 0x18);
  auVar53 = *(undefined1 (*) [16])(this->SystemInstanceWorldTransform).Translation.XY.m128d_f64;
  dVar6 = *(double *)(pFVar28 + 0x30);
  dVar7 = *(double *)(pFVar28 + 0x38);
  dVar5 = (this->SystemInstanceWorldTransform).Translation.ZW.m128d_f64[0];
  local_2b8.Scale3D.XY.m128d_f64[0] = *(double *)(pFVar28 + 0x40);
  local_2b8.Scale3D.XY.m128d_f64[1] = *(double *)(pFVar28 + 0x48);
  local_2b8.Scale3D.ZW.m128d_f64[0] = *(double *)(pFVar28 + 0x50);
  local_2b8.Scale3D.ZW.m128d_f64[1] = *(double *)(pFVar28 + 0x58);
  this_00 = &local_2b8;
  auVar14._4_8_ = local_2b8.Scale3D.XY.m128d_f64[1];
  auVar14._0_4_ = auVar53._4_4_;
  auVar32._0_8_ = auVar14._0_8_ << 0x20;
  auVar32._8_4_ = auVar53._8_4_;
  auVar32._12_4_ = auVar53._12_4_;
  auVar15._4_8_ = local_2b8.Scale3D.ZW.m128d_f64[1];
  auVar15._0_4_ = auVar39._4_4_;
  auVar37._0_8_ = auVar15._0_8_ << 0x20;
  auVar37._8_4_ = auVar39._8_4_;
  auVar37._12_4_ = auVar39._12_4_;
  (this->OwnerToMeshVector).field0_0x0._s_0.X = (float)(auVar39._0_8_ - auVar53._0_8_);
  (this->OwnerToMeshVector).field0_0x0._s_0.Y = (float)(auVar37._8_8_ - auVar32._8_8_);
  (this->OwnerToMeshVector).field0_0x0._s_0.Z = (float)(dVar6 - dVar5);
  local_2b8.Translation.XY.m128d_f64[1] = auVar39._8_8_;
  dVar6 = (this->LWCTileOffset).field0_0x0._s_0.Z + dVar6;
  dVar7 = dVar7 + 0.0;
  dVar57 = auVar39._0_8_ + (this->LWCTileOffset).field0_0x0._s_0.X;
  dVar61 = local_2b8.Translation.XY.m128d_f64[1] + (this->LWCTileOffset).field0_0x0._s_0.Y;
  local_2b8.Translation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar7,0);
  local_2b8.Translation.ZW.m128d_f64[0] = dVar6;
  local_2b8.Translation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar7 >> 0x20);
  local_2b8.Translation.XY.m128d_f64[1] = dVar61;
  local_2b8.Translation.XY.m128d_f64[0] = dVar57;
  pTVar26 = UE::Math::TTransform<double>::ToMatrixWithScale(this_00,&local_1a8);
  uVar23 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar22 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  auVar39._8_8_ = local_2b8.Scale3D.XY.m128d_f64[1];
  auVar39._0_8_ = local_2b8.Scale3D.XY.m128d_f64[0];
  dVar5 = pTVar26->M[0][1];
  uVar46 = (uint)((ulonglong)local_2b8.Scale3D.ZW.m128d_f64[0] >> 0x20);
  auVar42._0_8_ =
       (double)CONCAT44(uVar46 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(local_2b8.Scale3D.ZW.m128d_f64[0],0) &
                        (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auVar42._8_4_ = SUB84(local_2b8.Scale3D.ZW.m128d_f64[1],0) & _UNK_15061cc88;
  auVar42._12_4_ = (uint)((ulonglong)local_2b8.Scale3D.ZW.m128d_f64[1] >> 0x20) & _UNK_15061cc8c;
  uVar63 = SUB84(local_2b8.Scale3D.XY.m128d_f64[0],0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff
  ;
  uVar65 = (uint)((ulonglong)local_2b8.Scale3D.XY.m128d_f64[0] >> 0x20) &
           __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar67 = SUB84(local_2b8.Scale3D.XY.m128d_f64[1],0) & _UNK_15061cc88;
  uVar68 = (uint)((ulonglong)local_2b8.Scale3D.XY.m128d_f64[1] >> 0x20) & _UNK_15061cc8c;
  (this->Transform).M[0][0] = pTVar26->M[0][0];
  (this->Transform).M[0][1] = dVar5;
  dVar5 = pTVar26->M[0][3];
  (this->Transform).M[0][2] = pTVar26->M[0][2];
  (this->Transform).M[0][3] = dVar5;
  dVar5 = pTVar26->M[1][1];
  (this->Transform).M[1][0] = pTVar26->M[1][0];
  (this->Transform).M[1][1] = dVar5;
  dVar5 = pTVar26->M[1][3];
  (this->Transform).M[1][2] = pTVar26->M[1][2];
  (this->Transform).M[1][3] = dVar5;
  dVar5 = pTVar26->M[2][1];
  (this->Transform).M[2][0] = pTVar26->M[2][0];
  (this->Transform).M[2][1] = dVar5;
  dVar5 = pTVar26->M[2][3];
  (this->Transform).M[2][2] = pTVar26->M[2][2];
  (this->Transform).M[2][3] = dVar5;
  dVar5 = pTVar26->M[3][1];
  (this->Transform).M[3][0] = pTVar26->M[3][0];
  (this->Transform).M[3][1] = dVar5;
  dVar5 = pTVar26->M[3][3];
  (this->Transform).M[3][2] = pTVar26->M[3][2];
  (this->Transform).M[3][3] = dVar5;
  auVar38._8_8_ =
       -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[3] < auVar42._8_8_);
  auVar38._0_8_ =
       -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[2] < auVar42._0_8_);
  uVar27 = movmskpd((int)this_00,auVar38);
  auVar53._8_8_ =
       -(ulonglong)
        ((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < (double)CONCAT44(uVar68,uVar67));
  auVar53._0_8_ =
       -(ulonglong)
        ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < (double)CONCAT44(uVar65,uVar63));
  iVar25 = movmskpd((int)pTVar26,auVar53);
  if ((uVar27 & 0x3fffffff) == 0 && iVar25 == 0) {
    local_258.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    local_258.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    local_258.Translation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    local_258.Translation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    local_258.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    local_258.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  }
  else {
    dVar10 = local_2b8.Rotation.ZW.m128d_f64[0] *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    dVar11 = local_2b8.Rotation.ZW.m128d_f64[1] *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    uVar50 = (undefined4)((ulonglong)dVar11 >> 0x20);
    dVar12 = local_2b8.Rotation.XY.m128d_f64[0] *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    dVar13 = local_2b8.Rotation.XY.m128d_f64[1] *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    uVar51 = SUB84(dVar13,0);
    uVar62 = (undefined4)((ulonglong)dVar13 >> 0x20);
    local_258.Rotation.XY.m128d_f64[1]._0_4_ = uVar51;
    local_258.Rotation.XY.m128d_f64[0] = dVar12;
    local_258.Rotation.XY.m128d_f64[1]._4_4_ = uVar62;
    local_258.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar11,0);
    local_258.Rotation.ZW.m128d_f64[0] = dVar10;
    local_258.Rotation.ZW.m128d_f64[1]._4_4_ = uVar50;
    lVar29 = -(ulonglong)
              ((double)CONCAT44(uVar46 & uVar23,SUB84(local_2b8.Scale3D.ZW.m128d_f64[0],0) & uVar22)
              <= (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
    auVar39 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar39);
    lVar30 = -(ulonglong)
              ((double)CONCAT44(uVar65,uVar63) <=
              (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
    lVar31 = -(ulonglong)
              ((double)CONCAT44(uVar68,uVar67) <=
              (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
    local_258.Scale3D.XY.m128d_f64[0]._0_4_ = ~(uint)lVar30 & auVar39._0_4_;
    local_258.Scale3D.XY.m128d_f64[0]._4_4_ = ~(uint)((ulonglong)lVar30 >> 0x20) & auVar39._4_4_;
    local_258.Scale3D.XY.m128d_f64[1]._0_4_ = ~(uint)lVar31 & auVar39._8_4_;
    local_258.Scale3D.XY.m128d_f64[1]._4_4_ = ~(uint)((ulonglong)lVar31 >> 0x20) & auVar39._12_4_;
    auVar4._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
    auVar4._0_8_ = local_2b8.Scale3D.ZW.m128d_f64[0];
    auVar4._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
    auVar39 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar4);
    auVar54._0_8_ =
         (double)CONCAT44(local_258.Scale3D.XY.m128d_f64[0]._4_4_,
                          local_258.Scale3D.XY.m128d_f64[0]._0_4_);
    auVar54._8_4_ = local_258.Scale3D.XY.m128d_f64[1]._0_4_;
    auVar54._12_4_ = local_258.Scale3D.XY.m128d_f64[1]._4_4_;
    auVar43._8_4_ = uVar51;
    auVar43._0_8_ = dVar12;
    auVar43._12_4_ = uVar62;
    dVar47 = auVar43._8_8_;
    local_258.Scale3D.ZW.m128d_f64[0] =
         (double)CONCAT44(~(uint)((ulonglong)lVar29 >> 0x20) & auVar39._4_4_,
                          ~(uint)lVar29 & auVar39._0_4_);
    auVar52._8_4_ = uVar51;
    auVar52._0_8_ = dVar12;
    auVar52._12_4_ = uVar62;
    auVar33._8_4_ = SUB84(dVar10,0);
    auVar33._0_8_ = dVar47;
    auVar33._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
    dVar57 = auVar54._0_8_ * dVar57;
    dVar61 = auVar54._8_8_ * dVar61;
    auVar9._8_4_ = SUB84(dVar11,0);
    auVar9._0_8_ = dVar10;
    auVar9._12_4_ = uVar50;
    auVar53 = blendpd(auVar52,auVar9,2);
    auVar58._8_4_ = SUB84(dVar61,0);
    auVar58._0_8_ = dVar57;
    uVar50 = (undefined4)((ulonglong)dVar61 >> 0x20);
    auVar58._12_4_ = uVar50;
    dVar6 = local_258.Scale3D.ZW.m128d_f64[0] * dVar6;
    dVar7 = dVar7 * 0.0;
    auVar40._8_4_ = SUB84(dVar61,0);
    auVar40._0_8_ = dVar57;
    auVar40._12_4_ = uVar50;
    auVar8._8_4_ = SUB84(dVar7,0);
    auVar8._0_8_ = dVar6;
    auVar8._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
    auVar39 = blendpd(auVar40,auVar8,2);
    auVar59._0_8_ = auVar58._8_8_ * dVar12 - dVar47 * dVar57;
    auVar59._8_8_ = dVar6 * dVar13 - auVar33._8_8_ * dVar61;
    auVar41._0_8_ = auVar39._0_8_ * dVar10 - auVar53._0_8_ * dVar6;
    auVar41._8_8_ = auVar39._8_8_ * dVar11 - auVar53._8_8_ * dVar7;
    dVar7 = auVar59._8_8_ + auVar59._8_8_;
    dVar5 = auVar41._0_8_ + auVar41._0_8_;
    uVar50 = SUB84(dVar5,0);
    uVar51 = (undefined4)((ulonglong)dVar5 >> 0x20);
    auVar39 = blendpd(auVar59,auVar41,2);
    auVar60._0_8_ = auVar39._0_8_ + auVar39._0_8_;
    auVar60._8_8_ = auVar39._8_8_ + auVar39._8_8_;
    auVar48._8_4_ = uVar50;
    auVar48._0_8_ = dVar7;
    auVar48._12_4_ = uVar51;
    auVar34._8_4_ = uVar50;
    auVar34._0_8_ = dVar7;
    auVar34._12_4_ = uVar51;
    auVar44._8_4_ = uVar50;
    auVar44._0_8_ = dVar7;
    auVar44._12_4_ = uVar51;
    auVar39 = blendpd(auVar44,auVar60,2);
    auVar49._0_8_ = auVar48._8_8_ * dVar12 - dVar7 * dVar47;
    auVar49._8_8_ = auVar60._0_8_ * dVar13 - auVar34._8_8_ * dVar10;
    auVar35._8_4_ = SUB84(auVar60._8_8_,0);
    auVar35._0_8_ = auVar60._0_8_;
    auVar35._12_4_ = (int)((ulonglong)auVar60._8_8_ >> 0x20);
    auVar45._0_8_ = auVar39._0_8_ * dVar10 - auVar60._0_8_ * auVar53._0_8_;
    auVar45._8_8_ = auVar39._8_8_ * dVar11 - auVar35._8_8_ * auVar53._8_8_;
    auVar36._8_4_ = SUB84(auVar49._8_8_,0);
    auVar36._0_8_ = auVar49._0_8_;
    auVar36._12_4_ = (int)((ulonglong)auVar49._8_8_ >> 0x20);
    auVar39 = blendpd(auVar49,auVar45,2);
    local_258.Translation.XY.m128d_f64[1] = 0.0 - (dVar5 * dVar11 + dVar61 + auVar45._0_8_);
    local_258.Translation.XY.m128d_f64[0] = 0.0 - (dVar7 * dVar11 + dVar57 + auVar36._8_8_);
    local_258.Translation.ZW.m128d_f64[1] = 0.0;
    local_258.Translation.ZW.m128d_f64[0] = 0.0 - (auVar60._0_8_ * dVar11 + dVar6 + auVar39._0_8_);
    local_258.Scale3D.ZW.m128d_f64[1] = 0.0;
  }
  pTVar26 = UE::Math::TTransform<double>::ToMatrixWithScale(&local_258,local_128);
  dVar6 = pTVar26->M[1][0];
  dVar7 = pTVar26->M[2][0];
  dVar5 = pTVar26->M[3][0];
  dVar57 = pTVar26->M[0][1];
  dVar61 = pTVar26->M[1][1];
  uVar17 = *(undefined4 *)(pTVar26->M[2] + 1);
  uVar18 = *(undefined4 *)((longlong)pTVar26->M[2] + 0xc);
  dVar10 = pTVar26->M[3][1];
  uVar55 = *(undefined4 *)((longlong)pTVar26->M[0] + 4);
  dVar21 = pTVar26->M[0][0];
  uVar62 = *(undefined4 *)(pTVar26->M[0] + 2);
  uVar16 = *(undefined4 *)((longlong)pTVar26->M[0] + 0x14);
  dVar11 = pTVar26->M[1][2];
  dVar12 = pTVar26->M[2][2];
  dVar13 = pTVar26->M[3][2];
  dVar47 = pTVar26->M[0][3];
  dVar1 = pTVar26->M[1][3];
  uVar50 = *(undefined4 *)(pTVar26->M[2] + 3);
  uVar51 = *(undefined4 *)((longlong)pTVar26->M[2] + 0x1c);
  dVar2 = pTVar26->M[3][3];
  uVar64 = SUB84(dVar2,0);
  uVar66 = (undefined4)((ulonglong)dVar2 >> 0x20);
  *(undefined4 *)(this->TransformInverseTransposed).M[0] = *(undefined4 *)pTVar26->M[0];
  *(undefined4 *)((longlong)(this->TransformInverseTransposed).M[0] + 4) = uVar55;
  *(int *)((this->TransformInverseTransposed).M[0] + 1) = SUB84(dVar6,0);
  *(int *)((longlong)(this->TransformInverseTransposed).M[0] + 0xc) =
       (int)((ulonglong)dVar6 >> 0x20);
  (this->TransformInverseTransposed).M[0][2] = dVar7;
  (this->TransformInverseTransposed).M[0][3] = dVar5;
  (this->TransformInverseTransposed).M[1][0] = dVar57;
  (this->TransformInverseTransposed).M[1][1] = dVar61;
  uVar69 = SUB84(dVar10,0);
  uVar70 = (undefined4)((ulonglong)dVar10 >> 0x20);
  dVar10 = (this->Transform).M[0][1];
  (this->PrevTransform).M[0][0] = (this->Transform).M[0][0];
  (this->PrevTransform).M[0][1] = dVar10;
  dVar10 = (this->Transform).M[1][0];
  dVar2 = (this->Transform).M[1][1];
  dVar19 = (this->Transform).M[0][2];
  dVar20 = (this->Transform).M[0][3];
  *(undefined4 *)((this->TransformInverseTransposed).M[1] + 2) = uVar17;
  *(undefined4 *)((longlong)(this->TransformInverseTransposed).M[1] + 0x14) = uVar18;
  *(undefined4 *)((this->TransformInverseTransposed).M[1] + 3) = uVar69;
  *(undefined4 *)((longlong)(this->TransformInverseTransposed).M[1] + 0x1c) = uVar70;
  (this->PrevTransform).M[0][2] = dVar19;
  (this->PrevTransform).M[0][3] = dVar20;
  dVar19 = (this->Transform).M[1][2];
  dVar20 = (this->Transform).M[1][3];
  (this->PrevTransform).M[1][0] = dVar10;
  (this->PrevTransform).M[1][1] = dVar2;
  dVar10 = (this->Transform).M[2][0];
  dVar2 = (this->Transform).M[2][1];
  (this->PrevTransform).M[1][2] = dVar19;
  (this->PrevTransform).M[1][3] = dVar20;
  dVar19 = (this->Transform).M[2][2];
  dVar20 = (this->Transform).M[2][3];
  (this->PrevTransform).M[2][0] = dVar10;
  (this->PrevTransform).M[2][1] = dVar2;
  dVar10 = (this->Transform).M[3][0];
  dVar2 = (this->Transform).M[3][1];
  (this->PrevTransform).M[2][2] = dVar19;
  (this->PrevTransform).M[2][3] = dVar20;
  dVar19 = (this->Transform).M[3][2];
  dVar20 = (this->Transform).M[3][3];
  (this->PrevTransform).M[3][0] = dVar10;
  (this->PrevTransform).M[3][1] = dVar2;
  uVar55 = SUB84(dVar11,0);
  uVar56 = (undefined4)((ulonglong)dVar11 >> 0x20);
  *(undefined4 *)(this->TransformInverseTransposed).M[2] = uVar62;
  *(undefined4 *)((longlong)(this->TransformInverseTransposed).M[2] + 4) = uVar16;
  *(undefined4 *)((this->TransformInverseTransposed).M[2] + 1) = uVar55;
  *(undefined4 *)((longlong)(this->TransformInverseTransposed).M[2] + 0xc) = uVar56;
  (this->TransformInverseTransposed).M[2][2] = dVar12;
  (this->TransformInverseTransposed).M[2][3] = dVar13;
  (this->PrevTransformInverseTransposed).M[0][0] = dVar21;
  (this->PrevTransformInverseTransposed).M[0][1] = dVar6;
  (this->TransformInverseTransposed).M[3][0] = dVar47;
  (this->TransformInverseTransposed).M[3][1] = dVar1;
  (this->PrevTransform).M[3][2] = dVar19;
  (this->PrevTransform).M[3][3] = dVar20;
  *(undefined4 *)((this->TransformInverseTransposed).M[3] + 2) = uVar50;
  *(undefined4 *)((longlong)(this->TransformInverseTransposed).M[3] + 0x14) = uVar51;
  *(undefined4 *)((this->TransformInverseTransposed).M[3] + 3) = uVar64;
  *(undefined4 *)((longlong)(this->TransformInverseTransposed).M[3] + 0x1c) = uVar66;
  (this->Rotation).X = (float)local_2b8.Rotation.XY.m128d_f64[0];
  (this->Rotation).Y = (float)local_2b8.Rotation.XY.m128d_f64[1];
  (this->Rotation).Z = (float)local_2b8.Rotation.ZW.m128d_f64[0];
  (this->Rotation).W = (float)local_2b8.Rotation.ZW.m128d_f64[1];
  (this->PrevTransformInverseTransposed).M[0][2] = dVar7;
  (this->PrevTransformInverseTransposed).M[0][3] = dVar5;
  (this->PrevTransformInverseTransposed).M[1][0] = dVar57;
  (this->PrevTransformInverseTransposed).M[1][1] = dVar61;
  *(undefined4 *)((this->PrevTransformInverseTransposed).M[1] + 2) = uVar17;
  *(undefined4 *)((longlong)(this->PrevTransformInverseTransposed).M[1] + 0x14) = uVar18;
  *(undefined4 *)((this->PrevTransformInverseTransposed).M[1] + 3) = uVar69;
  *(undefined4 *)((longlong)(this->PrevTransformInverseTransposed).M[1] + 0x1c) = uVar70;
  *(undefined4 *)(this->PrevTransformInverseTransposed).M[2] = uVar62;
  *(undefined4 *)((longlong)(this->PrevTransformInverseTransposed).M[2] + 4) = uVar16;
  *(undefined4 *)((this->PrevTransformInverseTransposed).M[2] + 1) = uVar55;
  *(undefined4 *)((longlong)(this->PrevTransformInverseTransposed).M[2] + 0xc) = uVar56;
  (this->PrevTransformInverseTransposed).M[2][2] = dVar12;
  (this->PrevTransformInverseTransposed).M[2][3] = dVar13;
  (this->PrevTransformInverseTransposed).M[3][0] = dVar47;
  (this->PrevTransformInverseTransposed).M[3][1] = dVar1;
  *(undefined4 *)((this->PrevTransformInverseTransposed).M[3] + 2) = uVar50;
  *(undefined4 *)((longlong)(this->PrevTransformInverseTransposed).M[3] + 0x14) = uVar51;
  *(undefined4 *)((this->PrevTransformInverseTransposed).M[3] + 3) = uVar64;
  *(undefined4 *)((longlong)(this->PrevTransformInverseTransposed).M[3] + 0x1c) = uVar66;
  (this->PrevRotation).X = (float)local_2b8.Rotation.XY.m128d_f64[0];
  (this->PrevRotation).Y = (float)local_2b8.Rotation.XY.m128d_f64[1];
  (this->PrevRotation).Z = (float)local_2b8.Rotation.ZW.m128d_f64[0];
  (this->PrevRotation).W = (float)local_2b8.Rotation.ZW.m128d_f64[1];
  return;
}

// UpdateUvMapping @ 148fd20a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
NDIStaticMeshLocal::FInstanceData_GameThread::UpdateUvMapping
          (FInstanceData_GameThread *this,FNiagaraSystemInstance *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FMeshUvMapping *pFVar3;
  FNiagaraWorldManager *this_00;
  FNDI_StaticMesh_GeneratedData *this_01;
  TTypedMeshUvMappingHandle<FStaticMeshUvMapping> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  FMeshUvMappingUsage local_28;
  FMeshUvMapping *local_20;
  TReferenceControllerBase<1> *pTStack_18;
  
  if (((this->UvMappingUsage).RequiresCpuAccess == false) &&
     ((this->UvMappingUsage).RequiresGpuAccess == false)) {
    local_28 = this->UvMappingUsage;
    local_20 = (FMeshUvMapping *)0x0;
    pTStack_18 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    TTypedMeshUvMappingHandle<FStaticMeshUvMapping>::operator=
              (&this->UvMapping,(TTypedMeshUvMappingHandle<FStaticMeshUvMapping> *)&local_28);
    pFVar3 = local_20;
    if (local_20 != (FMeshUvMapping *)0x0) {
      bVar6 = local_28.RequiresGpuAccess;
      if ((local_28.RequiresCpuAccess != false) || (bVar6 != false)) {
        LOCK();
        paVar1 = &local_20->CpuQuadTreeUserCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          FNiagaraUvQuadTree::Empty(&local_20->TriangleIndexQuadTree);
        }
        if (bVar6 != false) {
          LOCK();
          paVar1 = &pFVar3->GpuQuadTreeUserCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            FMeshUvMapping::ReleaseGpuQuadTree(pFVar3);
          }
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_18);
    pTVar5 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    this_00 = FNiagaraSystemInstance::GetWorldManager(param_1);
    this_01 = FNiagaraWorldManager::EditGeneratedData<FNDI_StaticMesh_GeneratedData>(this_00);
    pTVar4 = FNDI_StaticMesh_GeneratedData::GetCachedUvMapping
                       (this_01,(TTypedMeshUvMappingHandle<FStaticMeshUvMapping> *)&local_28,
                        &this->StaticMeshWeakPtr,this->CachedLODIdx,this->UvMappingIndexSet,
                        this->UvMappingUsage,true);
    TTypedMeshUvMappingHandle<FStaticMeshUvMapping>::operator=(&this->UvMapping,pTVar4);
    pFVar3 = local_20;
    pTVar5 = pTStack_18;
    if ((local_20 != (FMeshUvMapping *)0x0) &&
       ((bVar6 = local_28.RequiresGpuAccess, local_28.RequiresCpuAccess != false || (bVar6 != false)
        ))) {
      LOCK();
      paVar1 = &local_20->CpuQuadTreeUserCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        FNiagaraUvQuadTree::Empty(&local_20->TriangleIndexQuadTree);
      }
      pTVar5 = pTStack_18;
      if (bVar6 != false) {
        LOCK();
        paVar1 = &pFVar3->GpuQuadTreeUserCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          FMeshUvMapping::ReleaseGpuQuadTree(pFVar3);
          pTVar5 = pTStack_18;
        }
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return;
}

