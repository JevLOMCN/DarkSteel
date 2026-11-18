// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_ISKM
// Functions: 7

// ~FWN_ISKM_BoneWeightsBuffer @ 14a83fb90

void __thiscall
FWN_ISKM_BoneWeightsBuffer::~FWN_ISKM_BoneWeightsBuffer(FWN_ISKM_BoneWeightsBuffer *this)

{
  FStaticMeshVertexDataInterface *pFVar1;
  
  this->_padding_ = (longlong)&___7FWN_ISKM_BoneWeightsBuffer__6B_;
  pFVar1 = this->DataInterface;
  if (pFVar1 != (FStaticMeshVertexDataInterface *)0x0) {
    (**(code **)*pFVar1)(pFVar1,1);
    this->DataInterface = (FStaticMeshVertexDataInterface *)0x0;
  }
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)this);
  return;
}

// DeallocBuffer @ 14a847260

void __thiscall FWN_ISKM_BoneWeightsBuffer::DeallocBuffer(FWN_ISKM_BoneWeightsBuffer *this)

{
  FStaticMeshVertexDataInterface *pFVar1;
  
  pFVar1 = this->DataInterface;
  if (pFVar1 != (FStaticMeshVertexDataInterface *)0x0) {
    (**(code **)*pFVar1)(pFVar1,1);
    this->DataInterface = (FStaticMeshVertexDataInterface *)0x0;
  }
  return;
}

// InitBuffer @ 14a84f420

