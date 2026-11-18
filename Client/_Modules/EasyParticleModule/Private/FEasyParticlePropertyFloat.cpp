// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EasyParticleModule
// Functions: 7

// ~FEasyParticlePropertyFloat @ 14acaa2a0

void __thiscall
FEasyParticlePropertyFloat::~FEasyParticlePropertyFloat(FEasyParticlePropertyFloat *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->FloatCurveRangeValue).Max.CurveData.Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->FloatCurveRangeValue).Max.CurveData._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)(this->FloatCurveRangeValue).Max.CurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->FloatCurveRangeValue).Max.CurveData._padding_ = 0;
  pvVar2 = (void *)(this->FloatCurveRangeValue).Max.CurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->FloatCurveRangeValue).Max.CurveData._padding_);
  pFVar1 = (this->FloatCurveRangeValue).Min.CurveData.Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->FloatCurveRangeValue).Min.CurveData._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)(this->FloatCurveRangeValue).Min.CurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->FloatCurveRangeValue).Min.CurveData._padding_ = 0;
  pvVar2 = (void *)(this->FloatCurveRangeValue).Min.CurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->FloatCurveRangeValue).Min.CurveData._padding_);
  pFVar1 = (this->FloatCurveValue).CurveData.Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->FloatCurveValue).CurveData._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)(this->FloatCurveValue).CurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->FloatCurveValue).CurveData._padding_ = 0;
  pvVar2 = (void *)(this->FloatCurveValue).CurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->FloatCurveValue).CurveData._padding_);
  return;
}

// StaticStruct @ 14acb1570

UScriptStruct * __cdecl FEasyParticlePropertyFloat::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FEasyParticlePropertyFloat.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_EasyParticleModule();
    Z_Registration_Info_UScriptStruct_FEasyParticlePropertyFloat.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FEasyParticlePropertyFloat,(UObject *)pUVar1,
                         L"EasyParticlePropertyFloat");
  }
  return Z_Registration_Info_UScriptStruct_FEasyParticlePropertyFloat.OuterSingleton;
}

// FEasyParticlePropertyFloat @ 14acc0260

FEasyParticlePropertyFloat * __thiscall
FEasyParticlePropertyFloat::FEasyParticlePropertyFloat(FEasyParticlePropertyFloat *this)

