// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FractureEngine
// Functions: 2

// TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_><UE::Math::TTransform<double>_const_,int> @ 14e801910

TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::
TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_><UE::Math::TTransform<double>_const_,int>
          (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *this,
          TArrayView<UE::Math::TTransform<double>_const_,int> *param_1)

{
  int iVar1;
  TTransform<double> *_Src;
  
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = param_1->ArrayNum;
  _Src = param_1->DataPtr;
  this->ArrayNum = iVar1;
  if (iVar1 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x60,0x10,iVar1,0,&this->AllocatorInstance,iVar1,&this->ArrayMax);
  memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 * 0x60);
  return this;
}

// CopyToEmpty<Chaos::TCorePlane<float,3>,int> @ 14e8019a0

void __thiscall
TArray<Chaos::TCorePlane<float,3>,TSizedDefaultAllocator<32>_>::
CopyToEmpty<Chaos::TCorePlane<float,3>,int>
          (TArray<Chaos::TCorePlane<float,3>,TSizedDefaultAllocator<32>_> *this,
          TCorePlane<float,3> *param_1,int param_2,int param_3)

{
  this->ArrayNum = param_2;
  if ((param_2 == 0) && (param_3 == 0)) {
    this->ArrayMax = 0;
    return;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,4,param_2,param_3,&this->AllocatorInstance,param_2,&this->ArrayMax);
  if (param_2 != 0) {
    memcpy((this->AllocatorInstance).Data,param_1,(longlong)param_2 * 0x18);
  }
  return;
}

