// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 34

// StaticClass @ 14b431e50

UClass * __cdecl UDS_CameraComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CameraComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CameraComponent",
               &Z_Registration_Info_UClass_UDS_CameraComponent.InnerSingleton,
               StaticRegisterNativesUDS_CameraComponent,0xac0,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_CameraComponent>,
               InternalVTableHelperCtorCaller<UDS_CameraComponent>,local_res8,
               UCameraComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CameraComponent.InnerSingleton;
}

// UDS_CameraComponent @ 14b4346f0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

UDS_CameraComponent * __thiscall
UDS_CameraComponent::UDS_CameraComponent(UDS_CameraComponent *this,FVTableHelper *param_1)

{
  TVector2<double> TVar1;
  undefined8 local_res8 [4];
  
  UCameraComponent::UCameraComponent((UCameraComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  this->bEnabledDepthOfField = false;
  local_res8[0] = 0;
  (this->ViewportOffset).field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  (this->TargetActor).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->TargetActor).WeakPtr,(FObjectPtr)local_res8);
  this->FocalDistanceRatio = 1.0;
  return this;
}

// ~UDS_CameraComponent @ 14b4350c0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall UDS_CameraComponent::~UDS_CameraComponent(UDS_CameraComponent *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  UCameraComponent::~UCameraComponent((UCameraComponent *)this);
  return;
}

// GetCameraFOV @ 14b435f60

float __thiscall UDS_CameraComponent::GetCameraFOV(UDS_CameraComponent *this)

{
  return 0.0;
}

// GetCameraRotation @ 14b435f70

TRotator<double> * __thiscall
UDS_CameraComponent::GetCameraRotation
          (UDS_CameraComponent *this,TRotator<double> *__return_storage_ptr__)

{
  double dVar1;
  
  dVar1 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  __return_storage_ptr__->Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  __return_storage_ptr__->Yaw = dVar1;
  __return_storage_ptr__->Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14b436ce0

UClass * __cdecl UDS_CameraComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CameraComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CameraComponent",
               &Z_Registration_Info_UClass_UDS_CameraComponent.InnerSingleton,
               StaticRegisterNativesUDS_CameraComponent,0xac0,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_CameraComponent>,
               InternalVTableHelperCtorCaller<UDS_CameraComponent>,local_res8,
               UCameraComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CameraComponent.InnerSingleton;
}

// GetZoomInOutValue @ 14b436f00

float __thiscall UDS_CameraComponent::GetZoomInOutValue(UDS_CameraComponent *this)

{
  return 0.0;
}

// OnCameraNotifyBegin @ 14b436f10

void __thiscall UDS_CameraComponent::OnCameraNotifyBegin(UDS_CameraComponent *this,float param_1)

{
  return;
}

// OnCameraNotifyDistance @ 14b436f20

void __thiscall
UDS_CameraComponent::OnCameraNotifyDistance
          (UDS_CameraComponent *this,float param_1,UCurveFloat *param_2,float param_3)

{
  return;
}

// OnCameraNotifyEnd @ 14b436f30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDS_CameraComponent::OnCameraNotifyEnd(UDS_CameraComponent *this,AActor *param_1,bool param_2)

{
  return;
}

// OnCameraNotifyFOV @ 14b436f40

void __thiscall
UDS_CameraComponent::OnCameraNotifyFOV
          (UDS_CameraComponent *this,float param_1,UCurveFloat *param_2,float param_3)

{
  return;
}

// OnCameraNotifyInputIgnore @ 14b436f50

void __thiscall
UDS_CameraComponent::OnCameraNotifyInputIgnore
          (UDS_CameraComponent *this,float param_1,float param_2)

{
  return;
}

// OnCameraNotifyRotation @ 14b436f60

void __thiscall
UDS_CameraComponent::OnCameraNotifyRotation
          (UDS_CameraComponent *this,TRotator<double> *param_1,UCurveBase *param_2,float param_3)

{
  return;
}

