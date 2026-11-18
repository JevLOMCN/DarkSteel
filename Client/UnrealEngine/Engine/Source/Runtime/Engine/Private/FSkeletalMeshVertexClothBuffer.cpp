// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 16

// FSkeletalMeshVertexClothBuffer @ 148442740

FSkeletalMeshVertexClothBuffer * __thiscall
FSkeletalMeshVertexClothBuffer::FSkeletalMeshVertexClothBuffer
          (FSkeletalMeshVertexClothBuffer *this,FSkeletalMeshVertexClothBuffer *param_1)

{
  FVertexBuffer::FVertexBuffer((FVertexBuffer *)this);
  this->_padding_ = (longlong)&___7FSkeletalMeshVertexClothBuffer__6B_;
  (this->VertexBufferSRV).Reference = (FRHIShaderResourceView *)0x0;
  (this->ClothIndexMapping).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ClothIndexMapping).ArrayNum = 0;
  (this->ClothIndexMapping).ArrayMax = 0;
  this->VertexData = (FSkeletalMeshVertexDataInterface *)0x0;
  this->Data = (uchar *)0x0;
  this->Stride = 0;
  this->NumVertices = 0;
  return this;
}

// FSkeletalMeshVertexClothBuffer @ 148442790

FSkeletalMeshVertexClothBuffer * __thiscall
FSkeletalMeshVertexClothBuffer::FSkeletalMeshVertexClothBuffer(FSkeletalMeshVertexClothBuffer *this)

{
  FVertexBuffer::FVertexBuffer((FVertexBuffer *)this);
  this->_padding_ = (longlong)&___7FSkeletalMeshVertexClothBuffer__6B_;
  (this->VertexBufferSRV).Reference = (FRHIShaderResourceView *)0x0;
  (this->ClothIndexMapping).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ClothIndexMapping).ArrayNum = 0;
  (this->ClothIndexMapping).ArrayMax = 0;
  this->VertexData = (FSkeletalMeshVertexDataInterface *)0x0;
  this->Data = (uchar *)0x0;
  this->Stride = 0;
  this->NumVertices = 0;
  return this;
}

// ~FSkeletalMeshVertexClothBuffer @ 1484462c0

void __thiscall
FSkeletalMeshVertexClothBuffer::~FSkeletalMeshVertexClothBuffer
          (FSkeletalMeshVertexClothBuffer *this)

{
  FSkeletalMeshVertexDataInterface *pFVar1;
  FScriptContainerElement *pFVar2;
  FRHIShaderResourceView *this_00;
  
  this->_padding_ = (longlong)&___7FSkeletalMeshVertexClothBuffer__6B_;
  pFVar1 = this->VertexData;
  if (pFVar1 != (FSkeletalMeshVertexDataInterface *)0x0) {
    (**(code **)*pFVar1)(pFVar1,1);
  }
  this->VertexData = (FSkeletalMeshVertexDataInterface *)0x0;
  pFVar2 = (this->ClothIndexMapping).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this_00 = (this->VertexBufferSRV).Reference;
  if (this_00 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)this);
  return;
}

// operator= @ 148447610

FSkeletalMeshVertexClothBuffer * __thiscall
FSkeletalMeshVertexClothBuffer::operator=
          (FSkeletalMeshVertexClothBuffer *this,FSkeletalMeshVertexClothBuffer *param_1)

{
  FSkeletalMeshVertexDataInterface *pFVar1;
  
  pFVar1 = this->VertexData;
  if (pFVar1 != (FSkeletalMeshVertexDataInterface *)0x0) {
    (**(code **)*pFVar1)(pFVar1,1);
  }
  this->VertexData = (FSkeletalMeshVertexDataInterface *)0x0;
  return this;
}

// AllocateData @ 1484522a0

void __thiscall FSkeletalMeshVertexClothBuffer::AllocateData(FSkeletalMeshVertexClothBuffer *this)