void __thiscall
FWN_ISKM_BoneWeightsBuffer::InitBuffer
          (FWN_ISKM_BoneWeightsBuffer *this,
          TArray<FSkinWeightInfo,TSizedDefaultAllocator<32>_> *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  
  ReallocBuffer(this);
  uVar1 = param_1->ArrayNum;
  (**(code **)((longlong)*this->DataInterface + 8))(this->DataInterface,uVar1,0);
  lVar5 = (**(code **)((longlong)*this->DataInterface + 0x30))();
  uVar7 = 0;
  if (uVar1 != 0) {
    pFVar8 = (FScriptContainerElement *)(lVar5 + 1);
    do {
      uVar4 = 0;
      if ((int)uVar7 < param_1->ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar6 = (param_1->AllocatorInstance).Data + (longlong)(int)uVar7 * 0x30;
      if ((0xff < *(ushort *)pFVar6) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("weightInfo.InfluenceBones[i] <= 255",
                             "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_ISKM\\Source\\WN_ISKM\\Private\\WN_ISKM_RenderResources.cpp"
                             ,0x82,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar8[-1] = *pFVar6;
      pFVar8[3] = pFVar6[0x19];
      if ((0xff < *(ushort *)(pFVar6 + 2)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("weightInfo.InfluenceBones[i] <= 255",
                             "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_ISKM\\Source\\WN_ISKM\\Private\\WN_ISKM_RenderResources.cpp"
                             ,0x82,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *pFVar8 = pFVar6[2];
      pFVar8[4] = pFVar6[0x1b];
      if ((0xff < *(ushort *)(pFVar6 + 4)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("weightInfo.InfluenceBones[i] <= 255",
                             "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_ISKM\\Source\\WN_ISKM\\Private\\WN_ISKM_RenderResources.cpp"
                             ,0x82,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar8[1] = pFVar6[4];
      pFVar8[5] = pFVar6[0x1d];
      if ((0xff < *(ushort *)(pFVar6 + 6)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("weightInfo.InfluenceBones[i] <= 255",
                             "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_ISKM\\Source\\WN_ISKM\\Private\\WN_ISKM_RenderResources.cpp"
                             ,0x82,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar7 = uVar7 + 1;
      pFVar8[2] = pFVar6[6];
      pFVar8[6] = pFVar6[0x1f];
      pFVar8 = pFVar8 + 8;
    } while (uVar7 < uVar1);
  }
  return;
}

// InitRHI @ 14a84f7a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FWN_ISKM_BoneWeightsBuffer::InitRHI(FWN_ISKM_BoneWeightsBuffer *this,FRHICommandListBase *param_1)

{
  longlong *plVar1;
  FRHIResource *this_00;
  FStaticMeshVertexDataInterface *pFVar2;
  TRefCountPtr<FRHIBuffer> TVar3;
  FRHIResource *local_res8;
  
  (**(code **)((longlong)*this->DataInterface + 0x28))();
  RHIGetDefaultResourceState(VertexBuffer|Static,false);
  (**(code **)((longlong)*this->DataInterface + 0x38))();
  TVar3 = FRHICommandListBase::CreateBuffer(param_1,(FRHIBufferCreateDesc *)&local_res8);
  plVar1 = &this->_padding_;
  if ((FRHIBuffer *)plVar1 != TVar3.Reference) {
    this_00 = (FRHIResource *)*plVar1;
    *plVar1 = (TVar3.Reference)->_padding_;
    (TVar3.Reference)->_padding_ = 0;
    if (this_00 != (FRHIResource *)0x0) {
      FRHIResource::Release(this_00);
    }
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  pFVar2 = this->DataInterface;
  if (pFVar2 != (FStaticMeshVertexDataInterface *)0x0) {
    (**(code **)*pFVar2)(pFVar2,1);
    this->DataInterface = (FStaticMeshVertexDataInterface *)0x0;
  }
  return;
}

// ReallocBuffer @ 14a850c40

void __thiscall FWN_ISKM_BoneWeightsBuffer::ReallocBuffer(FWN_ISKM_BoneWeightsBuffer *this)

{
  FStaticMeshVertexDataInterface *pFVar1;
  
  pFVar1 = this->DataInterface;
  if (pFVar1 != (FStaticMeshVertexDataInterface *)0x0) {
    (**(code **)*pFVar1)(pFVar1,1);
    this->DataInterface = (FStaticMeshVertexDataInterface *)0x0;
  }
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStaticMeshVertexDataInterface *)0x0) {
    pFVar1[2] = (FStaticMeshVertexDataInterface)0x0;
    *pFVar1 = (FStaticMeshVertexDataInterface)
              &___7__TStaticMeshVertexData_UFWN_BoneWeights_FWN_ISKM_BoneWeightsBuffer____6B_;
    pFVar1[1] = (FStaticMeshVertexDataInterface)
                &___7__TResourceArray_UFWN_BoneWeights_FWN_ISKM_BoneWeightsBuffer___0A___6B_;
    pFVar1[3] = (FStaticMeshVertexDataInterface)0x0;
    *(undefined1 *)(pFVar1 + 4) = 0;
    this->DataInterface = pFVar1;
    return;
  }
  this->DataInterface = (FStaticMeshVertexDataInterface *)0x0;
  return;
}

// ReleaseRHI @ 14a852790

void __thiscall FWN_ISKM_BoneWeightsBuffer::ReleaseRHI(FWN_ISKM_BoneWeightsBuffer *this)

{
  FRHIResource *this_00;
  
  this_00 = (FRHIResource *)this->_padding_;
  if (this_00 != (FRHIResource *)0x0) {
    this->_padding_ = 0;
    FRHIResource::Release(this_00);
    return;
  }
  return;
}

// Serialize @ 14a853ad0

void __thiscall
FWN_ISKM_BoneWeightsBuffer::Serialize(FWN_ISKM_BoneWeightsBuffer *this,FArchive *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  ulonglong *puVar3;
  FStaticMeshVertexDataInterface *pFVar4;
  bool bVar5;
  uint local_res8 [2];
  
  bVar5 = this->DataInterface != (FStaticMeshVertexDataInterface *)0x0;
  puVar3 = *(ulonglong **)&param_1->field_0x8;
  puVar1 = &param_1->field_0x28;
  piVar2 = (int *)*puVar3 + 1;
  if ((int *)puVar3[1] < piVar2) {
    local_res8[0] = 0;
    if ((*puVar1 & 1) == 0) {
      local_res8[0] = (uint)(this->DataInterface != (FStaticMeshVertexDataInterface *)0x0);
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    if ((*puVar1 & 1) != 0) {
      bVar5 = local_res8[0] != 0;
    }
  }
  else {
    bVar5 = *(int *)*puVar3 != 0;
    *puVar3 = (ulonglong)piVar2;
  }
  if ((*puVar1 & 4) == 0) {
    if (!bVar5) {
      return;
    }
    ReallocBuffer(this);
    pFVar4 = this->DataInterface;
  }
  else {
    pFVar4 = this->DataInterface;
    if (pFVar4 == (FStaticMeshVertexDataInterface *)0x0) {
      return;
    }
  }
  (**(code **)((longlong)*pFVar4 + 0x40))(pFVar4,param_1,0);
  return;
}