// OnCameraNotifySocket @ 14b436f70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDS_CameraComponent::OnCameraNotifySocket
          (UDS_CameraComponent *this,AActor *param_1,FString *param_2,TVector<double> *param_3)

{
  return;
}

// SetCameraFOV @ 14b436f80

void __thiscall UDS_CameraComponent::SetCameraFOV(UDS_CameraComponent *this,float param_1)

{
  return;
}

// SetCameraRotation @ 14b436f90

void __thiscall
UDS_CameraComponent::SetCameraRotation(UDS_CameraComponent *this,TRotator<double> *param_1)

{
  return;
}

// SetZoomInOutValue @ 14b436fa0

void __thiscall UDS_CameraComponent::SetZoomInOutValue(UDS_CameraComponent *this,float param_1)

{
  return;
}

// StaticRegisterNativesUDS_CameraComponent @ 14b4370e0

void __cdecl UDS_CameraComponent::StaticRegisterNativesUDS_CameraComponent(void)

{
  return;
}

// UDS_CameraComponent @ 14bc2a9b0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

UDS_CameraComponent * __thiscall
UDS_CameraComponent::UDS_CameraComponent(UDS_CameraComponent *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  TVector2<double> TVar2;
  undefined8 local_res8 [4];
  
  UCameraComponent::UCameraComponent((UCameraComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  TVar2 = UE::Math::TVector2<double>::ZeroVector;
  this->bEnabledDepthOfField = false;
  local_res8[0] = 0;
  (this->ViewportOffset).field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar2.field0_0x0;
  (this->TargetActor).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->TargetActor).WeakPtr,(FObjectPtr)local_res8);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 2;
  this->FocalDistanceRatio = 1.0;
  return this;
}

// BeginPlay @ 14bc2e2e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UDS_CameraComponent::BeginPlay(UDS_CameraComponent *this)

{
  byte *pbVar1;
  uint uVar2;
  AActor *this_00;
  code *pcVar3;
  bool bVar4;
  UWorld *pUVar5;
  UFunction *pUVar6;
  
  bVar4 = FTraceFilter::IsObjectTraceable<1>((UObject *)this);
  if (!bVar4) {
    if (this == (UDS_CameraComponent *)0x0) goto LAB_14780c6b0;
    this_00 = (AActor *)this->_padding_;
    bVar4 = FTraceFilter::IsObjectTraceable<1>((UObject *)this_00);
    if ((!bVar4) || (this_00 == (AActor *)0x0)) goto LAB_14780c6b0;
    pUVar5 = AActor::GetWorld(this_00);
    bVar4 = FTraceFilter::IsObjectTraceable<1>((UObject *)pUVar5);
    if (!bVar4) goto LAB_14780c6b0;
  }
  FObjectTrace::OutputObjectLifetimeBegin((UObject *)this);
LAB_14780c6b0:
  if ((this->_padding_ & 1) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("bRegistered",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                       ,0x64d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((this->_padding_ & 0x20000000) != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bHasBegunPlay",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                       ,0x64e,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar2 = *(uint *)(this->_padding_ + 0xd4);
  if (((uVar2 >> 0x12 & 1) != 0) || (-1 < (char)uVar2)) {
    pUVar6 = UObject::FindFunctionChecked((UObject *)this,NAME_UActorComponent_ReceiveBeginPlay);
    (**(code **)(this->_padding_ + 0x260))(this,pUVar6,0);
  }
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 | 0x20;
  return;
}

// DisableDepthOfField @ 14bc38e90

void __thiscall UDS_CameraComponent::DisableDepthOfField(UDS_CameraComponent *this)

{
  byte *pbVar1;
  FWeakObjectPtr local_res8;
  undefined8 local_res10 [3];
  
  this->bEnabledDepthOfField = false;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10[0] = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res10);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 & 7;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 4);
  *pbVar1 = *pbVar1 & 0xf7;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 & 0xfc;
  (this->TargetActor).WeakPtr = local_res8;
  this->FocalDistanceRatio = 1.0;
  return;
}

// DisableMotionBlur @ 14bc38f00

void __thiscall UDS_CameraComponent::DisableMotionBlur(UDS_CameraComponent *this)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)((longlong)&this->_padding_ + 5);
  *pbVar1 = *pbVar1 & 0x3f;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 6);
  *pbVar1 = *pbVar1 & 0xfc;
  return;
}

