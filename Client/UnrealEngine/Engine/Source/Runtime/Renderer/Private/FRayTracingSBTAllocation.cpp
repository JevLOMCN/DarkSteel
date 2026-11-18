// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 4

// GetRecordIndex @ 14538f3b0

uint __thiscall
FRayTracingSBTAllocation::GetRecordIndex
          (FRayTracingSBTAllocation *this,ERayTracingShaderBindingLayer param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ulonglong uVar4;
  ERayTracingShaderBindingLayerMask EVar5;
  
  EVar5 = 1 << (param_1 & 0x1f);
  if ((this->AllocatedLayers & EVar5) == None) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasLayer(Layer)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RayTracing\\RayTracingShaderBindingTable.cpp"
                       ,0x4f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  EVar5 = EVar5 - Base & this->AllocatedLayers;
  uVar4 = (ulonglong)EVar5 - ((ulonglong)(EVar5 >> 1) & 0x5555555555555555);
  uVar4 = (uVar4 >> 2 & 0x3333333333333333) + (uVar4 & 0x3333333333333333);
  uVar3 = (uint)(byte)(((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) *
          this->RecordsPerLayer;
  if ((ulonglong)this->NumRecords < (ulonglong)uVar3 + ((ulonglong)param_2 + 1) * 2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("RecordTypeBaseOffset + uint64(SegmentIndex) * 2 + 2 <= NumRecords",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RayTracing\\RayTracingShaderBindingTable.cpp"
                       ,0x58,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  return this->BaseRecordIndex + param_2 * 2 + uVar3;
}

// GetSegmentCount @ 14538fc50

int __thiscall FRayTracingSBTAllocation::GetSegmentCount(FRayTracingSBTAllocation *this)

{
  return this->NumRecords >> 1;
}

// GetUniqueId @ 14539ab70

int __thiscall FRayTracingSBTAllocation::GetUniqueId(FRayTracingSBTAllocation *this)

{
  return this->BaseRecordIndex;
}

// InitStatic @ 14539b4e0

void __thiscall
FRayTracingSBTAllocation::InitStatic
          (FRayTracingSBTAllocation *this,ERayTracingShaderBindingLayerMask param_1,uint param_2,
          uint param_3,uint param_4,FRHIRayTracingGeometry *param_5,
          FRayTracingCachedMeshCommandFlags *param_6)

{
  code *pcVar1;
  FRayTracingCachedMeshCommandFlags_u_8 FVar2;
  undefined4 uVar3;
  bool bVar4;
  
  if (param_1 == None) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InAllocatedLayers != ERayTracingShaderBindingLayerMask::None",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RayTracing\\RayTracingShaderBindingTable.h"
                       ,0x3d,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->NumRecords = param_4;
  this->Geometry = param_5;
  this->BaseRecordIndex = param_2;
  this->RecordsPerLayer = param_3;
  this->AllocatedLayers = param_1;
  FVar2 = param_6->field1_0x8;
  uVar3 = *(undefined4 *)&param_6->field_0xc;
  (this->Flags).CachedMeshCommandHash = param_6->CachedMeshCommandHash;
  (this->Flags).field1_0x8 = FVar2;
  *(undefined4 *)&(this->Flags).field_0xc = uVar3;
  return;
}

