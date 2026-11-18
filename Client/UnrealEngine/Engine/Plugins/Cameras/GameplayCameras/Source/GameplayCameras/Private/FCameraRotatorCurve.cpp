// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 5

// StaticStruct @ 14d571560

UScriptStruct * __cdecl FCameraRotatorCurve::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCameraRotatorCurve.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UScriptStruct_FCameraRotatorCurve.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCameraRotatorCurve,(UObject *)pUVar1,
                         L"CameraRotatorCurve");
  }
  return Z_Registration_Info_UScriptStruct_FCameraRotatorCurve.OuterSingleton;
}

// FCameraRotatorCurve @ 14d58ddf0

FCameraRotatorCurve * __thiscall FCameraRotatorCurve::FCameraRotatorCurve(FCameraRotatorCurve *this)

{
  this->Curves[0]._padding_ = 0;
  this->Curves[0]._padding_ = 0;
  this->Curves[0]._padding_ = 0;
  *(undefined4 *)&this->Curves[0]._padding_ = 0;
  *(undefined4 *)((longlong)&this->Curves[0]._padding_ + 4) = 0x80;
  *(undefined4 *)&this->Curves[0]._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->Curves[0]._padding_ + 4) = 0;
  this->Curves[0]._padding_ = 0;
  *(undefined4 *)&this->Curves[0]._padding_ = 0;
  this->Curves[0]._padding_ = 0;
  this->Curves[0]._padding_ = 0;
  this->Curves[0]._padding_ = (longlong)&___7FRichCurve__6B_;
  *(undefined4 *)&this->Curves[0]._padding_ = 0x7f7fffff;
  *(undefined2 *)((longlong)&this->Curves[0]._padding_ + 4) = 0x404;
  this->Curves[0].Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Curves[0].Keys.ArrayNum = 0;
  this->Curves[0].Keys.ArrayMax = 0;
  this->Curves[1]._padding_ = 0;
  this->Curves[1]._padding_ = 0;
  this->Curves[1]._padding_ = 0;
  *(undefined4 *)&this->Curves[1]._padding_ = 0;
  *(undefined4 *)((longlong)&this->Curves[1]._padding_ + 4) = 0x80;
  *(undefined4 *)&this->Curves[1]._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->Curves[1]._padding_ + 4) = 0;
  this->Curves[1]._padding_ = 0;
  *(undefined4 *)&this->Curves[1]._padding_ = 0;
  this->Curves[1]._padding_ = 0;
  this->Curves[1]._padding_ = 0;
  *(undefined4 *)&this->Curves[1]._padding_ = 0x7f7fffff;
  *(undefined2 *)((longlong)&this->Curves[1]._padding_ + 4) = 0x404;
  this->Curves[1]._padding_ = (longlong)&___7FRichCurve__6B_;
  this->Curves[1].Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Curves[1].Keys.ArrayNum = 0;
  this->Curves[1].Keys.ArrayMax = 0;
  this->Curves[2]._padding_ = 0;
  this->Curves[2]._padding_ = 0;
  this->Curves[2]._padding_ = 0;
  *(undefined4 *)&this->Curves[2]._padding_ = 0;
  *(undefined4 *)((longlong)&this->Curves[2]._padding_ + 4) = 0x80;
  *(undefined4 *)&this->Curves[2]._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->Curves[2]._padding_ + 4) = 0;
  this->Curves[2]._padding_ = 0;
  *(undefined4 *)&this->Curves[2]._padding_ = 0;
  this->Curves[2]._padding_ = 0;
  this->Curves[2]._padding_ = 0;
  *(undefined4 *)&this->Curves[2]._padding_ = 0x7f7fffff;
  *(undefined2 *)((longlong)&this->Curves[2]._padding_ + 4) = 0x404;
  this->Curves[2]._padding_ = (longlong)&___7FRichCurve__6B_;
  this->Curves[2].Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Curves[2].Keys.ArrayNum = 0;
  this->Curves[2].Keys.ArrayMax = 0;
  return this;
}

// ~FCameraRotatorCurve @ 14d591070

void __thiscall FCameraRotatorCurve::~FCameraRotatorCurve(FCameraRotatorCurve *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = this->Curves[2].Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->Curves[2]._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)this->Curves[2]._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&this->Curves[2]._padding_ = 0;
  pvVar2 = (void *)this->Curves[2]._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Curves[2]._padding_);
  pFVar1 = this->Curves[1].Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->Curves[1]._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)this->Curves[1]._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&this->Curves[1]._padding_ = 0;
  pvVar2 = (void *)this->Curves[1]._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Curves[1]._padding_);
  pFVar1 = this->Curves[0].Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->Curves[0]._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)this->Curves[0]._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&this->Curves[0]._padding_ = 0;
  pvVar2 = (void *)this->Curves[0]._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Curves[0]._padding_);
  return;
}

// GetValue @ 14d5abe30

TRotator<double> * __thiscall
FCameraRotatorCurve::GetValue
          (FCameraRotatorCurve *this,TRotator<double> *__return_storage_ptr__,float param_1)

{
  float fVar1;
  
  fVar1 = FRichCurve::Eval(this->Curves,param_1,0.0);
  __return_storage_ptr__->Pitch = (double)fVar1;
  fVar1 = FRichCurve::Eval(this->Curves + 1,param_1,0.0);
  __return_storage_ptr__->Yaw = (double)fVar1;
  fVar1 = FRichCurve::Eval(this->Curves + 2,param_1,0.0);
  __return_storage_ptr__->Roll = (double)fVar1;
  return __return_storage_ptr__;
}

// HasAnyData @ 14d5ad0a0

bool __thiscall FCameraRotatorCurve::HasAnyData(FCameraRotatorCurve *this)

{
  float fVar1;
  int iVar2;
  
  fVar1 = __real_7f7fffff;
  if (__real_7f7fffff == *(float *)&this->Curves[0]._padding_) {
    iVar2 = (**(code **)(this->Curves[0]._padding_ + 8))();
    if ((iVar2 == 0) && (fVar1 == *(float *)&this->Curves[1]._padding_)) {
      iVar2 = (**(code **)(this->Curves[1]._padding_ + 8))();
      if ((iVar2 == 0) && (fVar1 == *(float *)&this->Curves[2]._padding_)) {
        iVar2 = (**(code **)(this->Curves[2]._padding_ + 8))();
        if (iVar2 == 0) {
          return false;
        }
      }
    }
  }
  return true;
}

