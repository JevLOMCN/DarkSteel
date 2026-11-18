// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 25

// FSkinWeightVertexBuffer @ 148442930

FSkinWeightVertexBuffer * __thiscall
FSkinWeightVertexBuffer::FSkinWeightVertexBuffer
          (FSkinWeightVertexBuffer *this,FSkinWeightVertexBuffer *param_1)

{
  bool bVar1;
  
  FVertexBuffer::FVertexBuffer((FVertexBuffer *)this);
  (this->DataVertexBuffer).MaxBoneInfluences = 4;
  (this->DataVertexBuffer).bNeedsCPUAccess = false;
  (this->DataVertexBuffer).bVariableBonesPerVertex = false;
  (this->DataVertexBuffer)._padding_ = (longlong)&___7FSkinWeightDataVertexBuffer__6B_;
  (this->DataVertexBuffer).SRVValue.Reference = (FRHIShaderResourceView *)0x0;
  (this->DataVertexBuffer).bUse16BitBoneIndex = false;
  (this->DataVertexBuffer).bUse16BitBoneWeight = false;
  (this->DataVertexBuffer).WeightData = (FStaticMeshVertexDataInterface *)0x0;
  (this->DataVertexBuffer).Data = (uchar *)0x0;
  (this->DataVertexBuffer).NumVertices = 0;
  (this->DataVertexBuffer).NumBoneWeights = 0;
  FVertexBuffer::FVertexBuffer((FVertexBuffer *)&this->LookupVertexBuffer);
  (this->LookupVertexBuffer).bNeedsCPUAccess = false;
  (this->LookupVertexBuffer)._padding_ = (longlong)&___7FSkinWeightLookupVertexBuffer__6B_;
  (this->LookupVertexBuffer).SRVValue.Reference = (FRHIShaderResourceView *)0x0;
  (this->LookupVertexBuffer).LookupData = (FStaticMeshVertexDataInterface *)0x0;
  (this->LookupVertexBuffer).Data = (uchar *)0x0;
  (this->LookupVertexBuffer).NumVertices = 0;
  bVar1 = (param_1->DataVertexBuffer).bNeedsCPUAccess;
  (this->DataVertexBuffer).bNeedsCPUAccess = bVar1;
  (this->LookupVertexBuffer).bNeedsCPUAccess = bVar1;
  FSkinWeightDataVertexBuffer::SetMaxBoneInfluences
            (&this->DataVertexBuffer,(param_1->DataVertexBuffer).MaxBoneInfluences);
  (this->DataVertexBuffer).bUse16BitBoneIndex = (param_1->DataVertexBuffer).bUse16BitBoneIndex;
  (this->DataVertexBuffer).bUse16BitBoneWeight = (param_1->DataVertexBuffer).bUse16BitBoneWeight;
  return this;
}

// FSkinWeightVertexBuffer @ 148442a00

FSkinWeightVertexBuffer * __thiscall
FSkinWeightVertexBuffer::FSkinWeightVertexBuffer(FSkinWeightVertexBuffer *this)

{
  FVertexBuffer::FVertexBuffer((FVertexBuffer *)this);
  (this->DataVertexBuffer).MaxBoneInfluences = 4;
  (this->DataVertexBuffer).bNeedsCPUAccess = false;
  (this->DataVertexBuffer).bVariableBonesPerVertex = false;
  (this->DataVertexBuffer)._padding_ = (longlong)&___7FSkinWeightDataVertexBuffer__6B_;
  (this->DataVertexBuffer).SRVValue.Reference = (FRHIShaderResourceView *)0x0;
  (this->DataVertexBuffer).bUse16BitBoneIndex = false;
  (this->DataVertexBuffer).bUse16BitBoneWeight = false;
  (this->DataVertexBuffer).WeightData = (FStaticMeshVertexDataInterface *)0x0;
  (this->DataVertexBuffer).Data = (uchar *)0x0;
  (this->DataVertexBuffer).NumVertices = 0;
  (this->DataVertexBuffer).NumBoneWeights = 0;
  FVertexBuffer::FVertexBuffer((FVertexBuffer *)&this->LookupVertexBuffer);
  (this->LookupVertexBuffer)._padding_ = (longlong)&___7FSkinWeightLookupVertexBuffer__6B_;
  (this->LookupVertexBuffer).SRVValue.Reference = (FRHIShaderResourceView *)0x0;
  (this->LookupVertexBuffer).bNeedsCPUAccess = false;
  (this->LookupVertexBuffer).LookupData = (FStaticMeshVertexDataInterface *)0x0;
  (this->LookupVertexBuffer).Data = (uchar *)0x0;
  (this->LookupVertexBuffer).NumVertices = 0;
  (this->DataVertexBuffer)._padding_ = (longlong)SkeletalMeshResourceNames::DataVertexBufferName;
  (this->LookupVertexBuffer)._padding_ = (longlong)SkeletalMeshResourceNames::LookupVertexBufferName
  ;
  return this;
}

// ~FSkinWeightVertexBuffer @ 1484463c0

void __thiscall FSkinWeightVertexBuffer::~FSkinWeightVertexBuffer(FSkinWeightVertexBuffer *this)

{
  FStaticMeshVertexDataInterface *pFVar1;
  FRHIShaderResourceView *pFVar2;
  
  pFVar1 = (this->DataVertexBuffer).WeightData;
  if (pFVar1 != (FStaticMeshVertexDataInterface *)0x0) {
    (**(code **)*pFVar1)(pFVar1,1);
    (this->DataVertexBuffer).WeightData = (FStaticMeshVertexDataInterface *)0x0;
  }
  pFVar1 = (this->LookupVertexBuffer).LookupData;
  if (pFVar1 != (FStaticMeshVertexDataInterface *)0x0) {
    (**(code **)*pFVar1)(pFVar1,1);
    (this->LookupVertexBuffer).LookupData = (FStaticMeshVertexDataInterface *)0x0;
  }
  pFVar1 = (this->LookupVertexBuffer).LookupData;
  (this->LookupVertexBuffer)._padding_ = (longlong)&___7FSkinWeightLookupVertexBuffer__6B_;
  if (pFVar1 != (FStaticMeshVertexDataInterface *)0x0) {
    (**(code **)*pFVar1)(pFVar1,1);
    (this->LookupVertexBuffer).LookupData = (FStaticMeshVertexDataInterface *)0x0;
  }
  pFVar2 = (this->LookupVertexBuffer).SRVValue.Reference;
  if (pFVar2 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)&this->LookupVertexBuffer);
  pFVar1 = (this->DataVertexBuffer).WeightData;
  (this->DataVertexBuffer)._padding_ = (longlong)&___7FSkinWeightDataVertexBuffer__6B_;
  if (pFVar1 != (FStaticMeshVertexDataInterface *)0x0) {
    (**(code **)*pFVar1)(pFVar1,1);
    (this->DataVertexBuffer).WeightData = (FStaticMeshVertexDataInterface *)0x0;
  }
  pFVar2 = (this->DataVertexBuffer).SRVValue.Reference;
  if (pFVar2 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)this);
  return;
}

