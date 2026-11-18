// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 1

// FAreaExportData @ 146e35c80

FAreaExportData * __thiscall
`FRecastNavMeshGenerator::ExportNavigationData'::__l28::FAreaExportData::FAreaExportData
          (void *this,FAreaExportData *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  *(undefined8 *)this = 0;
  iVar1 = (param_1->Convex).Points.ArrayNum;
  _Src = (param_1->Convex).Points.AllocatorInstance.Data;
  *(int *)((longlong)this + 8) = iVar1;
  if (iVar1 == 0) {
    *(int *)((longlong)this + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar1,0,this,iVar1,(int *)((longlong)this + 0xc));
    memcpy(*(void **)this,_Src,(longlong)iVar1 * 0x18);
  }
  *(double *)((longlong)this + 0x10) = (param_1->Convex).MinZ;
  *(double *)((longlong)this + 0x18) = (param_1->Convex).MaxZ;
  *(uchar *)((longlong)this + 0x20) = param_1->AreaId;
  return this;
}

