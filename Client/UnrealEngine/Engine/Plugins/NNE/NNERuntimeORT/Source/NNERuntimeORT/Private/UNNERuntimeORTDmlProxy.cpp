// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NNERuntimeORT
// Functions: 11

// StaticClass @ 14eb01880

UClass * __cdecl UNNERuntimeORTDmlProxy::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNNERuntimeORTDmlProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NNERuntimeORT",L"NNERuntimeORTDmlProxy",
               &Z_Registration_Info_UClass_UNNERuntimeORTDmlProxy.InnerSingleton,
               StaticRegisterNativesUNNERuntimeORTDmlProxy,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UNNERuntimeORTDmlProxy>,
               InternalVTableHelperCtorCaller<UNNERuntimeORTDmlProxy>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNNERuntimeORTDmlProxy.InnerSingleton;
}

// UNNERuntimeORTDmlProxy @ 14eb05d50

UNNERuntimeORTDmlProxy * __thiscall
UNNERuntimeORTDmlProxy::UNNERuntimeORTDmlProxy(UNNERuntimeORTDmlProxy *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  (this->Impl).Ptr = (INNERuntimeORTDmlImpl *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INNERuntime__;
  return this;
}

// UNNERuntimeORTDmlProxy @ 14eb05d90

UNNERuntimeORTDmlProxy * __thiscall
UNNERuntimeORTDmlProxy::UNNERuntimeORTDmlProxy(UNNERuntimeORTDmlProxy *this)

{
  INNERuntimeORTDmlImpl *pIVar1;
  INNERuntimeORTDmlImpl *pIVar2;
  
  UObject::UObject((UObject *)this);
  pIVar2 = (INNERuntimeORTDmlImpl *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->Impl).Ptr = (INNERuntimeORTDmlImpl *)0x0;
  this->_padding_ = (longlong)&_vftable__for__INNERuntime__;
  pIVar1 = ::operator_new(0x38);
  if (pIVar1 != (INNERuntimeORTDmlImpl *)0x0) {
    *(undefined4 *)&pIVar1[1].field_0x13 = 0;
    pIVar1[1].field_0x17 = 0;
    *(undefined ***)pIVar1 = &FNNERuntimeORTDmlImpl::_vftable__for__INNERuntime__;
    *(undefined ***)&pIVar1->field_0x8 = &FNNERuntimeORTDmlImpl::_vftable__for__INNERuntimeGPU__;
    *(undefined ***)&pIVar1->field_0x10 = &FNNERuntimeORTDmlImpl::_vftable__for__INNERuntimeRDG__;
    *(undefined ***)&pIVar1->field_0x18 = &FNNERuntimeORTDmlImpl::_vftable__for__INNERuntimeNPU__;
    *(undefined8 *)(pIVar1 + 1) = 0;
    *(undefined8 *)&pIVar1[1].field_0x8 = 0;
    *(undefined2 *)&pIVar1[1].field_0x10 = 0;
    pIVar1[1].field_0x12 = 0;
    pIVar2 = pIVar1;
  }
  pIVar1 = (this->Impl).Ptr;
  (this->Impl).Ptr = pIVar2;
  if (pIVar1 != (INNERuntimeORTDmlImpl *)0x0) {
    (*(code *)**(undefined8 **)pIVar1)(pIVar1,1);
  }
  return this;
}

// CanCreateModelData @ 14eb0c1c0

ECanCreateModelDataStatus __thiscall
UNNERuntimeORTDmlProxy::CanCreateModelData
          (UNNERuntimeORTDmlProxy *this,FString *param_1,
          TArrayView<unsigned_char_const_,__int64> *param_2,
          TMap<FString,TArrayView<unsigned_char_const_,__int64>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<unsigned_char_const_,__int64>,0>_>
          *param_3,FGuid *param_4,ITargetPlatform *param_5)

{
  ECanCreateModelDataStatus EVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *(undefined4 *)&param_2->DataPtr;
  uStack_14 = *(undefined4 *)((longlong)&param_2->DataPtr + 4);
  uStack_10 = (undefined4)param_2->ArrayNum;
  uStack_c = *(undefined4 *)((longlong)&param_2->ArrayNum + 4);
  EVar1 = (**(code **)(*(longlong *)this->_padding_ + 0x18))
                    ((longlong *)this->_padding_,param_1,&local_18,param_3,param_4,param_5);
  return EVar1;
}

// CreateModelData @ 14eb10500

TSharedPtr<UE::NNE::FSharedModelData,1> * __thiscall
UNNERuntimeORTDmlProxy::CreateModelData
          (UNNERuntimeORTDmlProxy *this,
          TSharedPtr<UE::NNE::FSharedModelData,1> *__return_storage_ptr__,FString *param_1,
          TArrayView<unsigned_char_const_,__int64> *param_2,
          TMap<FString,TArrayView<unsigned_char_const_,__int64>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<unsigned_char_const_,__int64>,0>_>
          *param_3,FGuid *param_4,ITargetPlatform *param_5)

{
  (**(code **)(*(longlong *)this->_padding_ + 0x20))();
  return __return_storage_ptr__;
}

// GetModelDataIdentifier @ 14eb159b0

FString * __thiscall
UNNERuntimeORTDmlProxy::GetModelDataIdentifier
          (UNNERuntimeORTDmlProxy *this,FString *__return_storage_ptr__,FString *param_1,
          TArrayView<unsigned_char_const_,__int64> *param_2,
          TMap<FString,TArrayView<unsigned_char_const_,__int64>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<unsigned_char_const_,__int64>,0>_>
          *param_3,FGuid *param_4,ITargetPlatform *param_5)

{
  (**(code **)(*(longlong *)this->_padding_ + 0x28))();
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14eb160e0

UClass * __cdecl UNNERuntimeORTDmlProxy::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNNERuntimeORTDmlProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NNERuntimeORT",L"NNERuntimeORTDmlProxy",
               &Z_Registration_Info_UClass_UNNERuntimeORTDmlProxy.InnerSingleton,
               StaticRegisterNativesUNNERuntimeORTDmlProxy,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UNNERuntimeORTDmlProxy>,
               InternalVTableHelperCtorCaller<UNNERuntimeORTDmlProxy>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNNERuntimeORTDmlProxy.InnerSingleton;
}

// GetRuntimeName @ 14eb167f0

FString * __thiscall
UNNERuntimeORTDmlProxy::GetRuntimeName(UNNERuntimeORTDmlProxy *this,FString *__return_storage_ptr__)

{
  (**(code **)(*(longlong *)this->_padding_ + 0x10))();
  return __return_storage_ptr__;
}

// Init @ 14eb17420

void __thiscall
UNNERuntimeORTDmlProxy::Init
          (UNNERuntimeORTDmlProxy *this,
          TSharedRef<UE::NNERuntimeORT::Private::FEnvironment,1> *param_1,bool param_2)

{
  INNERuntimeORTDmlImpl *pIVar1;
  code *pcVar2;
  FEnvironment *local_18;
  TReferenceControllerBase<1> *local_10;
  
  pIVar1 = (this->Impl).Ptr;
  pcVar2 = *(code **)(*(longlong *)pIVar1 + 0x30);
  local_18 = param_1->Object;
  local_10 = (param_1->SharedReferenceCount).ReferenceController;
  if (local_10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_10->SharedReferenceCount = (atomic<int>)((int)local_10->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*pcVar2)(pIVar1,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// StaticRegisterNativesUNNERuntimeORTDmlProxy @ 14eb1de80

void __cdecl UNNERuntimeORTDmlProxy::StaticRegisterNativesUNNERuntimeORTDmlProxy(void)

{
  return;
}

// _getUObject @ 14eb1ed30

UObject * __thiscall UNNERuntimeORTDmlProxy::_getUObject(UNNERuntimeORTDmlProxy *this)

{
  return (UObject *)&this[-1]._padding_;
}

