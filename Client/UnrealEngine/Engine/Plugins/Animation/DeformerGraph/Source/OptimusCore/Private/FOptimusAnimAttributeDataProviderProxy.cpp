// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 4

// FOptimusAnimAttributeDataProviderProxy @ 14e14fdb0

FOptimusAnimAttributeDataProviderProxy * __thiscall
FOptimusAnimAttributeDataProviderProxy::FOptimusAnimAttributeDataProviderProxy
          (FOptimusAnimAttributeDataProviderProxy *this,int param_1,int param_2)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FArrayShaderValue,TSizedDefaultAllocator<32>_> *pTVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  
  pTVar1 = &this->AttributeBuffer;
  pTVar2 = &this->AttributeArrayData;
  (this->AttributeBuffer).ArrayNum = 0;
  (this->ArrayBuffers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ArrayBuffers).ArrayNum = 0;
  (this->ArrayBuffers).ArrayMax = 0;
  this->_padding_ = (longlong)&___7FOptimusAnimAttributeDataProviderProxy__6B_;
  piVar3 = &(this->AttributeArrayMetadata).ArrayNum;
  piVar4 = &(this->AttributeBuffer).ArrayMax;
  (this->ArrayBufferSRVs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ArrayBufferSRVs).ArrayNum = 0;
  (this->ArrayBufferSRVs).ArrayMax = 0;
  piVar5 = &(this->AttributeArrayMetadata).ArrayMax;
  *piVar4 = 0;
  piVar6 = &(this->AttributeArrayData).ArrayNum;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar7 = &(this->AttributeArrayData).ArrayMax;
  (this->AttributeArrayMetadata).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar3 = 0;
  *piVar5 = 0;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  *piVar6 = 0;
  *piVar7 = 0;
  iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,param_1,&pTVar1->AllocatorInstance,&(this->AttributeBuffer).ArrayNum,piVar4
                    );
  memset((pTVar1->AllocatorInstance).Data + iVar8,0,(longlong)param_1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,param_2,&(this->AttributeArrayMetadata).AllocatorInstance,piVar3,piVar5);
  iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,param_2,&pTVar2->AllocatorInstance,piVar6,piVar7);
  DefaultConstructItems<FArrayShaderValue,int>
            ((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 0x10,param_2);
  return this;
}

// AllocateResources @ 14e17b0d0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FOptimusAnimAttributeDataProviderProxy::AllocateResources
          (FOptimusAnimAttributeDataProviderProxy *this,FRDGBuilder *param_1,
          FAllocationData *param_2)

