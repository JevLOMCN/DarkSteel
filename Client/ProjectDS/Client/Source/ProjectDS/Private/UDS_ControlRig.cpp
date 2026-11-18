// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 23

// StaticClass @ 14b40ad40

UClass * __cdecl UDS_ControlRig::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ControlRig.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ControlRig",
               &Z_Registration_Info_UClass_UDS_ControlRig.InnerSingleton,
               StaticRegisterNativesUDS_ControlRig,0xc60,0x10,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_ControlRig>,
               InternalVTableHelperCtorCaller<UDS_ControlRig>,aFStackX_8,UControlRig::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ControlRig.InnerSingleton;
}

// UDS_ControlRig @ 14b47d370

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UDS_ControlRig * __thiscall
UDS_ControlRig::UDS_ControlRig(UDS_ControlRig *this,FVTableHelper *param_1)

{
  UControlRig::UControlRig((UControlRig *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__INodeMappingProviderInterface__;
  this->_padding_ = (longlong)&_vftable__for__IRigHierarchyProvider__;
  this->_padding_ = (longlong)&_vftable__for__IMeshDeformerProducer__;
  this->OwnerEntityID = 0;
  (this->AnimInstanceBP).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// UDS_ControlRig @ 14b47d3e0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UDS_ControlRig * __thiscall
UDS_ControlRig::UDS_ControlRig(UDS_ControlRig *this,FObjectInitializer *param_1)

{
  UControlRig::UControlRig((UControlRig *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__INodeMappingProviderInterface__;
  this->_padding_ = (longlong)&_vftable__for__IRigHierarchyProvider__;
  this->_padding_ = (longlong)&_vftable__for__IMeshDeformerProducer__;
  this->OwnerEntityID = 0;
  (this->AnimInstanceBP).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~UDS_ControlRig @ 14b47dcf0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall UDS_ControlRig::~UDS_ControlRig(UDS_ControlRig *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__INodeMappingProviderInterface__;
  this->_padding_ = (longlong)&_vftable__for__IRigHierarchyProvider__;
  this->_padding_ = (longlong)&_vftable__for__IMeshDeformerProducer__;
  UControlRig::~UControlRig((UControlRig *)this);
  return;
}

// GetPrivateStaticClass @ 14b47edb0

UClass * __cdecl UDS_ControlRig::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ControlRig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ControlRig",
               &Z_Registration_Info_UClass_UDS_ControlRig.InnerSingleton,
               StaticRegisterNativesUDS_ControlRig,0xc60,0x10,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_ControlRig>,
               InternalVTableHelperCtorCaller<UDS_ControlRig>,local_res8,UControlRig::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ControlRig.InnerSingleton;
}

// OnChangedCharState @ 14b47f510

void __thiscall
UDS_ControlRig::OnChangedCharState
          (UDS_ControlRig *this,TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_1,
          FDS_ChangedCharStateInfo *param_2)

{
  return;
}

// OnExecuteForwardSolve @ 14b47f520

void __thiscall UDS_ControlRig::OnExecuteForwardSolve(UDS_ControlRig *this,float param_1)

{
  return;
}

// ShouldNotifyChangedCharState @ 14b47f530

bool __thiscall UDS_ControlRig::ShouldNotifyChangedCharState(UDS_ControlRig *this)

{
  return false;
}

// StaticRegisterNativesUDS_ControlRig @ 14b47f580

void __cdecl UDS_ControlRig::StaticRegisterNativesUDS_ControlRig(void)

{
  return;
}

// BeginDestroy @ 14b8b57e0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall UDS_ControlRig::BeginDestroy(UDS_ControlRig *this)

{
  (**(code **)(this->_padding_ + 0x4a8))();
  UControlRig::BeginDestroy((UControlRig *)this);
  return;
}

// Execute @ 14b8bfe70

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall UDS_ControlRig::Execute(UDS_ControlRig *this,FName *param_1)

{
  bool bVar1;
  FName local_res10 [3];
  
  ::FName::FName(local_res10,L"Forwards Solve");
  if (*param_1 == local_res10[0]) {
    (**(code **)(this->_padding_ + 0x498))(this,(int)this->_padding_);
  }
  bVar1 = UControlRig::Execute((UControlRig *)this,param_1);
  return bVar1;
}

// GetActorForwardVector @ 14b8c4140

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TVector<double> * __thiscall
UDS_ControlRig::GetActorForwardVector(UDS_ControlRig *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  USceneComponent *this_00;
  double dVar2;
  undefined8 uVar3;
  AActor *pAVar4;
  TVector<double>_u_0 *pTVar5;
  TVector<double>_u_0 local_28;
  
  pAVar4 = UControlRig::GetHostingActor((UControlRig *)this);
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  if (pAVar4 == (AActor *)0x0) {
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar3;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    return __return_storage_ptr__;
  }
  pAVar4 = UControlRig::GetHostingActor((UControlRig *)this);
  this_00 = (pAVar4->RootComponent).field0_0x0.DebugPtr;
  if (this_00 == (USceneComponent *)0x0) {
    pTVar5 = &local_28;
    local_28._s_0.X = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X;
    local_28._s_0.Y = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y;
    local_28._s_0.Z = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z;
  }
  else {
    pTVar5 = &USceneComponent::GetForwardVector(this_00,(TVector<double> *)&local_28._s_0)->
              field0_0x0;
  }
  dVar2 = (pTVar5->_s_0).Y;
  dVar1 = (pTVar5->_s_0).Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (((TVector<double>_u_0 *)&(pTVar5->_s_0).X)->_s_0).X
  ;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// GetRigTransform @ 14b8c8610

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TTransform<double> * __thiscall
UDS_ControlRig::GetRigTransform
          (UDS_ControlRig *this,TTransform<double> *__return_storage_ptr__,FRigElementKey *param_1,
          ERigVMTransformSpace param_2,bool param_3)

{
  int iVar1;
  URigHierarchy *this_00;
  FRigTransformElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  TTransform<double> *pTVar7;
  longlong lVar8;
  UScriptStruct *pUVar9;
  FRigElementKey local_28;
  FRigElementKey local_18;
  
  this_00 = (URigHierarchy *)this->_padding_;
  if (this_00 == (URigHierarchy *)0x0) {
    *&(__return_storage_ptr__->Rotation).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    *&(__return_storage_ptr__->Rotation).ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    *&(__return_storage_ptr__->Translation).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    *&(__return_storage_ptr__->Translation).ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    *&(__return_storage_ptr__->Scale3D).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    *&(__return_storage_ptr__->Scale3D).ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    return __return_storage_ptr__;
  }
  local_28.Type = param_1->Type;
  local_28._1_3_ = *(undefined3 *)&param_1->field_0x1;
  local_28.Name.ComparisonIndex.Value = (param_1->Name).ComparisonIndex.Value;
  local_28.Name.Number = (param_1->Name).Number;
  if (param_2 == GlobalSpace) {
    uVar5 = URigHierarchy::GetIndex(this_00,&local_28,true);
    if ((-1 < (int)uVar5) && ((int)uVar5 < (this_00->Elements).ArrayNum)) {
      uVar6 = 0;
      if ((int)uVar5 < (this_00->Elements).ArrayNum) {
        uVar6 = ~uVar5 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TTransform<double> *)(*pcVar3)();
          return pTVar7;
        }
      }
      pFVar2 = *(FRigTransformElement **)
                ((this_00->Elements).AllocatorInstance.Data + (longlong)(int)uVar5 * 8);
      if (pFVar2 != (FRigTransformElement *)0x0) {
        lVar8 = (**(code **)(pFVar2->_padding_ + 0x10))(pFVar2);
        pUVar9 = FRigTransformElement::StaticStruct();
        if (pUVar9 != (UScriptStruct *)0x0) {
          iVar1 = (int)pUVar9->_padding_;
          if ((*(int *)(lVar8 + 0x38) < iVar1) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar8 + 0x30) + (longlong)iVar1 * 8) !=
              &pUVar9->_padding_)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar4) {
            URigHierarchy::GetTransform
                      (this_00,__return_storage_ptr__,pFVar2,(param_3 ^ 1) + InitialGlobal);
            return __return_storage_ptr__;
          }
        }
      }
    }
    *&(__return_storage_ptr__->Rotation).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    *&(__return_storage_ptr__->Rotation).ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    *&(__return_storage_ptr__->Translation).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    *&(__return_storage_ptr__->Translation).ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    *&(__return_storage_ptr__->Scale3D).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    *&(__return_storage_ptr__->Scale3D).ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    return __return_storage_ptr__;
  }
  local_18._0_8_ = local_28._0_8_;
  local_18.Name.Number = local_28.Name.Number;
  URigHierarchy::GetLocalTransform(this_00,__return_storage_ptr__,&local_18,param_3);
  return __return_storage_ptr__;
}

// Initialize @ 14b8cc730

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UDS_ControlRig::Initialize(UDS_ControlRig *this,bool param_1)

{
  int iVar1;
  bool bVar2;
  TWeakObjectPtr<UAnimInstance,FWeakObjectPtr> this_00;
  UClass *pUVar3;
  UObject *local_res8;
  
  UControlRig::Initialize((UControlRig *)this,param_1);
  bVar2 = TWeakObjectPtr<UDS_AnimInstanceBase,FWeakObjectPtr>::UEOpEquals
                    (&this->AnimInstanceBP,(void *)0x0);
  if (!bVar2) {
    return;
  }
  UControlRig::GetHostingActor((UControlRig *)this);
  this_00 = UDS_AnimInstanceBase::GetAnimBP((AActor *)&stack0x00000018);
  local_res8 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00.WeakPtr);
  if (local_res8 != (UObject *)0x0) {
    pUVar3 = Z_Construct_UClass_UDS_AnimInstanceBase_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&local_res8->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&local_res8->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) goto LAB_14b8cc7a7;
  }
  local_res8 = (UObject *)0x0;
