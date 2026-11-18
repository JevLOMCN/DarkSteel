// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 4

// FOptimusGraphDataProviderProxy @ 14e151b60

FOptimusGraphDataProviderProxy * __thiscall
FOptimusGraphDataProviderProxy::FOptimusGraphDataProviderProxy
          (FOptimusGraphDataProviderProxy *this,UOptimusDeformerInstance *param_1,
          TArray<FOptimusGraphVariableDescription,TSizedDefaultAllocator<32>_> *param_2,int param_3,
          TArray<UOptimusGraphDataProvider::FArrayMetadata,TSizedDefaultAllocator<32>_> *param_4)

{
  TArray<UOptimusGraphDataProvider::FArrayMetadata,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  void *_Src;
  longlong lVar9;
  code *pcVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  TTuple<FOptimusValueIdentifier,FOptimusValueDescription> *pTVar15;
  FOptimusGraphDataProviderProxy *pFVar16;
  ulonglong uVar17;
  uint uVar18;
  FScriptContainerElement *pFVar19;
  FScriptContainerElement *pFVar20;
  undefined1 local_res20 [8];
  
  pTVar1 = &this->ParameterArrayMetadata;
  (this->ParameterData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->ParameterData).ArrayNum;
  (this->ParameterArrayData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar3 = &(this->ParameterArrayData).ArrayNum;
  (this->ParameterArrayBuffers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar4 = &(this->ParameterArrayData).ArrayMax;
  (this->ParameterArrayBuffers).ArrayNum = 0;
  (this->ParameterArrayBuffers).ArrayMax = 0;
  (this->ParameterArrayBufferSRVs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&___7FOptimusGraphDataProviderProxy__6B_;
  piVar5 = &(this->ParameterData).ArrayMax;
  (this->ParameterArrayBufferSRVs).ArrayNum = 0;
  (this->ParameterArrayBufferSRVs).ArrayMax = 0;
  *piVar5 = 0;
  piVar6 = &(this->ParameterArrayMetadata).ArrayMax;
  *piVar2 = 0;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->ParameterArrayMetadata).ArrayNum = 0;
  *piVar6 = 0;
  *piVar3 = 0;
  *piVar4 = 0;
  iVar12 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (1,1,param_3,&(this->ParameterData).AllocatorInstance,piVar2,piVar5);
  memset((this->ParameterData).AllocatorInstance.Data + iVar12,0,(longlong)param_3);
  if (pTVar1 != param_4) {
    iVar12 = param_4->ArrayNum;
    pFVar20 = (param_4->AllocatorInstance).Data;
    (this->ParameterArrayMetadata).ArrayNum = iVar12;
    if ((iVar12 == 0) && (*piVar6 == 0)) {
      *piVar6 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar12,*piVar6,&pTVar1->AllocatorInstance,iVar12,piVar6);
      if (iVar12 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,pFVar20,(longlong)iVar12 << 3);
      }
    }
  }
  iVar12 = (this->ParameterArrayMetadata).ArrayNum;
  iVar13 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x10,8,iVar12,&(this->ParameterArrayData).AllocatorInstance,piVar3,piVar4);
  DefaultConstructItems<FArrayShaderValue,int>
            ((this->ParameterArrayData).AllocatorInstance.Data + (longlong)iVar13 * 0x10,iVar12);
  if (param_1 != (UOptimusDeformerInstance *)0x0) {
    uVar7 = param_2->ArrayNum;
    uVar17 = (ulonglong)(int)uVar7;
    pFVar20 = (param_2->AllocatorInstance).Data;
    pFVar19 = pFVar20 + uVar17 * 0x88;
    while( true ) {
      if (param_2->ArrayNum != (int)uVar17) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<FOptimusGraphVariableDescription_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res20);
      }
      if (pFVar20 == pFVar19) break;
      pTVar15 = TSet<TTuple<FOptimusValueIdentifier,FOptimusValueDescription>,TDefaultMapHashableKeyFuncs<FOptimusValueIdentifier,FOptimusValueDescription,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FOptimusValueIdentifier,FOptimusValueDescription>,TDefaultMapHashableKeyFuncs<FOptimusValueIdentifier,FOptimusValueDescription,0>,FDefaultSetAllocator>
                        *)&param_1->ValueMap,(FOptimusValueIdentifier *)(pFVar20 + 0x18));
      if ((pTVar15 == (TTuple<FOptimusValueIdentifier,FOptimusValueDescription> *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Pair != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                              ,0x27b,L""), bVar11)) {
        pcVar10 = (code *)swi(3);
        pFVar16 = (FOptimusGraphDataProviderProxy *)(*pcVar10)();
        return pFVar16;
      }
      uVar8 = *(uint *)(pFVar20 + 0x24);
      iVar12 = *(int *)&pTVar15->field_0x60;
      iVar13 = (this->ParameterData).ArrayNum;
      uVar18 = *(uint *)(pFVar20 + 0x28);
      if (iVar13 < (int)(iVar12 + uVar8)) {
        bVar11 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<8297519899794735302>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\DataInterfaces\\OptimusDataInterfaceGraph.cpp"
                            ,0xc6,
                            "ParameterData.Num() >= InOffset + InShaderValue.ShaderValue.Num()");
        if (bVar11) {
          pcVar10 = (code *)swi(3);
          pFVar16 = (FOptimusGraphDataProviderProxy *)(*pcVar10)();
          return pFVar16;
        }
      }
      else {
        _Src = *(void **)&pTVar15->field_0x58;
        uVar14 = 0;
        if ((int)uVar8 < iVar13) {
          uVar14 = ~uVar8 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar10 = (code *)swi(3);
          pFVar16 = (FOptimusGraphDataProviderProxy *)(*pcVar10)();
          return pFVar16;
        }
        memcpy((this->ParameterData).AllocatorInstance.Data + (int)uVar8,_Src,(longlong)iVar12);
        if (0 < *(int *)&pTVar15->field_0x70) {
          iVar12 = -uVar18;
          do {
            if (((int)uVar18 < 0) || ((this->ParameterArrayData).ArrayNum <= (int)uVar18)) {
              bVar11 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<8297519899794735309>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\DataInterfaces\\OptimusDataInterfaceGraph.cpp"
                                  ,0xcd,"ParameterArrayData.IsValidIndex(ToplevelArrayIndex)");
              if (bVar11) {
                pcVar10 = (code *)swi(3);
                pFVar16 = (FOptimusGraphDataProviderProxy *)(*pcVar10)();
                return pFVar16;
              }
            }
            else {
              uVar8 = iVar12 + uVar18;
              uVar14 = 0;
              if ((int)uVar8 < *(int *)&pTVar15->field_0x70) {
                uVar14 = ~uVar8 >> 0x1f;
              }
              if ((uVar14 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar10 = (code *)swi(3);
                pFVar16 = (FOptimusGraphDataProviderProxy *)(*pcVar10)();
                return pFVar16;
              }
              lVar9 = *(longlong *)&pTVar15->field_0x68;
              uVar14 = 0;
              if ((int)uVar18 < (this->ParameterArrayData).ArrayNum) {
                uVar14 = ~uVar18 >> 0x1f;
              }
              if ((uVar14 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar10 = (code *)swi(3);
                pFVar16 = (FOptimusGraphDataProviderProxy *)(*pcVar10)();
                return pFVar16;
              }
              TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=
                        ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
                         ((this->ParameterArrayData).AllocatorInstance.Data +
                         (longlong)(int)uVar18 * 0x10),
                         (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
                         ((longlong)(int)uVar8 * 0x10 + lVar9));
            }
            uVar18 = uVar18 + 1;
          } while ((int)(iVar12 + uVar18) < *(int *)&pTVar15->field_0x70);
        }
      }
      pFVar20 = pFVar20 + 0x88;
      uVar17 = (ulonglong)uVar7;
    }
  }
  return this;
}