{
  FSkeletalMeshVertexDataInterface *pFVar1;
  
  pFVar1 = this->VertexData;
  if (pFVar1 != (FSkeletalMeshVertexDataInterface *)0x0) {
    (**(code **)*pFVar1)(pFVar1,1);
  }
  this->VertexData = (FSkeletalMeshVertexDataInterface *)0x0;
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FSkeletalMeshVertexDataInterface *)0x0) {
    pFVar1[2] = (FSkeletalMeshVertexDataInterface)0x0;
    *pFVar1 = (FSkeletalMeshVertexDataInterface)
              &TSkeletalMeshVertexData<FMeshToMeshVertData>::
               _vftable__for__FSkeletalMeshVertexDataInterface__;
    pFVar1[1] = (FSkeletalMeshVertexDataInterface)
                &TSkeletalMeshVertexData<FMeshToMeshVertData>::
                 _vftable__for__TResourceArray<FMeshToMeshVertData,0>__;
    pFVar1[3] = (FSkeletalMeshVertexDataInterface)0x0;
    *(undefined1 *)(pFVar1 + 4) = 1;
    this->VertexData = pFVar1;
    return;
  }
  this->VertexData = (FSkeletalMeshVertexDataInterface *)0x0;
  return;
}

// CleanUp @ 14845c300

void __thiscall FSkeletalMeshVertexClothBuffer::CleanUp(FSkeletalMeshVertexClothBuffer *this)

{
  FSkeletalMeshVertexDataInterface *pFVar1;
  
  pFVar1 = this->VertexData;
  if (pFVar1 != (FSkeletalMeshVertexDataInterface *)0x0) {
    (**(code **)*pFVar1)(pFVar1,1);
  }
  this->VertexData = (FSkeletalMeshVertexDataInterface *)0x0;
  return;
}

// ClearMetaData @ 14845c4f0

void __thiscall FSkeletalMeshVertexClothBuffer::ClearMetaData(FSkeletalMeshVertexClothBuffer *this)

{
  int *piVar1;
  
  piVar1 = &(this->ClothIndexMapping).ArrayMax;
  (this->ClothIndexMapping).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(this->ClothIndexMapping).AllocatorInstance,0,piVar1);
    this->NumVertices = 0;
    return;
  }
  this->NumVertices = 0;
  return;
}

// CreateRHIBuffer @ 14845e900

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRefCountPtr<FRHIBuffer> __thiscall
FSkeletalMeshVertexClothBuffer::CreateRHIBuffer
          (FSkeletalMeshVertexClothBuffer *this,FRHICommandListBase *param_1)

{
  EBufferUsageFlags EVar1;
  FRHIResource *this_00;
  FSkeletalMeshVertexDataInterface *pFVar2;
  bool bVar3;
  FResourceArrayInterface *pFVar4;
  TRefCountPtr<FRHIBuffer> TVar5;
  wchar_t *in_R8;
  longlong local_res8;
  FRHIResource *local_res10;
  undefined4 in_stack_ffffffffffffffd4;
  
  EVar1 = this->NumVertices;
  (param_1->MemManager).Top = (uchar *)0x0;
  if (this->VertexData == (FSkeletalMeshVertexDataInterface *)0x0) {
    pFVar4 = (FResourceArrayInterface *)0x0;
  }
  else {
    pFVar4 = (FResourceArrayInterface *)(**(code **)((longlong)*this->VertexData + 0x28))();
  }
  if (EVar1 != None) {
    local_res8 = this->_padding_;
    TVar5 = FRenderResource::CreateRHIBufferInternal
                      ((FRHICommandListBase *)&local_res10,in_R8,
                       (FName *)L"FSkeletalMeshVertexClothBuffer",(uint)&local_res8,EVar1,
                       (FResourceArrayInterface *)CONCAT44(in_stack_ffffffffffffffd4,0x101),
                       SUB81(pFVar4,0));
    if (param_1 != (FRHICommandListBase *)TVar5.Reference) {
      this_00 = (FRHIResource *)(param_1->MemManager).Top;
      (param_1->MemManager).Top = (uchar *)(TVar5.Reference)->_padding_;
      (TVar5.Reference)->_padding_ = 0;
      if (this_00 != (FRHIResource *)0x0) {
        FRHIResource::Release(this_00);
      }
    }
    if (local_res10 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res10);
    }
  }
  bVar3 = FRenderResource::ShouldFreeResourceObject(this->VertexData,pFVar4);
  if (bVar3) {
    pFVar2 = this->VertexData;
    if (pFVar2 != (FSkeletalMeshVertexDataInterface *)0x0) {
      (**(code **)*pFVar2)(pFVar2,1);
    }
    this->VertexData = (FSkeletalMeshVertexDataInterface *)0x0;
  }
  return (TRefCountPtr<FRHIBuffer>)(FRHIBuffer *)param_1;
}

