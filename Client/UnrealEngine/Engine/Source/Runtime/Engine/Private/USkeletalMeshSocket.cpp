// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 19

// StaticClass @ 147320e30

UClass * __cdecl USkeletalMeshSocket::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USkeletalMeshSocket.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SkeletalMeshSocket",
               &Z_Registration_Info_UClass_USkeletalMeshSocket.InnerSingleton,
               StaticRegisterNativesUSkeletalMeshSocket,0x88,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USkeletalMeshSocket>,
               InternalVTableHelperCtorCaller<USkeletalMeshSocket>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USkeletalMeshSocket.InnerSingleton;
}

// USkeletalMeshSocket @ 147324f10

USkeletalMeshSocket * __thiscall
USkeletalMeshSocket::USkeletalMeshSocket(USkeletalMeshSocket *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7USkeletalMeshSocket__6B_;
  (this->SocketName).ComparisonIndex = 0;
  (this->SocketName).Number = 0;
  (this->BoneName).ComparisonIndex = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->BoneName).Number = 0;
  (this->RelativeLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->RelativeLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->RelativeLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->RelativeRotation).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->RelativeRotation).Yaw = dVar2;
  (this->RelativeRotation).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (this->RelativeScale).field0_0x0._s_0.X = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (this->RelativeScale).field0_0x0._s_0.Y = (double)uVar1;
  (this->RelativeScale).field0_0x0._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  this->bForceAlwaysAnimated = true;
  return this;
}

// USkeletalMeshSocket @ 147324f90

USkeletalMeshSocket * __thiscall
USkeletalMeshSocket::USkeletalMeshSocket(USkeletalMeshSocket *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7USkeletalMeshSocket__6B_;
  (this->SocketName).ComparisonIndex = 0;
  (this->SocketName).Number = 0;
  (this->BoneName).ComparisonIndex = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->BoneName).Number = 0;
  (this->RelativeLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->RelativeLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->RelativeLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->RelativeRotation).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->RelativeRotation).Yaw = dVar2;
  (this->RelativeRotation).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (this->RelativeScale).field0_0x0._s_0.X = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (this->RelativeScale).field0_0x0._s_0.Y = (double)uVar1;
  (this->RelativeScale).field0_0x0._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  this->bForceAlwaysAnimated = true;
  return this;
}

// ~USkeletalMeshSocket @ 147325560

void __thiscall USkeletalMeshSocket::~USkeletalMeshSocket(USkeletalMeshSocket *this)

{
  this->_padding_ = (longlong)&___7USkeletalMeshSocket__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 147327980

UClass * __cdecl USkeletalMeshSocket::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USkeletalMeshSocket.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SkeletalMeshSocket",
               &Z_Registration_Info_UClass_USkeletalMeshSocket.InnerSingleton,
               StaticRegisterNativesUSkeletalMeshSocket,0x88,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USkeletalMeshSocket>,
               InternalVTableHelperCtorCaller<USkeletalMeshSocket>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USkeletalMeshSocket.InnerSingleton;
}

// Serialize @ 147327f40

void __thiscall
USkeletalMeshSocket::Serialize(USkeletalMeshSocket *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// StaticRegisterNativesUSkeletalMeshSocket @ 147328390

void __cdecl USkeletalMeshSocket::StaticRegisterNativesUSkeletalMeshSocket(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_USkeletalMeshSocket_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetSocketLocalTransform @ 14732a250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
USkeletalMeshSocket::execGetSocketLocalTransform(UObject *param_1,FFrame *param_2,void *param_3)

{
  double dVar1;
  TTransform<double> *pTVar2;
  undefined1 auStack_98 [32];
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar2 = GetSocketLocalTransform((USkeletalMeshSocket *)param_1,&local_78);
  dVar1 = (pTVar2->Rotation).XY.m128d_f64[1];
  *(double *)param_3 = (pTVar2->Rotation).XY.m128d_f64[0];
  *(double *)((longlong)param_3 + 8) = dVar1;
  dVar1 = (pTVar2->Rotation).ZW.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x10) = (pTVar2->Rotation).ZW.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x18) = dVar1;
  dVar1 = (pTVar2->Translation).XY.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x20) = (pTVar2->Translation).XY.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x28) = dVar1;
  dVar1 = (pTVar2->Translation).ZW.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x30) = (pTVar2->Translation).ZW.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x38) = dVar1;
  dVar1 = (pTVar2->Scale3D).XY.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x40) = (pTVar2->Scale3D).XY.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x48) = dVar1;
  dVar1 = (pTVar2->Scale3D).ZW.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x50) = (pTVar2->Scale3D).ZW.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x58) = dVar1;
  return;
}

