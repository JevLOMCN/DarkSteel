// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 12

// StaticClass @ 14962ecf0

UClass * __cdecl UGizmoComponentAxisSource::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoComponentAxisSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoComponentAxisSource",
               &Z_Registration_Info_UClass_UGizmoComponentAxisSource.InnerSingleton,
               StaticRegisterNativesUGizmoComponentAxisSource,0x40,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UGizmoComponentAxisSource>,
               InternalVTableHelperCtorCaller<UGizmoComponentAxisSource>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoComponentAxisSource.InnerSingleton;
}

// UGizmoComponentAxisSource @ 14963aac0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UGizmoComponentAxisSource * __thiscall
UGizmoComponentAxisSource::UGizmoComponentAxisSource
          (UGizmoComponentAxisSource *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  (this->Component).field0_0x0.DebugPtr = (USceneComponent *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGizmoAxisSource__;
  this->AxisIndex = 2;
  this->bLocalAxes = true;
  return this;
}

// UGizmoComponentAxisSource @ 14963ab10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UGizmoComponentAxisSource * __thiscall
UGizmoComponentAxisSource::UGizmoComponentAxisSource
          (UGizmoComponentAxisSource *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  (this->Component).field0_0x0.DebugPtr = (USceneComponent *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGizmoAxisSource__;
  this->AxisIndex = 2;
  this->bLocalAxes = true;
  return this;
}

// ~UGizmoComponentAxisSource @ 14963e990

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UGizmoComponentAxisSource::~UGizmoComponentAxisSource(UGizmoComponentAxisSource *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&___7IGizmoAxisSource__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetDirection @ 149652b30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TVector<double> * __thiscall
UGizmoComponentAxisSource::GetDirection
          (UGizmoComponentAxisSource *this,TVector<double> *__return_storage_ptr__)

{
  char cVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  TVector<double> *pTVar5;
  uint uVar6;
  uint uVar7;
  double local_68 [4];
  TVector<double>_u_0 local_48;
  TQuat<double> local_28;
  
  lVar2 = this->_padding_;
  local_68[2] = 0.0;
  uVar7 = 2;
  if ((int)this->_padding_ < 2) {
    uVar7 = (uint)this->_padding_;
  }
  local_68[0] = 0.0;
  local_68[1] = 0.0;
  uVar6 = 0;
  if (0 < (int)uVar7) {
    uVar6 = uVar7;
  }
  if (2 < uVar6) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                       ,0x7a2,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TVector<double> *)(*pcVar3)();
      return pTVar5;
    }
  }
  cVar1 = *(char *)((longlong)&this->_padding_ + 4);
  local_68[(int)uVar6] = 1.0;
  if (cVar1 == '\0') {
    (__return_storage_ptr__->field0_0x0)._s_0.X = local_68[0];
    (__return_storage_ptr__->field0_0x0)._s_0.Y = local_68[1];
    (__return_storage_ptr__->field0_0x0)._s_0.Z = local_68[2];
  }
  else {
    local_28.Z = *(double *)(lVar2 + 0x200);
    local_28.W = *(double *)(lVar2 + 0x208);
    local_28.X = *(double *)(lVar2 + 0x1f0);
    local_28.Y = *(double *)(lVar2 + 0x1f8);
    local_48._s_0.X = local_68[0];
    local_48._s_0.Y = local_68[1];
    local_48._s_0.Z = local_68[2];
    UE::Math::TQuat<double>::RotateVector
              (&local_28,__return_storage_ptr__,(TVector<double> *)&local_48._s_0);
  }
  return __return_storage_ptr__;
}

// GetOrigin @ 149655250

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TVector<double> * __thiscall
UGizmoComponentAxisSource::GetOrigin
          (UGizmoComponentAxisSource *this,TVector<double> *__return_storage_ptr__)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  
  lVar1 = this->_padding_;
  dVar3 = *(double *)(lVar1 + 0x218);
  dVar2 = *(double *)(lVar1 + 0x220);
  (__return_storage_ptr__->field0_0x0)._s_0.X = *(double *)(lVar1 + 0x210);
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 149656540

UClass * __cdecl UGizmoComponentAxisSource::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoComponentAxisSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoComponentAxisSource",
               &Z_Registration_Info_UClass_UGizmoComponentAxisSource.InnerSingleton,
               StaticRegisterNativesUGizmoComponentAxisSource,0x40,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UGizmoComponentAxisSource>,
               InternalVTableHelperCtorCaller<UGizmoComponentAxisSource>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoComponentAxisSource.InnerSingleton;
}

// GetTangentVectors @ 1496588b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UGizmoComponentAxisSource::GetTangentVectors
          (UGizmoComponentAxisSource *this,TVector<double> *param_1,TVector<double> *param_2)

