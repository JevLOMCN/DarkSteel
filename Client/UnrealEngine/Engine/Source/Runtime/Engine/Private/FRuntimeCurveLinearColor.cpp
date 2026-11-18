// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticStruct @ 147a0f7e0

UScriptStruct * __cdecl FRuntimeCurveLinearColor::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRuntimeCurveLinearColor.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FRuntimeCurveLinearColor.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRuntimeCurveLinearColor,(UObject *)pUVar1,
                         L"RuntimeCurveLinearColor");
  }
  return Z_Registration_Info_UScriptStruct_FRuntimeCurveLinearColor.OuterSingleton;
}

// FRuntimeCurveLinearColor @ 147a26840

FRuntimeCurveLinearColor * __thiscall
FRuntimeCurveLinearColor::FRuntimeCurveLinearColor(FRuntimeCurveLinearColor *this)

{
  this->ColorCurves[0]._padding_ = 0;
  this->ColorCurves[0]._padding_ = 0;
  this->ColorCurves[0]._padding_ = 0;
  *(undefined4 *)&this->ColorCurves[0]._padding_ = 0;
  *(undefined4 *)((longlong)&this->ColorCurves[0]._padding_ + 4) = 0x80;
  *(undefined4 *)&this->ColorCurves[0]._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->ColorCurves[0]._padding_ + 4) = 0;
  this->ColorCurves[0]._padding_ = 0;
  *(undefined4 *)&this->ColorCurves[0]._padding_ = 0;
  this->ColorCurves[0]._padding_ = 0;
  this->ColorCurves[0]._padding_ = 0;
  this->ColorCurves[0]._padding_ = (longlong)&___7FRichCurve__6B_;
  *(undefined4 *)&this->ColorCurves[0]._padding_ = 0x7f7fffff;
  *(undefined2 *)((longlong)&this->ColorCurves[0]._padding_ + 4) = 0x404;
  this->ColorCurves[0].Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->ColorCurves[0].Keys.ArrayNum = 0;
  this->ColorCurves[0].Keys.ArrayMax = 0;
  this->ColorCurves[1]._padding_ = 0;
  this->ColorCurves[1]._padding_ = 0;
  this->ColorCurves[1]._padding_ = 0;
  *(undefined4 *)&this->ColorCurves[1]._padding_ = 0;
  *(undefined4 *)((longlong)&this->ColorCurves[1]._padding_ + 4) = 0x80;
  *(undefined4 *)&this->ColorCurves[1]._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->ColorCurves[1]._padding_ + 4) = 0;
  this->ColorCurves[1]._padding_ = 0;
  *(undefined4 *)&this->ColorCurves[1]._padding_ = 0;
  this->ColorCurves[1]._padding_ = 0;
  this->ColorCurves[1]._padding_ = 0;
  *(undefined4 *)&this->ColorCurves[1]._padding_ = 0x7f7fffff;
  *(undefined2 *)((longlong)&this->ColorCurves[1]._padding_ + 4) = 0x404;
  this->ColorCurves[1]._padding_ = (longlong)&___7FRichCurve__6B_;
  this->ColorCurves[1].Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->ColorCurves[1].Keys.ArrayNum = 0;
  this->ColorCurves[1].Keys.ArrayMax = 0;
  this->ColorCurves[2]._padding_ = 0;
  this->ColorCurves[2]._padding_ = 0;
  this->ColorCurves[2]._padding_ = 0;
  *(undefined4 *)&this->ColorCurves[2]._padding_ = 0;
  *(undefined4 *)((longlong)&this->ColorCurves[2]._padding_ + 4) = 0x80;
  *(undefined4 *)&this->ColorCurves[2]._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->ColorCurves[2]._padding_ + 4) = 0;
  this->ColorCurves[2]._padding_ = 0;
  *(undefined4 *)&this->ColorCurves[2]._padding_ = 0;
  this->ColorCurves[2]._padding_ = 0;
  this->ColorCurves[2]._padding_ = 0;
  *(undefined4 *)&this->ColorCurves[2]._padding_ = 0x7f7fffff;
  *(undefined2 *)((longlong)&this->ColorCurves[2]._padding_ + 4) = 0x404;
  this->ColorCurves[2]._padding_ = (longlong)&___7FRichCurve__6B_;
  this->ColorCurves[2].Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->ColorCurves[2].Keys.ArrayNum = 0;
  this->ColorCurves[2].Keys.ArrayMax = 0;
  this->ColorCurves[3]._padding_ = 0;
  this->ColorCurves[3]._padding_ = 0;
  this->ColorCurves[3]._padding_ = 0;
  *(undefined4 *)&this->ColorCurves[3]._padding_ = 0;
  *(undefined4 *)((longlong)&this->ColorCurves[3]._padding_ + 4) = 0x80;
  *(undefined4 *)&this->ColorCurves[3]._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->ColorCurves[3]._padding_ + 4) = 0;
  this->ColorCurves[3]._padding_ = 0;
  *(undefined4 *)&this->ColorCurves[3]._padding_ = 0;
  this->ColorCurves[3]._padding_ = 0;
  this->ColorCurves[3]._padding_ = 0;
  *(undefined4 *)&this->ColorCurves[3]._padding_ = 0x7f7fffff;
  *(undefined2 *)((longlong)&this->ColorCurves[3]._padding_ + 4) = 0x404;
  this->ColorCurves[3]._padding_ = (longlong)&___7FRichCurve__6B_;
  this->ColorCurves[3].Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->ColorCurves[3].Keys.ArrayNum = 0;
  this->ColorCurves[3].Keys.ArrayMax = 0;
  (this->ExternalCurve).field0_0x0.DebugPtr = (UCurveLinearColor *)0x0;
  return this;
}

