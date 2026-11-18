// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 9

// StaticClass @ 14ca3fce0

UClass * __cdecl UDynamicMeshReplacementChangeTarget::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDynamicMeshReplacementChangeTarget.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"DynamicMeshReplacementChangeTarget",
               &Z_Registration_Info_UClass_UDynamicMeshReplacementChangeTarget.InnerSingleton,
               StaticRegisterNativesUDynamicMeshReplacementChangeTarget,0x60,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UDynamicMeshReplacementChangeTarget>,
               InternalVTableHelperCtorCaller<UDynamicMeshReplacementChangeTarget>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDynamicMeshReplacementChangeTarget.InnerSingleton;
}

// UDynamicMeshReplacementChangeTarget @ 14ca678f0

UDynamicMeshReplacementChangeTarget * __thiscall
UDynamicMeshReplacementChangeTarget::UDynamicMeshReplacementChangeTarget
          (UDynamicMeshReplacementChangeTarget *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&(this->OnMeshChanged).field_0x18 = 2;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IMeshReplacementCommandChangeTarget__;
  (this->Mesh).Object = (FDynamicMesh3 *)0x0;
  (this->Mesh).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->OnMeshChanged = 0;
  *(undefined8 *)&(this->OnMeshChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnMeshChanged).field_0x10 = 0;
  return this;
}

// ~UDynamicMeshReplacementChangeTarget @ 14ca6b560

void __thiscall
UDynamicMeshReplacementChangeTarget::~UDynamicMeshReplacementChangeTarget
          (UDynamicMeshReplacementChangeTarget *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnMeshChanged).field_0x8,*(int *)&(this->OnMeshChanged).field_0x10);
  pvVar1 = *(void **)&(this->OnMeshChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMeshChanged);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Mesh).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7IMeshReplacementCommandChangeTarget__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// ApplyChange @ 14ca78b90

void __thiscall
UDynamicMeshReplacementChangeTarget::ApplyChange
          (UDynamicMeshReplacementChangeTarget *this,FMeshReplacementChange *param_1,bool param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FDynamicMesh3 *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar1 = (&param_1->Before)[(ulonglong)param_2 ^ 1].SharedReferenceCount.ReferenceController;
  pFVar2 = (&param_1->Before)[(ulonglong)param_2 ^ 1].Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = (longlong)pFVar2;
  this->_padding_ = (longlong)pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->_padding_);
  return;
}

// GetPrivateStaticClass @ 14ca91140

UClass * __cdecl UDynamicMeshReplacementChangeTarget::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDynamicMeshReplacementChangeTarget.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"DynamicMeshReplacementChangeTarget",
               &Z_Registration_Info_UClass_UDynamicMeshReplacementChangeTarget.InnerSingleton,
               StaticRegisterNativesUDynamicMeshReplacementChangeTarget,0x60,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UDynamicMeshReplacementChangeTarget>,
               InternalVTableHelperCtorCaller<UDynamicMeshReplacementChangeTarget>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDynamicMeshReplacementChangeTarget.InnerSingleton;
}

// ReplaceMesh @ 14caa0070

TUniquePtr<FMeshReplacementChange,TDefaultDelete<FMeshReplacementChange>_> __thiscall
UDynamicMeshReplacementChangeTarget::ReplaceMesh
          (UDynamicMeshReplacementChangeTarget *this,
          TSharedPtr<UE::Geometry::FDynamicMesh3_const_,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  FMeshReplacementChange *this_00;
  FDynamicMesh3 *pFVar3;
  undefined8 *in_R8;
  TSharedPtr<UE::Geometry::FDynamicMesh3_const_,1> local_28;
  TSharedPtr<UE::Geometry::FDynamicMesh3_const_,1> local_18;
  
  this_00 = ::operator_new(0x60);
  pFVar3 = (FDynamicMesh3 *)0x0;
  if (this_00 != (FMeshReplacementChange *)0x0) {
    local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)in_R8[1];
    local_28.Object = (FDynamicMesh3 *)*in_R8;
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_18.Object = (this->Mesh).Object;
    local_18.SharedReferenceCount.ReferenceController =
         (this->Mesh).SharedReferenceCount.ReferenceController;
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar3 = (FDynamicMesh3 *)
             FMeshReplacementChange::FMeshReplacementChange(this_00,&local_18,&local_28);
  }
  param_1->Object = pFVar3;
  pTVar1 = (TReferenceControllerBase<1> *)in_R8[1];
  pFVar3 = (FDynamicMesh3 *)*in_R8;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar2 = (this->Mesh).SharedReferenceCount.ReferenceController;
  (this->Mesh).Object = pFVar3;
  (this->Mesh).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return (TUniquePtr<FMeshReplacementChange,TDefaultDelete<FMeshReplacementChange>_>)
         (FMeshReplacementChange *)param_1;
}

// SetMesh @ 14caa3a10

void __thiscall
UDynamicMeshReplacementChangeTarget::SetMesh
          (UDynamicMeshReplacementChangeTarget *this,
          TSharedPtr<UE::Geometry::FDynamicMesh3_const_,1> *param_1)

{
  FDynamicMesh3 *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pFVar1 = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->Mesh).SharedReferenceCount.ReferenceController;
  (this->Mesh).Object = pFVar1;
  (this->Mesh).SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// StaticRegisterNativesUDynamicMeshReplacementChangeTarget @ 14caa7100

void __cdecl
UDynamicMeshReplacementChangeTarget::StaticRegisterNativesUDynamicMeshReplacementChangeTarget(void)

{
  return;
}

// _getUObject @ 14caaab10

UObject * __thiscall
UDynamicMeshReplacementChangeTarget::_getUObject(UDynamicMeshReplacementChangeTarget *this)

{
  return (UObject *)&this[-1].Mesh.SharedReferenceCount;
}

