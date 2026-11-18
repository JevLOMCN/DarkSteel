// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 24

// StaticClass @ 147a0f820

UClass * __cdecl UCurveLinearColor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCurveLinearColor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"CurveLinearColor",
               &Z_Registration_Info_UClass_UCurveLinearColor.InnerSingleton,
               StaticRegisterNativesUCurveLinearColor,0x250,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UCurveLinearColor>,
               InternalVTableHelperCtorCaller<UCurveLinearColor>,local_res8,UCurveBase::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCurveLinearColor.InnerSingleton;
}

// UCurveLinearColor @ 147a277f0

UCurveLinearColor * __thiscall
UCurveLinearColor::UCurveLinearColor(UCurveLinearColor *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FCurveOwnerInterface__;
  this->FloatCurves[0]._padding_ = 0;
  this->FloatCurves[0]._padding_ = 0;
  this->FloatCurves[0]._padding_ = 0;
  *(undefined4 *)&this->FloatCurves[0]._padding_ = 0;
  *(undefined4 *)((longlong)&this->FloatCurves[0]._padding_ + 4) = 0x80;
  *(undefined4 *)&this->FloatCurves[0]._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->FloatCurves[0]._padding_ + 4) = 0;
  this->FloatCurves[0]._padding_ = 0;
  *(undefined4 *)&this->FloatCurves[0]._padding_ = 0;
  this->FloatCurves[0]._padding_ = 0;
  this->FloatCurves[0]._padding_ = 0;
  this->FloatCurves[0]._padding_ = (longlong)&___7FRichCurve__6B_;
  *(undefined4 *)&this->FloatCurves[0]._padding_ = 0x7f7fffff;
  *(undefined2 *)((longlong)&this->FloatCurves[0]._padding_ + 4) = 0x404;
  this->FloatCurves[0].Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->FloatCurves[0].Keys.ArrayNum = 0;
  this->FloatCurves[0].Keys.ArrayMax = 0;
  this->FloatCurves[1]._padding_ = 0;
  this->FloatCurves[1]._padding_ = 0;
  this->FloatCurves[1]._padding_ = 0;
  *(undefined4 *)&this->FloatCurves[1]._padding_ = 0;
  *(undefined4 *)((longlong)&this->FloatCurves[1]._padding_ + 4) = 0x80;
  *(undefined4 *)&this->FloatCurves[1]._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->FloatCurves[1]._padding_ + 4) = 0;
  this->FloatCurves[1]._padding_ = 0;
  *(undefined4 *)&this->FloatCurves[1]._padding_ = 0;
  this->FloatCurves[1]._padding_ = 0;
  this->FloatCurves[1]._padding_ = 0;
  *(undefined4 *)&this->FloatCurves[1]._padding_ = 0x7f7fffff;
  *(undefined2 *)((longlong)&this->FloatCurves[1]._padding_ + 4) = 0x404;
  this->FloatCurves[1]._padding_ = (longlong)&___7FRichCurve__6B_;
  this->FloatCurves[1].Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->FloatCurves[1].Keys.ArrayNum = 0;
  this->FloatCurves[1].Keys.ArrayMax = 0;
  this->FloatCurves[2]._padding_ = 0;
  this->FloatCurves[2]._padding_ = 0;
  this->FloatCurves[2]._padding_ = 0;
  *(undefined4 *)&this->FloatCurves[2]._padding_ = 0;
  *(undefined4 *)((longlong)&this->FloatCurves[2]._padding_ + 4) = 0x80;
  *(undefined4 *)&this->FloatCurves[2]._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->FloatCurves[2]._padding_ + 4) = 0;
  this->FloatCurves[2]._padding_ = 0;
  *(undefined4 *)&this->FloatCurves[2]._padding_ = 0;
  this->FloatCurves[2]._padding_ = 0;
  this->FloatCurves[2]._padding_ = 0;
  *(undefined4 *)&this->FloatCurves[2]._padding_ = 0x7f7fffff;
  *(undefined2 *)((longlong)&this->FloatCurves[2]._padding_ + 4) = 0x404;
  this->FloatCurves[2]._padding_ = (longlong)&___7FRichCurve__6B_;
  this->FloatCurves[2].Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->FloatCurves[2].Keys.ArrayNum = 0;
  this->FloatCurves[2].Keys.ArrayMax = 0;
  this->FloatCurves[3]._padding_ = 0;
  this->FloatCurves[3]._padding_ = 0;
  this->FloatCurves[3]._padding_ = 0;
  *(undefined4 *)&this->FloatCurves[3]._padding_ = 0;
  *(undefined4 *)((longlong)&this->FloatCurves[3]._padding_ + 4) = 0x80;
  *(undefined4 *)&this->FloatCurves[3]._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->FloatCurves[3]._padding_ + 4) = 0;
  this->FloatCurves[3]._padding_ = 0;
  *(undefined4 *)&this->FloatCurves[3]._padding_ = 0;
  this->FloatCurves[3]._padding_ = 0;
  this->FloatCurves[3]._padding_ = 0;
  *(undefined4 *)&this->FloatCurves[3]._padding_ = 0x7f7fffff;
  *(undefined2 *)((longlong)&this->FloatCurves[3]._padding_ + 4) = 0x404;
  this->FloatCurves[3]._padding_ = (longlong)&___7FRichCurve__6B_;
  this->FloatCurves[3].Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->FloatCurves[3].Keys.ArrayNum = 0;
  this->FloatCurves[3].Keys.ArrayMax = 0;
  return this;
}

