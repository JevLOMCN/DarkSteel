// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 12

// StaticClass @ 14b583ee0

UClass * __cdecl ADS_ScriptBlockingWall::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_ScriptBlockingWall.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ScriptBlockingWall",
               &Z_Registration_Info_UClass_ADS_ScriptBlockingWall.InnerSingleton,
               StaticRegisterNativesADS_ScriptBlockingWall,0x2e8,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<ADS_ScriptBlockingWall>,
               InternalVTableHelperCtorCaller<ADS_ScriptBlockingWall>,local_res8,AActor::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_ScriptBlockingWall.InnerSingleton;
}

// ADS_ScriptBlockingWall @ 14b5869f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ADS_ScriptBlockingWall * __thiscall
ADS_ScriptBlockingWall::ADS_ScriptBlockingWall(ADS_ScriptBlockingWall *this,FVTableHelper *param_1)

{
  undefined8 local_res8 [4];
  
  AActor::AActor((AActor *)this,param_1);
  this->bIsActivated = true;
  this->bIsDisappearProcess = false;
  this->_padding_ = (longlong)&___7ADS_ScriptBlockingWall__6B_;
  this->Opacity = 1.0;
  this->GroupID = 0;
  (this->ScriptBlockingWallMesh).field0_0x0.DebugPtr = (UStaticMeshComponent *)0x0;
  (this->ScriptBlockingWallCollision).field0_0x0.DebugPtr = (UBoxComponent *)0x0;
  (this->ScriptBlockingWallMeshMID).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->ScriptBlockingWallMeshMID).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// ~ADS_ScriptBlockingWall @ 14b587760

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_ScriptBlockingWall::~ADS_ScriptBlockingWall(ADS_ScriptBlockingWall *this)

{
  this->_padding_ = (longlong)&___7ADS_ScriptBlockingWall__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// GetPrivateStaticClass @ 14b588cb0

UClass * __cdecl ADS_ScriptBlockingWall::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_ScriptBlockingWall.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ScriptBlockingWall",
               &Z_Registration_Info_UClass_ADS_ScriptBlockingWall.InnerSingleton,
               StaticRegisterNativesADS_ScriptBlockingWall,0x2e8,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<ADS_ScriptBlockingWall>,
               InternalVTableHelperCtorCaller<ADS_ScriptBlockingWall>,local_res8,AActor::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_ScriptBlockingWall.InnerSingleton;
}

// StaticRegisterNativesADS_ScriptBlockingWall @ 14b589b50

void __cdecl ADS_ScriptBlockingWall::StaticRegisterNativesADS_ScriptBlockingWall(void)

{
  return;
}

// ADS_ScriptBlockingWall @ 14b998f30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ADS_ScriptBlockingWall * __thiscall
ADS_ScriptBlockingWall::ADS_ScriptBlockingWall
          (ADS_ScriptBlockingWall *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  FName FVar2;
  FName *pFVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  UStaticMeshComponent *this_00;
  UBoxComponent *this_01;
  FName local_res8;
  
  AActor::AActor((AActor *)this,param_1);
  this->bIsActivated = true;
  this->bIsDisappearProcess = false;
  this->GroupID = 0;
  this->_padding_ = (longlong)&___7ADS_ScriptBlockingWall__6B_;
  (this->ScriptBlockingWallMesh).field0_0x0.DebugPtr = (UStaticMeshComponent *)0x0;
  (this->ScriptBlockingWallCollision).field0_0x0.DebugPtr = (UBoxComponent *)0x0;
  this->Opacity = 1.0;
  (this->ScriptBlockingWallMeshMID).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  FWeakObjectPtr::operator=(&(this->ScriptBlockingWallMeshMID).WeakPtr,(FObjectPtr)&local_res8);
  pFVar3 = ::FName::FName(&local_res8,"Root");
  FVar2 = *pFVar3;
  pUVar4 = Z_Construct_UClass_USceneComponent_NoRegister();
  pUVar5 = UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  this->_padding_ = (longlong)pUVar5;
  pFVar3 = ::FName::FName(&local_res8,"ScriptBlockingWallMesh");
  FVar2 = *pFVar3;
  pUVar4 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
  this_00 = (UStaticMeshComponent *)
            UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this_00 != (UStaticMeshComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  (this->ScriptBlockingWallMesh).field0_0x0.DebugPtr = this_00;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  USceneComponent::SetupAttachment
            ((USceneComponent *)this_00,(USceneComponent *)this->_padding_,(FName)0x0);
  pFVar3 = ::FName::FName(&local_res8,"ScriptBlockingWallCollision");
  FVar2 = *pFVar3;
  pUVar4 = Z_Construct_UClass_UBoxComponent_NoRegister();
  this_01 = (UBoxComponent *)
            UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_01 != (UBoxComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_01);
  }
  (this->ScriptBlockingWallCollision).field0_0x0.DebugPtr = this_01;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  USceneComponent::SetupAttachment
            ((USceneComponent *)this_01,(USceneComponent *)this->_padding_,(FName)0x0);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 6;
  return this;
}