// operator= @ 148447710

FSkinWeightVertexBuffer * __thiscall
FSkinWeightVertexBuffer::operator=(FSkinWeightVertexBuffer *this,FSkinWeightVertexBuffer *param_1)

{
  bool bVar1;
  FStaticMeshVertexDataInterface *pFVar2;
  
  pFVar2 = (this->DataVertexBuffer).WeightData;
  if (pFVar2 != (FStaticMeshVertexDataInterface *)0x0) {
    (**(code **)*pFVar2)(pFVar2,1);
    (this->DataVertexBuffer).WeightData = (FStaticMeshVertexDataInterface *)0x0;
  }
  pFVar2 = (this->LookupVertexBuffer).LookupData;
  if (pFVar2 != (FStaticMeshVertexDataInterface *)0x0) {
    (**(code **)*pFVar2)(pFVar2,1);
    (this->LookupVertexBuffer).LookupData = (FStaticMeshVertexDataInterface *)0x0;
  }
  bVar1 = (param_1->DataVertexBuffer).bNeedsCPUAccess;
  (this->DataVertexBuffer).bNeedsCPUAccess = bVar1;
  (this->LookupVertexBuffer).bNeedsCPUAccess = bVar1;
  FSkinWeightDataVertexBuffer::SetMaxBoneInfluences
            (&this->DataVertexBuffer,(param_1->DataVertexBuffer).MaxBoneInfluences);
  (this->DataVertexBuffer).bUse16BitBoneIndex = (param_1->DataVertexBuffer).bUse16BitBoneIndex;
  (this->DataVertexBuffer).bUse16BitBoneWeight = (param_1->DataVertexBuffer).bUse16BitBoneWeight;
  return this;
}

// operator= @ 1484477a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FSkinWeightVertexBuffer * __thiscall
FSkinWeightVertexBuffer::operator=
          (FSkinWeightVertexBuffer *this,
          TArray<FSkinWeightInfo,TSizedDefaultAllocator<32>_> *param_1)

