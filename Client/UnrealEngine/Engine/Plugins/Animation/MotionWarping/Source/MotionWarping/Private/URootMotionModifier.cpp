// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MotionWarping
// Functions: 14

// StaticClass @ 14cefdbd0

UClass * __cdecl URootMotionModifier::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URootMotionModifier.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MotionWarping",L"RootMotionModifier",
               &Z_Registration_Info_UClass_URootMotionModifier.InnerSingleton,
               StaticRegisterNativesURootMotionModifier,0x170,0x10,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<URootMotionModifier>,
               InternalVTableHelperCtorCaller<URootMotionModifier>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URootMotionModifier.InnerSingleton;
}

// URootMotionModifier @ 14cf047b0

URootMotionModifier * __thiscall
URootMotionModifier::URootMotionModifier(URootMotionModifier *this,FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 local_res8;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7URootMotionModifier__6B_;
  (this->Animation).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->Animation).WeakPtr,(FObjectPtr)&local_res8);
  this->StartTime = 0.0;
  this->EndTime = 0.0;
  this->PreviousPosition = 0.0;
  this->CurrentPosition = 0.0;
  this->Weight = 0.0;
  this->PlayRate = 1.0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->StartTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->StartTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->StartTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->StartTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->StartTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->StartTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->StartTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->StartTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->StartTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->StartTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->StartTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->StartTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  this->ActualStartTime = 0.0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->TotalRootMotionWithinWindow).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->TotalRootMotionWithinWindow).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->TotalRootMotionWithinWindow).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->TotalRootMotionWithinWindow).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->TotalRootMotionWithinWindow).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->TotalRootMotionWithinWindow).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->TotalRootMotionWithinWindow).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->TotalRootMotionWithinWindow).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->TotalRootMotionWithinWindow).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->TotalRootMotionWithinWindow).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->TotalRootMotionWithinWindow).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->TotalRootMotionWithinWindow).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  *(undefined8 *)&this->OnActivateDelegate = 0;
  *(undefined8 *)&(this->OnActivateDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnActivateDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnUpdateDelegate = 0;
  *(undefined8 *)&(this->OnUpdateDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnUpdateDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnDeactivateDelegate = 0;
  *(undefined8 *)&(this->OnDeactivateDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnDeactivateDelegate).field_0x10 = 0;
  this->State = Waiting;
  return this;
}

// URootMotionModifier @ 14cf04910

URootMotionModifier * __thiscall
URootMotionModifier::URootMotionModifier(URootMotionModifier *this,FObjectInitializer *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 local_res8;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7URootMotionModifier__6B_;
  (this->Animation).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->Animation).WeakPtr,(FObjectPtr)&local_res8);
  this->StartTime = 0.0;
  this->EndTime = 0.0;
  this->PreviousPosition = 0.0;
  this->CurrentPosition = 0.0;
  this->Weight = 0.0;
  this->PlayRate = 1.0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->StartTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->StartTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->StartTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->StartTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->StartTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->StartTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->StartTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->StartTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->StartTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->StartTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->StartTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->StartTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  this->ActualStartTime = 0.0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->TotalRootMotionWithinWindow).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->TotalRootMotionWithinWindow).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->TotalRootMotionWithinWindow).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->TotalRootMotionWithinWindow).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->TotalRootMotionWithinWindow).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->TotalRootMotionWithinWindow).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->TotalRootMotionWithinWindow).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->TotalRootMotionWithinWindow).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->TotalRootMotionWithinWindow).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->TotalRootMotionWithinWindow).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->TotalRootMotionWithinWindow).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->TotalRootMotionWithinWindow).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  *(undefined8 *)&this->OnActivateDelegate = 0;
  *(undefined8 *)&(this->OnActivateDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnActivateDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnUpdateDelegate = 0;
  *(undefined8 *)&(this->OnUpdateDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnUpdateDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnDeactivateDelegate = 0;
  *(undefined8 *)&(this->OnDeactivateDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnDeactivateDelegate).field_0x10 = 0;
  this->State = Waiting;
  return this;
}

// ~URootMotionModifier @ 14cf059b0

void __thiscall URootMotionModifier::~URootMotionModifier(URootMotionModifier *this)

{
  this->_padding_ = (longlong)&___7URootMotionModifier__6B_;
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDeactivateDelegate);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnUpdateDelegate);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnActivateDelegate);
  UObject::~UObject((UObject *)this);
  return;
}

