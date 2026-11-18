// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UIParticle
// Functions: 6

// StaticStruct @ 14ac8d0b0

UScriptStruct * __cdecl FUIParticleLinearColorCurve::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FUIParticleLinearColorCurve.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_UIParticle();
    Z_Registration_Info_UScriptStruct_FUIParticleLinearColorCurve.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FUIParticleLinearColorCurve,(UObject *)pUVar1,
                         L"UIParticleLinearColorCurve");
  }
  return Z_Registration_Info_UScriptStruct_FUIParticleLinearColorCurve.OuterSingleton;
}

// FUIParticleLinearColorCurve @ 14ac8f870

FUIParticleLinearColorCurve * __thiscall
FUIParticleLinearColorCurve::FUIParticleLinearColorCurve(FUIParticleLinearColorCurve *this)

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
  this->CurveType = ParticleLifePercent;
  this->Loop = false;
  return this;
}

// ~FUIParticleLinearColorCurve @ 14ac90d90

void __thiscall
FUIParticleLinearColorCurve::~FUIParticleLinearColorCurve(FUIParticleLinearColorCurve *this)

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

// operator= @ 14ac913c0

FUIParticleLinearColorCurve * __thiscall
FUIParticleLinearColorCurve::operator=
          (FUIParticleLinearColorCurve *this,FUIParticleLinearColorCurve *param_1)

{
  TArray<FRichCurveKey,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FRichCurveKey,TSizedDefaultAllocator<32>_> *pTVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  
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
  this->CurveType = param_1->CurveType;
  this->Loop = param_1->Loop;
  return this;
}

// GetValue @ 14ac99120

FLinearColor * __thiscall
FUIParticleLinearColorCurve::GetValue
          (FUIParticleLinearColorCurve *this,FLinearColor *__return_storage_ptr__,float param_1,
          float param_2,float param_3)

{
  ECurveType EVar1;
  undefined8 uVar2;
  FLinearColor *pFVar3;
  longlong lVar4;
  FUIParticleLinearColorCurve *pFVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_res8 [2];
  float local_res10 [2];
  FLinearColor local_58 [4];
  
  EVar1 = this->CurveType;
  if (EVar1 == ParticleLifePercent) {
    pFVar3 = GetValueInner(this,local_58,param_1);
    uVar2 = *(undefined8 *)((longlong)&pFVar3->field0_0x0 + 8);
    *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *(undefined8 *)&pFVar3->field0_0x0;
    *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar2;
    return __return_storage_ptr__;
  }
  if (EVar1 == ParticleLifeTime) {
    fVar8 = param_2;
    if (this->Loop != false) {
      fVar8 = 0.0;
      lVar4 = 4;
      pFVar5 = this;
      fVar7 = 0.0;
      do {
        FRichCurve::GetTimeRange(pFVar5->ColorCurves,local_res10,local_res8);
        pFVar5 = (FUIParticleLinearColorCurve *)(pFVar5->ColorCurves + 1);
        fVar6 = local_res8[0];
        if (local_res8[0] <= fVar7) {
          fVar6 = fVar7;
        }
        lVar4 = lVar4 + -1;
        fVar7 = fVar6;
      } while (lVar4 != 0);
      if (0.0 < fVar6) {
        fVar8 = FGenericPlatformMath::Fmod(param_2,fVar6);
      }
    }
  }
  else {
    if (EVar1 != EmitLifeTime) {
      return __return_storage_ptr__;
    }
    fVar8 = param_3;
    if (this->Loop != false) {
      fVar8 = 0.0;
      lVar4 = 4;
      pFVar5 = this;
      fVar7 = 0.0;
      do {
        FRichCurve::GetTimeRange(pFVar5->ColorCurves,local_res10,local_res8);
        pFVar5 = (FUIParticleLinearColorCurve *)(pFVar5->ColorCurves + 1);
        fVar6 = local_res8[0];
        if (local_res8[0] <= fVar7) {
          fVar6 = fVar7;
        }
        lVar4 = lVar4 + -1;
        fVar7 = fVar6;
      } while (lVar4 != 0);
      if (0.0 < fVar6) {
        fVar8 = FGenericPlatformMath::Fmod(param_3,fVar6);
      }
    }
  }
  pFVar3 = GetValueInner(this,local_58,fVar8);
  uVar2 = *(undefined8 *)((longlong)&pFVar3->field0_0x0 + 8);
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *(undefined8 *)&pFVar3->field0_0x0;
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar2;
  return __return_storage_ptr__;
}

// GetValueInner @ 14ac992c0

FLinearColor * __thiscall
FUIParticleLinearColorCurve::GetValueInner
          (FUIParticleLinearColorCurve *this,FLinearColor *__return_storage_ptr__,float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = __real_3f800000;
  fVar1 = FRichCurve::Eval(this->ColorCurves + 3,param_1,__real_3f800000);
  fVar2 = FRichCurve::Eval(this->ColorCurves + 2,param_1,fVar4);
  fVar3 = FRichCurve::Eval(this->ColorCurves + 1,param_1,fVar4);
  fVar4 = FRichCurve::Eval(this->ColorCurves,param_1,fVar4);
  (__return_storage_ptr__->field0_0x0)._s_0.G = fVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.B = fVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.A = fVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.R = fVar4;
  return __return_storage_ptr__;
}

