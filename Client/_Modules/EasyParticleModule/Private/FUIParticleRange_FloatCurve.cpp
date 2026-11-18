// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EasyParticleModule
// Functions: 7

// StaticStruct @ 14acb13e0

UScriptStruct * __cdecl FUIParticleRange_FloatCurve::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FUIParticleRange_FloatCurve.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_EasyParticleModule();
    Z_Registration_Info_UScriptStruct_FUIParticleRange_FloatCurve.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FUIParticleRange_FloatCurve,(UObject *)pUVar1,
                         L"UIParticleRange_FloatCurve");
  }
  return Z_Registration_Info_UScriptStruct_FUIParticleRange_FloatCurve.OuterSingleton;
}

// FUIParticleRange_FloatCurve @ 14acb5c70

FUIParticleRange_FloatCurve * __thiscall
FUIParticleRange_FloatCurve::FUIParticleRange_FloatCurve(FUIParticleRange_FloatCurve *this)

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
  (this->Min).CurveType = LifetimePercent;
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
  (this->Max).CurveType = LifetimePercent;
  (this->Max).Loop = false;
  return this;
}

// ~FUIParticleRange_FloatCurve @ 14acb79b0

void __thiscall
FUIParticleRange_FloatCurve::~FUIParticleRange_FloatCurve(FUIParticleRange_FloatCurve *this)

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

// operator= @ 14acb8280

FUIParticleRange_FloatCurve * __thiscall
FUIParticleRange_FloatCurve::operator=
          (FUIParticleRange_FloatCurve *this,FUIParticleRange_FloatCurve *param_1)

{
  FRichCurve::operator=((FRichCurve *)this,(FRichCurve *)param_1);
  (this->Min).CurveType = (param_1->Min).CurveType;
  (this->Min).Loop = (param_1->Min).Loop;
  FRichCurve::operator=(&(this->Max).CurveData,&(param_1->Max).CurveData);
  (this->Max).CurveType = (param_1->Max).CurveType;
  (this->Max).Loop = (param_1->Max).Loop;
  return this;
}

// GetValue @ 14acc4470

float __thiscall
FUIParticleRange_FloatCurve::GetValue
          (FUIParticleRange_FloatCurve *this,FUIParticleFactorParam *param_1)

{
  float fVar1;
  
  fVar1 = GetValue(this,param_1->LifetimePercent,param_1->Lifetime,param_1->RootEmitterLifetime,
                   param_1->Factor);
  return fVar1;
}

// GetValue @ 14acc44a0

float __thiscall
FUIParticleRange_FloatCurve::GetValue
          (FUIParticleRange_FloatCurve *this,float param_1,float param_2,float param_3,float param_4
          )

{
  float fVar1;
  float fVar2;
  
  fVar1 = FEasyParticleFloatCurve::GetValue(&this->Min,param_1,param_2,param_3);
  fVar2 = FEasyParticleFloatCurve::GetValue(&this->Max,param_1,param_2,param_3);
  return (fVar2 - fVar1) * param_4 + fVar1;
}

// Reset @ 14acc8440

void __thiscall FUIParticleRange_FloatCurve::Reset(FUIParticleRange_FloatCurve *this)

{
  (this->Min).CurveType = EmitterLifetime;
  (this->Min).Loop = false;
  FRichCurve::Reset((FRichCurve *)this);
  *(undefined4 *)&(this->Min).CurveData._padding_ = 0;
  (this->Max).CurveType = EmitterLifetime;
  (this->Max).Loop = false;
  FRichCurve::Reset(&(this->Max).CurveData);
  *(undefined4 *)&(this->Max).CurveData._padding_ = 0;
  return;
}