// GetFriendlyName @ 14846c410

FString * __thiscall
FSkeletalMeshVertexClothBuffer::GetFriendlyName
          (FSkeletalMeshVertexClothBuffer *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     L"Skeletal-mesh vertex APEX cloth mesh-mesh mapping buffer");
  return __return_storage_ptr__;
}

// Init @ 148474b60

void __thiscall
FSkeletalMeshVertexClothBuffer::Init
          (FSkeletalMeshVertexClothBuffer *this,
          TArray<FMeshToMeshVertData,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FClothBufferIndexMapping,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  uchar *puVar14;
  ulonglong uVar15;
  int iVar16;
  longlong lVar17;
  
  AllocateData(this);
  (**(code **)((longlong)*this->VertexData + 8))(this->VertexData,param_1->ArrayNum);
  puVar14 = (uchar *)(**(code **)((longlong)*this->VertexData + 0x18))();
  this->Data = puVar14;
  uVar12 = (**(code **)((longlong)*this->VertexData + 0x10))();
  this->Stride = uVar12;
  uVar12 = (**(code **)((longlong)*this->VertexData + 0x20))();
  this->NumVertices = uVar12;
  uVar12 = 0;
  iVar16 = param_1->ArrayNum;
  if (0 < iVar16) {
    lVar17 = 0;
    do {
      uVar13 = 0;
      if ((int)uVar12 < iVar16) {
        uVar13 = ~uVar12 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (param_1->AllocatorInstance).Data;
      uVar15 = (ulonglong)(uVar12 * this->Stride);
      uVar12 = uVar12 + 1;
      pFVar1 = pFVar2 + lVar17;
      uVar4 = *(undefined8 *)(pFVar1 + 8);
      uVar5 = *(undefined8 *)(pFVar2 + lVar17 + 0x10);
      uVar6 = *(undefined8 *)(pFVar2 + lVar17 + 0x10 + 8);
      uVar7 = *(undefined8 *)(pFVar2 + lVar17 + 0x20);
      uVar8 = *(undefined8 *)(pFVar2 + lVar17 + 0x20 + 8);
      uVar9 = *(undefined8 *)(pFVar2 + lVar17 + 0x30);
      uVar10 = *(undefined8 *)(pFVar2 + lVar17 + 0x30 + 8);
      lVar17 = lVar17 + 0x40;
      puVar14 = this->Data;
      *(undefined8 *)(puVar14 + uVar15) = *(undefined8 *)pFVar1;
      *(undefined8 *)(puVar14 + uVar15 + 8) = uVar4;
      *(undefined8 *)(puVar14 + uVar15 + 0x10) = uVar5;
      *(undefined8 *)(puVar14 + uVar15 + 0x10 + 8) = uVar6;
      *(undefined8 *)(puVar14 + uVar15 + 0x20) = uVar7;
      *(undefined8 *)(puVar14 + uVar15 + 0x20 + 8) = uVar8;
      *(undefined8 *)(puVar14 + uVar15 + 0x30) = uVar9;
      *(undefined8 *)(puVar14 + uVar15 + 0x30 + 8) = uVar10;
      iVar16 = param_1->ArrayNum;
    } while ((int)uVar12 < iVar16);
  }
  TArray<FClothBufferIndexMapping,TSizedDefaultAllocator<32>_>::operator=
            (&this->ClothIndexMapping,param_2);
  return;
}

// InitRHI @ 148475a10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSkeletalMeshVertexClothBuffer::InitRHI
          (FSkeletalMeshVertexClothBuffer *this,FRHICommandListBase *param_1)

{
  longlong *plVar1;
  EBufferUsageFlags EVar2;
  FSkeletalMeshVertexDataInterface *pFVar3;
  FRHIResource *pFVar4;
  FRHIShaderResourceView *this_00;
  bool bVar5;
  bool bVar6;
  FResourceArrayInterface *pFVar7;
  TRefCountPtr<FRHIBuffer> TVar8;
  TRefCountPtr<FRHIShaderResourceView> TVar9;
  FRHIResource *this_01;
  TRefCountPtr<FRHIShaderResourceView> *pTVar10;
  FRHIResource *local_res8;
  FRHIResource *local_res18;
  undefined4 in_stack_ffffffffffffffa4;
  longlong local_40;
  longlong lStack_38;
  
  if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId112,"FSkeletalMeshVertexClothBuffer_InitRHI",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\SkeletalMeshVertexClothBuffer.cpp"
               ,0x70);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId112);
  }
  this_01 = (FRHIResource *)0x0;
  EVar2 = this->NumVertices;
  if (this->VertexData == (FSkeletalMeshVertexDataInterface *)0x0) {
    pFVar7 = (FResourceArrayInterface *)0x0;
  }
  else {
    pFVar7 = (FResourceArrayInterface *)(**(code **)((longlong)*this->VertexData + 0x28))();
  }
  if (EVar2 != None) {
    local_res8 = (FRHIResource *)this->_padding_;
    TVar8 = FRenderResource::CreateRHIBufferInternal
                      ((FRHICommandListBase *)&stack0x00000018,(wchar_t *)param_1,
                       (FName *)L"FSkeletalMeshVertexClothBuffer",(uint)&stack0x00000008,EVar2,
                       (FResourceArrayInterface *)CONCAT44(in_stack_ffffffffffffffa4,0x101),
                       SUB81(pFVar7,0));
    if ((FRHIBuffer *)&stack0xffffffffffffffb8 != TVar8.Reference) {
      this_01 = (FRHIResource *)(TVar8.Reference)->_padding_;
      (TVar8.Reference)->_padding_ = 0;
    }
    if (local_res18 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res18);
    }
  }
  bVar6 = FRenderResource::ShouldFreeResourceObject(this->VertexData,pFVar7);
  if (bVar6) {
    pFVar3 = this->VertexData;
    if (pFVar3 != (FSkeletalMeshVertexDataInterface *)0x0) {
      (**(code **)*pFVar3)(pFVar3,1);
    }
    this->VertexData = (FSkeletalMeshVertexDataInterface *)0x0;
  }
  plVar1 = &this->_padding_;
  if (plVar1 != (longlong *)&stack0xffffffffffffffb8) {
    pFVar4 = (FRHIResource *)*plVar1;
    *plVar1 = (longlong)this_01;
    this_01 = pFVar4;
  }
  if (this_01 != (FRHIResource *)0x0) {
    FRHIResource::Release(this_01);
  }
  if ((FInitializer *)*plVar1 != (FInitializer *)0x0) {
    lStack_38 = 0;
    local_40 = 0x10100;
    TVar9 = FRHICommandListBase::CreateShaderResourceView
                      (param_1,(FRHIBuffer *)&stack0x00000008,(FInitializer *)*plVar1);
    pTVar10 = &this->VertexBufferSRV;
    if ((FRHIShaderResourceView *)pTVar10 != TVar9.Reference) {
      this_00 = pTVar10->Reference;
                    /* WARNING: Load size is inaccurate */
      pTVar10->Reference = *TVar9.Reference;
      *(undefined8 *)TVar9.Reference = 0;
      if (this_00 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)this_00);
      }
    }
    if (local_res8 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res8);
    }
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// InitRHIForStreaming @ 148476790

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSkeletalMeshVertexClothBuffer::InitRHIForStreaming
          (FSkeletalMeshVertexClothBuffer *this,FRHIBuffer *param_1,
          FRHIResourceReplaceBatcher *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  
  if ((this->_padding_ != 0) && (param_1 != (FRHIBuffer *)0x0)) {
    iVar2 = (param_2->Infos).ArrayNum;
    if (iVar2 == (param_2->Infos).ArrayMax) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&(param_2->Infos).AllocatorInstance,&(param_2->Infos).ArrayMax);
    }
    (param_2->Infos).ArrayNum = iVar2 + 1;
    pFVar1 = (param_2->Infos).AllocatorInstance.Data + (longlong)iVar2 * 0x18;
    *(longlong *)pFVar1 = this->_padding_;
    *(FRHIBuffer **)(pFVar1 + 8) = param_1;
    pFVar1[0x10] = (FScriptContainerElement)0x0;
  }
  return;
}