{
  FUIParticleRange_FloatCurve *this_00;
  FEasyParticleFloatCurve *this_01;
  undefined1 in_R9B;
  float in_XMM1_Da;
  FKeyHandle local_res8 [4];
  uint in_stack_ffffffffffffffd8;
  FKeyHandle FVar1;
  
  this_00 = &this->FloatCurveRangeValue;
  this_01 = &(this->FloatCurveRangeValue).Max;
  (this->FloatCurveValue).CurveData._padding_ = 0;
  (this->FloatCurveValue).CurveData._padding_ = 0;
  (this->FloatCurveValue).CurveData._padding_ = 0;
  *(undefined4 *)&(this->FloatCurveValue).CurveData._padding_ = 0;
  *(undefined4 *)((longlong)&(this->FloatCurveValue).CurveData._padding_ + 4) = 0x80;
  *(undefined4 *)((longlong)&(this->FloatCurveValue).CurveData._padding_ + 4) = 0;
  *(undefined4 *)&(this->FloatCurveValue).CurveData._padding_ = 0xffffffff;
  (this->FloatCurveValue).CurveData._padding_ = 0;
  *(undefined4 *)&(this->FloatCurveValue).CurveData._padding_ = 0;
  (this->FloatCurveValue).CurveData._padding_ = 0;
  (this->FloatCurveValue).CurveData._padding_ = 0;
  (this->FloatCurveValue).CurveData.Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FloatCurveValue).CurveData.Keys.ArrayNum = 0;
  (this->FloatCurveValue).CurveData.Keys.ArrayMax = 0;
  *(undefined2 *)((longlong)&(this->FloatCurveValue).CurveData._padding_ + 4) = 0x404;
  (this->FloatCurveValue).CurveData._padding_ = (longlong)&___7FRichCurve__6B_;
  (this->FloatCurveValue).CurveType = LifetimePercent;
  (this->FloatCurveValue).Loop = false;
  (this->FloatCurveRangeValue).Min.CurveData._padding_ = 0;
  (this->FloatCurveRangeValue).Min.CurveData._padding_ = 0;
  (this->FloatCurveRangeValue).Min.CurveData._padding_ = 0;
  *(undefined4 *)&(this->FloatCurveRangeValue).Min.CurveData._padding_ = 0;
  *(undefined4 *)((longlong)&(this->FloatCurveRangeValue).Min.CurveData._padding_ + 4) = 0x80;
  *(undefined4 *)((longlong)&(this->FloatCurveRangeValue).Min.CurveData._padding_ + 4) = 0;
  *(undefined4 *)&(this->FloatCurveRangeValue).Min.CurveData._padding_ = 0xffffffff;
  (this->FloatCurveRangeValue).Min.CurveData._padding_ = 0;
  *(undefined4 *)&(this->FloatCurveRangeValue).Min.CurveData._padding_ = 0;
  (this->FloatCurveRangeValue).Min.CurveData._padding_ = 0;
  (this->FloatCurveRangeValue).Min.CurveData._padding_ = 0;
  (this->FloatCurveRangeValue).Min.CurveData.Keys.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FloatCurveRangeValue).Min.CurveData.Keys.ArrayNum = 0;
  (this->FloatCurveRangeValue).Min.CurveData.Keys.ArrayMax = 0;
  *(undefined4 *)&(this->FloatCurveRangeValue).Min.CurveData._padding_ = 0x7f7fffff;
  *(undefined2 *)((longlong)&(this->FloatCurveRangeValue).Min.CurveData._padding_ + 4) = 0x404;
  (this_00->Min).CurveData._padding_ = (longlong)&___7FRichCurve__6B_;
  (this->FloatCurveRangeValue).Min.CurveType = LifetimePercent;
  (this->FloatCurveRangeValue).Min.Loop = false;
  (this->FloatCurveRangeValue).Max.CurveData._padding_ = 0;
  (this->FloatCurveRangeValue).Max.CurveData._padding_ = 0;
  (this->FloatCurveRangeValue).Max.CurveData._padding_ = 0;
  *(undefined4 *)&(this->FloatCurveRangeValue).Max.CurveData._padding_ = 0;
  *(undefined4 *)((longlong)&(this->FloatCurveRangeValue).Max.CurveData._padding_ + 4) = 0x80;
  *(undefined4 *)((longlong)&(this->FloatCurveRangeValue).Max.CurveData._padding_ + 4) = 0;
  *(undefined4 *)&(this->FloatCurveRangeValue).Max.CurveData._padding_ = 0xffffffff;
  (this->FloatCurveRangeValue).Max.CurveData._padding_ = 0;
  *(undefined4 *)&(this->FloatCurveRangeValue).Max.CurveData._padding_ = 0;
  (this->FloatCurveRangeValue).Max.CurveData._padding_ = 0;
  (this->FloatCurveRangeValue).Max.CurveData._padding_ = 0;
  (this->FloatCurveRangeValue).Max.CurveData.Keys.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FloatCurveRangeValue).Max.CurveData.Keys.ArrayNum = 0;
  (this->FloatCurveRangeValue).Max.CurveData.Keys.ArrayMax = 0;
  *(undefined4 *)&(this->FloatCurveRangeValue).Max.CurveData._padding_ = 0x7f7fffff;
  *(undefined2 *)((longlong)&(this->FloatCurveRangeValue).Max.CurveData._padding_ + 4) = 0x404;
  (this_01->CurveData)._padding_ = (longlong)&___7FRichCurve__6B_;
  (this->FloatCurveRangeValue).Max.CurveType = LifetimePercent;
  (this->FloatCurveRangeValue).Max.Loop = false;
  this->Type = Float;
  this->FloatValue = 1.0;
  (this->FloatRangeValue).Min = 20.0;
  (this->FloatRangeValue).Max = 50.0;
  *(undefined4 *)&(this->FloatCurveValue).CurveData._padding_ = 0x41200000;
  FKeyHandle::FKeyHandle(local_res8);
  FVar1.Index = in_stack_ffffffffffffffd8 & 0xffffff00;
  FRichCurve::AddKey(&(this->FloatCurveValue).CurveData,in_XMM1_Da,0.0,(bool)in_R9B,FVar1);
  FKeyHandle::FKeyHandle(local_res8);
  FVar1.Index = FVar1.Index & 0xffffff00;
  FRichCurve::AddKey(&(this->FloatCurveValue).CurveData,in_XMM1_Da,__real_3f800000,(bool)in_R9B,
                     FVar1);
  *(undefined4 *)&(this->FloatCurveRangeValue).Min.CurveData._padding_ = 0x41200000;
  FKeyHandle::FKeyHandle(local_res8);
  FVar1.Index = FVar1.Index & 0xffffff00;
  FRichCurve::AddKey((FRichCurve *)this_00,in_XMM1_Da,0.0,(bool)in_R9B,FVar1);
  FKeyHandle::FKeyHandle(local_res8);
  FVar1.Index = FVar1.Index & 0xffffff00;
  FRichCurve::AddKey((FRichCurve *)this_00,in_XMM1_Da,__real_3f800000,(bool)in_R9B,FVar1);
  *(undefined4 *)&(this->FloatCurveRangeValue).Max.CurveData._padding_ = 0x41a00000;
  FKeyHandle::FKeyHandle(local_res8);
  FVar1.Index = FVar1.Index & 0xffffff00;
  FRichCurve::AddKey(&this_01->CurveData,in_XMM1_Da,0.0,(bool)in_R9B,FVar1);
  FKeyHandle::FKeyHandle(local_res8);
  FRichCurve::AddKey(&this_01->CurveData,in_XMM1_Da,__real_3f800000,(bool)in_R9B,
                     (FKeyHandle)(FVar1.Index & 0xffffff00));
  return this;
}

