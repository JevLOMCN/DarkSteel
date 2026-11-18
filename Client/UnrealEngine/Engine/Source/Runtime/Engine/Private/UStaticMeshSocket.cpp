// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 11

// StaticClass @ 14732ade0

UClass * __cdecl UStaticMeshSocket::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStaticMeshSocket.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"StaticMeshSocket",
               &Z_Registration_Info_UClass_UStaticMeshSocket.InnerSingleton,
               StaticRegisterNativesUStaticMeshSocket,0x88,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UStaticMeshSocket>,
               InternalVTableHelperCtorCaller<UStaticMeshSocket>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStaticMeshSocket.InnerSingleton;
}

// UStaticMeshSocket @ 147331170

UStaticMeshSocket * __thiscall
UStaticMeshSocket::UStaticMeshSocket(UStaticMeshSocket *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UStaticMeshSocket__6B_;
  (this->SocketName).ComparisonIndex = 0;
  (this->SocketName).Number = 0;
  (this->Tag).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Tag).Data.ArrayNum = 0;
  (this->Tag).Data.ArrayMax = 0;
  return this;
}

// ~UStaticMeshSocket @ 147331500

void __thiscall UStaticMeshSocket::~UStaticMeshSocket(UStaticMeshSocket *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UStaticMeshSocket__6B_;
  pFVar1 = (this->Tag).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 147332d90

UClass * __cdecl UStaticMeshSocket::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStaticMeshSocket.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"StaticMeshSocket",
               &Z_Registration_Info_UClass_UStaticMeshSocket.InnerSingleton,
               StaticRegisterNativesUStaticMeshSocket,0x88,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UStaticMeshSocket>,
               InternalVTableHelperCtorCaller<UStaticMeshSocket>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStaticMeshSocket.InnerSingleton;
}

// Serialize @ 147333330

void __thiscall
UStaticMeshSocket::Serialize(UStaticMeshSocket *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// StaticRegisterNativesUStaticMeshSocket @ 147333470

void __cdecl UStaticMeshSocket::StaticRegisterNativesUStaticMeshSocket(void)

{
  return;
}

// UStaticMeshSocket @ 148713530

UStaticMeshSocket * __thiscall
UStaticMeshSocket::UStaticMeshSocket(UStaticMeshSocket *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UStaticMeshSocket__6B_;
  (this->SocketName).ComparisonIndex = 0;
  (this->SocketName).Number = 0;
  (this->Tag).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Tag).Data.ArrayNum = 0;
  (this->Tag).Data.ArrayMax = 0;
  (this->RelativeScale).field0_0x0._s_0.X = 1.0;
  (this->RelativeScale).field0_0x0._s_0.Y = 1.0;
  (this->RelativeScale).field0_0x0._s_0.Z = 1.0;
  return this;
}

// AttachActor @ 1487225e0

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
UStaticMeshSocket::AttachActor
          (UStaticMeshSocket *this,AActor *param_1,UStaticMeshComponent *param_2)

{
  USceneComponent *pUVar1;
  bool bVar2;
  TScaleRotationTranslationMatrix<double> *pTVar3;
  TMatrix<double> *pTVar4;
  TRotator<double> *pTVar5;
  undefined1 auStack_2a8 [32];
  TVector<double>_u_0 local_278;
  TRotator<double> local_258;
  TMatrix<double> local_238;
  TMatrix<double> local_1b8;
  TScaleRotationTranslationMatrix<double> local_138;
  TMatrix<double> local_b8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_2a8;
  if ((param_1 == (AActor *)param_2->_padding_) ||
     ((param_1->RootComponent).field0_0x0.DebugPtr == (USceneComponent *)0x0)) {
    bVar2 = false;
  }
  else {
    pTVar3 = UE::Math::TScaleRotationTranslationMatrix<double>::
             TScaleRotationTranslationMatrix<double>
                       (&local_138,&this->RelativeScale,&this->RelativeRotation,
                        &this->RelativeLocation);
    pTVar4 = UE::Math::TTransform<double>::ToMatrixWithScale
                       ((TTransform<double> *)&param_2->_padding_,&local_b8);
    VectorMatrixMultiply(&local_238,(TMatrix<double> *)pTVar3,pTVar4);
    local_1b8.M[0][0] = local_238.M[0][0];
    local_1b8.M[0][1] = local_238.M[0][1];
    local_1b8.M[1][0] = local_238.M[1][0];
    local_1b8.M[1][1] = local_238.M[1][1];
    local_1b8.M[0][2] = local_238.M[0][2];
    local_1b8.M[0][3] = local_238.M[0][3];
    local_1b8.M[2][0] = local_238.M[2][0];
    local_1b8.M[2][1] = local_238.M[2][1];
    local_1b8.M[1][2] = local_238.M[1][2];
    local_1b8.M[1][3] = local_238.M[1][3];
    local_278._s_0.X = local_238.M[3][0];
    local_1b8.M[3][0] = local_238.M[3][0];
    local_1b8.M[3][1] = local_238.M[3][1];
    local_1b8.M[2][2] = local_238.M[2][2];
    local_1b8.M[2][3] = local_238.M[2][3];
    local_278._s_0.Y = local_238.M[3][1];
    local_278._s_0.Z = local_238.M[3][2];
    local_1b8.M[3][2] = local_238.M[3][2];
    local_1b8.M[3][3] = local_238.M[3][3];
    AActor::SetActorLocation
              (param_1,(TVector<double> *)&local_278._s_0,false,(FHitResult *)0x0,None);
    pTVar5 = UE::Math::TMatrix<double>::Rotator(&local_1b8,&local_258);
    local_278._s_0.X = pTVar5->Pitch;
    local_278._s_0.Y = pTVar5->Yaw;
    local_278._s_0.Z = pTVar5->Roll;
    AActor::SetActorRotation(param_1,(TRotator<double> *)&local_278._s_0,None);
    pUVar1 = (param_1->RootComponent).field0_0x0.DebugPtr;
    (**(code **)(pUVar1->_padding_ + 0x508))
              (pUVar1,param_2,&FAttachmentTransformRules::SnapToTargetNotIncludingScale,
               this->SocketName);
    bVar2 = true;
  }
  return bVar2;
}

