// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UIParticle
// Functions: 8

// StaticStruct @ 14ac8d2b0

UScriptStruct * __cdecl FUIParticleProperty::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FUIParticleProperty.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_UIParticle();
    Z_Registration_Info_UScriptStruct_FUIParticleProperty.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FUIParticleProperty,(UObject *)pUVar1,
                         L"UIParticleProperty");
  }
  return Z_Registration_Info_UScriptStruct_FUIParticleProperty.OuterSingleton;
}

// FUIParticleProperty @ 14ac8fa40

FUIParticleProperty * __thiscall FUIParticleProperty::FUIParticleProperty(FUIParticleProperty *this)

{
  float fVar1;
  float fVar2;
  TVector2<double> TVar3;
  FRichCurve *pFVar4;
  undefined1 in_R9B;
  float fVar5;
  FKeyHandle local_res8 [4];
  uint in_stack_ffffffffffffff98;
  FKeyHandle FVar6;
  
  (this->FloatCurveValue).CurveData._padding_ = 0;
  (this->FloatCurveValue).CurveData._padding_ = 0;
  (this->FloatCurveValue).CurveData._padding_ = 0;
  (this->FloatRangeValue).Min = 0.0;
  (this->FloatRangeValue).Max = 0.0;
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
  *(undefined4 *)&(this->FloatCurveValue).CurveData._padding_ = 0x7f7fffff;
  *(undefined2 *)((longlong)&(this->FloatCurveValue).CurveData._padding_ + 4) = 0x404;
  (this->FloatCurveValue).CurveData._padding_ = (longlong)&___7FRichCurve__6B_;
  (this->FloatCurveValue).CurveType = ParticleLifePercent;
  (this->FloatCurveValue).Loop = false;
  FRange_FloatCurve::FRange_FloatCurve(&this->FloatCurveRangeValue);
  (this->Vector2DRangeValue).Min.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  TVar3 = UE::Math::TVector2<double>::ZeroVector;
  fVar5 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._0_4_;
  (this->Vector2DRangeValue).RandomKey_X_Y = false;
  (this->Vector2DRangeValue).Max.field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar3.field0_0x0;
  FUIParticleLinearColorCurve::FUIParticleLinearColorCurve(&this->LinearColorCurveValue);
  FUIParticleLinearColorCurve::FUIParticleLinearColorCurve(&(this->LinearColorCurveRangeValue).Min);
  FUIParticleLinearColorCurve::FUIParticleLinearColorCurve(&(this->LinearColorCurveRangeValue).Max);
  (this->LinearColorCurveRangeValue).RandomKey_R_G = false;
  (this->LinearColorCurveRangeValue).RandomKey_R_B = false;
  (this->LinearColorCurveRangeValue).RandomKey_R_A = false;
  (this->LinearColorCurveRangeValue).RandomKey_G_B = false;
  (this->LinearColorCurveRangeValue).RandomKey_G_A = false;
  (this->LinearColorCurveRangeValue).RandomKey_B_A = false;
  this->Type = Float;
  this->FloatValue = 1.0;
  (this->FloatRangeValue).Min = 20.0;
  (this->FloatRangeValue).Max = 50.0;
  *(undefined4 *)&(this->FloatCurveValue).CurveData._padding_ = 0x41200000;
  FKeyHandle::FKeyHandle(local_res8);
  FVar6.Index = in_stack_ffffffffffffff98 & 0xffffff00;
  FRichCurve::AddKey(&(this->FloatCurveValue).CurveData,fVar5,0.0,(bool)in_R9B,FVar6);
  FKeyHandle::FKeyHandle(local_res8);
  fVar1 = __real_3f800000;
  FVar6.Index = FVar6.Index & 0xffffff00;
  FRichCurve::AddKey(&(this->FloatCurveValue).CurveData,fVar5,__real_3f800000,(bool)in_R9B,FVar6);
  *(undefined4 *)&(this->FloatCurveRangeValue).Min.CurveData._padding_ = 0x41200000;
  FKeyHandle::FKeyHandle(local_res8);
  FVar6.Index = FVar6.Index & 0xffffff00;
  FRichCurve::AddKey((FRichCurve *)&this->FloatCurveRangeValue,fVar5,0.0,(bool)in_R9B,FVar6);
  FKeyHandle::FKeyHandle(local_res8);
  FVar6.Index = FVar6.Index & 0xffffff00;
  FRichCurve::AddKey((FRichCurve *)&this->FloatCurveRangeValue,fVar5,fVar1,(bool)in_R9B,FVar6);
  *(undefined4 *)&(this->FloatCurveRangeValue).Max.CurveData._padding_ = 0x41a00000;
  FKeyHandle::FKeyHandle(local_res8);
  FVar6.Index = FVar6.Index & 0xffffff00;
  FRichCurve::AddKey(&(this->FloatCurveRangeValue).Max.CurveData,fVar5,0.0,(bool)in_R9B,FVar6);
  FKeyHandle::FKeyHandle(local_res8);
  FVar6.Index = FVar6.Index & 0xffffff00;
  FRichCurve::AddKey(&(this->FloatCurveRangeValue).Max.CurveData,fVar5,fVar1,(bool)in_R9B,FVar6);
  (this->Vector2DValue).field0_0x0._s_0.X = 10.0;
  (this->Vector2DValue).field0_0x0._s_0.Y = 10.0;
  (this->Vector2DRangeValue).Min.field0_0x0._s_0.X = 10.0;
  (this->Vector2DRangeValue).Min.field0_0x0._s_0.Y = 10.0;
  (this->Vector2DRangeValue).Max.field0_0x0._s_0.X = 20.0;
  (this->Vector2DRangeValue).Max.field0_0x0._s_0.Y = 20.0;
  FKeyHandle::FKeyHandle(local_res8);
  FVar6.Index = FVar6.Index & 0xffffff00;
  FRichCurve::AddKey((FRichCurve *)&this->LinearColorCurveRangeValue,fVar5,0.0,(bool)in_R9B,FVar6);
  FKeyHandle::FKeyHandle(local_res8);
  FVar6.Index = FVar6.Index & 0xffffff00;
  FRichCurve::AddKey((this->LinearColorCurveRangeValue).Min.ColorCurves + 1,fVar5,0.0,(bool)in_R9B,
                     FVar6);
  FKeyHandle::FKeyHandle(local_res8);
  FVar6.Index = FVar6.Index & 0xffffff00;
  FRichCurve::AddKey((this->LinearColorCurveRangeValue).Min.ColorCurves + 2,fVar5,0.0,(bool)in_R9B,
                     FVar6);
  pFVar4 = (this->LinearColorCurveRangeValue).Min.ColorCurves + 3;
  FKeyHandle::FKeyHandle(local_res8);
  FVar6.Index = FVar6.Index & 0xffffff00;
  FRichCurve::AddKey(pFVar4,fVar5,0.0,(bool)in_R9B,FVar6);
  FKeyHandle::FKeyHandle(local_res8);
  fVar2 = __real_3f000000;
  FVar6.Index = FVar6.Index & 0xffffff00;
  FRichCurve::AddKey(pFVar4,fVar5,__real_3f000000,(bool)in_R9B,FVar6);
  FKeyHandle::FKeyHandle(local_res8);
  FVar6.Index = FVar6.Index & 0xffffff00;
  FRichCurve::AddKey(pFVar4,fVar5,fVar1,(bool)in_R9B,FVar6);
  FKeyHandle::FKeyHandle(local_res8);
  FVar6.Index = FVar6.Index & 0xffffff00;
  FRichCurve::AddKey((this->LinearColorCurveRangeValue).Max.ColorCurves,fVar5,0.0,(bool)in_R9B,FVar6
                    );
  FKeyHandle::FKeyHandle(local_res8);
  FVar6.Index = FVar6.Index & 0xffffff00;
  FRichCurve::AddKey((this->LinearColorCurveRangeValue).Max.ColorCurves + 1,fVar5,0.0,(bool)in_R9B,
                     FVar6);
  FKeyHandle::FKeyHandle(local_res8);
  FVar6.Index = FVar6.Index & 0xffffff00;
  FRichCurve::AddKey((this->LinearColorCurveRangeValue).Max.ColorCurves + 2,fVar5,0.0,(bool)in_R9B,
                     FVar6);
  pFVar4 = (this->LinearColorCurveRangeValue).Max.ColorCurves + 3;
  FKeyHandle::FKeyHandle(local_res8);
  FVar6.Index = FVar6.Index & 0xffffff00;
  FRichCurve::AddKey(pFVar4,fVar5,0.0,(bool)in_R9B,FVar6);
  FKeyHandle::FKeyHandle(local_res8);
  FVar6.Index = FVar6.Index & 0xffffff00;
  FRichCurve::AddKey(pFVar4,fVar5,fVar2,(bool)in_R9B,FVar6);
  FKeyHandle::FKeyHandle(local_res8);
  FVar6.Index = FVar6.Index & 0xffffff00;
  FRichCurve::AddKey(pFVar4,fVar5,fVar1,(bool)in_R9B,FVar6);
  FKeyHandle::FKeyHandle(local_res8);
  FVar6.Index = FVar6.Index & 0xffffff00;
  FRichCurve::AddKey((this->LinearColorCurveValue).ColorCurves,fVar5,0.0,(bool)in_R9B,FVar6);
  FKeyHandle::FKeyHandle(local_res8);
  FVar6.Index = FVar6.Index & 0xffffff00;
  FRichCurve::AddKey((this->LinearColorCurveValue).ColorCurves + 1,fVar5,0.0,(bool)in_R9B,FVar6);
  FKeyHandle::FKeyHandle(local_res8);
  FVar6.Index = FVar6.Index & 0xffffff00;
  FRichCurve::AddKey((this->LinearColorCurveValue).ColorCurves + 2,fVar5,0.0,(bool)in_R9B,FVar6);
  FKeyHandle::FKeyHandle(local_res8);
  FVar6.Index = FVar6.Index & 0xffffff00;
  FRichCurve::AddKey((this->LinearColorCurveValue).ColorCurves + 3,fVar5,0.0,(bool)in_R9B,FVar6);
  FKeyHandle::FKeyHandle(local_res8);
  FVar6.Index = FVar6.Index & 0xffffff00;
  FRichCurve::AddKey((this->LinearColorCurveValue).ColorCurves + 3,fVar5,fVar2,(bool)in_R9B,FVar6);
  FKeyHandle::FKeyHandle(local_res8);
  FRichCurve::AddKey((this->LinearColorCurveValue).ColorCurves + 3,fVar5,fVar1,(bool)in_R9B,
                     (FKeyHandle)(FVar6.Index & 0xffffff00));
  *(undefined4 *)&(this->LinearColorCurveRangeValue).Min.ColorCurves[0]._padding_ = 0x3f800000;
  *(undefined4 *)&(this->LinearColorCurveRangeValue).Max.ColorCurves[0]._padding_ = 0x3f800000;
  *(undefined4 *)&(this->LinearColorCurveValue).ColorCurves[0]._padding_ = 0x3f800000;
  *(undefined4 *)&(this->LinearColorCurveRangeValue).Min.ColorCurves[1]._padding_ = 0x3f800000;
  *(undefined4 *)&(this->LinearColorCurveRangeValue).Max.ColorCurves[1]._padding_ = 0x3f800000;
  *(undefined4 *)&(this->LinearColorCurveValue).ColorCurves[1]._padding_ = 0x3f800000;
  *(undefined4 *)&(this->LinearColorCurveRangeValue).Min.ColorCurves[2]._padding_ = 0x3f800000;
  *(undefined4 *)&(this->LinearColorCurveRangeValue).Max.ColorCurves[2]._padding_ = 0x3f800000;
  *(undefined4 *)&(this->LinearColorCurveValue).ColorCurves[2]._padding_ = 0x3f800000;
  *(undefined4 *)&(this->LinearColorCurveRangeValue).Min.ColorCurves[3]._padding_ = 0x3f800000;
  *(undefined4 *)&(this->LinearColorCurveRangeValue).Max.ColorCurves[3]._padding_ = 0x3f800000;
  *(undefined4 *)&(this->LinearColorCurveValue).ColorCurves[3]._padding_ = 0x3f800000;
  return this;
}