// UCurveLinearColor @ 147a279f0

UCurveLinearColor * __thiscall
UCurveLinearColor::UCurveLinearColor(UCurveLinearColor *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FCurveOwnerInterface__;
  this->FloatCurves[0]._padding_ = 0;
  this->FloatCurves[0]._padding_ = 0;
  this->FloatCurves[0]._padding_ = 0;
  *(undefined4 *)&this->FloatCurves[0]._padding_ = 0;
  *(undefined4 *)((longlong)&this->FloatCurves[0]._padding_ + 4) = 0x80;
  *(undefined4 *)&this->FloatCurves[0]._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->FloatCurves[0]._padding_ + 4) = 0;
  this->FloatCurves[0]._padding_ = 0;
  *(undefined4 *)&this->FloatCurves[0]._padding_ = 0;
  this->FloatCurves[0]._padding_ = 0;
  this->FloatCurves[0]._padding_ = 0;
  this->FloatCurves[0]._padding_ = (longlong)&___7FRichCurve__6B_;
  *(undefined4 *)&this->FloatCurves[0]._padding_ = 0x7f7fffff;
  *(undefined2 *)((longlong)&this->FloatCurves[0]._padding_ + 4) = 0x404;
  this->FloatCurves[0].Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->FloatCurves[0].Keys.ArrayNum = 0;
  this->FloatCurves[0].Keys.ArrayMax = 0;
  this->FloatCurves[1]._padding_ = 0;
  this->FloatCurves[1]._padding_ = 0;
  this->FloatCurves[1]._padding_ = 0;
  *(undefined4 *)&this->FloatCurves[1]._padding_ = 0;
  *(undefined4 *)((longlong)&this->FloatCurves[1]._padding_ + 4) = 0x80;
  *(undefined4 *)&this->FloatCurves[1]._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->FloatCurves[1]._padding_ + 4) = 0;
  this->FloatCurves[1]._padding_ = 0;
  *(undefined4 *)&this->FloatCurves[1]._padding_ = 0;
  this->FloatCurves[1]._padding_ = 0;
  this->FloatCurves[1]._padding_ = 0;
  *(undefined4 *)&this->FloatCurves[1]._padding_ = 0x7f7fffff;
  *(undefined2 *)((longlong)&this->FloatCurves[1]._padding_ + 4) = 0x404;
  this->FloatCurves[1]._padding_ = (longlong)&___7FRichCurve__6B_;
  this->FloatCurves[1].Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->FloatCurves[1].Keys.ArrayNum = 0;
  this->FloatCurves[1].Keys.ArrayMax = 0;
  this->FloatCurves[2]._padding_ = 0;
  this->FloatCurves[2]._padding_ = 0;
  this->FloatCurves[2]._padding_ = 0;
  *(undefined4 *)&this->FloatCurves[2]._padding_ = 0;
  *(undefined4 *)((longlong)&this->FloatCurves[2]._padding_ + 4) = 0x80;
  *(undefined4 *)&this->FloatCurves[2]._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->FloatCurves[2]._padding_ + 4) = 0;
  this->FloatCurves[2]._padding_ = 0;
  *(undefined4 *)&this->FloatCurves[2]._padding_ = 0;
  this->FloatCurves[2]._padding_ = 0;
  this->FloatCurves[2]._padding_ = 0;
  *(undefined4 *)&this->FloatCurves[2]._padding_ = 0x7f7fffff;
  *(undefined2 *)((longlong)&this->FloatCurves[2]._padding_ + 4) = 0x404;
  this->FloatCurves[2]._padding_ = (longlong)&___7FRichCurve__6B_;
  this->FloatCurves[2].Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->FloatCurves[2].Keys.ArrayNum = 0;
  this->FloatCurves[2].Keys.ArrayMax = 0;
  this->FloatCurves[3]._padding_ = 0;
  this->FloatCurves[3]._padding_ = 0;
  this->FloatCurves[3]._padding_ = 0;
  *(undefined4 *)&this->FloatCurves[3]._padding_ = 0;
  *(undefined4 *)((longlong)&this->FloatCurves[3]._padding_ + 4) = 0x80;
  *(undefined4 *)&this->FloatCurves[3]._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->FloatCurves[3]._padding_ + 4) = 0;
  this->FloatCurves[3]._padding_ = 0;
  *(undefined4 *)&this->FloatCurves[3]._padding_ = 0;
  this->FloatCurves[3]._padding_ = 0;
  this->FloatCurves[3]._padding_ = 0;
  *(undefined4 *)&this->FloatCurves[3]._padding_ = 0x7f7fffff;
  *(undefined2 *)((longlong)&this->FloatCurves[3]._padding_ + 4) = 0x404;
  this->FloatCurves[3]._padding_ = (longlong)&___7FRichCurve__6B_;
  this->FloatCurves[3].Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->FloatCurves[3].Keys.ArrayNum = 0;
  this->FloatCurves[3].Keys.ArrayMax = 0;
  this->AdjustHue = 0.0;
  this->AdjustSaturation = 1.0;
  this->AdjustBrightness = 1.0;
  this->AdjustBrightnessCurve = 1.0;
  this->AdjustVibrance = 0.0;
  this->AdjustMinAlpha = 0.0;
  this->AdjustMaxAlpha = 1.0;
  return this;
}