// GetSocketMatrix @ 14873f740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UStaticMeshSocket::GetSocketMatrix
          (UStaticMeshSocket *this,TMatrix<double> *param_1,UStaticMeshComponent *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TScaleRotationTranslationMatrix<double> *pTVar4;
  TMatrix<double> *pTVar5;
  undefined1 auStack_1c8 [32];
  TMatrix<double> local_1a8;
  TScaleRotationTranslationMatrix<double> local_128;
  TMatrix<double> local_a8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  if (param_2 == (UStaticMeshComponent *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("MeshComp",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMesh.cpp"
                       ,0x2981,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  pTVar4 = UE::Math::TScaleRotationTranslationMatrix<double>::
           TScaleRotationTranslationMatrix<double>
                     (&local_128,&this->RelativeScale,&this->RelativeRotation,
                      &this->RelativeLocation);
  pTVar5 = UE::Math::TTransform<double>::ToMatrixWithScale
                     ((TTransform<double> *)&param_2->_padding_,&local_a8);
  VectorMatrixMultiply(&local_1a8,(TMatrix<double> *)pTVar4,pTVar5);
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

// GetSocketTransform @ 14873f850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UStaticMeshSocket::GetSocketTransform
          (UStaticMeshSocket *this,TTransform<double> *param_1,UStaticMeshComponent *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TQuat<double> *pTVar4;
  undefined1 auStack_128 [32];
  TQuat<double> local_108;
  TTransform<double> local_e8;
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_128;
  if (param_2 == (UStaticMeshComponent *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("MeshComp",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMesh.cpp"
                       ,0x2988,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  pTVar4 = UE::Math::TRotator<double>::Quaternion(&this->RelativeRotation,&local_108);
  local_88.Translation.XY.m128d_f64[0] = (this->RelativeLocation).field0_0x0._s_0.X;
  local_88.Translation.XY.m128d_f64[1] = (this->RelativeLocation).field0_0x0._s_0.Y;
  local_88.Rotation.XY.m128d_f64[0] = pTVar4->X;
  local_88.Rotation.XY.m128d_f64[1] = pTVar4->Y;
  local_88.Rotation.ZW.m128d_f64[0] = pTVar4->Z;
  local_88.Rotation.ZW.m128d_f64[1] = pTVar4->W;
  local_88.Scale3D.XY.m128d_f64[0] = (this->RelativeScale).field0_0x0._s_0.X;
  local_88.Scale3D.XY.m128d_f64[1] = (this->RelativeScale).field0_0x0._s_0.Y;
  local_88.Translation.ZW.m128d_f64[0] = (this->RelativeLocation).field0_0x0._s_0.Z;
  local_e8.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_e8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_e8.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_88.Translation.ZW.m128d_f64[1] = 0.0;
  local_88.Scale3D.ZW.m128d_f64[0] = (this->RelativeScale).field0_0x0._s_0.Z;
  local_88.Scale3D.ZW.m128d_f64[1] = 0.0;
  local_e8.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_e8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_e8.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_e8.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_e8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_e8.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_e8.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_e8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_e8.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_e8.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_e8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_e8.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_e8.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_e8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_e8.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply
            (&local_e8,&local_88,(TTransform<double> *)&param_2->_padding_);
  (param_1->Rotation).XY.m128d_f64[0] = local_e8.Rotation.XY.m128d_f64[0];
  (param_1->Rotation).XY.m128d_f64[1] = local_e8.Rotation.XY.m128d_f64[1];
  (param_1->Rotation).ZW.m128d_f64[0] = local_e8.Rotation.ZW.m128d_f64[0];
  (param_1->Rotation).ZW.m128d_f64[1] = local_e8.Rotation.ZW.m128d_f64[1];
  (param_1->Translation).XY.m128d_f64[0] = local_e8.Translation.XY.m128d_f64[0];
  (param_1->Translation).XY.m128d_f64[1] = local_e8.Translation.XY.m128d_f64[1];
  (param_1->Translation).ZW.m128d_f64[0] = local_e8.Translation.ZW.m128d_f64[0];
  (param_1->Translation).ZW.m128d_f64[1] = local_e8.Translation.ZW.m128d_f64[1];
  (param_1->Scale3D).XY.m128d_f64[0] = local_e8.Scale3D.XY.m128d_f64[0];
  (param_1->Scale3D).XY.m128d_f64[1] = local_e8.Scale3D.XY.m128d_f64[1];
  (param_1->Scale3D).ZW.m128d_f64[0] = local_e8.Scale3D.ZW.m128d_f64[0];
  (param_1->Scale3D).ZW.m128d_f64[1] = local_e8.Scale3D.ZW.m128d_f64[1];
  return true;
}

// Serialize @ 148759680

void __thiscall UStaticMeshSocket::Serialize(UStaticMeshSocket *this,FArchive *param_1)

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