// ~FUIParticleProperty @ 14ac90ef0

void __thiscall FUIParticleProperty::~FUIParticleProperty(FUIParticleProperty *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  FUIParticleLinearColorCurve::~FUIParticleLinearColorCurve(&(this->LinearColorCurveRangeValue).Max)
  ;
  FUIParticleLinearColorCurve::~FUIParticleLinearColorCurve(&(this->LinearColorCurveRangeValue).Min)
  ;
  FUIParticleLinearColorCurve::~FUIParticleLinearColorCurve(&this->LinearColorCurveValue);
  FRange_FloatCurve::~FRange_FloatCurve(&this->FloatCurveRangeValue);
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

// operator= @ 14ac91640

FUIParticleProperty * __thiscall
FUIParticleProperty::operator=(FUIParticleProperty *this,FUIParticleProperty *param_1)

{
  double dVar1;
  undefined7 uVar2;
  
  this->Type = param_1->Type;
  this->FloatValue = param_1->FloatValue;
  this->FloatRangeValue = param_1->FloatRangeValue;
  FRichCurve::operator=(&(this->FloatCurveValue).CurveData,&(param_1->FloatCurveValue).CurveData);
  (this->FloatCurveValue).CurveType = (param_1->FloatCurveValue).CurveType;
  (this->FloatCurveValue).Loop = (param_1->FloatCurveValue).Loop;
  FRange_FloatCurve::operator=(&this->FloatCurveRangeValue,&param_1->FloatCurveRangeValue);
  dVar1 = (param_1->Vector2DValue).field0_0x0._s_0.Y;
  (this->Vector2DValue).field0_0x0._s_0.X = (param_1->Vector2DValue).field0_0x0._s_0.X;
  (this->Vector2DValue).field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_1->Vector2DRangeValue).Min.field0_0x0._s_0.Y;
  (this->Vector2DRangeValue).Min.field0_0x0._s_0.X =
       (param_1->Vector2DRangeValue).Min.field0_0x0._s_0.X;
  (this->Vector2DRangeValue).Min.field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_1->Vector2DRangeValue).Max.field0_0x0._s_0.Y;
  (this->Vector2DRangeValue).Max.field0_0x0._s_0.X =
       (param_1->Vector2DRangeValue).Max.field0_0x0._s_0.X;
  (this->Vector2DRangeValue).Max.field0_0x0._s_0.Y = dVar1;
  uVar2 = *(undefined7 *)&(param_1->Vector2DRangeValue).field_0x21;
  (this->Vector2DRangeValue).RandomKey_X_Y = (param_1->Vector2DRangeValue).RandomKey_X_Y;
  *(undefined7 *)&(this->Vector2DRangeValue).field_0x21 = uVar2;
  FUIParticleLinearColorCurve::operator=
            (&this->LinearColorCurveValue,&param_1->LinearColorCurveValue);
  FRange_LinearColorCurve::operator=
            (&this->LinearColorCurveRangeValue,&param_1->LinearColorCurveRangeValue);
  return this;
}

