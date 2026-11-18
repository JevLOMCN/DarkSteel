// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ComputeFramework
// Functions: 4

// FBufferDataProviderProxy @ 1494c4180

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FBufferDataProviderProxy * __thiscall
FBufferDataProviderProxy::FBufferDataProviderProxy
          (FBufferDataProviderProxy *this,int param_1,int param_2,bool param_3)

{
  this->ElementCount = param_1;
  this->_padding_ = (longlong)&___7FBufferDataProviderProxy__6B_;
  this->ElementStride = param_2;
  this->bClearBeforeUse = param_3;
  return this;
}

// AllocateResources @ 1494c97f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FBufferDataProviderProxy::AllocateResources
          (FBufferDataProviderProxy *this,FRDGBuilder *param_1,FAllocationData *param_2)

{
  int *piVar1;
  FRDGUserValidation *this_00;
  TRDGHandleRegistry<TRDGHandle<FRDGView,unsigned_int>,2> *pTVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  FRDGBuffer *pFVar9;
  FRDGBufferSRV *pFVar10;
  FRDGBufferUAV *pFVar11;
  FRDGBufferUAVDesc local_78;
  FRDGBufferDesc local_68;
  FRDGBufferSRVDesc local_50;
  
  uVar7 = this->ElementStride & 0x80000003;
  if ((int)uVar7 < 0) {
    uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
  }
  if (uVar7 != 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ElementStride % 4 == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ComputeFramework\\Source\\ComputeFramework\\Private\\ComputeDataInterfaceBuffer.cpp"
                       ,0x8f,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uVar7 = this->ElementCount * this->ElementStride;
  if ((uVar7 & 3) != 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumBytes % 4 == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphResources.h"
                       ,0x3af,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  this_00 = &param_1->UserValidation;
  local_50._padding_._4_4_ = uVar7 >> 2;
  local_50._padding_._0_4_ = 4;
  local_50._padding_._0_4_ = 0x10119;
  local_68.BytesPerElement = 4;
  local_68._12_4_ = local_50._padding_._4_4_;
  local_68.Usage = StructuredBuffer|ShaderResource|ByteAddressBuffer|UnorderedAccess|Static;
  local_50._padding_ = 0;
  local_68.Metadata = (FShaderParametersMetadata *)0x0;
  local_68.NumElements = local_50._padding_._4_4_;
  FRDGUserValidation::ValidateCreateBuffer(this_00,&local_68,L"ComputeFrameworkBuffer",None);
  if (local_68.BytesPerElement == 0) {
    local_68.BytesPerElement = 1;
  }
  if (local_68.NumElements == 0) {
    local_68.NumElements = 1;
  }
  pFVar9 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x130,8);
  pFVar9 = FRDGBuffer::FRDGBuffer(pFVar9,L"ComputeFrameworkBuffer",&local_68,None);
  piVar1 = &(param_1->Buffers).Array.ArrayMax;
  iVar8 = (param_1->Buffers).Array.ArrayNum;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGBuffer_*>_>
                      (0x808,(ForElementType<FRDGBuffer_*> *)&param_1->Buffers,piVar1);
  }
  (param_1->Buffers).Array.ArrayNum = iVar8 + 1;
  (param_1->Buffers).Array.AllocatorInstance.Data[iVar8] = pFVar9;
  (pFVar9->Handle).Index = (param_1->Buffers).Array.ArrayNum - 1;
  FRDGUserValidation::ValidateCreateBuffer(this_00,pFVar9);
  FRDGTrace::AddResource(&param_1->Trace,(FRDGViewableResource *)pFVar9);
  this->Buffer = pFVar9;
  local_50._padding_._4_4_ = 0;
  local_50._padding_._0_4_ = 0xffffffff;
  local_50._padding_ = 0;
  uVar6 = 0;
  if (((pFVar9->Desc).Usage & DrawIndirect) != None) {
    uVar6 = 0x1c;
  }
  local_50._padding_._0_4_ = CONCAT31((int3)((uint)(undefined4)local_50._padding_ >> 8),uVar6);
  local_50.Buffer = pFVar9;
  FRDGUserValidation::ValidateCreateSRV(this_00,&local_50);
  pFVar9 = local_50.Buffer;
  pTVar2 = &param_1->Views;
  pFVar10 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x50,8);
  lVar3 = pFVar9->_padding_;
  *(byte *)&pFVar10->_padding_ = (byte)pFVar10->_padding_ & 0xfe;
  *(undefined8 *)((longlong)&pFVar10->_padding_ + 4) = 0xffffffffffffffff;
  pFVar10->_padding_ = lVar3;
  pFVar10->_padding_ = 0;
  *(undefined1 *)&pFVar10->_padding_ = 3;
  pFVar10->_padding_ = (longlong)&___7FRDGBufferSRV__6B_;
  (pFVar10->Desc)._padding_ = CONCAT44(local_50._padding_._4_4_,(undefined4)local_50._padding_);
  (pFVar10->Desc)._padding_ = CONCAT44(local_50._padding_._4_4_,(undefined4)local_50._padding_);
  (pFVar10->Desc)._padding_ = local_50._padding_;
  (pFVar10->Desc).Buffer = local_50.Buffer;
  iVar8 = (param_1->Views).Array.ArrayNum;
  if (iVar8 == (param_1->Views).Array.ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGView_*>_>
                      (0x808,(ForElementType<FRDGView_*> *)pTVar2,&(param_1->Views).Array.ArrayMax);
  }
  (param_1->Views).Array.ArrayNum = iVar8 + 1;
  (pTVar2->Array).AllocatorInstance.Data[iVar8] = (FRDGView *)pFVar10;
  *(int *)((longlong)&pFVar10->_padding_ + 4) = (param_1->Views).Array.ArrayNum + -1;
  FRDGUserValidation::ValidateCreateSRV(this_00,pFVar10);
  local_78.Buffer = this->Buffer;
  local_78._padding_._2_1_ = 0;
  local_78._padding_._1_1_ = 0;
  this->BufferSRV = pFVar10;
  local_78._padding_._0_1_ = 0;
  if ((((local_78.Buffer)->Desc).Usage & DrawIndirect) != None) {
    local_78._padding_._0_1_ = 0x1c;
  }
  FRDGUserValidation::ValidateCreateUAV(this_00,&local_78);
  pFVar9 = local_78.Buffer;
  pFVar11 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x48,8);
  lVar3 = pFVar9->_padding_;
  *(byte *)&pFVar11->_padding_ = (byte)pFVar11->_padding_ & 0xfe;
  *(undefined8 *)((longlong)&pFVar11->_padding_ + 4) = 0xffffffffffffffff;
  pFVar11->_padding_ = lVar3;
  pFVar11->_padding_ = 0;
  *(undefined1 *)&pFVar11->_padding_ = 2;
  *(undefined1 *)&pFVar11->_padding_ = 1;
  pFVar11->_padding_ = (longlong)&___7FRDGBufferUAV__6B_;
  (pFVar11->Desc)._padding_ =
       CONCAT53(local_78._padding_._3_5_,
                CONCAT12(local_78._padding_._2_1_,
                         CONCAT11(local_78._padding_._1_1_,(undefined1)local_78._padding_)));
  (pFVar11->Desc).Buffer = local_78.Buffer;
  iVar8 = (param_1->Views).Array.ArrayNum;
  if (iVar8 == (param_1->Views).Array.ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGView_*>_>
                      (0x808,(ForElementType<FRDGView_*> *)pTVar2,&(param_1->Views).Array.ArrayMax);
  }
  (param_1->Views).Array.ArrayNum = iVar8 + 1;
  (pTVar2->Array).AllocatorInstance.Data[iVar8] = (FRDGView *)pFVar11;
  *(int *)((longlong)&pFVar11->_padding_ + 4) = (param_1->Views).Array.ArrayNum + -1;
  FRDGUserValidation::ValidateCreateUAV(this_00,pFVar11);
  this->BufferUAV = pFVar11;
  if (this->bClearBeforeUse != false) {
    AddClearUAVPass(param_1,pFVar11,0,Compute);
  }
  return;
}

