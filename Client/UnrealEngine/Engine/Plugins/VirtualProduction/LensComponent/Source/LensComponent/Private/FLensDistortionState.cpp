// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LensComponent
// Functions: 1

// operator= @ 14d750510

FLensDistortionState * __thiscall
FLensDistortionState::operator=(FLensDistortionState *this,FLensDistortionState *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  double dVar4;
  
  if (this != param_1) {
    iVar2 = (this->DistortionInfo).Parameters.ArrayMax;
    piVar1 = &(this->DistortionInfo).Parameters.ArrayMax;
    _Src = (param_1->DistortionInfo).Parameters.AllocatorInstance.Data;
    iVar3 = (param_1->DistortionInfo).Parameters.ArrayNum;
    (this->DistortionInfo).Parameters.ArrayNum = iVar3;
    if ((iVar3 == 0) && (iVar2 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar3,iVar2,(ForAnyElementType *)this,iVar3,piVar1);
      if (iVar3 != 0) {
        memcpy((this->DistortionInfo).Parameters.AllocatorInstance.Data,_Src,(longlong)iVar3 << 2);
      }
    }
  }
  dVar4 = (param_1->FocalLengthInfo).FxFy.field0_0x0._s_0.Y;
  (this->FocalLengthInfo).FxFy.field0_0x0._s_0.X = (param_1->FocalLengthInfo).FxFy.field0_0x0._s_0.X
  ;
  (this->FocalLengthInfo).FxFy.field0_0x0._s_0.Y = dVar4;
  dVar4 = (param_1->ImageCenter).PrincipalPoint.field0_0x0._s_0.Y;
  (this->ImageCenter).PrincipalPoint.field0_0x0._s_0.X =
       (param_1->ImageCenter).PrincipalPoint.field0_0x0._s_0.X;
  (this->ImageCenter).PrincipalPoint.field0_0x0._s_0.Y = dVar4;
  return this;
}