// GetValue_Color @ 14ac993a0

FLinearColor * __thiscall
FUIParticleProperty::GetValue_Color
          (FUIParticleProperty *this,FLinearColor *__return_storage_ptr__,float param_1,
          float param_2,float param_3,FLerpKeyColor *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  FLinearColor *pFVar5;
  float fVar6;
  FLinearColor_u_0 local_28;
  FLinearColor local_18;
  
  switch(this->Type) {
  case Float:
    fVar6 = this->FloatValue;
    (__return_storage_ptr__->field0_0x0)._s_0.R = fVar6;
    (__return_storage_ptr__->field0_0x0)._s_0.G = fVar6;
    (__return_storage_ptr__->field0_0x0)._s_0.B = fVar6;
    (__return_storage_ptr__->field0_0x0)._s_0.A = fVar6;
    return __return_storage_ptr__;
  case FloatRange:
    fVar6 = ((this->FloatRangeValue).Max - (this->FloatRangeValue).Min) * param_4->R +
            (this->FloatRangeValue).Min;
    (__return_storage_ptr__->field0_0x0)._s_0.R = fVar6;
    (__return_storage_ptr__->field0_0x0)._s_0.G = fVar6;
    (__return_storage_ptr__->field0_0x0)._s_0.B = fVar6;
    (__return_storage_ptr__->field0_0x0)._s_0.A = fVar6;
    return __return_storage_ptr__;
  case FloatCurve:
    fVar6 = FUIParticleFloatCurve::GetValue(&this->FloatCurveValue,param_1,param_2,param_3);
    (__return_storage_ptr__->field0_0x0)._s_0.R = fVar6;
    (__return_storage_ptr__->field0_0x0)._s_0.G = fVar6;
    (__return_storage_ptr__->field0_0x0)._s_0.B = fVar6;
    (__return_storage_ptr__->field0_0x0)._s_0.A = fVar6;
    return __return_storage_ptr__;
  case FloatCurveRange:
    fVar6 = FRange_FloatCurve::GetValue
                      (&this->FloatCurveRangeValue,param_1,param_2,param_3,param_4->R);
    (__return_storage_ptr__->field0_0x0)._s_0.R = fVar6;
    (__return_storage_ptr__->field0_0x0)._s_0.G = fVar6;
    (__return_storage_ptr__->field0_0x0)._s_0.B = fVar6;
    (__return_storage_ptr__->field0_0x0)._s_0.A = fVar6;
    return __return_storage_ptr__;
  case Vector2D:
    fVar6 = (float)(this->Vector2DValue).field0_0x0._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.R = fVar6;
    (__return_storage_ptr__->field0_0x0)._s_0.G = fVar6;
    (__return_storage_ptr__->field0_0x0)._s_0.B = fVar6;
    (__return_storage_ptr__->field0_0x0)._s_0.A = fVar6;
    return __return_storage_ptr__;
  case Vector2DRange:
    fVar6 = param_4->G;
    if ((this->Vector2DRangeValue).RandomKey_X_Y != false) {
      fVar6 = param_4->R;
    }
    dVar1 = (this->Vector2DRangeValue).Min.field0_0x0._s_0.Y;
    dVar2 = (this->Vector2DRangeValue).Max.field0_0x0._s_0.Y;
    dVar3 = (this->Vector2DRangeValue).Min.field0_0x0._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.R =
         (float)(((this->Vector2DRangeValue).Max.field0_0x0._s_0.X - dVar3) * (double)param_4->R +
                dVar3);
    (__return_storage_ptr__->field0_0x0)._s_0.G = (float)((dVar2 - dVar1) * (double)fVar6 + dVar1);
    *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    return __return_storage_ptr__;
  case LinearColorCurve:
    pFVar5 = FUIParticleLinearColorCurve::GetValue
                       (&this->LinearColorCurveValue,(FLinearColor *)&local_28._s_0,param_1,param_2,
                        param_3);
    break;
  case LinearColorCurveRange:
    local_28._0_4_ = param_4->R;
    local_28._4_4_ = param_4->G;
    local_28._8_4_ = param_4->B;
    local_28._12_4_ = param_4->A;
    pFVar5 = FRange_LinearColorCurve::GetValue
                       (&this->LinearColorCurveRangeValue,&local_18,param_1,param_2,param_3,
                        (FLerpKeyColor *)&local_28._s_0);
    break;
  default:
    goto switchD_14ac993d4_default;
  }
  uVar4 = *(undefined8 *)((longlong)&pFVar5->field0_0x0 + 8);
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *(undefined8 *)&pFVar5->field0_0x0;
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar4;
switchD_14ac993d4_default:
  return __return_storage_ptr__;
}

