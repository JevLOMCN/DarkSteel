// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// Invalidate @ 147e6dac0

void __thiscall
FPrecomputedVolumeDistanceField::Invalidate
          (FPrecomputedVolumeDistanceField *this,FSceneInterface *param_1)

{
  int *piVar1;
  
  if ((param_1 != (FSceneInterface *)0x0) && (0 < (this->Data).ArrayNum)) {
    (**(code **)(param_1->_padding_ + 0x278))(param_1,0);
    FlushRenderingCommands();
    piVar1 = &(this->Data).ArrayMax;
    (this->Data).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&(this->Data).AllocatorInstance,0,piVar1);
    }
  }
  return;
}

// UpdateScene @ 147e843d0

void __thiscall
FPrecomputedVolumeDistanceField::UpdateScene
          (FPrecomputedVolumeDistanceField *this,FSceneInterface *param_1)

{
  if ((param_1 != (FSceneInterface *)0x0) && (0 < (this->Data).ArrayNum)) {
                    /* WARNING: Could not recover jumptable at 0x000147e843e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1->_padding_ + 0x278))(param_1,this);
    return;
  }
  return;
}