// ~UCurveLinearColor @ 147a2a4b0

void __thiscall UCurveLinearColor::~UCurveLinearColor(UCurveLinearColor *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FCurveOwnerInterface__;
  pFVar1 = this->FloatCurves[3].Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->FloatCurves[3]._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)this->FloatCurves[3]._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&this->FloatCurves[3]._padding_ = 0;
  pvVar2 = (void *)this->FloatCurves[3]._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->FloatCurves[3]._padding_);
  pFVar1 = this->FloatCurves[2].Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->FloatCurves[2]._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)this->FloatCurves[2]._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&this->FloatCurves[2]._padding_ = 0;
  pvVar2 = (void *)this->FloatCurves[2]._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->FloatCurves[2]._padding_);
  pFVar1 = this->FloatCurves[1].Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->FloatCurves[1]._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)this->FloatCurves[1]._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&this->FloatCurves[1]._padding_ = 0;
  pvVar2 = (void *)this->FloatCurves[1]._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->FloatCurves[1]._padding_);
  pFVar1 = this->FloatCurves[0].Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->FloatCurves[0]._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)this->FloatCurves[0]._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&this->FloatCurves[0]._padding_ = 0;
  pvVar2 = (void *)this->FloatCurves[0]._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->FloatCurves[0]._padding_);
  this->_padding_ = (longlong)&UCurveBase::_vftable__for__UObject__;
  this->_padding_ = (longlong)&___7FCurveOwnerInterface__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// operator== @ 147a2c930

bool __thiscall UCurveLinearColor::operator==(UCurveLinearColor *this,UCurveLinearColor *param_1)

{
  bool bVar1;
  
  bVar1 = FRichCurve::operator==(this->FloatCurves,param_1->FloatCurves);
  if (bVar1) {
    bVar1 = FRichCurve::operator==(this->FloatCurves + 1,param_1->FloatCurves + 1);
    if (bVar1) {
      bVar1 = FRichCurve::operator==(this->FloatCurves + 2,param_1->FloatCurves + 2);
      if (bVar1) {
        bVar1 = FRichCurve::operator==(this->FloatCurves + 3,param_1->FloatCurves + 3);
        if (bVar1) {
          return true;
        }
      }
    }
  }
  return false;
}

// GetAdjustedColorValue @ 147a4e7b0

FLinearColor * __thiscall
UCurveLinearColor::GetAdjustedColorValue
          (UCurveLinearColor *this,FLinearColor *__return_storage_ptr__,float param_1,bool param_2)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  FLinearColor_u_0 local_58;
  FLinearColor_u_0 local_48 [4];
  
  local_48[0]._0_4_ = FRichCurve::Eval(this->FloatCurves,param_1,0.0);
  local_48[0]._4_4_ = FRichCurve::Eval(this->FloatCurves + 1,param_1,0.0);
  local_48[0]._8_4_ = FRichCurve::Eval(this->FloatCurves + 2,param_1,0.0);
  fVar1 = __real_3f800000;
  if (this->FloatCurves[3].Keys.ArrayNum == 0) {
    local_48[0]._s_0.A = 1.0;
  }
  else {
    local_48[0]._12_4_ = FRichCurve::Eval(this->FloatCurves + 3,param_1,0.0);
  }
  if (!param_2) {
    uVar2 = local_48[0]._s_0.R;
    if ((float)local_48[0]._0_4_ <= (float)local_48[0]._4_4_) {
      uVar2 = local_48[0]._s_0.G;
    }
    if ((float)uVar2 <= (float)local_48[0]._8_4_) {
      uVar2 = local_48[0]._s_0.B;
    }
    if (__real_3f800347 <= (float)uVar2) goto LAB_147a4e886;
  }
  param_2 = true;