{
  undefined2 uVar1;
  ushort uVar2;
  FStaticMeshVertexDataInterface *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  TArray<FSkinWeightInfo,TSizedDefaultAllocator<32>_> *pTVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  uchar *puVar10;
  FSkinWeightVertexBuffer *pFVar11;
  ulonglong uVar12;
  int iVar13;
  ulonglong uVar14;
  char cVar15;
  uint uVar16;
  ulonglong uVar17;
  ushort *puVar18;
  undefined8 *puVar19;
  uint uVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong local_90;
  char local_88;
  TArray<FSkinWeightInfo,TSizedDefaultAllocator<32>_> *local_80;
  FSkinWeightVertexBuffer *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_88 = (this->DataVertexBuffer).bVariableBonesPerVertex;
  uVar20 = 0;
  local_80 = param_1;
  local_78 = this;
  if ((bool)local_88 == false) {
    uVar9 = param_1->ArrayNum;
    uVar20 = uVar9 * (this->DataVertexBuffer).MaxBoneInfluences;
  }
  else {
    uVar9 = param_1->ArrayNum;
    FSkinWeightLookupVertexBuffer::AllocateData(&this->LookupVertexBuffer);
    pFVar3 = (this->LookupVertexBuffer).LookupData;
    (this->LookupVertexBuffer).NumVertices = uVar9;
    (**(code **)((longlong)*pFVar3 + 8))(pFVar3,uVar9,0);
    if ((this->LookupVertexBuffer).NumVertices == 0) {
      puVar10 = (uchar *)0x0;
    }
    else {
      puVar10 = (uchar *)(**(code **)((longlong)*(this->LookupVertexBuffer).LookupData + 0x30))();
    }
    (this->LookupVertexBuffer).Data = puVar10;
    uVar16 = 0;
    uVar9 = param_1->ArrayNum;
    if (0 < (int)uVar9) {
      lVar21 = 0x18;
      do {
        pTVar6 = local_80;
        uVar9 = 0;
        lVar23 = 0xc;
        lVar22 = lVar21;
        do {
          iVar13 = pTVar6->ArrayNum;
          uVar8 = 0;
          if ((int)uVar16 < iVar13) {
            uVar8 = ~uVar16 >> 0x1f;
          }
          if (uVar8 == 0) {
            local_98 = (longlong)(int)uVar16;
            local_90 = (longlong)iVar13;
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar7) {
              pcVar5 = (code *)swi(3);
              pFVar11 = (FSkinWeightVertexBuffer *)(*pcVar5)();
              return pFVar11;
            }
          }
          uVar8 = uVar9 + 1;
          if (*(short *)((pTVar6->AllocatorInstance).Data + lVar22) == 0) {
            uVar8 = uVar9;
          }
          uVar9 = uVar8;
          lVar22 = lVar22 + 2;
          lVar23 = lVar23 + -1;
        } while (lVar23 != 0);
        lVar21 = lVar21 + 0x30;
        iVar13 = ((uint)((local_78->DataVertexBuffer).bUse16BitBoneWeight != false) +
                 ((local_78->DataVertexBuffer).bUse16BitBoneIndex != false) + 2) * uVar20;
        uVar20 = uVar20 + uVar9;
        *(uint *)((local_78->LookupVertexBuffer).Data + uVar16 * 4) = iVar13 * 0x100 | uVar9;
        uVar16 = uVar16 + 1;
        uVar9 = local_80->ArrayNum;
        this = local_78;
        param_1 = local_80;
      } while ((int)uVar16 < (int)uVar9);
    }
  }
  cVar15 = local_88;
  FSkinWeightDataVertexBuffer::AllocateData(&this->DataVertexBuffer);
  pFVar3 = (this->DataVertexBuffer).WeightData;
  (this->DataVertexBuffer).NumBoneWeights = uVar20;
  (this->DataVertexBuffer).NumVertices = uVar9;
  (**(code **)((longlong)*pFVar3 + 8))
            (pFVar3,((uint)((this->DataVertexBuffer).bUse16BitBoneWeight != false) +
                    ((this->DataVertexBuffer).bUse16BitBoneIndex != false) + 2) * uVar20,0);
  if ((this->DataVertexBuffer).NumBoneWeights != 0) {
    puVar10 = (uchar *)(**(code **)((longlong)*(this->DataVertexBuffer).WeightData + 0x30))();
    (this->DataVertexBuffer).Data = puVar10;
  }
  iVar13 = param_1->ArrayNum;
  uVar20 = 0;
  if (0 < iVar13) {
    lVar21 = 0;
    do {
      if (cVar15 == '\0') {
        uVar9 = 0;
        if ((int)uVar20 < iVar13) {
          uVar9 = ~uVar20 >> 0x1f;
        }
        if (uVar9 == 0) {
          local_90 = (longlong)iVar13;
          local_98 = (longlong)(int)uVar20;
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar5 = (code *)swi(3);
            pFVar11 = (FSkinWeightVertexBuffer *)(*pcVar5)();
            return pFVar11;
          }
        }
        pFVar4 = (param_1->AllocatorInstance).Data;
        uVar17 = 0;
        if ((this->DataVertexBuffer).MaxBoneInfluences != 0) {
          do {
            uVar9 = (uint)uVar17;
            SetBoneIndex(this,uVar20,uVar9,(uint)*(ushort *)(pFVar4 + uVar17 * 2 + lVar21));
            SetBoneWeight(this,uVar20,uVar9,*(ushort *)(pFVar4 + uVar17 * 2 + lVar21 + 0x18));
            uVar17 = (ulonglong)(uVar9 + 1);
            cVar15 = local_88;
          } while (uVar9 + 1 < (this->DataVertexBuffer).MaxBoneInfluences);
        }
      }
      else {
        uVar9 = 0;
        if ((int)uVar20 < iVar13) {
          uVar9 = ~uVar20 >> 0x1f;
        }
        if (uVar9 == 0) {
          local_90 = (longlong)iVar13;
          local_98 = (longlong)(int)uVar20;
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar5 = (code *)swi(3);
            pFVar11 = (FSkinWeightVertexBuffer *)(*pcVar5)();
            return pFVar11;
          }
        }
        pFVar4 = (param_1->AllocatorInstance).Data;
        puVar19 = &uStack_58;
        uVar17 = 0;
        local_70 = *(undefined8 *)(pFVar4 + lVar21);
        uStack_68 = *(undefined8 *)(pFVar4 + lVar21 + 8);
        local_60 = *(undefined8 *)(pFVar4 + lVar21 + 0x10);
        uStack_58 = *(undefined8 *)(pFVar4 + lVar21 + 0x10 + 8);
        local_50 = *(undefined8 *)(pFVar4 + lVar21 + 0x20);
        uStack_48 = *(undefined8 *)(pFVar4 + lVar21 + 0x20 + 8);
LAB_148447a20:
        do {
          iVar13 = (int)uVar17;
          uVar12 = (ulonglong)(iVar13 + 1U);
          if (iVar13 + 1U < 0xc) {
            puVar18 = (ushort *)((longlong)&uStack_58 + uVar12 * 2);
            do {
              uVar14 = uVar12;
              if (*puVar18 <= *(ushort *)((longlong)&uStack_58 + uVar17 * 2)) {
                uVar14 = uVar17;
              }
              uVar9 = (int)uVar12 + 1;
              uVar12 = (ulonglong)uVar9;
              uVar17 = uVar14;
              puVar18 = puVar18 + 1;
            } while (uVar9 < 0xc);
            if ((int)uVar14 != iVar13) {
              uVar1 = *(undefined2 *)(puVar19 + -3);
              lVar22 = uVar14 * 2;
              uVar17 = (ulonglong)(iVar13 + 1);
              *(undefined2 *)(puVar19 + -3) = *(undefined2 *)((longlong)&local_70 + lVar22);
              *(undefined2 *)((longlong)&local_70 + lVar22) = uVar1;
              uVar1 = *(undefined2 *)puVar19;
              *(undefined2 *)puVar19 = *(undefined2 *)((longlong)&uStack_58 + lVar22);
              puVar19 = (undefined8 *)((longlong)puVar19 + 2);
              *(undefined2 *)((longlong)&uStack_58 + lVar22) = uVar1;
              goto LAB_148447a20;
            }
          }
          uVar17 = (ulonglong)(iVar13 + 1U);
          puVar19 = (undefined8 *)((longlong)puVar19 + 2);
        } while (iVar13 + 1U < 0xc);
        uVar9 = 0;
        uVar17 = 0;
        cVar15 = local_88;
        if ((this->DataVertexBuffer).MaxBoneInfluences != 0) {
          do {
            uVar2 = *(ushort *)((longlong)&uStack_58 + uVar17 * 2);
            if (uVar2 != 0) {
              SetBoneIndex(this,uVar20,uVar9,(uint)*(ushort *)((longlong)&local_70 + uVar17 * 2));
              SetBoneWeight(this,uVar20,uVar9,uVar2);
              uVar9 = uVar9 + 1;
            }
            uVar16 = (int)uVar17 + 1;
            uVar17 = (ulonglong)uVar16;
            cVar15 = local_88;
          } while (uVar16 < (this->DataVertexBuffer).MaxBoneInfluences);
        }
      }
      iVar13 = param_1->ArrayNum;
      uVar20 = uVar20 + 1;
      lVar21 = lVar21 + 0x30;
    } while ((int)uVar20 < iVar13);
  }
  return this;
}

