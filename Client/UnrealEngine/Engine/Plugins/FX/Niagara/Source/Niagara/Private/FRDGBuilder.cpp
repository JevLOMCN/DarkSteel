// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 7

// AllocParameters<FNiagaraCopySVTToDenseBufferCS::FParameters> @ 14919a1f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FParameters * __thiscall
FRDGBuilder::AllocParameters<FNiagaraCopySVTToDenseBufferCS::FParameters>(FRDGBuilder *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  FParameters *pFVar6;
  undefined8 *local_18 [2];
  
  puVar5 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x60,0x10);
  if (puVar5 == (undefined8 *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FParameters *)(*pcVar2)();
      return pFVar6;
    }
  }
  else {
    *puVar5 = &___7__TObject_VFParameters_FNiagaraCopySVTToDenseBufferCS___FRDGAllocator__6B_;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = 0;
  }
  local_18[0] = puVar5;
  if (((undefined8 **)this->_padding_ <= local_18) &&
     (local_18 < (undefined8 **)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FParameters *)(*pcVar2)();
      return pFVar6;
    }
  }
  iVar4 = (int)this->_padding_;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&this->_padding_,piVar1);
  }
  *(int *)&this->_padding_ = iVar4 + 1;
  *(undefined8 **)(this->_padding_ + (longlong)iVar4 * 8) = local_18[0];
  return (FParameters *)(puVar5 + 2);
}

// AllocPODArray<FNiagaraDispatchIndirectInfoCS> @ 1491ef270

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FNiagaraDispatchIndirectInfoCS * __thiscall
FRDGBuilder::AllocPODArray<FNiagaraDispatchIndirectInfoCS>(FRDGBuilder *this,uint param_1)

{
  FNiagaraDispatchIndirectInfoCS *pFVar1;
  
  pFVar1 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,(ulonglong)param_1 * 0x1c,4);
  return pFVar1;
}

// AllocParameters<FNDIGpuComputeDispatchArgsGenParameters> @ 1491ef290

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FNDIGpuComputeDispatchArgsGenParameters * __thiscall
FRDGBuilder::AllocParameters<FNDIGpuComputeDispatchArgsGenParameters>(FRDGBuilder *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  FNDIGpuComputeDispatchArgsGenParameters *pFVar6;
  undefined8 *local_18 [2];
  
  puVar5 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x60,0x10);
  if (puVar5 == (undefined8 *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FNDIGpuComputeDispatchArgsGenParameters *)(*pcVar2)();
      return pFVar6;
    }
  }
  else {
    *puVar5 = &___7__TObject_VFNDIGpuComputeDispatchArgsGenParameters___FRDGAllocator__6B_;
    puVar5[2] = 0;
    puVar5[6] = 0;
    puVar5[7] = 0;
    puVar5[8] = 0;
    puVar5[9] = 0;
    puVar5[10] = 0;
    puVar5[0xb] = 0;
  }
  local_18[0] = puVar5;
  if (((undefined8 **)this->_padding_ <= local_18) &&
     (local_18 < (undefined8 **)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FNDIGpuComputeDispatchArgsGenParameters *)(*pcVar2)();
      return pFVar6;
    }
  }
  iVar4 = (int)this->_padding_;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&this->_padding_,piVar1);
  }
  *(int *)&this->_padding_ = iVar4 + 1;
  *(undefined8 **)(this->_padding_ + (longlong)iVar4 * 8) = local_18[0];
  return (FNDIGpuComputeDispatchArgsGenParameters *)(puVar5 + 2);
}

// AllocParameters<FNiagaraGpuComputeDispatchParameters> @ 1492c9890

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FNiagaraGpuComputeDispatchParameters * __thiscall
FRDGBuilder::AllocParameters<FNiagaraGpuComputeDispatchParameters>(FRDGBuilder *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  FNiagaraGpuComputeDispatchParameters *pFVar6;
  undefined8 *local_18 [2];
  
  puVar5 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x20,0x10);
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x0;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FNiagaraGpuComputeDispatchParameters *)(*pcVar2)();
      return pFVar6;
    }
  }
  else {
    puVar5[2] = 0;
    *puVar5 = &___7__TObject_VFNiagaraGpuComputeDispatchParameters___FRDGAllocator__6B_;
    *(undefined1 *)(puVar5 + 3) = 1;
  }
  local_18[0] = puVar5;
  if (((undefined8 **)this->_padding_ <= local_18) &&
     (local_18 < (undefined8 **)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FNiagaraGpuComputeDispatchParameters *)(*pcVar2)();
      return pFVar6;
    }
  }
  iVar4 = (int)this->_padding_;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&this->_padding_,piVar1);
  }
  *(int *)&this->_padding_ = iVar4 + 1;
  *(undefined8 **)(this->_padding_ + (longlong)iVar4 * 8) = local_18[0];
  return (FNiagaraGpuComputeDispatchParameters *)(puVar5 + 2);
}

