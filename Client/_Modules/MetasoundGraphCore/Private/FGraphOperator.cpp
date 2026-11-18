// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGraphCore
// Functions: 12

// FGraphOperator @ 14ad39ef0

FGraphOperator * __thiscall
Metasound::FGraphOperator::FGraphOperator
          (FGraphOperator *this,
          TUniquePtr<Metasound::DirectedGraphAlgo::FStaticGraphOperatorData,TDefaultDelete<Metasound::DirectedGraphAlgo::FStaticGraphOperatorData>_>
          param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  ulonglong *puVar5;
  longlong lVar6;
  void *pvVar7;
  code *pcVar8;
  uint uVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  FGraphOperator *pFVar13;
  longlong lVar14;
  ulonglong *puVar15;
  uint uVar16;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined8 local_res18;
  
  iVar11 = 0;
  this->_padding_ = (longlong)&___7FGraphOperator_Metasound__6B_;
  (this->PostExecuteStack).ArrayMax = 0;
  piVar1 = &(this->PostExecuteStack).ArrayMax;
  (this->ResetStack).ArrayMax = 0;
  piVar2 = &(this->ResetStack).ArrayMax;
  (this->ExecuteStack).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar3 = &(this->ExecuteStack).ArrayMax;
  (this->ExecuteStack).ArrayNum = 0;
  *piVar3 = 0;
  (this->PostExecuteStack).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PostExecuteStack).ArrayNum = 0;
  (this->ResetStack).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ResetStack).ArrayNum = 0;
  (this->ActiveOperators).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveOperators).ArrayNum = 0;
  (this->ActiveOperators).ArrayMax = 0;
  (this->VertexData).InputVertexInterfaceData.bIsVertexInterfaceFrozen = false;
  (this->VertexData).InputVertexInterfaceData.Bindings.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->VertexData).InputVertexInterfaceData.Bindings.ArrayNum = 0;
  (this->VertexData).InputVertexInterfaceData.Bindings.ArrayMax = 0;
  (this->VertexData).InputVertexInterfaceData.SubInterfaces.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->VertexData).InputVertexInterfaceData.SubInterfaces.ArrayNum = 0;
  (this->VertexData).InputVertexInterfaceData.SubInterfaces.ArrayMax = 0;
  (this->VertexData).OutputVertexInterfaceData.bIsVertexInterfaceFrozen = false;
  (this->VertexData).OutputVertexInterfaceData.Bindings.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->VertexData).OutputVertexInterfaceData.Bindings.ArrayNum = 0;
  (this->VertexData).OutputVertexInterfaceData.Bindings.ArrayMax = 0;
  (this->VertexData).OutputVertexInterfaceData.SubInterfaces.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->VertexData).OutputVertexInterfaceData.SubInterfaces.ArrayNum = 0;
  (this->VertexData).OutputVertexInterfaceData.SubInterfaces.ArrayMax = 0;
  uVar16 = *(uint *)((param_1.Ptr)->_padding_ + 0x98);
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
  }
  if (0 < (int)uVar16) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar16,&(this->ExecuteStack).AllocatorInstance,0,piVar3);
    iVar11 = (this->ResetStack).ArrayNum;
  }
  if (*piVar1 < (int)uVar16) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar16,&(this->PostExecuteStack).AllocatorInstance,
               (this->PostExecuteStack).ArrayNum,piVar1);
    iVar11 = (this->ResetStack).ArrayNum;
  }
  if (*piVar2 < (int)uVar16) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar16,&(this->ResetStack).AllocatorInstance,iVar11,piVar2);
  }
  lVar6 = (param_1.Ptr)->_padding_;
  puVar15 = *(ulonglong **)(lVar6 + 0x90);
  iVar11 = *(int *)(lVar6 + 0x98);
  puVar5 = puVar15 + iVar11;
  do {
    if (*(int *)(lVar6 + 0x98) != iVar11) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Metasound::INode_const_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (puVar15 == puVar5) {
      iVar11 = (this->ExecuteStack).ArrayNum;
      if ((this->ExecuteStack).ArrayMax != iVar11) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar11,&(this->ExecuteStack).AllocatorInstance,iVar11,
                   &(this->ExecuteStack).ArrayMax);
      }
      iVar11 = (this->PostExecuteStack).ArrayNum;
      if ((this->PostExecuteStack).ArrayMax != iVar11) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar11,&(this->PostExecuteStack).AllocatorInstance,iVar11,
                   &(this->PostExecuteStack).ArrayMax);
      }
      iVar11 = (this->ResetStack).ArrayNum;
      if ((this->ResetStack).ArrayMax != iVar11) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar11,&(this->ResetStack).AllocatorInstance,iVar11,
                   &(this->ResetStack).ArrayMax);
      }
      FVertexInterfaceData::operator=
                (&this->VertexData,(FVertexInterfaceData *)((param_1.Ptr)->_padding_ + 0x10));
      pvVar7 = (void *)(param_1.Ptr)->_padding_;
      if (pvVar7 != (void *)0x0) {
        if (*(void **)((longlong)pvVar7 + 0x90) != (void *)0x0) {
          FMemory::Free(*(void **)((longlong)pvVar7 + 0x90));
        }
        if (*(void **)((longlong)pvVar7 + 0x80) != (void *)0x0) {
          FMemory::Free(*(void **)((longlong)pvVar7 + 0x80));
        }
        if (*(void **)((longlong)pvVar7 + 0x70) != (void *)0x0) {
          FMemory::Free(*(void **)((longlong)pvVar7 + 0x70));
        }
        DestructItems<TTuple<unsigned___int64,Metasound::DirectedGraphAlgo::FGraphOperatorData::FOperatorInfo>,int>
                  (*(TTuple<unsigned___int64,Metasound::DirectedGraphAlgo::FGraphOperatorData::FOperatorInfo>
                     **)((longlong)pvVar7 + 0x60),*(int *)((longlong)pvVar7 + 0x68));
        if (*(void **)((longlong)pvVar7 + 0x60) != (void *)0x0) {
          FMemory::Free(*(void **)((longlong)pvVar7 + 0x60));
        }
        FVertexInterfaceData::~FVertexInterfaceData
                  ((FVertexInterfaceData *)((longlong)pvVar7 + 0x10));
        ::operator_delete(pvVar7,0xa0);
      }
      return this;
    }
    lVar14 = (param_1.Ptr)->_padding_;
    iVar12 = 0;
    uVar16 = *(uint *)(lVar14 + 0x68);
    if (0 < (int)uVar16) {
      do {
        iVar4 = (uVar16 >> 1) + iVar12;
        if (*(ulonglong *)((longlong)iVar4 * 0x78 + *(longlong *)(lVar14 + 0x60)) < *puVar15) {
          iVar12 = iVar4 + (uVar16 & 1);
        }
        uVar9 = uVar16 >> 1;
        uVar16 = uVar16 >> 1;
      } while (uVar9 != 0);
    }
    if (((iVar12 < *(int *)(lVar14 + 0x68)) &&
        (*(ulonglong *)((longlong)iVar12 * 0x78 + *(longlong *)(lVar14 + 0x60)) <= *puVar15)) &&
       (iVar12 != -1)) {
      if ((iVar12 < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        pFVar13 = (FGraphOperator *)(*pcVar8)();
        return pFVar13;
      }
      lVar14 = *(longlong *)(lVar14 + 0x60) + 8 + (longlong)iVar12 * 0x78;
      if (lVar14 == 0) goto LAB_14ad3a0ea;
LAB_14ad3a0fd:
      local_res18 = *(undefined8 *)(lVar14 + 8);
      *(undefined8 *)(lVar14 + 8) = 0;
      AppendOperator(this,(IOperator *)&local_res18);
    }
    else {
      lVar14 = 0;
LAB_14ad3a0ea:
      local_res10[0] = 0;
      bVar10 = `Metasound::FGraphOperator::FGraphOperator'::__l7::<lambda_1>::operator()
                         (local_res10);
      if (bVar10) goto LAB_14ad3a0fd;
    }
    puVar15 = puVar15 + 1;
  } while( true );
}

// ~FGraphOperator @ 14ad3dc20

void __thiscall Metasound::FGraphOperator::~FGraphOperator(FGraphOperator *this)

{
  FScriptContainerElement *pFVar1;
  
  FVertexInterfaceData::~FVertexInterfaceData(&this->VertexData);
  DestructItems<TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>,int>
            ((TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> *)
             (this->ActiveOperators).AllocatorInstance.Data,(this->ActiveOperators).ArrayNum);
  pFVar1 = (this->ActiveOperators).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ResetStack).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PostExecuteStack).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ExecuteStack).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// AppendOperator @ 14ad466d0

void __thiscall
Metasound::FGraphOperator::AppendOperator
          (FGraphOperator *this,
          TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> param_1)

{
  int *piVar1;
  IOperator IVar2;
  FScriptContainerElement *pFVar3;
  IOperator *pIVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  
  if (*param_1.Ptr != (IOperator)0x0) {
    bVar6 = false;
    lVar8 = (**(code **)(*(longlong *)*param_1.Ptr + 0x38))();
    if (lVar8 != 0) {
      iVar7 = (this->ExecuteStack).ArrayNum;
      piVar1 = &(this->ExecuteStack).ArrayMax;
      IVar2 = *param_1.Ptr;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&(this->ExecuteStack).AllocatorInstance,piVar1);
      }
      bVar6 = true;
      (this->ExecuteStack).ArrayNum = iVar7 + 1;
      pFVar3 = (this->ExecuteStack).AllocatorInstance.Data;
      *(IOperator *)(pFVar3 + (longlong)iVar7 * 0x10) = IVar2;
      *(longlong *)(pFVar3 + (longlong)iVar7 * 0x10 + 8) = lVar8;
    }
    lVar8 = (**(code **)(*(longlong *)*param_1.Ptr + 0x40))();
    if (lVar8 != 0) {
      iVar7 = (this->PostExecuteStack).ArrayNum;
      piVar1 = &(this->PostExecuteStack).ArrayMax;
      IVar2 = *param_1.Ptr;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&(this->PostExecuteStack).AllocatorInstance,piVar1);
      }
      bVar6 = true;
      (this->PostExecuteStack).ArrayNum = iVar7 + 1;
      pFVar3 = (this->PostExecuteStack).AllocatorInstance.Data;
      *(IOperator *)(pFVar3 + (longlong)iVar7 * 0x10) = IVar2;
      *(longlong *)(pFVar3 + (longlong)iVar7 * 0x10 + 8) = lVar8;
    }
    lVar8 = (**(code **)(*(longlong *)*param_1.Ptr + 0x30))();
    if (lVar8 == 0) {
      if (!bVar6) goto LAB_14ad46886;
    }
    else {
      iVar7 = (this->ResetStack).ArrayNum;
      piVar1 = &(this->ResetStack).ArrayMax;
      IVar2 = *param_1.Ptr;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&(this->ResetStack).AllocatorInstance,piVar1);
      }
      (this->ResetStack).ArrayNum = iVar7 + 1;
      pFVar3 = (this->ResetStack).AllocatorInstance.Data;
      *(IOperator *)(pFVar3 + (longlong)iVar7 * 0x10) = IVar2;
      *(longlong *)(pFVar3 + (longlong)iVar7 * 0x10 + 8) = lVar8;
    }
    pIVar4 = (IOperator *)(this->ActiveOperators).AllocatorInstance.Data;
    if (((pIVar4 <= param_1.Ptr) && (param_1.Ptr < pIVar4 + (this->ActiveOperators).ArrayMax)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar7 = (this->ActiveOperators).ArrayNum;
    piVar1 = &(this->ActiveOperators).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->ActiveOperators).AllocatorInstance,piVar1);
    }
    (this->ActiveOperators).ArrayNum = iVar7 + 1;
    *(IOperator *)((this->ActiveOperators).AllocatorInstance.Data + (longlong)iVar7 * 8) =
         *param_1.Ptr;
    *param_1.Ptr = (IOperator)0x0;
  }
LAB_14ad46886:
  IVar2 = *param_1.Ptr;
  if (IVar2 == (IOperator)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014ad468a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)IVar2)(IVar2,1);
  return;
}

// BindInputs @ 14ad47fa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::FGraphOperator::BindInputs(FGraphOperator *this,FInputVertexInterfaceData *param_1)

{
  bool bVar1;
  
  bVar1 = MetasoundGraphPrivate::IsSupportedVertexData<Metasound::FInputVertexInterfaceData>
                    (&(this->VertexData).InputVertexInterfaceData,param_1);
  if ((!bVar1) && (1 < (byte)LogMetaSound._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  FInputVertexInterfaceData::operator=(param_1,&(this->VertexData).InputVertexInterfaceData);
  return;
}

// BindOutputs @ 14ad48420

void __thiscall
Metasound::FGraphOperator::BindOutputs(FGraphOperator *this,FOutputVertexInterfaceData *param_1)

{
  FOutputVertexInterfaceData::operator=(param_1,&(this->VertexData).OutputVertexInterfaceData);
  return;
}

// Execute @ 14ad4fbd0

void __thiscall Metasound::FGraphOperator::Execute(FGraphOperator *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->ExecuteStack).ArrayNum;
  pFVar2 = (this->ExecuteStack).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->ExecuteStack).ArrayNum != iVar1) {
      `TCheckedPointerIterator<Metasound::FGraphOperator::FExecuteEntry,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    (**(code **)(pFVar2 + 8))(*(undefined8 *)pFVar2);
    pFVar2 = pFVar2 + 0x10;
  }
  return;
}

