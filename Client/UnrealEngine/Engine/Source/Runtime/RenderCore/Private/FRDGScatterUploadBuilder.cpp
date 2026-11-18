// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 3

// operator() @ 145e86da0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FRDGScatterUploadBuilder::Execute'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandList *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  code *pcVar5;
  longlong lVar6;
  bool bVar7;
  void *pvVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 local_res8 [8];
  
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1061,"FRDGScatterUploadBuilder",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\UnifiedBuffer.cpp"
               ,0x425);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1061);
  }
  plVar1 = *(longlong **)this;
  lVar6 = plVar1[1];
  lVar11 = *plVar1;
  lVar12 = (longlong)(int)lVar6 * 0x40 + lVar11;
  while( true ) {
    if ((int)plVar1[1] != (int)lVar6) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FRDGScatterUploadBuilder::FPass,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (lVar11 == lVar12) {
      if (!bVar13) {
        return;
      }
      FCpuProfilerTrace::OutputEndEvent();
      return;
    }
    puVar2 = *(undefined8 **)(lVar11 + 8);
    if ((*(char *)((longlong)puVar2 + 0x41) != '\0') &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("State == EState::Empty",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\UnifiedBuffer.cpp"
                           ,0x38b,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    LOCK();
    *(undefined1 *)((longlong)puVar2 + 0x41) = 1;
    UNLOCK();
    pvVar8 = FRHICommandListBase::LockBuffer
                       ((FRHICommandListBase *)param_1,(FRHIBuffer *)puVar2[5],0,
                        *(uint *)(puVar2 + 7),RLM_WriteOnly);
    *puVar2 = pvVar8;
    pvVar8 = FRHICommandListBase::LockBuffer
                       ((FRHICommandListBase *)param_1,(FRHIBuffer *)puVar2[6],0,
                        *(uint *)((longlong)puVar2 + 0x3c),RLM_WriteOnly);
    puVar2[1] = pvVar8;
    uVar3 = *(undefined8 *)(lVar11 + 8);
    UE::Core::Private::Function::CheckCallable(*(void **)(lVar11 + 0x10));
    pcVar5 = *(code **)(lVar11 + 0x10);
    plVar10 = (longlong *)(lVar11 + 0x20);
    if (*(longlong **)(lVar11 + 0x38) != (longlong *)0x0) {
      plVar10 = *(longlong **)(lVar11 + 0x38);
    }
    uVar9 = (**(code **)(*plVar10 + 8))();
    (*pcVar5)(uVar9,uVar3);
    lVar4 = *(longlong *)(lVar11 + 8);
    if ((*(char *)(lVar4 + 0x41) != '\x01') &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("State == EState::Locked",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\UnifiedBuffer.cpp"
                           ,0x393,L""), bVar7)) break;
    LOCK();
    *(undefined1 *)(lVar4 + 0x41) = 2;
    UNLOCK();
    FRHICommandListBase::UnlockBuffer((FRHICommandListBase *)param_1,*(FRHIBuffer **)(lVar4 + 0x28))
    ;
    FRHICommandListBase::UnlockBuffer((FRHICommandListBase *)param_1,*(FRHIBuffer **)(lVar4 + 0x30))
    ;
    lVar11 = lVar11 + 0x40;
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// Create @ 145e93340

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGScatterUploadBuilder * __cdecl FRDGScatterUploadBuilder::Create(FRDGBuilder *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  FRDGScatterUploadBuilder *pFVar6;
  undefined8 *local_18 [2];
  
  puVar5 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x20,0x10);
  if (puVar5 == (undefined8 *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FRDGScatterUploadBuilder *)(*pcVar2)();
      return pFVar6;
    }
  }
  else {
    *puVar5 = &___7__TObject_VFRDGScatterUploadBuilder___FRDGAllocator__6B_;
    puVar5[3] = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
  }
  local_18[0] = puVar5;
  if (((undefined8 **)param_1->_padding_ <= local_18) &&
     (local_18 < (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FRDGScatterUploadBuilder *)(*pcVar2)();
      return pFVar6;
    }
  }
  iVar4 = (int)param_1->_padding_;
  piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
  }
  *(int *)&param_1->_padding_ = iVar4 + 1;
  *(undefined8 **)(param_1->_padding_ + (longlong)iVar4 * 8) = local_18[0];
  return (FRDGScatterUploadBuilder *)(puVar5 + 1);
}

// Execute @ 145e98ef0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FTaskHandle __thiscall
FRDGScatterUploadBuilder::Execute(FRDGScatterUploadBuilder *this,FRDGBuilder *param_1)

{
  int iVar1;
  FTaskHandle *pFVar2;
  FPass *pFVar3;
  FPass *pFVar4;
  FRDGBuilder *in_R8;
  atomic<UE::Tasks::Private::FTaskBase_*> local_res8;
  FSharedReferencer<1> local_res20;
  FTaskHandle *local_38;
  undefined8 local_30;
  
  if ((this->Passes).ArrayNum == 0) {
    param_1->_padding_ = 0;
    return (FTaskHandle)(TRefCountPtr<UE::Tasks::Private::FTaskBase>)param_1;
  }
  local_38 = (FTaskHandle *)0x0;
  local_30 = 0;
  local_res8 = (atomic<UE::Tasks::Private::FTaskBase_*>)this;
  FRDGBuilder::
  AddCommandListSetupTask<_FRDGScatterUploadBuilder::Execute_::__l2::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>
            (in_R8,(<lambda_1> *)&local_res20,(FPipe *)&local_res8,
             (TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> *)0x0,
             (ETaskPriority)&local_38,true,0x8000 < this->MaxBytes);
  pFVar2 = local_38;
  DestructItems<UE::Tasks::Private::FTaskHandle,int>(local_38,(int)local_30);
  if (pFVar2 != (FTaskHandle *)0x0) {
    FMemory::Free(pFVar2);
  }
  iVar1 = (this->Passes).ArrayNum;
  pFVar3 = (this->Passes).AllocatorInstance.Data;
  pFVar4 = pFVar3 + iVar1;
  while( true ) {
    if ((this->Passes).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FRDGScatterUploadBuilder::FPass,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(&local_res8);
    }
    if (pFVar3 == pFVar4) break;
    FRDGAsyncScatterUploadBuffer::End(pFVar3->UploadBuffer,in_R8,pFVar3->Uploader);
    pFVar3 = pFVar3 + 1;
  }
  param_1->_padding_ = (longlong)local_res20.ReferenceController;
  return (FTaskHandle)(TRefCountPtr<UE::Tasks::Private::FTaskBase>)param_1;
}

