// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 13

// StaticClass @ 147a0c7f0

UClass * __cdecl UCurveFloat::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UCurveFloat.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"CurveFloat",
               &Z_Registration_Info_UClass_UCurveFloat.InnerSingleton,
               StaticRegisterNativesUCurveFloat,0xb8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UCurveFloat>,InternalVTableHelperCtorCaller<UCurveFloat>,
               aFStackX_8,UCurveBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCurveFloat.InnerSingleton;
}

// UCurveFloat @ 147a276b0

UCurveFloat * __thiscall UCurveFloat::UCurveFloat(UCurveFloat *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FCurveOwnerInterface__;
  (this->FloatCurve)._padding_ = 0;
  (this->FloatCurve)._padding_ = 0;
  (this->FloatCurve)._padding_ = 0;
  *(undefined4 *)&(this->FloatCurve)._padding_ = 0;
  *(undefined4 *)((longlong)&(this->FloatCurve)._padding_ + 4) = 0x80;
  *(undefined4 *)&(this->FloatCurve)._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&(this->FloatCurve)._padding_ + 4) = 0;
  (this->FloatCurve)._padding_ = 0;
  *(undefined4 *)&(this->FloatCurve)._padding_ = 0;
  (this->FloatCurve)._padding_ = 0;
  (this->FloatCurve)._padding_ = 0;
  (this->FloatCurve)._padding_ = (longlong)&___7FRichCurve__6B_;
  *(undefined4 *)&(this->FloatCurve)._padding_ = 0x7f7fffff;
  *(undefined2 *)((longlong)&(this->FloatCurve)._padding_ + 4) = 0x404;
  (this->FloatCurve).Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FloatCurve).Keys.ArrayNum = 0;
  (this->FloatCurve).Keys.ArrayMax = 0;
  return this;
}

// UCurveFloat @ 147a27750

UCurveFloat * __thiscall UCurveFloat::UCurveFloat(UCurveFloat *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FCurveOwnerInterface__;
  (this->FloatCurve)._padding_ = 0;
  (this->FloatCurve)._padding_ = 0;
  (this->FloatCurve)._padding_ = 0;
  *(undefined4 *)&(this->FloatCurve)._padding_ = 0;
  *(undefined4 *)((longlong)&(this->FloatCurve)._padding_ + 4) = 0x80;
  *(undefined4 *)&(this->FloatCurve)._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&(this->FloatCurve)._padding_ + 4) = 0;
  (this->FloatCurve)._padding_ = 0;
  *(undefined4 *)&(this->FloatCurve)._padding_ = 0;
  (this->FloatCurve)._padding_ = 0;
  (this->FloatCurve)._padding_ = 0;
  (this->FloatCurve)._padding_ = (longlong)&___7FRichCurve__6B_;
  *(undefined4 *)&(this->FloatCurve)._padding_ = 0x7f7fffff;
  *(undefined2 *)((longlong)&(this->FloatCurve)._padding_ + 4) = 0x404;
  (this->FloatCurve).Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FloatCurve).Keys.ArrayNum = 0;
  (this->FloatCurve).Keys.ArrayMax = 0;
  return this;
}

// ~UCurveFloat @ 147a2a410

void __thiscall UCurveFloat::~UCurveFloat(UCurveFloat *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FCurveOwnerInterface__;
  pFVar1 = (this->FloatCurve).Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->FloatCurve)._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)(this->FloatCurve)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->FloatCurve)._padding_ = 0;
  pvVar2 = (void *)(this->FloatCurve)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->FloatCurve)._padding_);
  this->_padding_ = (longlong)&UCurveBase::_vftable__for__UObject__;
  this->_padding_ = (longlong)&___7FCurveOwnerInterface__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// operator== @ 147a2c8f0

bool __thiscall UCurveFloat::operator==(UCurveFloat *this,UCurveFloat *param_1)