// EnableDepthOfField @ 14bc39c90

void __thiscall
UDS_CameraComponent::EnableDepthOfField
          (UDS_CameraComponent *this,FDS_DepthOfFieldData *param_1,
          TWeakObjectPtr<AActor,FWeakObjectPtr> param_2)

{
  byte *pbVar1;
  float fVar2;
  byte bVar3;
  float fVar4;
  int iVar5;
  
  (this->TargetActor).WeakPtr = param_2.WeakPtr;
  this->bEnabledDepthOfField = true;
  fVar2 = param_1->FocalDistanceRatio;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 0x10;
  bVar3 = *(byte *)((longlong)&this->_padding_ + 2);
  this->FocalDistanceRatio = fVar2;
  fVar4 = param_1->Fstop;
  *(byte *)((longlong)&this->_padding_ + 2) = bVar3 | 0x20;
  *(float *)&this->_padding_ = fVar4;
  fVar4 = param_1->MinFstop;
  *(byte *)((longlong)&this->_padding_ + 2) = bVar3 | 0x60;
  *(float *)((longlong)&this->_padding_ + 4) = fVar4;
  iVar5 = param_1->BladeCount;
  *(byte *)((longlong)&this->_padding_ + 2) = bVar3 | 0xe0;
  *(int *)&this->_padding_ = iVar5;
  fVar4 = param_1->SensorWidth;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 | 1;
  *(float *)&this->_padding_ = fVar4;
  *(float *)((longlong)&this->_padding_ + 4) = param_1->SqueezeFactor;
  *(byte *)((longlong)&this->_padding_ + 2) = bVar3 | 0xe8;
  fVar4 = param_1->FocalDistance;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 4);
  *pbVar1 = *pbVar1 | 8;
  *(float *)&this->_padding_ = fVar2 * fVar4;
  fVar2 = param_1->BlurAmount;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 | 2;
  *(float *)((longlong)&this->_padding_ + 4) = fVar2;
  *(float *)&this->_padding_ = param_1->BlurRadius;
  return;
}

// EnableMotionBlur @ 14bc39d50

void __thiscall
UDS_CameraComponent::EnableMotionBlur
          (UDS_CameraComponent *this,float param_1,float param_2,int param_3,float param_4)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)((longlong)&this->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc0;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 6);
  *pbVar1 = *pbVar1 | 3;
  *(float *)((longlong)&this->_padding_ + 4) = param_4;
  *(float *)&this->_padding_ = param_1;
  *(float *)((longlong)&this->_padding_ + 4) = param_2;
  *(int *)&this->_padding_ = param_3;
  return;
}

// EndPlay @ 14bc3a4b0

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

void __thiscall UDS_CameraComponent::EndPlay(UDS_CameraComponent *this,Type param_1)