LAB_147a4e886:
  FLinearColor::LinearRGBToHSV((FLinearColor *)&local_48[0]._s_0,(FLinearColor *)&local_58._s_0);
  fVar3 = __real_38d1b717;
  local_58._s_0.B = local_58._s_0.B * this->AdjustBrightness;
  fVar4 = this->AdjustBrightnessCurve;
  if ((__real_38d1b717 < (float)((uint)(fVar4 - fVar1) & __xmm_7fffffff7fffffff7fffffff7fffffff)) &&
     (fVar4 != 0.0)) {
    local_58._s_0.B = powf(local_58._s_0.B,fVar4);
  }
  fVar4 = this->AdjustVibrance;
  if (fVar3 < (float)((uint)fVar4 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    if (fVar1 <= fVar4) {
      fVar4 = fVar1;
    }
    fVar3 = fVar1 - local_58._s_0.G;
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    local_58._s_0.G =
         local_58._s_0.G + fVar4 * __real_3f000000 * fVar3 * fVar3 * fVar3 * fVar3 * fVar3;
  }
  local_58._s_0.G = local_58._s_0.G * this->AdjustSaturation;
  local_58._s_0.R = local_58._s_0.R + this->AdjustHue;
  if (param_2 != false) {
    if (fVar1 <= local_58._s_0.B) {
      local_58._s_0.B = fVar1;
    }
    if (local_58._s_0.B <= 0.0) {
      local_58._s_0.B = 0.0;
    }
  }
  FLinearColor::HSVToLinearRGB((FLinearColor *)&local_58._s_0,__return_storage_ptr__);
  (__return_storage_ptr__->field0_0x0)._s_0.A =
       (this->AdjustMaxAlpha - this->AdjustMinAlpha) * (float)local_48[0]._12_4_ +
       this->AdjustMinAlpha;
  return __return_storage_ptr__;
}

// GetClampedLinearColorValue @ 147a4ea10

FLinearColor * __thiscall
UCurveLinearColor::GetClampedLinearColorValue
          (UCurveLinearColor *this,FLinearColor *__return_storage_ptr__,float param_1)

{
  GetAdjustedColorValue
            ((UCurveLinearColor *)&this[-1].FloatCurves[3].Keys.ArrayNum,__return_storage_ptr__,
             param_1,true);
  return __return_storage_ptr__;
}

// GetCurves @ 147a4f360

TArray<FRichCurveEditInfoTemplate<FRealCurve_*>,TSizedDefaultAllocator<32>_> * __thiscall
UCurveLinearColor::GetCurves
          (UCurveLinearColor *this,
          TArray<FRichCurveEditInfoTemplate<FRealCurve_*>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  FName *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<FRichCurveEditInfoTemplate<FRealCurve_*>,TSizedDefaultAllocator<32>_> *pTVar5;
  FName local_48;
  FName FStack_40;
  FName local_38;
  FName FStack_30;
  FName local_28;
  FName FStack_20;
  FName local_18;
  FName FStack_10;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_18 = RedCurveName;
  FStack_10 = (FName)&this->_padding_;
  iVar4 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x810,&__return_storage_ptr__->AllocatorInstance,
                     &__return_storage_ptr__->ArrayMax);
  __return_storage_ptr__->ArrayNum = iVar4 + 1;
  pFVar1 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 0x10);
  *pFVar1 = local_18;
  pFVar1[1] = FStack_10;
  pFVar1 = (FName *)(__return_storage_ptr__->AllocatorInstance).Data;
  local_48 = GreenCurveName;
  FStack_40 = (FName)&this->FloatCurves[0]._padding_;
  if ((pFVar1 <= &local_48) && (&local_48 < pFVar1 + (longlong)__return_storage_ptr__->ArrayMax * 2)
     ) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArray<FRichCurveEditInfoTemplate<FRealCurve_*>,TSizedDefaultAllocator<32>_> *)
               (*pcVar2)();
      return pTVar5;
    }
  }
  iVar4 = __return_storage_ptr__->ArrayNum;
  if (iVar4 == __return_storage_ptr__->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar4 + 1;
  pFVar1 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 0x10);
  *pFVar1 = local_48;
  pFVar1[1] = FStack_40;
  pFVar1 = (FName *)(__return_storage_ptr__->AllocatorInstance).Data;
  local_38 = BlueCurveName;
  FStack_30 = (FName)&this->FloatCurves[1]._padding_;
  if ((pFVar1 <= &local_38) && (&local_38 < pFVar1 + (longlong)__return_storage_ptr__->ArrayMax * 2)
     ) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArray<FRichCurveEditInfoTemplate<FRealCurve_*>,TSizedDefaultAllocator<32>_> *)
               (*pcVar2)();
      return pTVar5;
    }
  }
  iVar4 = __return_storage_ptr__->ArrayNum;
  if (iVar4 == __return_storage_ptr__->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar4 + 1;
  pFVar1 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 0x10);
  *pFVar1 = local_38;
  pFVar1[1] = FStack_30;
  pFVar1 = (FName *)(__return_storage_ptr__->AllocatorInstance).Data;
  local_28 = AlphaCurveName;
  FStack_20 = (FName)&this->FloatCurves[2]._padding_;
  if ((pFVar1 <= &local_28) && (&local_28 < pFVar1 + (longlong)__return_storage_ptr__->ArrayMax * 2)
     ) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArray<FRichCurveEditInfoTemplate<FRealCurve_*>,TSizedDefaultAllocator<32>_> *)
               (*pcVar2)();
      return pTVar5;
    }
  }
  iVar4 = __return_storage_ptr__->ArrayNum;
  if (iVar4 == __return_storage_ptr__->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar4 + 1;
  pFVar1 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 0x10);
  *pFVar1 = local_28;
  pFVar1[1] = FStack_20;
  return __return_storage_ptr__;
}