// GetValue_Float @ 14acc49c0

float __thiscall
FEasyParticlePropertyFloat::GetValue_Float
          (FEasyParticlePropertyFloat *this,FUIParticleFactorParam *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  EEasyParticlepertyFloat_Type EVar4;
  float fVar5;
  float fVar6;
  
  EVar4 = this->Type;
  if (EVar4 == Float) {
    return this->FloatValue;
  }
  if (EVar4 == FloatRange) {
    return ((this->FloatRangeValue).Max - (this->FloatRangeValue).Min) * param_1->Factor +
           (this->FloatRangeValue).Min;
  }
  if (EVar4 == FloatCurve) {
    fVar6 = FEasyParticleFloatCurve::GetValue
                      (&this->FloatCurveValue,param_1->LifetimePercent,param_1->Lifetime,
                       param_1->RootEmitterLifetime);
    return fVar6;
  }
  if (EVar4 == FloatCurveRange) {
    fVar6 = param_1->RootEmitterLifetime;
    fVar1 = param_1->Lifetime;
    fVar2 = param_1->LifetimePercent;
    fVar3 = param_1->Factor;
    fVar5 = FEasyParticleFloatCurve::GetValue(&(this->FloatCurveRangeValue).Min,fVar2,fVar1,fVar6);
    fVar6 = FEasyParticleFloatCurve::GetValue(&(this->FloatCurveRangeValue).Max,fVar2,fVar1,fVar6);
    return (fVar6 - fVar5) * fVar3 + fVar5;
  }
  return 0.0;
}

// Reset @ 14acc8260

void __thiscall FEasyParticlePropertyFloat::Reset(FEasyParticlePropertyFloat *this)

{
  this->Type = Float;
  this->FloatValue = 0.0;
  (this->FloatRangeValue).Min = 0.0;
  (this->FloatRangeValue).Max = 0.0;
  (this->FloatCurveValue).CurveType = EmitterLifetime;
  (this->FloatCurveValue).Loop = false;
  FRichCurve::Reset(&(this->FloatCurveValue).CurveData);
  *(undefined4 *)&(this->FloatCurveValue).CurveData._padding_ = 0;
  (this->FloatCurveRangeValue).Min.CurveType = EmitterLifetime;
  (this->FloatCurveRangeValue).Min.Loop = false;
  FRichCurve::Reset((FRichCurve *)&this->FloatCurveRangeValue);
  *(undefined4 *)&(this->FloatCurveRangeValue).Min.CurveData._padding_ = 0;
  (this->FloatCurveRangeValue).Max.CurveType = EmitterLifetime;
  (this->FloatCurveRangeValue).Max.Loop = false;
  FRichCurve::Reset(&(this->FloatCurveRangeValue).Max.CurveData);
  *(undefined4 *)&(this->FloatCurveRangeValue).Max.CurveData._padding_ = 0;
  return;
}

// SetCurveLoop @ 14acc8d40

void __thiscall
FEasyParticlePropertyFloat::SetCurveLoop(FEasyParticlePropertyFloat *this,bool param_1)

{
  (this->FloatCurveValue).Loop = param_1;
  (this->FloatCurveRangeValue).Min.Loop = param_1;
  (this->FloatCurveRangeValue).Max.Loop = param_1;
  return;
}

// SetCurveType @ 14acc8d60

void __thiscall
FEasyParticlePropertyFloat::SetCurveType
          (FEasyParticlePropertyFloat *this,EUIParticleCurveType param_1)

{
  (this->FloatCurveValue).CurveType = param_1;
  (this->FloatCurveRangeValue).Min.CurveType = param_1;
  (this->FloatCurveRangeValue).Max.CurveType = param_1;
  return;
}