// execGetSocketLocation @ 14732a2e0

void __cdecl
USkeletalMeshSocket::execGetSocketLocation(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double dVar2;
  TVector<double> *pTVar3;
  USkeletalMeshComponent *local_res10;
  TVector<double> local_28;
  
  local_res10 = (USkeletalMeshComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar3 = GetSocketLocation((USkeletalMeshSocket *)param_1,&local_28,local_res10);
  dVar2 = (pTVar3->field0_0x0)._s_0.Y;
  *(double *)param_3 = (pTVar3->field0_0x0)._s_0.X;
  *(double *)((longlong)param_3 + 8) = dVar2;
  *(double *)((longlong)param_3 + 0x10) = (pTVar3->field0_0x0)._s_0.Z;
  return;
}

// execInitializeSocketFromLocation @ 14732a480

void __cdecl
USkeletalMeshSocket::execInitializeSocketFromLocation
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  USkeletalMeshComponent *local_res10;
  double local_78;
  double dStack_70;
  double local_68;
  double local_60;
  double dStack_58;
  double local_50;
  TVector<double>_u_0 local_48;
  TVector<double>_u_0 local_28;
  
  local_res10 = (USkeletalMeshComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_60,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_60);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_48._s_0.X = local_78;
  local_48._s_0.Y = dStack_70;
  local_48._s_0.Z = local_68;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28._s_0.X = local_60;
  local_28._s_0.Y = dStack_58;
  local_28._s_0.Z = local_50;
  InitializeSocketFromLocation
            ((USkeletalMeshSocket *)param_1,local_res10,(TVector<double> *)&local_28._s_0,
             (TVector<double> *)&local_48._s_0);
  return;
}

// AttachActor @ 1485ac230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
USkeletalMeshSocket::AttachActor
          (USkeletalMeshSocket *this,AActor *param_1,USkeletalMeshComponent *param_2)