{
  ForElementType<USceneComponent_*> FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  UObject *pUVar6;
  UObject *pUVar7;
  uint uVar8;
  ForElementType<USceneComponent_*> FVar9;
  longlong lVar10;
  undefined1 auStack_158 [32];
  UObjectBaseUtility **ppUStack_138;
  ForElementType<USceneComponent_*> FStack_130;
  longlong lStack_128;
  longlong lStack_120;
  undefined8 uStack_118;
  undefined1 auStack_108 [8];
  UObjectBaseUtility *pUStack_100;
  ForElementType<USceneComponent_*> FStack_f8;
  int iStack_30;
  int iStack_2c;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStack_158;
  UActorComponent::EndPlay((UActorComponent *)this,param_1);
  if ((param_1 == RemovedFromWorld) && ((this->_padding_ & 0x8000000) == 0)) {
    pUVar6 = UObjectBaseUtility::GetOutermostObject((UObjectBaseUtility *)this);
    if (((UObjectBaseUtility *)this->_padding_ != (UObjectBaseUtility *)0x0) &&
       (pUVar7 = UObjectBaseUtility::GetOutermostObject((UObjectBaseUtility *)this->_padding_),
       pUVar7 != pUVar6)) {
      (**(code **)(this->_padding_ + 0x518))(this,&FDetachmentTransformRules::KeepWorldTransform);
    }
    uVar8 = 0;
    FStack_f8.SecondaryData = (ForElementType<USceneComponent_*>)0x0;
    iStack_30 = 0;
    iStack_2c = 0x18;
    if (0 < (int)this->_padding_) {
      lVar10 = 0;
      do {
        iVar5 = (int)this->_padding_;
        uVar4 = 0;
        if ((int)uVar8 < iVar5) {
          uVar4 = ~uVar8 >> 0x1f;
        }
        if (uVar4 == 0) {
          ppUStack_138 = (UObjectBaseUtility **)(longlong)(int)uVar8;
          FStack_130 = (ForElementType<USceneComponent_*>)(longlong)iVar5;
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        pUStack_100 = *(UObjectBaseUtility **)(lVar10 + this->_padding_);
        if ((pUStack_100 != (UObjectBaseUtility *)0x0) &&
           (pUVar7 = UObjectBaseUtility::GetOutermostObject(pUStack_100), pUVar7 != pUVar6)) {
          FVar9 = (ForElementType<USceneComponent_*>)&FStack_f8;
          if (FStack_f8.SecondaryData != (ForElementType<USceneComponent_*>)0x0) {
            FVar9 = FStack_f8.SecondaryData;
          }
          if ((ulonglong)FVar9 <= &pUStack_100) {
            FVar9 = (ForElementType<USceneComponent_*>)&FStack_f8;
            if (FStack_f8.SecondaryData != (ForElementType<USceneComponent_*>)0x0) {
              FVar9 = FStack_f8.SecondaryData;
            }
            if (&pUStack_100 < (UObjectBaseUtility **)((longlong)FVar9 + (longlong)iStack_2c * 8)) {
              lStack_120 = (longlong)iStack_30;
              uStack_118 = 8;
              ppUStack_138 = &pUStack_100;
              FStack_130 = (ForElementType<USceneComponent_*>)&FStack_f8;
              if (FStack_f8.SecondaryData != (ForElementType<USceneComponent_*>)0x0) {
                FStack_130 = FStack_f8.SecondaryData;
              }
              lStack_128 = (longlong)iStack_2c;
              bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                );
              if (bVar3) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
            }
          }
          iVar5 = iStack_30;
          if (iStack_30 == iStack_2c) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<USceneComponent_*>_>
                              (0x808,&FStack_f8,&iStack_2c);
          }
          iStack_30 = iVar5 + 1;
          FVar9 = (ForElementType<USceneComponent_*>)&FStack_f8;
          if (FStack_f8.SecondaryData != (ForElementType<USceneComponent_*>)0x0) {
            FVar9 = FStack_f8.SecondaryData;
          }
          *(UObjectBaseUtility **)((longlong)FVar9 + (longlong)iVar5 * 8) = pUStack_100;
        }
        uVar8 = uVar8 + 1;
        lVar10 = lVar10 + 8;
      } while ((int)uVar8 < (int)this->_padding_);
    }
    iVar5 = iStack_30;
    FVar9 = (ForElementType<USceneComponent_*>)&FStack_f8;
    if (FStack_f8.SecondaryData != (ForElementType<USceneComponent_*>)0x0) {
      FVar9 = FStack_f8.SecondaryData;
    }
    FVar1 = (ForElementType<USceneComponent_*>)((longlong)FVar9 + (longlong)iStack_30 * 8);
    while( true ) {
      if (iStack_30 != iVar5) {
        `TCheckedPointerIterator<USceneComponent_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (auStack_108);
      }
      if (FVar9 == FVar1) break;
      (**(code **)(**(longlong **)FVar9 + 0x518))
                (*(longlong **)FVar9,&FDetachmentTransformRules::KeepWorldTransform);
      FVar9 = (ForElementType<USceneComponent_*>)((longlong)FVar9 + 8);
    }
    if (FStack_f8.SecondaryData != (ForElementType<USceneComponent_*>)0x0) {
      FMemory::Free((void *)FStack_f8.SecondaryData);
    }
  }
  return;
}

// FindOrUpdatePostProcessMaterialDynamic @ 14bc3df20

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

TWeakObjectPtr<UMaterialInstanceDynamic,FWeakObjectPtr> __thiscall
UDS_CameraComponent::FindOrUpdatePostProcessMaterialDynamic
          (UDS_CameraComponent *this,FString *param_1)

{
  float fVar1;
  int iVar2;
  FName FVar3;
  int iVar4;
  UClass *pUVar5;
  FName *pFVar6;
  FName FVar7;
  wchar_t *pwVar8;
  float *pfVar9;
  float *pfVar10;
  undefined8 *in_R8;
  bool bVar11;
  FName local_res8;
  undefined1 local_48 [32];
  
  iVar2 = (int)this->_padding_;
  pfVar10 = (float *)this->_padding_;
  pfVar9 = pfVar10 + (longlong)iVar2 * 4;
  do {
    if ((int)this->_padding_ != iVar2) {
      `TCheckedPointerIterator<FWeightedBlendable_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    if (pfVar10 == pfVar9) {
      (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_res8.ComparisonIndex.Value = 0;
      local_res8.Number = 0;
      goto LAB_14bc3e160;
    }
    FVar3 = *(FName *)(pfVar10 + 2);
    fVar1 = *pfVar10;
    local_res8 = *(FName *)((longlong)FVar3 + 0x18);
    ::FName::ToString(&local_res8,(FString *)local_48);
    if (local_48._8_4_ == *(int *)(in_R8 + 1)) {
      if ((int)local_48._8_4_ < 2) {
        bVar11 = false;
      }
      else {
        iVar4 = FGenericPlatformStricmp::Stricmp((wchar_t *)local_48._0_8_,(wchar_t *)*in_R8);
        bVar11 = iVar4 != 0;
      }
    }
    else {
      bVar11 = local_48._8_4_ + *(int *)(in_R8 + 1) != 1;
    }
    if ((FName)local_48._0_8_ != (FName)0x0) {
      FMemory::Free((void *)local_48._0_8_);
    }
    if (!bVar11) {
      pUVar5 = Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
      iVar4 = (int)pUVar5->_padding_;
      if (((iVar4 <= *(int *)(*(longlong *)((longlong)FVar3 + 0x10) + 0x38)) &&
          ((longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)((longlong)FVar3 + 0x10) + 0x30) + (longlong)iVar4 * 8) ==
           &pUVar5->_padding_)) && (FVar3 != (FName)0x0)) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)FVar3);
        }
        (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_res8 = FVar3;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)FVar3);
        }
        goto LAB_14bc3e160;
      }
      pUVar5 = Z_Construct_UClass_UMaterialInterface_NoRegister();
      iVar4 = (int)pUVar5->_padding_;
      if (((iVar4 <= *(int *)(*(longlong *)((longlong)FVar3 + 0x10) + 0x38)) &&
          ((longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)((longlong)FVar3 + 0x10) + 0x30) + (longlong)iVar4 * 8) ==
           &pUVar5->_padding_)) && (FVar3 != (FName)0x0)) {
        if (*(int *)(in_R8 + 1) == 0) {
          pwVar8 = L"";
        }
        else {
          pwVar8 = (wchar_t *)*in_R8;
        }
        pFVar6 = ::FName::FName(&local_res8,pwVar8);
        FVar7 = (FName)UMaterialInstanceDynamic::Create
                                 ((UMaterialInterface *)FVar3,(UObject *)this,*pFVar6);
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)FVar3);
        }
        local_48._8_8_ = (longlong)FVar3 + 0x28;
        local_48._0_8_ = FVar3;
        FPostProcessSettings::RemoveBlendable
                  ((FPostProcessSettings *)&this->_padding_,
                   (TScriptInterface<IBlendableInterface> *)local_48);
        if ((UE::GC::GIsIncrementalReachabilityPending == false) || (FVar7 == (FName)0x0)) {
          if (FVar7 == (FName)0x0) {
            local_48._8_8_ = (longlong *)0x0;
          }
          else {
            local_48._8_8_ = (longlong)FVar7 + 0x28;
          }
        }
        else {
          UE::GC::MarkAsReachable((UObject *)FVar7);
          local_48._8_8_ = (longlong)FVar7 + 0x28;
        }
        local_48._0_8_ = FVar7;
        FPostProcessSettings::AddBlendable
                  ((FPostProcessSettings *)&this->_padding_,
                   (TScriptInterface<IBlendableInterface> *)local_48,fVar1);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar7 != (FName)0x0)) {
          UE::GC::MarkAsReachable((UObject *)FVar7);
        }
        (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_res8 = FVar7;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar7 != (FName)0x0)) {
          UE::GC::MarkAsReachable((UObject *)FVar7);
        }