// BeginPlay @ 14b99b5b0

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

void __thiscall ADS_ScriptBlockingWall::BeginPlay(ADS_ScriptBlockingWall *this)

{
  int iVar1;
  UStaticMeshComponent *pUVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  UClass *pUVar5;
  UDS_PhasingManager *this_00;
  bool *pbVar6;
  undefined1 auStackY_198 [32];
  bool local_158 [8];
  FDS_ScriptBlockingWallInfo local_150;
  undefined1 local_148 [272];
  UDS_PhasingManager *local_38;
  wchar_t *local_30;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  AActor::BeginPlay((AActor *)this);
  pUVar2 = (this->ScriptBlockingWallMesh).field0_0x0.DebugPtr;
  if (pUVar2 == (UStaticMeshComponent *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_38 = (void *)0x0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_148 + 0x10),
               "ADS_ScriptBlockingWall::BeginPlay",0x21,Yes);
    UDS_LogManager::PrintLog(pUVar4,1,Warning,local_30,0x2b,L"ScriptBlockingWallMesh is nullptr.");
    if (local_38 == (void *)0x0) {
      return;
    }
    FMemory::Free(local_38);
    return;
  }
  local_148._0_8_ = UStaticMeshComponent::GetMaterial(pUVar2,0);
  if ((UMaterialInterface *)local_148._0_8_ != (UMaterialInterface *)0x0) {
    pUVar5 = Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(((UMaterialInterface *)local_148._0_8_)->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(((UMaterialInterface *)local_148._0_8_)->_padding_ + 0x30) +
         (longlong)iVar1 * 8) == &pUVar5->_padding_)) goto LAB_14b99b6c3;
  }
  pUVar2 = (this->ScriptBlockingWallMesh).field0_0x0.DebugPtr;
  local_148._0_8_ = (**(code **)(pUVar2->_padding_ + 0x6c8))(pUVar2,0);