{
  USceneComponent *pUVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  TRotator<double> *pTVar5;
  undefined1 auStackY_138 [32];
  TVector<double>_u_0 local_108;
  TRotator<double> local_e8;
  TRotator<double> local_c8;
  TMatrix<double> local_a8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_138;
  if (param_2 == (USkeletalMeshComponent *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3817078023119706970>,true,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMesh.cpp"
                       ,0x1b5a,"SkelComp");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  else if (((param_1 != (AActor *)param_2->_padding_) &&
           ((param_1->RootComponent).field0_0x0.DebugPtr != (USceneComponent *)0x0)) &&
          (bVar3 = GetSocketMatrix(this,&local_a8,param_2), bVar3)) {
    local_108._s_0.X = local_a8.M[3][0];
    local_108._s_0.Y = local_a8.M[3][1];
    local_108._s_0.Z = local_a8.M[3][2];
    AActor::SetActorLocation
              (param_1,(TVector<double> *)&local_108._s_0,false,(FHitResult *)0x0,None);
    pTVar5 = UE::Math::TMatrix<double>::Rotator(&local_a8,&local_c8);
    local_e8.Pitch = pTVar5->Pitch;
    local_e8.Yaw = pTVar5->Yaw;
    local_e8.Roll = pTVar5->Roll;
    AActor::SetActorRotation(param_1,&local_e8,None);
    pUVar1 = (param_1->RootComponent).field0_0x0.DebugPtr;
    (**(code **)(pUVar1->_padding_ + 0x508))
              (pUVar1,param_2,&FAttachmentTransformRules::SnapToTargetNotIncludingScale,
               this->SocketName);
    return true;
  }
  return false;
}

// GetSocketLocalTransform @ 1485c9770

TTransform<double> * __thiscall
USkeletalMeshSocket::GetSocketLocalTransform
          (USkeletalMeshSocket *this,TTransform<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  TQuat<double> *pTVar4;
  TQuat<double> local_28;
  
  pTVar4 = UE::Math::TRotator<double>::Quaternion(&this->RelativeRotation,&local_28);
  dVar1 = pTVar4->Y;
  dVar2 = pTVar4->Z;
  dVar3 = pTVar4->W;
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = pTVar4->X;
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar1;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = dVar2;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar3;
  dVar2 = (this->RelativeLocation).field0_0x0._s_0.Y;
  dVar1 = (this->RelativeLocation).field0_0x0._s_0.Z;
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = (this->RelativeLocation).field0_0x0._s_0.X
  ;
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar2;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = dVar1;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = 0.0;
  dVar2 = (this->RelativeScale).field0_0x0._s_0.Y;
  dVar1 = (this->RelativeScale).field0_0x0._s_0.Z;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = (this->RelativeScale).field0_0x0._s_0.X;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar2;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = dVar1;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = 0.0;
  return __return_storage_ptr__;
}

// GetSocketLocation @ 1485c97e0

TVector<double> * __thiscall
USkeletalMeshSocket::GetSocketLocation
          (USkeletalMeshSocket *this,TVector<double> *__return_storage_ptr__,
          USkeletalMeshComponent *param_1)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  TMatrix<double> local_88;
  
  if ((param_1 == (USkeletalMeshComponent *)0x0) &&
     (bVar3 = FRuntimeErrors::LogRuntimeIssueReturningFalse
                        ("SkelComp",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMesh.cpp"
                         ,0x1af1), !bVar3)) {
    (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
    return __return_storage_ptr__;
  }
  bVar3 = GetSocketMatrix(this,&local_88,param_1);
  if (bVar3) {
    (__return_storage_ptr__->field0_0x0)._s_0.X = local_88.M[3][0];
    (__return_storage_ptr__->field0_0x0)._s_0.Y = local_88.M[3][1];
    (__return_storage_ptr__->field0_0x0)._s_0.Z = local_88.M[3][2];
  }
  else {
    dVar2 = (double)param_1->_padding_;
    dVar1 = (double)param_1->_padding_;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (double)param_1->_padding_;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  }
  return __return_storage_ptr__;
}

// GetSocketMatrix @ 1485c9890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
USkeletalMeshSocket::GetSocketMatrix
          (USkeletalMeshSocket *this,TMatrix<double> *param_1,USkeletalMeshComponent *param_2)

{
  int iVar1;
  undefined1 auStack_1c8 [32];
  TMatrix<double> local_1a8;
  TMatrix<double> local_128;
  TMatrix<double> local_a8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  if ((param_2 != (USkeletalMeshComponent *)0x0) &&
     (iVar1 = USkinnedMeshComponent::GetBoneIndex((USkinnedMeshComponent *)param_2,this->BoneName),
     iVar1 != -1)) {
    USkinnedMeshComponent::GetBoneMatrix((USkinnedMeshComponent *)param_2,&local_128,iVar1);
    UE::Math::TScaleRotationTranslationMatrix<double>::TScaleRotationTranslationMatrix<double>
              ((TScaleRotationTranslationMatrix<double> *)&local_a8,&this->RelativeScale,
               &this->RelativeRotation,&this->RelativeLocation);
    VectorMatrixMultiply(&local_1a8,&local_a8,&local_128);
    param_1->M[0][0] = local_1a8.M[0][0];
    param_1->M[0][1] = local_1a8.M[0][1];
    param_1->M[0][2] = local_1a8.M[0][2];
    param_1->M[0][3] = local_1a8.M[0][3];
    param_1->M[1][0] = local_1a8.M[1][0];
    param_1->M[1][1] = local_1a8.M[1][1];
    param_1->M[1][2] = local_1a8.M[1][2];
    param_1->M[1][3] = local_1a8.M[1][3];
    param_1->M[2][0] = local_1a8.M[2][0];
    param_1->M[2][1] = local_1a8.M[2][1];
    param_1->M[2][2] = local_1a8.M[2][2];
    param_1->M[2][3] = local_1a8.M[2][3];
    param_1->M[3][0] = local_1a8.M[3][0];
    param_1->M[3][1] = local_1a8.M[3][1];
    param_1->M[3][2] = local_1a8.M[3][2];
    param_1->M[3][3] = local_1a8.M[3][3];
    return true;
  }
  return false;
}

// GetSocketMatrixWithOffset @ 1485c9990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
USkeletalMeshSocket::GetSocketMatrixWithOffset
          (USkeletalMeshSocket *this,TMatrix<double> *param_1,USkeletalMeshComponent *param_2,
          TVector<double> *param_3,TRotator<double> *param_4)

{
  int iVar1;
  undefined1 auStack_2d8 [32];
  TMatrix<double> local_2b8;
  TMatrix<double> local_238;
  TMatrix<double> local_1b8;
  TMatrix<double> local_138;
  TMatrix<double> local_b8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_2d8;
  if ((param_2 != (USkeletalMeshComponent *)0x0) &&
     (iVar1 = USkinnedMeshComponent::GetBoneIndex((USkinnedMeshComponent *)param_2,this->BoneName),
     iVar1 != -1)) {
    USkinnedMeshComponent::GetBoneMatrix((USkinnedMeshComponent *)param_2,&local_138,iVar1);
    UE::Math::TScaleRotationTranslationMatrix<double>::TScaleRotationTranslationMatrix<double>
              ((TScaleRotationTranslationMatrix<double> *)&local_238,&this->RelativeScale,
               &this->RelativeRotation,&this->RelativeLocation);
    UE::Math::TRotationTranslationMatrix<double>::TRotationTranslationMatrix<double>
              ((TRotationTranslationMatrix<double> *)&local_1b8,param_4,param_3);
    VectorMatrixMultiply(&local_b8,&local_1b8,&local_238);
    VectorMatrixMultiply(&local_2b8,&local_b8,&local_138);
    param_1->M[0][0] = local_2b8.M[0][0];
    param_1->M[0][1] = local_2b8.M[0][1];
    param_1->M[0][2] = local_2b8.M[0][2];
    param_1->M[0][3] = local_2b8.M[0][3];
    param_1->M[1][0] = local_2b8.M[1][0];
    param_1->M[1][1] = local_2b8.M[1][1];
    param_1->M[1][2] = local_2b8.M[1][2];
    param_1->M[1][3] = local_2b8.M[1][3];
    param_1->M[2][0] = local_2b8.M[2][0];
    param_1->M[2][1] = local_2b8.M[2][1];
    param_1->M[2][2] = local_2b8.M[2][2];
    param_1->M[2][3] = local_2b8.M[2][3];
    param_1->M[3][0] = local_2b8.M[3][0];
    param_1->M[3][1] = local_2b8.M[3][1];
    param_1->M[3][2] = local_2b8.M[3][2];
    param_1->M[3][3] = local_2b8.M[3][3];
    return true;
  }
  return false;
}

// GetSocketPositionWithOffset @ 1485c9ad0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
USkeletalMeshSocket::GetSocketPositionWithOffset
          (USkeletalMeshSocket *this,TVector<double> *param_1,USkeletalMeshComponent *param_2,
          TVector<double> *param_3,TRotator<double> *param_4)

{
  int iVar1;
  undefined1 auStack_2d8 [32];
  TMatrix<double> local_2b8;
  TMatrix<double> local_238;
  TMatrix<double> local_1b8;
  TMatrix<double> local_138;
  TMatrix<double> local_b8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_2d8;
  if ((param_2 != (USkeletalMeshComponent *)0x0) &&
     (iVar1 = USkinnedMeshComponent::GetBoneIndex((USkinnedMeshComponent *)param_2,this->BoneName),
     iVar1 != -1)) {
    USkinnedMeshComponent::GetBoneMatrix((USkinnedMeshComponent *)param_2,&local_138,iVar1);
    UE::Math::TScaleRotationTranslationMatrix<double>::TScaleRotationTranslationMatrix<double>
              ((TScaleRotationTranslationMatrix<double> *)&local_238,&this->RelativeScale,
               &this->RelativeRotation,&this->RelativeLocation);
    UE::Math::TRotationTranslationMatrix<double>::TRotationTranslationMatrix<double>
              ((TRotationTranslationMatrix<double> *)&local_1b8,param_4,param_3);
    VectorMatrixMultiply(&local_b8,&local_1b8,&local_238);
    VectorMatrixMultiply(&local_2b8,&local_b8,&local_138);
    (param_1->field0_0x0)._s_0.X = local_2b8.M[3][0];
    (param_1->field0_0x0)._s_0.Y = local_2b8.M[3][1];
    (param_1->field0_0x0)._s_0.Z = local_2b8.M[3][2];
    return true;
  }
  return false;
}

// GetSocketTransform @ 1485c9be0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TTransform<double> * __thiscall
USkeletalMeshSocket::GetSocketTransform
          (USkeletalMeshSocket *this,TTransform<double> *__return_storage_ptr__,
          USkeletalMeshComponent *param_1)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  int iVar9;
  TQuat<double> *pTVar10;
  undefined1 auStack_188 [32];
  TQuat<double> local_168;
  TTransform<double> local_148;
  TTransform<double> local_e8;
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_188;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).XY.m128d_f64 = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).ZW.m128d_f64 = auVar4;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Translation).XY.m128d_f64 = auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Translation).ZW.m128d_f64 = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).XY.m128d_f64 = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = auVar8;
  if (param_1 != (USkeletalMeshComponent *)0x0) {
    iVar9 = USkinnedMeshComponent::GetBoneIndex((USkinnedMeshComponent *)param_1,this->BoneName);
    if (iVar9 != -1) {
      USkinnedMeshComponent::GetBoneTransform((USkinnedMeshComponent *)param_1,&local_88,iVar9);
      pTVar10 = UE::Math::TRotator<double>::Quaternion(&this->RelativeRotation,&local_168);
      local_e8.Translation.XY.m128d_f64[0] = (this->RelativeLocation).field0_0x0._s_0.X;
      local_e8.Translation.XY.m128d_f64[1] = (this->RelativeLocation).field0_0x0._s_0.Y;
      local_e8.Rotation.XY.m128d_f64[0] = pTVar10->X;
      local_e8.Rotation.XY.m128d_f64[1] = pTVar10->Y;
      local_e8.Rotation.ZW.m128d_f64[0] = pTVar10->Z;
      local_e8.Rotation.ZW.m128d_f64[1] = pTVar10->W;
      local_e8.Scale3D.XY.m128d_f64[0] = (this->RelativeScale).field0_0x0._s_0.X;
      local_e8.Scale3D.XY.m128d_f64[1] = (this->RelativeScale).field0_0x0._s_0.Y;
      local_e8.Translation.ZW.m128d_f64[0] = (this->RelativeLocation).field0_0x0._s_0.Z;
      local_148.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_148.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_148.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_e8.Translation.ZW.m128d_f64[1] = 0.0;
      local_e8.Scale3D.ZW.m128d_f64[0] = (this->RelativeScale).field0_0x0._s_0.Z;
      local_e8.Scale3D.ZW.m128d_f64[1] = 0.0;
      local_148.Rotation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_148.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_148.Rotation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_148.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_148.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_148.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_148.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_148.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_148.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_148.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_148.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_148.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_148.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_148.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_148.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      UE::Math::TTransform<double>::Multiply(&local_148,&local_e8,&local_88);
      (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = local_148.Rotation.XY.m128d_f64[0];
      (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = local_148.Rotation.XY.m128d_f64[1];
      (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = local_148.Rotation.ZW.m128d_f64[0];
      (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = local_148.Rotation.ZW.m128d_f64[1];
      (__return_storage_ptr__->Translation).XY.m128d_f64[0] = local_148.Translation.XY.m128d_f64[0];
      (__return_storage_ptr__->Translation).XY.m128d_f64[1] = local_148.Translation.XY.m128d_f64[1];
      (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = local_148.Translation.ZW.m128d_f64[0];
      (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = local_148.Translation.ZW.m128d_f64[1];
      (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = local_148.Scale3D.XY.m128d_f64[0];
      (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = local_148.Scale3D.XY.m128d_f64[1];
      (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = local_148.Scale3D.ZW.m128d_f64[0];
      (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = local_148.Scale3D.ZW.m128d_f64[1];
    }
  }
  return __return_storage_ptr__;
}

// InitializeSocketFromLocation @ 1485cd960

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
USkeletalMeshSocket::InitializeSocketFromLocation
          (USkeletalMeshSocket *this,USkeletalMeshComponent *param_1,TVector<double> *param_2,
          TVector<double> *param_3)

{
  bool bVar1;
  FName FVar2;
  float in_XMM3_Da;
  TVector<double>_u_0 local_68;
  TRotator<double> local_48;
  TVector<double>_u_0 local_28;
  
  if ((param_1 == (USkeletalMeshComponent *)0x0) &&
     (bVar1 = FRuntimeErrors::LogRuntimeIssueReturningFalse
                        ("SkelComp",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMesh.cpp"
                         ,0x1aad), !bVar1)) {
    return;
  }
  local_68._s_0.X = (param_2->field0_0x0)._s_0.X;
  local_68._s_0.Y = (param_2->field0_0x0)._s_0.Y;
  local_68._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  FVar2 = USkinnedMeshComponent::FindClosestBone
                    ((USkinnedMeshComponent *)param_1,(TVector<double> *)&stack0x00000010,
                     (TVector<double> *)&local_68._s_0,in_XMM3_Da,false);
  FVar2 = *(FName *)FVar2;
  this->BoneName = FVar2;
  if (FVar2 != (FName)0x0) {
    UE::Math::TVector<double>::ToOrientationRotator(param_3,(TRotator<double> *)&local_68._s_0);
    local_48.Pitch = local_68._s_0.X;
    local_48.Yaw = local_68._s_0.Y;
    local_28._s_0.X = (param_2->field0_0x0)._s_0.X;
    local_28._s_0.Y = (param_2->field0_0x0)._s_0.Y;
    local_48.Roll = local_68._s_0.Z;
    local_28._s_0.Z = (param_2->field0_0x0)._s_0.Z;
    USkinnedMeshComponent::TransformToBoneSpace
              ((USkinnedMeshComponent *)param_1,this->BoneName,(TVector<double> *)&local_28._s_0,
               &local_48,&this->RelativeLocation,&this->RelativeRotation);
  }
  return;
}

// Serialize @ 1485d84d0

void __thiscall USkeletalMeshSocket::Serialize(USkeletalMeshSocket *this,FArchive *param_1)

{
  int iVar1;
  
  UObject::Serialize((UObject *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFrameworkObjectVersion::GUID);
  iVar1 = FArchiveState::CustomVer((FArchiveState *)param_1,&FFrameworkObjectVersion::GUID);
  if (iVar1 < 3) {
    (this->RelativeScale).field0_0x0._s_0.X = 1.0;
    (this->RelativeScale).field0_0x0._s_0.Y = 1.0;
    (this->RelativeScale).field0_0x0._s_0.Z = 1.0;
  }
  return;
}