// GetCurves @ 147a4f610

TArray<FRichCurveEditInfoTemplate<FRealCurve_const_*>,TSizedDefaultAllocator<32>_> * __thiscall
UCurveLinearColor::GetCurves
          (UCurveLinearColor *this,
          TArray<FRichCurveEditInfoTemplate<FRealCurve_const_*>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  FName *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<FRichCurveEditInfoTemplate<FRealCurve_const_*>,TSizedDefaultAllocator<32>_> *pTVar5;
  FName local_48;
  FName FStack_40;
  FName local_38;
  FName FStack_30;
  FName local_28;
  FName FStack_20;
  FName local_18;
  FName FStack_10;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_18 = RedCurveName;
  FStack_10 = (FName)&this->_padding_;
  iVar4 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x810,&__return_storage_ptr__->AllocatorInstance,
                     &__return_storage_ptr__->ArrayMax);
  __return_storage_ptr__->ArrayNum = iVar4 + 1;
  pFVar1 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 0x10);
  *pFVar1 = local_18;
  pFVar1[1] = FStack_10;
  pFVar1 = (FName *)(__return_storage_ptr__->AllocatorInstance).Data;
  local_48 = GreenCurveName;
  FStack_40 = (FName)&this->FloatCurves[0]._padding_;
  if ((pFVar1 <= &local_48) && (&local_48 < pFVar1 + (longlong)__return_storage_ptr__->ArrayMax * 2)
     ) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArray<FRichCurveEditInfoTemplate<FRealCurve_const_*>,TSizedDefaultAllocator<32>_> *
               )(*pcVar2)();
      return pTVar5;
    }
  }
  iVar4 = __return_storage_ptr__->ArrayNum;
  if (iVar4 == __return_storage_ptr__->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar4 + 1;
  pFVar1 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 0x10);
  *pFVar1 = local_48;
  pFVar1[1] = FStack_40;
  pFVar1 = (FName *)(__return_storage_ptr__->AllocatorInstance).Data;
  local_38 = BlueCurveName;
  FStack_30 = (FName)&this->FloatCurves[1]._padding_;
  if ((pFVar1 <= &local_38) && (&local_38 < pFVar1 + (longlong)__return_storage_ptr__->ArrayMax * 2)
     ) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArray<FRichCurveEditInfoTemplate<FRealCurve_const_*>,TSizedDefaultAllocator<32>_> *
               )(*pcVar2)();
      return pTVar5;
    }
  }
  iVar4 = __return_storage_ptr__->ArrayNum;
  if (iVar4 == __return_storage_ptr__->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar4 + 1;
  pFVar1 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 0x10);
  *pFVar1 = local_38;
  pFVar1[1] = FStack_30;
  pFVar1 = (FName *)(__return_storage_ptr__->AllocatorInstance).Data;
  local_28 = AlphaCurveName;
  FStack_20 = (FName)&this->FloatCurves[2]._padding_;
  if ((pFVar1 <= &local_28) && (&local_28 < pFVar1 + (longlong)__return_storage_ptr__->ArrayMax * 2)
     ) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArray<FRichCurveEditInfoTemplate<FRealCurve_const_*>,TSizedDefaultAllocator<32>_> *
               )(*pcVar2)();
      return pTVar5;
    }
  }
  iVar4 = __return_storage_ptr__->ArrayNum;
  if (iVar4 == __return_storage_ptr__->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar4 + 1;
  pFVar1 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 0x10);
  *pFVar1 = local_28;
  pFVar1[1] = FStack_20;
  return __return_storage_ptr__;
}

// GetCurves @ 147a4f8c0