// BeginInitResources @ 148456690

void __thiscall FSkinWeightVertexBuffer::BeginInitResources(FSkinWeightVertexBuffer *this)

{
  BeginInitResource((FRenderResource *)&this->LookupVertexBuffer,
                    &UE::RenderCommandPipe::SkeletalMesh);
  BeginInitResource((FRenderResource *)this,&UE::RenderCommandPipe::SkeletalMesh);
  return;
}

// BeginReleaseResources @ 1484566d0

void __thiscall FSkinWeightVertexBuffer::BeginReleaseResources(FSkinWeightVertexBuffer *this)

{
  BeginReleaseResource
            ((FRenderResource *)&this->LookupVertexBuffer,&UE::RenderCommandPipe::SkeletalMesh);
  BeginReleaseResource((FRenderResource *)this,&UE::RenderCommandPipe::SkeletalMesh);
  return;
}

// CleanUp @ 14845c390

void __thiscall FSkinWeightVertexBuffer::CleanUp(FSkinWeightVertexBuffer *this)

{
  FStaticMeshVertexDataInterface *pFVar1;
  
  pFVar1 = (this->DataVertexBuffer).WeightData;
  if (pFVar1 != (FStaticMeshVertexDataInterface *)0x0) {
    (**(code **)*pFVar1)(pFVar1,1);
    (this->DataVertexBuffer).WeightData = (FStaticMeshVertexDataInterface *)0x0;
  }
  pFVar1 = (this->LookupVertexBuffer).LookupData;
  if (pFVar1 != (FStaticMeshVertexDataInterface *)0x0) {
    (**(code **)*pFVar1)(pFVar1,1);
    (this->LookupVertexBuffer).LookupData = (FStaticMeshVertexDataInterface *)0x0;
  }
  return;
}

// CopyMetaData @ 14845d220

void __thiscall
FSkinWeightVertexBuffer::CopyMetaData
          (FSkinWeightVertexBuffer *this,FSkinWeightVertexBuffer *param_1)

{
  (this->DataVertexBuffer).bVariableBonesPerVertex =
       (param_1->DataVertexBuffer).bVariableBonesPerVertex;
  (this->DataVertexBuffer).MaxBoneInfluences = (param_1->DataVertexBuffer).MaxBoneInfluences;
  (this->DataVertexBuffer).bUse16BitBoneIndex = (param_1->DataVertexBuffer).bUse16BitBoneIndex;
  (this->DataVertexBuffer).bUse16BitBoneWeight = (param_1->DataVertexBuffer).bUse16BitBoneWeight;
  (this->DataVertexBuffer).NumBoneWeights = (param_1->DataVertexBuffer).NumBoneWeights;
  (this->LookupVertexBuffer).NumVertices = (param_1->LookupVertexBuffer).NumVertices;
  return;
}

// CopySkinWeightRawDataFromBuffer @ 14845d260

void __thiscall
FSkinWeightVertexBuffer::CopySkinWeightRawDataFromBuffer
          (FSkinWeightVertexBuffer *this,uchar *param_1,uint param_2)

{
  FSkinWeightDataVertexBuffer::Init
            (&this->DataVertexBuffer,param_2 * (this->DataVertexBuffer).MaxBoneInfluences,param_2);
  memcpy((this->DataVertexBuffer).Data,param_1,
         (ulonglong)
         (((uint)((this->DataVertexBuffer).bUse16BitBoneWeight != false) +
          ((this->DataVertexBuffer).bUse16BitBoneIndex != false) + 2) *
         (this->DataVertexBuffer).NumBoneWeights));
  return;
}

// CreateRHIBuffer @ 14845ea80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FSkinWeightRHIInfo * __thiscall
FSkinWeightVertexBuffer::CreateRHIBuffer
          (FSkinWeightVertexBuffer *this,FSkinWeightRHIInfo *__return_storage_ptr__,
          FRHICommandListBase *param_1)

{
  TRefCountPtr<FRHIBuffer> *pTVar1;
  FRHIBuffer *pFVar2;
  undefined4 in_stack_ffffffffffffffd4;
  undefined1 local_18 [16];
  
  pTVar1 = &__return_storage_ptr__->LookupVertexBufferRHI;
  (__return_storage_ptr__->DataVertexBufferRHI).Reference = (FRHIBuffer *)0x0;
  pTVar1->Reference = (FRHIBuffer *)0x0;
  FRenderResource::CreateRHIBuffer<FStaticMeshVertexDataInterface_*>
            ((FRenderResource *)this,(FRHICommandListBase *)local_18,
             (FStaticMeshVertexDataInterface **)param_1,(int)this + 0x40,
             (this->DataVertexBuffer).NumBoneWeights,
             (wchar_t *)CONCAT44(in_stack_ffffffffffffffd4,0x121));
  if (__return_storage_ptr__ != (FSkinWeightRHIInfo *)local_18) {
    pFVar2 = (__return_storage_ptr__->DataVertexBufferRHI).Reference;
    (__return_storage_ptr__->DataVertexBufferRHI).Reference = (FRHIBuffer *)local_18._0_8_;
    local_18._0_8_ = pFVar2;
  }
  if ((FRHIBuffer *)local_18._0_8_ != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)local_18._0_8_);
  }
  FRenderResource::CreateRHIBuffer<FStaticMeshVertexDataInterface_*>
            ((FRenderResource *)&this->LookupVertexBuffer,(FRHICommandListBase *)(local_18 + 8),
             (FStaticMeshVertexDataInterface **)param_1,(int)this + 0x90,
             (this->LookupVertexBuffer).NumVertices,
             (wchar_t *)CONCAT44(in_stack_ffffffffffffffd4,0x121));
  if (pTVar1 != (TRefCountPtr<FRHIBuffer> *)(local_18 + 8)) {
    pFVar2 = pTVar1->Reference;
    pTVar1->Reference = (FRHIBuffer *)local_18._8_8_;
    local_18._8_8_ = pFVar2;
  }
  if ((FRHIBuffer *)local_18._8_8_ != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)local_18._8_8_);
  }
  return __return_storage_ptr__;
}