// AllocateResources @ 14e17bfe0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FOptimusGraphDataProviderProxy::AllocateResources
          (FOptimusGraphDataProviderProxy *this,FRDGBuilder *param_1,FAllocationData *param_2)

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
  FScriptContainerElement *pFVar19;
  int *piVar20;
  longlong local_res20;
  FRDGBuffer *local_e8;
  FRDGBufferSRV *local_e0;
  FRDGUserValidation *local_d8;
  FMemStackBase *local_d0;
  longlong local_c8;
  FRDGBufferDesc local_c0;
  FRDGBufferSRVDesc local_a8;
  uint local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  TRDGHandleRegistry<TRDGHandle<FRDGBuffer,unsigned_int>,2> *local_70;
  int *local_68;
  FRDGTrace *local_60;
  TRDGHandleRegistry<TRDGHandle<FRDGView,unsigned_int>,2> *local_58;
  int *local_50;
  TArray<FRDGBuilder::FUploadedBuffer,TRDGArrayAllocator<0>_> *local_48;
  int *local_40;
  
  pTVar1 = &this->ParameterArrayBuffers;
  uVar18 = 0;
  (this->ParameterArrayBuffers).ArrayNum = 0;
  if ((this->ParameterArrayBuffers).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar1->AllocatorInstance,0,&(this->ParameterArrayBuffers).ArrayMax);
  }
  pTVar2 = &this->ParameterArrayBufferSRVs;
  (this->ParameterArrayBufferSRVs).ArrayNum = 0;
  if ((this->ParameterArrayBufferSRVs).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar2->AllocatorInstance,0,&(this->ParameterArrayBufferSRVs).ArrayMax);
  }
  if (0 < (this->ParameterArrayMetadata).ArrayNum) {
    local_d8 = &param_1->UserValidation;
    local_c8 = 0;
    local_68 = &(param_1->Buffers).Array.ArrayMax;
    local_70 = &param_1->Buffers;
    local_50 = &(param_1->Views).Array.ArrayMax;
    local_60 = &param_1->Trace;
    local_58 = &param_1->Views;
    local_res20 = 0;
    local_d0 = (FMemStackBase *)&param_1->_padding_;
    local_48 = &param_1->UploadedBuffers;
    local_40 = &(param_1->UploadedBuffers).ArrayMax;
    do {
      piVar20 = &(this->ParameterArrayBuffers).ArrayMax;
      uVar13 = 0;
      if ((int)uVar18 < (this->ParameterArrayMetadata).ArrayNum) {
        uVar13 = ~uVar18 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar4 = (this->ParameterArrayMetadata).AllocatorInstance.Data;
      uVar13 = 0;
      if ((int)uVar18 < (this->ParameterArrayData).ArrayNum) {
        uVar13 = ~uVar18 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar19 = (this->ParameterArrayData).AllocatorInstance.Data + local_c8;
      uStack_80 = 0x10109;
      local_78 = 0;
      local_88 = *(uint *)(pFVar4 + local_res20 * 8 + 4);
      local_c0.Metadata = (FShaderParametersMetadata *)0x0;
      uStack_84 = 1;
      if (1 < *(int *)(pFVar19 + 8) / (int)local_88) {
        uStack_84 = *(int *)(pFVar19 + 8) / (int)local_88;
      }
      uStack_7c = local_c0._12_4_;
      local_c0.Usage = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
      local_c0.BytesPerElement = local_88;
      local_c0.NumElements = uStack_84;
      FRDGUserValidation::ValidateCreateBuffer
                (local_d8,&local_c0,L"Optimus.GraphDataInterfaceInnerBuffer",None);
      if (local_c0.BytesPerElement == 0) {
        local_c0.BytesPerElement = 1;
      }
      if (local_c0.NumElements == 0) {
        local_c0.NumElements = 1;
      }
      pFVar15 = FMemStackBase::Alloc(local_d0,0x130,8);
      pFVar15 = FRDGBuffer::FRDGBuffer
                          (pFVar15,L"Optimus.GraphDataInterfaceInnerBuffer",&local_c0,None);
      pTVar8 = local_70;
      iVar14 = (local_70->Array).ArrayNum;
      if (iVar14 == *local_68) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGBuffer_*>_>
                           (0x808,(ForElementType<FRDGBuffer_*> *)local_70,local_68);
      }
      this_00 = local_d8;
      (pTVar8->Array).ArrayNum = iVar14 + 1;
      (pTVar8->Array).AllocatorInstance.Data[iVar14] = pFVar15;
      (pFVar15->Handle).Index = (pTVar8->Array).ArrayNum - 1;
      FRDGUserValidation::ValidateCreateBuffer(local_d8,pFVar15);
      FRDGTrace::AddResource(local_60,(FRDGViewableResource *)pFVar15);
      pFVar4 = (pTVar1->AllocatorInstance).Data;
      local_e8 = pFVar15;
      if (((pFVar4 <= (FScriptContainerElement *)&local_e8) &&
          ((FScriptContainerElement *)&local_e8 < pFVar4 + (longlong)*piVar20 * 8)) &&
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
      iVar14 = (this->ParameterArrayBuffers).ArrayNum;
      if (iVar14 == *piVar20) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&pTVar1->AllocatorInstance,piVar20);
      }
      (this->ParameterArrayBuffers).ArrayNum = iVar14 + 1;
      *(FRDGBuffer **)((pTVar1->AllocatorInstance).Data + (longlong)iVar14 * 8) = local_e8;
      iVar14 = (this->ParameterArrayBuffers).ArrayNum;
      uVar17 = iVar14 - 1;
      uVar13 = 0;
      if ((int)uVar17 < iVar14) {
        uVar13 = ~uVar17 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_a8.Buffer =
           *(FRDGBuffer **)
            ((pTVar1->AllocatorInstance).Data +
            (longlong)(this->ParameterArrayBuffers).ArrayNum * 8 + -8);
      local_a8._padding_._4_4_ = 0;
      local_a8._padding_._0_4_ = 0xffffffff;
      local_a8._padding_ = 0;
      uVar12 = 0;
      if ((((local_a8.Buffer)->Desc).Usage & DrawIndirect) != None) {
        uVar12 = 0x1c;
      }
      local_a8._padding_._0_4_ = CONCAT31((int3)((uint)(undefined4)local_a8._padding_ >> 8),uVar12);
      FRDGUserValidation::ValidateCreateSRV(this_00,&local_a8);
      pFVar15 = local_a8.Buffer;
      pFVar16 = FMemStackBase::Alloc(local_d0,0x50,8);
      pTVar9 = local_58;
      lVar5 = pFVar15->_padding_;
      *(byte *)&pFVar16->_padding_ = (byte)pFVar16->_padding_ & 0xfe;
      *(undefined8 *)((longlong)&pFVar16->_padding_ + 4) = 0xffffffffffffffff;
      pFVar16->_padding_ = lVar5;
      pFVar16->_padding_ = (longlong)&___7FRDGBufferSRV__6B_;
      pFVar16->_padding_ = 0;
      *(undefined1 *)&pFVar16->_padding_ = 3;
      (pFVar16->Desc)._padding_ = CONCAT44(local_a8._padding_._4_4_,(undefined4)local_a8._padding_);
      (pFVar16->Desc)._padding_ = CONCAT44(local_a8._padding_._4_4_,(undefined4)local_a8._padding_);
      (pFVar16->Desc)._padding_ = local_a8._padding_;
      (pFVar16->Desc).Buffer = local_a8.Buffer;
      iVar14 = (local_58->Array).ArrayNum;
      if (iVar14 == *local_50) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGView_*>_>
                           (0x808,(ForElementType<FRDGView_*> *)local_58,local_50);
      }
      (pTVar9->Array).ArrayNum = iVar14 + 1;
      (pTVar9->Array).AllocatorInstance.Data[iVar14] = (FRDGView *)pFVar16;
      *(int *)((longlong)&pFVar16->_padding_ + 4) = (pTVar9->Array).ArrayNum + -1;
      FRDGUserValidation::ValidateCreateSRV(local_d8,pFVar16);
      pFVar4 = (pTVar2->AllocatorInstance).Data;
      local_e0 = pFVar16;
      if (((pFVar4 <= (FScriptContainerElement *)&local_e0) &&
          ((FScriptContainerElement *)&local_e0 <
           pFVar4 + (longlong)(this->ParameterArrayBufferSRVs).ArrayMax * 8)) &&
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
      iVar14 = (this->ParameterArrayBufferSRVs).ArrayNum;
      if (iVar14 == (this->ParameterArrayBufferSRVs).ArrayMax) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&pTVar2->AllocatorInstance,
                            &(this->ParameterArrayBufferSRVs).ArrayMax);
      }
      (this->ParameterArrayBufferSRVs).ArrayNum = iVar14 + 1;
      *(FRDGBufferSRV **)((pTVar2->AllocatorInstance).Data + (longlong)iVar14 * 8) = local_e0;
      iVar14 = (this->ParameterArrayBuffers).ArrayNum;
      _Size = (ulong64)*(int *)(pFVar19 + 8);
      _Src = *(void **)pFVar19;
      uVar17 = iVar14 - 1;
      uVar13 = 0;
      if ((int)uVar17 < iVar14) {
        uVar13 = ~uVar17 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar15 = *(FRDGBuffer **)
                 ((pTVar1->AllocatorInstance).Data +
                 (longlong)(this->ParameterArrayBuffers).ArrayNum * 8 + -8);
      FRDGUserValidation::ValidateUploadBuffer(local_d8,pFVar15,_Src,_Size);
      _Dst = _Src;
      if (_Size != 0) {
        _Dst = FMemStackBase::Alloc(local_d0,_Size,0x10);
        memcpy(_Dst,_Src,_Size);
      }
      pTVar10 = local_48;
      iVar14 = local_48->ArrayNum;
      if (iVar14 == *local_40) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGBuilder::FUploadedBuffer>_>
                           (0x10e0,&local_48->AllocatorInstance,local_40);
      }
      local_c8 = local_c8 + 0x10;
      local_res20 = local_res20 + 1;
      pTVar10->ArrayNum = iVar14 + 1;
      uVar18 = uVar18 + 1;
      pFVar6 = (pTVar10->AllocatorInstance).Data;
      pFVar6[iVar14].DataSize = _Size;
      pFVar6[iVar14].Buffer = pFVar15;
      pFVar6[iVar14].Data = _Dst;
      pFVar6[iVar14].bUseDataCallbacks = false;
      pFVar6[iVar14].bUseFreeCallbacks = false;
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
    } while ((int)uVar18 < (this->ParameterArrayMetadata).ArrayNum);
  }
  return;
}