// GatherDispatchData @ 1494ce090

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FBufferDataProviderProxy::GatherDispatchData(FBufferDataProviderProxy *this,FDispatchData *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uchar *puVar7;
  
  iVar1 = param_1->ParameterBufferOffset;
  puVar7 = param_1->ParameterBuffer;
  iVar2 = param_1->NumInvocations;
  iVar3 = param_1->ParameterBufferStride;
  if ((iVar2 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumElements >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x3f,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((iVar3 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("BytesBetweenElements >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x40,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((((longlong)iVar3 & 0xfU) != 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("BytesBetweenElements % alignof(ElementType) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x41,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar6 = 0;
  if (0 < iVar2) {
    puVar7 = puVar7 + (longlong)iVar1 + 0x10;
    do {
      if ((iVar6 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < NumElements)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                             ,0x96,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar6 = iVar6 + 1;
      *(int *)(puVar7 + -0x10) = this->ElementCount;
      *(FRDGBufferSRV **)(puVar7 + -8) = this->BufferSRV;
      *(FRDGBufferUAV **)puVar7 = this->BufferUAV;
      puVar7 = puVar7 + iVar3;
    } while (iVar6 < iVar2);
  }
  return;
}

// IsValid @ 1494d47b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __thiscall
FBufferDataProviderProxy::IsValid(FBufferDataProviderProxy *this,FValidationData *param_1)

{
  if (param_1->ParameterStructSize == 0x20) {
    return 0 < this->ElementCount;
  }
  return false;
}