{
  TArray<FRDGBuffer_*,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FRDGBufferSRV_*,TSizedDefaultAllocator<32>_> *pTVar2;
  byte *pbVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  void *_Src;
  FUploadedBuffer *pFVar6;
  code *pcVar7;
  FRDGUserValidation *this_00;
  TRDGHandleRegistry<TRDGHandle<FRDGBuffer,unsigned_int>,2> *pTVar8;
  TRDGHandleRegistry<TRDGHandle<FRDGView,unsigned_int>,2> *pTVar9;
  TArray<FRDGBuilder::FUploadedBuffer,TRDGArrayAllocator<0>_> *pTVar10;
  bool bVar11;
  undefined1 uVar12;
  uint uVar13;
  int iVar14;
  FRDGBuffer *pFVar15;
  FRDGBufferSRV *pFVar16;
  void *_Dst;
  uint uVar17;
  ulong64 _Size;
  uint uVar18;
  int *piVar19;
  longlong local_res20;
  FRDGBuffer *local_f8;
  FRDGBufferSRV *local_f0;
  FMemStackBase *local_e8;
  longlong local_e0;
  FRDGUserValidation *local_d8;
  FRDGBufferDesc local_d0;
  FRDGBufferSRVDesc local_b8;
  uint local_98;
  uint uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  TRDGHandleRegistry<TRDGHandle<FRDGBuffer,unsigned_int>,2> *local_80;
  int *local_78;
  FRDGTrace *local_70;
  TRDGHandleRegistry<TRDGHandle<FRDGView,unsigned_int>,2> *local_68;
  int *local_60;
  FScriptContainerElement *local_58;
  TArray<FRDGBuilder::FUploadedBuffer,TRDGArrayAllocator<0>_> *local_50;
  int *local_48;
  
  pTVar1 = &this->ArrayBuffers;
  (this->ArrayBuffers).ArrayNum = 0;
  if ((this->ArrayBuffers).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar1->AllocatorInstance,0,&(this->ArrayBuffers).ArrayMax);
  }
  pTVar2 = &this->ArrayBufferSRVs;
  (this->ArrayBufferSRVs).ArrayNum = 0;
  if ((this->ArrayBufferSRVs).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar2->AllocatorInstance,0,&(this->ArrayBufferSRVs).ArrayMax);
  }
  iVar14 = (this->AttributeArrayMetadata).ArrayNum;
  if ((this->AttributeArrayData).ArrayNum == iVar14) {
    uVar18 = 0;
    if (0 < iVar14) {
      local_80 = &param_1->Buffers;
      local_d8 = &param_1->UserValidation;
      local_70 = &param_1->Trace;
      local_78 = &(param_1->Buffers).Array.ArrayMax;
      local_68 = &param_1->Views;
      local_60 = &(param_1->Views).Array.ArrayMax;
      local_e8 = (FMemStackBase *)&param_1->_padding_;
      local_50 = &param_1->UploadedBuffers;
      local_res20 = 0;
      local_48 = &(param_1->UploadedBuffers).ArrayMax;
      local_e0 = 0;
      do {
        piVar19 = &(this->ArrayBuffers).ArrayMax;
        uVar13 = 0;
        if ((int)uVar18 < (this->AttributeArrayMetadata).ArrayNum) {
          uVar13 = ~uVar18 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar4 = (this->AttributeArrayMetadata).AllocatorInstance.Data;
        uVar13 = 0;
        if ((int)uVar18 < (this->AttributeArrayData).ArrayNum) {
          uVar13 = ~uVar18 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        this_00 = local_d8;
        local_58 = (this->AttributeArrayData).AllocatorInstance.Data + local_e0;
        local_88 = 0;
        local_98 = *(uint *)(pFVar4 + local_res20 * 8 + 4);
        uStack_90 = 0x10109;
        local_d0.Metadata = (FShaderParametersMetadata *)0x0;
        uStack_94 = 1;
        if (1 < *(int *)(local_58 + 8) / (int)local_98) {
          uStack_94 = *(int *)(local_58 + 8) / (int)local_98;
        }
        uStack_8c = local_d0._12_4_;
        local_d0.Usage = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
        local_d0.BytesPerElement = local_98;
        local_d0.NumElements = uStack_94;
        FRDGUserValidation::ValidateCreateBuffer
                  (local_d8,&local_d0,L"Optimus.AnimAttributeInnerBuffer",None);
        if (local_d0.BytesPerElement == 0) {
          local_d0.BytesPerElement = 1;
        }
        if (local_d0.NumElements == 0) {
          local_d0.NumElements = 1;
        }
        pFVar15 = FMemStackBase::Alloc(local_e8,0x130,8);
        pFVar15 = FRDGBuffer::FRDGBuffer(pFVar15,L"Optimus.AnimAttributeInnerBuffer",&local_d0,None)
        ;
        pTVar8 = local_80;
        iVar14 = (local_80->Array).ArrayNum;
        if (iVar14 == *local_78) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGBuffer_*>_>
                             (0x808,(ForElementType<FRDGBuffer_*> *)local_80,local_78);
        }
        (pTVar8->Array).ArrayNum = iVar14 + 1;
        (pTVar8->Array).AllocatorInstance.Data[iVar14] = pFVar15;
        (pFVar15->Handle).Index = (pTVar8->Array).ArrayNum - 1;
        FRDGUserValidation::ValidateCreateBuffer(this_00,pFVar15);
        FRDGTrace::AddResource(local_70,(FRDGViewableResource *)pFVar15);
        pFVar4 = (pTVar1->AllocatorInstance).Data;
        local_f8 = pFVar15;
        if (((pFVar4 <= (FScriptContainerElement *)&local_f8) &&
            ((FScriptContainerElement *)&local_f8 < pFVar4 + (longlong)*piVar19 * 8)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar14 = (this->ArrayBuffers).ArrayNum;
        if (iVar14 == *piVar19) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&pTVar1->AllocatorInstance,piVar19);
        }
        (this->ArrayBuffers).ArrayNum = iVar14 + 1;
        *(FRDGBuffer **)((pTVar1->AllocatorInstance).Data + (longlong)iVar14 * 8) = local_f8;
        iVar14 = (this->ArrayBuffers).ArrayNum;
        uVar17 = iVar14 - 1;
        uVar13 = 0;
        if ((int)uVar17 < iVar14) {
          uVar13 = ~uVar17 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        local_b8.Buffer =
             *(FRDGBuffer **)
              ((pTVar1->AllocatorInstance).Data + (longlong)(this->ArrayBuffers).ArrayNum * 8 + -8);
        local_b8._padding_._4_4_ = 0;
        local_b8._padding_._0_4_ = 0xffffffff;
        local_b8._padding_ = 0;
        uVar12 = 0;
        if ((((local_b8.Buffer)->Desc).Usage & DrawIndirect) != None) {
          uVar12 = 0x1c;
        }
        local_b8._padding_._0_4_ =
             CONCAT31((int3)((uint)(undefined4)local_b8._padding_ >> 8),uVar12);
        FRDGUserValidation::ValidateCreateSRV(this_00,&local_b8);
        pFVar15 = local_b8.Buffer;
        pFVar16 = FMemStackBase::Alloc(local_e8,0x50,8);
        pTVar9 = local_68;
        lVar5 = pFVar15->_padding_;
        *(byte *)&pFVar16->_padding_ = (byte)pFVar16->_padding_ & 0xfe;
        *(undefined8 *)((longlong)&pFVar16->_padding_ + 4) = 0xffffffffffffffff;
        pFVar16->_padding_ = lVar5;
        pFVar16->_padding_ = (longlong)&___7FRDGBufferSRV__6B_;
        pFVar16->_padding_ = 0;
        *(undefined1 *)&pFVar16->_padding_ = 3;
        (pFVar16->Desc)._padding_ =
             CONCAT44(local_b8._padding_._4_4_,(undefined4)local_b8._padding_);
        (pFVar16->Desc)._padding_ =
             CONCAT44(local_b8._padding_._4_4_,(undefined4)local_b8._padding_);
        (pFVar16->Desc)._padding_ = local_b8._padding_;
        (pFVar16->Desc).Buffer = local_b8.Buffer;
        iVar14 = (local_68->Array).ArrayNum;
        if (iVar14 == *local_60) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGView_*>_>
                             (0x808,(ForElementType<FRDGView_*> *)local_68,local_60);
        }
        (pTVar9->Array).ArrayNum = iVar14 + 1;
        (pTVar9->Array).AllocatorInstance.Data[iVar14] = (FRDGView *)pFVar16;
        *(int *)((longlong)&pFVar16->_padding_ + 4) = (pTVar9->Array).ArrayNum + -1;
        FRDGUserValidation::ValidateCreateSRV(this_00,pFVar16);
        pFVar4 = (pTVar2->AllocatorInstance).Data;
        local_f0 = pFVar16;
        if (((pFVar4 <= (FScriptContainerElement *)&local_f0) &&
            ((FScriptContainerElement *)&local_f0 <
             pFVar4 + (longlong)(this->ArrayBufferSRVs).ArrayMax * 8)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar14 = (this->ArrayBufferSRVs).ArrayNum;
        if (iVar14 == (this->ArrayBufferSRVs).ArrayMax) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&pTVar2->AllocatorInstance,&(this->ArrayBufferSRVs).ArrayMax);
        }
        (this->ArrayBufferSRVs).ArrayNum = iVar14 + 1;
        *(FRDGBufferSRV **)((pTVar2->AllocatorInstance).Data + (longlong)iVar14 * 8) = local_f0;
        iVar14 = (this->ArrayBuffers).ArrayNum;
        _Size = (ulong64)*(int *)(local_58 + 8);
        _Src = *(void **)local_58;
        uVar17 = iVar14 - 1;
        uVar13 = 0;
        if ((int)uVar17 < iVar14) {
          uVar13 = ~uVar17 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar15 = *(FRDGBuffer **)
                   ((pTVar1->AllocatorInstance).Data +
                   (longlong)(this->ArrayBuffers).ArrayNum * 8 + -8);
        FRDGUserValidation::ValidateUploadBuffer(local_d8,pFVar15,_Src,_Size);
        _Dst = _Src;
        if (_Size != 0) {
          _Dst = FMemStackBase::Alloc(local_e8,_Size,0x10);
          memcpy(_Dst,_Src,_Size);
        }
        pTVar10 = local_50;
        iVar14 = local_50->ArrayNum;
        if (iVar14 == *local_48) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGBuilder::FUploadedBuffer>_>
                             (0x10e0,&local_50->AllocatorInstance,local_48);
        }
        local_e0 = local_e0 + 0x10;
        pTVar10->ArrayNum = iVar14 + 1;
        local_res20 = local_res20 + 1;
        uVar18 = uVar18 + 1;
        pFVar6 = (pTVar10->AllocatorInstance).Data;
        pFVar6[iVar14].Data = _Dst;
        pFVar6[iVar14].DataSize = _Size;
        pFVar6[iVar14].bUseDataCallbacks = false;
        pFVar6[iVar14].bUseFreeCallbacks = false;
        pFVar6[iVar14].Buffer = pFVar15;
        *(undefined8 *)&pFVar6[iVar14].DataCallback = 0;
        *(undefined8 *)&pFVar6[iVar14].DataCallback.field_0x28 = 0;
        *(undefined8 *)&pFVar6[iVar14].DataSizeCallback = 0;
        *(undefined8 *)&pFVar6[iVar14].DataSizeCallback.field_0x28 = 0;
        *(undefined8 *)&pFVar6[iVar14].DataFreeCallback = 0;
        *(undefined8 *)&pFVar6[iVar14].DataFreeCallback.field_0x28 = 0;
        *(undefined8 *)&pFVar6[iVar14].DataFillCallback = 0;
        *(undefined8 *)&pFVar6[iVar14].DataFillCallback.field_0x28 = 0;
        pbVar3 = (byte *)((longlong)&pFVar15->_padding_ + 1);
        *pbVar3 = *pbVar3 | 0x80;
      } while ((int)uVar18 < (this->AttributeArrayMetadata).ArrayNum);
    }
  }
  else {
    bVar11 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<4068075417976701664>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\DataInterfaces\\OptimusDataInterfaceAnimAttribute.cpp"
                        ,0x2e0,"AttributeArrayData.Num() == AttributeArrayMetadata.Num()");
    if (bVar11) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  return;
}

