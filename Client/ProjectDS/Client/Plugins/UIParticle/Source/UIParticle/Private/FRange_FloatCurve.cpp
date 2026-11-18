// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UIParticle
// Functions: 5

// StaticStruct @ 14ac8d070

UScriptStruct * __cdecl FRange_FloatCurve::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRange_FloatCurve.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_UIParticle();
    Z_Registration_Info_UScriptStruct_FRange_FloatCurve.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRange_FloatCurve,(UObject *)pUVar1,
                         L"Range_FloatCurve");
  }
  return Z_Registration_Info_UScriptStruct_FRange_FloatCurve.OuterSingleton;
}

// FRange_FloatCurve @ 14ac8f0d0

FRange_FloatCurve * __thiscall FRange_FloatCurve::FRange_FloatCurve(FRange_FloatCurve *this)

{
  (this->Min).CurveData._padding_ = 0;
  (this->Min).CurveData._padding_ = 0;
  (this->Min).CurveData._padding_ = 0;
  *(undefined4 *)&(this->Min).CurveData._padding_ = 0;
  *(undefined4 *)((longlong)&(this->Min).CurveData._padding_ + 4) = 0x80;
  *(undefined4 *)&(this->Min).CurveData._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&(this->Min).CurveData._padding_ + 4) = 0;
  (this->Min).CurveData._padding_ = 0;
  *(undefined4 *)&(this->Min).CurveData._padding_ = 0;
  (this->Min).CurveData._padding_ = 0;
  (this->Min).CurveData._padding_ = 0;
  (this->Min).CurveData._padding_ = (longlong)&___7FRichCurve__6B_;
  *(undefined4 *)&(this->Min).CurveData._padding_ = 0x7f7fffff;
  *(undefined2 *)((longlong)&(this->Min).CurveData._padding_ + 4) = 0x404;
  (this->Min).CurveData.Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Min).CurveData.Keys.ArrayNum = 0;
  (this->Min).CurveData.Keys.ArrayMax = 0;
  (this->Min).CurveType = ParticleLifePercent;
  (this->Min).Loop = false;
  (this->Max).CurveData._padding_ = 0;
  (this->Max).CurveData._padding_ = 0;
  (this->Max).CurveData._padding_ = 0;
  *(undefined4 *)&(this->Max).CurveData._padding_ = 0;
  *(undefined4 *)((longlong)&(this->Max).CurveData._padding_ + 4) = 0x80;
  *(undefined4 *)&(this->Max).CurveData._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&(this->Max).CurveData._padding_ + 4) = 0;
  (this->Max).CurveData._padding_ = 0;
  *(undefined4 *)&(this->Max).CurveData._padding_ = 0;
  (this->Max).CurveData._padding_ = 0;
  (this->Max).CurveData._padding_ = 0;
  (this->Max).CurveData._padding_ = (longlong)&___7FRichCurve__6B_;
  *(undefined4 *)&(this->Max).CurveData._padding_ = 0x7f7fffff;
  *(undefined2 *)((longlong)&(this->Max).CurveData._padding_ + 4) = 0x404;
  (this->Max).CurveData.Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Max).CurveData.Keys.ArrayNum = 0;
  (this->Max).CurveData.Keys.ArrayMax = 0;
  (this->Max).CurveType = ParticleLifePercent;
  (this->Max).Loop = false;
  return this;
}

// ~FRange_FloatCurve @ 14ac90cd0

void __thiscall FRange_FloatCurve::~FRange_FloatCurve(FRange_FloatCurve *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->Max).CurveData.Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->Max).CurveData._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)(this->Max).CurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->Max).CurveData._padding_ = 0;
  pvVar2 = (void *)(this->Max).CurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->Max).CurveData._padding_);
  pFVar1 = (this->Min).CurveData.Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->Min).CurveData._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)(this->Min).CurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->Min).CurveData._padding_ = 0;
  pvVar2 = (void *)(this->Min).CurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->Min).CurveData._padding_);
  return;
}

// operator= @ 14ac912b0

FRange_FloatCurve * __thiscall
FRange_FloatCurve::operator=(FRange_FloatCurve *this,FRange_FloatCurve *param_1)

{
  FRichCurve::operator=((FRichCurve *)this,(FRichCurve *)param_1);
  (this->Min).CurveType = (param_1->Min).CurveType;
  (this->Min).Loop = (param_1->Min).Loop;
  FRichCurve::operator=(&(this->Max).CurveData,&(param_1->Max).CurveData);
  (this->Max).CurveType = (param_1->Max).CurveType;
  (this->Max).Loop = (param_1->Max).Loop;
  return this;
}

// GetValue @ 14ac98d70

float __thiscall
FRange_FloatCurve::GetValue
          (FRange_FloatCurve *this,float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  
  fVar1 = FUIParticleFloatCurve::GetValue(&this->Min,param_1,param_2,param_3);
  fVar2 = FUIParticleFloatCurve::GetValue(&this->Max,param_1,param_2,param_3);
  return (fVar2 - fVar1) * param_4 + fVar1;
}