// ~FRuntimeCurveLinearColor @ 147a29bc0

void __thiscall FRuntimeCurveLinearColor::~FRuntimeCurveLinearColor(FRuntimeCurveLinearColor *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = this->ColorCurves[3].Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->ColorCurves[3]._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)this->ColorCurves[3]._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&this->ColorCurves[3]._padding_ = 0;
  pvVar2 = (void *)this->ColorCurves[3]._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ColorCurves[3]._padding_);
  pFVar1 = this->ColorCurves[2].Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->ColorCurves[2]._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)this->ColorCurves[2]._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&this->ColorCurves[2]._padding_ = 0;
  pvVar2 = (void *)this->ColorCurves[2]._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ColorCurves[2]._padding_);
  pFVar1 = this->ColorCurves[1].Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->ColorCurves[1]._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)this->ColorCurves[1]._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&this->ColorCurves[1]._padding_ = 0;
  pvVar2 = (void *)this->ColorCurves[1]._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ColorCurves[1]._padding_);
  pFVar1 = this->ColorCurves[0].Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->ColorCurves[0]._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)this->ColorCurves[0]._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&this->ColorCurves[0]._padding_ = 0;
  pvVar2 = (void *)this->ColorCurves[0]._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ColorCurves[0]._padding_);
  return;
}

// GetLinearColorValue @ 147a526c0

FLinearColor * __thiscall
FRuntimeCurveLinearColor::GetLinearColorValue
          (FRuntimeCurveLinearColor *this,FLinearColor *__return_storage_ptr__,float param_1)

{
  UCurveLinearColor *pUVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  pUVar1 = (this->ExternalCurve).field0_0x0.DebugPtr;
  if (pUVar1 == (UCurveLinearColor *)0x0) {
    fVar2 = FRichCurve::Eval(this->ColorCurves,param_1,0.0);
    fVar3 = FRichCurve::Eval(this->ColorCurves + 1,param_1,0.0);
    fVar4 = FRichCurve::Eval(this->ColorCurves + 2,param_1,0.0);
    fVar5 = __real_3f800000;
    if (this->ColorCurves[3].Keys.ArrayNum != 0) {
      fVar5 = FRichCurve::Eval(this->ColorCurves + 3,param_1,0.0);
    }
    (__return_storage_ptr__->field0_0x0)._s_0.R = fVar2;
    (__return_storage_ptr__->field0_0x0)._s_0.G = fVar3;
    (__return_storage_ptr__->field0_0x0)._s_0.B = fVar4;
    (__return_storage_ptr__->field0_0x0)._s_0.A = fVar5;
    return __return_storage_ptr__;
  }
  (**(code **)(pUVar1->_padding_ + 0x60))(&pUVar1->_padding_);
  return __return_storage_ptr__;
}

// FRuntimeCurveLinearColor @ 147f2a200

FRuntimeCurveLinearColor * __thiscall
FRuntimeCurveLinearColor::FRuntimeCurveLinearColor
          (FRuntimeCurveLinearColor *this,FRuntimeCurveLinearColor *param_1)

