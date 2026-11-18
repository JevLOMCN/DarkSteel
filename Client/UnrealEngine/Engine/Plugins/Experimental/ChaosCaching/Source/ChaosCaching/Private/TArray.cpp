// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCaching
// Functions: 3

// CopyToEmpty<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int> @ 14dade170

void __thiscall
TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>::
CopyToEmpty<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int>
          (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *this
          ,TPBDRigidParticleHandleImp<double,3,1> **param_1,int param_2,int param_3)

{
  this->ArrayNum = param_2;
  if ((param_2 == 0) && (param_3 == 0)) {
    this->ArrayMax = 0;
    return;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,param_2,param_3,&this->AllocatorInstance,param_2,&this->ArrayMax);
  if (param_2 != 0) {
    memcpy((this->AllocatorInstance).Data,param_1,(longlong)param_2 << 3);
  }
  return;
}

// AddDefaulted @ 14daeaf80

int __thiscall
TArray<FPendingParticleWrite,TSizedDefaultAllocator<32>_>::AddDefaulted
          (TArray<FPendingParticleWrite,TSizedDefaultAllocator<32>_> *this)

{
  int iVar1;
  
  iVar1 = this->ArrayNum;
  if (iVar1 == this->ArrayMax) {
    iVar1 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1090,&this->AllocatorInstance,&this->ArrayMax);
  }
  this->ArrayNum = iVar1 + 1;
  DefaultConstructItems<FPendingParticleWrite,int>
            ((this->AllocatorInstance).Data + (longlong)iVar1 * 0x90,1);
  return iVar1;
}

// RemoveAtImpl @ 14db03100

void __thiscall
TArray<FCompressedRichCurve,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FCompressedRichCurve,TSizedDefaultAllocator<32>_> *this,int param_1,int param_2)

{
  FCompressedRichCurve *_Dst;
  int iVar1;
  
  _Dst = (FCompressedRichCurve *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x18);
  DestructItems<FCompressedRichCurve,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x18);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

