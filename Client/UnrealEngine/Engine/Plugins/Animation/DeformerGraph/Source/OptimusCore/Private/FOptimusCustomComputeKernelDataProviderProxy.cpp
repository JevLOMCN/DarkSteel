// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 4

// FOptimusCustomComputeKernelDataProviderProxy @ 14e151070

FOptimusCustomComputeKernelDataProviderProxy * __thiscall
FOptimusCustomComputeKernelDataProviderProxy::FOptimusCustomComputeKernelDataProviderProxy
          (FOptimusCustomComputeKernelDataProviderProxy *this,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  this->_padding_ = (longlong)&___7FOptimusCustomComputeKernelDataProviderProxy__6B_;
  (this->InvocationThreadCounts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InvocationThreadCounts).AllocatorInstance.Data = (param_1->AllocatorInstance).Data;
  (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->InvocationThreadCounts).ArrayNum = param_1->ArrayNum;
  (this->InvocationThreadCounts).ArrayMax = param_1->ArrayMax;
  param_1->ArrayNum = 0;
  param_1->ArrayMax = 0;
  this->TotalThreadCount = 0;
  pFVar3 = (this->InvocationThreadCounts).AllocatorInstance.Data;
  iVar2 = (this->InvocationThreadCounts).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 4;
  while( true ) {
    if ((this->InvocationThreadCounts).ArrayNum != iVar2) {
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    this->TotalThreadCount = this->TotalThreadCount + *(int *)pFVar3;
    pFVar3 = pFVar3 + 4;
  }
  return this;
}

// GatherDispatchData @ 14e1b39d0

void __thiscall
FOptimusCustomComputeKernelDataProviderProxy::GatherDispatchData
          (FOptimusCustomComputeKernelDataProviderProxy *this,FDispatchData *param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uchar *puVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  
  iVar7 = param_1->ParameterBufferOffset;
  puVar8 = param_1->ParameterBuffer;
  iVar1 = param_1->NumInvocations;
  iVar2 = param_1->ParameterBufferStride;
  if ((iVar1 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumElements >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x3f,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((iVar2 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("BytesBetweenElements >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x40,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((((longlong)iVar2 & 0xfU) != 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("BytesBetweenElements % alignof(ElementType) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x41,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar11 = 0;
  uVar10 = 0;
  if (0 < iVar1) {
    lVar9 = 0;
    puVar8 = puVar8 + (longlong)iVar7 + 8;
    do {
      uVar5 = 0;
      if ((int)uVar10 < iVar1) {
        uVar5 = ~uVar10 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < NumElements)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                             ,0x96,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(int *)(puVar8 + -8) = this->TotalThreadCount;
      puVar8[-4] = '\x01';
      puVar8[-3] = '\0';
      puVar8[-2] = '\0';
      puVar8[-1] = '\0';
      puVar8[0] = '\x01';
      puVar8[1] = '\0';
      puVar8[2] = '\0';
      puVar8[3] = '\0';
      if (param_1->bUnifiedDispatch == false) {
        uVar5 = 0;
        if ((int)uVar10 < (this->InvocationThreadCounts).ArrayNum) {
          uVar5 = ~uVar10 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar7 = *(int *)((this->InvocationThreadCounts).AllocatorInstance.Data + lVar9 * 4);
      }
      else {
        iVar7 = this->TotalThreadCount;
      }
      *(int *)(puVar8 + 4) = iVar7;
      iVar6 = iVar11;
      if (param_1->bUnifiedDispatch != false) {
        iVar6 = 0;
      }
      iVar11 = iVar11 + iVar7;
      *(int *)(puVar8 + 8) = iVar6;
      uVar10 = uVar10 + 1;
      puVar8 = puVar8 + iVar2;
      lVar9 = lVar9 + 1;
    } while ((int)uVar10 < iVar1);
  }
  return;
}

// GetDispatchThreadCount @ 14e1c39c0

int __thiscall
FOptimusCustomComputeKernelDataProviderProxy::GetDispatchThreadCount
          (FOptimusCustomComputeKernelDataProviderProxy *this,
          TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  
  uVar3 = (this->InvocationThreadCounts).ArrayNum;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < (int)uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,uVar3,&param_1->AllocatorInstance,0,piVar1);
  }
  pFVar9 = (this->InvocationThreadCounts).AllocatorInstance.Data;
  iVar7 = (this->InvocationThreadCounts).ArrayNum;
  pFVar2 = pFVar9 + (longlong)iVar7 * 4;
  while( true ) {
    if ((this->InvocationThreadCounts).ArrayNum != iVar7) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar9 == pFVar2) break;
    local_28 = *(undefined4 *)pFVar9;
    pFVar4 = (param_1->AllocatorInstance).Data;
    uStack_24 = 1;
    local_20 = 1;
    if ((pFVar4 <= (FScriptContainerElement *)&local_28) &&
       ((FScriptContainerElement *)&local_28 < pFVar4 + (longlong)*piVar1 * 0xc)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        iVar7 = (*pcVar5)();
        return iVar7;
      }
    }
    iVar8 = param_1->ArrayNum;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x40c,&param_1->AllocatorInstance,piVar1);
    }
    pFVar9 = pFVar9 + 4;
    param_1->ArrayNum = iVar8 + 1;
    pFVar4 = (param_1->AllocatorInstance).Data;
    *(ulonglong *)(pFVar4 + (longlong)iVar8 * 0xc) = CONCAT44(uStack_24,local_28);
    *(undefined4 *)(pFVar4 + (longlong)iVar8 * 0xc + 8) = local_20;
  }
  return param_1->ArrayNum;
}

// IsValid @ 14e1f05d0

bool __thiscall
FOptimusCustomComputeKernelDataProviderProxy::IsValid
          (FOptimusCustomComputeKernelDataProviderProxy *this,FValidationData *param_1)

{
  return 0 < this->TotalThreadCount;
}

