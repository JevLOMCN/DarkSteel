// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 13

// StaticClass @ 147a0bbe0

UClass * __cdecl UCurveVector::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCurveVector.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"CurveVector",
               &Z_Registration_Info_UClass_UCurveVector.InnerSingleton,
               StaticRegisterNativesUCurveVector,0x1b0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UCurveVector>,InternalVTableHelperCtorCaller<UCurveVector>,
               local_res8,UCurveBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCurveVector.InnerSingleton;
}

// UCurveVector @ 147a27e10

UCurveVector * __thiscall UCurveVector::UCurveVector(UCurveVector *this,FVTableHelper *param_1)

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
  return this;
}

// UCurveVector @ 147a27fa0

UCurveVector * __thiscall UCurveVector::UCurveVector(UCurveVector *this,FObjectInitializer *param_1)

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
  return this;
}

// ~UCurveVector @ 147a2a750

void __thiscall UCurveVector::~UCurveVector(UCurveVector *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FCurveOwnerInterface__;
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

// operator== @ 147a2c9c0

bool __thiscall UCurveVector::operator==(UCurveVector *this,UCurveVector *param_1)

{
  bool bVar1;
  
  bVar1 = FRichCurve::operator==(this->FloatCurves,param_1->FloatCurves);
  if (bVar1) {
    bVar1 = FRichCurve::operator==(this->FloatCurves + 1,param_1->FloatCurves + 1);
    if (bVar1) {
      bVar1 = FRichCurve::operator==(this->FloatCurves + 2,param_1->FloatCurves + 2);
      if (bVar1) {
        return true;
      }
    }
  }
  return false;
}

// GetCurves @ 147a4ff00

TArray<FRichCurveEditInfoTemplate<FRealCurve_*>,TSizedDefaultAllocator<32>_> * __thiscall
UCurveVector::GetCurves
          (UCurveVector *this,
          TArray<FRichCurveEditInfoTemplate<FRealCurve_*>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  FName *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<FRichCurveEditInfoTemplate<FRealCurve_*>,TSizedDefaultAllocator<32>_> *pTVar5;
  FName local_38;
  FName FStack_30;
  FName local_28;
  FName FStack_20;
  FName local_18;
  FName FStack_10;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_18 = XCurveName;
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
  local_38 = YCurveName;
  FStack_30 = (FName)&this->FloatCurves[0]._padding_;
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
  local_28 = ZCurveName;
  FStack_20 = (FName)&this->FloatCurves[1]._padding_;
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

// GetCurves @ 147a500f0

TArray<FRichCurveEditInfoTemplate<FRealCurve_const_*>,TSizedDefaultAllocator<32>_> * __thiscall
UCurveVector::GetCurves
          (UCurveVector *this,
          TArray<FRichCurveEditInfoTemplate<FRealCurve_const_*>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  FName *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<FRichCurveEditInfoTemplate<FRealCurve_const_*>,TSizedDefaultAllocator<32>_> *pTVar5;
  FName local_38;
  FName FStack_30;
  FName local_28;
  FName FStack_20;
  FName local_18;
  FName FStack_10;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_18 = XCurveName;
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
  local_38 = YCurveName;
  FStack_30 = (FName)&this->FloatCurves[0]._padding_;
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
  local_28 = ZCurveName;
  FStack_20 = (FName)&this->FloatCurves[1]._padding_;
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

// GetCurves @ 147a502e0

void __thiscall
UCurveVector::GetCurves
          (UCurveVector *this,
          TAdderReserverRef<FRichCurveEditInfoTemplate<FRealCurve_const_*>,int> *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  FName local_18;
  longlong *local_10;
  
  lVar1 = *(longlong *)param_1;
  uVar2 = *(undefined8 *)&param_1->field_0x8;
  local_18 = XCurveName;
  local_10 = &this->_padding_;
  (**(code **)(lVar1 + 8))(uVar2,&local_18);
  local_18 = YCurveName;
  local_10 = &this->FloatCurves[0]._padding_;
  (**(code **)(lVar1 + 8))(uVar2,&local_18);
  local_18 = ZCurveName;
  local_10 = &this->FloatCurves[1]._padding_;
  (**(code **)(lVar1 + 8))(uVar2,&local_18);
  return;
}

// GetPrivateStaticClass @ 147a57240

UClass * __cdecl UCurveVector::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCurveVector.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"CurveVector",
               &Z_Registration_Info_UClass_UCurveVector.InnerSingleton,
               StaticRegisterNativesUCurveVector,0x1b0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UCurveVector>,InternalVTableHelperCtorCaller<UCurveVector>,
               local_res8,UCurveBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCurveVector.InnerSingleton;
}

// GetVectorValue @ 147a5c0f0

TVector<double> * __thiscall
UCurveVector::GetVectorValue
          (UCurveVector *this,TVector<double> *__return_storage_ptr__,float param_1)

{
  float fVar1;
  
  fVar1 = FRichCurve::Eval(this->FloatCurves,param_1,0.0);
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)fVar1;
  fVar1 = FRichCurve::Eval(this->FloatCurves + 1,param_1,0.0);
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar1;
  fVar1 = FRichCurve::Eval(this->FloatCurves + 2,param_1,0.0);
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)fVar1;
  return __return_storage_ptr__;
}

// IsValidCurve @ 147a635c0

bool __thiscall
UCurveVector::IsValidCurve(UCurveVector *this,FRichCurveEditInfoTemplate<FRealCurve_*> *param_1)

{
  FRealCurve *pFVar1;
  
  pFVar1 = param_1->CurveToEdit;
  if (((pFVar1 != (FRealCurve *)&this->_padding_) &&
      (pFVar1 != (FRealCurve *)&this->FloatCurves[0]._padding_)) &&
     (pFVar1 != (FRealCurve *)&this->FloatCurves[1]._padding_)) {
    return false;
  }
  return true;
}

// StaticRegisterNativesUCurveVector @ 147a975e0

void __cdecl UCurveVector::StaticRegisterNativesUCurveVector(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UCurveVector_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetVectorValue @ 147aa3530

void __cdecl UCurveVector::execGetVectorValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  float fVar3;
  float fVar4;
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
  fVar4 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar2 = FRichCurve::Eval((FRichCurve *)&param_1[1].field_0x8,local_res8[0],0.0);
  fVar3 = FRichCurve::Eval((FRichCurve *)&param_1[4].field_0x10,fVar4,0.0);
  fVar4 = FRichCurve::Eval((FRichCurve *)&param_1[7].field_0x18,fVar4,0.0);
  *(double *)param_3 = (double)fVar2;
  *(double *)((longlong)param_3 + 8) = (double)fVar3;
  *(double *)((longlong)param_3 + 0x10) = (double)fVar4;
  return;
}

