// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b417060

UClass * __cdecl UDS_AnimNotify_CameraShake::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AnimNotify_CameraShake.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AnimNotify_CameraShake",
               &Z_Registration_Info_UClass_UDS_AnimNotify_CameraShake.InnerSingleton,
               StaticRegisterNativesUDS_AnimNotify_CameraShake,0x58,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_AnimNotify_CameraShake>,
               InternalVTableHelperCtorCaller<UDS_AnimNotify_CameraShake>,local_res8,
               UDS_AnimNotify::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AnimNotify_CameraShake.InnerSingleton;
}

// UDS_AnimNotify_CameraShake @ 14b41b1a0

UDS_AnimNotify_CameraShake * __thiscall
UDS_AnimNotify_CameraShake::UDS_AnimNotify_CameraShake
          (UDS_AnimNotify_CameraShake *this,FVTableHelper *param_1)

{
  UAnimNotify::UAnimNotify((UAnimNotify *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_AnimNotify_CameraShake__6B_;
  (this->CameraShake).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  this->Duration = 0.0;
  this->BlendInTime = 0.0;
  this->BlendOutTime = 0.0;
  this->CameraShakeRadius = 0.0;
  this->DissipationStartSection = 0.0;
  this->OnlyGround = false;
  return this;
}

// ~UDS_AnimNotify_CameraShake @ 14b41bb10

void __thiscall
UDS_AnimNotify_CameraShake::~UDS_AnimNotify_CameraShake(UDS_AnimNotify_CameraShake *this)

{
  this->_padding_ = (longlong)&___7UDS_AnimNotify__6B_;
  UAnimNotify::~UAnimNotify((UAnimNotify *)this);
  return;
}

// GetPrivateStaticClass @ 14b41d610

UClass * __cdecl UDS_AnimNotify_CameraShake::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AnimNotify_CameraShake.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AnimNotify_CameraShake",
               &Z_Registration_Info_UClass_UDS_AnimNotify_CameraShake.InnerSingleton,
               StaticRegisterNativesUDS_AnimNotify_CameraShake,0x58,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_AnimNotify_CameraShake>,
               InternalVTableHelperCtorCaller<UDS_AnimNotify_CameraShake>,local_res8,
               UDS_AnimNotify::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AnimNotify_CameraShake.InnerSingleton;
}

// StaticRegisterNativesUDS_AnimNotify_CameraShake @ 14b41e1e0

void __cdecl UDS_AnimNotify_CameraShake::StaticRegisterNativesUDS_AnimNotify_CameraShake(void)

{
  return;
}

// UDS_AnimNotify_CameraShake @ 14b8b2150

UDS_AnimNotify_CameraShake * __thiscall
UDS_AnimNotify_CameraShake::UDS_AnimNotify_CameraShake
          (UDS_AnimNotify_CameraShake *this,FObjectInitializer *param_1)

{
  UAnimNotify::UAnimNotify((UAnimNotify *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_AnimNotify_CameraShake__6B_;
  (this->CameraShake).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  this->Duration = 0.0;
  this->BlendInTime = 0.0;
  this->BlendOutTime = 0.0;
  this->CameraShakeRadius = 0.0;
  this->DissipationStartSection = 0.0;
  this->OnlyGround = false;
  return this;
}

// Notify @ 14b8d1ce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UDS_AnimNotify_CameraShake::Notify
          (UDS_AnimNotify_CameraShake *this,USkeletalMeshComponent *param_1,
          UAnimSequenceBase *param_2,FAnimNotifyEventReference *param_3)

{
  TObjectPtr<APlayerCameraManager> *this_00;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  bool bVar7;
  UClass *pUVar8;
  UDS_GameInstance *this_01;
  UDS_LogManager *pUVar9;
  APlayerController *pAVar10;
  UClass *pUVar11;
  ADS_CameraManager *this_02;
  APlayerCameraManager *pAVar12;
  undefined1 auStackY_208 [32];
  uint uVar13;
  wchar_t *pwVar14;
  FWeakObjectPtr local_1b8;
  APlayerCameraManager *local_1b0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_1a8;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_208;
  UAnimNotify::Notify((UAnimNotify *)this,param_1,param_2,param_3);
  pUVar11 = (this->CameraShake).Class.field0_0x0.DebugPtr;
  if ((pUVar11 != (UClass *)0x0) &&
     (pUVar8 = Z_Construct_UClass_UCameraShakeBase_NoRegister(), pUVar8 != (UClass *)0x0)) {
    iVar6 = (int)pUVar8->_padding_;
    if (((int)pUVar11->_padding_ < iVar6) ||
       ((longlong *)*(undefined1 **)(pUVar11->_padding_ + (longlong)iVar6 * 8) != &pUVar8->_padding_
       )) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if ((bVar7) && ((this->CameraShake).Class.field0_0x0.DebugPtr != (UClass *)0x0)) {
      this_01 = UDS_GameInstance::GetInst();
      if (this_01 == (UDS_GameInstance *)0x0) {
        pUVar9 = UDS_LogManager::GetInst();
        if (pUVar9 == (UDS_LogManager *)0x0) {
          return;
        }
        pUVar9 = UDS_LogManager::GetInst();
        local_1a8._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_1a8,"UDS_AnimNotify_CameraShake::Notify",0x22,Yes);
        pwVar14 = L"GameInstance is nullptr";
        uVar13 = 0x23;
      }
      else {
        pAVar10 = UGameInstance::GetFirstLocalPlayerController
                            ((UGameInstance *)this_01,(UWorld *)0x0);
        if (pAVar10 == (APlayerController *)0x0) {
          pUVar9 = UDS_LogManager::GetInst();
          if (pUVar9 == (UDS_LogManager *)0x0) {
            return;
          }
          pUVar9 = UDS_LogManager::GetInst();
          local_1a8._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_1a8,"UDS_AnimNotify_CameraShake::Notify",0x22,Yes);
          pwVar14 = L"PlayerController is nullptr";
          uVar13 = 0x2a;
        }
        else {
          this_00 = &pAVar10->PlayerCameraManager;
          pAVar12 = (APlayerCameraManager *)0x0;
          if ((this_00->field0_0x0).DebugPtr != (APlayerCameraManager *)0x0) {
            pUVar11 = Z_Construct_UClass_ADS_CameraManager_NoRegister();
            bVar7 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar11);
            if (bVar7) {
              pAVar12 = (this_00->field0_0x0).DebugPtr;
            }
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pAVar12 != (APlayerCameraManager *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pAVar12);
          }
          local_1b8.ObjectIndex = 0;
          local_1b8.ObjectSerialNumber = 0;
          local_1b0 = pAVar12;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pAVar12 != (APlayerCameraManager *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pAVar12);
          }
          FWeakObjectPtr::operator=(&local_1b8,(FObjectPtr)&local_1b0);
          bVar7 = FWeakObjectPtr::IsValid(&local_1b8);
          if (bVar7) {
            this_02 = (ADS_CameraManager *)FWeakObjectPtr::Get(&local_1b8);
            local_1b0 = (APlayerCameraManager *)(this->CameraShake).Class.field0_0x0.DebugPtr;
            bVar7 = this->OnlyGround;
            fVar1 = this->DissipationStartSection;
            fVar2 = this->CameraShakeRadius;
            fVar3 = this->BlendOutTime;
            fVar4 = this->BlendInTime;
            fVar5 = this->Duration;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (local_1b0 != (APlayerCameraManager *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)local_1b0);
            }
            ADS_CameraManager::CameraShake
                      (this_02,param_1,(TSubclassOf<UCameraShakeBase>)&local_1b0,fVar5,fVar4,fVar3,
                       fVar2,fVar1,bVar7);
            return;
          }
          pUVar9 = UDS_LogManager::GetInst();
          if (pUVar9 == (UDS_LogManager *)0x0) {
            return;
          }
          pUVar9 = UDS_LogManager::GetInst();
          local_1a8._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_1a8,"UDS_AnimNotify_CameraShake::Notify",0x22,Yes);
          pwVar14 = L"CameraManager is invalid";
          uVar13 = 0x32;
        }
      }
      goto LAB_14b8d200b;
    }
  }
  pUVar9 = UDS_LogManager::GetInst();
  if (pUVar9 == (UDS_LogManager *)0x0) {
    return;
  }
  pUVar9 = UDS_LogManager::GetInst();
  local_1a8._padding_ = 0;
  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
            (&local_1a8,"UDS_AnimNotify_CameraShake::Notify",0x22,Yes);
  pwVar14 = L"CameraShake is nullptr";
  uVar13 = 0x1c;
LAB_14b8d200b:
  UDS_LogManager::PrintLog(pUVar9,1,Warning,local_1a8.Ptr,uVar13,pwVar14);
  if ((void *)local_1a8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_1a8._padding_);
  }
  return;
}