// GetActorOwner @ 14cf0ef20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AActor * __thiscall URootMotionModifier::GetActorOwner(URootMotionModifier *this)

{
  int iVar1;
  longlong lVar2;
  UClass *pUVar3;
  AActor *pAVar4;
  
  lVar2 = this->_padding_;
  if (lVar2 != 0) {
    pUVar3 = UMotionWarpingComponent::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if (((iVar1 <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
        ((longlong *)
         *(undefined1 **)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8)
         == &pUVar3->_padding_)) && (*(longlong **)(lVar2 + 0xe0) != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014cf0ef66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pAVar4 = (AActor *)(**(code **)(**(longlong **)(lVar2 + 0xe0) + 0x2b0))();
      return pAVar4;
    }
  }
  return (AActor *)0x0;
}

// GetCharacterOwner @ 14cf0f310

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

ACharacter * __thiscall URootMotionModifier::GetCharacterOwner(URootMotionModifier *this)

{
  int iVar1;
  longlong lVar2;
  UClass *pUVar3;
  ACharacter *pAVar4;
  
  lVar2 = this->_padding_;
  if (lVar2 != 0) {
    pUVar3 = UMotionWarpingComponent::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if (((iVar1 <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
        ((longlong *)
         *(undefined1 **)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8)
         == &pUVar3->_padding_)) && (*(longlong **)(lVar2 + 0xe0) != (longlong *)0x0)) {
      pAVar4 = (ACharacter *)(**(code **)(**(longlong **)(lVar2 + 0xe0) + 0x2b0))();
      if (pAVar4 != (ACharacter *)0x0) {
        pUVar3 = Z_Construct_UClass_ACharacter_NoRegister();
        iVar1 = (int)pUVar3->_padding_;
        if ((iVar1 <= *(int *)(*(longlong *)&pAVar4->field_0x10 + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pAVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
            &pUVar3->_padding_)) {
          return pAVar4;
        }
      }
    }
  }
  return (ACharacter *)0x0;
}

// GetOwnerAdapter @ 14cf10010

UMotionWarpingBaseAdapter * __thiscall
URootMotionModifier::GetOwnerAdapter(URootMotionModifier *this)

{
  int iVar1;
  longlong lVar2;
  UClass *pUVar3;
  
  lVar2 = this->_padding_;
  if (lVar2 != 0) {
    pUVar3 = UMotionWarpingComponent::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      return *(UMotionWarpingBaseAdapter **)(lVar2 + 0xe0);
    }
  }
  return (UMotionWarpingBaseAdapter *)0x0;
}

// GetOwnerComponent @ 14cf10060

UMotionWarpingComponent * __thiscall
URootMotionModifier::GetOwnerComponent(URootMotionModifier *this)

{
  int iVar1;
  UMotionWarpingComponent *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UMotionWarpingComponent *)this->_padding_;
  if (pUVar2 != (UMotionWarpingComponent *)0x0) {
    pUVar3 = UMotionWarpingComponent::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UMotionWarpingComponent *)0x0;
}

// GetPrivateStaticClass @ 14cf10a50

UClass * __cdecl URootMotionModifier::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URootMotionModifier.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MotionWarping",L"RootMotionModifier",
               &Z_Registration_Info_UClass_URootMotionModifier.InnerSingleton,
               StaticRegisterNativesURootMotionModifier,0x170,0x10,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<URootMotionModifier>,
               InternalVTableHelperCtorCaller<URootMotionModifier>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URootMotionModifier.InnerSingleton;
}

// OnStateChanged @ 14cf12f40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
URootMotionModifier::OnStateChanged(URootMotionModifier *this,ERootMotionModifierState param_1)