// GetValue_Float @ 14ac995c0

float __thiscall
FUIParticleProperty::GetValue_Float
          (FUIParticleProperty *this,float param_1,float param_2,float param_3,float param_4)

{
  double dVar1;
  FLinearColor *pFVar2;
  float fVar3;
  FLinearColor_u_0 local_58;
  FLinearColor_u_0 local_48 [4];
  
  fVar3 = 0.0;
  switch(this->Type) {
  case Float:
    fVar3 = this->FloatValue;
    break;
  case FloatRange:
    fVar3 = ((this->FloatRangeValue).Max - (this->FloatRangeValue).Min) * param_4 +
            (this->FloatRangeValue).Min;
    break;
  case FloatCurve:
    fVar3 = FUIParticleFloatCurve::GetValue(&this->FloatCurveValue,param_1,param_2,param_3);
    break;
  case FloatCurveRange:
    fVar3 = FRange_FloatCurve::GetValue(&this->FloatCurveRangeValue,param_1,param_2,param_3,param_4)
    ;
    break;
  case Vector2D:
    fVar3 = (float)(this->Vector2DValue).field0_0x0._s_0.X;
    break;
  case Vector2DRange:
    dVar1 = (this->Vector2DRangeValue).Min.field0_0x0._s_0.X;
    fVar3 = (float)(((this->Vector2DRangeValue).Max.field0_0x0._s_0.X - dVar1) * (double)param_4 +
                   dVar1);
    break;
  case LinearColorCurve:
    pFVar2 = FUIParticleLinearColorCurve::GetValue
                       (&this->LinearColorCurveValue,(FLinearColor *)&local_48[0]._s_0,param_1,
                        param_2,param_3);
    fVar3 = (pFVar2->field0_0x0)._s_0.R;
    break;
  case LinearColorCurveRange:
    FUIParticleLinearColorCurve::GetValue
              (&(this->LinearColorCurveRangeValue).Min,(FLinearColor *)&local_48[0]._s_0,param_1,
               param_2,param_3);
    FUIParticleLinearColorCurve::GetValue
              (&(this->LinearColorCurveRangeValue).Max,(FLinearColor *)&local_58._s_0,param_1,
               param_2,param_3);
    fVar3 = (local_58._s_0.R - (float)local_48[0]._0_4_) * param_4 + (float)local_48[0]._0_4_;
  }
  return fVar3;
}