// GatherDispatchData @ 14e1b3f70

void __thiscall
FOptimusGraphDataProviderProxy::GatherDispatchData
          (FOptimusGraphDataProviderProxy *this,FDispatchData *param_1)

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
             (this->ParameterData).AllocatorInstance.Data,(longlong)(this->ParameterData).ArrayNum);
      uVar10 = 0;
      lVar11 = 0;
      if (0 < (this->ParameterArrayMetadata).ArrayNum) {
        do {
          uVar9 = 0;
          if ((int)uVar10 < (this->ParameterArrayMetadata).ArrayNum) {
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
          pFVar6 = (this->ParameterArrayMetadata).AllocatorInstance.Data;
          lVar1 = lVar11 * 8;
          uVar9 = 0;
          if ((int)uVar10 < (this->ParameterArrayBufferSRVs).ArrayNum) {
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
               *(undefined8 *)((this->ParameterArrayBufferSRVs).AllocatorInstance.Data + lVar2);
        } while ((int)uVar10 < (this->ParameterArrayMetadata).ArrayNum);
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < param_1->NumInvocations);
  }
  return;
}

// IsValid @ 14e1f06d0

bool __thiscall
FOptimusGraphDataProviderProxy::IsValid
          (FOptimusGraphDataProviderProxy *this,FValidationData *param_1)

{
  int iVar1;
  
  iVar1 = (this->ParameterData).ArrayNum;
  if (iVar1 != 0) {
    return param_1->ParameterStructSize == iVar1;
  }
  return false;
}

