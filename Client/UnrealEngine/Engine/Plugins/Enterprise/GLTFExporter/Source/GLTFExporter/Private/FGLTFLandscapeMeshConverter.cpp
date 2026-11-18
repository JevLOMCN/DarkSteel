// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 2

// Convert @ 14e5e6e70

FGLTFJsonMesh * __thiscall
FGLTFLandscapeMeshConverter::Convert
          (FGLTFLandscapeMeshConverter *this,ULandscapeComponent *param_1,
          UMaterialInterface *param_2)

{
  FGLTFTaskBuilder *this_00;
  int iVar1;
  FGLTFJsonMesh *pFVar2;
  undefined8 *local_res8;
  
  pFVar2 = FGLTFJsonBuilder::AddMesh(*(FGLTFJsonBuilder **)&this->field_0x58);
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x98,8,1,&(pFVar2->Primitives).AllocatorInstance,&(pFVar2->Primitives).ArrayNum
                     ,&(pFVar2->Primitives).ArrayMax);
  DefaultConstructItems<FGLTFJsonPrimitive,int>
            ((pFVar2->Primitives).AllocatorInstance.Data + (longlong)iVar1 * 0x98,1);
  if ((param_1 != (ULandscapeComponent *)0x0) && (param_2 != (UMaterialInterface *)0x0)) {
    this_00 = *(FGLTFTaskBuilder **)&this->field_0x58;
    local_res8 = ::operator_new(0x30);
    if (local_res8 != (undefined8 *)0x0) {
      *(undefined1 *)(local_res8 + 1) = 1;
      *local_res8 = &___7FGLTFDelayedLandscapeTask__6B_;
      local_res8[2] = this_00;
      local_res8[3] = param_1;
      local_res8[4] = pFVar2;
      local_res8[5] = param_2;
    }
    FGLTFTaskBuilder::ScheduleSlowTask(this_00,(FGLTFDelayedTask *)&local_res8);
  }
  return pFVar2;
}

// Sanitize @ 14e612780

void __thiscall
FGLTFLandscapeMeshConverter::Sanitize
          (FGLTFLandscapeMeshConverter *this,ULandscapeComponent **param_1,
          UMaterialInterface **param_2)

{
  UMaterialInterface *pUVar1;
  
  pUVar1 = ULandscapeComponent::GetLandscapeMaterial(*param_1,-1);
  *param_2 = pUVar1;
  if (pUVar1 == (UMaterialInterface *)0x0) {
    pUVar1 = FGLTFMeshUtilities::GetDefaultMaterial();
    *param_2 = pUVar1;
  }
  UGLTFMaterialExportOptions::ResolveProxy(pUVar1);
  return;
}