// GetValue_Vector2D @ 14ac99780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TVector2<double> * __thiscall
FUIParticleProperty::GetValue_Vector2D
          (FUIParticleProperty *this,TVector2<double> *__return_storage_ptr__,float param_1,
          float param_2,float param_3,FLerpKeyVector2D param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  TVector2<double>_u_0 TVar4;
  TVector2<double>_u_0 TVar5;
  TVector2<double>_u_0 TVar6;
  TVector2<double>_u_0 TVar7;
  float fVar8;
  undefined1 auStackY_68 [32];
  FLinearColor_u_0 local_38;
  FLinearColor_u_0 local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_68;
  switch(this->Type) {
  case Float:
    dVar1 = (double)this->FloatValue;
    TVar5._8_4_ = SUB84(dVar1,0);
    TVar5._s_0.X = dVar1;
    TVar5._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
    __return_storage_ptr__->field0_0x0 = TVar5;
    break;
  case FloatRange:
    dVar1 = (double)(((this->FloatRangeValue).Max - (this->FloatRangeValue).Min) * param_4.X +
                    (this->FloatRangeValue).Min);
    TVar4._8_4_ = SUB84(dVar1,0);
    TVar4._s_0.X = dVar1;
    TVar4._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
    __return_storage_ptr__->field0_0x0 = TVar4;
    break;
  case FloatCurve:
    fVar8 = FUIParticleFloatCurve::GetValue(&this->FloatCurveValue,param_1,param_2,param_3);
    dVar1 = (double)fVar8;
    TVar7._8_4_ = SUB84(dVar1,0);
    TVar7._s_0.X = dVar1;
    TVar7._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
    __return_storage_ptr__->field0_0x0 = TVar7;
    break;
  case FloatCurveRange:
    fVar8 = FRange_FloatCurve::GetValue
                      (&this->FloatCurveRangeValue,param_1,param_2,param_3,param_4.X);
    dVar1 = (double)fVar8;
    TVar6._8_4_ = SUB84(dVar1,0);
    TVar6._s_0.X = dVar1;
    TVar6._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
    __return_storage_ptr__->field0_0x0 = TVar6;
    break;
  case Vector2D:
    dVar1 = (this->Vector2DValue).field0_0x0._s_0.Y;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (this->Vector2DValue).field0_0x0._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
    break;
  case Vector2DRange:
    if ((this->Vector2DRangeValue).RandomKey_X_Y != false) {
      param_4.Y = param_4.X;
    }
    dVar1 = (this->Vector2DRangeValue).Min.field0_0x0._s_0.Y;
    dVar2 = (this->Vector2DRangeValue).Min.field0_0x0._s_0.X;
    dVar3 = (this->Vector2DRangeValue).Max.field0_0x0._s_0.Y;
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         ((this->Vector2DRangeValue).Max.field0_0x0._s_0.X - dVar2) * (double)param_4.X + dVar2;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (dVar3 - dVar1) * (double)param_4.Y + dVar1;
    break;
  case LinearColorCurve:
    FUIParticleLinearColorCurve::GetValue
              (&this->LinearColorCurveValue,(FLinearColor *)&local_38._s_0,param_1,param_2,param_3);
    local_28._s_0.R = local_38._s_0.R;
    local_28._s_0.G = local_38._s_0.G;
    goto LAB_14ac99966;
  case LinearColorCurveRange:
    local_38._s_0.R = param_4.X;
    local_38._s_0.G = param_4.Y;
    local_38._8_8_ = 0;
    FRange_LinearColorCurve::GetValue
              (&this->LinearColorCurveRangeValue,(FLinearColor *)&local_28._s_0,param_1,param_2,
               param_3,(FLerpKeyColor *)&local_38._s_0);
LAB_14ac99966:
    (__return_storage_ptr__->field0_0x0)._s_0.X = (double)local_28._s_0.R;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)local_28._s_0.G;
  }
  return __return_storage_ptr__;
}

