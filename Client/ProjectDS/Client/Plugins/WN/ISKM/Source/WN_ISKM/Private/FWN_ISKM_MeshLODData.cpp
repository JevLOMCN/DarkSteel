// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_ISKM
// Functions: 3

// FillVertexFactory @ 14a848330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FWN_ISKM_MeshRenderData::FWN_ISKM_MeshLODData::FillVertexFactory
          (FWN_ISKM_MeshLODData *this,FRHICommandListBase *param_1,
          FSkeletalMeshLODRenderData *param_2)

{
  undefined1 auStack_138 [32];
  FWN_DataType local_118;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_138;
  local_118._padding_._4_4_ = 4;
  local_118._padding_ = 0;
  local_118._padding_ = 0;
  local_118._padding_ = 0;
  local_118._padding_ = 0;
  local_118._padding_ = 0;
  local_118._padding_ = 0;
  local_118._padding_._0_4_ = 0;
  local_118._padding_ = 0;
  local_118._padding_ = 0;
  local_118._padding_ = 0;
  local_118._padding_ = 0;
  local_118._padding_ = 0;
  local_118._padding_ = 0;
  local_118._padding_._0_4_ = 0xffffffff;
  local_118._padding_ = 0;
  local_118._padding_ = 0;
  local_118._padding_._4_2_ = 0xff;
  local_118._padding_._6_1_ = 0;
  local_118.BoneIndices.VertexBuffer = (FVertexBuffer *)0x0;
  local_118.BoneIndices.StreamOffset = 0;
  local_118.BoneIndices.Offset = '\0';
  local_118.BoneIndices.Stride = '\0';
  local_118.BoneIndices.Type.Value = '\0';
  local_118.BoneIndices.VertexStreamUsage = Default;
  local_118.BoneWeights.VertexBuffer = (FVertexBuffer *)0x0;
  local_118.BoneWeights.StreamOffset = 0;
  local_118.BoneWeights.Offset = '\0';
  local_118.BoneWeights.Stride = '\0';
  local_118.BoneWeights.Type.Value = '\0';
  local_118.BoneWeights.VertexStreamUsage = Default;
  FPositionVertexBuffer::BindPositionVertexBuffer
            (&(param_2->StaticVertexBuffers).PositionVertexBuffer,
             (FVertexFactory *)&this->VertexFactory,(FStaticMeshDataType *)&local_118);
  FStaticMeshVertexBuffer::BindTangentVertexBuffer
            (&(param_2->StaticVertexBuffers).StaticMeshVertexBuffer,
             (FVertexFactory *)&this->VertexFactory,(FStaticMeshDataType *)&local_118);
  FStaticMeshVertexBuffer::BindTexCoordVertexBuffer
            (&(param_2->StaticVertexBuffers).StaticMeshVertexBuffer,
             (FVertexFactory *)&this->VertexFactory,(FStaticMeshDataType *)&local_118,-1);
  FColorVertexBuffer::BindColorVertexBuffer
            (&(param_2->StaticVertexBuffers).ColorVertexBuffer,
             (FVertexFactory *)&this->VertexFactory,(FStaticMeshDataType *)&local_118);
  local_118.BoneIndices.StreamOffset = 0;
  local_118.BoneIndices.Offset = '\0';
  local_118.BoneIndices.Stride = '\b';
  local_118.BoneIndices.Type.Value = '\x06';
  local_118.BoneIndices.VertexStreamUsage = Default;
  local_118.BoneWeights.StreamOffset = 0;
  local_118.BoneWeights.Offset = '\x04';
  local_118.BoneWeights.Stride = '\b';
  local_118.BoneWeights.Type.Value = '\a';
  local_118.BoneWeights.VertexStreamUsage = Default;
  local_118.BoneIndices.VertexBuffer = (FVertexBuffer *)this;
  local_118.BoneWeights.VertexBuffer = (FVertexBuffer *)this;
  FWN_ISKM_VertexFactory::SetVertexElements(&this->VertexFactory,param_1,&local_118);
  return;
}

// InitResources @ 14a84fbb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FWN_ISKM_MeshRenderData::FWN_ISKM_MeshLODData::InitResources
          (FWN_ISKM_MeshLODData *this,FRHICommandListBase *param_1)

{
  (**(code **)((this->BoneWeightBuffer)._padding_ + 0x18))();
                    /* WARNING: Could not recover jumptable at 0x00014a84fbdb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((this->VertexFactory)._padding_ + 0x18))(&this->VertexFactory,param_1);
  return;
}

// ReleaseResources @ 14a8528f0

void __thiscall
FWN_ISKM_MeshRenderData::FWN_ISKM_MeshLODData::ReleaseResources(FWN_ISKM_MeshLODData *this)

{
  (**(code **)((this->VertexFactory)._padding_ + 0x20))(&this->VertexFactory);
                    /* WARNING: Could not recover jumptable at 0x00014a85290f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((this->BoneWeightBuffer)._padding_ + 0x20))(this);
  return;
}