{
  TArray<FRichCurveKey,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  UCurveLinearColor *pUVar5;
  
  pTVar1 = &this->ColorCurves[0].Keys;
  this->ColorCurves[0]._padding_ = 0;
  this->ColorCurves[0]._padding_ = 0;
  this->ColorCurves[0]._padding_ = 0;
  *(undefined4 *)&this->ColorCurves[0]._padding_ = 0;
  *(undefined4 *)((longlong)&this->ColorCurves[0]._padding_ + 4) = 0x80;
  *(undefined4 *)&this->ColorCurves[0]._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->ColorCurves[0]._padding_ + 4) = 0;
  this->ColorCurves[0]._padding_ = 0;
  *(undefined4 *)&this->ColorCurves[0]._padding_ = 0;
  this->ColorCurves[0]._padding_ = 0;
  this->ColorCurves[0]._padding_ = 0;
  this->ColorCurves[0]._padding_ = (longlong)&___7FRealCurve__6B_;
  *(int *)&this->ColorCurves[0]._padding_ = (int)param_1->ColorCurves[0]._padding_;
  *(undefined1 *)((longlong)&this->ColorCurves[0]._padding_ + 4) =
       *(undefined1 *)((longlong)&param_1->ColorCurves[0]._padding_ + 4);
  *(undefined1 *)((longlong)&this->ColorCurves[0]._padding_ + 5) =
       *(undefined1 *)((longlong)&param_1->ColorCurves[0]._padding_ + 5);
  piVar2 = &this->ColorCurves[0].Keys.ArrayMax;
  this->ColorCurves[0]._padding_ = (longlong)&___7FRichCurve__6B_;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = param_1->ColorCurves[0].Keys.ArrayNum;
  pFVar4 = param_1->ColorCurves[0].Keys.AllocatorInstance.Data;
  this->ColorCurves[0].Keys.ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x1c,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar4,(longlong)iVar3 * 0x1c);
  }
  this->ColorCurves[1]._padding_ = 0;
  pTVar1 = &this->ColorCurves[1].Keys;
  this->ColorCurves[1]._padding_ = 0;
  this->ColorCurves[1]._padding_ = 0;
  *(undefined4 *)&this->ColorCurves[1]._padding_ = 0;
  *(undefined4 *)((longlong)&this->ColorCurves[1]._padding_ + 4) = 0x80;
  *(undefined4 *)&this->ColorCurves[1]._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->ColorCurves[1]._padding_ + 4) = 0;
  this->ColorCurves[1]._padding_ = 0;
  *(undefined4 *)&this->ColorCurves[1]._padding_ = 0;
  this->ColorCurves[1]._padding_ = 0;
  this->ColorCurves[1]._padding_ = 0;
  this->ColorCurves[1]._padding_ = (longlong)&___7FRealCurve__6B_;
  *(int *)&this->ColorCurves[1]._padding_ = (int)param_1->ColorCurves[1]._padding_;
  *(undefined1 *)((longlong)&this->ColorCurves[1]._padding_ + 4) =
       *(undefined1 *)((longlong)&param_1->ColorCurves[1]._padding_ + 4);
  *(undefined1 *)((longlong)&this->ColorCurves[1]._padding_ + 5) =
       *(undefined1 *)((longlong)&param_1->ColorCurves[1]._padding_ + 5);
  piVar2 = &this->ColorCurves[1].Keys.ArrayMax;
  this->ColorCurves[1]._padding_ = (longlong)&___7FRichCurve__6B_;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = param_1->ColorCurves[1].Keys.ArrayNum;
  pFVar4 = param_1->ColorCurves[1].Keys.AllocatorInstance.Data;
  this->ColorCurves[1].Keys.ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x1c,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar4,(longlong)iVar3 * 0x1c);
  }
  this->ColorCurves[2]._padding_ = 0;
  pTVar1 = &this->ColorCurves[2].Keys;
  this->ColorCurves[2]._padding_ = 0;
  this->ColorCurves[2]._padding_ = 0;
  *(undefined4 *)&this->ColorCurves[2]._padding_ = 0;
  *(undefined4 *)((longlong)&this->ColorCurves[2]._padding_ + 4) = 0x80;
  *(undefined4 *)&this->ColorCurves[2]._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->ColorCurves[2]._padding_ + 4) = 0;
  this->ColorCurves[2]._padding_ = 0;
  *(undefined4 *)&this->ColorCurves[2]._padding_ = 0;
  this->ColorCurves[2]._padding_ = 0;
  this->ColorCurves[2]._padding_ = 0;
  this->ColorCurves[2]._padding_ = (longlong)&___7FRealCurve__6B_;
  *(int *)&this->ColorCurves[2]._padding_ = (int)param_1->ColorCurves[2]._padding_;
  *(undefined1 *)((longlong)&this->ColorCurves[2]._padding_ + 4) =
       *(undefined1 *)((longlong)&param_1->ColorCurves[2]._padding_ + 4);
  *(undefined1 *)((longlong)&this->ColorCurves[2]._padding_ + 5) =
       *(undefined1 *)((longlong)&param_1->ColorCurves[2]._padding_ + 5);
  piVar2 = &this->ColorCurves[2].Keys.ArrayMax;
  this->ColorCurves[2]._padding_ = (longlong)&___7FRichCurve__6B_;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = param_1->ColorCurves[2].Keys.ArrayNum;
  pFVar4 = param_1->ColorCurves[2].Keys.AllocatorInstance.Data;
  this->ColorCurves[2].Keys.ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x1c,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar4,(longlong)iVar3 * 0x1c);
  }
  this->ColorCurves[3]._padding_ = 0;
  pTVar1 = &this->ColorCurves[3].Keys;
  this->ColorCurves[3]._padding_ = 0;
  this->ColorCurves[3]._padding_ = 0;
  *(undefined4 *)&this->ColorCurves[3]._padding_ = 0;
  *(undefined4 *)((longlong)&this->ColorCurves[3]._padding_ + 4) = 0x80;
  *(undefined4 *)&this->ColorCurves[3]._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->ColorCurves[3]._padding_ + 4) = 0;
  this->ColorCurves[3]._padding_ = 0;
  *(undefined4 *)&this->ColorCurves[3]._padding_ = 0;
  this->ColorCurves[3]._padding_ = 0;
  this->ColorCurves[3]._padding_ = 0;
  this->ColorCurves[3]._padding_ = (longlong)&___7FRealCurve__6B_;
  *(int *)&this->ColorCurves[3]._padding_ = (int)param_1->ColorCurves[3]._padding_;
  *(undefined1 *)((longlong)&this->ColorCurves[3]._padding_ + 4) =
       *(undefined1 *)((longlong)&param_1->ColorCurves[3]._padding_ + 4);
  *(undefined1 *)((longlong)&this->ColorCurves[3]._padding_ + 5) =
       *(undefined1 *)((longlong)&param_1->ColorCurves[3]._padding_ + 5);
  piVar2 = &this->ColorCurves[3].Keys.ArrayMax;
  this->ColorCurves[3]._padding_ = (longlong)&___7FRichCurve__6B_;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = param_1->ColorCurves[3].Keys.ArrayNum;
  pFVar4 = param_1->ColorCurves[3].Keys.AllocatorInstance.Data;
  this->ColorCurves[3].Keys.ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x1c,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar4,(longlong)iVar3 * 0x1c);
  }
  pUVar5 = (param_1->ExternalCurve).field0_0x0.DebugPtr;
  (this->ExternalCurve).field0_0x0.DebugPtr = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UCurveLinearColor *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  return this;
}

