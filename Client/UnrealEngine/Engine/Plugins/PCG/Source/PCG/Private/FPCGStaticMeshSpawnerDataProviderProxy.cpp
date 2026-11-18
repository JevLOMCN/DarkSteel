// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 4

// FPCGStaticMeshSpawnerDataProviderProxy @ 149739460

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FPCGStaticMeshSpawnerDataProviderProxy * __thiscall
FPCGStaticMeshSpawnerDataProviderProxy::FPCGStaticMeshSpawnerDataProviderProxy
          (FPCGStaticMeshSpawnerDataProviderProxy *this,
          TArray<UE::Math::TIntVector4<unsigned_int>,TSizedDefaultAllocator<32>_> *param_1,
          int param_2,TArray<int,TSizedDefaultAllocator<32>_> *param_3,
          TArray<float,TSizedDefaultAllocator<32>_> *param_4,int param_5,
          TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_> *param_6)

{
  TArray<UE::Math::TIntVector4<unsigned_int>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar4;
  int *piVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  FPCGStaticMeshSpawnerDataProviderProxy *pFVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  float local_68;
  float fStack_64;
  float fStack_60;
  undefined4 uStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  undefined4 uStack_4c;
  
  pTVar1 = &this->AttributeIdOffsetStrides;
  this->_padding_ = (longlong)&___7FPCGStaticMeshSpawnerDataProviderProxy__6B_;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->AttributeIdOffsetStrides).ArrayMax;
  iVar10 = param_1->ArrayNum;
  pFVar6 = (param_1->AllocatorInstance).Data;
  (this->AttributeIdOffsetStrides).ArrayNum = iVar10;
  if (iVar10 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,iVar10,0,&pTVar1->AllocatorInstance,iVar10,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar6,(longlong)iVar10 << 4);
  }
  pTVar3 = &this->SelectionCDF;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar10 = param_4->ArrayNum;
  pFVar6 = (param_4->AllocatorInstance).Data;
  piVar2 = &(this->SelectionCDF).ArrayMax;
  (this->SelectionCDF).ArrayNum = iVar10;
  if (iVar10 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar10,0,&pTVar3->AllocatorInstance,iVar10,piVar2);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar6,(longlong)iVar10 << 2);
  }
  pTVar4 = &this->PrimitiveStringKeys;
  this->SelectorAttributeId = param_2;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->PrimitiveStringKeys).ArrayMax;
  iVar10 = param_3->ArrayNum;
  pFVar6 = (param_3->AllocatorInstance).Data;
  (this->PrimitiveStringKeys).ArrayNum = iVar10;
  if (iVar10 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar10,0,&pTVar4->AllocatorInstance,iVar10,piVar2);
    memcpy((pTVar4->AllocatorInstance).Data,pFVar6,(longlong)iVar10 << 2);
  }
  piVar2 = &(this->PrimitiveMeshBoundsMin).ArrayMax;
  piVar5 = &(this->PrimitiveMeshBoundsMax).ArrayMax;
  this->PrimitiveStringKeysBufferSRV = (FRDGBufferSRV *)0x0;
  (this->PrimitiveMeshBoundsMin).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrimitiveMeshBoundsMin).ArrayNum = 0;
  *piVar2 = 0;
  this->PrimitiveMeshBoundsMinBufferSRV = (FRDGBufferSRV *)0x0;
  (this->PrimitiveMeshBoundsMax).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrimitiveMeshBoundsMax).ArrayNum = 0;
  *piVar5 = 0;
  this->PrimitiveMeshBoundsMaxBufferSRV = (FRDGBufferSRV *)0x0;
  this->SelectedMeshAttributeId = param_5;
  uVar12 = param_6->ArrayNum;
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
  }
  if (0 < (int)uVar12) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,0x10,uVar12,&(this->PrimitiveMeshBoundsMin).AllocatorInstance,0,piVar2);
  }
  uVar12 = param_6->ArrayNum;
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
  }
  if (*piVar5 < (int)uVar12) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,0x10,uVar12,&(this->PrimitiveMeshBoundsMax).AllocatorInstance,
               (this->PrimitiveMeshBoundsMax).ArrayNum,piVar5);
  }
  iVar10 = param_6->ArrayNum;
  uVar12 = 0;
  if (0 < iVar10) {
    lVar13 = 0;
    do {
      uVar14 = ~uVar12 >> 0x1f;
      uVar9 = 0;
      if ((int)uVar12 < iVar10) {
        uVar9 = uVar14;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        pFVar11 = (FPCGStaticMeshSpawnerDataProviderProxy *)(*pcVar7)();
        return pFVar11;
      }
      fVar16 = (float)*(double *)((param_6->AllocatorInstance).Data + lVar13 + 0x10);
      uVar9 = 0;
      if ((int)uVar12 < param_6->ArrayNum) {
        uVar9 = uVar14;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        pFVar11 = (FPCGStaticMeshSpawnerDataProviderProxy *)(*pcVar7)();
        return pFVar11;
      }
      fVar15 = (float)*(double *)((param_6->AllocatorInstance).Data + lVar13 + 8);
      uVar9 = 0;
      if ((int)uVar12 < param_6->ArrayNum) {
        uVar9 = uVar14;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        pFVar11 = (FPCGStaticMeshSpawnerDataProviderProxy *)(*pcVar7)();
        return pFVar11;
      }
      pFVar6 = (this->PrimitiveMeshBoundsMin).AllocatorInstance.Data;
      uStack_5c = 0;
      local_68 = (float)*(double *)((param_6->AllocatorInstance).Data + lVar13);
      fStack_64 = fVar15;
      fStack_60 = fVar16;
      if (((pFVar6 <= (FScriptContainerElement *)&local_68) &&
          ((FScriptContainerElement *)&local_68 <
           pFVar6 + (longlong)(this->PrimitiveMeshBoundsMin).ArrayMax * 0x10)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        pFVar11 = (FPCGStaticMeshSpawnerDataProviderProxy *)(*pcVar7)();
        return pFVar11;
      }
      iVar10 = (this->PrimitiveMeshBoundsMin).ArrayNum;
      if (iVar10 == (this->PrimitiveMeshBoundsMin).ArrayMax) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1010,&(this->PrimitiveMeshBoundsMin).AllocatorInstance,
                            &(this->PrimitiveMeshBoundsMin).ArrayMax);
      }
      (this->PrimitiveMeshBoundsMin).ArrayNum = iVar10 + 1;
      pFVar6 = (this->PrimitiveMeshBoundsMin).AllocatorInstance.Data + (longlong)iVar10 * 0x10;
      *(ulonglong *)pFVar6 = CONCAT44(fStack_64,local_68);
      *(ulonglong *)(pFVar6 + 8) = CONCAT44(uStack_5c,fStack_60);
      uVar9 = 0;
      if ((int)uVar12 < param_6->ArrayNum) {
        uVar9 = uVar14;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        pFVar11 = (FPCGStaticMeshSpawnerDataProviderProxy *)(*pcVar7)();
        return pFVar11;
      }
      fVar16 = (float)*(double *)((param_6->AllocatorInstance).Data + lVar13 + 0x28);
      uVar9 = 0;
      if ((int)uVar12 < param_6->ArrayNum) {
        uVar9 = uVar14;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        pFVar11 = (FPCGStaticMeshSpawnerDataProviderProxy *)(*pcVar7)();
        return pFVar11;
      }
      fVar15 = (float)*(double *)((param_6->AllocatorInstance).Data + lVar13 + 0x20);
      uVar9 = 0;
      if ((int)uVar12 < param_6->ArrayNum) {
        uVar9 = uVar14;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        pFVar11 = (FPCGStaticMeshSpawnerDataProviderProxy *)(*pcVar7)();
        return pFVar11;
      }
      pFVar6 = (this->PrimitiveMeshBoundsMax).AllocatorInstance.Data;
      uStack_4c = 0;
      local_58 = (float)*(double *)((param_6->AllocatorInstance).Data + lVar13 + 0x18);
      fStack_54 = fVar15;
      fStack_50 = fVar16;
      if (((pFVar6 <= (FScriptContainerElement *)&local_58) &&
          ((FScriptContainerElement *)&local_58 < pFVar6 + (longlong)*piVar5 * 0x10)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        pFVar11 = (FPCGStaticMeshSpawnerDataProviderProxy *)(*pcVar7)();
        return pFVar11;
      }
      iVar10 = (this->PrimitiveMeshBoundsMax).ArrayNum;
      if (iVar10 == *piVar5) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1010,&(this->PrimitiveMeshBoundsMax).AllocatorInstance,piVar5);
      }
      (this->PrimitiveMeshBoundsMax).ArrayNum = iVar10 + 1;
      uVar12 = uVar12 + 1;
      lVar13 = lVar13 + 0x38;
      pFVar6 = (this->PrimitiveMeshBoundsMax).AllocatorInstance.Data + (longlong)iVar10 * 0x10;
      *(ulonglong *)pFVar6 = CONCAT44(fStack_54,local_58);
      *(ulonglong *)(pFVar6 + 8) = CONCAT44(uStack_4c,fStack_50);
      iVar10 = param_6->ArrayNum;
    } while ((int)uVar12 < iVar10);
  }
  pFVar6 = (param_4->AllocatorInstance).Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  return this;
}

