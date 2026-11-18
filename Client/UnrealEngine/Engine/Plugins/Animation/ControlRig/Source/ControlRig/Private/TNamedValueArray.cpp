// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 2

// operator= @ 14a227730

TNamedValueArray<TSizedDefaultAllocator<32>,FControlRigVariableMappings::FControlRigCurveMapping> *
__thiscall
UE::Anim::
TNamedValueArray<TSizedDefaultAllocator<32>,FControlRigVariableMappings::FControlRigCurveMapping>::
operator=(TNamedValueArray<TSizedDefaultAllocator<32>,FControlRigVariableMappings::FControlRigCurveMapping>
          *this,TNamedValueArray<TSizedDefaultAllocator<32>,FControlRigVariableMappings::FControlRigCurveMapping>
                *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    iVar2 = (this->Elements).ArrayMax;
    piVar1 = &(this->Elements).ArrayMax;
    _Src = (param_1->Elements).AllocatorInstance.Data;
    iVar3 = (param_1->Elements).ArrayNum;
    (this->Elements).ArrayNum = iVar3;
    if ((iVar3 == 0) && (iVar2 == 0)) {
      *piVar1 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,iVar3,iVar2,(ForAnyElementType *)this,iVar3,piVar1);
      if (iVar3 != 0) {
        memcpy((this->Elements).AllocatorInstance.Data,_Src,(longlong)iVar3 << 4);
      }
    }
  }
  this->bSorted = param_1->bSorted;
  return this;
}

// Add<FName_const_&,float_const_&> @ 14a388f10

void __thiscall
UE::Anim::TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement>::
Add<FName_const_&,float_const_&>
          (TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *this,FName *param_1,
          float *param_2)

{
  int *piVar1;
  FCurveElement *pFVar2;
  FName FVar3;
  int iVar4;
  
  iVar4 = (this->Elements).ArrayNum;
  piVar1 = &(this->Elements).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                      (0x410,(ForElementType<UE::Anim::FCurveElement> *)this,piVar1);
  }
  (this->Elements).ArrayNum = iVar4 + 1;
  pFVar2 = (this->Elements).AllocatorInstance.Data;
  FVar3 = *param_1;
  pFVar2[iVar4].Value = *param_2;
  pFVar2[iVar4].Name = FVar3;
  pFVar2[iVar4].Flags = None;
  this->bSorted = false;
  return;
}