// operator= @ 147f2f700

FRuntimeCurveLinearColor * __thiscall
FRuntimeCurveLinearColor::operator=
          (FRuntimeCurveLinearColor *this,FRuntimeCurveLinearColor *param_1)

{
  TArray<FRichCurveKey,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FRichCurveKey,TSizedDefaultAllocator<32>_> *pTVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  UCurveLinearColor *pUVar7;
  
  *(int *)&this->ColorCurves[0]._padding_ = (int)param_1->ColorCurves[0]._padding_;
  *(undefined1 *)((longlong)&this->ColorCurves[0]._padding_ + 4) =
       *(undefined1 *)((longlong)&param_1->ColorCurves[0]._padding_ + 4);
  pTVar1 = &this->ColorCurves[0].Keys;
  *(undefined1 *)((longlong)&this->ColorCurves[0]._padding_ + 5) =
       *(undefined1 *)((longlong)&param_1->ColorCurves[0]._padding_ + 5);
  pTVar2 = &param_1->ColorCurves[0].Keys;
  if (pTVar1 != pTVar2) {
    iVar4 = param_1->ColorCurves[0].Keys.ArrayNum;
    piVar3 = &this->ColorCurves[0].Keys.ArrayMax;
    pFVar6 = (pTVar2->AllocatorInstance).Data;
    iVar5 = *piVar3;
    this->ColorCurves[0].Keys.ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar5 == 0)) {
      *piVar3 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x1c,4,iVar4,iVar5,&pTVar1->AllocatorInstance,iVar4,piVar3);
      if (iVar4 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,pFVar6,(longlong)iVar4 * 0x1c);
      }
    }
  }
  pTVar1 = &this->ColorCurves[1].Keys;
  *(int *)&this->ColorCurves[1]._padding_ = (int)param_1->ColorCurves[1]._padding_;
  *(undefined1 *)((longlong)&this->ColorCurves[1]._padding_ + 4) =
       *(undefined1 *)((longlong)&param_1->ColorCurves[1]._padding_ + 4);
  *(undefined1 *)((longlong)&this->ColorCurves[1]._padding_ + 5) =
       *(undefined1 *)((longlong)&param_1->ColorCurves[1]._padding_ + 5);
  pTVar2 = &param_1->ColorCurves[1].Keys;
  if (pTVar1 != pTVar2) {
    iVar4 = param_1->ColorCurves[1].Keys.ArrayNum;
    piVar3 = &this->ColorCurves[1].Keys.ArrayMax;
    iVar5 = *piVar3;
    pFVar6 = (pTVar2->AllocatorInstance).Data;
    this->ColorCurves[1].Keys.ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar5 == 0)) {
      *piVar3 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x1c,4,iVar4,iVar5,&pTVar1->AllocatorInstance,iVar4,piVar3);
      if (iVar4 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,pFVar6,(longlong)iVar4 * 0x1c);
      }
    }
  }
  pTVar1 = &this->ColorCurves[2].Keys;
  *(int *)&this->ColorCurves[2]._padding_ = (int)param_1->ColorCurves[2]._padding_;
  *(undefined1 *)((longlong)&this->ColorCurves[2]._padding_ + 4) =
       *(undefined1 *)((longlong)&param_1->ColorCurves[2]._padding_ + 4);
  *(undefined1 *)((longlong)&this->ColorCurves[2]._padding_ + 5) =
       *(undefined1 *)((longlong)&param_1->ColorCurves[2]._padding_ + 5);
  pTVar2 = &param_1->ColorCurves[2].Keys;
  if (pTVar1 != pTVar2) {
    iVar4 = param_1->ColorCurves[2].Keys.ArrayNum;
    piVar3 = &this->ColorCurves[2].Keys.ArrayMax;
    iVar5 = *piVar3;
    pFVar6 = (pTVar2->AllocatorInstance).Data;
    this->ColorCurves[2].Keys.ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar5 == 0)) {
      *piVar3 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x1c,4,iVar4,iVar5,&pTVar1->AllocatorInstance,iVar4,piVar3);
      if (iVar4 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,pFVar6,(longlong)iVar4 * 0x1c);
      }
    }
  }
  pTVar1 = &param_1->ColorCurves[3].Keys;
  *(int *)&this->ColorCurves[3]._padding_ = (int)param_1->ColorCurves[3]._padding_;
  pTVar2 = &this->ColorCurves[3].Keys;
  *(undefined1 *)((longlong)&this->ColorCurves[3]._padding_ + 4) =
       *(undefined1 *)((longlong)&param_1->ColorCurves[3]._padding_ + 4);
  *(undefined1 *)((longlong)&this->ColorCurves[3]._padding_ + 5) =
       *(undefined1 *)((longlong)&param_1->ColorCurves[3]._padding_ + 5);
  if (pTVar2 != pTVar1) {
    iVar4 = param_1->ColorCurves[3].Keys.ArrayNum;
    piVar3 = &this->ColorCurves[3].Keys.ArrayMax;
    iVar5 = *piVar3;
    pFVar6 = (pTVar1->AllocatorInstance).Data;
    this->ColorCurves[3].Keys.ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar5 == 0)) {
      *piVar3 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x1c,4,iVar4,iVar5,&pTVar2->AllocatorInstance,iVar4,piVar3);
      if (iVar4 != 0) {
        memcpy((pTVar2->AllocatorInstance).Data,pFVar6,(longlong)iVar4 * 0x1c);
      }
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar7 = (param_1->ExternalCurve).field0_0x0.DebugPtr, pUVar7 != (UCurveLinearColor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  (this->ExternalCurve).field0_0x0 = (param_1->ExternalCurve).field0_0x0;
  return this;
}

