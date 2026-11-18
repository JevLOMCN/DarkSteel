// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticStruct @ 147a0bb40

UScriptStruct * __cdecl FRuntimeVectorCurve::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRuntimeVectorCurve.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FRuntimeVectorCurve.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRuntimeVectorCurve,(UObject *)pUVar1,
                         L"RuntimeVectorCurve");
  }
  return Z_Registration_Info_UScriptStruct_FRuntimeVectorCurve.OuterSingleton;
}

// FRuntimeVectorCurve @ 147a26a80

FRuntimeVectorCurve * __thiscall FRuntimeVectorCurve::FRuntimeVectorCurve(FRuntimeVectorCurve *this)

{
  this->VectorCurves[0]._padding_ = 0;
  this->VectorCurves[0]._padding_ = 0;
  this->VectorCurves[0]._padding_ = 0;
  *(undefined4 *)&this->VectorCurves[0]._padding_ = 0;
  *(undefined4 *)((longlong)&this->VectorCurves[0]._padding_ + 4) = 0x80;
  *(undefined4 *)&this->VectorCurves[0]._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->VectorCurves[0]._padding_ + 4) = 0;
  this->VectorCurves[0]._padding_ = 0;
  *(undefined4 *)&this->VectorCurves[0]._padding_ = 0;
  this->VectorCurves[0]._padding_ = 0;
  this->VectorCurves[0]._padding_ = 0;
  this->VectorCurves[0]._padding_ = (longlong)&___7FRichCurve__6B_;
  *(undefined4 *)&this->VectorCurves[0]._padding_ = 0x7f7fffff;
  *(undefined2 *)((longlong)&this->VectorCurves[0]._padding_ + 4) = 0x404;
  this->VectorCurves[0].Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->VectorCurves[0].Keys.ArrayNum = 0;
  this->VectorCurves[0].Keys.ArrayMax = 0;
  this->VectorCurves[1]._padding_ = 0;
  this->VectorCurves[1]._padding_ = 0;
  this->VectorCurves[1]._padding_ = 0;
  *(undefined4 *)&this->VectorCurves[1]._padding_ = 0;
  *(undefined4 *)((longlong)&this->VectorCurves[1]._padding_ + 4) = 0x80;
  *(undefined4 *)&this->VectorCurves[1]._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->VectorCurves[1]._padding_ + 4) = 0;
  this->VectorCurves[1]._padding_ = 0;
  *(undefined4 *)&this->VectorCurves[1]._padding_ = 0;
  this->VectorCurves[1]._padding_ = 0;
  this->VectorCurves[1]._padding_ = 0;
  *(undefined4 *)&this->VectorCurves[1]._padding_ = 0x7f7fffff;
  *(undefined2 *)((longlong)&this->VectorCurves[1]._padding_ + 4) = 0x404;
  this->VectorCurves[1]._padding_ = (longlong)&___7FRichCurve__6B_;
  this->VectorCurves[1].Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->VectorCurves[1].Keys.ArrayNum = 0;
  this->VectorCurves[1].Keys.ArrayMax = 0;
  this->VectorCurves[2]._padding_ = 0;
  this->VectorCurves[2]._padding_ = 0;
  this->VectorCurves[2]._padding_ = 0;
  *(undefined4 *)&this->VectorCurves[2]._padding_ = 0;
  *(undefined4 *)((longlong)&this->VectorCurves[2]._padding_ + 4) = 0x80;
  *(undefined4 *)&this->VectorCurves[2]._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->VectorCurves[2]._padding_ + 4) = 0;
  this->VectorCurves[2]._padding_ = 0;
  *(undefined4 *)&this->VectorCurves[2]._padding_ = 0;
  this->VectorCurves[2]._padding_ = 0;
  this->VectorCurves[2]._padding_ = 0;
  *(undefined4 *)&this->VectorCurves[2]._padding_ = 0x7f7fffff;
  *(undefined2 *)((longlong)&this->VectorCurves[2]._padding_ + 4) = 0x404;
  this->VectorCurves[2]._padding_ = (longlong)&___7FRichCurve__6B_;
  this->VectorCurves[2].Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->VectorCurves[2].Keys.ArrayNum = 0;
  this->VectorCurves[2].Keys.ArrayMax = 0;
  (this->ExternalCurve).field0_0x0.DebugPtr = (UCurveVector *)0x0;
  return this;
}

// ~FRuntimeVectorCurve @ 147a29d20

void __thiscall FRuntimeVectorCurve::~FRuntimeVectorCurve(FRuntimeVectorCurve *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = this->VectorCurves[2].Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->VectorCurves[2]._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)this->VectorCurves[2]._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&this->VectorCurves[2]._padding_ = 0;
  pvVar2 = (void *)this->VectorCurves[2]._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->VectorCurves[2]._padding_);
  pFVar1 = this->VectorCurves[1].Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->VectorCurves[1]._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)this->VectorCurves[1]._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&this->VectorCurves[1]._padding_ = 0;
  pvVar2 = (void *)this->VectorCurves[1]._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->VectorCurves[1]._padding_);
  pFVar1 = this->VectorCurves[0].Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->VectorCurves[0]._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)this->VectorCurves[0]._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&this->VectorCurves[0]._padding_ = 0;
  pvVar2 = (void *)this->VectorCurves[0]._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->VectorCurves[0]._padding_);
  return;
}

// GetRichCurve @ 147a57b10

FRichCurve * __thiscall FRuntimeVectorCurve::GetRichCurve(FRuntimeVectorCurve *this,int param_1)

{
  UCurveVector *pUVar1;
  
  if (2 < (uint)param_1) {
    return (FRichCurve *)0x0;
  }
  pUVar1 = (this->ExternalCurve).field0_0x0.DebugPtr;
  if (pUVar1 != (UCurveVector *)0x0) {
    return pUVar1->FloatCurves + param_1;
  }
  return this->VectorCurves + param_1;
}

// GetRichCurveConst @ 147a57b60

FRichCurve * __thiscall
FRuntimeVectorCurve::GetRichCurveConst(FRuntimeVectorCurve *this,int param_1)

{
  UCurveVector *pUVar1;
  
  if (2 < (uint)param_1) {
    return (FRichCurve *)0x0;
  }
  pUVar1 = (this->ExternalCurve).field0_0x0.DebugPtr;
  if (pUVar1 != (UCurveVector *)0x0) {
    return pUVar1->FloatCurves + param_1;
  }
  return this->VectorCurves + param_1;
}

// GetValue @ 147a5b610

TVector<double> * __thiscall
FRuntimeVectorCurve::GetValue
          (FRuntimeVectorCurve *this,TVector<double> *__return_storage_ptr__,float param_1)

{
  UCurveVector *this_00;
  float fVar1;
  float fVar2;
  float fVar3;
  
  this_00 = (this->ExternalCurve).field0_0x0.DebugPtr;
  if (this_00 == (UCurveVector *)0x0) {
    fVar1 = FRichCurve::Eval(this->VectorCurves,param_1,0.0);
    fVar2 = FRichCurve::Eval(this->VectorCurves + 1,param_1,0.0);
    fVar3 = FRichCurve::Eval(this->VectorCurves + 2,param_1,0.0);
    (__return_storage_ptr__->field0_0x0)._s_0.X = (double)fVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar2;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)fVar3;
  }
  else {
    UCurveVector::GetVectorValue(this_00,__return_storage_ptr__,param_1);
  }
  return __return_storage_ptr__;
}