// GatherDispatchData @ 14e1b31f0

void __thiscall
FOptimusAnimAttributeDataProviderProxy::GatherDispatchData
          (FOptimusAnimAttributeDataProviderProxy *this,FDispatchData *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  uchar *puVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  
  iVar12 = 0;
  if (0 < param_1->NumInvocations) {
    do {
      iVar3 = param_1->ParameterBufferStride;
      iVar4 = param_1->ParameterBufferOffset;
      puVar5 = param_1->ParameterBuffer;
      memcpy(puVar5 + (longlong)(iVar12 * iVar3) + (longlong)iVar4,
             (this->AttributeBuffer).AllocatorInstance.Data,(longlong)param_1->ParameterStructSize);
      uVar10 = 0;
      lVar11 = 0;
      if (0 < (this->AttributeArrayMetadata).ArrayNum) {
        do {
          uVar9 = 0;
          if ((int)uVar10 < (this->AttributeArrayMetadata).ArrayNum) {
            uVar9 = ~uVar10 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar6 = (this->AttributeArrayMetadata).AllocatorInstance.Data;
          lVar1 = lVar11 * 8;
          uVar9 = 0;
          if ((int)uVar10 < (this->ArrayBufferSRVs).ArrayNum) {
            uVar9 = ~uVar10 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar10 = uVar10 + 1;
          lVar2 = lVar11 * 8;
          lVar11 = lVar11 + 1;
          *(undefined8 *)
           (puVar5 + (longlong)(iVar12 * iVar3) + (longlong)iVar4 + *(int *)(pFVar6 + lVar1)) =
               *(undefined8 *)((this->ArrayBufferSRVs).AllocatorInstance.Data + lVar2);
        } while ((int)uVar10 < (this->AttributeArrayMetadata).ArrayNum);
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < param_1->NumInvocations);
  }
  return;
}

// IsValid @ 14e1f04c0

bool __thiscall
FOptimusAnimAttributeDataProviderProxy::IsValid
          (FOptimusAnimAttributeDataProviderProxy *this,FValidationData *param_1)

{
  if (param_1->ParameterStructSize == (this->AttributeBuffer).ArrayNum) {
    return (this->AttributeArrayData).ArrayNum == (this->AttributeArrayMetadata).ArrayNum;
  }
  return false;
}

