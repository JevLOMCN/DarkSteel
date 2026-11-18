// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 11

// StaticStruct @ 14741ec60

UScriptStruct * __cdecl FVectorCurve::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FVectorCurve.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FVectorCurve.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FVectorCurve,(UObject *)pUVar1,L"VectorCurve");
  }
  return Z_Registration_Info_UScriptStruct_FVectorCurve.OuterSingleton;
}

// FVectorCurve @ 1474340d0

FVectorCurve * __thiscall FVectorCurve::FVectorCurve(FVectorCurve *this,FVectorCurve *param_1)

{
  TArray<FRichCurveKey,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  pTVar1 = &this->FloatCurves[0].Keys;
  this->_padding_ = param_1->_padding_;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
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
  this->FloatCurves[0]._padding_ = (longlong)&___7FRealCurve__6B_;
  *(int *)&this->FloatCurves[0]._padding_ = (int)param_1->FloatCurves[0]._padding_;
  *(undefined1 *)((longlong)&this->FloatCurves[0]._padding_ + 4) =
       *(undefined1 *)((longlong)&param_1->FloatCurves[0]._padding_ + 4);
  *(undefined1 *)((longlong)&this->FloatCurves[0]._padding_ + 5) =
       *(undefined1 *)((longlong)&param_1->FloatCurves[0]._padding_ + 5);
  piVar2 = &this->FloatCurves[0].Keys.ArrayMax;
  this->FloatCurves[0]._padding_ = (longlong)&___7FRichCurve__6B_;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = param_1->FloatCurves[0].Keys.ArrayNum;
  pFVar4 = param_1->FloatCurves[0].Keys.AllocatorInstance.Data;
  this->FloatCurves[0].Keys.ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x1c,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar4,(longlong)iVar3 * 0x1c);
  }
  this->FloatCurves[1]._padding_ = 0;
  pTVar1 = &this->FloatCurves[1].Keys;
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
  this->FloatCurves[1]._padding_ = (longlong)&___7FRealCurve__6B_;
  *(int *)&this->FloatCurves[1]._padding_ = (int)param_1->FloatCurves[1]._padding_;
  *(undefined1 *)((longlong)&this->FloatCurves[1]._padding_ + 4) =
       *(undefined1 *)((longlong)&param_1->FloatCurves[1]._padding_ + 4);
  *(undefined1 *)((longlong)&this->FloatCurves[1]._padding_ + 5) =
       *(undefined1 *)((longlong)&param_1->FloatCurves[1]._padding_ + 5);
  piVar2 = &this->FloatCurves[1].Keys.ArrayMax;
  this->FloatCurves[1]._padding_ = (longlong)&___7FRichCurve__6B_;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = param_1->FloatCurves[1].Keys.ArrayNum;
  pFVar4 = param_1->FloatCurves[1].Keys.AllocatorInstance.Data;
  this->FloatCurves[1].Keys.ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x1c,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar4,(longlong)iVar3 * 0x1c);
  }
  this->FloatCurves[2]._padding_ = 0;
  pTVar1 = &this->FloatCurves[2].Keys;
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
  this->FloatCurves[2]._padding_ = (longlong)&___7FRealCurve__6B_;
  *(int *)&this->FloatCurves[2]._padding_ = (int)param_1->FloatCurves[2]._padding_;
  *(undefined1 *)((longlong)&this->FloatCurves[2]._padding_ + 4) =
       *(undefined1 *)((longlong)&param_1->FloatCurves[2]._padding_ + 4);
  *(undefined1 *)((longlong)&this->FloatCurves[2]._padding_ + 5) =
       *(undefined1 *)((longlong)&param_1->FloatCurves[2]._padding_ + 5);
  piVar2 = &this->FloatCurves[2].Keys.ArrayMax;
  this->FloatCurves[2]._padding_ = (longlong)&___7FRichCurve__6B_;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = param_1->FloatCurves[2].Keys.ArrayNum;
  pFVar4 = param_1->FloatCurves[2].Keys.AllocatorInstance.Data;
  this->FloatCurves[2].Keys.ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x1c,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar4,(longlong)iVar3 * 0x1c);
  }
  return this;
}