// GetBoneIndex @ 14846ac00

uint __thiscall
FSkinWeightVertexBuffer::GetBoneIndex(FSkinWeightVertexBuffer *this,uint param_1,uint param_2)

{
  uchar *puVar1;
  uint uVar2;
  uint uVar3;
  
  if ((this->DataVertexBuffer).bVariableBonesPerVertex == false) {
    uVar3 = (this->DataVertexBuffer).MaxBoneInfluences;
    uVar2 = ((uint)((this->DataVertexBuffer).bUse16BitBoneWeight != false) +
            ((this->DataVertexBuffer).bUse16BitBoneIndex != false) + 2) * uVar3 * param_1;
  }
  else {
    uVar3 = *(uint *)((this->LookupVertexBuffer).Data + param_1 * 4);
    uVar2 = uVar3 >> 8;
    uVar3 = uVar3 & 0xff;
  }
  if (param_2 < uVar3) {
    puVar1 = (this->DataVertexBuffer).Data;
    if ((this->DataVertexBuffer).bUse16BitBoneIndex != false) {
      return (uint)*(ushort *)(puVar1 + (ulonglong)param_2 * 2 + (ulonglong)uVar2);
    }
    return (uint)puVar1[(ulonglong)param_2 + (ulonglong)uVar2];
  }
  return 0;
}

// GetBoneInfluenceType @ 14846ac70

GPUSkinBoneInfluenceType __thiscall
FSkinWeightVertexBuffer::GetBoneInfluenceType(FSkinWeightVertexBuffer *this)

{
  return (GPUSkinBoneInfluenceType)((this->DataVertexBuffer).bVariableBonesPerVertex != false);
}

// GetBoneWeight @ 14846ad00

ushort __thiscall
FSkinWeightVertexBuffer::GetBoneWeight(FSkinWeightVertexBuffer *this,uint param_1,uint param_2)

{
  bool bVar1;
  uchar uVar2;
  uchar *puVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  if ((this->DataVertexBuffer).bVariableBonesPerVertex == false) {
    uVar5 = (this->DataVertexBuffer).MaxBoneInfluences;
    uVar4 = ((uint)((this->DataVertexBuffer).bUse16BitBoneWeight != false) +
            ((this->DataVertexBuffer).bUse16BitBoneIndex != false) + 2) * uVar5 * param_1;
  }
  else {
    uVar5 = *(uint *)((this->LookupVertexBuffer).Data + param_1 * 4);
    uVar4 = uVar5 >> 8;
    uVar5 = uVar5 & 0xff;
  }
  if (param_2 < uVar5) {
    bVar1 = (this->DataVertexBuffer).bUse16BitBoneWeight;
    lVar6 = (ulonglong)(uVar5 * (((this->DataVertexBuffer).bUse16BitBoneIndex != false) + 1)) +
            (ulonglong)(((bVar1 != false) + 1) * param_2);
    puVar3 = (this->DataVertexBuffer).Data;
    if (bVar1 != false) {
      return *(ushort *)(puVar3 + (ulonglong)uVar4 + lVar6);
    }
    uVar2 = puVar3[(ulonglong)uVar4 + lVar6];
    return CONCAT11(uVar2,uVar2);
  }
  return 0;
}

// GetRigidWeightBone @ 14846eca0

bool __thiscall
FSkinWeightVertexBuffer::GetRigidWeightBone(FSkinWeightVertexBuffer *this,uint param_1,int *param_2)

{
  bool bVar1;
  uchar *puVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = 0;
  if ((this->DataVertexBuffer).bVariableBonesPerVertex == false) {
    uVar6 = (this->DataVertexBuffer).MaxBoneInfluences;
    uVar5 = ((uint)((this->DataVertexBuffer).bUse16BitBoneWeight != false) +
            ((this->DataVertexBuffer).bUse16BitBoneIndex != false) + 2) * uVar6 * param_1;
  }
  else {
    uVar6 = *(uint *)((this->LookupVertexBuffer).Data + param_1 * 4);
    uVar5 = uVar6 >> 8;
    uVar6 = uVar6 & 0xff;
  }
  puVar2 = (this->DataVertexBuffer).Data;
  bVar1 = (this->DataVertexBuffer).bUse16BitBoneIndex;
  if (uVar6 != 0) {
    while (puVar2[(ulonglong)((int)uVar4 + ((bVar1 != false) + 1) * uVar6) + (ulonglong)uVar5] !=
           0xff) {
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
      if (uVar6 <= uVar3) {
        return false;
      }
    }
    if (bVar1 != false) {
      *param_2 = (uint)*(ushort *)(puVar2 + uVar4 * 2 + (ulonglong)uVar5);
      return true;
    }
    *param_2 = (uint)puVar2[uVar4 + uVar5];
    uVar4 = 1;
  }
  return SUB81(uVar4,0);
}

// GetSkinWeights @ 14846f560