{
  float fVar1;
  float fVar2;
  ERootMotionModifierState EVar3;
  int iVar4;
  float fVar5;
  UMotionWarpingComponent *pUVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  UClass *pUVar13;
  UMotionWarpingBaseAdapter *pUVar14;
  longlong lVar15;
  UAnimSequenceBase *pUVar16;
  TTransform<double> *pTVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  double dVar22;
  double dVar23;
  undefined1 auStack_d8 [32];
  double local_b8;
  double dStack_b0;
  double local_a8;
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  pUVar6 = (UMotionWarpingComponent *)this->_padding_;
  if (pUVar6 != (UMotionWarpingComponent *)0x0) {
    pUVar13 = UMotionWarpingComponent::StaticClass();
    iVar4 = (int)pUVar13->_padding_;
    if ((iVar4 <= *(int *)(pUVar6->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar4 * 8)
        == &pUVar13->_padding_)) {
      EVar3 = this->State;
      if (param_1 == Active) {
        if ((EVar3 == Disabled) || (EVar3 == MarkedForRemoval)) {
          FOnRootMotionModifierDelegate::ExecuteIfBound(&this->OnDeactivateDelegate,pUVar6,this);
        }
      }
      else if (EVar3 == Active) {
        pUVar14 = GetOwnerAdapter(this);
        if (pUVar14 == (UMotionWarpingBaseAdapter *)0x0) {
          bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("OwnerAdapter",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\MotionWarping\\Source\\MotionWarping\\Private\\RootMotionModifier.cpp"
                              ,0x134,L"Root motion modifiers expect an owner and adapter");
          if (bVar12) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        (**(code **)(pUVar14->_padding_ + 0x2c0))(pUVar14,&local_b8);
        lVar15 = (**(code **)(pUVar14->_padding_ + 0x2b0))(pUVar14);
        dVar11 = _UNK_150689688;
        dVar10 = ___xmm_3ff00000000000003ff0000000000000;
        dVar9 = _UNK_150689518;
        dVar8 = ___xmm_00000000000000003ff0000000000000;
        lVar15 = *(longlong *)(lVar15 + 0x1b8);
        if (lVar15 == 0) {
          uVar18 = 0;
          uVar19 = 0;
          uVar20 = 0;
          uVar21 = 0;
          dVar22 = ___xmm_3ff00000000000000000000000000000;
          dVar23 = _UNK_15061cbc8;
        }
        else {
          uVar18 = *(undefined4 *)(lVar15 + 0x1f0);
          uVar19 = *(undefined4 *)(lVar15 + 500);
          uVar20 = *(undefined4 *)(lVar15 + 0x1f8);
          uVar21 = *(undefined4 *)(lVar15 + 0x1fc);
          dVar22 = *(double *)(lVar15 + 0x200);
          dVar23 = *(double *)(lVar15 + 0x208);
        }
        fVar5 = this->PreviousPosition;
        fVar1 = this->EndTime;
        fVar2 = this->StartTime;
        *(undefined4 *)(this->StartTransform).Rotation.XY.m128d_f64 = uVar18;
        *(undefined4 *)((longlong)(this->StartTransform).Rotation.XY.m128d_f64 + 4) = uVar19;
        *(undefined4 *)((this->StartTransform).Rotation.XY.m128d_f64 + 1) = uVar20;
        *(undefined4 *)((longlong)(this->StartTransform).Rotation.XY.m128d_f64 + 0xc) = uVar21;
        this->ActualStartTime = fVar5;
        (this->StartTransform).Rotation.ZW.m128d_f64[0] = dVar22;
        (this->StartTransform).Rotation.ZW.m128d_f64[1] = dVar23;
        (this->StartTransform).Translation.XY.m128d_f64[0] = local_b8;
        (this->StartTransform).Translation.XY.m128d_f64[1] = dStack_b0;
        (this->StartTransform).Translation.ZW.m128d_f64[0] = local_a8;
        (this->StartTransform).Translation.ZW.m128d_f64[1] = 0.0;
        (this->StartTransform).Scale3D.XY.m128d_f64[0] = dVar10;
        (this->StartTransform).Scale3D.XY.m128d_f64[1] = dVar11;
        (this->StartTransform).Scale3D.ZW.m128d_f64[0] = dVar8;
        (this->StartTransform).Scale3D.ZW.m128d_f64[1] = dVar9;
        pUVar16 = (UAnimSequenceBase *)FWeakObjectPtr::Get(&(this->Animation).WeakPtr);
        pTVar17 = UMotionWarpingUtilities::ExtractRootMotionFromAnimation
                            (&local_98,pUVar16,fVar2,fVar1);
        dVar8 = (pTVar17->Rotation).XY.m128d_f64[1];
        (this->TotalRootMotionWithinWindow).Rotation.XY.m128d_f64[0] =
             (pTVar17->Rotation).XY.m128d_f64[0];
        (this->TotalRootMotionWithinWindow).Rotation.XY.m128d_f64[1] = dVar8;
        dVar8 = (pTVar17->Rotation).ZW.m128d_f64[1];
        (this->TotalRootMotionWithinWindow).Rotation.ZW.m128d_f64[0] =
             (pTVar17->Rotation).ZW.m128d_f64[0];
        (this->TotalRootMotionWithinWindow).Rotation.ZW.m128d_f64[1] = dVar8;
        dVar8 = (pTVar17->Translation).XY.m128d_f64[1];
        (this->TotalRootMotionWithinWindow).Translation.XY.m128d_f64[0] =
             (pTVar17->Translation).XY.m128d_f64[0];
        (this->TotalRootMotionWithinWindow).Translation.XY.m128d_f64[1] = dVar8;
        dVar8 = (pTVar17->Translation).ZW.m128d_f64[1];
        (this->TotalRootMotionWithinWindow).Translation.ZW.m128d_f64[0] =
             (pTVar17->Translation).ZW.m128d_f64[0];
        (this->TotalRootMotionWithinWindow).Translation.ZW.m128d_f64[1] = dVar8;
        dVar8 = (pTVar17->Scale3D).XY.m128d_f64[1];
        (this->TotalRootMotionWithinWindow).Scale3D.XY.m128d_f64[0] =
             (pTVar17->Scale3D).XY.m128d_f64[0];
        (this->TotalRootMotionWithinWindow).Scale3D.XY.m128d_f64[1] = dVar8;
        dVar8 = (pTVar17->Scale3D).ZW.m128d_f64[1];
        (this->TotalRootMotionWithinWindow).Scale3D.ZW.m128d_f64[0] =
             (pTVar17->Scale3D).ZW.m128d_f64[0];
        (this->TotalRootMotionWithinWindow).Scale3D.ZW.m128d_f64[1] = dVar8;
        FOnRootMotionModifierDelegate::ExecuteIfBound(&this->OnActivateDelegate,pUVar6,this);
      }
    }
  }
  return;
}

// ProcessRootMotion @ 14cf15b50

TTransform<double> * __thiscall
URootMotionModifier::ProcessRootMotion
          (URootMotionModifier *this,TTransform<double> *__return_storage_ptr__,
          TTransform<double> *param_1,float param_2)

{
  __m128d _Var1;
  __m128d _Var2;
  
  _Var1.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(__return_storage_ptr__->Rotation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  _Var2 = UE::Math::TTransform<double>::Identity.Translation.XY;
  *&(__return_storage_ptr__->Rotation).ZW.m128d_f64 = _Var1.m128d_f64;
  _Var1 = UE::Math::TTransform<double>::Identity.Translation.ZW;
  *&(__return_storage_ptr__->Translation).XY.m128d_f64 = _Var2.m128d_f64;
  _Var2 = UE::Math::TTransform<double>::Identity.Scale3D.XY;
  *&(__return_storage_ptr__->Translation).ZW.m128d_f64 = _Var1.m128d_f64;
  _Var1 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
  *&(__return_storage_ptr__->Scale3D).XY.m128d_f64 = _Var2.m128d_f64;
  *&(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = _Var1.m128d_f64;
  return __return_storage_ptr__;
}

// SetState @ 14cf1bb70

void __thiscall
URootMotionModifier::SetState(URootMotionModifier *this,ERootMotionModifierState param_1)

{
  ERootMotionModifierState EVar1;
  
  EVar1 = this->State;
  if (EVar1 != param_1) {
    this->State = param_1;
                    /* WARNING: Could not recover jumptable at 0x00014cf1bb8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x2b0))(this,EVar1);
    return;
  }
  return;
}

// StaticRegisterNativesURootMotionModifier @ 14cf1bf40

void __cdecl URootMotionModifier::StaticRegisterNativesURootMotionModifier(void)

{
  return;
}

// Update @ 14cf1c5e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
URootMotionModifier::Update(URootMotionModifier *this,FMotionWarpingUpdateContext *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  bool bVar4;
  UClass *pUVar5;
  longlong lVar6;
  UAnimSequenceBase *pUVar7;
  UObject *pUVar8;
  UMotionWarpingComponent *pUVar9;
  ForAnyElementType FVar10;
  FName local_res8;
  FString local_88;
  FString local_78;
  FString local_68 [5];
  
  lVar6 = this->_padding_;
  if (lVar6 == 0) {
    return;
  }
  pUVar5 = UMotionWarpingComponent::StaticClass();
  iVar3 = (int)pUVar5->_padding_;
  if (*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < iVar3) {
    return;
  }
  if ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)iVar3 * 8) !=
      &pUVar5->_padding_) {
    return;
  }
  if (*(longlong **)(lVar6 + 0xe0) == (longlong *)0x0) {
    return;
  }
  lVar6 = (**(code **)(**(longlong **)(lVar6 + 0xe0) + 0x2b0))();
  if (lVar6 == 0) {
    return;
  }
  bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)param_1);
  if (bVar4) {
    pUVar7 = (UAnimSequenceBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
    bVar4 = TWeakObjectPtr<UAnimSequenceBase_const_,FWeakObjectPtr>::
            UEOpEquals<UAnimSequenceBase,bool>(&this->Animation,pUVar7);
    if (!bVar4) goto LAB_14cf1c89a;
    fVar1 = param_1->PreviousPosition;
    this->PreviousPosition = fVar1;
    fVar2 = param_1->CurrentPosition;
    this->CurrentPosition = fVar2;
    this->Weight = param_1->Weight;
    this->PlayRate = param_1->PlayRate;
    if (fVar1 < this->EndTime) {
      if ((this->State != Active) ||
         (((fVar2 <= this->EndTime && (this->StartTime <= fVar2)) ||
          ((float)((uint)((fVar2 - fVar1) - param_1->DeltaSeconds * param_1->PlayRate) &
                  __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)))) {
        if ((this->StartTime <= fVar1) && (this->State == Waiting)) {
          this->State = Active;
          (**(code **)(this->_padding_ + 0x2b0))(this);
        }
        if (this->State != Active) {
          return;
        }
        pUVar9 = GetOwnerComponent(this);
        if (pUVar9 == (UMotionWarpingComponent *)0x0) {
          return;
        }
        FOnRootMotionModifierDelegate::ExecuteIfBound(&this->OnUpdateDelegate,pUVar9,this);
        return;
      }
      if (5 < (byte)LogMotionWarping._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMotionWarping);
      }
      goto LAB_14cf1c9e2;
    }
    if ((byte)LogMotionWarping._0_1_ < 6) goto LAB_14cf1c9e2;
    pUVar8 = FWeakObjectPtr::Get(&(this->Animation).WeakPtr);
    if (pUVar8 == (UObject *)0x0) {
      ::FString::FString(&local_88,L"None");
    }
    else {
      local_res8.ComparisonIndex.Value = *(uint *)&pUVar8->field_0x18;
      local_res8.Number = *(uint *)&pUVar8->field_0x1c;
      ::FName::ToString(&local_res8,&local_88);
    }
    local_res8 = *(FName *)(lVar6 + 0x18);
    ::FName::ToString(&local_res8,&local_78);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMotionWarping);
    FVar10.Data = local_88.Data.AllocatorInstance.Data;
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
      FVar10.Data = local_88.Data.AllocatorInstance.Data;
    }
  }
  else {
LAB_14cf1c89a:
    if ((byte)LogMotionWarping._0_1_ < 6) goto LAB_14cf1c9e2;
    pUVar8 = FWeakObjectPtr::Get(&(this->Animation).WeakPtr);
    if (pUVar8 == (UObject *)0x0) {
      ::FString::FString(&local_78,L"None");
    }
    else {
      local_res8.ComparisonIndex.Value = *(uint *)&pUVar8->field_0x18;
      local_res8.Number = *(uint *)&pUVar8->field_0x1c;
      ::FName::ToString(&local_res8,&local_78);
    }
    pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
    if (pUVar8 == (UObject *)0x0) {
      ::FString::FString(&local_88,L"None");
    }
    else {
      local_res8.ComparisonIndex.Value = *(uint *)&pUVar8->field_0x18;
      local_res8.Number = *(uint *)&pUVar8->field_0x1c;
      ::FName::ToString(&local_res8,&local_88);
    }
    local_res8 = *(FName *)(lVar6 + 0x18);
    ::FName::ToString(&local_res8,local_68);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMotionWarping);
    if (local_68[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68[0].Data.AllocatorInstance.Data);
    }
    FVar10.Data = local_78.Data.AllocatorInstance.Data;
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
      FVar10.Data = local_78.Data.AllocatorInstance.Data;
    }
  }
  if (FVar10.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar10.Data);
  }
LAB_14cf1c9e2:
  if (this->State != MarkedForRemoval) {
    this->State = MarkedForRemoval;
    (**(code **)(this->_padding_ + 0x2b0))(this);
  }
  return;
}