// operator= @ 148447430

FRuntimeCurveLinearColor * __thiscall
FRuntimeCurveLinearColor::operator=
          (FRuntimeCurveLinearColor *this,FRuntimeCurveLinearColor *param_1)

{
  TArray<FRichCurveKey,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FRichCurveKey,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  UCurveLinearColor *pUVar4;
  
  pTVar1 = &param_1->ColorCurves[0].Keys;
  *(int *)&this->ColorCurves[0]._padding_ = (int)param_1->ColorCurves[0]._padding_;
  pTVar2 = &this->ColorCurves[0].Keys;
  *(undefined1 *)((longlong)&this->ColorCurves[0]._padding_ + 4) =
       *(undefined1 *)((longlong)&param_1->ColorCurves[0]._padding_ + 4);
  *(undefined1 *)((longlong)&this->ColorCurves[0]._padding_ + 5) =
       *(undefined1 *)((longlong)&param_1->ColorCurves[0]._padding_ + 5);
  if (pTVar2 != pTVar1) {
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    this->ColorCurves[0].Keys.ArrayNum = param_1->ColorCurves[0].Keys.ArrayNum;
    this->ColorCurves[0].Keys.ArrayMax = param_1->ColorCurves[0].Keys.ArrayMax;
    param_1->ColorCurves[0].Keys.ArrayNum = 0;
    param_1->ColorCurves[0].Keys.ArrayMax = 0;
  }
  pTVar1 = &param_1->ColorCurves[1].Keys;
  *(int *)&this->ColorCurves[1]._padding_ = (int)param_1->ColorCurves[1]._padding_;
  pTVar2 = &this->ColorCurves[1].Keys;
  *(undefined1 *)((longlong)&this->ColorCurves[1]._padding_ + 4) =
       *(undefined1 *)((longlong)&param_1->ColorCurves[1]._padding_ + 4);
  *(undefined1 *)((longlong)&this->ColorCurves[1]._padding_ + 5) =
       *(undefined1 *)((longlong)&param_1->ColorCurves[1]._padding_ + 5);
  if (pTVar2 != pTVar1) {
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    this->ColorCurves[1].Keys.ArrayNum = param_1->ColorCurves[1].Keys.ArrayNum;
    this->ColorCurves[1].Keys.ArrayMax = param_1->ColorCurves[1].Keys.ArrayMax;
    param_1->ColorCurves[1].Keys.ArrayNum = 0;
    param_1->ColorCurves[1].Keys.ArrayMax = 0;
  }
  pTVar1 = &param_1->ColorCurves[2].Keys;
  *(int *)&this->ColorCurves[2]._padding_ = (int)param_1->ColorCurves[2]._padding_;
  pTVar2 = &this->ColorCurves[2].Keys;
  *(undefined1 *)((longlong)&this->ColorCurves[2]._padding_ + 4) =
       *(undefined1 *)((longlong)&param_1->ColorCurves[2]._padding_ + 4);
  *(undefined1 *)((longlong)&this->ColorCurves[2]._padding_ + 5) =
       *(undefined1 *)((longlong)&param_1->ColorCurves[2]._padding_ + 5);
  if (pTVar2 != pTVar1) {
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    this->ColorCurves[2].Keys.ArrayNum = param_1->ColorCurves[2].Keys.ArrayNum;
    this->ColorCurves[2].Keys.ArrayMax = param_1->ColorCurves[2].Keys.ArrayMax;
    param_1->ColorCurves[2].Keys.ArrayNum = 0;
    param_1->ColorCurves[2].Keys.ArrayMax = 0;
  }
  pTVar1 = &param_1->ColorCurves[3].Keys;
  *(int *)&this->ColorCurves[3]._padding_ = (int)param_1->ColorCurves[3]._padding_;
  pTVar2 = &this->ColorCurves[3].Keys;
  *(undefined1 *)((longlong)&this->ColorCurves[3]._padding_ + 4) =
       *(undefined1 *)((longlong)&param_1->ColorCurves[3]._padding_ + 4);
  *(undefined1 *)((longlong)&this->ColorCurves[3]._padding_ + 5) =
       *(undefined1 *)((longlong)&param_1->ColorCurves[3]._padding_ + 5);
  if (pTVar2 != pTVar1) {
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    this->ColorCurves[3].Keys.ArrayNum = param_1->ColorCurves[3].Keys.ArrayNum;
    this->ColorCurves[3].Keys.ArrayMax = param_1->ColorCurves[3].Keys.ArrayMax;
    param_1->ColorCurves[3].Keys.ArrayNum = 0;
    param_1->ColorCurves[3].Keys.ArrayMax = 0;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 = (param_1->ExternalCurve).field0_0x0.DebugPtr, pUVar4 != (UCurveLinearColor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->ExternalCurve).field0_0x0 = (param_1->ExternalCurve).field0_0x0;
  return this;
}