LAB_14b8cc7a7:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  FWeakObjectPtr::operator=(&(this->AnimInstanceBP).WeakPtr,(FObjectPtr)&local_res8);
  bVar2 = TWeakObjectPtr<UDS_AnimInstanceBase,FWeakObjectPtr>::UEOpEquals
                    (&this->AnimInstanceBP,(void *)0x0);
  if (!bVar2) {
    (**(code **)(this->_padding_ + 0x4a0))(this);
  }
  return;
}

// OnBindEvent @ 14b8d3fe0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_ControlRig::OnBindEvent(UDS_ControlRig *this,FDS_EntityBase *param_1)

{
  char cVar1;
  bool bVar2;
  UObject *pUVar3;
  FWeakObjectPtr local_res10 [3];
  
  if ((param_1 != (FDS_EntityBase *)0x0) &&
     (cVar1 = (**(code **)(this->_padding_ + 0x4c0))(), cVar1 == '\x01')) {
    UDS_CharStateData::GetData((ulong64)local_res10);
    bVar2 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)local_res10,(void *)0x0);
    if (!bVar2) {
      pUVar3 = FWeakObjectPtr::Get(local_res10);
      TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
      ::AddUObject<UDS_ControlRig>
                ((TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
                  *)&pUVar3[7].field_0x20,(UDS_ControlRig *)(local_res10 + 1),(pmf_800b5147 *)this);
    }
  }
  return;
}

// OnDeInitialize @ 14b8d5910

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_ControlRig::OnDeInitialize(UDS_ControlRig *this)

{
  code *pcVar1;
  FDS_EntityBase *pFVar2;
  
  if (this->OwnerEntityID != 0) {
    pcVar1 = *(code **)(this->_padding_ + 0x4b8);
    pFVar2 = FDS_EntityBase::GetEntityBase(&this->OwnerEntityID);
    (*pcVar1)(this,pFVar2);
  }
  return;
}

// OnInitialize @ 14b8d7170

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_ControlRig::OnInitialize(UDS_ControlRig *this)

{
  ulong64 uVar1;
  FDS_EntityBase *pFVar2;
  FWeakObjectPtr local_res10;
  AActor *local_res18 [2];
  
  local_res18[0] = UControlRig::GetHostingActor((UControlRig *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18[0]);
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18[0]);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)local_res18);
  pFVar2 = FDS_EntityBase::GetEntityBaseFromActor
                     ((TWeakObjectPtr<AActor,FWeakObjectPtr>)local_res10);
  if ((pFVar2 != (FDS_EntityBase *)0x0) &&
     (uVar1 = pFVar2->EntityID, this->OwnerEntityID = uVar1, uVar1 != 0)) {
    (**(code **)(this->_padding_ + 0x4b0))(this,pFVar2);
  }
  return;
}

// OnUnBindEvent @ 14b8da550

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_ControlRig::OnUnBindEvent(UDS_ControlRig *this,FDS_EntityBase *param_1)

{
  char cVar1;
  bool bVar2;
  UObject *pUVar3;
  FWeakObjectPtr local_res10 [3];
  
  if ((param_1 != (FDS_EntityBase *)0x0) &&
     (cVar1 = (**(code **)(this->_padding_ + 0x4c0))(), cVar1 == '\x01')) {
    UDS_CharStateData::GetData((ulong64)local_res10);
    bVar2 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)local_res10,(void *)0x0);
    if (!bVar2) {
      pUVar3 = FWeakObjectPtr::Get(local_res10);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3[7].field_0x20,this);
    }
  }
  return;
}

// SetRigTransform @ 14b8ea7a0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UDS_ControlRig::SetRigTransform
          (UDS_ControlRig *this,FRigElementKey *param_1,TTransform<double> *param_2,
          ERigVMTransformSpace param_3)