LAB_14b99b6c3:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UMaterialInterface *)local_148._0_8_ != (UMaterialInterface *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_148._0_8_);
  }
  FWeakObjectPtr::operator=(&(this->ScriptBlockingWallMeshMID).WeakPtr,(FObjectPtr)local_148);
  if (this->GroupID < 1) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_38 = (UDS_PhasingManager *)0x0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_148 + 0x10),
               "ADS_ScriptBlockingWall::BeginPlay",0x21,Yes);
    UDS_LogManager::PrintLog(pUVar4,1,Warning,local_30,0x38,L"GroupID is invalid. (%d)");
  }
  else {
    this_00 = UDS_PhasingManager::GetInst();
    if (this_00 != (UDS_PhasingManager *)0x0) {
      TMulticastDelegateRegistration<void___cdecl(FDS_ScriptBlockingWallInfo_const_&),FDefaultDelegateUserPolicy>
      ::AddUObject<ADS_ScriptBlockingWall>
                ((TMulticastDelegateRegistration<void___cdecl(FDS_ScriptBlockingWallInfo_const_&),FDefaultDelegateUserPolicy>
                  *)&this_00->ChangedScriptBlockingWallInfoDelegate,
                 (ADS_ScriptBlockingWall *)local_148,(pmf_b0d1a3bb)this);
      local_150.GroupID = 0;
      local_150.bIsActivated = false;
      bVar3 = UDS_PhasingManager::GetScriptBlockingWallInfo(this_00,&this->GroupID,&local_150);
      if (bVar3) {
        pbVar6 = &local_150.bIsActivated;
      }
      else {
        pbVar6 = local_158;
        local_158[0] = false;
      }
      SetIsActivated(this,pbVar6);
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_38 = this_00;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_148 + 0x10),
               "ADS_ScriptBlockingWall::BeginPlay",0x21,Yes);
    UDS_LogManager::PrintLog(pUVar4,1,Warning,local_30,0x40,L"phasingMng is nullptr.");
  }
  if (local_38 != (UDS_PhasingManager *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}

// EndPlay @ 14b9a7730

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_ScriptBlockingWall::EndPlay(ADS_ScriptBlockingWall *this,Type param_1)

{
  UDS_PhasingManager *pUVar1;
  
  pUVar1 = UDS_PhasingManager::GetInst();
  if (pUVar1 != (UDS_PhasingManager *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->ChangedScriptBlockingWallInfoDelegate,this);
  }
  AActor::EndPlay((AActor *)this,param_1);
  return;
}

// OnChangedScriptBlockingWallInfo @ 14b9bc790

void __thiscall
ADS_ScriptBlockingWall::OnChangedScriptBlockingWallInfo
          (ADS_ScriptBlockingWall *this,FDS_ScriptBlockingWallInfo *param_1)

{
  bool local_res8 [8];
  
  if ((param_1->GroupID == this->GroupID) &&
     ((param_1->bIsActivated != false ||
      ((this->bIsActivated != false && (this->bIsDisappearProcess != true)))))) {
    local_res8[0] = true;
    SetIsActivated(this,local_res8);
    this->bIsDisappearProcess = param_1->bIsActivated == false;
  }
  return;
}

// SetIsActivated @ 14b9c4590

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall ADS_ScriptBlockingWall::SetIsActivated(ADS_ScriptBlockingWall *this,bool *param_1)

{
  bool bVar1;
  UBoxComponent *pUVar2;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_178 [32];
  float local_148 [4];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pUVar2 = (this->ScriptBlockingWallCollision).field0_0x0.DebugPtr;
  if (pUVar2 == (UBoxComponent *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"ADS_ScriptBlockingWall::SetIsActivated",0x26,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_138.Ptr,0x85,L"ScriptBlockingWallCollision is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    bVar1 = *param_1;
    this->bIsActivated = bVar1;
    if (bVar1 != true) {
      (**(code **)(pUVar2->_padding_ + 0x788))(pUVar2,::COLLISION_PROFILE_NOCOLLISION);
      local_148[0] = 0.0;
      SetOpacity(this,local_148);
    }
    else {
      (**(code **)(pUVar2->_padding_ + 0x788))(pUVar2,::COLLISION_PROFILE_PLAYER_ONLY);
      local_148[0] = 0.05;
      SetOpacity(this,local_148);
    }
    (**(code **)(this->_padding_ + 0x368))(this,bVar1 != true);
  }
  return;
}

// SetOpacity @ 14b9c4b20

void __thiscall ADS_ScriptBlockingWall::SetOpacity(ADS_ScriptBlockingWall *this,float *param_1)

{
  float fVar1;
  bool bVar2;
  UMaterialInstanceDynamic *this_00;
  FName *pFVar3;
  FName local_res8;
  
  if (__real_322bcc77 <
      (float)((uint)(this->Opacity - *param_1) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    this->Opacity = *param_1;
    bVar2 = TWeakObjectPtr<UMaterialInstanceDynamic,FWeakObjectPtr>::UEOpEquals
                      (&this->ScriptBlockingWallMeshMID,(void *)0x0);
    if (!bVar2) {
      this_00 = (UMaterialInstanceDynamic *)
                FWeakObjectPtr::Get(&(this->ScriptBlockingWallMeshMID).WeakPtr);
      fVar1 = this->Opacity;
      pFVar3 = ::FName::FName(&local_res8,L"Opacity");
      UMaterialInstanceDynamic::SetScalarParameterValue(this_00,*pFVar3,fVar1);
    }
  }
  return;
}

// Tick @ 14b9c7830

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_ScriptBlockingWall::Tick(ADS_ScriptBlockingWall *this,float param_1)

{
  bool bVar1;
  UMaterialInstanceDynamic *this_00;
  FName *pFVar2;
  float fVar3;
  FName local_res8;
  
  AActor::Tick((AActor *)this,param_1);
  if (this->bIsDisappearProcess == true) {
    fVar3 = this->Opacity - param_1 * __real_3d4ccccd;
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    if (__real_322bcc77 <
        (float)((uint)(this->Opacity - fVar3) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      this->Opacity = fVar3;
      bVar1 = TWeakObjectPtr<UMaterialInstanceDynamic,FWeakObjectPtr>::UEOpEquals
                        (&this->ScriptBlockingWallMeshMID,(void *)0x0);
      if (!bVar1) {
        this_00 = (UMaterialInstanceDynamic *)
                  FWeakObjectPtr::Get(&(this->ScriptBlockingWallMeshMID).WeakPtr);
        fVar3 = this->Opacity;
        pFVar2 = ::FName::FName(&local_res8,L"Opacity");
        UMaterialInstanceDynamic::SetScalarParameterValue(this_00,*pFVar2,fVar3);
      }
    }
    if (this->Opacity <= 0.0) {
      this->bIsDisappearProcess = false;
      local_res8.ComparisonIndex.Value._0_1_ = 0;
      SetIsActivated(this,(bool *)&local_res8);
    }
  }
  return;
}