{
  bool bVar1;
  
  if (this->bIsEventCurve == param_1->bIsEventCurve) {
    bVar1 = FRichCurve::operator==(&this->FloatCurve,&param_1->FloatCurve);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// GetCurves @ 147a4f190

TArray<FRichCurveEditInfoTemplate<FRealCurve_*>,TSizedDefaultAllocator<32>_> * __thiscall
UCurveFloat::GetCurves
          (UCurveFloat *this,
          TArray<FRichCurveEditInfoTemplate<FRealCurve_*>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  FName *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FName *pFVar5;
  TArray<FRichCurveEditInfoTemplate<FRealCurve_*>,TSizedDefaultAllocator<32>_> *pTVar6;
  ForAnyElementType FVar7;
  FName local_res8;
  FName local_res10;
  FName local_28;
  FName FStack_20;
  FString local_18;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_res8.ComparisonIndex.Value = this[-1].FloatCurve.Keys.ArrayNum;
  local_res8.Number = this[-1].FloatCurve.Keys.ArrayMax;
  ::FName::ToString(&local_res8,&local_18);
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar7.Data = local_18.Data.AllocatorInstance.Data;
  }
  pFVar5 = ::FName::FName(&local_res10,(wchar_t *)FVar7.Data);
  pFVar1 = (FName *)(__return_storage_ptr__->AllocatorInstance).Data;
  local_28 = *pFVar5;
  FStack_20 = (FName)&this->_padding_;
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
      pTVar6 = (TArray<FRichCurveEditInfoTemplate<FRealCurve_*>,TSizedDefaultAllocator<32>_> *)
               (*pcVar2)();
      return pTVar6;
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
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetCurves @ 147a4f2c0

TArray<FRichCurveEditInfoTemplate<FRealCurve_const_*>,TSizedDefaultAllocator<32>_> * __thiscall
UCurveFloat::GetCurves
          (UCurveFloat *this,
          TArray<FRichCurveEditInfoTemplate<FRealCurve_const_*>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar2 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x810,&__return_storage_ptr__->AllocatorInstance,
                     &__return_storage_ptr__->ArrayMax);
  __return_storage_ptr__->ArrayNum = iVar2 + 1;
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar2 * 0x10;
  *(undefined8 *)pFVar1 = 0;
  *(longlong **)(pFVar1 + 8) = &this->_padding_;
  return __return_storage_ptr__;
}

// GetCurves @ 147a4f320

void __thiscall
UCurveFloat::GetCurves
          (UCurveFloat *this,
          TAdderReserverRef<FRichCurveEditInfoTemplate<FRealCurve_const_*>,int> *param_1)

{
  undefined8 local_18;
  longlong *local_10;
  
  local_18 = 0;
  local_10 = &this->_padding_;
  (**(code **)(*(longlong *)param_1 + 8))(*(undefined8 *)&param_1->field_0x8,&local_18);
  return;
}

// GetFloatValue @ 147a50df0

float __thiscall UCurveFloat::GetFloatValue(UCurveFloat *this,float param_1)

{
  float fVar1;
  
  fVar1 = FRichCurve::Eval(&this->FloatCurve,param_1,0.0);
  return fVar1;
}

// GetPrivateStaticClass @ 147a56f50

UClass * __cdecl UCurveFloat::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCurveFloat.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"CurveFloat",
               &Z_Registration_Info_UClass_UCurveFloat.InnerSingleton,
               StaticRegisterNativesUCurveFloat,0xb8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UCurveFloat>,InternalVTableHelperCtorCaller<UCurveFloat>,
               local_res8,UCurveBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCurveFloat.InnerSingleton;
}

// IsValidCurve @ 147a63400

bool __thiscall
UCurveFloat::IsValidCurve(UCurveFloat *this,FRichCurveEditInfoTemplate<FRealCurve_*> *param_1)

{
  return param_1->CurveToEdit == (FRealCurve *)&this->_padding_;
}

// StaticRegisterNativesUCurveFloat @ 147a97510

void __cdecl UCurveFloat::StaticRegisterNativesUCurveFloat(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UCurveFloat_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetFloatValue @ 147aa30e0

void __cdecl UCurveFloat::execGetFloatValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar2 = FRichCurve::Eval((FRichCurve *)&param_1[1].field_0x8,local_res8[0],0.0);
  *(float *)param_3 = fVar2;
  return;
}