// Reset @ 14ac9edd0

void __thiscall FUIParticleProperty::Reset(FUIParticleProperty *this)

{
  TVector2<double> TVar1;
  FRichCurve *pFVar2;
  longlong lVar3;
  longlong lVar4;
  
  this->Type = Float;
  this->FloatValue = 0.0;
  (this->FloatRangeValue).Min = 0.0;
  (this->FloatRangeValue).Max = 0.0;
  (this->FloatCurveValue).CurveType = EmitLifeTime;
  (this->FloatCurveValue).Loop = false;
  FRichCurve::Reset(&(this->FloatCurveValue).CurveData);
  *(undefined4 *)&(this->FloatCurveValue).CurveData._padding_ = 0;
  (this->FloatCurveRangeValue).Min.CurveType = EmitLifeTime;
  (this->FloatCurveRangeValue).Min.Loop = false;
  FRichCurve::Reset((FRichCurve *)&this->FloatCurveRangeValue);
  *(undefined4 *)&(this->FloatCurveRangeValue).Min.CurveData._padding_ = 0;
  (this->FloatCurveRangeValue).Max.CurveType = EmitLifeTime;
  (this->FloatCurveRangeValue).Max.Loop = false;
  FRichCurve::Reset(&(this->FloatCurveRangeValue).Max.CurveData);
  *(undefined4 *)&(this->FloatCurveRangeValue).Max.CurveData._padding_ = 0;
  lVar3 = 4;
  (this->Vector2DValue).field0_0x0._s_0.X = 0.0;
  pFVar2 = (this->LinearColorCurveValue).ColorCurves;
  (this->Vector2DValue).field0_0x0._s_0.Y = 0.0;
  (this->Vector2DRangeValue).Min.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  (this->Vector2DRangeValue).RandomKey_X_Y = false;
  lVar4 = 4;
  (this->Vector2DRangeValue).Max.field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  do {
    FRichCurve::Reset(pFVar2);
    pFVar2 = pFVar2 + 1;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  pFVar2 = (FRichCurve *)&this->LinearColorCurveRangeValue;
  (this->LinearColorCurveValue).CurveType = EmitLifeTime;
  (this->LinearColorCurveValue).Loop = false;
  lVar4 = 4;
  do {
    FRichCurve::Reset(pFVar2);
    pFVar2 = pFVar2 + 1;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  (this->LinearColorCurveRangeValue).Min.CurveType = EmitLifeTime;
  (this->LinearColorCurveRangeValue).Min.Loop = false;
  pFVar2 = (this->LinearColorCurveRangeValue).Max.ColorCurves;
  do {
    FRichCurve::Reset(pFVar2);
    pFVar2 = pFVar2 + 1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  (this->LinearColorCurveRangeValue).Max.CurveType = EmitLifeTime;
  (this->LinearColorCurveRangeValue).Max.Loop = false;
  (this->LinearColorCurveRangeValue).RandomKey_R_G = false;
  (this->LinearColorCurveRangeValue).RandomKey_R_B = false;
  (this->LinearColorCurveRangeValue).RandomKey_R_A = false;
  (this->LinearColorCurveRangeValue).RandomKey_G_B = false;
  (this->LinearColorCurveRangeValue).RandomKey_G_A = false;
  (this->LinearColorCurveRangeValue).RandomKey_B_A = false;
  return;
}