void __thiscall
UCurveLinearColor::GetCurves
          (UCurveLinearColor *this,
          TAdderReserverRef<FRichCurveEditInfoTemplate<FRealCurve_const_*>,int> *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  FName local_18;
  longlong *local_10;
  
  lVar1 = *(longlong *)param_1;
  uVar2 = *(undefined8 *)&param_1->field_0x8;
  local_18 = RedCurveName;
  local_10 = &this->_padding_;
  (**(code **)(lVar1 + 8))(uVar2,&local_18);
  local_18 = GreenCurveName;
  local_10 = &this->FloatCurves[0]._padding_;
  (**(code **)(lVar1 + 8))(uVar2,&local_18);
  local_18 = BlueCurveName;
  local_10 = &this->FloatCurves[1]._padding_;
  (**(code **)(lVar1 + 8))(uVar2,&local_18);
  local_18 = AlphaCurveName;
  local_10 = &this->FloatCurves[2]._padding_;
  (**(code **)(lVar1 + 8))(uVar2,&local_18);
  return;
}

// GetLinearColorValue @ 147a527c0

FLinearColor * __thiscall
UCurveLinearColor::GetLinearColorValue
          (UCurveLinearColor *this,FLinearColor *__return_storage_ptr__,float param_1)

{
  GetAdjustedColorValue
            ((UCurveLinearColor *)&this[-1].FloatCurves[3].Keys.ArrayNum,__return_storage_ptr__,
             param_1,false);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 147a57010

UClass * __cdecl UCurveLinearColor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCurveLinearColor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"CurveLinearColor",
               &Z_Registration_Info_UClass_UCurveLinearColor.InnerSingleton,
               StaticRegisterNativesUCurveLinearColor,0x250,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UCurveLinearColor>,
               InternalVTableHelperCtorCaller<UCurveLinearColor>,local_res8,UCurveBase::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCurveLinearColor.InnerSingleton;
}

// GetUnadjustedLinearColorValue @ 147a5b250

FLinearColor * __thiscall
UCurveLinearColor::GetUnadjustedLinearColorValue
          (UCurveLinearColor *this,FLinearColor *__return_storage_ptr__,float param_1)

{
  int iVar1;
  float fVar2;
  
  fVar2 = FRichCurve::Eval(this->FloatCurves,param_1,0.0);
  (__return_storage_ptr__->field0_0x0)._s_0.R = fVar2;
  fVar2 = FRichCurve::Eval(this->FloatCurves + 1,param_1,0.0);
  (__return_storage_ptr__->field0_0x0)._s_0.G = fVar2;
  fVar2 = FRichCurve::Eval(this->FloatCurves + 2,param_1,0.0);
  iVar1 = this->FloatCurves[3].Keys.ArrayNum;
  (__return_storage_ptr__->field0_0x0)._s_0.B = fVar2;
  fVar2 = __real_3f800000;
  if (iVar1 != 0) {
    fVar2 = FRichCurve::Eval(this->FloatCurves + 3,param_1,0.0);
  }
  (__return_storage_ptr__->field0_0x0)._s_0.A = fVar2;
  return __return_storage_ptr__;
}

// HasAnyAlphaKeys @ 147a5c2a0

bool __thiscall UCurveLinearColor::HasAnyAlphaKeys(UCurveLinearColor *this)

{
  return 0 < (int)this->FloatCurves[3]._padding_;
}

// IsLinearColorCurve @ 147a63370

bool __thiscall UCurveLinearColor::IsLinearColorCurve(UCurveLinearColor *this)

{
  return true;
}

// IsValidCurve @ 147a63420

bool __thiscall
UCurveLinearColor::IsValidCurve
          (UCurveLinearColor *this,FRichCurveEditInfoTemplate<FRealCurve_*> *param_1)

{
  FRealCurve *pFVar1;
  
  pFVar1 = param_1->CurveToEdit;
  if ((((pFVar1 != (FRealCurve *)&this->_padding_) &&
       (pFVar1 != (FRealCurve *)&this->FloatCurves[0]._padding_)) &&
      (pFVar1 != (FRealCurve *)&this->FloatCurves[1]._padding_)) &&
     (pFVar1 != (FRealCurve *)&this->FloatCurves[2]._padding_)) {
    return false;
  }
  return true;
}

// PostLoad @ 147a66bf0

void __thiscall UCurveLinearColor::PostLoad(UCurveLinearColor *this)