// FVectorCurve @ 1474343b0

FVectorCurve * __thiscall FVectorCurve::FVectorCurve(FVectorCurve *this)

{
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
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
  return this;
}

// ~FVectorCurve @ 147436830

void __thiscall FVectorCurve::~FVectorCurve(FVectorCurve *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
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
  return;
}

// operator= @ 14743a280

FVectorCurve * __thiscall FVectorCurve::operator=(FVectorCurve *this,FVectorCurve *param_1)

{
  int *piVar1;
  TArray<FRichCurveKey,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FRichCurveKey,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  
  this->_padding_ = param_1->_padding_;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(int *)&this->FloatCurves[0]._padding_ = (int)param_1->FloatCurves[0]._padding_;
  *(undefined1 *)((longlong)&this->FloatCurves[0]._padding_ + 4) =
       *(undefined1 *)((longlong)&param_1->FloatCurves[0]._padding_ + 4);
  *(undefined1 *)((longlong)&this->FloatCurves[0]._padding_ + 5) =
       *(undefined1 *)((longlong)&param_1->FloatCurves[0]._padding_ + 5);
  pTVar2 = &param_1->FloatCurves[0].Keys;
  pTVar3 = &this->FloatCurves[0].Keys;
  if (pTVar3 != pTVar2) {
    iVar4 = param_1->FloatCurves[0].Keys.ArrayNum;
    piVar1 = &this->FloatCurves[0].Keys.ArrayMax;
    pFVar6 = (pTVar2->AllocatorInstance).Data;
    iVar5 = *piVar1;
    this->FloatCurves[0].Keys.ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar5 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x1c,4,iVar4,iVar5,&pTVar3->AllocatorInstance,iVar4,piVar1);
      if (iVar4 != 0) {
        memcpy((pTVar3->AllocatorInstance).Data,pFVar6,(longlong)iVar4 * 0x1c);
      }
    }
  }
  pTVar2 = &param_1->FloatCurves[1].Keys;
  *(int *)&this->FloatCurves[1]._padding_ = (int)param_1->FloatCurves[1]._padding_;
  pTVar3 = &this->FloatCurves[1].Keys;
  *(undefined1 *)((longlong)&this->FloatCurves[1]._padding_ + 4) =
       *(undefined1 *)((longlong)&param_1->FloatCurves[1]._padding_ + 4);
  *(undefined1 *)((longlong)&this->FloatCurves[1]._padding_ + 5) =
       *(undefined1 *)((longlong)&param_1->FloatCurves[1]._padding_ + 5);
  if (pTVar3 != pTVar2) {
    iVar4 = param_1->FloatCurves[1].Keys.ArrayNum;
    piVar1 = &this->FloatCurves[1].Keys.ArrayMax;
    iVar5 = *piVar1;
    pFVar6 = (pTVar2->AllocatorInstance).Data;
    this->FloatCurves[1].Keys.ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar5 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x1c,4,iVar4,iVar5,&pTVar3->AllocatorInstance,iVar4,piVar1);
      if (iVar4 != 0) {
        memcpy((pTVar3->AllocatorInstance).Data,pFVar6,(longlong)iVar4 * 0x1c);
      }
    }
  }
  pTVar2 = &param_1->FloatCurves[2].Keys;
  pTVar3 = &this->FloatCurves[2].Keys;
  *(int *)&this->FloatCurves[2]._padding_ = (int)param_1->FloatCurves[2]._padding_;
  *(undefined1 *)((longlong)&this->FloatCurves[2]._padding_ + 4) =
       *(undefined1 *)((longlong)&param_1->FloatCurves[2]._padding_ + 4);
  *(undefined1 *)((longlong)&this->FloatCurves[2]._padding_ + 5) =
       *(undefined1 *)((longlong)&param_1->FloatCurves[2]._padding_ + 5);
  if (pTVar3 != pTVar2) {
    iVar4 = param_1->FloatCurves[2].Keys.ArrayNum;
    piVar1 = &this->FloatCurves[2].Keys.ArrayMax;
    iVar5 = *piVar1;
    pFVar6 = (pTVar2->AllocatorInstance).Data;
    this->FloatCurves[2].Keys.ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar5 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x1c,4,iVar4,iVar5,&pTVar3->AllocatorInstance,iVar4,piVar1);
      if (iVar4 != 0) {
        memcpy((pTVar3->AllocatorInstance).Data,pFVar6,(longlong)iVar4 * 0x1c);
      }
    }
  }
  return this;
}

