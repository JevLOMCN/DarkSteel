// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 4

// FPCGSkinnedMeshSpawnerDataProviderProxy @ 149738d20

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FPCGSkinnedMeshSpawnerDataProviderProxy * __thiscall
FPCGSkinnedMeshSpawnerDataProviderProxy::FPCGSkinnedMeshSpawnerDataProviderProxy
          (FPCGSkinnedMeshSpawnerDataProviderProxy *this,
          TArray<UE::Math::TIntVector4<unsigned_int>,TSizedDefaultAllocator<32>_> *param_1,
          int param_2,TArray<int,TSizedDefaultAllocator<32>_> *param_3,
          TArray<float,TSizedDefaultAllocator<32>_> *param_4,
          TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_> *param_5)

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
  FPCGSkinnedMeshSpawnerDataProviderProxy *pFVar11;
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
  this->_padding_ = (longlong)&___7FPCGSkinnedMeshSpawnerDataProviderProxy__6B_;
  piVar2 = &(this->AttributeIdOffsetStrides).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
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
  uVar12 = param_5->ArrayNum;
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
  }
  if (0 < (int)uVar12) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,0x10,uVar12,&(this->PrimitiveMeshBoundsMin).AllocatorInstance,0,piVar2);
  }
  uVar12 = param_5->ArrayNum;
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
  }
  if (*piVar5 < (int)uVar12) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,0x10,uVar12,&(this->PrimitiveMeshBoundsMax).AllocatorInstance,
               (this->PrimitiveMeshBoundsMax).ArrayNum,piVar5);
  }
  iVar10 = param_5->ArrayNum;
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
        pFVar11 = (FPCGSkinnedMeshSpawnerDataProviderProxy *)(*pcVar7)();
        return pFVar11;
      }
      fVar16 = (float)*(double *)((param_5->AllocatorInstance).Data + lVar13 + 0x10);
      uVar9 = 0;
      if ((int)uVar12 < param_5->ArrayNum) {
        uVar9 = uVar14;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        pFVar11 = (FPCGSkinnedMeshSpawnerDataProviderProxy *)(*pcVar7)();
        return pFVar11;
      }
      fVar15 = (float)*(double *)((param_5->AllocatorInstance).Data + lVar13 + 8);
      uVar9 = 0;
      if ((int)uVar12 < param_5->ArrayNum) {
        uVar9 = uVar14;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        pFVar11 = (FPCGSkinnedMeshSpawnerDataProviderProxy *)(*pcVar7)();
        return pFVar11;
      }
      pFVar6 = (this->PrimitiveMeshBoundsMin).AllocatorInstance.Data;
      uStack_5c = 0;
      local_68 = (float)*(double *)((param_5->AllocatorInstance).Data + lVar13);
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
        pFVar11 = (FPCGSkinnedMeshSpawnerDataProviderProxy *)(*pcVar7)();
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
      if ((int)uVar12 < param_5->ArrayNum) {
        uVar9 = uVar14;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        pFVar11 = (FPCGSkinnedMeshSpawnerDataProviderProxy *)(*pcVar7)();
        return pFVar11;
      }
      fVar16 = (float)*(double *)((param_5->AllocatorInstance).Data + lVar13 + 0x28);
      uVar9 = 0;
      if ((int)uVar12 < param_5->ArrayNum) {
        uVar9 = uVar14;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        pFVar11 = (FPCGSkinnedMeshSpawnerDataProviderProxy *)(*pcVar7)();
        return pFVar11;
      }
      fVar15 = (float)*(double *)((param_5->AllocatorInstance).Data + lVar13 + 0x20);
      uVar9 = 0;
      if ((int)uVar12 < param_5->ArrayNum) {
        uVar9 = uVar14;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        pFVar11 = (FPCGSkinnedMeshSpawnerDataProviderProxy *)(*pcVar7)();
        return pFVar11;
      }
      pFVar6 = (this->PrimitiveMeshBoundsMax).AllocatorInstance.Data;
      uStack_4c = 0;
      local_58 = (float)*(double *)((param_5->AllocatorInstance).Data + lVar13 + 0x18);
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
        pFVar11 = (FPCGSkinnedMeshSpawnerDataProviderProxy *)(*pcVar7)();
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
      iVar10 = param_5->ArrayNum;
    } while ((int)uVar12 < iVar10);
  }
  pFVar6 = (param_4->AllocatorInstance).Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  return this;
}

