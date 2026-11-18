// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenColorIO
// Functions: 3

// AllocParameters<FOpenColorIOPixelShader::FParameters> @ 14d7661f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TStridedView<FOpenColorIOPixelShader::FParameters,int> * __thiscall
FRDGBuilder::AllocParameters<FOpenColorIOPixelShader::FParameters>
          (FRDGBuilder *this,
          TStridedView<FOpenColorIOPixelShader::FParameters,int> *__return_storage_ptr__,
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
  TStridedView<FOpenColorIOPixelShader::FParameters,int> *pTVar10;
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
      pTVar10 = (TStridedView<FOpenColorIOPixelShader::FParameters,int> *)(*pcVar4)();
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
      pTVar10 = (TStridedView<FOpenColorIOPixelShader::FParameters,int> *)(*pcVar4)();
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
      pTVar10 = (TStridedView<FOpenColorIOPixelShader::FParameters,int> *)(*pcVar4)();
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
      pTVar10 = (TStridedView<FOpenColorIOPixelShader::FParameters,int> *)(*pcVar4)();
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
      pTVar10 = (TStridedView<FOpenColorIOPixelShader::FParameters,int> *)(*pcVar4)();
      return pTVar10;
    }
  }
  else {
    pFVar9 = __return_storage_ptr__->FirstElementPtr;
    uVar5 = *(undefined8 *)&__return_storage_ptr__->BytesBetweenElements;
    *local_28[0] = &
                   ___7__TObject_UFClearUniformBuffers__1____AllocParameters_UFParameters_FOpenColorIOPixelShader___FRDGBuilder__QEAA_AV__TStridedView_UFParameters_FOpenColorIOPixelShader__H__PEBVFShaderParametersMetadata__I_Z__FRDGAllocator__6B_
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
      pTVar10 = (TStridedView<FOpenColorIOPixelShader::FParameters,int> *)(*pcVar4)();
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

// AllocParameters<FOpenColorIOPixelShader::FParameters> @ 14d766430

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FParameters * __thiscall
FRDGBuilder::AllocParameters<FOpenColorIOPixelShader::FParameters>
          (FRDGBuilder *this,FShaderParametersMetadata *param_1)

{
  TStridedView<FOpenColorIOPixelShader::FParameters,int> *this_00;
  FParameters *pFVar1;
  TStridedView<FOpenColorIOPixelShader::FParameters,int> local_18;
  
  this_00 = AllocParameters<FOpenColorIOPixelShader::FParameters>(this,&local_18,param_1,1);
  pFVar1 = TStridedView<FOpenColorIOPixelShader::FParameters,int>::GetElementPtr(this_00,0);
  return pFVar1;
}

// AllocParameters<FOpenColorIOInvalidShaderParameters> @ 14d766460

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FOpenColorIOInvalidShaderParameters * __thiscall
FRDGBuilder::AllocParameters<FOpenColorIOInvalidShaderParameters>(FRDGBuilder *this)

{
  FOpenColorIOInvalidShaderParameters *pFVar1;
  
  pFVar1 = FRDGAllocator::Alloc<FOpenColorIOInvalidShaderParameters>
                     ((FRDGAllocator *)&this->_padding_);
  return pFVar1;
}