// AllocateResources @ 1497481c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FPCGStaticMeshSpawnerDataProviderProxy::AllocateResources
          (FPCGStaticMeshSpawnerDataProviderProxy *this,FRDGBuilder *param_1,
          FAllocationData *param_2)

{
  uint uVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  FRDGBuffer *pFVar6;
  FRDGBufferSRV *pFVar7;
  undefined4 uStack_13c;
  FRDGBufferSRVDesc local_130;
  FRDGBufferSRVDesc local_110;
  FRDGBufferSRVDesc local_f0;
  FRDGBufferSRVDesc local_d0;
  FRDGBufferSRVDesc local_b0;
  FRDGBufferSRVDesc local_90;
  FRDGBufferDesc local_70;
  FRDGBufferDesc local_58;
  FRDGBufferDesc local_40;
  
  uVar1 = (this->PrimitiveStringKeys).ArrayNum;
  if (uVar1 == 0) {
    local_110.Buffer =
         FSystemTextures::GetDefaultStructuredBuffer((FSystemTextures *)&GSystemTextures,param_1,4);
    local_110._padding_._0_1_ = 0;
    local_110._padding_._4_4_ = 0;
    local_110._padding_._0_4_ = 0xffffffff;
    local_110._padding_ = 0;
    if ((((local_110.Buffer)->Desc).Usage & DrawIndirect) != None) {
      local_110._padding_._0_1_ = 0x1c;
    }
    pFVar7 = FRDGBuilder::CreateSRV(param_1,&local_110);
    this->PrimitiveStringKeysBufferSRV = pFVar7;
  }
  else {
    local_70.NumElements = uVar1;
    local_70.BytesPerElement = 4;
    local_70._12_4_ = uStack_13c;
    local_70.Usage = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
    local_70.Metadata = (FShaderParametersMetadata *)0x0;
    pFVar6 = FRDGBuilder::CreateBuffer
                       (param_1,&local_70,L"PCGStaticMeshSpawner_PrimitiveStringKeys",None);
    local_130._padding_._4_4_ = 0;
    local_130._padding_._0_4_ = 0xffffffff;
    local_130._padding_ = 0;
    local_130._padding_._0_1_ = 0;
    if (((pFVar6->Desc).Usage & DrawIndirect) != None) {
      local_130._padding_._0_1_ = 0x1c;
    }
    local_130.Buffer = pFVar6;
    pFVar7 = FRDGBuilder::CreateSRV(param_1,&local_130);
    this->PrimitiveStringKeysBufferSRV = pFVar7;
    iVar2 = (this->PrimitiveStringKeys).ArrayNum;
    pFVar3 = (this->PrimitiveStringKeys).AllocatorInstance.Data;
    if (iVar2 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    FRDGBuilder::QueueBufferUpload(param_1,pFVar6,pFVar3,(longlong)iVar2 << 2,None);
  }
  uVar1 = (this->PrimitiveMeshBoundsMin).ArrayNum;
  if (uVar1 == 0) {
    local_d0.Buffer =
         FSystemTextures::GetDefaultStructuredBuffer
                   ((FSystemTextures *)&GSystemTextures,param_1,0x10);
    local_d0._padding_._0_1_ = 0;
    local_d0._padding_._4_4_ = 0;
    local_d0._padding_._0_4_ = 0xffffffff;
    local_d0._padding_ = 0;
    if ((((local_d0.Buffer)->Desc).Usage & DrawIndirect) != None) {
      local_d0._padding_._0_1_ = 0x1c;
    }
    pFVar7 = FRDGBuilder::CreateSRV(param_1,&local_d0);
    this->PrimitiveMeshBoundsMinBufferSRV = pFVar7;
  }
  else {
    local_58.NumElements = uVar1;
    local_58.BytesPerElement = 0x10;
    local_58._12_4_ = uStack_13c;
    local_58.Usage = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
    local_58.Metadata = (FShaderParametersMetadata *)0x0;
    pFVar6 = FRDGBuilder::CreateBuffer
                       (param_1,&local_58,L"PCGStaticMeshSpawner_PrimitiveMeshBoundsMin",None);
    local_f0._padding_._4_4_ = 0;
    local_f0._padding_._0_4_ = 0xffffffff;
    local_f0._padding_._0_1_ = 0;
    local_f0._padding_ = 0;
    if (((pFVar6->Desc).Usage & DrawIndirect) != None) {
      local_f0._padding_._0_1_ = 0x1c;
    }
    local_f0.Buffer = pFVar6;
    pFVar7 = FRDGBuilder::CreateSRV(param_1,&local_f0);
    this->PrimitiveMeshBoundsMinBufferSRV = pFVar7;
    iVar2 = (this->PrimitiveMeshBoundsMin).ArrayNum;
    pFVar3 = (this->PrimitiveMeshBoundsMin).AllocatorInstance.Data;
    if (iVar2 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    FRDGBuilder::QueueBufferUpload(param_1,pFVar6,pFVar3,(longlong)iVar2 << 4,None);
  }
  uVar1 = (this->PrimitiveMeshBoundsMax).ArrayNum;
  if (uVar1 == 0) {
    local_90.Buffer =
         FSystemTextures::GetDefaultStructuredBuffer
                   ((FSystemTextures *)&GSystemTextures,param_1,0x10);
    local_90._padding_._0_1_ = 0;
    local_90._padding_._4_4_ = 0;
    local_90._padding_._0_4_ = 0xffffffff;
    local_90._padding_ = 0;
    if ((((local_90.Buffer)->Desc).Usage & DrawIndirect) != None) {
      local_90._padding_._0_1_ = 0x1c;
    }
    pFVar7 = FRDGBuilder::CreateSRV(param_1,&local_90);
    this->PrimitiveMeshBoundsMaxBufferSRV = pFVar7;
  }
  else {
    local_40.NumElements = uVar1;
    local_40.BytesPerElement = 0x10;
    local_40._12_4_ = uStack_13c;
    local_40.Usage = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
    local_40.Metadata = (FShaderParametersMetadata *)0x0;
    pFVar6 = FRDGBuilder::CreateBuffer
                       (param_1,&local_40,L"PCGStaticMeshSpawner_PrimitiveMeshBoundsMax",None);
    local_b0._padding_._4_4_ = 0;
    local_b0._padding_._0_4_ = 0xffffffff;
    local_b0._padding_._0_1_ = 0;
    local_b0._padding_ = 0;
    if (((pFVar6->Desc).Usage & DrawIndirect) != None) {
      local_b0._padding_._0_1_ = 0x1c;
    }
    local_b0.Buffer = pFVar6;
    pFVar7 = FRDGBuilder::CreateSRV(param_1,&local_b0);
    this->PrimitiveMeshBoundsMaxBufferSRV = pFVar7;
    pFVar3 = (this->PrimitiveMeshBoundsMax).AllocatorInstance.Data;
    iVar2 = (this->PrimitiveMeshBoundsMax).ArrayNum;
    if (iVar2 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    FRDGBuilder::QueueBufferUpload(param_1,pFVar6,pFVar3,(longlong)iVar2 << 4,None);
  }
  return;
}

// GatherDispatchData @ 149752cb0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FPCGStaticMeshSpawnerDataProviderProxy::GatherDispatchData
          (FPCGStaticMeshSpawnerDataProviderProxy *this,FDispatchData *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uchar *puVar5;
  code *pcVar6;
  undefined8 uVar7;
  bool bVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  
  iVar2 = param_1->ParameterBufferOffset;
  puVar5 = param_1->ParameterBuffer;
  iVar3 = param_1->NumInvocations;
  iVar4 = param_1->ParameterBufferStride;
  if ((iVar3 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumElements >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x3f,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((iVar4 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("BytesBetweenElements >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x40,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((((longlong)iVar4 & 0xfU) != 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("BytesBetweenElements % alignof(ElementType) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x41,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar15 = 0;
  if (0 < iVar3) {
    puVar12 = (uint *)(puVar5 + (longlong)iVar2 + 0x830);
    do {
      if ((iVar15 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < NumElements)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                             ,0x96,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar13 = 0;
      puVar12[-4] = (this->AttributeIdOffsetStrides).ArrayNum;
      puVar12[-3] = (this->SelectionCDF).ArrayNum;
      puVar12[-2] = this->SelectorAttributeId;
      puVar12[-1] = this->SelectedMeshAttributeId;
      if (0 < (this->AttributeIdOffsetStrides).ArrayNum) {
        lVar11 = 0;
        do {
          uVar14 = 0;
          if ((int)uVar13 < (this->AttributeIdOffsetStrides).ArrayNum) {
            uVar14 = ~uVar13 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar9 = (ulonglong)uVar13;
          uVar13 = uVar13 + 1;
          pFVar1 = (this->AttributeIdOffsetStrides).AllocatorInstance.Data + lVar11;
          uVar7 = *(undefined8 *)(pFVar1 + 8);
          lVar11 = lVar11 + 0x10;
          *(undefined8 *)(puVar12 + (uVar9 - 0x83) * 4) = *(undefined8 *)pFVar1;
          *(undefined8 *)(puVar12 + (uVar9 - 0x83) * 4 + 2) = uVar7;
        } while ((int)uVar13 < (this->AttributeIdOffsetStrides).ArrayNum);
      }
      uVar9 = 0;
      *(FRDGBufferSRV **)(puVar12 + -0x10c) = this->PrimitiveStringKeysBufferSRV;
      if (0 < (this->SelectionCDF).ArrayNum) {
        lVar11 = 0;
        do {
          uVar14 = (uint)uVar9;
          uVar13 = 0;
          if ((int)uVar14 < (this->SelectionCDF).ArrayNum) {
            uVar13 = ~uVar14 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar10 = uVar9 >> 2;
          uVar9 = (ulonglong)(uVar14 + 1);
          pFVar1 = (this->SelectionCDF).AllocatorInstance.Data + lVar11;
          lVar11 = lVar11 + 4;
          puVar12[(uVar10 + 0x42) * 4 + ((ulonglong)(uVar14 & 3) - 0x20c)] = *(uint *)pFVar1;
        } while ((int)(uVar14 + 1) < (this->SelectionCDF).ArrayNum);
      }
      iVar15 = iVar15 + 1;
      *puVar12 = (uint)((this->PrimitiveMeshBoundsMin).ArrayNum != 0);
      *(FRDGBufferSRV **)(puVar12 + -0x10a) = this->PrimitiveMeshBoundsMinBufferSRV;
      *(FRDGBufferSRV **)(puVar12 + -0x108) = this->PrimitiveMeshBoundsMaxBufferSRV;
      puVar12 = (uint *)((longlong)puVar12 + (longlong)iVar4);
    } while (iVar15 < iVar3);
  }
  return;
}

// IsValid @ 14976c1f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __thiscall
FPCGStaticMeshSpawnerDataProviderProxy::IsValid
          (FPCGStaticMeshSpawnerDataProviderProxy *this,FValidationData *param_1)

{
  return param_1->ParameterStructSize == 0x840;
}