LAB_14bc3e160:
        FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_res8);
        return (TWeakObjectPtr<UMaterialInstanceDynamic,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
      }
    }
    pfVar10 = pfVar10 + 4;
  } while( true );
}

// InitCameraComponent @ 14bc47540

void __thiscall UDS_CameraComponent::InitCameraComponent(UDS_CameraComponent *this)

{
  return;
}

// OnSetViewTarget @ 14bc52eb0

void __thiscall UDS_CameraComponent::OnSetViewTarget(UDS_CameraComponent *this)

{
  return;
}

// OnUnsetViewTarget @ 14bc53990

void __thiscall UDS_CameraComponent::OnUnsetViewTarget(UDS_CameraComponent *this)

{
  TVector2<double>_u_0 TVar1;
  
  if ((UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X ==
       (this->ViewportOffset).field0_0x0._s_0.X) &&
     (UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y ==
      (this->ViewportOffset).field0_0x0._s_0.Y)) {
    return;
  }
  TVar1._s_0.Y = UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y;
  TVar1._s_0.X = UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ViewportOffset).field0_0x0 = TVar1;
  UpdateViewportOffset(this);
  return;
}

// RefreshCameraComponent @ 14bc56b10

void __thiscall UDS_CameraComponent::RefreshCameraComponent(UDS_CameraComponent *this)

