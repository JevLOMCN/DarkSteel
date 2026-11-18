// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 3

// ~FRecordUpdateRayTracingGeometryListener @ 1459f9a50

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12RayTracingShaderBindingTableInternal::FRecordUpdateRayTracingGeometryListener::
~FRecordUpdateRayTracingGeometryListener(FRecordUpdateRayTracingGeometryListener *this)

{
  return;
}

// HitGroupParametersUpdated @ 145a1cc00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12RayTracingShaderBindingTableInternal::FRecordUpdateRayTracingGeometryListener::
HitGroupParametersUpdated
          (FRecordUpdateRayTracingGeometryListener *this,FD3D12RayTracingGeometry *param_1)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  undefined8 *puVar3;
  FD3D12HitGroupSystemParameters_u_16 *pFVar4;
  uint uVar5;
  int iVar6;
  FD3D12RayTracingGeometry *pFVar7;
  FScriptContainerElement *pFVar8;
  FD3D12RayTracingShaderBindingTableInternal *pFVar9;
  code *pcVar10;
  bool bVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  FD3D12HitGroupSystemParameters local_38;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  if (param_1 != this->Geometry) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("InGeometry == Geometry",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                        ,0x79c,L"");
    if (bVar11) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  uVar16 = this->SegmentIndex;
  uVar5 = *(uint *)&this->ShaderTable->Device->field_0x8;
  pFVar7 = this->Geometry;
  iVar6 = pFVar7->HitGroupSystemParameters[uVar5].ArrayNum;
  uVar12 = 0;
  if ((int)uVar16 < iVar6) {
    uVar12 = ~uVar16 >> 0x1f;
  }
  if (uVar12 == 0) {
    local_48 = (longlong)(int)uVar16;
    local_40 = (longlong)iVar6;
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar8 = pFVar7->HitGroupSystemParameters[uVar5].AllocatorInstance.Data;
  uVar5 = this->RecordIndex;
  lVar13 = (longlong)(int)uVar16 * 0x20;
  pFVar2 = pFVar8 + lVar13;
  local_38.RootConstants._0_8_ = *(undefined8 *)pFVar2;
  pFVar4 = (FD3D12HitGroupSystemParameters_u_16 *)(pFVar8 + lVar13 + 0x10);
  local_38.field1_0x10 = *pFVar4;
  local_38.VertexBuffer = *(ulong64 *)(pFVar4 + 1);
  pFVar9 = this->ShaderTable;
  local_38.RootConstants.FirstPrimitive = (uint)*(undefined8 *)(pFVar2 + 8);
  local_38.RootConstants.UserData = this->UserData;
  uVar16 = 0xffffffff;
  if (uVar5 % pFVar9->NumShaderSlotsPerGeometrySegment == 0) {
    uVar16 = uVar5 / pFVar9->NumShaderSlotsPerGeometrySegment;
  }
  if ((pFVar9->ShaderBindingMode & RTPSO) != Disabled) {
    plVar1 = &(pFVar9->Data)._padding_;
    uVar14 = *plVar1;
    uVar15 = (ulonglong)
             (pFVar9->HitGroupShaderTableOffset + 0x20 + uVar5 * pFVar9->LocalRecordStride);
    if ((uVar14 & 1) != 0) {
      uVar14 = ((longlong)uVar14 >> 0x18) + (longlong)plVar1;
    }
    puVar3 = (undefined8 *)(uVar15 + uVar14);
    *puVar3 = local_38.RootConstants._0_8_;
    puVar3[1] = local_38.RootConstants._8_8_;
    pFVar4 = (FD3D12HitGroupSystemParameters_u_16 *)(uVar15 + 0x10 + uVar14);
    *pFVar4 = local_38.field1_0x10;
    pFVar4[1] = (FD3D12HitGroupSystemParameters_u_16)local_38.VertexBuffer;
  }
  if (((this->ShaderTable->ShaderBindingMode & Inline) != Disabled) && (uVar16 != 0xffffffff)) {
    SetInlineGeometryParameters(this->ShaderTable,uVar16,&local_38);
  }
  return;
}

// RemoveListener @ 145a2d990

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12RayTracingShaderBindingTableInternal::FRecordUpdateRayTracingGeometryListener::RemoveListener
          (FRecordUpdateRayTracingGeometryListener *this,FD3D12RayTracingGeometry *param_1)

{
  uint uVar1;
  FD3D12RayTracingShaderBindingTableInternal *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  
  if (this->Geometry != param_1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Geometry == InGeometry",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                       ,0x796,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uVar1 = this->RecordIndex;
  pFVar2 = this->ShaderTable;
  uVar6 = 0;
  if ((int)uVar1 < (pFVar2->HitRecordData).ArrayNum) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar3 = (pFVar2->HitRecordData).AllocatorInstance.Data;
  if (((FRecordUpdateRayTracingGeometryListener *)(pFVar3 + (longlong)(int)uVar1 * 0x78 + 0x18) !=
       this) || (*(longlong *)(pFVar3 + (longlong)(int)uVar1 * 0x78 + 0x28) == 0)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("&RecordData.UpdateGeometryListener == Listener && RecordData.UpdateGeometryListener.Geometry != nullptr"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                       ,0x9bb,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  *(longlong *)(pFVar3 + (longlong)(int)uVar1 * 0x78 + 0x28) = 0;
  *(undefined8 *)(pFVar3 + (longlong)(int)uVar1 * 0x78 + 0x20) = 0;
  *(undefined8 *)(pFVar3 + (longlong)(int)uVar1 * 0x78 + 0x30) = 0;
  *(undefined4 *)(pFVar3 + (longlong)(int)uVar1 * 0x78 + 0x38) = 0;
  return;
}

