// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 2

// ~FRHICommandD3D12UpdateUniformBuffer @ 145a957f0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall
FRHICommandD3D12UpdateUniformBuffer::~FRHICommandD3D12UpdateUniformBuffer
          (FRHICommandD3D12UpdateUniformBuffer *this)

{
  FAtomicFlags *pFVar1;
  FRHIResource **ppFVar2;
  atomic<unsigned_int> aVar3;
  FRHIResource *this_00;
  FD3D12UniformBuffer *this_01;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FRHIResource **ppFVar7;
  
  this->_padding_ = (longlong)&___7FRHICommandD3D12UpdateUniformBuffer__6B_;
  ppFVar7 = (this->UpdatedResources).DataPtr;
  ppFVar2 = ppFVar7 + (this->UpdatedResources).ArrayNum;
  while( true ) {
    if (ppFVar7 == ppFVar2) {
      FD3D12ResourceLocation::~FD3D12ResourceLocation(&this->UpdatedLocation);
      this_01 = (this->UniformBuffer).Reference;
      if (this_01 != (FD3D12UniformBuffer *)0x0) {
        FRHIResource::Release((FRHIResource *)this_01);
        return;
      }
      return;
    }
    this_00 = *ppFVar7;
    LOCK();
    pFVar1 = &this_00->AtomicFlags;
    aVar3 = pFVar1->Packed;
    pFVar1->Packed = (atomic<unsigned_int>)((int)pFVar1->Packed + -1);
    UNLOCK();
    if (((int)aVar3 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(OldPacked & DeletingBit) == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                           ,0xa2,L"Resource is being deleted."), bVar5)) break;
    uVar6 = (uint)aVar3 & 0x3fffffff;
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumRefs >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                         ,0xa4,L"Reference count has underflowed.");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewValue >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                         ,0x53,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    else if (uVar6 == 1) {
      FRHIResource::MarkForDelete(this_00);
    }
    ppFVar7 = ppFVar7 + 1;
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// Execute @ 145aa6980

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommandD3D12UpdateUniformBuffer::Execute
          (FRHICommandD3D12UpdateUniformBuffer *this,FRHICommandListBase *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  int iVar2;
  FD3D12UniformBuffer *pFVar3;
  FRHIResource *this_00;
  longlong lVar4;
  FRHIResource *this_01;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  undefined1 local_res8 [8];
  
  uVar8 = 0;
  if (0 < (this->UpdatedResources).ArrayNum) {
    lVar11 = 0;
    do {
      uVar9 = ~uVar8 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar8 < (this->UpdatedResources).ArrayNum) {
        uVar7 = uVar9;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar3 = (this->UniformBuffer).Reference;
      this_00 = (this->UpdatedResources).DataPtr[lVar11];
      uVar7 = 0;
      if ((int)uVar8 < (int)pFVar3->_padding_) {
        uVar7 = uVar9;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar4 = pFVar3->_padding_;
      this_01 = *(FRHIResource **)(lVar4 + lVar11 * 8);
      if (this_01 != this_00) {
        *(FRHIResource **)(lVar4 + lVar11 * 8) = this_00;
        if (this_00 != (FRHIResource *)0x0) {
          FRHIResource::AddRef(this_00);
        }
        if (this_01 != (FRHIResource *)0x0) {
          FRHIResource::Release(this_01);
        }
      }
      pFVar3 = (this->UniformBuffer).Reference;
      uVar7 = 0;
      if ((int)uVar8 < (int)pFVar3->_padding_) {
        uVar7 = uVar9;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((*(longlong *)(pFVar3->_padding_ + lVar11 * 8) == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("UniformBuffer->GetResourceTable()[i]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12UniformBuffer.cpp"
                             ,0x93,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar8 = uVar8 + 1;
      lVar11 = lVar11 + 1;
    } while ((int)uVar8 < (this->UpdatedResources).ArrayNum);
  }
  FD3D12ResourceLocation::TransferOwnership
            (&((this->UniformBuffer).Reference)->ResourceLocation,&this->UpdatedLocation);
  pFVar3 = (this->UniformBuffer).Reference;
  lpCriticalSection = &pFVar3->UpdateListenersCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar10 = (pFVar3->UpdateListeners).AllocatorInstance.Data;
  iVar2 = (pFVar3->UpdateListeners).ArrayNum;
  pFVar1 = pFVar10 + (longlong)iVar2 * 8;
  while( true ) {
    if ((pFVar3->UpdateListeners).ArrayNum != iVar2) {
      `TCheckedPointerIterator<ID3D12UniformBufferUpdateListener_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar10 == pFVar1) break;
    (**(code **)(**(longlong **)pFVar10 + 8))(*(longlong **)pFVar10,param_1,pFVar3);
    pFVar10 = pFVar10 + 8;
  }
                    /* WARNING: Could not recover jumptable at 0x000145aa6b9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