// AllocParameters<FNiagaraShader::FParameters> @ 1492c99b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TStridedView<FNiagaraShader::FParameters,int> * __thiscall
FRDGBuilder::AllocParameters<FNiagaraShader::FParameters>
          (FRDGBuilder *this,TStridedView<FNiagaraShader::FParameters,int> *__return_storage_ptr__,
          FShaderParametersMetadata *param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  FRHIUniformBufferLayout *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FParameters *pFVar9;
  TStridedView<FNiagaraShader::FParameters,int> *pTVar10;
  undefined8 *local_28 [2];
  
  uVar2 = param_1->Size;
  uVar7 = uVar2 * param_2;
  pFVar9 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,(ulonglong)uVar7,0x10);
  memset(pFVar9,0,(ulonglong)uVar7);
  __return_storage_ptr__->FirstElementPtr = pFVar9;
  __return_storage_ptr__->BytesBetweenElements = uVar2;
  __return_storage_ptr__->NumElements = param_2;
  if ((int)param_2 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumElements >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                       ,0x3f,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TStridedView<FNiagaraShader::FParameters,int> *)(*pcVar4)();
      return pTVar10;
    }
  }
  if (__return_storage_ptr__->BytesBetweenElements < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("BytesBetweenElements >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                       ,0x40,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TStridedView<FNiagaraShader::FParameters,int> *)(*pcVar4)();
      return pTVar10;
    }
  }
  if ((__return_storage_ptr__->BytesBetweenElements & 0xf) != 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("BytesBetweenElements % alignof(ElementType) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                       ,0x41,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TStridedView<FNiagaraShader::FParameters,int> *)(*pcVar4)();
      return pTVar10;
    }
  }
  if ((param_1->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x177,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TStridedView<FNiagaraShader::FParameters,int> *)(*pcVar4)();
      return pTVar10;
    }
  }
  pFVar3 = (param_1->Layout).Reference;
  local_28[0] = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x20,0x10);
  if (local_28[0] == (undefined8 *)0x0) {
    local_28[0] = (undefined8 *)0x0;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TStridedView<FNiagaraShader::FParameters,int> *)(*pcVar4)();
      return pTVar10;
    }
  }
  else {
    pFVar9 = __return_storage_ptr__->FirstElementPtr;
    uVar5 = *(undefined8 *)&__return_storage_ptr__->BytesBetweenElements;
    *local_28[0] = &
                   ___7__TObject_UFClearUniformBuffers__1____AllocParameters_VFParameters_FNiagaraShader___FRDGBuilder__QEAA_AV__TStridedView_VFParameters_FNiagaraShader__H__PEBVFShaderParametersMetadata__I_Z__FRDGAllocator__6B_
    ;
    local_28[0][1] = pFVar9;
    local_28[0][2] = uVar5;
    local_28[0][3] = pFVar3;
  }
  if (((undefined8 **)this->_padding_ <= local_28) &&
     (local_28 < (undefined8 **)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4))) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TStridedView<FNiagaraShader::FParameters,int> *)(*pcVar4)();
      return pTVar10;
    }
  }
  iVar8 = (int)this->_padding_;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&this->_padding_,piVar1);
  }
  *(int *)&this->_padding_ = iVar8 + 1;
  *(undefined8 **)(this->_padding_ + (longlong)iVar8 * 8) = local_28[0];
  return __return_storage_ptr__;
}

// AllocParameters<FNiagaraShader::FParameters> @ 1492c9bf0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FParameters * __thiscall
FRDGBuilder::AllocParameters<FNiagaraShader::FParameters>
          (FRDGBuilder *this,FShaderParametersMetadata *param_1)

{
  TStridedView<FNiagaraShader::FParameters,int> *this_00;
  FParameters *pFVar1;
  TStridedView<FNiagaraShader::FParameters,int> local_18;
  
  this_00 = AllocParameters<FNiagaraShader::FParameters>(this,&local_18,param_1,1);
  pFVar1 = TStridedView<FNiagaraShader::FParameters,int>::GetElementPtr(this_00,0);
  return pFVar1;
}

// FindExternalBuffer @ 1493a13e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGBuffer * __thiscall FRDGBuilder::FindExternalBuffer(FRDGBuilder *this,FRDGPooledBuffer *param_1)

{
  TKeyValue<FRHIBuffer_*,FRDGBuffer_*> *pTVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint local_res10 [2];
  FRHIBuffer *local_res18;
  
  if (param_1 == (FRDGPooledBuffer *)0x0) {
    return (FRDGBuffer *)0x0;
  }
  local_res18 = (param_1->Buffer).Reference;
  uVar3 = ((uint)((ulonglong)local_res18 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res18 >> 4)) *
          -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  Experimental::RobinHoodHashTable_Private::
  TRobinHoodHashTable<FRHIBuffer_*,FRDGBuffer_*,DefaultKeyFuncs<FRHIBuffer_*,0>,TRDGArrayAllocator<0>_>
  ::FindIdByHash((TRobinHoodHashTable<FRHIBuffer_*,FRDGBuffer_*,DefaultKeyFuncs<FRHIBuffer_*,0>,TRDGArrayAllocator<0>_>
                  *)&this->ExternalBuffers,(FHashType)(uint)local_res10,
                 (FRHIBuffer **)(ulonglong)((uVar3 >> 0x10 ^ uVar3) & 0x7fffffff));
  if (local_res10[0] != 0xffffffff) {
    pTVar1 = Experimental::RobinHoodHashTable_Private::
             TRobinHoodHashTable<FRHIBuffer_*,FRDGBuffer_*,DefaultKeyFuncs<FRHIBuffer_*,0>,TRDGArrayAllocator<0>_>
             ::FData::Get((FData *)&this->ExternalBuffers,local_res10[0]);
    puVar2 = &(pTVar1->Pair).field_0x8;
    if (puVar2 != (undefined1 *)0x0) {
      return *(FRDGBuffer **)puVar2;
    }
  }
  return (FRDGBuffer *)0x0;
}