void __thiscall
FSkinWeightVertexBuffer::GetSkinWeights
          (FSkinWeightVertexBuffer *this,
          TArray<FSkinWeightInfo,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  uchar *puVar2;
  code *pcVar3;
  bool bVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  FScriptContainerElement *_Dst;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  
  uVar8 = (this->DataVertexBuffer).NumVertices;
  piVar1 = &param_1->ArrayNum;
  iVar6 = *piVar1;
  if (iVar6 < (int)uVar8) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,2,uVar8 - iVar6,&param_1->AllocatorInstance,piVar1,&param_1->ArrayMax);
  }
  else {
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
    }
    if ((int)uVar8 < iVar6) {
      uVar11 = iVar6 - uVar8;
      if (((int)(uVar11 | uVar8) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar11 != 0) {
        _Dst = (param_1->AllocatorInstance).Data + (longlong)(int)uVar8 * 0x30;
        iVar6 = (*piVar1 - uVar8) - uVar11;
        if (iVar6 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar11 * 0x30,(longlong)iVar6 * 0x30);
        }
        *piVar1 = *piVar1 - uVar11;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,2,&param_1->AllocatorInstance,*piVar1,&param_1->ArrayMax);
      }
    }
  }
  uVar8 = 0;
  if ((this->DataVertexBuffer).NumVertices != 0) {
    do {
      uVar11 = 0;
      lVar12 = 0;
      lVar9 = (longlong)(int)uVar8 * 0x30;
      do {
        if ((this->DataVertexBuffer).bVariableBonesPerVertex == false) {
          uVar10 = (this->DataVertexBuffer).MaxBoneInfluences;
          uVar7 = ((uint)((this->DataVertexBuffer).bUse16BitBoneWeight != false) +
                  ((this->DataVertexBuffer).bUse16BitBoneIndex != false) + 2) * uVar10 * uVar8;
        }
        else {
          uVar7 = *(uint *)((this->LookupVertexBuffer).Data + uVar8 * 4);
          uVar10 = uVar7 & 0xff;
          uVar7 = uVar7 >> 8;
        }
        if (uVar11 < uVar10) {
          puVar2 = (this->DataVertexBuffer).Data;
          if ((this->DataVertexBuffer).bUse16BitBoneIndex == false) {
            uVar5 = (ushort)puVar2[lVar12 + (ulonglong)uVar7];
          }
          else {
            uVar5 = *(ushort *)(puVar2 + (longlong)(int)uVar8 * -0x30 + lVar9 + (ulonglong)uVar7);
          }
        }
        else {
          uVar5 = 0;
        }
        uVar7 = 0;
        if ((int)uVar8 < *piVar1) {
          uVar7 = ~uVar8 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        *(ushort *)((param_1->AllocatorInstance).Data + lVar9) = uVar5;
        uVar5 = GetBoneWeight(this,uVar8,uVar11);
        uVar7 = 0;
        if ((int)uVar8 < *piVar1) {
          uVar7 = ~uVar8 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar11 = uVar11 + 1;
        lVar12 = lVar12 + 1;
        *(ushort *)((param_1->AllocatorInstance).Data + lVar9 + 0x18) = uVar5;
        lVar9 = lVar9 + 2;
      } while ((int)uVar11 < 0xc);
      uVar8 = uVar8 + 1;
    } while (uVar8 < (this->DataVertexBuffer).NumVertices);
  }
  return;
}

// GetVertexInfluenceOffsetCount @ 148473f00

void __thiscall
FSkinWeightVertexBuffer::GetVertexInfluenceOffsetCount
          (FSkinWeightVertexBuffer *this,uint param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  
  if ((this->DataVertexBuffer).bVariableBonesPerVertex != false) {
    uVar1 = *(uint *)((this->LookupVertexBuffer).Data + param_1 * 4);
    *param_2 = uVar1 >> 8;
    *param_3 = uVar1 & 0xff;
    return;
  }
  *param_2 = ((uint)((this->DataVertexBuffer).bUse16BitBoneWeight != false) +
             ((this->DataVertexBuffer).bUse16BitBoneIndex != false) + 2) * param_1 *
             (this->DataVertexBuffer).MaxBoneInfluences;
  *param_3 = (this->DataVertexBuffer).MaxBoneInfluences;
  return;
}

// GetVertexSkinWeights @ 148473f60

FSkinWeightInfo * __thiscall
FSkinWeightVertexBuffer::GetVertexSkinWeights
          (FSkinWeightVertexBuffer *this,FSkinWeightInfo *__return_storage_ptr__,uint param_1)

{
  bool bVar1;
  uchar *puVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  ushort *puVar9;
  uint uVar10;
  
  bVar1 = (this->DataVertexBuffer).bVariableBonesPerVertex;
  uVar10 = param_1 * 4;
  uVar5 = 2;
  puVar9 = __return_storage_ptr__->InfluenceBones + 1;
  lVar8 = 2;
  do {
    if (bVar1 == false) {
      uVar6 = (this->DataVertexBuffer).MaxBoneInfluences;
      uVar4 = ((uint)((this->DataVertexBuffer).bUse16BitBoneWeight != false) +
              ((this->DataVertexBuffer).bUse16BitBoneIndex != false) + 2) * uVar6 * param_1;
    }
    else {
      uVar6 = *(uint *)((this->LookupVertexBuffer).Data + uVar10);
      uVar4 = uVar6 >> 8;
      uVar6 = uVar6 & 0xff;
    }
    uVar7 = uVar5 - 2;
    if (uVar7 < uVar6) {
      puVar2 = (this->DataVertexBuffer).Data;
      if ((this->DataVertexBuffer).bUse16BitBoneIndex == false) {
        uVar3 = (ushort)puVar2[(ulonglong)uVar7 + (ulonglong)uVar4];
      }
      else {
        uVar3 = *(ushort *)(puVar2 + (ulonglong)uVar7 * 2 + (ulonglong)uVar4);
      }
    }
    else {
      uVar3 = 0;
    }
    ((FSkinWeightInfo *)(puVar9 + -1))->InfluenceBones[0] = uVar3;
    uVar3 = GetBoneWeight(this,param_1,uVar7);
    puVar9[0xb] = uVar3;
    if (bVar1 == false) {
      uVar6 = (this->DataVertexBuffer).MaxBoneInfluences;
      uVar4 = ((uint)((this->DataVertexBuffer).bUse16BitBoneWeight != false) +
              ((this->DataVertexBuffer).bUse16BitBoneIndex != false) + 2) * uVar6 * param_1;
    }
    else {
      uVar6 = *(uint *)((this->LookupVertexBuffer).Data + uVar10);
      uVar4 = uVar6 >> 8;
      uVar6 = uVar6 & 0xff;
    }
    uVar7 = uVar5 - 1;
    if (uVar7 < uVar6) {
      puVar2 = (this->DataVertexBuffer).Data;
      if ((this->DataVertexBuffer).bUse16BitBoneIndex == false) {
        uVar3 = (ushort)puVar2[(ulonglong)uVar7 + (ulonglong)uVar4];
      }
      else {
        uVar3 = *(ushort *)(puVar2 + (ulonglong)uVar7 * 2 + (ulonglong)uVar4);
      }
    }
    else {
      uVar3 = 0;
    }
    *puVar9 = uVar3;
    uVar3 = GetBoneWeight(this,param_1,uVar7);
    puVar9[0xc] = uVar3;
    if (bVar1 == false) {
      uVar6 = (this->DataVertexBuffer).MaxBoneInfluences;
      uVar4 = ((uint)((this->DataVertexBuffer).bUse16BitBoneWeight != false) +
              ((this->DataVertexBuffer).bUse16BitBoneIndex != false) + 2) * uVar6 * param_1;
    }
    else {
      uVar6 = *(uint *)((this->LookupVertexBuffer).Data + uVar10);
      uVar4 = uVar6 >> 8;
      uVar6 = uVar6 & 0xff;
    }
    if (uVar5 < uVar6) {
      puVar2 = (this->DataVertexBuffer).Data;
      if ((this->DataVertexBuffer).bUse16BitBoneIndex == false) {
        uVar3 = (ushort)puVar2[(ulonglong)uVar5 + (ulonglong)uVar4];
      }
      else {
        uVar3 = *(ushort *)(puVar2 + (ulonglong)uVar5 * 2 + (ulonglong)uVar4);
      }
    }
    else {
      uVar3 = 0;
    }
    puVar9[1] = uVar3;
    uVar3 = GetBoneWeight(this,param_1,uVar5);
    puVar9[0xd] = uVar3;
    if (bVar1 == false) {
      uVar6 = (this->DataVertexBuffer).MaxBoneInfluences;
      uVar4 = ((uint)((this->DataVertexBuffer).bUse16BitBoneWeight != false) +
              ((this->DataVertexBuffer).bUse16BitBoneIndex != false) + 2) * uVar6 * param_1;
    }
    else {
      uVar6 = *(uint *)((this->LookupVertexBuffer).Data + uVar10);
      uVar4 = uVar6 >> 8;
      uVar6 = uVar6 & 0xff;
    }
    uVar7 = uVar5 + 1;
    if (uVar7 < uVar6) {
      puVar2 = (this->DataVertexBuffer).Data;
      if ((this->DataVertexBuffer).bUse16BitBoneIndex == false) {
        uVar3 = (ushort)puVar2[(ulonglong)uVar7 + (ulonglong)uVar4];
      }
      else {
        uVar3 = *(ushort *)(puVar2 + (ulonglong)uVar7 * 2 + (ulonglong)uVar4);
      }
    }
    else {
      uVar3 = 0;
    }
    puVar9[2] = uVar3;
    uVar3 = GetBoneWeight(this,param_1,uVar7);
    puVar9[0xe] = uVar3;
    if (bVar1 == false) {
      uVar6 = (this->DataVertexBuffer).MaxBoneInfluences;
      uVar4 = ((uint)((this->DataVertexBuffer).bUse16BitBoneWeight != false) +
              ((this->DataVertexBuffer).bUse16BitBoneIndex != false) + 2) * uVar6 * param_1;
    }
    else {
      uVar6 = *(uint *)((this->LookupVertexBuffer).Data + uVar10);
      uVar4 = uVar6 >> 8;
      uVar6 = uVar6 & 0xff;
    }
    uVar7 = uVar5 + 2;
    if (uVar7 < uVar6) {
      puVar2 = (this->DataVertexBuffer).Data;
      if ((this->DataVertexBuffer).bUse16BitBoneIndex == false) {
        uVar3 = (ushort)puVar2[(ulonglong)uVar7 + (ulonglong)uVar4];
      }
      else {
        uVar3 = *(ushort *)(puVar2 + (ulonglong)uVar7 * 2 + (ulonglong)uVar4);
      }
    }
    else {
      uVar3 = 0;
    }
    puVar9[3] = uVar3;
    uVar3 = GetBoneWeight(this,param_1,uVar7);
    puVar9[0xf] = uVar3;
    if (bVar1 == false) {
      uVar6 = (this->DataVertexBuffer).MaxBoneInfluences;
      uVar4 = ((uint)((this->DataVertexBuffer).bUse16BitBoneWeight != false) +
              ((this->DataVertexBuffer).bUse16BitBoneIndex != false) + 2) * uVar6 * param_1;
    }
    else {
      uVar6 = *(uint *)((this->LookupVertexBuffer).Data + uVar10);
      uVar4 = uVar6 >> 8;
      uVar6 = uVar6 & 0xff;
    }
    uVar7 = uVar5 + 3;
    if (uVar7 < uVar6) {
      puVar2 = (this->DataVertexBuffer).Data;
      if ((this->DataVertexBuffer).bUse16BitBoneIndex == false) {
        uVar3 = (ushort)puVar2[(ulonglong)uVar7 + (ulonglong)uVar4];
      }
      else {
        uVar3 = *(ushort *)(puVar2 + (ulonglong)uVar7 * 2 + (ulonglong)uVar4);
      }
    }
    else {
      uVar3 = 0;
    }
    puVar9[4] = uVar3;
    uVar3 = GetBoneWeight(this,param_1,uVar7);
    puVar9[0x10] = uVar3;
    uVar5 = uVar5 + 6;
    puVar9 = puVar9 + 6;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  return __return_storage_ptr__;
}

// RebuildLookupVertexBuffer @ 1484801c0

void __thiscall FSkinWeightVertexBuffer::RebuildLookupVertexBuffer(FSkinWeightVertexBuffer *this)

{
  uint uVar1;
  uchar *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  uVar1 = (this->DataVertexBuffer).MaxBoneInfluences;
  uVar5 = (this->DataVertexBuffer).NumBoneWeights / uVar1;
  FSkinWeightLookupVertexBuffer::AllocateData(&this->LookupVertexBuffer);
  (this->LookupVertexBuffer).NumVertices = uVar5;
  (**(code **)((longlong)*(this->LookupVertexBuffer).LookupData + 8))();
  if ((this->LookupVertexBuffer).NumVertices == 0) {
    puVar2 = (uchar *)0x0;
  }
  else {
    puVar2 = (uchar *)(**(code **)((longlong)*(this->LookupVertexBuffer).LookupData + 0x30))();
  }
  iVar7 = 0;
  (this->LookupVertexBuffer).Data = puVar2;
  uVar6 = 0;
  if (uVar5 != 0) {
    do {
      uVar3 = uVar6 * 4;
      uVar6 = uVar6 + 1;
      iVar4 = ((uint)((this->DataVertexBuffer).bUse16BitBoneWeight != false) +
              ((this->DataVertexBuffer).bUse16BitBoneIndex != false) + 2) * iVar7;
      iVar7 = iVar7 + uVar1;
      *(uint *)((this->LookupVertexBuffer).Data + uVar3) = iVar4 * 0x100 | uVar1;
    } while (uVar6 < uVar5);
  }
  return;
}

// ReleaseResources @ 148484330

void __thiscall FSkinWeightVertexBuffer::ReleaseResources(FSkinWeightVertexBuffer *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInParallelRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInParallelRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\SkinWeightVertexBuffer.cpp"
                       ,0x331,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (**(code **)((this->LookupVertexBuffer)._padding_ + 0x20))(&this->LookupVertexBuffer);
                    /* WARNING: Could not recover jumptable at 0x00014848437e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((this->DataVertexBuffer)._padding_ + 0x20))(this);
  return;
}

// ResetVertexBoneWeights @ 148489e20

void __thiscall
FSkinWeightVertexBuffer::ResetVertexBoneWeights(FSkinWeightVertexBuffer *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  if ((this->DataVertexBuffer).bVariableBonesPerVertex == false) {
    uVar2 = (this->DataVertexBuffer).MaxBoneInfluences;
    uVar1 = ((uint)((this->DataVertexBuffer).bUse16BitBoneWeight != false) +
            ((this->DataVertexBuffer).bUse16BitBoneIndex != false) + 2) * uVar2 * param_1;
  }
  else {
    uVar2 = *(uint *)((this->LookupVertexBuffer).Data + param_1 * 4);
    uVar1 = uVar2 >> 8;
    uVar2 = uVar2 & 0xff;
  }
  if (uVar2 != 0) {
    memset((this->DataVertexBuffer).Data + uVar1,0,
           (ulonglong)
           (((uint)((this->DataVertexBuffer).bUse16BitBoneWeight != false) +
            ((this->DataVertexBuffer).bUse16BitBoneIndex != false) + 2) * uVar2));
    return;
  }
  return;
}

// SerializeMetaData @ 148492df0

void __thiscall
FSkinWeightVertexBuffer::SerializeMetaData(FSkinWeightVertexBuffer *this,FArchive *param_1)

{
  FSkinWeightDataVertexBuffer::SerializeMetaData(&this->DataVertexBuffer,param_1);
  FSkinWeightLookupVertexBuffer::SerializeMetaData(&this->LookupVertexBuffer,param_1);
  return;
}

// SetBoneIndex @ 148493210

void __thiscall
FSkinWeightVertexBuffer::SetBoneIndex
          (FSkinWeightVertexBuffer *this,uint param_1,uint param_2,uint param_3)

{
  bool *pbVar1;
  uchar *puVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  
  pbVar1 = &(this->DataVertexBuffer).bUse16BitBoneIndex;
  if ((this->DataVertexBuffer).bVariableBonesPerVertex == false) {
    uVar6 = (this->DataVertexBuffer).MaxBoneInfluences;
    uVar5 = ((uint)((this->DataVertexBuffer).bUse16BitBoneWeight != false) + (*pbVar1 != false) + 2)
            * uVar6 * param_1;
  }
  else {
    uVar6 = *(uint *)((this->LookupVertexBuffer).Data + param_1 * 4);
    uVar5 = uVar6 >> 8;
    uVar6 = uVar6 & 0xff;
  }
  if (param_2 < uVar6) {
    puVar2 = (this->DataVertexBuffer).Data;
    if (*pbVar1 != false) {
      *(short *)(puVar2 + (ulonglong)param_2 * 2 + (ulonglong)uVar5) = (short)param_3;
      return;
    }
    puVar2[(ulonglong)param_2 + (ulonglong)uVar5] = (uchar)param_3;
    return;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\SkinWeightVertexBuffer.cpp"
                     ,0x22a,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  return;
}

// SetBoneWeight @ 148493350

void __thiscall
FSkinWeightVertexBuffer::SetBoneWeight
          (FSkinWeightVertexBuffer *this,uint param_1,uint param_2,ushort param_3)

{
  uchar *puVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  
  if ((this->DataVertexBuffer).bVariableBonesPerVertex == false) {
    uVar6 = (this->DataVertexBuffer).MaxBoneInfluences;
    uVar4 = ((uint)((this->DataVertexBuffer).bUse16BitBoneIndex != false) +
            ((this->DataVertexBuffer).bUse16BitBoneWeight != false) + 2) * uVar6 * param_1;
  }
  else {
    uVar6 = *(uint *)((this->LookupVertexBuffer).Data + param_1 * 4);
    uVar4 = uVar6 >> 8;
    uVar6 = uVar6 & 0xff;
  }
  if (param_2 < uVar6) {
    bVar3 = (this->DataVertexBuffer).bUse16BitBoneWeight;
    lVar5 = (ulonglong)(param_2 * ((bVar3 != false) + 1)) +
            (ulonglong)((((this->DataVertexBuffer).bUse16BitBoneIndex != false) + 1) * uVar6);
    puVar1 = (this->DataVertexBuffer).Data;
    if (bVar3 != false) {
      *(ushort *)(puVar1 + (ulonglong)uVar4 + lVar5) = param_3;
      return;
    }
    puVar1[(ulonglong)uVar4 + lVar5] = (uchar)(param_3 >> 8);
    return;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\SkinWeightVertexBuffer.cpp"
                     ,0x259,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}

// SetOwnerName @ 148494100

void __thiscall FSkinWeightVertexBuffer::SetOwnerName(FSkinWeightVertexBuffer *this,FName *param_1)

{
  (this->LookupVertexBuffer)._padding_ = (longlong)*param_1;
  (this->DataVertexBuffer)._padding_ = (longlong)*param_1;
  return;
}