{
  return;
}

// SetViewportOffset @ 14bc64ed0

void __thiscall
UDS_CameraComponent::SetViewportOffset(UDS_CameraComponent *this,TVector2<double> *param_1)

{
  double dVar1;
  TVector2<double>_u_0_s_0 TVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  TVar2 = (param_1->field0_0x0)._s_0;
  uVar3 = TVar2.X._0_4_;
  uVar4 = TVar2.X._4_4_;
  (this->ViewportOffset).field0_0x0._s_0 = TVar2;
  if (__real_3ff0000000000000 <= TVar2.X) {
    uVar3 = SUB84(__real_3ff0000000000000,0);
    uVar4 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  }
  if ((double)CONCAT44(uVar4,uVar3) <= __real_bff0000000000000) {
    uVar3 = SUB84(__real_bff0000000000000,0);
    uVar4 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
  }
  (this->ViewportOffset).field0_0x0._s_0.X = (double)CONCAT44(uVar4,uVar3);
  dVar1 = *(double *)((longlong)&(this->ViewportOffset).field0_0x0 + 8);
  uVar3 = SUB84(dVar1,0);
  uVar4 = (undefined4)((ulonglong)dVar1 >> 0x20);
  if (__real_3ff0000000000000 <= dVar1) {
    uVar3 = SUB84(__real_3ff0000000000000,0);
    uVar4 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  }
  if ((double)CONCAT44(uVar4,uVar3) <= __real_bff0000000000000) {
    uVar3 = SUB84(__real_bff0000000000000,0);
    uVar4 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
  }
  (this->ViewportOffset).field0_0x0._s_0.Y = (double)CONCAT44(uVar4,uVar3);
  UpdateViewportOffset(this);
  return;
}

