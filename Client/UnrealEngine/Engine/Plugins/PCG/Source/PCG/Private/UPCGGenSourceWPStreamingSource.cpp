// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 9

// StaticClass @ 149f1d370

UClass * __cdecl UPCGGenSourceWPStreamingSource::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGGenSourceWPStreamingSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGGenSourceWPStreamingSource",
               &Z_Registration_Info_UClass_UPCGGenSourceWPStreamingSource.InnerSingleton,
               StaticRegisterNativesUPCGGenSourceWPStreamingSource,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGGenSourceWPStreamingSource>,
               InternalVTableHelperCtorCaller<UPCGGenSourceWPStreamingSource>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGGenSourceWPStreamingSource.InnerSingleton;
}

// UPCGGenSourceWPStreamingSource @ 149f32410

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGGenSourceWPStreamingSource * __thiscall
UPCGGenSourceWPStreamingSource::UPCGGenSourceWPStreamingSource
          (UPCGGenSourceWPStreamingSource *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IPCGGenSourceBase__;
  return this;
}

// UPCGGenSourceWPStreamingSource @ 149f32450

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGGenSourceWPStreamingSource * __thiscall
UPCGGenSourceWPStreamingSource::UPCGGenSourceWPStreamingSource
          (UPCGGenSourceWPStreamingSource *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IPCGGenSourceBase__;
  return this;
}

// ~UPCGGenSourceWPStreamingSource @ 149f347c0

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UPCGGenSourceWPStreamingSource::~UPCGGenSourceWPStreamingSource
          (UPCGGenSourceWPStreamingSource *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&___7IPCGGenSourceBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetDirection @ 149f49810

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TOptional<UE::Math::TVector<double>_> * __thiscall
UPCGGenSourceWPStreamingSource::GetDirection
          (UPCGGenSourceWPStreamingSource *this,
          TOptional<UE::Math::TVector<double>_> *__return_storage_ptr__)

{
  TVector<double> *pTVar1;
  bool bVar2;
  TVector<double> local_48;
  double local_30;
  double dStack_28;
  double local_20;
  
  bVar2 = this->_padding_ != 0;
  if (bVar2) {
    pTVar1 = UE::Math::TRotator<double>::Vector
                       ((TRotator<double> *)(this->_padding_ + 0x20),&local_48);
    local_30 = (pTVar1->field0_0x0)._s_0.X;
    dStack_28 = (pTVar1->field0_0x0)._s_0.Y;
    local_20 = (pTVar1->field0_0x0)._s_0.Z;
  }
  __return_storage_ptr__->bIsSet = bVar2;
  if (bVar2) {
    (__return_storage_ptr__->TypedValue).field0_0x0._s_0.X = local_30;
    (__return_storage_ptr__->TypedValue).field0_0x0._s_0.Y = dStack_28;
    (__return_storage_ptr__->TypedValue).field0_0x0._s_0.Z = local_20;
  }
  return __return_storage_ptr__;
}

// GetPosition @ 149f4cb10

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TOptional<UE::Math::TVector<double>_> * __thiscall
UPCGGenSourceWPStreamingSource::GetPosition
          (UPCGGenSourceWPStreamingSource *this,
          TOptional<UE::Math::TVector<double>_> *__return_storage_ptr__)

{
  longlong lVar1;
  bool bVar2;
  double local_28;
  double dStack_20;
  double local_18;
  
  lVar1 = this->_padding_;
  bVar2 = lVar1 != 0;
  if (bVar2) {
    local_28 = *(double *)(lVar1 + 8);
    dStack_20 = *(double *)(lVar1 + 0x10);
    local_18 = *(double *)(lVar1 + 0x18);
  }
  __return_storage_ptr__->bIsSet = bVar2;
  if (bVar2) {
    (__return_storage_ptr__->TypedValue).field0_0x0._s_0.X = local_28;
    (__return_storage_ptr__->TypedValue).field0_0x0._s_0.Y = dStack_20;
    (__return_storage_ptr__->TypedValue).field0_0x0._s_0.Z = local_18;
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 149f4d2d0

UClass * __cdecl UPCGGenSourceWPStreamingSource::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGGenSourceWPStreamingSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGGenSourceWPStreamingSource",
               &Z_Registration_Info_UClass_UPCGGenSourceWPStreamingSource.InnerSingleton,
               StaticRegisterNativesUPCGGenSourceWPStreamingSource,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGGenSourceWPStreamingSource>,
               InternalVTableHelperCtorCaller<UPCGGenSourceWPStreamingSource>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGGenSourceWPStreamingSource.InnerSingleton;
}

// StaticRegisterNativesUPCGGenSourceWPStreamingSource @ 149f63970

void __cdecl
UPCGGenSourceWPStreamingSource::StaticRegisterNativesUPCGGenSourceWPStreamingSource(void)

{
  return;
}

// _getUObject @ 149f6f610

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UObject * __thiscall
UPCGGenSourceWPStreamingSource::_getUObject(UPCGGenSourceWPStreamingSource *this)

{
  return (UObject *)&this[-1]._padding_;
}