// ReleaseRHI @ 148483470

void __thiscall FSkeletalMeshVertexClothBuffer::ReleaseRHI(FSkeletalMeshVertexClothBuffer *this)

{
  FRHIShaderResourceView *this_00;
  
  this_00 = (this->VertexBufferSRV).Reference;
  if (this_00 != (FRHIShaderResourceView *)0x0) {
    (this->VertexBufferSRV).Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)this_00);
  }
  FVertexBuffer::ReleaseRHI((FVertexBuffer *)this);
  return;
}

// ReleaseRHIForStreaming @ 148483710

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSkeletalMeshVertexClothBuffer::ReleaseRHIForStreaming
          (FSkeletalMeshVertexClothBuffer *this,FRHIResourceReplaceBatcher *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  
  if (this->_padding_ != 0) {
    iVar2 = (param_1->Infos).ArrayNum;
    if (iVar2 == (param_1->Infos).ArrayMax) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&(param_1->Infos).AllocatorInstance,&(param_1->Infos).ArrayMax);
    }
    (param_1->Infos).ArrayNum = iVar2 + 1;
    pFVar1 = (param_1->Infos).AllocatorInstance.Data + (longlong)iVar2 * 0x18;
    *(longlong *)pFVar1 = this->_padding_;
    *(longlong *)(pFVar1 + 8) = 0;
    pFVar1[0x10] = (FScriptContainerElement)0x0;
  }
  return;
}