{
  longlong *_Dst;
  bool bVar1;
  int iVar2;
  uint *puVar3;
  FTlsAutoCleanup *pFVar4;
  FTlsAutoCleanup FVar5;
  FUObjectItem *pFVar6;
  FTlsAutoCleanup FVar7;
  undefined1 auStackX_8 [8];
  code *pcStack_18;
  undefined1 *puStack_10;
  
  puVar3 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  puStack_10 = auStackX_8;
  pcStack_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
  pFVar4 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&pcStack_18,puVar3);
  FVar7 = pFVar4[0x2d];
  if (pFVar4[0x2d] == (FTlsAutoCleanup)0x0) {
    FVar7 = (FTlsAutoCleanup)(pFVar4 + 0x1d);
  }
  FVar5 = FVar7;
  do {
    if (FVar5 == (FTlsAutoCleanup)((longlong)FVar7 + (longlong)*(int *)(pFVar4 + 0x2e) * 8)) {
LAB_142105eef:
      if ((*(uint *)(this->_padding_ + 0xd4) & 0x400) != 0) {
        UObject::LoadConfig((UObject *)this,(UClass *)0x0,(wchar_t *)0x0,0,(FProperty *)0x0,
                            (TArray<UE::ConfigAccessTracking::FConfigAccessData,TSizedDefaultAllocator<32>_>
                             *)0x0);
      }
      bVar1 = IsThisNotNull(this,"UObject::CanCheckDefaultSubObjects");
      if ((((bVar1) && ((this->_padding_ & 0x3400) == 0)) &&
          (((uint)this->_padding_ >> 0x1e & 1) == 0)) &&
         (pFVar6 = FUObjectArray::IndexToObject
                             (&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4)),
         ((uint)((ulonglong)(pFVar6->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0)) {
        FIsDuplicatingClassForReinstancing::operator_bool(&GIsDuplicatingClassForReinstancing);
      }
      return;
    }
    if (*(UCurveLinearColor **)FVar5 == this) {
      iVar2 = (int)((longlong)FVar5 - (longlong)FVar7 >> 3);
      if (iVar2 != -1) {
        _Dst = (longlong *)((longlong)FVar7 + (longlong)iVar2 * 8);
        memmove(_Dst,_Dst + 1,(longlong)((*(int *)(pFVar4 + 0x2e) - iVar2) + -1) << 3);
        *(int *)(pFVar4 + 0x2e) = *(int *)(pFVar4 + 0x2e) + -1;
      }
      goto LAB_142105eef;
    }
    FVar5 = (FTlsAutoCleanup)((longlong)FVar5 + 8);
  } while( true );
}

// Serialize @ 147a890f0

void __thiscall UCurveLinearColor::Serialize(UCurveLinearColor *this,FArchive *param_1)

{
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FReleaseObjectVersion::GUID);
  UObject::Serialize((UObject *)this,param_1);
  return;
}

// Serialize @ 147a89130

void __thiscall
UCurveLinearColor::Serialize(UCurveLinearColor *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FReleaseObjectVersion::GUID);
  UObject::Serialize((UObject *)this,pFVar1);
  return;
}

// StaticRegisterNativesUCurveLinearColor @ 147a97550