// GetPostExecuteFunction @ 14ad566d0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::FGraphOperator::GetPostExecuteFunction(FGraphOperator *this)

{
  return StaticPostExecute;
}

// PostExecute @ 14ad5b960

void __thiscall Metasound::FGraphOperator::PostExecute(FGraphOperator *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->PostExecuteStack).ArrayNum;
  pFVar2 = (this->PostExecuteStack).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->PostExecuteStack).ArrayNum != iVar1) {
      `TCheckedPointerIterator<Metasound::FGraphOperator::FPostExecuteEntry,int,1>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar2) break;
    (**(code **)(pFVar3 + -8))(*(undefined8 *)(pFVar3 + -0x10));
    pFVar3 = pFVar3 + -0x10;
  }
  return;
}

// Reset @ 14ad628b0

void __thiscall Metasound::FGraphOperator::Reset(FGraphOperator *this,FResetParams *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->ResetStack).ArrayNum;
  pFVar2 = (this->ResetStack).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->ResetStack).ArrayNum != iVar1) {
      `TCheckedPointerIterator<Metasound::FGraphOperator::FResetEntry,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    (**(code **)(pFVar2 + 8))(*(undefined8 *)pFVar2,param_1);
    pFVar2 = pFVar2 + 0x10;
  }
  return;
}

// SetVertexInterfaceData @ 14ad64c80

void __thiscall
Metasound::FGraphOperator::SetVertexInterfaceData
          (FGraphOperator *this,FVertexInterfaceData *param_1)

{
  FVertexInterfaceData::operator=(&this->VertexData,param_1);
  return;
}

// StaticPostExecute @ 14ad652c0

void __cdecl Metasound::FGraphOperator::StaticPostExecute(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GraphOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundGraphOperator.cpp"
                       ,0xae,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  PostExecute((FGraphOperator *)param_1);
  return;
}

// operator() @ 15055bbc0

bool __thiscall
`Metasound::FGraphOperator::FGraphOperator'::__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6888746046608900197>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6888746046608900197>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