// CopyCurve @ 1474451c0

void __thiscall FVectorCurve::CopyCurve(FVectorCurve *this,FVectorCurve *param_1)

{
  FRichCurve::operator=(this->FloatCurves,param_1->FloatCurves);
  FRichCurve::operator=(this->FloatCurves + 1,param_1->FloatCurves + 1);
  FRichCurve::operator=(this->FloatCurves + 2,param_1->FloatCurves + 2);
  return;
}

// Evaluate @ 1474495e0

TVector<double> * __thiscall
FVectorCurve::Evaluate
          (FVectorCurve *this,TVector<double> *__return_storage_ptr__,float param_1,float param_2)

{
  float fVar1;
  
  fVar1 = FRichCurve::Eval(this->FloatCurves,param_1,0.0);
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)(fVar1 * param_2);
  fVar1 = FRichCurve::Eval(this->FloatCurves + 1,param_1,0.0);
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)(fVar1 * param_2);
  fVar1 = FRichCurve::Eval(this->FloatCurves + 2,param_1,0.0);
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)(fVar1 * param_2);
  return __return_storage_ptr__;
}

// GetKeys @ 147456db0

void __thiscall
FVectorCurve::GetKeys
          (FVectorCurve *this,TArray<float,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  FRichCurve *this_00;
  float fVar14;
  float fVar15;
  float local_68 [2];
  double local_60;
  double dStack_58;
  double local_50;
  
  uVar3 = this->FloatCurves[0].Keys.ArrayNum;
  iVar11 = 0;
  uVar4 = this->FloatCurves[2].Keys.ArrayNum;
  uVar13 = uVar3;
  if ((int)uVar3 < 1) {
    uVar13 = 0;
  }
  uVar5 = this->FloatCurves[1].Keys.ArrayNum;
  uVar12 = uVar5;
  if ((int)uVar5 <= (int)uVar13) {
    uVar12 = uVar13;
  }
  iVar10 = (0 < (int)uVar3) - 1;
  if ((int)uVar13 < (int)uVar5) {
    iVar10 = 1;
  }
  if ((int)uVar12 < (int)uVar4) {
    iVar10 = 2;
    uVar12 = uVar4;
  }
  else if (iVar10 == -1) {
    return;
  }
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
  }
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar12) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar12,&param_1->AllocatorInstance,0,piVar1);
  }
  piVar2 = &param_2->ArrayMax;
  param_2->ArrayNum = 0;
  if (*piVar2 != uVar12) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar12,&param_2->AllocatorInstance,0,piVar2);
  }
  this_00 = this->FloatCurves + iVar10;
  iVar10 = (**(code **)(this_00->_padding_ + 8))(this_00);
  FIndexedCurve::EnsureAllIndicesHaveHandles_Internal((FIndexedCurve *)this_00,iVar10);
  while( true ) {
    if ((iVar11 < 0) || ((int)this_00->_padding_ <= iVar11)) {
      return;
    }
    if ((iVar11 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    fVar14 = FRichCurve::GetKeyTime
                       (this_00,(FKeyHandle)*(uint *)(this_00->_padding_ + (longlong)iVar11 * 4));
    local_68[0] = fVar14;
    fVar15 = FRichCurve::Eval(this->FloatCurves,fVar14,0.0);
    local_60 = (double)fVar15;
    fVar15 = FRichCurve::Eval(this->FloatCurves + 1,fVar14,0.0);
    dStack_58 = (double)fVar15;
    fVar14 = FRichCurve::Eval(this->FloatCurves + 2,fVar14,0.0);
    pFVar6 = (param_1->AllocatorInstance).Data;
    local_50 = (double)fVar14;
    if (((pFVar6 <= (FScriptContainerElement *)local_68) &&
        ((FScriptContainerElement *)local_68 < pFVar6 + (longlong)*piVar1 * 4)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar10 = param_1->ArrayNum;
    if (iVar10 == *piVar1) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&param_1->AllocatorInstance,piVar1);
    }
    param_1->ArrayNum = iVar10 + 1;
    *(float *)((param_1->AllocatorInstance).Data + (longlong)iVar10 * 4) = local_68[0];
    pFVar6 = (param_2->AllocatorInstance).Data;
    if (((pFVar6 <= (FScriptContainerElement *)&local_60) &&
        ((FScriptContainerElement *)&local_60 < pFVar6 + (longlong)*piVar2 * 0x18)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) break;
    iVar10 = param_2->ArrayNum;
    if (iVar10 == *piVar2) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&param_2->AllocatorInstance,piVar2);
    }
    iVar11 = iVar11 + 1;
    param_2->ArrayNum = iVar10 + 1;
    pFVar7 = (param_2->AllocatorInstance).Data;
    pFVar6 = pFVar7 + (longlong)iVar10 * 0x18;
    *(double *)pFVar6 = local_60;
    *(double *)(pFVar6 + 8) = dStack_58;
    *(double *)(pFVar7 + (longlong)iVar10 * 0x18 + 0x10) = local_50;
  }
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

// GetNumKeys @ 147459280

int __thiscall FVectorCurve::GetNumKeys(FVectorCurve *this)

{
  int iVar1;
  int iVar2;
  
  iVar2 = this->FloatCurves[0].Keys.ArrayNum;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  iVar1 = this->FloatCurves[1].Keys.ArrayNum;
  if (iVar1 < iVar2) {
    iVar1 = iVar2;
  }
  iVar2 = this->FloatCurves[2].Keys.ArrayNum;
  if (iVar2 < iVar1) {
    iVar2 = iVar1;
  }
  return iVar2;
}

// Resize @ 1474758f0

void __thiscall
FVectorCurve::Resize(FVectorCurve *this,float param_1,bool param_2,float param_3,float param_4)

{
  FRichCurve::ReadjustTimeRange(this->FloatCurves,0.0,param_1,param_2,param_3,param_4);
  FRichCurve::ReadjustTimeRange(this->FloatCurves + 1,0.0,param_1,param_2,param_3,param_4);
  FRichCurve::ReadjustTimeRange(this->FloatCurves + 2,0.0,param_1,param_2,param_3,param_4);
  return;
}

// UpdateOrAddKey @ 147482a10

void __thiscall
FVectorCurve::UpdateOrAddKey(FVectorCurve *this,TVector<double> *param_1,float param_2)

{
  bool in_R9B;
  float in_XMM1_Da;
  uint in_stack_ffffffffffffffc8;
  float fVar1;
  
  fVar1 = (float)(in_stack_ffffffffffffffc8 & 0xffffff00);
  FRichCurve::UpdateOrAddKey(this->FloatCurves,in_XMM1_Da,param_2,in_R9B,fVar1);
  fVar1 = (float)((uint)fVar1 & 0xffffff00);
  FRichCurve::UpdateOrAddKey(this->FloatCurves + 1,in_XMM1_Da,param_2,in_R9B,fVar1);
  FRichCurve::UpdateOrAddKey
            (this->FloatCurves + 2,in_XMM1_Da,param_2,in_R9B,(float)((uint)fVar1 & 0xffffff00));
  return;
}

