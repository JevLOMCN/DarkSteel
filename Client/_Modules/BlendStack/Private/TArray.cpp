// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BlendStack
// Functions: 2

// operator=<TSizedDefaultAllocator<32>_> @ 14a85f640

TArray<UE::Anim::FCurveElement,TMemStackAllocator<0>_> * __thiscall
TArray<UE::Anim::FCurveElement,TMemStackAllocator<0>_>::operator=<TSizedDefaultAllocator<32>_>
          (TArray<UE::Anim::FCurveElement,TMemStackAllocator<0>_> *this,
          TArray<UE::Anim::FCurveElement,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  _Src = (param_1->AllocatorInstance).Data;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::
  ReallocForCopy<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
            (0x10,4,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  if (iVar2 != 0) {
    memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 << 4);
  }
  return this;
}

// RemoveAtImpl @ 14a868800

void __thiscall
TArray<FBlendStackAnimPlayer,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FBlendStackAnimPlayer,TSizedDefaultAllocator<32>_> *this,int param_1,int param_2)

{
  int iVar1;
  FBlendStackAnimPlayer *_Dst;
  
  _Dst = (FBlendStackAnimPlayer *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x3a0);
  DestructItems<FBlendStackAnimPlayer,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x3a0);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