// SerializeMetaData @ 1484928e0

void __thiscall
FSkeletalMeshVertexClothBuffer::SerializeMetaData
          (FSkeletalMeshVertexClothBuffer *this,FArchive *param_1)

{
  uint *puVar1;
  uint *puVar2;
  FArchive *this_00;
  
  this_00 = TArrayPrivateFriend::Serialize<FClothBufferIndexMapping,TSizedDefaultAllocator<32>_>
                      (param_1,&this->ClothIndexMapping);
  puVar1 = (uint *)**(undefined8 **)&this_00->field_0x8;
  if ((uint *)(*(undefined8 **)&this_00->field_0x8)[1] < puVar1 + 1) {
    if ((this_00->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)this_00 + 0x188))(this_00,&this->Stride,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(this_00,&this->Stride);
    }
  }
  else {
    this->Stride = *puVar1;
    **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 4;
  }
  puVar1 = &this->NumVertices;
  puVar2 = (uint *)**(undefined8 **)&this_00->field_0x8;
  if (puVar2 + 1 <= (uint *)(*(undefined8 **)&this_00->field_0x8)[1]) {
    *puVar1 = *puVar2;
    **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 4;
    return;
  }
  if ((this_00->field_0x2a & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001484929a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this_00 + 0x188))(this_00,puVar1,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped(this_00,puVar1);
  return;
}

// SetMetadata @ 148493b90

void __thiscall
FSkeletalMeshVertexClothBuffer::SetMetadata
          (FSkeletalMeshVertexClothBuffer *this,
          TArray<FClothBufferIndexMapping,TSizedDefaultAllocator<32>_> *param_1,uint param_2,
          uint param_3)

{
  TArray<FClothBufferIndexMapping,TSizedDefaultAllocator<32>_>::operator=
            (&this->ClothIndexMapping,param_1);
  this->NumVertices = param_3;
  this->Stride = param_2;
  return;
}

