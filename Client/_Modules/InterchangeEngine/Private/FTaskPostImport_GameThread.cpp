// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeEngine
// Functions: 3

// operator() @ 14e4dbf70

void __thiscall
`UE::Interchange::FTaskPostImport_GameThread::Execute'::__l2::<lambda_1>::operator()
          (void *this,
          TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>
          *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  ForAnyElementType *pFVar11;
  UObject *pUVar12;
  FString *pFVar13;
  FScriptContainerElement *pFVar14;
  ulonglong uVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  uint uVar18;
  FSoftObjectPath *pFVar19;
  FSoftObjectPath *this_00;
  undefined1 local_res18 [8];
  uint local_res20;
  UObject *local_e8 [2];
  UObject *local_d8;
  undefined8 local_d0;
  UObject *local_c8;
  FString FStack_c0;
  undefined8 local_b0;
  ForAnyElementType local_a8;
  undefined8 local_a0;
  ForAnyElementType local_98;
  undefined8 local_90;
  undefined8 local_88;
  FScriptContainerElement local_80;
  FString local_78;
  FString local_68;
  FString local_58;
  
  pFVar11 = *(ForAnyElementType **)((longlong)this + 8);
  bVar6 = false;
  bVar5 = false;
  uVar18 = param_1->ArrayNum + *(int *)&pFVar11[1].Data;
  if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
  }
  if (*(int *)((longlong)&pFVar11[1].Data + 4) < (int)uVar18) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar18,pFVar11,*(int *)&pFVar11[1].Data,
               (int *)((longlong)&pFVar11[1].Data + 4));
  }
  pFVar11 = *(ForAnyElementType **)((longlong)this + 0x10);
  uVar18 = param_1->ArrayNum + *(int *)&pFVar11[1].Data;
  if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
  }
  if (*(int *)((longlong)&pFVar11[1].Data + 4) < (int)uVar18) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar18,pFVar11,*(int *)&pFVar11[1].Data,(int *)((longlong)&pFVar11[1].Data + 4));
  }
  pFVar11 = *(ForAnyElementType **)((longlong)this + 0x18);
  uVar18 = param_1->ArrayNum + *(int *)&pFVar11[1].Data;
  if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
  }
  piVar1 = (int *)((longlong)&pFVar11[1].Data + 4);
  if (*piVar1 < (int)uVar18) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar18,pFVar11,*(int *)&pFVar11[1].Data,piVar1);
  }
  plVar2 = *(longlong **)this;
  if ((*plVar2 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar10 = *(int *)(*(longlong *)((longlong)this + 0x20) + 0x60);
  if ((iVar10 < 0) || (*(int *)(*plVar2 + 0x40) <= iVar10)) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7806791002571669321>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\Tasks\\InterchangeTaskPipeline.cpp"
                       ,0xb7,"AsyncHelper->SourceDatas.IsValidIndex(SourceIndex)");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  local_c8 = (UObject *)0x0;
  FStack_c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d0 = 0;
  FStack_c0.Data.ArrayNum = 0;
  FStack_c0.Data.ArrayMax = 0;
  local_a8.Data = (FScriptContainerElement *)0x0;
  local_a0 = 0;
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90 = 0;
  local_80 = (FScriptContainerElement)0x0;
  if (bVar7) {
    plVar2 = *(longlong **)this;
    if ((*plVar2 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar3 = *plVar2;
    uVar18 = *(uint *)(*(longlong *)((longlong)this + 0x20) + 0x60);
    uVar9 = 0;
    if ((int)uVar18 < *(int *)(lVar3 + 0x40)) {
      uVar9 = ~uVar18 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pUVar12 = *(UObject **)(*(longlong *)(lVar3 + 0x38) + (longlong)(int)uVar18 * 8);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar12);
    }
  }
  else {
    pUVar12 = (UObject *)0x0;
  }
  plVar2 = *(longlong **)this;
  local_d8 = pUVar12;
  if ((*plVar2 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar3 = *plVar2;
  uVar18 = *(uint *)(*(longlong *)((longlong)this + 0x20) + 0x60);
  uVar9 = 0;
  if ((int)uVar18 < *(int *)(lVar3 + 0x30)) {
    uVar9 = ~uVar18 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_b0 = *(undefined8 *)(*(longlong *)(lVar3 + 0x28) + (longlong)(int)uVar18 * 8);
  plVar2 = *(longlong **)this;
  if ((*plVar2 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar3 = *plVar2;
  pFVar11 = (ForAnyElementType *)(lVar3 + 0x58);
  if (&local_a8 != pFVar11) {
    iVar10 = *(int *)(lVar3 + 0x60);
    pFVar17 = pFVar11->Data;
    local_a0 = CONCAT44(local_a0._4_4_,iVar10);
    if (((iVar10 != 0) || (local_a0._4_4_ != 0)) &&
       (UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,iVar10,local_a0._4_4_,&local_a8,iVar10,(int *)((longlong)&local_a0 + 4)),
       iVar10 != 0)) {
      memcpy(local_a8.Data,pFVar17,(longlong)iVar10 << 3);
    }
  }
  plVar2 = *(longlong **)this;
  if ((*plVar2 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar3 = *plVar2;
  pFVar11 = (ForAnyElementType *)(lVar3 + 0x68);
  if (&local_98 != pFVar11) {
    iVar10 = *(int *)(lVar3 + 0x70);
    pFVar17 = pFVar11->Data;
    local_90 = CONCAT44(local_90._4_4_,iVar10);
    if ((iVar10 == 0) && (local_90._4_4_ == 0)) {
      local_90 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar10,local_90._4_4_,&local_98,iVar10,(int *)((longlong)&local_90 + 4));
      if (iVar10 != 0) {
        memcpy(local_98.Data,pFVar17,(longlong)iVar10 << 3);
      }
    }
  }
  plVar2 = *(longlong **)this;
  if ((*plVar2 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar3 = *plVar2;
  uVar18 = *(uint *)(*(longlong *)((longlong)this + 0x20) + 0x60);
  uVar9 = 0;
  if ((int)uVar18 < *(int *)(lVar3 + 0x50)) {
    uVar9 = ~uVar18 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this_00 = (FSoftObjectPath *)(param_1->AllocatorInstance).Data;
  local_88 = *(undefined8 *)(*(longlong *)(lVar3 + 0x48) + (longlong)(int)uVar18 * 8);
  local_res20 = param_1->ArrayNum;
  uVar15 = (ulonglong)(int)local_res20;
  pFVar17 = (FScriptContainerElement *)&this_00[1].SubPathString;
  pFVar19 = (FSoftObjectPath *)((longlong)this_00 + uVar15 * 0x38);
  do {
    if (param_1->ArrayNum != (int)uVar15) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (this_00 == pFVar19) {
      if (local_98.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data);
      }
      if (local_a8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data);
      }
      if (FStack_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_c0.Data.AllocatorInstance.Data);
      }
      return;
    }
    pUVar12 = FSoftObjectPath::TryLoad(this_00,(FUObjectSerializeContext *)0x0);
    if ((bVar7) && (*(longlong *)(pFVar17 + -0x10) != 0)) {
      local_d0 = *(undefined8 *)(pFVar17 + -8);
      local_c8 = pUVar12;
      if (*(UInterchangeBaseNode **)(pFVar17 + -8) == (UInterchangeBaseNode *)0x0) {
        bVar5 = true;
        pFVar13 = &local_78;
        local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_78.Data.ArrayNum = 0;
        local_78.Data.ArrayMax = 0;
LAB_14e4dc487:
        if (FStack_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_c0.Data.AllocatorInstance.Data);
        }
        FStack_c0.Data.AllocatorInstance.Data = (pFVar13->Data).AllocatorInstance.Data;
        (pFVar13->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        FStack_c0.Data.ArrayNum = (pFVar13->Data).ArrayNum;
        FStack_c0.Data.ArrayMax = (pFVar13->Data).ArrayMax;
        (pFVar13->Data).ArrayNum = 0;
        (pFVar13->Data).ArrayMax = 0;
      }
      else {
        bVar6 = true;
        pFVar13 = UInterchangeBaseNode::GetUniqueID
                            (*(UInterchangeBaseNode **)(pFVar17 + -8),&local_68);
        if (&FStack_c0 != pFVar13) goto LAB_14e4dc487;
      }
      if ((bVar5) &&
         (bVar5 = false, local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if ((bVar6) &&
         (bVar6 = false, local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      local_80 = *pFVar17;
      (**(code **)(**(longlong **)(pFVar17 + -0x10) + 0x310))();
    }
    if ((pUVar12 != (UObject *)0x0) && ((*(uint *)&pUVar12->field_0x8 >> 0x1e & 1) == 0)) {
      pFVar11 = *(ForAnyElementType **)((longlong)this + 8);
      pFVar14 = (FScriptContainerElement *)
                UInterchangeBaseNode::GetUniqueID
                          (*(UInterchangeBaseNode **)(pFVar17 + -8),&local_58);
      if ((pFVar11->Data <= pFVar14) &&
         ((pFVar14 < pFVar11->Data + (longlong)*(int *)((longlong)&pFVar11[1].Data + 4) * 0x10 &&
          (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar8)))) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar10 = *(int *)&pFVar11[1].Data;
      piVar1 = (int *)((longlong)&pFVar11[1].Data + 4);
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,pFVar11,piVar1);
      }
      *(int *)&pFVar11[1].Data = iVar10 + 1;
      pFVar16 = pFVar11->Data + (longlong)iVar10 * 0x10;
      *(undefined8 *)pFVar16 = 0;
      *(undefined8 *)pFVar16 = *(undefined8 *)pFVar14;
      *(undefined8 *)pFVar14 = 0;
      *(undefined4 *)(pFVar16 + 8) = *(undefined4 *)(pFVar14 + 8);
      *(undefined4 *)(pFVar16 + 0xc) = *(undefined4 *)(pFVar14 + 0xc);
      *(undefined8 *)(pFVar14 + 8) = 0;
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      pFVar11 = *(ForAnyElementType **)((longlong)this + 0x10);
      local_e8[0] = FSoftObjectPath::TryLoad(this_00,(FUObjectSerializeContext *)0x0);
      if (((pFVar11->Data <= (FScriptContainerElement *)local_e8) &&
          ((FScriptContainerElement *)local_e8 <
           pFVar11->Data + (longlong)*(int *)((longlong)&pFVar11[1].Data + 4) * 8)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar10 = *(int *)&pFVar11[1].Data;
      piVar1 = (int *)((longlong)&pFVar11[1].Data + 4);
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,pFVar11,piVar1);
      }
      *(int *)&pFVar11[1].Data = iVar10 + 1;
      *(UObject **)(pFVar11->Data + (longlong)iVar10 * 8) = local_e8[0];
      pFVar11 = *(ForAnyElementType **)((longlong)this + 0x18);
      if (((pFVar11->Data <= pFVar17) &&
          (pFVar17 < pFVar11->Data + *(int *)((longlong)&pFVar11[1].Data + 4))) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar10 = *(int *)&pFVar11[1].Data;
      piVar1 = (int *)((longlong)&pFVar11[1].Data + 4);
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x101,pFVar11,piVar1);
      }
      *(int *)&pFVar11[1].Data = iVar10 + 1;
      pFVar11->Data[iVar10] = *pFVar17;
    }
    uVar15 = (ulonglong)local_res20;
    this_00 = (FSoftObjectPath *)&this_00[1].SubPathString.Data.ArrayNum;
    pFVar17 = pFVar17 + 0x38;
  } while( true );
}

// Execute @ 14e4f1380

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UE::Interchange::FTaskPostImport_GameThread::Execute(FTaskPostImport_GameThread *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  UObject *pUVar1;
  code *pcVar2;
  atomic<int> aVar3;
  FImportAsyncHelper *pFVar4;
  bool bVar5;
  bool bVar6;
  atomic<int> aVar7;
  int iVar8;
  uint uVar9;
  char *pcVar10;
  undefined8 uVar11;
  atomic<unsigned_char> *paVar12;
  longlong *plVar13;
  undefined1 *puVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  bool bVar20;
  FLLMScope local_res10 [2];
  longlong local_res18;
  UInterchangeBaseNodeContainer *local_res20;
  FImportAsyncHelper *local_128;
  TReferenceControllerBase<1> *local_120;
  void *local_118;
  undefined8 local_110;
  FString *local_108;
  undefined8 local_100;
  void *local_f8;
  undefined8 local_f0;
  code *local_e8;
  longlong local_d8 [3];
  longlong *local_c0;
  UInterchangePipelineBase *local_b8;
  FMemScope local_b0;
  FImportAsyncHelper **local_a8;
  FString **ppFStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  FTaskPostImport_GameThread *local_88;
  code *local_78 [5];
  undefined8 *local_50;
  
  bVar20 = -1 < CpuChannel->Enabled;
  if (bVar20) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId127,"UE::Interchange::FTaskPostImport_GameThread::DoTask",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\Tasks\\InterchangeTaskPipeline.cpp"
               ,0x7f);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId127);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name132,L"Interchange");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res10,LLMScope_Name132,false,None,Default,true);
  FMemScope::FMemScope(&local_b0,&LLMScope_Name132,true);
  bVar5 = IsInGameThread();
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\Tasks\\InterchangeTaskPipeline.cpp"
                         ,0x85,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_120 = (this->WeakAsyncHelper).WeakReferenceCount.ReferenceController;
  local_128 = (FImportAsyncHelper *)0x0;
  if (local_120 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = local_120->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        local_120 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14e4f14b2;
      }
      LOCK();
      aVar7 = local_120->SharedReferenceCount;
      bVar5 = aVar3 == aVar7;
      if (bVar5) {
        local_120->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar7 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar7;
    } while (!bVar5);
    if (local_120 != (TReferenceControllerBase<1> *)0x0) {
      local_128 = (this->WeakAsyncHelper).Object;
    }
  }
LAB_14e4f14b2:
  if (local_128 == (FImportAsyncHelper *)0x0) {
    bVar5 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7806791002571669368>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\Tasks\\InterchangeTaskPipeline.cpp"
                       ,0x88,"AsyncHelper.IsValid()");
    if (bVar5) {
code_r0x00014e4f1b10:
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    if ((local_128 == (FImportAsyncHelper *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (local_128->bCancel == (atomic<bool>)0x0) {
      if ((local_128 == (FImportAsyncHelper *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar4 = local_128;
      uVar17 = this->SourceIndex;
      if (((int)uVar17 < 0) || ((local_128->BaseNodeContainers).ArrayNum <= (int)uVar17)) {
        pcVar10 = "AsyncHelper->BaseNodeContainers.IsValidIndex(SourceIndex)";
        iVar8 = 0x8d;
        paVar12 = &bGEnsureHasExecuted<_7806791002571669363>;
      }
      else {
        uVar15 = 0;
        if ((int)uVar17 < (local_128->BaseNodeContainers).ArrayNum) {
          uVar15 = ~uVar17 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_res20 = *(UInterchangeBaseNodeContainer **)
                       ((pFVar4->BaseNodeContainers).AllocatorInstance.Data +
                       (longlong)(int)uVar17 * 8);
        if (local_res20 != (UInterchangeBaseNodeContainer *)0x0) {
          local_a8 = &local_128;
          ppFStack_a0 = &local_108;
          local_98 = &local_118;
          uStack_90 = &local_f8;
          local_108 = (FString *)0x0;
          local_100 = 0;
          local_118 = (void *)0x0;
          local_110 = 0;
          local_f8 = (void *)0x0;
          local_f0 = 0;
          local_88 = this;
          if ((local_128 == (FImportAsyncHelper *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar5)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar4 = local_128;
          local_78[0] = (code *)0x0;
          local_50 = FMemory::Malloc(0x30,8);
          *local_50 = &Core::Private::Function::
                       TFunction_OwnedObject<`UE::Interchange::FTaskPostImport_GameThread::Execute'::`2'::<lambda_1>,0,1>
                       ::_vftable_;
          local_50[1] = &local_128;
          local_50[2] = &local_108;
          local_50[3] = &local_118;
          local_50[4] = &local_f8;
          local_50[5] = this;
          if (local_50 + 1 != (longlong *)0x0) {
            local_78[0] = Core::Private::Function::
                          TFunctionRefCaller<`UE::Interchange::FTaskPostImport_GameThread::Execute'::__l2::<lambda_1>,void,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>_const_&>
                          ::Call;
          }
          FImportAsyncHelper::IterateImportedAssets
                    (pFVar4,this->SourceIndex,
                     (TFunction<void___cdecl(TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>_const_&)>
                      *)local_78);
          if ((local_128 == (FImportAsyncHelper *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar5)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar4 = local_128;
          local_e8 = (code *)0x0;
          local_c0 = FMemory::Malloc(0x30,8);
          *local_c0 = (longlong)
                      &Core::Private::Function::
                       TFunction_OwnedObject<`UE::Interchange::FTaskPostImport_GameThread::Execute'::`2'::<lambda_1>,0,1>
                       ::_vftable_;
          local_c0[1] = (longlong)local_a8;
          local_c0[2] = (longlong)ppFStack_a0;
          *(undefined4 *)(local_c0 + 3) = (undefined4)local_98;
          *(undefined4 *)((longlong)local_c0 + 0x1c) = local_98._4_4_;
          *(undefined4 *)(local_c0 + 4) = (undefined4)uStack_90;
          *(undefined4 *)((longlong)local_c0 + 0x24) = uStack_90._4_4_;
          local_c0[5] = (longlong)local_88;
          if (local_c0 + 1 != (longlong *)0x0) {
            local_e8 = Core::Private::Function::
                       TFunctionRefCaller<`UE::Interchange::FTaskPostImport_GameThread::Execute'::__l2::<lambda_1>,void,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>_const_&>
                       ::Call;
          }
          uVar17 = this->SourceIndex;
          lpCriticalSection = &pFVar4->ImportedSceneObjectsPerSourceIndexLock;
          if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
            Core::Private::ReportNotNullPtr();
          }
          EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
          if (*(int *)&(pFVar4->ImportedSceneObjectsPerSourceIndex).field_0x8 !=
              *(int *)&(pFVar4->ImportedSceneObjectsPerSourceIndex).field_0x34) {
            puVar14 = *(undefined1 **)&(pFVar4->ImportedSceneObjectsPerSourceIndex).field_0x40;
            if (puVar14 == (undefined1 *)0x0) {
              puVar14 = &(pFVar4->ImportedSceneObjectsPerSourceIndex).field_0x38;
            }
            iVar8 = *(int *)(puVar14 +
                            (ulonglong)
                            (*(int *)&(pFVar4->ImportedSceneObjectsPerSourceIndex).field_0x48 - 1U &
                            uVar17) * 4);
            if (iVar8 != -1) {
              lVar19 = *(longlong *)&pFVar4->ImportedSceneObjectsPerSourceIndex;
              do {
                if (*(uint *)((longlong)iVar8 * 0x20 + lVar19) == uVar17) {
                  TMapBase<int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>,0>_>
                  ::FindChecked((TMapBase<int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>,0>_>
                                 *)&pFVar4->ImportedSceneObjectsPerSourceIndex,uVar17);
                  Core::Private::Function::CheckCallable(local_e8);
                  pcVar2 = local_e8;
                  plVar13 = local_d8;
                  if (local_c0 != (longlong *)0x0) {
                    plVar13 = local_c0;
                  }
                  uVar11 = (**(code **)(*plVar13 + 8))();
                  (*pcVar2)(uVar11);
                  break;
                }
                iVar8 = *(int *)((longlong)iVar8 * 0x20 + 0x18 + lVar19);
              } while (iVar8 != -1);
            }
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
          if (local_e8 != (code *)0x0) {
            plVar13 = local_d8;
            if (local_c0 != (longlong *)0x0) {
              plVar13 = local_c0;
            }
            (**(code **)(*plVar13 + 0x10))();
          }
          if ((int)local_100 == (int)local_110) {
            uVar17 = 0;
            lVar19 = 0;
            while( true ) {
              local_res18 = lVar19;
              if ((local_128 == (FImportAsyncHelper *)0x0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar5)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              if ((local_128->Pipelines).ArrayNum <= (int)uVar17) break;
              uVar15 = 0;
              lVar18 = 0;
              if (0 < (int)local_110) {
                do {
                  if ((local_128 == (FImportAsyncHelper *)0x0) &&
                     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                        ("IsValid()",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                         ,0x458,L""), bVar5)) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  pFVar4 = local_128;
                  uVar9 = 0;
                  if ((int)uVar17 < (local_128->Pipelines).ArrayNum) {
                    uVar9 = ~uVar17 >> 0x1f;
                  }
                  if ((uVar9 == 0) &&
                     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar5)) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  uVar16 = ~uVar15 >> 0x1f;
                  local_b8 = *(UInterchangePipelineBase **)
                              ((pFVar4->Pipelines).AllocatorInstance.Data + lVar19);
                  uVar9 = 0;
                  if ((int)uVar15 < (int)local_f0) {
                    uVar9 = uVar16;
                  }
                  if ((uVar9 == 0) &&
                     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar5)) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  bVar5 = *(bool *)(lVar18 + (longlong)local_f8);
                  uVar9 = 0;
                  if ((int)uVar15 < (int)local_110) {
                    uVar9 = uVar16;
                  }
                  if ((uVar9 == 0) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar6)) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  pUVar1 = *(UObject **)((longlong)local_118 + lVar18 * 8);
                  uVar9 = 0;
                  if ((int)uVar15 < (int)local_100) {
                    uVar9 = uVar16;
                  }
                  if ((uVar9 == 0) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar6)) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  UInterchangePipelineBase::ScriptedExecutePostImportPipeline
                            (local_b8,local_res20,local_108 + (int)uVar15,pUVar1,bVar5);
                  uVar15 = uVar15 + 1;
                  lVar18 = lVar18 + 1;
                  lVar19 = local_res18;
                } while ((int)uVar15 < (int)local_110);
              }
              uVar17 = uVar17 + 1;
              lVar19 = lVar19 + 8;
            }
          }
          else {
            bVar5 = Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_7806791002571669283>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\Tasks\\InterchangeTaskPipeline.cpp"
                               ,0xdd,"NodeUniqueIDs.Num() == ImportedObjects.Num()");
            if (bVar5) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          if (local_f8 != (void *)0x0) {
            FMemory::Free(local_f8);
          }
          if (local_118 != (void *)0x0) {
            FMemory::Free(local_118);
          }
          DestructItems<FString,int>(local_108,(int)local_100);
          if (local_108 != (FString *)0x0) {
            FMemory::Free(local_108);
          }
          goto LAB_14e4f1b11;
        }
        pcVar10 = "NodeContainer";
        iVar8 = 0x94;
        paVar12 = &bGEnsureHasExecuted<_7806791002571669356>;
      }
      bVar5 = Assert::Private::ExecCheckImplInternal
                        (paVar12,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\Tasks\\InterchangeTaskPipeline.cpp"
                         ,iVar8,pcVar10);
      if (bVar5) goto code_r0x00014e4f1b10;
    }
  }
LAB_14e4f1b11:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_120);
  FMemScope::~FMemScope(&local_b0);
  FLLMScope::~FLLMScope(local_res10);
  if (bVar20) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// GetTaskThread @ 14e4f98c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

EInterchangeTaskThread __thiscall
UE::Interchange::FTaskPostImport_GameThread::GetTaskThread(FTaskPostImport_GameThread *this)

{
  return GameThread;
}

