// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 3

// AllocateResources @ 14e17b7c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FOptimusBoneTransformBuffer::AllocateResources
          (FOptimusBoneTransformBuffer *this,FRDGBuilder *param_1)

{
  longlong *this_00;
  byte *pbVar1;
  FRDGUserValidation *this_01;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  void *_Src;
  FUploadedBuffer *pFVar4;
  code *pcVar5;
  FRDGBuffer *pFVar6;
  TRDGHandleRegistry<TRDGHandle<FRDGBuffer,unsigned_int>,2> *pTVar7;
  TRDGHandleRegistry<TRDGHandle<FRDGView,unsigned_int>,2> *pTVar8;
  TArray<FRDGBuilder::FUploadedBuffer,TRDGArrayAllocator<0>_> *pTVar9;
  bool bVar10;
  undefined1 uVar11;
  uint uVar12;
  int iVar13;
  FRDGBuffer *pFVar14;
  FRDGBufferSRV *pFVar15;
  void *_Dst;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  uint uVar20;
  ulong64 _Size;
  longlong local_res18;
  FRDGBufferDesc local_c8;
  uint local_b0;
  uint uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  FRDGBufferSRVDesc local_98;
  TRDGHandleRegistry<TRDGHandle<FRDGBuffer,unsigned_int>,2> *local_78;
  int *local_70;
  FRDGTrace *local_68;
  TRDGHandleRegistry<TRDGHandle<FRDGView,unsigned_int>,2> *local_60;
  int *local_58;
  TArray<FRDGBuilder::FUploadedBuffer,TRDGArrayAllocator<0>_> *local_50;
  int *local_48;
  
  if (0 < (this->NumBones).ArrayNum) {
    TArray<FRDGBuffer_*,TSizedDefaultAllocator<32>_>::AddDefaulted
              (&this->BufferRefPerSection,(this->BufferData).ArrayNum);
    TArray<FRDGBufferSRV_*,TSizedDefaultAllocator<32>_>::AddDefaulted
              (&this->BufferSRVPerSection,(this->BufferData).ArrayNum);
    uVar16 = 0;
    if (0 < (this->BufferData).ArrayNum) {
      this_01 = &param_1->UserValidation;
      local_78 = &param_1->Buffers;
      local_70 = &(param_1->Buffers).Array.ArrayMax;
      this_00 = &param_1->_padding_;
      local_68 = &param_1->Trace;
      local_60 = &param_1->Views;
      local_58 = &(param_1->Views).Array.ArrayMax;
      local_res18 = 0;
      local_50 = &param_1->UploadedBuffers;
      local_48 = &(param_1->UploadedBuffers).ArrayMax;
      uVar19 = uVar16;
      do {
        uVar17 = (uint)uVar16;
        uVar20 = ~uVar17 >> 0x1f;
        uVar12 = 0;
        if ((int)uVar17 < (this->BufferData).ArrayNum) {
          uVar12 = uVar20;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar2 = (this->BufferData).AllocatorInstance.Data;
        uVar12 = 0;
        if ((int)uVar17 < (this->NumBones).ArrayNum) {
          uVar12 = uVar20;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar18 = *(int *)(pFVar2 + uVar19 + 8) /
                 *(int *)((this->NumBones).AllocatorInstance.Data + local_res18 * 4);
        uVar12 = 0;
        if ((int)uVar17 < (this->NumBones).ArrayNum) {
          uVar12 = uVar20;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uStack_a8 = 0x10109;
        uStack_ac = *(uint *)((this->NumBones).AllocatorInstance.Data + local_res18 * 4);
        local_c8._12_4_ = uStack_a4;
        local_c8.Usage = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
        local_a0 = 0;
        local_c8.Metadata = (FShaderParametersMetadata *)0x0;
        local_b0 = uVar18;
        local_c8.BytesPerElement = uVar18;
        local_c8.NumElements = uStack_ac;
        FRDGUserValidation::ValidateCreateBuffer(this_01,&local_c8,L"BoneTransformBuffer",None);
        if (local_c8.BytesPerElement == 0) {
          local_c8.BytesPerElement = 1;
        }
        if (local_c8.NumElements == 0) {
          local_c8.NumElements = 1;
        }
        pFVar14 = FMemStackBase::Alloc((FMemStackBase *)this_00,0x130,8);
        pFVar14 = FRDGBuffer::FRDGBuffer(pFVar14,L"BoneTransformBuffer",&local_c8,None);
        pTVar7 = local_78;
        iVar13 = (local_78->Array).ArrayNum;
        if (iVar13 == *local_70) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGBuffer_*>_>
                             (0x808,(ForElementType<FRDGBuffer_*> *)local_78,local_70);
        }
        (pTVar7->Array).ArrayNum = iVar13 + 1;
        (pTVar7->Array).AllocatorInstance.Data[iVar13] = pFVar14;
        (pFVar14->Handle).Index = (pTVar7->Array).ArrayNum - 1;
        FRDGUserValidation::ValidateCreateBuffer(this_01,pFVar14);
        FRDGTrace::AddResource(local_68,(FRDGViewableResource *)pFVar14);
        local_98._padding_._0_4_ = 0xffffffff;
        local_98._padding_._4_4_ = 0;
        local_98._padding_ = 0;
        uVar11 = 0;
        if (((pFVar14->Desc).Usage & DrawIndirect) != None) {
          uVar11 = 0x1c;
        }
        local_98._padding_._0_4_ =
             CONCAT31((int3)((uint)(undefined4)local_98._padding_ >> 8),uVar11);
        local_98.Buffer = pFVar14;
        FRDGUserValidation::ValidateCreateSRV(this_01,&local_98);
        pFVar6 = local_98.Buffer;
        pFVar15 = FMemStackBase::Alloc((FMemStackBase *)this_00,0x50,8);
        pTVar8 = local_60;
        lVar3 = pFVar6->_padding_;
        *(byte *)&pFVar15->_padding_ = (byte)pFVar15->_padding_ & 0xfe;
        *(undefined8 *)((longlong)&pFVar15->_padding_ + 4) = 0xffffffffffffffff;
        pFVar15->_padding_ = lVar3;
        pFVar15->_padding_ = 0;
        *(undefined1 *)&pFVar15->_padding_ = 3;
        pFVar15->_padding_ = (longlong)&___7FRDGBufferSRV__6B_;
        (pFVar15->Desc)._padding_ =
             CONCAT44(local_98._padding_._4_4_,(undefined4)local_98._padding_);
        (pFVar15->Desc)._padding_ =
             CONCAT44(local_98._padding_._4_4_,(undefined4)local_98._padding_);
        (pFVar15->Desc)._padding_ = local_98._padding_;
        (pFVar15->Desc).Buffer = local_98.Buffer;
        iVar13 = (local_60->Array).ArrayNum;
        if (iVar13 == *local_58) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGView_*>_>
                             (0x808,(ForElementType<FRDGView_*> *)local_60,local_58);
        }
        (pTVar8->Array).ArrayNum = iVar13 + 1;
        (pTVar8->Array).AllocatorInstance.Data[iVar13] = (FRDGView *)pFVar15;
        *(int *)((longlong)&pFVar15->_padding_ + 4) = (pTVar8->Array).ArrayNum + -1;
        FRDGUserValidation::ValidateCreateSRV(this_01,pFVar15);
        uVar12 = 0;
        if ((int)uVar17 < (this->BufferRefPerSection).ArrayNum) {
          uVar12 = uVar20;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(FRDGBuffer **)((this->BufferRefPerSection).AllocatorInstance.Data + local_res18 * 8) =
             pFVar14;
        uVar12 = 0;
        if ((int)uVar17 < (this->BufferSRVPerSection).ArrayNum) {
          uVar12 = uVar20;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(FRDGBufferSRV **)((this->BufferSRVPerSection).AllocatorInstance.Data + local_res18 * 8) =
             pFVar15;
        uVar12 = 0;
        if ((int)uVar17 < (this->BufferData).ArrayNum) {
          uVar12 = uVar20;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        _Size = (ulong64)*(int *)((this->BufferData).AllocatorInstance.Data + uVar19 + 8);
        uVar12 = 0;
        if ((int)uVar17 < (this->BufferData).ArrayNum) {
          uVar12 = uVar20;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        _Src = *(void **)((this->BufferData).AllocatorInstance.Data + uVar19);
        FRDGUserValidation::ValidateUploadBuffer(this_01,pFVar14,_Src,_Size);
        _Dst = _Src;
        if (_Size != 0) {
          _Dst = FMemStackBase::Alloc((FMemStackBase *)this_00,_Size,0x10);
          memcpy(_Dst,_Src,_Size);
        }
        pTVar9 = local_50;
        iVar13 = local_50->ArrayNum;
        if (iVar13 == *local_48) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGBuilder::FUploadedBuffer>_>
                             (0x10e0,&local_50->AllocatorInstance,local_48);
        }
        pTVar9->ArrayNum = iVar13 + 1;
        uVar16 = (ulonglong)(uVar17 + 1);
        uVar19 = uVar19 + 0x10;
        pFVar4 = (pTVar9->AllocatorInstance).Data;
        pFVar4[iVar13].DataSize = _Size;
        pFVar4[iVar13].Buffer = pFVar14;
        local_res18 = local_res18 + 1;
        pFVar4[iVar13].bUseDataCallbacks = false;
        pFVar4[iVar13].bUseFreeCallbacks = false;
        pFVar4[iVar13].Data = _Dst;
        *(undefined8 *)&pFVar4[iVar13].DataCallback = 0;
        *(undefined8 *)&pFVar4[iVar13].DataCallback.field_0x28 = 0;
        *(undefined8 *)&pFVar4[iVar13].DataSizeCallback = 0;
        *(undefined8 *)&pFVar4[iVar13].DataSizeCallback.field_0x28 = 0;
        *(undefined8 *)&pFVar4[iVar13].DataFreeCallback = 0;
        *(undefined8 *)&pFVar4[iVar13].DataFreeCallback.field_0x28 = 0;
        *(undefined8 *)&pFVar4[iVar13].DataFillCallback = 0;
        *(undefined8 *)&pFVar4[iVar13].DataFillCallback.field_0x28 = 0;
        pbVar1 = (byte *)((longlong)&pFVar14->_padding_ + 1);
        *pbVar1 = *pbVar1 | 0x80;
      } while ((int)(uVar17 + 1) < (this->BufferData).ArrayNum);
    }
  }
  return;
}

// HasData @ 14e1e9a30

bool __thiscall FOptimusBoneTransformBuffer::HasData(FOptimusBoneTransformBuffer *this)

{
  return 0 < (this->NumBones).ArrayNum;
}

// SetData @ 14e21cda0

void __thiscall
FOptimusBoneTransformBuffer::SetData
          (FOptimusBoneTransformBuffer *this,FSkeletalMeshLODRenderData *param_1,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  TArray<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *this_00;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  bool bVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  FOptimusDataTypeRegistry *pFVar21;
  TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo> *pTVar22;
  FShaderValueTypeHandle this_01;
  TMatrix<double> *pTVar23;
  longlong *plVar24;
  uint uVar25;
  float *pfVar26;
  uint uVar27;
  longlong *plVar28;
  FScriptContainerElement *pFVar29;
  longlong lVar30;
  uint uVar31;
  longlong local_150;
  longlong local_148;
  longlong local_130;
  TReferenceControllerBase<1> *local_118;
  FName local_110;
  int *local_108;
  FScriptContainerElement *local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  TMatrix<double> local_d8;
  
  plVar28 = (longlong *)0x0;
  if (param_2->ArrayNum == 0) {
    return;
  }
  ::FName::FName(&local_110,FOptimusDataTypeRegistry::Matrix34TypeName);
  pFVar21 = FOptimusDataTypeRegistry::Get();
  pTVar22 = TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
                    *)&pFVar21->RegisteredTypes,local_110);
  plVar24 = (longlong *)&pTVar22->field_0x10;
  if (pTVar22 == (TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo> *)0x0) {
    plVar24 = plVar28;
  }
  if (plVar24 == (longlong *)0x0) {
    local_118 = (TReferenceControllerBase<1> *)0x0;
    local_e0 = 0;
    local_e8 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    plVar24 = plVar28;
  }
  else {
    local_118 = (TReferenceControllerBase<1> *)plVar24[1];
    plVar24 = (longlong *)*plVar24;
    if (local_118 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_118->SharedReferenceCount = (atomic<int>)((int)local_118->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_f0 = 0;
    local_f8 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if (plVar24 != (longlong *)0x0) goto LAB_14e21ce85;
  }
  bVar17 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x458,L"");
  if (bVar17) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_14e21ce85:
  iVar3 = (int)plVar24[4];
  this_00 = &this->BufferData;
  TArray<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
  AddDefaulted(this_00,(param_1->RenderSections).ArrayNum);
  pTVar1 = &this->NumBones;
  iVar19 = (param_1->RenderSections).ArrayNum;
  local_108 = &(this->NumBones).ArrayNum;
  iVar18 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (4,4,iVar19,&pTVar1->AllocatorInstance,local_108,&(this->NumBones).ArrayMax);
  memset((pTVar1->AllocatorInstance).Data + (longlong)iVar18 * 4,0,(longlong)iVar19 << 2);
  if (0 < (param_1->RenderSections).ArrayNum) {
    local_130 = 0;
    local_148 = 0;
    local_150 = 0;
    do {
      uVar27 = (uint)plVar28;
      uVar31 = ~uVar27 >> 0x1f;
      uVar25 = 0;
      if ((int)uVar27 < (param_1->RenderSections).ArrayNum) {
        uVar25 = uVar31;
      }
      if ((uVar25 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_100 = (param_1->RenderSections).AllocatorInstance.Data;
      uVar4 = *(undefined4 *)(local_100 + local_150 + 0x40);
      local_100 = local_100 + local_150;
      uVar25 = 0;
      if ((int)uVar27 < (this->NumBones).ArrayNum) {
        uVar25 = uVar31;
      }
      if ((uVar25 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      *(undefined4 *)((pTVar1->AllocatorInstance).Data + local_130 * 4) = uVar4;
      uVar25 = 0;
      if ((int)uVar27 < (this->BufferData).ArrayNum) {
        uVar25 = uVar31;
      }
      if ((uVar25 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar29 = (this_00->AllocatorInstance).Data + local_148;
      uVar25 = 0;
      if ((int)uVar27 < (this->NumBones).ArrayNum) {
        uVar25 = uVar31;
      }
      if ((uVar25 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar18 = iVar3 * *(int *)((pTVar1->AllocatorInstance).Data + local_130 * 4);
      iVar19 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (1,1,iVar18,(ForAnyElementType *)pFVar29,(int *)(pFVar29 + 8),
                          (int *)(pFVar29 + 0xc));
      memset((void *)(*(longlong *)&pFVar29->field_0x0 + (longlong)iVar19),0,(longlong)iVar18);
      uVar25 = 0;
      iVar19 = 0;
      lVar30 = 0;
      while( true ) {
        uVar20 = 0;
        if ((int)uVar27 < *local_108) {
          uVar20 = uVar31;
        }
        if ((uVar20 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar29 = local_100;
        if (*(int *)((pTVar1->AllocatorInstance).Data + local_130 * 4) <= (int)uVar25) break;
        uVar20 = 0;
        if ((int)uVar25 < *(int *)(local_100 + 0x40)) {
          uVar20 = ~uVar25 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar2 = *(ushort *)(lVar30 + *(longlong *)(pFVar29 + 0x38));
        uVar20 = 0;
        if ((int)uVar27 < (this->BufferData).ArrayNum) {
          uVar20 = uVar31;
        }
        if ((uVar20 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pfVar26 = (float *)((longlong)iVar19 +
                           *(longlong *)((this_00->AllocatorInstance).Data + local_148));
        if ((param_2->ArrayNum <= (int)(uint)uVar2) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if ((iVar3 < 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("ArrayNum >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xfe,L""), bVar17)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if ((param_2->ArrayNum <= (int)(uint)uVar2) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar29 = (param_2->AllocatorInstance).Data;
        this_01 = FShaderValueType::Get(Float,3,4);
        iVar18 = FShaderValueType::GetResourceElementSize(this_01.ValueTypePtr);
        if (iVar3 == iVar18) {
          pTVar23 = UE::Math::TTransform<double>::ToMatrixWithScale
                              ((TTransform<double> *)(pFVar29 + (ulonglong)uVar2 * 0x60),&local_d8);
          dVar6 = pTVar23->M[0][0];
          dVar7 = pTVar23->M[0][1];
          dVar8 = pTVar23->M[1][2];
          dVar9 = pTVar23->M[1][0];
          dVar10 = pTVar23->M[1][1];
          dVar11 = pTVar23->M[2][0];
          dVar12 = pTVar23->M[2][1];
          dVar13 = pTVar23->M[2][2];
          dVar14 = pTVar23->M[3][0];
          dVar15 = pTVar23->M[3][1];
          dVar16 = pTVar23->M[3][2];
          pfVar26[8] = (float)pTVar23->M[0][2];
          pfVar26[9] = (float)dVar8;
          pfVar26[10] = (float)dVar13;
          pfVar26[0xb] = (float)dVar16;
          *pfVar26 = (float)dVar6;
          pfVar26[1] = (float)dVar9;
          pfVar26[2] = (float)dVar11;
          pfVar26[3] = (float)dVar14;
          pfVar26[4] = (float)dVar7;
          pfVar26[5] = (float)dVar10;
          pfVar26[6] = (float)dVar12;
          pfVar26[7] = (float)dVar15;
        }
        else {
          bVar17 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<8731243684667850837>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusHelpers.cpp"
                              ,0x55,
                              "OutShaderValue.ShaderValue.Num() == FShaderValueType::Get(EShaderFundamentalType::Float, 3, 4)->GetResourceElementSize()"
                             );
          if (bVar17) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        uVar25 = uVar25 + 1;
        iVar19 = iVar19 + iVar3;
        lVar30 = lVar30 + 2;
      }
      local_130 = local_130 + 1;
      local_150 = local_150 + 0x118;
      local_148 = local_148 + 0x10;
      plVar28 = (longlong *)(ulonglong)(uVar27 + 1);
    } while ((int)(uVar27 + 1) < (param_1->RenderSections).ArrayNum);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_118);
  return;
}