// AllocateResources @ 149747ad0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FPCGSkinnedMeshSpawnerDataProviderProxy::AllocateResources
          (FPCGSkinnedMeshSpawnerDataProviderProxy *this,FRDGBuilder *param_1,
          FAllocationData *param_2)

{
  uint uVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  FRDGBuffer *pFVar6;
  FRDGBufferSRV *pFVar7;
  FLLMScope local_res8 [2];
  FName local_res20;
  undefined4 uStack_15c;
  FMemScope local_150;
  FRDGBufferSRVDesc local_148;
  FRDGBufferSRVDesc local_128;
  FRDGBufferSRVDesc local_108;
  FRDGBufferSRVDesc local_e8;
  FRDGBufferSRVDesc local_c8;
  FRDGBufferSRVDesc local_a8;
  FRDGBufferDesc local_88;
  FRDGBufferDesc local_70;
  FRDGBufferDesc local_58;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_PCG.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_PCG.UniqueName;
  FMemScope::FMemScope(&local_150,&local_res20,true);
  uVar1 = (this->PrimitiveStringKeys).ArrayNum;
  if (uVar1 == 0) {
    local_128.Buffer =
         FSystemTextures::GetDefaultStructuredBuffer((FSystemTextures *)&GSystemTextures,param_1,4);
    local_128._padding_._0_1_ = 0;
    local_128._padding_._4_4_ = 0;
    local_128._padding_._0_4_ = 0xffffffff;
    local_128._padding_ = 0;
    if ((((local_128.Buffer)->Desc).Usage & DrawIndirect) != None) {
      local_128._padding_._0_1_ = 0x1c;
    }
    pFVar7 = FRDGBuilder::CreateSRV(param_1,&local_128);
    this->PrimitiveStringKeysBufferSRV = pFVar7;
  }
  else {
    local_88.NumElements = uVar1;
    local_88.BytesPerElement = 4;
    local_88._12_4_ = uStack_15c;
    local_88.Usage = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
    local_88.Metadata = (FShaderParametersMetadata *)0x0;
    pFVar6 = FRDGBuilder::CreateBuffer
                       (param_1,&local_88,L"PCGSkinnedMeshSpawner_PrimitiveStringKeys",None);
    local_148._padding_._4_4_ = 0;
    local_148._padding_._0_4_ = 0xffffffff;
    local_148._padding_ = 0;
    local_148._padding_._0_1_ = 0;
    if (((pFVar6->Desc).Usage & DrawIndirect) != None) {
      local_148._padding_._0_1_ = 0x1c;
    }
    local_148.Buffer = pFVar6;
    pFVar7 = FRDGBuilder::CreateSRV(param_1,&local_148);
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
    local_e8.Buffer =
         FSystemTextures::GetDefaultStructuredBuffer
                   ((FSystemTextures *)&GSystemTextures,param_1,0x10);
    local_e8._padding_._0_1_ = 0;
    local_e8._padding_._4_4_ = 0;
    local_e8._padding_._0_4_ = 0xffffffff;
    local_e8._padding_ = 0;
    if ((((local_e8.Buffer)->Desc).Usage & DrawIndirect) != None) {
      local_e8._padding_._0_1_ = 0x1c;
    }
    pFVar7 = FRDGBuilder::CreateSRV(param_1,&local_e8);
    this->PrimitiveMeshBoundsMinBufferSRV = pFVar7;
  }
  else {
    local_70.NumElements = uVar1;
    local_70.BytesPerElement = 0x10;
    local_70._12_4_ = uStack_15c;
    local_70.Usage = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
    local_70.Metadata = (FShaderParametersMetadata *)0x0;
    pFVar6 = FRDGBuilder::CreateBuffer
                       (param_1,&local_70,L"PCGSkinnedMeshSpawner_PrimitiveMeshBoundsMin",None);
    local_108._padding_._4_4_ = 0;
    local_108._padding_._0_4_ = 0xffffffff;
    local_108._padding_._0_1_ = 0;
    local_108._padding_ = 0;
    if (((pFVar6->Desc).Usage & DrawIndirect) != None) {
      local_108._padding_._0_1_ = 0x1c;
    }
    local_108.Buffer = pFVar6;
    pFVar7 = FRDGBuilder::CreateSRV(param_1,&local_108);
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
    local_a8.Buffer =
         FSystemTextures::GetDefaultStructuredBuffer
                   ((FSystemTextures *)&GSystemTextures,param_1,0x10);
    local_a8._padding_._0_1_ = 0;
    local_a8._padding_._4_4_ = 0;
    local_a8._padding_._0_4_ = 0xffffffff;
    local_a8._padding_ = 0;
    if ((((local_a8.Buffer)->Desc).Usage & DrawIndirect) != None) {
      local_a8._padding_._0_1_ = 0x1c;
    }
    pFVar7 = FRDGBuilder::CreateSRV(param_1,&local_a8);
    this->PrimitiveMeshBoundsMaxBufferSRV = pFVar7;
  }
  else {
    local_58.NumElements = uVar1;
    local_58.BytesPerElement = 0x10;
    local_58._12_4_ = uStack_15c;
    local_58.Usage = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
    local_58.Metadata = (FShaderParametersMetadata *)0x0;
    pFVar6 = FRDGBuilder::CreateBuffer
                       (param_1,&local_58,L"PCGSkinnedMeshSpawner_PrimitiveMeshBoundsMax",None);
    local_c8._padding_._4_4_ = 0;
    local_c8._padding_._0_4_ = 0xffffffff;
    local_c8._padding_._0_1_ = 0;
    local_c8._padding_ = 0;
    if (((pFVar6->Desc).Usage & DrawIndirect) != None) {
      local_c8._padding_._0_1_ = 0x1c;
    }
    local_c8.Buffer = pFVar6;
    pFVar7 = FRDGBuilder::CreateSRV(param_1,&local_c8);
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
  FMemScope::~FMemScope(&local_150);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// GatherDispatchData @ 149752510

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FPCGSkinnedMeshSpawnerDataProviderProxy::GatherDispatchData
          (FPCGSkinnedMeshSpawnerDataProviderProxy *this,FDispatchData *param_1)

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
  int iVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  
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
  iVar11 = 0;
  if (0 < iVar3) {
    puVar15 = (uint *)(puVar5 + (longlong)iVar2 + 0x82c);
    do {
      if ((iVar11 < 0) &&
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
      puVar15[-3] = (this->AttributeIdOffsetStrides).ArrayNum;
      puVar15[-2] = (this->SelectionCDF).ArrayNum;
      puVar15[-1] = this->SelectorAttributeId;
      if (0 < (this->AttributeIdOffsetStrides).ArrayNum) {
        lVar12 = 0;
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
          pFVar1 = (this->AttributeIdOffsetStrides).AllocatorInstance.Data + lVar12;
          uVar7 = *(undefined8 *)(pFVar1 + 8);
          lVar12 = lVar12 + 0x10;
          *(undefined8 *)(puVar15 + uVar9 * 4 + -0x20b) = *(undefined8 *)pFVar1;
          *(undefined8 *)(puVar15 + uVar9 * 4 + -0x20b + 2) = uVar7;
        } while ((int)uVar13 < (this->AttributeIdOffsetStrides).ArrayNum);
      }
      uVar9 = 0;
      *(FRDGBufferSRV **)(puVar15 + -0x10b) = this->PrimitiveStringKeysBufferSRV;
      if (0 < (this->SelectionCDF).ArrayNum) {
        lVar12 = 0;
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
          pFVar1 = (this->SelectionCDF).AllocatorInstance.Data + lVar12;
          lVar12 = lVar12 + 4;
          puVar15[(uVar10 + 0x42) * 4 + ((ulonglong)(uVar14 & 3) - 0x20b)] = *(uint *)pFVar1;
        } while ((int)(uVar14 + 1) < (this->SelectionCDF).ArrayNum);
      }
      iVar11 = iVar11 + 1;
      *puVar15 = (uint)((this->PrimitiveMeshBoundsMin).ArrayNum != 0);
      *(FRDGBufferSRV **)(puVar15 + -0x109) = this->PrimitiveMeshBoundsMinBufferSRV;
      *(FRDGBufferSRV **)(puVar15 + -0x107) = this->PrimitiveMeshBoundsMaxBufferSRV;
      puVar15 = (uint *)((longlong)puVar15 + (longlong)iVar4);
    } while (iVar11 < iVar3);
  }
  return;
}

// IsValid @ 14976c1b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __thiscall
FPCGSkinnedMeshSpawnerDataProviderProxy::IsValid
          (FPCGSkinnedMeshSpawnerDataProviderProxy *this,FValidationData *param_1)

{
  return param_1->ParameterStructSize == 0x830;
}

