// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StaticMeshDescription
// Functions: 1

// operator<FTriangleID,FVertexInfo>_TTuple<FTriangleID,FVertexInfo> @ 14435fbf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<FTriangleID,FVertexInfo> * __thiscall
TKeyInitializer<FTriangleID_const_&>::
operator<FTriangleID,FVertexInfo>_TTuple<FTriangleID,FVertexInfo>
          (TKeyInitializer<FTriangleID_const_&> *this,
          TTuple<FTriangleID,FVertexInfo> *__return_storage_ptr__)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  FVertexInfo local_40;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_40.EdgeIDs.ArrayMax = 2;
  local_40.TriangleID = (FTriangleID)0xffffffff;
  local_40.VertexInstanceID = (FVertexInstanceID)0xffffffff;
  local_40.EdgeIDs.AllocatorInstance.SecondaryData = (ForElementType<FEdgeID>)0x0;
  local_40.EdgeIDs.ArrayNum = 0;
  local_48 = 0;
  local_40.UVs.field0_0x0 = (TVector2<float>_u_0)0x0;
  *(FTriangleID *)__return_storage_ptr__ = *this->Key;
  FVertexInfo::FVertexInfo((FVertexInfo *)&__return_storage_ptr__->field_0x8,&local_40);
  if (local_40.EdgeIDs.AllocatorInstance.SecondaryData != (ForElementType<FEdgeID>)0x0) {
    FMemory::Free((void *)local_40.EdgeIDs.AllocatorInstance.SecondaryData);
  }
  return __return_storage_ptr__;
}