{
  longlong lVar1;
  double dVar2;
  int iVar3;
  TVector<double> *pTVar4;
  int iVar5;
  TVector<double>_u_0 local_68;
  TVector<double> local_48;
  TQuat<double> local_28;
  
  lVar1 = this->_padding_;
  (param_1->field0_0x0)._s_0.X = 0.0;
  (param_1->field0_0x0)._s_0.Y = 1.0;
  (param_1->field0_0x0)._s_0.Z = 0.0;
  (param_2->field0_0x0)._s_0.X = 0.0;
  (param_2->field0_0x0)._s_0.Y = 0.0;
  (param_2->field0_0x0)._s_0.Z = 1.0;
  iVar5 = 2;
  if ((int)this->_padding_ < 2) {
    iVar5 = (int)this->_padding_;
  }
  iVar3 = 0;
  if (0 < iVar5) {
    iVar3 = iVar5;
  }
  if (iVar3 == 1) {
    (param_1->field0_0x0)._s_0.X = 0.0;
    (param_1->field0_0x0)._s_0.Y = 0.0;
    (param_1->field0_0x0)._s_0.Z = 1.0;
    (param_2->field0_0x0)._s_0.X = 1.0;
    (param_2->field0_0x0)._s_0.Y = 0.0;
  }
  else {
    if (iVar3 != 2) goto LAB_14965893a;
    (param_1->field0_0x0)._s_0.X = 1.0;
    (param_1->field0_0x0)._s_0.Y = 0.0;
    (param_1->field0_0x0)._s_0.Z = 0.0;
    (param_2->field0_0x0)._s_0.X = 0.0;
    (param_2->field0_0x0)._s_0.Y = 1.0;
  }
  (param_2->field0_0x0)._s_0.Z = 0.0;
LAB_14965893a:
  if (*(char *)((longlong)&this->_padding_ + 4) != '\0') {
    local_28.Z = *(double *)(lVar1 + 0x200);
    local_28.W = *(double *)(lVar1 + 0x208);
    local_28.X = *(double *)(lVar1 + 0x1f0);
    local_28.Y = *(double *)(lVar1 + 0x1f8);
    local_68._s_0.X = (param_1->field0_0x0)._s_0.X;
    local_68._s_0.Y = (param_1->field0_0x0)._s_0.Y;
    local_68._s_0.Z = (param_1->field0_0x0)._s_0.Z;
    pTVar4 = UE::Math::TQuat<double>::RotateVector
                       (&local_28,&local_48,(TVector<double> *)&local_68._s_0);
    dVar2 = (pTVar4->field0_0x0)._s_0.Y;
    (param_1->field0_0x0)._s_0.X = (pTVar4->field0_0x0)._s_0.X;
    (param_1->field0_0x0)._s_0.Y = dVar2;
    (param_1->field0_0x0)._s_0.Z = (pTVar4->field0_0x0)._s_0.Z;
    local_28.Z = *(double *)(lVar1 + 0x200);
    local_28.W = *(double *)(lVar1 + 0x208);
    local_28.X = *(double *)(lVar1 + 0x1f0);
    local_28.Y = *(double *)(lVar1 + 0x1f8);
    local_68._s_0.X = (param_2->field0_0x0)._s_0.X;
    local_68._s_0.Y = (param_2->field0_0x0)._s_0.Y;
    local_68._s_0.Z = (param_2->field0_0x0)._s_0.Z;
    pTVar4 = UE::Math::TQuat<double>::RotateVector
                       (&local_28,&local_48,(TVector<double> *)&local_68._s_0);
    dVar2 = (pTVar4->field0_0x0)._s_0.Y;
    (param_2->field0_0x0)._s_0.X = (pTVar4->field0_0x0)._s_0.X;
    (param_2->field0_0x0)._s_0.Y = dVar2;
    (param_2->field0_0x0)._s_0.Z = (pTVar4->field0_0x0)._s_0.Z;
  }
  return;
}

// HasTangentVectors @ 149658e30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UGizmoComponentAxisSource::HasTangentVectors(UGizmoComponentAxisSource *this)

{
  return true;
}

// StaticRegisterNativesUGizmoComponentAxisSource @ 149664b00

void __cdecl UGizmoComponentAxisSource::StaticRegisterNativesUGizmoComponentAxisSource(void)

{
  return;
}

// _getUObject @ 14966b200

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __thiscall UGizmoComponentAxisSource::_getUObject(UGizmoComponentAxisSource *this)

{
  return (UObject *)&this[-1]._padding_;
}

// Construct @ 149699ac0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UGizmoComponentAxisSource * __cdecl
UGizmoComponentAxisSource::Construct
          (USceneComponent *param_1,int param_2,bool param_3,UObject *param_4)

{
  UClass *pUVar1;
  UGizmoComponentAxisSource *pUVar2;
  longlong *plVar3;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_c8;
  FObjectInitializer::AssertIfInConstructor
            (param_4,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UGizmoComponentAxisSource_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar1);
  local_a8._8_8_ = param_4;
  pUVar2 = (UGizmoComponentAxisSource *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar3 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (USceneComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (pUVar2->Component).field0_0x0.DebugPtr = param_1;
  pUVar2->AxisIndex = param_2;
  pUVar2->bLocalAxes = param_3;
  return pUVar2;
}