void __cdecl UCurveLinearColor::StaticRegisterNativesUCurveLinearColor(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UCurveLinearColor_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// __VTableCtorCaller @ 147aa2c60

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UCurveLinearColor::__VTableCtorCaller(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) = &_vftable__for__FCurveOwnerInterface__;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined4 *)&pUVar1[2].field_0x10 = 0;
    *(undefined4 *)&pUVar1[2].field_0x14 = 0x80;
    *(undefined4 *)&pUVar1[2].field_0x18 = 0xffffffff;
    *(undefined4 *)&pUVar1[2].field_0x1c = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined4 *)&pUVar1[3].field_0x8 = 0;
    *(undefined8 *)&pUVar1[3].field_0x10 = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    *(undefined ***)&pUVar1[1].field_0x8 = &___7FRichCurve__6B_;
    *(undefined4 *)&pUVar1[3].field_0x20 = 0x7f7fffff;
    *(undefined2 *)&pUVar1[3].field_0x24 = 0x404;
    *(undefined8 *)(pUVar1 + 4) = 0;
    *(undefined8 *)&pUVar1[4].field_0x8 = 0;
    *(undefined8 *)&pUVar1[4].field_0x18 = 0;
    *(undefined8 *)&pUVar1[4].field_0x20 = 0;
    *(undefined8 *)&pUVar1[5].field_0x10 = 0;
    *(undefined4 *)&pUVar1[5].field_0x18 = 0;
    *(undefined4 *)&pUVar1[5].field_0x1c = 0x80;
    *(undefined4 *)&pUVar1[5].field_0x20 = 0xffffffff;
    *(undefined4 *)&pUVar1[5].field_0x24 = 0;
    *(undefined8 *)&pUVar1[6].field_0x8 = 0;
    *(undefined4 *)&pUVar1[6].field_0x10 = 0;
    *(undefined8 *)&pUVar1[6].field_0x18 = 0;
    *(undefined8 *)&pUVar1[6].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 7) = 0x7f7fffff;
    *(undefined2 *)&pUVar1[7].field_0x4 = 0x404;
    *(undefined ***)&pUVar1[4].field_0x10 = &___7FRichCurve__6B_;
    *(undefined8 *)&pUVar1[7].field_0x8 = 0;
    *(undefined8 *)&pUVar1[7].field_0x10 = 0;
    *(undefined8 *)&pUVar1[7].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 8) = 0;
    *(undefined8 *)&pUVar1[8].field_0x18 = 0;
    *(undefined4 *)&pUVar1[8].field_0x20 = 0;
    *(undefined4 *)&pUVar1[8].field_0x24 = 0x80;
    *(undefined4 *)(pUVar1 + 9) = 0xffffffff;
    *(undefined4 *)&pUVar1[9].field_0x4 = 0;
    *(undefined8 *)&pUVar1[9].field_0x10 = 0;
    *(undefined4 *)&pUVar1[9].field_0x18 = 0;
    *(undefined8 *)&pUVar1[9].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 10) = 0;
    *(undefined4 *)&pUVar1[10].field_0x8 = 0x7f7fffff;
    *(undefined2 *)&pUVar1[10].field_0xc = 0x404;
    *(undefined ***)&pUVar1[7].field_0x18 = &___7FRichCurve__6B_;
    *(undefined8 *)&pUVar1[10].field_0x10 = 0;
    *(undefined8 *)&pUVar1[10].field_0x18 = 0;
    *(undefined8 *)(pUVar1 + 0xb) = 0;
    *(undefined8 *)&pUVar1[0xb].field_0x8 = 0;
    *(undefined8 *)&pUVar1[0xb].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 0xc) = 0;
    *(undefined4 *)&pUVar1[0xc].field_0x4 = 0x80;
    *(undefined4 *)&pUVar1[0xc].field_0x8 = 0xffffffff;
    *(undefined4 *)&pUVar1[0xc].field_0xc = 0;
    *(undefined8 *)&pUVar1[0xc].field_0x18 = 0;
    *(undefined4 *)&pUVar1[0xc].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 0xd) = 0;
    *(undefined8 *)&pUVar1[0xd].field_0x8 = 0;
    *(undefined4 *)&pUVar1[0xd].field_0x10 = 0x7f7fffff;
    *(undefined2 *)&pUVar1[0xd].field_0x14 = 0x404;
    *(undefined ***)&pUVar1[10].field_0x20 = &___7FRichCurve__6B_;
    *(undefined8 *)&pUVar1[0xd].field_0x18 = 0;
    *(undefined8 *)&pUVar1[0xd].field_0x20 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// execGetClampedLinearColorValue @ 147aa2ef0

void __cdecl
UCurveLinearColor::execGetClampedLinearColorValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined4 local_res8 [2];
  undefined1 local_18 [16];
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar3 = (undefined8 *)
           (**(code **)(*(longlong *)(param_1 + 1) + 0x68))(param_1 + 1,local_18,local_res8[0]);
  uVar2 = puVar3[1];
  *(undefined8 *)param_3 = *puVar3;
  *(undefined8 *)((longlong)param_3 + 8) = uVar2;
  return;
}

// execGetLinearColorValue @ 147aa3180

void __cdecl
UCurveLinearColor::execGetLinearColorValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined4 local_res8 [2];
  undefined1 local_18 [16];
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar3 = (undefined8 *)
           (**(code **)(*(longlong *)(param_1 + 1) + 0x60))(param_1 + 1,local_18,local_res8[0]);
  uVar2 = puVar3[1];
  *(undefined8 *)param_3 = *puVar3;
  *(undefined8 *)((longlong)param_3 + 8) = uVar2;
  return;
}

// execGetUnadjustedLinearColorValue @ 147aa3310

void __cdecl
UCurveLinearColor::execGetUnadjustedLinearColorValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_res8 [2];
  
  local_res8[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  fVar2 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar3 = FRichCurve::Eval((FRichCurve *)&param_1[1].field_0x8,local_res8[0],0.0);
  fVar4 = FRichCurve::Eval((FRichCurve *)&param_1[4].field_0x10,fVar2,0.0);
  fVar5 = FRichCurve::Eval((FRichCurve *)&param_1[7].field_0x18,fVar2,0.0);
  fVar6 = __real_3f800000;
  if (*(int *)&param_1[0xd].field_0x20 != 0) {
    fVar6 = FRichCurve::Eval((FRichCurve *)&param_1[10].field_0x20,fVar2,0.0);
  }
  *(float *)param_3 = fVar3;
  *(float *)((longlong)param_3 + 4) = fVar4;
  *(float *)((longlong)param_3 + 8) = fVar5;
  *(float *)((longlong)param_3 + 0xc) = fVar6;
  return;
}