// ShowDebugCameraWidget @ 14bc65e50

void __thiscall UDS_CameraComponent::ShowDebugCameraWidget(UDS_CameraComponent *this,bool param_1)

{
  return;
}

// TickComponent @ 14bc67770

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDS_CameraComponent::TickComponent
          (UDS_CameraComponent *this,float param_1,ELevelTick param_2,
          FActorComponentTickFunction *param_3)

{
  undefined1 auVar1 [16];
  double dVar2;
  bool bVar3;
  UObject *pUVar4;
  double dVar5;
  undefined4 uVar6;
  undefined4 uVar8;
  double dVar7;
  
  UActorComponent::TickComponent((UActorComponent *)this,param_1,param_2,param_3);
  if ((this->bEnabledDepthOfField == true) &&
     (bVar3 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals(&this->TargetActor,(void *)0x0),
     !bVar3)) {
    dVar5 = (double)this->_padding_;
    dVar2 = (double)this->_padding_;
    pUVar4 = FWeakObjectPtr::Get(&(this->TargetActor).WeakPtr);
    if (*(longlong *)(pUVar4 + 0xb) == 0) {
      uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
      uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      dVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
    }
    else {
      auVar1 = *(undefined1 (*) [16])(*(longlong *)(pUVar4 + 0xb) + 0x210);
      uVar6 = auVar1._0_4_;
      uVar8 = auVar1._4_4_;
      dVar7 = auVar1._8_8_;
    }
    dVar5 = (double)CONCAT44(uVar8,uVar6) - dVar5;
    dVar7 = dVar7 - dVar2;
    *(float *)&this->_padding_ =
         (float)SQRT(dVar7 * dVar7 + dVar5 * dVar5) * this->FocalDistanceRatio;
  }
  return;
}

// UpdateViewportOffset @ 14bc6ec60

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

void __thiscall UDS_CameraComponent::UpdateViewportOffset(UDS_CameraComponent *this)

{
  double dVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  UWorld *pUVar5;
  UGameViewportClient *pUVar6;
  UDS_LogManager *pUVar7;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if ((this->_padding_ != 0) ||
     (pUVar5 = UActorComponent::GetWorld_Uncached((UActorComponent *)this), pUVar5 != (UWorld *)0x0)
     ) {
    pUVar5 = (UWorld *)this->_padding_;
    if (pUVar5 == (UWorld *)0x0) {
      pUVar5 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    pUVar6 = UWorld::GetGameViewport(pUVar5);
    if (pUVar6 != (UGameViewportClient *)0x0) {
      dVar1 = (this->ViewportOffset).field0_0x0._s_0.X;
      if (((pUVar6->SplitscreenInfo).ArrayNum < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (pUVar6->SplitscreenInfo).AllocatorInstance.Data;
      if ((*(int *)(pFVar2 + 8) < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)(*(longlong *)pFVar2 + 0x10) = (float)dVar1;
      dVar1 = (this->ViewportOffset).field0_0x0._s_0.Y;
      if (((pUVar6->SplitscreenInfo).ArrayNum < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (pUVar6->SplitscreenInfo).AllocatorInstance.Data;
      if ((*(int *)(pFVar2 + 8) < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)(*(longlong *)pFVar2 + 0x14) = (float)dVar1;
      return;
    }
  }
  pUVar7 = UDS_LogManager::GetInst();
  if (pUVar7 != (UDS_LogManager *)0x0) {
    pUVar7 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_CameraComponent::UpdateViewportOffset",0x29,Yes);
    UDS_LogManager::PrintLog(pUVar7,1,Warning,local_148.Ptr,0xd8,L"viewportClient is nullptr.");
    if ((void *)local_148._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_148._padding_);
    }
  }
  return;
}