{
  int iVar1;
  URigHierarchy *this_00;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  UScriptStruct *pUVar6;
  uint uVar7;
  FRigTransformElement *pFVar8;
  TTransform<double> *pTVar9;
  Type TVar10;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  TTransform<double> local_c8;
  TTransform<double> local_68;
  
  this_00 = (URigHierarchy *)this->_padding_;
  if (this_00 == (URigHierarchy *)0x0) {
    return;
  }
  local_128 = *(double *)param_1;
  uVar4 = (param_1->Name).Number;
  if (param_3 == GlobalSpace) {
    dStack_120 = (param_2->Rotation).XY.m128d_f64[1];
    dStack_130 = (double)CONCAT44(dStack_130._4_4_,uVar4);
    local_118 = (param_2->Rotation).ZW.m128d_f64[0];
    dStack_110 = (param_2->Rotation).ZW.m128d_f64[1];
    local_108 = (param_2->Translation).XY.m128d_f64[0];
    dStack_100 = (param_2->Translation).XY.m128d_f64[1];
    local_f8 = (param_2->Translation).ZW.m128d_f64[0];
    dStack_f0 = (param_2->Translation).ZW.m128d_f64[1];
    local_e8 = (param_2->Scale3D).XY.m128d_f64[0];
    dStack_e0 = (param_2->Scale3D).XY.m128d_f64[1];
    local_d8 = (param_2->Scale3D).ZW.m128d_f64[0];
    dStack_d0 = (param_2->Scale3D).ZW.m128d_f64[1];
    local_138 = local_128;
    local_128 = (param_2->Rotation).XY.m128d_f64[0];
    uVar4 = URigHierarchy::GetIndex(this_00,(FRigElementKey *)&local_138,true);
    local_c8.Rotation.XY.m128d_f64[0] = local_128;
    local_c8.Rotation.XY.m128d_f64[1] = dStack_120;
    local_c8.Rotation.ZW.m128d_f64[0] = local_118;
    local_c8.Rotation.ZW.m128d_f64[1] = dStack_110;
    local_c8.Translation.XY.m128d_f64[0] = local_108;
    local_c8.Translation.XY.m128d_f64[1] = dStack_100;
    local_c8.Translation.ZW.m128d_f64[0] = local_f8;
    local_c8.Translation.ZW.m128d_f64[1] = dStack_f0;
    local_c8.Scale3D.XY.m128d_f64[0] = local_e8;
    local_c8.Scale3D.XY.m128d_f64[1] = dStack_e0;
    local_c8.Scale3D.ZW.m128d_f64[0] = local_d8;
    local_c8.Scale3D.ZW.m128d_f64[1] = dStack_d0;
    if ((int)uVar4 < 0) {
      return;
    }
    if ((this_00->Elements).ArrayNum <= (int)uVar4) {
      return;
    }
    uVar7 = 0;
    if ((int)uVar4 < (this_00->Elements).ArrayNum) {
      uVar7 = ~uVar4 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar8 = *(FRigTransformElement **)
              ((this_00->Elements).AllocatorInstance.Data + (longlong)(int)uVar4 * 8);
    if (pFVar8 == (FRigTransformElement *)0x0) {
      return;
    }
    lVar5 = (**(code **)(pFVar8->_padding_ + 0x10))(pFVar8);
    pUVar6 = FRigTransformElement::StaticStruct();
    if (pUVar6 == (UScriptStruct *)0x0) {
      return;
    }
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(lVar5 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar6->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) {
      return;
    }
    TVar10 = CurrentGlobal;
    pTVar9 = &local_c8;
  }
  else {
    local_d8 = (param_2->Rotation).XY.m128d_f64[0];
    dStack_d0 = (param_2->Rotation).XY.m128d_f64[1];
    dStack_120 = (double)CONCAT44(dStack_120._4_4_,uVar4);
    local_e8 = (param_2->Rotation).ZW.m128d_f64[0];
    dStack_e0 = (param_2->Rotation).ZW.m128d_f64[1];
    local_f8 = (param_2->Translation).XY.m128d_f64[0];
    dStack_f0 = (param_2->Translation).XY.m128d_f64[1];
    local_108 = (param_2->Translation).ZW.m128d_f64[0];
    dStack_100 = (param_2->Translation).ZW.m128d_f64[1];
    local_118 = (param_2->Scale3D).XY.m128d_f64[0];
    dStack_110 = (param_2->Scale3D).XY.m128d_f64[1];
    local_138 = (param_2->Scale3D).ZW.m128d_f64[0];
    dStack_130 = (param_2->Scale3D).ZW.m128d_f64[1];
    uVar4 = URigHierarchy::GetIndex(this_00,(FRigElementKey *)&local_128,true);
    local_68.Rotation.XY.m128d_f64[0] = local_d8;
    local_68.Rotation.XY.m128d_f64[1] = dStack_d0;
    local_68.Rotation.ZW.m128d_f64[0] = local_e8;
    local_68.Rotation.ZW.m128d_f64[1] = dStack_e0;
    local_68.Translation.XY.m128d_f64[0] = local_f8;
    local_68.Translation.XY.m128d_f64[1] = dStack_f0;
    local_68.Translation.ZW.m128d_f64[0] = local_108;
    local_68.Translation.ZW.m128d_f64[1] = dStack_100;
    local_68.Scale3D.XY.m128d_f64[0] = local_118;
    local_68.Scale3D.XY.m128d_f64[1] = dStack_110;
    local_68.Scale3D.ZW.m128d_f64[0] = local_138;
    local_68.Scale3D.ZW.m128d_f64[1] = dStack_130;
    if ((int)uVar4 < 0) {
      return;
    }
    if ((this_00->Elements).ArrayNum <= (int)uVar4) {
      return;
    }
    uVar7 = 0;
    if ((int)uVar4 < (this_00->Elements).ArrayNum) {
      uVar7 = ~uVar4 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar8 = *(FRigTransformElement **)
              ((this_00->Elements).AllocatorInstance.Data + (longlong)(int)uVar4 * 8);
    if (pFVar8 == (FRigTransformElement *)0x0) {
      return;
    }
    lVar5 = (**(code **)(pFVar8->_padding_ + 0x10))(pFVar8);
    pUVar6 = FRigTransformElement::StaticStruct();
    if (pUVar6 == (UScriptStruct *)0x0) {
      return;
    }
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(lVar5 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar6->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) {
      return;
    }
    TVar10 = CurrentLocal;
    pTVar9 = &local_68;
  }
  URigHierarchy::SetTransform(this_00,pFVar8,pTVar9,TVar10,true,false,false,false);
  return;
}

// ShowDebugLine @ 14b8eb130

void __thiscall
UDS_ControlRig::ShowDebugLine
          (UDS_ControlRig *this,TVector<double> *param_1,TVector<double> *param_2,FColor *param_3,
          bool param_4,float param_5,uchar param_6,float param_7)

{
  return;
}

// ShowDrawSphere @ 14b8eb140

void __thiscall
UDS_ControlRig::ShowDrawSphere
          (UDS_ControlRig *this,TVector<double> *param_1,float param_2,int param_3,FColor *param_4,
          bool param_5,float param_6,uchar param_7,float param_8)

{
  return;
}

// SphereTraceByObjectTypes @ 14b8ec700

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UDS_ControlRig::SphereTraceByObjectTypes
          (UDS_ControlRig *this,TVector<double> *param_1,TVector<double> *param_2,float param_3,
          TArray<TEnumAsByte<EObjectTypeQuery>,TSizedDefaultAllocator<32>_> *param_4,
          TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_5,FHitResult *param_6)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [12];
  bool bVar12;
  undefined1 uVar13;
  ECollisionChannel EVar14;
  longlong lVar15;
  FRigVMExecuteContext *pFVar16;
  UWorld *this_00;
  TVector<double> *pTVar17;
  FScriptContainerElement *pFVar18;
  longlong lVar19;
  longlong lVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double dVar32;
  double dVar35;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  double dVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  double dVar51;
  undefined4 uVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  double dVar61;
  double dVar64;
  double dVar65;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined4 uVar66;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auStackY_218 [32];
  undefined1 local_1d8;
  undefined1 local_1d7 [7];
  FCollisionObjectQueryParams local_1d0;
  TVector<double> *local_1c8;
  FCollisionShape local_1c0;
  TVector<double>_u_0 local_1b0;
  TVector<double>_u_0 local_198;
  TVector<double>_u_0 local_178;
  FCollisionQueryParams local_158;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_218;
  local_1c8 = param_1;
  lVar15 = (**(code **)(this->_padding_ + 0x180))();
  bVar12 = false;
  if (lVar15 != 0) {
    pFVar18 = (param_4->AllocatorInstance).Data;
    iVar2 = param_4->ArrayNum;
    pFVar1 = pFVar18 + iVar2;
    local_1d0.ObjectTypesToQuery = 0;
    local_1d0.IgnoreMask = '\0';
    while( true ) {
      if (param_4->ArrayNum != iVar2) {
        local_1d8 = 0;
        `TCheckedPointerIterator<TEnumAsByte<enum_EObjectTypeQuery>_const_,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(&local_1d8);
      }
      if (pFVar18 == pFVar1) break;
      EVar14 = UEngineTypes::ConvertToCollisionChannel((uint)(byte)*pFVar18);
      local_1d0.ObjectTypesToQuery =
           local_1d0.ObjectTypesToQuery | 1 << (EVar14 & ECC_GameTraceChannel18);
      pFVar18 = pFVar18 + 1;
    }
    FCollisionQueryParams::FCollisionQueryParams(&local_158);
    local_158.bTraceComplex = true;
    pFVar18 = (param_5->AllocatorInstance).Data;
    iVar2 = param_5->ArrayNum;
    pFVar1 = pFVar18 + (longlong)iVar2 * 8;
    while( true ) {
      if (param_5->ArrayNum != iVar2) {
        local_1d7[0] = 0;
        `TCheckedPointerIterator<AActor_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_1d7);
      }
      if (pFVar18 == pFVar1) break;
      if (*(AActor **)pFVar18 != (AActor *)0x0) {
        FCollisionQueryParams::AddIgnoredActor(&local_158,*(AActor **)pFVar18);
      }
      pFVar18 = pFVar18 + 8;
    }
    if ((this->_padding_ == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("RigVMExtendedExecuteContext != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMHost.h"
                            ,0x14c,L""), bVar12)) {
      pcVar3 = (code *)swi(3);
      uVar13 = (*pcVar3)();
      return (bool)uVar13;
    }
    pFVar16 = FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>
                        ((FRigVMExtendedExecuteContext *)this->_padding_);
    local_1c0.ShapeType = Sphere;
    local_1c0.field1_0x4.Box.HalfExtentX = param_3;
    this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
    auVar37 = *(undefined1 (*) [16])(pFVar16->ToWorldSpaceTransform).Rotation.ZW.m128d_f64;
    dVar32 = auVar37._0_8_;
    auVar22 = *(undefined1 (*) [16])(pFVar16->ToWorldSpaceTransform).Rotation.XY.m128d_f64;
    dVar61 = (param_2->field0_0x0)._s_0.X * (pFVar16->ToWorldSpaceTransform).Scale3D.XY.m128d_f64[0]
    ;
    dVar64 = (param_2->field0_0x0)._s_0.Y * (pFVar16->ToWorldSpaceTransform).Scale3D.XY.m128d_f64[1]
    ;
    dVar5 = (param_2->field0_0x0)._s_0.Z * (pFVar16->ToWorldSpaceTransform).Scale3D.ZW.m128d_f64[0];
    dVar7 = (pFVar16->ToWorldSpaceTransform).Scale3D.ZW.m128d_f64[1] * 0.0;
    dVar9 = (pFVar16->ToWorldSpaceTransform).Rotation.ZW.m128d_f64[1];
    auVar53._8_4_ = SUB84(dVar64,0);
    auVar53._0_8_ = dVar61;
    uVar52 = (undefined4)((ulonglong)dVar64 >> 0x20);
    auVar53._12_4_ = uVar52;
    dVar35 = auVar37._8_8_;
    auVar36 = blendpd(auVar22,auVar37,2);
    auVar54._0_8_ = auVar53._8_8_ * auVar22._0_8_ - auVar22._8_8_ * dVar61;
    auVar54._8_8_ = dVar5 * auVar22._8_8_ - dVar32 * dVar64;
    auVar21._8_4_ = SUB84(dVar64,0);
    auVar21._0_8_ = dVar61;
    auVar21._12_4_ = uVar52;
    auVar22._8_4_ = SUB84(dVar7,0);
    auVar22._0_8_ = dVar5;
    auVar22._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
    auVar22 = blendpd(auVar21,auVar22,2);
    auVar23._0_8_ = auVar22._0_8_ * dVar32 - auVar36._0_8_ * dVar5;
    auVar23._8_8_ = auVar22._8_8_ * dVar35 - auVar36._8_8_ * dVar7;
    auVar22 = *(undefined1 (*) [16])(pFVar16->ToWorldSpaceTransform).Rotation.XY.m128d_f64;
    auVar36 = blendpd(auVar54,auVar23,2);
    auVar55._0_8_ = auVar36._0_8_ + auVar36._0_8_;
    auVar55._8_8_ = auVar36._8_8_ + auVar36._8_8_;
    dVar7 = auVar54._8_8_ + auVar54._8_8_;
    dVar4 = auVar23._0_8_ + auVar23._0_8_;
    uVar52 = (undefined4)((ulonglong)dVar4 >> 0x20);
    auVar47._8_4_ = SUB84(dVar4,0);
    auVar47._0_8_ = dVar7;
    auVar47._12_4_ = uVar52;
    auVar39._8_4_ = SUB84(dVar4,0);
    auVar39._0_8_ = dVar7;
    auVar39._12_4_ = uVar52;
    auVar36 = blendpd(auVar39,auVar55,2);
    auVar48._0_8_ = auVar47._8_8_ * auVar22._0_8_ - auVar22._8_8_ * dVar7;
    auVar48._8_8_ = auVar55._0_8_ * auVar22._8_8_ - dVar32 * dVar4;
    auVar24._8_4_ = SUB84(auVar48._8_8_,0);
    auVar24._0_8_ = auVar48._0_8_;
    auVar24._12_4_ = (int)((ulonglong)auVar48._8_8_ >> 0x20);
    auVar22 = blendpd(auVar22,auVar37,2);
    dVar6 = (local_1c8->field0_0x0)._s_0.Z *
            (pFVar16->ToWorldSpaceTransform).Scale3D.ZW.m128d_f64[0];
    dVar8 = (pFVar16->ToWorldSpaceTransform).Scale3D.ZW.m128d_f64[1] * 0.0;
    auVar40._0_8_ = auVar36._0_8_ * dVar32 - auVar22._0_8_ * auVar55._0_8_;
    auVar40._8_8_ = auVar36._8_8_ * dVar35 - auVar22._8_8_ * auVar55._8_8_;
    dVar4 = dVar4 * dVar9 + dVar64 + auVar40._0_8_ +
            (pFVar16->ToWorldSpaceTransform).Translation.XY.m128d_f64[1];
    dVar64 = (pFVar16->ToWorldSpaceTransform).Scale3D.XY.m128d_f64[0] *
             (local_1c8->field0_0x0)._s_0.X;
    dVar65 = (pFVar16->ToWorldSpaceTransform).Scale3D.XY.m128d_f64[1] *
             (local_1c8->field0_0x0)._s_0.Y;
    local_178._0_16_ = *(undefined1 (*) [16])(pFVar16->ToWorldSpaceTransform).Rotation.XY.m128d_f64;
    auVar22 = blendpd(auVar48,auVar40,2);
    local_1b0._8_4_ = SUB84(dVar4,0);
    local_1b0._0_8_ =
         dVar7 * dVar9 + dVar61 + auVar24._8_8_ +
         (pFVar16->ToWorldSpaceTransform).Translation.XY.m128d_f64[0];
    local_1b0._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    local_1b0._s_0.Z =
         auVar55._0_8_ * dVar9 + dVar5 + auVar22._0_8_ +
         (pFVar16->ToWorldSpaceTransform).Translation.ZW.m128d_f64[0];
    auVar56._8_4_ = SUB84(dVar65,0);
    auVar56._0_8_ = dVar64;
    uVar52 = (undefined4)((ulonglong)dVar65 >> 0x20);
    auVar56._12_4_ = uVar52;
    auVar57._0_8_ = auVar56._8_8_ * local_178._0_8_ - local_178._8_8_ * dVar64;
    auVar57._8_8_ = dVar6 * local_178._8_8_ - dVar32 * dVar65;
    auVar25._8_4_ = SUB84(dVar65,0);
    auVar25._0_8_ = dVar64;
    auVar25._12_4_ = uVar52;
    auVar36._8_4_ = SUB84(dVar8,0);
    auVar36._0_8_ = dVar6;
    auVar36._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
    auVar22 = blendpd(auVar25,auVar36,2);
    auVar36 = blendpd(local_178._0_16_,auVar37,2);
    auVar26._0_8_ = auVar22._0_8_ * dVar32 - auVar36._0_8_ * dVar6;
    auVar26._8_8_ = auVar22._8_8_ * dVar35 - auVar36._8_8_ * dVar8;
    auVar22 = *(undefined1 (*) [16])(pFVar16->ToWorldSpaceTransform).Rotation.XY.m128d_f64;
    auVar36 = blendpd(auVar57,auVar26,2);
    dVar4 = auVar57._8_8_ + auVar57._8_8_;
    dVar7 = auVar26._0_8_ + auVar26._0_8_;
    uVar52 = (undefined4)((ulonglong)dVar7 >> 0x20);
    auVar58._0_8_ = auVar36._0_8_ + auVar36._0_8_;
    auVar58._8_8_ = auVar36._8_8_ + auVar36._8_8_;
    auVar49._8_4_ = SUB84(dVar7,0);
    auVar49._0_8_ = dVar4;
    auVar49._12_4_ = uVar52;
    auVar41._8_4_ = SUB84(dVar7,0);
    auVar41._0_8_ = dVar4;
    auVar41._12_4_ = uVar52;
    auVar36 = blendpd(auVar41,auVar58,2);
    auVar50._0_8_ = auVar49._8_8_ * auVar22._0_8_ - auVar22._8_8_ * dVar4;
    auVar50._8_8_ = auVar58._0_8_ * auVar22._8_8_ - dVar32 * dVar7;
    auVar27._8_4_ = SUB84(auVar50._8_8_,0);
    auVar27._0_8_ = auVar50._0_8_;
    auVar27._12_4_ = (int)((ulonglong)auVar50._8_8_ >> 0x20);
    auVar37 = blendpd(auVar22,auVar37,2);
    auVar42._0_8_ = auVar36._0_8_ * dVar32 - auVar37._0_8_ * auVar58._0_8_;
    auVar42._8_8_ = auVar36._8_8_ * dVar35 - auVar37._8_8_ * auVar58._8_8_;
    auVar36 = blendpd(auVar50,auVar42,2);
    dVar5 = dVar7 * dVar35 + dVar65 + auVar42._0_8_ +
            (pFVar16->ToWorldSpaceTransform).Translation.XY.m128d_f64[1];
    local_198._s_0.Z =
         auVar58._0_8_ * dVar35 + dVar6 + auVar36._0_8_ +
         (pFVar16->ToWorldSpaceTransform).Translation.ZW.m128d_f64[0];
    dVar7 = (pFVar16->ToWorldSpaceTransform).Translation.ZW.m128d_f64[1];
    local_198._8_4_ = SUB84(dVar5,0);
    local_198._0_8_ =
         dVar4 * dVar35 + dVar64 + auVar27._8_8_ +
         (pFVar16->ToWorldSpaceTransform).Translation.XY.m128d_f64[0];
    local_198._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    UWorld::SweepSingleByObjectType
              (this_00,param_6,(TVector<double> *)&local_198._s_0,(TVector<double> *)&local_1b0._s_0
               ,&UE::Math::TQuat<double>::Identity,&local_1d0,&local_1c0,&local_158);
    dVar46 = (pFVar16->ToWorldSpaceTransform).Rotation.XY.m128d_f64[0] *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    dVar51 = (pFVar16->ToWorldSpaceTransform).Rotation.XY.m128d_f64[1] *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    dVar4 = (pFVar16->ToWorldSpaceTransform).Rotation.ZW.m128d_f64[0] *
            GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    dVar5 = (pFVar16->ToWorldSpaceTransform).Rotation.ZW.m128d_f64[1] *
            GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    auVar38._8_4_ = SUB84(dVar51,0);
    auVar38._0_8_ = dVar46;
    uVar52 = (undefined4)((ulonglong)dVar51 >> 0x20);
    auVar38._12_4_ = uVar52;
    dVar64 = *(double *)&(param_6->ImpactPoint).field_0x10 -
             (pFVar16->ToWorldSpaceTransform).Translation.ZW.m128d_f64[0];
    dVar32 = *(double *)&param_6->ImpactPoint -
             (pFVar16->ToWorldSpaceTransform).Translation.XY.m128d_f64[0];
    dVar61 = *(double *)&(param_6->ImpactPoint).field_0x8 -
             (pFVar16->ToWorldSpaceTransform).Translation.XY.m128d_f64[1];
    uVar66 = (undefined4)((ulonglong)dVar61 >> 0x20);
    dVar65 = auVar38._8_8_;
    auVar69._8_4_ = SUB84(dVar61,0);
    auVar69._0_8_ = dVar32;
    auVar69._12_4_ = uVar66;
    auVar28._8_4_ = SUB84(dVar4,0);
    auVar28._0_8_ = dVar65;
    auVar28._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    auVar43._8_4_ = SUB84(dVar51,0);
    auVar43._0_8_ = dVar46;
    auVar43._12_4_ = uVar52;
    auVar37._8_4_ = SUB84(dVar5,0);
    auVar37._0_8_ = dVar4;
    auVar37._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    auVar22 = blendpd(auVar43,auVar37,2);
    auVar70._0_8_ = auVar69._8_8_ * dVar46 - dVar65 * dVar32;
    auVar70._8_8_ = dVar64 * dVar51 - auVar28._8_8_ * dVar61;
    auVar33._8_4_ = SUB84(dVar61,0);
    auVar33._0_8_ = dVar32;
    auVar33._12_4_ = uVar66;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = dVar64;
    auVar37 = blendpd(auVar33,auVar10,2);
    auVar34._0_8_ = auVar37._0_8_ * dVar4 - auVar22._0_8_ * dVar64;
    auVar34._8_8_ = auVar37._8_8_ * dVar5 - auVar22._8_8_ * 0.0;
    dVar6 = auVar70._8_8_ + auVar70._8_8_;
    dVar9 = auVar34._0_8_ + auVar34._0_8_;
    uVar52 = SUB84(dVar9,0);
    uVar66 = (undefined4)((ulonglong)dVar9 >> 0x20);
    auVar37 = blendpd(auVar70,auVar34,2);
    auVar11._4_8_ = auVar58._8_8_ * dVar35 + dVar8 + auVar36._8_8_ + dVar7;
    auVar11._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
    auVar59._0_8_ = auVar11._0_8_ << 0x20;
    auVar59._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
    auVar59._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
    auVar71._0_8_ = auVar37._0_8_ + auVar37._0_8_;
    auVar71._8_8_ = auVar37._8_8_ + auVar37._8_8_;
    auVar67._8_4_ = uVar52;
    auVar67._0_8_ = dVar6;
    auVar67._12_4_ = uVar66;
    auVar29._8_4_ = uVar52;
    auVar29._0_8_ = dVar6;
    auVar29._12_4_ = uVar66;
    auVar62._8_4_ = uVar52;
    auVar62._0_8_ = dVar6;
    auVar62._12_4_ = uVar66;
    auVar36 = blendpd(auVar62,auVar71,2);
    auVar37 = *(undefined1 (*) [16])(pFVar16->ToWorldSpaceTransform).Scale3D.XY.m128d_f64;
    auVar68._0_8_ = auVar67._8_8_ * dVar46 - dVar6 * dVar65;
    auVar68._8_8_ = auVar71._0_8_ * dVar51 - auVar29._8_8_ * dVar4;
    auVar30._8_4_ = SUB84(auVar71._8_8_,0);
    auVar30._0_8_ = auVar71._0_8_;
    auVar30._12_4_ = (int)((ulonglong)auVar71._8_8_ >> 0x20);
    auVar63._0_8_ = auVar36._0_8_ * dVar4 - auVar71._0_8_ * auVar22._0_8_;
    auVar63._8_8_ = auVar36._8_8_ * dVar5 - auVar30._8_8_ * auVar22._8_8_;
    auVar22 = *(undefined1 (*) [16])(pFVar16->ToWorldSpaceTransform).Scale3D.ZW.m128d_f64;
    auVar60._8_8_ = auVar59._8_8_;
    auVar60._0_8_ = auVar22._0_8_;
    lVar15 = -(ulonglong)
              ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar22._4_4_,
                                (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar22._0_4_) <=
              (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
    auVar44._0_8_ =
         (double)CONCAT44(auVar37._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          auVar37._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    auVar44._8_4_ = auVar37._8_4_ & _UNK_15061cc88;
    auVar44._12_4_ = auVar37._12_4_ & _UNK_15061cc8c;
    lVar19 = -(ulonglong)(auVar44._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
    lVar20 = -(ulonglong)(auVar44._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
    auVar37 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar37);
    auVar31._8_4_ = SUB84(auVar68._8_8_,0);
    auVar31._0_8_ = auVar68._0_8_;
    auVar31._12_4_ = (int)((ulonglong)auVar68._8_8_ >> 0x20);
    auVar45._0_8_ =
         (double)CONCAT44(~(uint)((ulonglong)lVar19 >> 0x20) & auVar37._4_4_,
                          ~(uint)lVar19 & auVar37._0_4_);
    auVar45._8_4_ = ~(uint)lVar20 & auVar37._8_4_;
    auVar45._12_4_ = ~(uint)((ulonglong)lVar20 >> 0x20) & auVar37._12_4_;
    auVar37 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar60);
    auVar22 = blendpd(auVar68,auVar63,2);
    *(double *)&param_6->ImpactPoint = auVar45._0_8_ * (dVar6 * dVar5 + dVar32 + auVar31._8_8_);
    *(double *)&(param_6->ImpactPoint).field_0x8 =
         auVar45._8_8_ * (dVar9 * dVar5 + dVar61 + auVar63._0_8_);
    *(double *)&(param_6->ImpactPoint).field_0x10 =
         (double)CONCAT44(~(uint)((ulonglong)lVar15 >> 0x20) & auVar37._4_4_,
                          ~(uint)lVar15 & auVar37._0_4_) *
         (auVar71._0_8_ * dVar5 + dVar64 + auVar22._0_8_);
    pTVar17 = UE::Math::TTransform<double>::InverseTransformVector
                        (&pFVar16->ToWorldSpaceTransform,(TVector<double> *)&local_178._s_0,
                         (TVector<double> *)&param_6->ImpactNormal);
    bVar12 = param_6->bBlockingHit;
    dVar7 = (pTVar17->field0_0x0)._s_0.Z;
    dVar4 = (pTVar17->field0_0x0)._s_0.Y;
    *(double *)&param_6->ImpactNormal = (pTVar17->field0_0x0)._s_0.X;
    *(double *)&(param_6->ImpactNormal).field_0x8 = dVar4;
    *(double *)&(param_6->ImpactNormal).field_0x10 = dVar7;
    if (local_158.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_158.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
    }
    if (local_158.IgnoreComponents.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_158.IgnoreComponents.AllocatorInstance.SecondaryData);
    }
  }
  return bVar12;
}

// SphereTraceByTraceChannel @ 14b8ecd90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UDS_ControlRig::SphereTraceByTraceChannel
          (UDS_ControlRig *this,TVector<double> *param_1,TVector<double> *param_2,float param_3,
          ETraceTypeQuery *param_4,TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_5,
          FHitResult *param_6)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [12];
  bool bVar12;
  undefined1 uVar13;
  ECollisionChannel EVar14;
  longlong lVar15;
  FRigVMExecuteContext *pFVar16;
  UWorld *this_00;
  TVector<double> *pTVar17;
  FScriptContainerElement *pFVar18;
  longlong lVar19;
  longlong lVar20;
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double dVar34;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined4 uVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  double dVar59;
  double dVar62;
  double dVar63;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined4 uVar64;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auStackY_218 [32];
  undefined1 local_1c8 [8];
  ETraceTypeQuery *local_1c0;
  FCollisionShape local_1b8;
  TVector<double>_u_0 local_1a8;
  TVector<double>_u_0 local_190;
  TVector<double>_u_0 local_178;
  FCollisionQueryParams local_158;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_218;
  local_1c0 = param_4;
  lVar15 = (**(code **)(this->_padding_ + 0x180))();
  bVar12 = false;
  if (lVar15 != 0) {
    FCollisionQueryParams::FCollisionQueryParams(&local_158);
    local_158.bTraceComplex = true;
    pFVar18 = (param_5->AllocatorInstance).Data;
    iVar2 = param_5->ArrayNum;
    pFVar1 = pFVar18 + (longlong)iVar2 * 8;
    while( true ) {
      if (param_5->ArrayNum != iVar2) {
        local_1c8[0] = 0;
        `TCheckedPointerIterator<AActor_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_1c8);
      }
      if (pFVar18 == pFVar1) break;
      if (*(AActor **)pFVar18 != (AActor *)0x0) {
        FCollisionQueryParams::AddIgnoredActor(&local_158,*(AActor **)pFVar18);
      }
      pFVar18 = pFVar18 + 8;
    }
    if ((this->_padding_ == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("RigVMExtendedExecuteContext != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMHost.h"
                            ,0x14c,L""), bVar12)) {
      pcVar3 = (code *)swi(3);
      uVar13 = (*pcVar3)();
      return (bool)uVar13;
    }
    pFVar16 = FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>
                        ((FRigVMExtendedExecuteContext *)this->_padding_);
    local_1b8.ShapeType = Sphere;
    local_1b8.field1_0x4.Box.HalfExtentX = param_3;
    EVar14 = UEngineTypes::ConvertToCollisionChannel(*local_1c0);
    this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
    auVar37 = *(undefined1 (*) [16])(pFVar16->ToWorldSpaceTransform).Rotation.ZW.m128d_f64;
    dVar21 = auVar37._0_8_;
    auVar22 = *(undefined1 (*) [16])(pFVar16->ToWorldSpaceTransform).Rotation.XY.m128d_f64;
    dVar59 = (param_2->field0_0x0)._s_0.X * (pFVar16->ToWorldSpaceTransform).Scale3D.XY.m128d_f64[0]
    ;
    dVar62 = (param_2->field0_0x0)._s_0.Y * (pFVar16->ToWorldSpaceTransform).Scale3D.XY.m128d_f64[1]
    ;
    dVar5 = (param_2->field0_0x0)._s_0.Z * (pFVar16->ToWorldSpaceTransform).Scale3D.ZW.m128d_f64[0];
    dVar7 = (pFVar16->ToWorldSpaceTransform).Scale3D.ZW.m128d_f64[1] * 0.0;
    dVar9 = (pFVar16->ToWorldSpaceTransform).Rotation.ZW.m128d_f64[1];
    auVar51._8_4_ = SUB84(dVar62,0);
    auVar51._0_8_ = dVar59;
    uVar50 = (undefined4)((ulonglong)dVar62 >> 0x20);
    auVar51._12_4_ = uVar50;
    dVar34 = auVar37._8_8_;
    auVar35 = blendpd(auVar22,auVar37,2);
    auVar52._0_8_ = auVar51._8_8_ * auVar22._0_8_ - auVar22._8_8_ * dVar59;
    auVar52._8_8_ = dVar5 * auVar22._8_8_ - dVar21 * dVar62;
    auVar36._8_4_ = SUB84(dVar62,0);
    auVar36._0_8_ = dVar59;
    auVar36._12_4_ = uVar50;
    auVar22._8_4_ = SUB84(dVar7,0);
    auVar22._0_8_ = dVar5;
    auVar22._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
    auVar22 = blendpd(auVar36,auVar22,2);
    auVar23._0_8_ = auVar22._0_8_ * dVar21 - auVar35._0_8_ * dVar5;
    auVar23._8_8_ = auVar22._8_8_ * dVar34 - auVar35._8_8_ * dVar7;
    auVar22 = *(undefined1 (*) [16])(pFVar16->ToWorldSpaceTransform).Rotation.XY.m128d_f64;
    auVar35 = blendpd(auVar52,auVar23,2);
    auVar53._0_8_ = auVar35._0_8_ + auVar35._0_8_;
    auVar53._8_8_ = auVar35._8_8_ + auVar35._8_8_;
    dVar7 = auVar52._8_8_ + auVar52._8_8_;
    dVar4 = auVar23._0_8_ + auVar23._0_8_;
    uVar50 = (undefined4)((ulonglong)dVar4 >> 0x20);
    auVar46._8_4_ = SUB84(dVar4,0);
    auVar46._0_8_ = dVar7;
    auVar46._12_4_ = uVar50;
    auVar39._8_4_ = SUB84(dVar4,0);
    auVar39._0_8_ = dVar7;
    auVar39._12_4_ = uVar50;
    auVar35 = blendpd(auVar39,auVar53,2);
    auVar47._0_8_ = auVar46._8_8_ * auVar22._0_8_ - auVar22._8_8_ * dVar7;
    auVar47._8_8_ = auVar53._0_8_ * auVar22._8_8_ - dVar21 * dVar4;
    auVar24._8_4_ = SUB84(auVar47._8_8_,0);
    auVar24._0_8_ = auVar47._0_8_;
    auVar24._12_4_ = (int)((ulonglong)auVar47._8_8_ >> 0x20);
    auVar22 = blendpd(auVar22,auVar37,2);
    dVar6 = (param_1->field0_0x0)._s_0.Z * (pFVar16->ToWorldSpaceTransform).Scale3D.ZW.m128d_f64[0];
    dVar8 = (pFVar16->ToWorldSpaceTransform).Scale3D.ZW.m128d_f64[1] * 0.0;
    auVar40._0_8_ = auVar35._0_8_ * dVar21 - auVar22._0_8_ * auVar53._0_8_;
    auVar40._8_8_ = auVar35._8_8_ * dVar34 - auVar22._8_8_ * auVar53._8_8_;
    dVar4 = dVar4 * dVar9 + dVar62 + auVar40._0_8_ +
            (pFVar16->ToWorldSpaceTransform).Translation.XY.m128d_f64[1];
    dVar62 = (pFVar16->ToWorldSpaceTransform).Scale3D.XY.m128d_f64[0] * (param_1->field0_0x0)._s_0.X
    ;
    dVar63 = (pFVar16->ToWorldSpaceTransform).Scale3D.XY.m128d_f64[1] * (param_1->field0_0x0)._s_0.Y
    ;
    local_178._0_16_ = *(undefined1 (*) [16])(pFVar16->ToWorldSpaceTransform).Rotation.XY.m128d_f64;
    auVar22 = blendpd(auVar47,auVar40,2);
    local_1a8._8_4_ = SUB84(dVar4,0);
    local_1a8._0_8_ =
         dVar7 * dVar9 + dVar59 + auVar24._8_8_ +
         (pFVar16->ToWorldSpaceTransform).Translation.XY.m128d_f64[0];
    local_1a8._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    local_1a8._s_0.Z =
         auVar53._0_8_ * dVar9 + dVar5 + auVar22._0_8_ +
         (pFVar16->ToWorldSpaceTransform).Translation.ZW.m128d_f64[0];
    auVar54._8_4_ = SUB84(dVar63,0);
    auVar54._0_8_ = dVar62;
    uVar50 = (undefined4)((ulonglong)dVar63 >> 0x20);
    auVar54._12_4_ = uVar50;
    auVar55._0_8_ = auVar54._8_8_ * local_178._0_8_ - local_178._8_8_ * dVar62;
    auVar55._8_8_ = dVar6 * local_178._8_8_ - dVar21 * dVar63;
    auVar36 = blendpd(local_178._0_16_,auVar37,2);
    auVar25._8_4_ = SUB84(dVar63,0);
    auVar25._0_8_ = dVar62;
    auVar25._12_4_ = uVar50;
    auVar35._8_4_ = SUB84(dVar8,0);
    auVar35._0_8_ = dVar6;
    auVar35._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
    auVar22 = blendpd(auVar25,auVar35,2);
    auVar26._0_8_ = auVar22._0_8_ * dVar21 - auVar36._0_8_ * dVar6;
    auVar26._8_8_ = auVar22._8_8_ * dVar34 - auVar36._8_8_ * dVar8;
    auVar22 = *(undefined1 (*) [16])(pFVar16->ToWorldSpaceTransform).Rotation.XY.m128d_f64;
    auVar35 = blendpd(auVar55,auVar26,2);
    dVar4 = auVar55._8_8_ + auVar55._8_8_;
    dVar7 = auVar26._0_8_ + auVar26._0_8_;
    uVar50 = (undefined4)((ulonglong)dVar7 >> 0x20);
    auVar56._0_8_ = auVar35._0_8_ + auVar35._0_8_;
    auVar56._8_8_ = auVar35._8_8_ + auVar35._8_8_;
    auVar48._8_4_ = SUB84(dVar7,0);
    auVar48._0_8_ = dVar4;
    auVar48._12_4_ = uVar50;
    auVar41._8_4_ = SUB84(dVar7,0);
    auVar41._0_8_ = dVar4;
    auVar41._12_4_ = uVar50;
    auVar35 = blendpd(auVar41,auVar56,2);
    auVar49._0_8_ = auVar48._8_8_ * auVar22._0_8_ - auVar22._8_8_ * dVar4;
    auVar49._8_8_ = auVar56._0_8_ * auVar22._8_8_ - dVar21 * dVar7;
    auVar27._8_4_ = SUB84(auVar49._8_8_,0);
    auVar27._0_8_ = auVar49._0_8_;
    auVar27._12_4_ = (int)((ulonglong)auVar49._8_8_ >> 0x20);
    auVar37 = blendpd(auVar22,auVar37,2);
    auVar42._0_8_ = auVar35._0_8_ * dVar21 - auVar37._0_8_ * auVar56._0_8_;
    auVar42._8_8_ = auVar35._8_8_ * dVar34 - auVar37._8_8_ * auVar56._8_8_;
    auVar37 = blendpd(auVar49,auVar42,2);
    dVar5 = dVar7 * dVar34 + dVar63 + auVar42._0_8_ +
            (pFVar16->ToWorldSpaceTransform).Translation.XY.m128d_f64[1];
    local_190._s_0.Z =
         auVar56._0_8_ * dVar34 + dVar6 + auVar37._0_8_ +
         (pFVar16->ToWorldSpaceTransform).Translation.ZW.m128d_f64[0];
    dVar7 = (pFVar16->ToWorldSpaceTransform).Translation.ZW.m128d_f64[1];
    local_190._8_4_ = SUB84(dVar5,0);
    local_190._0_8_ =
         dVar4 * dVar34 + dVar62 + auVar27._8_8_ +
         (pFVar16->ToWorldSpaceTransform).Translation.XY.m128d_f64[0];
    local_190._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    UWorld::SweepSingleByChannel
              (this_00,param_6,(TVector<double> *)&local_190._s_0,(TVector<double> *)&local_1a8._s_0
               ,&UE::Math::TQuat<double>::Identity,EVar14,&local_1b8,&local_158,
               &FCollisionResponseParams::DefaultResponseParam);
    if (param_6->bBlockingHit != 0) {
      dVar59 = (pFVar16->ToWorldSpaceTransform).Rotation.XY.m128d_f64[0] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      dVar62 = (pFVar16->ToWorldSpaceTransform).Rotation.XY.m128d_f64[1] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      dVar4 = (pFVar16->ToWorldSpaceTransform).Rotation.ZW.m128d_f64[0] *
              GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
      dVar5 = (pFVar16->ToWorldSpaceTransform).Rotation.ZW.m128d_f64[1] *
              GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      auVar38._8_4_ = SUB84(dVar62,0);
      auVar38._0_8_ = dVar59;
      uVar50 = (undefined4)((ulonglong)dVar62 >> 0x20);
      auVar38._12_4_ = uVar50;
      dVar21 = *(double *)&(param_6->ImpactPoint).field_0x10 -
               (pFVar16->ToWorldSpaceTransform).Translation.ZW.m128d_f64[0];
      auVar11._4_8_ = auVar56._8_8_ * dVar34 + dVar8 + auVar37._8_8_ + dVar7;
      auVar11._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
      auVar57._0_8_ = auVar11._0_8_ << 0x20;
      auVar57._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
      auVar57._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
      auVar43._8_4_ = SUB84(dVar62,0);
      auVar43._0_8_ = dVar59;
      auVar43._12_4_ = uVar50;
      auVar37._8_4_ = SUB84(dVar5,0);
      auVar37._0_8_ = dVar4;
      auVar37._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
      auVar22 = blendpd(auVar43,auVar37,2);
      dVar34 = auVar38._8_8_;
      dVar8 = *(double *)&param_6->ImpactPoint -
              (pFVar16->ToWorldSpaceTransform).Translation.XY.m128d_f64[0];
      dVar9 = *(double *)&(param_6->ImpactPoint).field_0x8 -
              (pFVar16->ToWorldSpaceTransform).Translation.XY.m128d_f64[1];
      uVar50 = (undefined4)((ulonglong)dVar9 >> 0x20);
      auVar67._8_4_ = SUB84(dVar9,0);
      auVar67._0_8_ = dVar8;
      auVar67._12_4_ = uVar50;
      auVar28._8_4_ = SUB84(dVar4,0);
      auVar28._0_8_ = dVar34;
      auVar28._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
      auVar32._8_4_ = SUB84(dVar9,0);
      auVar32._0_8_ = dVar8;
      auVar32._12_4_ = uVar50;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = dVar21;
      auVar37 = blendpd(auVar32,auVar10,2);
      auVar68._0_8_ = auVar67._8_8_ * dVar59 - dVar34 * dVar8;
      auVar68._8_8_ = dVar21 * dVar62 - auVar28._8_8_ * dVar9;
      auVar33._0_8_ = auVar37._0_8_ * dVar4 - dVar21 * auVar22._0_8_;
      auVar33._8_8_ = auVar37._8_8_ * dVar5 - auVar22._8_8_ * 0.0;
      dVar7 = auVar68._8_8_ + auVar68._8_8_;
      dVar6 = auVar33._0_8_ + auVar33._0_8_;
      uVar50 = SUB84(dVar6,0);
      uVar64 = (undefined4)((ulonglong)dVar6 >> 0x20);
      auVar37 = blendpd(auVar68,auVar33,2);
      auVar65._8_4_ = uVar50;
      auVar65._0_8_ = dVar7;
      auVar65._12_4_ = uVar64;
      auVar29._8_4_ = uVar50;
      auVar29._0_8_ = dVar7;
      auVar29._12_4_ = uVar64;
      auVar60._8_4_ = uVar50;
      auVar60._0_8_ = dVar7;
      auVar60._12_4_ = uVar64;
      auVar69._0_8_ = auVar37._0_8_ + auVar37._0_8_;
      auVar69._8_8_ = auVar37._8_8_ + auVar37._8_8_;
      auVar37 = *(undefined1 (*) [16])(pFVar16->ToWorldSpaceTransform).Scale3D.XY.m128d_f64;
      auVar66._0_8_ = auVar65._8_8_ * dVar59 - dVar7 * dVar34;
      auVar66._8_8_ = auVar69._0_8_ * dVar62 - auVar29._8_8_ * dVar4;
      auVar35 = blendpd(auVar60,auVar69,2);
      auVar30._8_4_ = SUB84(auVar69._8_8_,0);
      auVar30._0_8_ = auVar69._0_8_;
      auVar30._12_4_ = (int)((ulonglong)auVar69._8_8_ >> 0x20);
      auVar61._0_8_ = auVar35._0_8_ * dVar4 - auVar69._0_8_ * auVar22._0_8_;
      auVar61._8_8_ = auVar35._8_8_ * dVar5 - auVar30._8_8_ * auVar22._8_8_;
      auVar22 = *(undefined1 (*) [16])(pFVar16->ToWorldSpaceTransform).Scale3D.ZW.m128d_f64;
      auVar58._8_8_ = auVar57._8_8_;
      auVar58._0_8_ = auVar22._0_8_;
      lVar15 = -(ulonglong)
                ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar22._4_4_,
                                  (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar22._0_4_) <=
                (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
      auVar44._0_8_ =
           (double)CONCAT44(auVar37._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            auVar37._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      auVar44._8_4_ = auVar37._8_4_ & _UNK_15061cc88;
      auVar44._12_4_ = auVar37._12_4_ & _UNK_15061cc8c;
      lVar19 = -(ulonglong)(auVar44._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0])
      ;
      lVar20 = -(ulonglong)(auVar44._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1])
      ;
      auVar37 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar37);
      auVar31._8_4_ = SUB84(auVar66._8_8_,0);
      auVar31._0_8_ = auVar66._0_8_;
      auVar31._12_4_ = (int)((ulonglong)auVar66._8_8_ >> 0x20);
      auVar45._0_8_ =
           (double)CONCAT44(~(uint)((ulonglong)lVar19 >> 0x20) & auVar37._4_4_,
                            ~(uint)lVar19 & auVar37._0_4_);
      auVar45._8_4_ = ~(uint)lVar20 & auVar37._8_4_;
      auVar45._12_4_ = ~(uint)((ulonglong)lVar20 >> 0x20) & auVar37._12_4_;
      auVar37 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar58);
      auVar22 = blendpd(auVar66,auVar61,2);
      *(double *)&param_6->ImpactPoint = auVar45._0_8_ * (dVar7 * dVar5 + dVar8 + auVar31._8_8_);
      *(double *)&(param_6->ImpactPoint).field_0x8 =
           auVar45._8_8_ * (dVar6 * dVar5 + dVar9 + auVar61._0_8_);
      *(double *)&(param_6->ImpactPoint).field_0x10 =
           (double)CONCAT44(~(uint)((ulonglong)lVar15 >> 0x20) & auVar37._4_4_,
                            ~(uint)lVar15 & auVar37._0_4_) *
           (auVar69._0_8_ * dVar5 + dVar21 + auVar22._0_8_);
      pTVar17 = UE::Math::TTransform<double>::InverseTransformVector
                          (&pFVar16->ToWorldSpaceTransform,(TVector<double> *)&local_178._s_0,
                           (TVector<double> *)&param_6->ImpactNormal);
      dVar4 = (pTVar17->field0_0x0)._s_0.Y;
      dVar7 = (pTVar17->field0_0x0)._s_0.Z;
      *(double *)&param_6->ImpactNormal = (pTVar17->field0_0x0)._s_0.X;
      *(double *)&(param_6->ImpactNormal).field_0x8 = dVar4;
      *(double *)&(param_6->ImpactNormal).field_0x10 = dVar7;
    }
    bVar12 = param_6->bBlockingHit;
    if (local_158.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_158.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
    }
    if (local_158.IgnoreComponents.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_158.IgnoreComponents.AllocatorInstance.SecondaryData);
    }
  }
  return bVar12;
}

