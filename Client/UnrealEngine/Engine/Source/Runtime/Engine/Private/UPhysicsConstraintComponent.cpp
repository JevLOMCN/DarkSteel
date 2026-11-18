// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 114

// StaticClass @ 1482ce000

UClass * __cdecl UPhysicsConstraintComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPhysicsConstraintComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PhysicsConstraintComponent",
               &Z_Registration_Info_UClass_UPhysicsConstraintComponent.InnerSingleton,
               StaticRegisterNativesUPhysicsConstraintComponent,0x560,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UPhysicsConstraintComponent>,
               InternalVTableHelperCtorCaller<UPhysicsConstraintComponent>,local_res8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPhysicsConstraintComponent.InnerSingleton;
}

// UPhysicsConstraintComponent @ 1482dbac0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UPhysicsConstraintComponent * __thiscall
UPhysicsConstraintComponent::UPhysicsConstraintComponent
          (UPhysicsConstraintComponent *this,FVTableHelper *param_1)

{
  USceneComponent::USceneComponent((USceneComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->ConstraintActor1).field0_0x0.DebugPtr = (AActor *)0x0;
  (this->ComponentName1).ComponentName = (FName)0x0;
  (this->ConstraintActor2).field0_0x0.DebugPtr = (AActor *)0x0;
  (this->ComponentName2).ComponentName = (FName)0x0;
  (this->OverrideComponent1).WeakPtr = (FWeakObjectPtr)0x0;
  (this->OverrideComponent2).WeakPtr = (FWeakObjectPtr)0x0;
  (this->ConstraintSetup_DEPRECATED).field0_0x0.DebugPtr = (UPhysicsConstraintTemplate *)0x0;
  *(undefined8 *)&this->OnConstraintBroken = 0;
  *(undefined8 *)&(this->OnConstraintBroken).field_0x8 = 0;
  *(undefined8 *)&(this->OnConstraintBroken).field_0x10 = 0;
  *(undefined8 *)&this->OnPlasticDeformation = 0;
  *(undefined8 *)&(this->OnPlasticDeformation).field_0x8 = 0;
  *(undefined8 *)&(this->OnPlasticDeformation).field_0x10 = 0;
  FConstraintInstance::FConstraintInstance(&this->ConstraintInstance);
  return this;
}

// UPhysicsConstraintComponent @ 1482dbb70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UPhysicsConstraintComponent * __thiscall
UPhysicsConstraintComponent::UPhysicsConstraintComponent
          (UPhysicsConstraintComponent *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  
  USceneComponent::USceneComponent((USceneComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->ConstraintActor1).field0_0x0.DebugPtr = (AActor *)0x0;
  (this->ComponentName1).ComponentName = (FName)0x0;
  (this->ConstraintActor2).field0_0x0.DebugPtr = (AActor *)0x0;
  (this->ComponentName2).ComponentName = (FName)0x0;
  (this->OverrideComponent1).WeakPtr = (FWeakObjectPtr)0x0;
  (this->OverrideComponent2).WeakPtr = (FWeakObjectPtr)0x0;
  (this->ConstraintSetup_DEPRECATED).field0_0x0.DebugPtr = (UPhysicsConstraintTemplate *)0x0;
  *(undefined8 *)&this->OnConstraintBroken = 0;
  *(undefined8 *)&(this->OnConstraintBroken).field_0x8 = 0;
  *(undefined8 *)&(this->OnConstraintBroken).field_0x10 = 0;
  *(undefined8 *)&this->OnPlasticDeformation = 0;
  *(undefined8 *)&(this->OnPlasticDeformation).field_0x8 = 0;
  *(undefined8 *)&(this->OnPlasticDeformation).field_0x10 = 0;
  FConstraintInstance::FConstraintInstance(&this->ConstraintInstance);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 | 1;
  this->bIsBrokenLocal = false;
  return this;
}

// ~UPhysicsConstraintComponent @ 1482de150

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
UPhysicsConstraintComponent::~UPhysicsConstraintComponent(UPhysicsConstraintComponent *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ConstraintInstance)._padding_);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ConstraintInstance)._padding_);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ConstraintInstance)._padding_);
  pvVar1 = *(void **)&(this->OnPlasticDeformation).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPlasticDeformation);
  pvVar1 = *(void **)&(this->OnConstraintBroken).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnConstraintBroken);
  USceneComponent::~USceneComponent((USceneComponent *)this);
  return;
}

// BeginDestroy @ 1482e9e00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPhysicsConstraintComponent::BeginDestroy(UPhysicsConstraintComponent *this)

{
  code *pcVar1;
  bool bVar2;
  
  USceneComponent::BeginDestroy((USceneComponent *)this);
  bVar2 = FConstraintInstance::IsTerminated(&this->ConstraintInstance);
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4953640959368756829>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\PhysicsConstraintComponent.cpp"
                       ,0x1a3,"ConstraintInstance.IsTerminated()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// BreakConstraint @ 1482ea750

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPhysicsConstraintComponent::BreakConstraint(UPhysicsConstraintComponent *this)

{
  FConstraintInstance::TermConstraint(&this->ConstraintInstance);
  this->bIsBrokenLocal = true;
  return;
}

// EndPlay @ 148300500

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPhysicsConstraintComponent::EndPlay(UPhysicsConstraintComponent *this,Type param_1)

{
  USceneComponent::EndPlay((USceneComponent *)this,param_1);
  FConstraintInstance::TermConstraint(&this->ConstraintInstance);
  return;
}

// GetBodyBox @ 1483069d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TBox<double> * __thiscall
UPhysicsConstraintComponent::GetBodyBox
          (UPhysicsConstraintComponent *this,TBox<double> *__return_storage_ptr__,Type param_1)

{
  if (param_1 == Frame1) {
    GetBodyBoxInternal(this,__return_storage_ptr__,Frame1,(this->ConstraintInstance).ConstraintBone1
                      );
    return __return_storage_ptr__;
  }
  GetBodyBoxInternal(this,__return_storage_ptr__,param_1,(this->ConstraintInstance).ConstraintBone2)
  ;
  return __return_storage_ptr__;
}

// GetBodyBoxInternal @ 148306a10

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
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TBox<double> * __thiscall
UPhysicsConstraintComponent::GetBodyBoxInternal
          (UPhysicsConstraintComponent *this,TBox<double> *__return_storage_ptr__,Type param_1,
          FName param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  code *pcVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  uchar uVar13;
  uchar uVar14;
  uchar uVar15;
  uchar uVar16;
  uchar uVar17;
  uchar uVar18;
  uchar uVar19;
  bool bVar20;
  int iVar21;
  USkeletalMeshComponent *this_00;
  UClass *pUVar22;
  UPhysicsAsset *pUVar23;
  TBox<double> *pTVar24;
  FMessageLog *this_01;
  FText *pFVar25;
  FText *pFVar26;
  FText *pFVar27;
  FTextFormat *pFVar28;
  uint uVar29;
  FName local_res20;
  undefined1 auStack_1c8 [32];
  longlong local_1a8;
  longlong local_1a0;
  uint local_198;
  FName local_194;
  FString local_188;
  TSharedRef<FTokenizedMessage,1> local_178;
  FText local_168;
  FText local_158;
  FMessageLog local_148;
  undefined7 uStack_117;
  FText local_110;
  FText local_100;
  FTextFormat local_f0;
  TTransform<double> local_d8;
  TBox<double> local_78;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = 0.0;
  __return_storage_ptr__->IsValid = '\0';
  __return_storage_ptr__->Pad[0] = '\0';
  __return_storage_ptr__->Pad[1] = '\0';
  __return_storage_ptr__->Pad[2] = '\0';
  __return_storage_ptr__->Pad[3] = '\0';
  __return_storage_ptr__->Pad[4] = '\0';
  __return_storage_ptr__->Pad[5] = '\0';
  __return_storage_ptr__->Pad[6] = '\0';
  local_res20 = param_2;
  this_00 = (USkeletalMeshComponent *)GetComponentInternal(this,param_1);
  if (this_00 != (USkeletalMeshComponent *)0x0) {
    pUVar22 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    iVar21 = (int)pUVar22->_padding_;
    if ((*(int *)(this_00->_padding_ + 0x38) < iVar21) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar21 * 8) !=
        &pUVar22->_padding_)) {
      dVar1 = (double)this_00->_padding_;
      dVar2 = (double)this_00->_padding_;
      dVar3 = (double)this_00->_padding_;
      dVar10 = (double)this_00->_padding_;
      dVar8 = (double)this_00->_padding_;
      dVar6 = (double)this_00->_padding_ - (double)this_00->_padding_;
      dVar4 = (double)this_00->_padding_;
      dVar11 = (double)this_00->_padding_;
      dVar12 = (double)this_00->_padding_;
      auVar9._8_4_ = SUB84(dVar6,0);
      auVar9._0_8_ = dVar2 - dVar1;
      auVar9._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      *(undefined1 (*) [16])&(__return_storage_ptr__->Min).field0_0x0 = auVar9;
      dVar8 = dVar8 + dVar12;
      (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar3 - dVar4;
      (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar2 + dVar1;
      auVar7._8_4_ = SUB84(dVar8,0);
      auVar7._0_8_ = dVar10 + dVar11;
      auVar7._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
      *(undefined1 (*) [16])((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 8) = auVar7;
      __return_storage_ptr__->IsValid = 1;
      __return_storage_ptr__->Pad[0] = (char)uStack_117;
      __return_storage_ptr__->Pad[1] = (char)((uint7)uStack_117 >> 8);
      __return_storage_ptr__->Pad[2] = (char)((uint7)uStack_117 >> 0x10);
      __return_storage_ptr__->Pad[3] = (char)((uint7)uStack_117 >> 0x18);
      __return_storage_ptr__->Pad[4] = (char)((uint7)uStack_117 >> 0x20);
      __return_storage_ptr__->Pad[5] = (char)((uint7)uStack_117 >> 0x28);
      __return_storage_ptr__->Pad[6] = (char)((uint7)uStack_117 >> 0x30);
    }
    else {
      pUVar23 = USkinnedMeshComponent::GetPhysicsAsset((USkinnedMeshComponent *)this_00);
      if (pUVar23 != (UPhysicsAsset *)0x0) {
        iVar21 = GetBoneIndexHelper(local_res20,this_00,(int *)&local_198);
        if ((iVar21 == -1) || (local_198 == 0xffffffff)) {
          ::FName::FName(&local_194,"PIE");
          this_01 = FMessageLog::FMessageLog(&local_148,&local_194);
          if (this == (UPhysicsConstraintComponent *)0x0) {
            ::FString::FString(&local_188,L"None");
          }
          else {
            UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_188,(UObject *)0x0);
          }
          pFVar25 = FText::FromString(&local_110,&local_188);
          pFVar26 = FText::FromName(&local_100,&local_res20);
          pFVar27 = FText::AsLocalizable_Advanced_LocText
                              (&local_158,L"ConstraintComponent",L"BadBoneNameToConstraint2",
                               L"Couldn\'t find bone {0} for ConstraintComponent {1}.");
          pFVar28 = FTextFormat::FTextFormat(&local_f0,pFVar27,Default);
          pFVar25 = FText::Format<FText,FText>(&local_168,pFVar28,pFVar26,pFVar25);
          FMessageLog::Warning(this_01,&local_178,pFVar25);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_178.SharedReferenceCount.ReferenceController);
          if (local_168.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_168.TextData.Reference + 0x10))();
          }
          if (local_158.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_158.TextData.Reference + 0x10))();
          }
          if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_188.Data.AllocatorInstance.Data);
          }
          FMessageLog::~FMessageLog(&local_148);
        }
        else {
          USkinnedMeshComponent::GetBoneTransform((USkinnedMeshComponent *)this_00,&local_d8,iVar21)
          ;
          iVar21 = (pUVar23->SkeletalBodySetups).ArrayNum;
          uVar29 = 0;
          if ((int)local_198 < iVar21) {
            uVar29 = ~local_198 >> 0x1f;
          }
          if ((uVar29 == 0) &&
             (local_1a8 = (longlong)(int)local_198, local_1a0 = (longlong)iVar21,
             bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar5 = (code *)swi(3);
            pTVar24 = (TBox<double> *)(*pcVar5)();
            return pTVar24;
          }
          pTVar24 = FKAggregateGeom::CalcAABB
                              ((FKAggregateGeom *)
                               (*(longlong *)
                                 ((pUVar23->SkeletalBodySetups).AllocatorInstance.Data +
                                 (longlong)(int)local_198 * 8) + 0x38),&local_78,&local_d8);
          dVar1 = (pTVar24->Min).field0_0x0._s_0.Y;
          (__return_storage_ptr__->Min).field0_0x0._s_0.X = (pTVar24->Min).field0_0x0._s_0.X;
          (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar1;
          dVar1 = (pTVar24->Max).field0_0x0._s_0.X;
          (__return_storage_ptr__->Min).field0_0x0._s_0.Z = (pTVar24->Min).field0_0x0._s_0.Z;
          (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar1;
          dVar1 = (pTVar24->Max).field0_0x0._s_0.Z;
          (__return_storage_ptr__->Max).field0_0x0._s_0.Y = (pTVar24->Max).field0_0x0._s_0.Y;
          (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar1;
          uVar13 = pTVar24->Pad[0];
          uVar14 = pTVar24->Pad[1];
          uVar15 = pTVar24->Pad[2];
          uVar16 = pTVar24->Pad[3];
          uVar17 = pTVar24->Pad[4];
          uVar18 = pTVar24->Pad[5];
          uVar19 = pTVar24->Pad[6];
          __return_storage_ptr__->IsValid = pTVar24->IsValid;
          __return_storage_ptr__->Pad[0] = uVar13;
          __return_storage_ptr__->Pad[1] = uVar14;
          __return_storage_ptr__->Pad[2] = uVar15;
          __return_storage_ptr__->Pad[3] = uVar16;
          __return_storage_ptr__->Pad[4] = uVar17;
          __return_storage_ptr__->Pad[5] = uVar18;
          __return_storage_ptr__->Pad[6] = uVar19;
        }
      }
    }
  }
  return __return_storage_ptr__;
}

// GetBodyInstance @ 1483070b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FBodyInstance * __thiscall
UPhysicsConstraintComponent::GetBodyInstance(UPhysicsConstraintComponent *this,Type param_1)

{
  UPrimitiveComponent *pUVar1;
  FBodyInstance *pFVar2;
  
  pUVar1 = GetComponentInternal(this,param_1);
  if (pUVar1 == (UPrimitiveComponent *)0x0) {
    return (FBodyInstance *)0x0;
  }
  if (param_1 == Frame1) {
                    /* WARNING: Could not recover jumptable at 0x0001483070f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pFVar2 = (FBodyInstance *)
             (**(code **)(*(longlong *)pUVar1 + 0x818))
                       (pUVar1,(this->ConstraintInstance).ConstraintBone1,1,0xffffffff);
    return pFVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x000148307108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar2 = (FBodyInstance *)
           (**(code **)(*(longlong *)pUVar1 + 0x818))
                     (pUVar1,(this->ConstraintInstance).ConstraintBone2,1,0xffffffff);
  return pFVar2;
}

// GetBodyTransform @ 148307400

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TTransform<double> * __thiscall
UPhysicsConstraintComponent::GetBodyTransform
          (UPhysicsConstraintComponent *this,TTransform<double> *__return_storage_ptr__,Type param_1
          )

{
  if (param_1 == Frame1) {
    GetBodyTransformInternal
              (this,__return_storage_ptr__,Frame1,(this->ConstraintInstance).ConstraintBone1);
    return __return_storage_ptr__;
  }
  GetBodyTransformInternal
            (this,__return_storage_ptr__,param_1,(this->ConstraintInstance).ConstraintBone2);
  return __return_storage_ptr__;
}

// GetBodyTransformInternal @ 148307440

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
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TTransform<double> * __thiscall
UPhysicsConstraintComponent::GetBodyTransformInternal
          (UPhysicsConstraintComponent *this,TTransform<double> *__return_storage_ptr__,Type param_1
          ,FName param_2)

{
  int iVar1;
  USkeletalMeshComponent *this_00;
  UClass *pUVar2;
  TTransform<double> *pTVar3;
  FMessageLog *this_01;
  FText *pFVar4;
  FText *pFVar5;
  FText *pFVar6;
  FTextFormat *pFVar7;
  FChaosScene *pFVar8;
  FName FVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  FName local_res20;
  undefined1 auStack_1a8 [32];
  FName local_188 [2];
  FString local_178;
  TArrayView<Chaos::FPhysicsObject_const_*_const,int> local_168;
  FScopedSceneLock_Chaos local_158;
  FReadPhysicsObjectInterface<0> local_140 [8];
  TSharedRef<FTokenizedMessage,1> local_138;
  FText local_128;
  FText local_118;
  FText local_108;
  TTransform<double> local_f8;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  local_res20 = param_2;
  this_00 = (USkeletalMeshComponent *)GetComponentInternal(this,param_1);
  if (this_00 == (USkeletalMeshComponent *)0x0) {
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
  }
  else {
    uVar10 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
    uVar11 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
    uVar12 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
    uVar13 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
    uVar14 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
    uVar15 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
    uVar16 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
    uVar17 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
    uVar18 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
    uVar19 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
    uVar20 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
    uVar21 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
    uVar22 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
    uVar23 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
    uVar24 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._0_4_;
    uVar25 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._4_4_;
    uVar26 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
    uVar27 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
    uVar28 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
    uVar29 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
    uVar30 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
    uVar31 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
    uVar32 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
    uVar33 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
    pUVar2 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((*(int *)(this_00->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar2->_padding_)) {
      local_188[0] = (FName)(**(code **)(this_00->_padding_ + 0x18))
                                      (&this_00->_padding_,&local_res20);
      if (local_188[0] == (FName)0x0) {
        uVar10 = (undefined4)this_00->_padding_;
        uVar11 = *(undefined4 *)((longlong)&this_00->_padding_ + 4);
        uVar12 = (undefined4)this_00->_padding_;
        uVar13 = *(undefined4 *)((longlong)&this_00->_padding_ + 4);
        uVar14 = (undefined4)this_00->_padding_;
        uVar15 = *(undefined4 *)((longlong)&this_00->_padding_ + 4);
        uVar16 = (undefined4)this_00->_padding_;
        uVar17 = *(undefined4 *)((longlong)&this_00->_padding_ + 4);
        uVar18 = (undefined4)this_00->_padding_;
        uVar19 = *(undefined4 *)((longlong)&this_00->_padding_ + 4);
        uVar20 = (undefined4)this_00->_padding_;
        uVar21 = *(undefined4 *)((longlong)&this_00->_padding_ + 4);
        uVar22 = (undefined4)this_00->_padding_;
        uVar23 = *(undefined4 *)((longlong)&this_00->_padding_ + 4);
        uVar24 = (undefined4)this_00->_padding_;
        uVar25 = *(undefined4 *)((longlong)&this_00->_padding_ + 4);
        uVar26 = (undefined4)this_00->_padding_;
        uVar27 = *(undefined4 *)((longlong)&this_00->_padding_ + 4);
        uVar28 = (undefined4)this_00->_padding_;
        uVar29 = *(undefined4 *)((longlong)&this_00->_padding_ + 4);
        uVar30 = (undefined4)this_00->_padding_;
        uVar31 = *(undefined4 *)((longlong)&this_00->_padding_ + 4);
        uVar32 = (undefined4)this_00->_padding_;
        uVar33 = *(undefined4 *)((longlong)&this_00->_padding_ + 4);
      }
      else {
        local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_188;
        local_178.Data.ArrayNum = 1;
        local_168._12_4_ = local_178.Data.ArrayMax;
        local_168.ArrayNum = 1;
        local_168.DataPtr = (FPhysicsObject **)local_178.Data.AllocatorInstance.Data;
        pFVar8 = PhysicsObjectPhysicsCoreInterface::GetScene(&local_168);
        FScopedSceneLock_Chaos::FScopedSceneLock_Chaos(&local_158,pFVar8,Read);
        FVar9 = (FName)Chaos::FReadPhysicsObjectInterface<0>::GetRootObject
                                 (local_140,(FPhysicsObject *)local_188[0]);
        if (FVar9 == (FName)0x0) {
          FVar9 = local_188[0];
        }
        pTVar3 = Chaos::FReadPhysicsObjectInterface<0>::GetTransform
                           (local_140,&local_f8,(FPhysicsObject *)FVar9);
        uVar30 = *(undefined4 *)(pTVar3->Scale3D).ZW.m128d_f64;
        uVar31 = *(undefined4 *)((longlong)(pTVar3->Scale3D).ZW.m128d_f64 + 4);
        uVar32 = *(undefined4 *)((pTVar3->Scale3D).ZW.m128d_f64 + 1);
        uVar33 = *(undefined4 *)((longlong)(pTVar3->Scale3D).ZW.m128d_f64 + 0xc);
        uVar26 = *(undefined4 *)(pTVar3->Scale3D).XY.m128d_f64;
        uVar27 = *(undefined4 *)((longlong)(pTVar3->Scale3D).XY.m128d_f64 + 4);
        uVar28 = *(undefined4 *)((pTVar3->Scale3D).XY.m128d_f64 + 1);
        uVar29 = *(undefined4 *)((longlong)(pTVar3->Scale3D).XY.m128d_f64 + 0xc);
        uVar22 = *(undefined4 *)(pTVar3->Translation).ZW.m128d_f64;
        uVar23 = *(undefined4 *)((longlong)(pTVar3->Translation).ZW.m128d_f64 + 4);
        uVar24 = *(undefined4 *)((pTVar3->Translation).ZW.m128d_f64 + 1);
        uVar25 = *(undefined4 *)((longlong)(pTVar3->Translation).ZW.m128d_f64 + 0xc);
        uVar18 = *(undefined4 *)(pTVar3->Translation).XY.m128d_f64;
        uVar19 = *(undefined4 *)((longlong)(pTVar3->Translation).XY.m128d_f64 + 4);
        uVar20 = *(undefined4 *)((pTVar3->Translation).XY.m128d_f64 + 1);
        uVar21 = *(undefined4 *)((longlong)(pTVar3->Translation).XY.m128d_f64 + 0xc);
        uVar14 = *(undefined4 *)(pTVar3->Rotation).ZW.m128d_f64;
        uVar15 = *(undefined4 *)((longlong)(pTVar3->Rotation).ZW.m128d_f64 + 4);
        uVar16 = *(undefined4 *)((pTVar3->Rotation).ZW.m128d_f64 + 1);
        uVar17 = *(undefined4 *)((longlong)(pTVar3->Rotation).ZW.m128d_f64 + 0xc);
        uVar10 = *(undefined4 *)(pTVar3->Rotation).XY.m128d_f64;
        uVar11 = *(undefined4 *)((longlong)(pTVar3->Rotation).XY.m128d_f64 + 4);
        uVar12 = *(undefined4 *)((pTVar3->Rotation).XY.m128d_f64 + 1);
        uVar13 = *(undefined4 *)((longlong)(pTVar3->Rotation).XY.m128d_f64 + 0xc);
        FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(&local_158);
      }
    }
    else {
      iVar1 = GetBoneIndexHelper(local_res20,this_00,(int *)0x0);
      if (iVar1 == -1) {
        ::FName::FName(local_188,"PIE");
        this_01 = FMessageLog::FMessageLog((FMessageLog *)&local_f8,local_188);
        if (this == (UPhysicsConstraintComponent *)0x0) {
          ::FString::FString(&local_178,L"None");
        }
        else {
          UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_178,(UObject *)0x0);
        }
        pFVar4 = FText::FromString(&local_118,&local_178);
        pFVar5 = FText::FromName(&local_108,&local_res20);
        pFVar6 = FText::AsLocalizable_Advanced_LocText
                           ((FText *)&local_168,L"ConstraintComponent",L"BadBoneNameToConstraint",
                            L"Couldn\'t find bone {0} for ConstraintComponent {1}.");
        pFVar7 = FTextFormat::FTextFormat((FTextFormat *)&local_158,pFVar6,Default);
        pFVar4 = FText::Format<FText,FText>(&local_128,pFVar7,pFVar5,pFVar4);
        FMessageLog::Warning(this_01,&local_138,pFVar4);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_138.SharedReferenceCount.ReferenceController);
        if (local_128.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_128.TextData.Reference + 0x10))();
        }
        if (local_168.DataPtr != (FPhysicsObject **)0x0) {
          (**(code **)&((*local_168.DataPtr)->BodyName).Number)();
        }
        if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_178.Data.AllocatorInstance.Data);
        }
        FMessageLog::~FMessageLog((FMessageLog *)&local_f8);
      }
      else {
        pTVar3 = USkinnedMeshComponent::GetBoneTransform
                           ((USkinnedMeshComponent *)this_00,&local_f8,iVar1);
        uVar10 = *(undefined4 *)(pTVar3->Rotation).XY.m128d_f64;
        uVar11 = *(undefined4 *)((longlong)(pTVar3->Rotation).XY.m128d_f64 + 4);
        uVar12 = *(undefined4 *)((pTVar3->Rotation).XY.m128d_f64 + 1);
        uVar13 = *(undefined4 *)((longlong)(pTVar3->Rotation).XY.m128d_f64 + 0xc);
        uVar14 = *(undefined4 *)(pTVar3->Rotation).ZW.m128d_f64;
        uVar15 = *(undefined4 *)((longlong)(pTVar3->Rotation).ZW.m128d_f64 + 4);
        uVar16 = *(undefined4 *)((pTVar3->Rotation).ZW.m128d_f64 + 1);
        uVar17 = *(undefined4 *)((longlong)(pTVar3->Rotation).ZW.m128d_f64 + 0xc);
        uVar18 = *(undefined4 *)(pTVar3->Translation).XY.m128d_f64;
        uVar19 = *(undefined4 *)((longlong)(pTVar3->Translation).XY.m128d_f64 + 4);
        uVar20 = *(undefined4 *)((pTVar3->Translation).XY.m128d_f64 + 1);
        uVar21 = *(undefined4 *)((longlong)(pTVar3->Translation).XY.m128d_f64 + 0xc);
        uVar22 = *(undefined4 *)(pTVar3->Translation).ZW.m128d_f64;
        uVar23 = *(undefined4 *)((longlong)(pTVar3->Translation).ZW.m128d_f64 + 4);
        uVar24 = *(undefined4 *)((pTVar3->Translation).ZW.m128d_f64 + 1);
        uVar25 = *(undefined4 *)((longlong)(pTVar3->Translation).ZW.m128d_f64 + 0xc);
        uVar26 = *(undefined4 *)(pTVar3->Scale3D).XY.m128d_f64;
        uVar27 = *(undefined4 *)((longlong)(pTVar3->Scale3D).XY.m128d_f64 + 4);
        uVar28 = *(undefined4 *)((pTVar3->Scale3D).XY.m128d_f64 + 1);
        uVar29 = *(undefined4 *)((longlong)(pTVar3->Scale3D).XY.m128d_f64 + 0xc);
        uVar30 = *(undefined4 *)(pTVar3->Scale3D).ZW.m128d_f64;
        uVar31 = *(undefined4 *)((longlong)(pTVar3->Scale3D).ZW.m128d_f64 + 4);
        uVar32 = *(undefined4 *)((pTVar3->Scale3D).ZW.m128d_f64 + 1);
        uVar33 = *(undefined4 *)((longlong)(pTVar3->Scale3D).ZW.m128d_f64 + 0xc);
      }
    }
    *(undefined4 *)(__return_storage_ptr__->Rotation).XY.m128d_f64 = uVar10;
    *(undefined4 *)((longlong)(__return_storage_ptr__->Rotation).XY.m128d_f64 + 4) = uVar11;
    *(undefined4 *)((__return_storage_ptr__->Rotation).XY.m128d_f64 + 1) = uVar12;
    *(undefined4 *)((longlong)(__return_storage_ptr__->Rotation).XY.m128d_f64 + 0xc) = uVar13;
    *(undefined4 *)(__return_storage_ptr__->Rotation).ZW.m128d_f64 = uVar14;
    *(undefined4 *)((longlong)(__return_storage_ptr__->Rotation).ZW.m128d_f64 + 4) = uVar15;
    *(undefined4 *)((__return_storage_ptr__->Rotation).ZW.m128d_f64 + 1) = uVar16;
    *(undefined4 *)((longlong)(__return_storage_ptr__->Rotation).ZW.m128d_f64 + 0xc) = uVar17;
    *(undefined4 *)(__return_storage_ptr__->Translation).XY.m128d_f64 = uVar18;
    *(undefined4 *)((longlong)(__return_storage_ptr__->Translation).XY.m128d_f64 + 4) = uVar19;
    *(undefined4 *)((__return_storage_ptr__->Translation).XY.m128d_f64 + 1) = uVar20;
    *(undefined4 *)((longlong)(__return_storage_ptr__->Translation).XY.m128d_f64 + 0xc) = uVar21;
    *(undefined4 *)(__return_storage_ptr__->Translation).ZW.m128d_f64 = uVar22;
    *(undefined4 *)((longlong)(__return_storage_ptr__->Translation).ZW.m128d_f64 + 4) = uVar23;
    *(undefined4 *)((__return_storage_ptr__->Translation).ZW.m128d_f64 + 1) = uVar24;
    *(undefined4 *)((longlong)(__return_storage_ptr__->Translation).ZW.m128d_f64 + 0xc) = uVar25;
    *(undefined4 *)(__return_storage_ptr__->Scale3D).XY.m128d_f64 = uVar26;
    *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).XY.m128d_f64 + 4) = uVar27;
    *(undefined4 *)((__return_storage_ptr__->Scale3D).XY.m128d_f64 + 1) = uVar28;
    *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).XY.m128d_f64 + 0xc) = uVar29;
    *(undefined4 *)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = uVar30;
    *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 4) = uVar31;
    *(undefined4 *)((__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 1) = uVar32;
    *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 0xc) = uVar33;
  }
  return __return_storage_ptr__;
}

// GetComponentInternal @ 148307f30

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UPrimitiveComponent * __thiscall
UPhysicsConstraintComponent::GetComponentInternal(UPhysicsConstraintComponent *this,Type param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  FName FVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  UPrimitiveComponent *pUVar10;
  UClass *pUVar11;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *pTVar12;
  AActor *pAVar13;
  int iVar14;
  FName FVar15;
  int iVar16;
  uint uVar17;
  undefined1 *puVar18;
  uint uVar19;
  uint *puVar20;
  uint uVar21;
  uint uVar22;
  undefined1 local_res10 [8];
  int local_res18;
  undefined8 local_res20;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  if (param_1 == Frame1) {
    bVar7 = FWeakObjectPtr::IsValid(&(this->OverrideComponent1).WeakPtr);
    if (bVar7) {
      pUVar10 = (UPrimitiveComponent *)FWeakObjectPtr::Get(&(this->OverrideComponent1).WeakPtr);
      return pUVar10;
    }
    FVar15 = (this->ComponentName1).ComponentName;
    pAVar13 = (this->ConstraintActor1).field0_0x0.DebugPtr;
  }
  else {
    bVar7 = FWeakObjectPtr::IsValid(&(this->OverrideComponent2).WeakPtr);
    if (bVar7) {
      pUVar10 = (UPrimitiveComponent *)FWeakObjectPtr::Get(&(this->OverrideComponent2).WeakPtr);
      return pUVar10;
    }
    FVar15 = (this->ComponentName2).ComponentName;
    pAVar13 = (this->ConstraintActor2).field0_0x0.DebugPtr;
  }
  if ((pAVar13 != (AActor *)0x0) ||
     ((local_res20 = 0, FVar15 != (FName)0x0 &&
      (pAVar13 = (AActor *)this->_padding_, pAVar13 != (AActor *)0x0)))) {
    if (FVar15 != (FName)0x0) {
      pTVar12 = ObjectPtrDecay<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>,UE::Core::Private::TObjectPtrDecayTypeOf<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>_>,TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>_>
                          (&pAVar13->OwnedComponents);
      uVar21 = *(uint *)&(pTVar12->Elements).field_0x28;
      uVar9 = 0;
      uVar8 = 1;
      puVar1 = &(pTVar12->Elements).field_0x10;
      uVar19 = 0;
      iVar14 = 0;
      uVar17 = uVar9;
      if (uVar21 != 0) {
        puVar20 = *(uint **)&(pTVar12->Elements).field_0x20;
        if (puVar20 == (uint *)0x0) {
          puVar20 = (uint *)puVar1;
        }
        uVar9 = *puVar20;
        uVar17 = 0;
        uVar19 = 0;
        while (uVar9 == 0) {
          uVar17 = uVar17 + 1;
          uVar19 = uVar19 + 0x20;
          uVar9 = uVar21;
          if ((int)((uVar21 - 1) + ((int)(uVar21 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar17)
          goto LAB_1483080dd;
          uVar9 = puVar20[(int)uVar17];
        }
        uVar8 = ~(uVar9 - 1) & uVar9;
        uVar2 = (ulonglong)uVar8 * 2 + 1;
        lVar5 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar5 == 0; lVar5 = lVar5 + -1) {
          }
        }
        local_res18 = (int)lVar5;
        uVar9 = (uVar19 - 1) + local_res18;
        if ((int)uVar21 < (int)uVar9) {
          uVar9 = uVar21;
        }
LAB_1483080dd:
        iVar14 = *(int *)&(pTVar12->Elements).field_0x28;
      }
      uVar21 = *(uint *)&(pTVar12->Elements).field_0x28;
      uVar22 = uVar21 & 0xffffffe0;
      TStack_60._padding_ = CONCAT44(uVar8,uVar17);
      TStack_60.CurrentBitIndex = uVar9;
      TStack_60.UnvisitedBitMask = 0xffffffff;
      iVar16 = (int)uVar21 >> 5;
      TStack_60._28_4_ = uVar9;
      TStack_60.BaseBitIndex = uVar19;
      uStack_40 = CONCAT44(uStack_6c,
                           *(int *)&(pTVar12->Elements).field_0x8 -
                           *(int *)&(pTVar12->Elements).field_0x34);
      TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      if ((((int)uVar21 < 0) || (iVar14 < (int)uVar21)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        pUVar10 = (UPrimitiveComponent *)(*pcVar6)();
        return pUVar10;
      }
      uVar9 = *(uint *)&(pTVar12->Elements).field_0x28;
      if (uVar21 != uVar9) {
        puVar3 = *(undefined1 **)&(pTVar12->Elements).field_0x20;
        puVar18 = puVar1;
        if (puVar3 != (undefined1 *)0x0) {
          puVar18 = puVar3;
        }
        uVar21 = -1 << ((byte)uVar21 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar16 * 4);
        while (uVar21 == 0) {
          iVar16 = iVar16 + 1;
          uVar22 = uVar22 + 0x20;
          uVar21 = uVar9;
          if ((int)(((int)(uVar9 - 1) >> 0x1f & 0x1fU) + (uVar9 - 1)) >> 5 < iVar16)
          goto LAB_1483081f0;
          uVar21 = *(uint *)(puVar18 + (longlong)iVar16 * 4);
        }
        uVar2 = (ulonglong)(~(uVar21 - 1) & uVar21) * 2 + 1;
        lVar5 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar5 == 0; lVar5 = lVar5 + -1) {
          }
        }
        uVar21 = (uVar22 - 1) + (int)lVar5;
        if ((int)uVar9 < (int)uVar21) {
          uVar21 = uVar9;
        }
      }
LAB_1483081f0:
      while( true ) {
        if (*(int *)&(pTVar12->Elements).field_0x8 - *(int *)&(pTVar12->Elements).field_0x34 !=
            (int)uStack_40) {
          `TSparseArray<TSparseSetElement<UActorComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
        }
        if ((TStack_60.CurrentBitIndex == uVar21) &&
           (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) {
          return (UPrimitiveComponent *)0x0;
        }
        pUVar10 = *(UPrimitiveComponent **)
                   (*(longlong *)&pTVar12->Elements + (longlong)TStack_60.CurrentBitIndex * 0x10);
        FVar4.ComparisonIndex.Value = *(uint *)&pUVar10->field_0x18;
        FVar4.Number = *(uint *)&pUVar10->field_0x1c;
        if (FVar4 == FVar15) break;
        TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
      }
      pUVar11 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar14 = (int)pUVar11->_padding_;
      if (((*(int *)(*(longlong *)&pUVar10->field_0x10 + 0x38) < iVar14) ||
          ((longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)&pUVar10->field_0x10 + 0x30) + (longlong)iVar14 * 8) !=
           &pUVar11->_padding_)) || (pUVar10 == (UPrimitiveComponent *)0x0)) {
        pUVar11 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
        iVar14 = (int)pUVar11->_padding_;
        if (*(int *)(*(longlong *)&pUVar10->field_0x10 + 0x38) < iVar14) {
          return (UPrimitiveComponent *)0x0;
        }
        if ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar10->field_0x10 + 0x30) + (longlong)iVar14 * 8) !=
            &pUVar11->_padding_) {
          return (UPrimitiveComponent *)0x0;
        }
        return pUVar10;
      }
      if (*(longlong *)&pUVar10->field_0x258 == 0) {
        return (UPrimitiveComponent *)0x0;
      }
      pUVar10 = *(UPrimitiveComponent **)(*(longlong *)&pUVar10->field_0x258 + 0x1b8);
      if (pUVar10 == (UPrimitiveComponent *)0x0) {
        return (UPrimitiveComponent *)0x0;
      }
      pUVar11 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
      iVar14 = (int)pUVar11->_padding_;
      if (*(int *)(*(longlong *)&pUVar10->field_0x10 + 0x38) < iVar14) {
        return (UPrimitiveComponent *)0x0;
      }
      if ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar10->field_0x10 + 0x30) + (longlong)iVar14 * 8) !=
          &pUVar11->_padding_) {
        return (UPrimitiveComponent *)0x0;
      }
      return pUVar10;
    }
    pUVar10 = (UPrimitiveComponent *)(pAVar13->RootComponent).field0_0x0.DebugPtr;
    if (pUVar10 != (UPrimitiveComponent *)0x0) {
      pUVar11 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
      iVar14 = (int)pUVar11->_padding_;
      if ((iVar14 <= *(int *)(*(longlong *)&pUVar10->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar10->field_0x10 + 0x30) + (longlong)iVar14 * 8) ==
          &pUVar11->_padding_)) {
        return pUVar10;
      }
    }
  }
  return (UPrimitiveComponent *)0x0;
}

// GetConstrainedComponents @ 1483083f0

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
UPhysicsConstraintComponent::GetConstrainedComponents
          (UPhysicsConstraintComponent *this,UPrimitiveComponent **param_1,FName *param_2,
          UPrimitiveComponent **param_3,FName *param_4)

{
  UPrimitiveComponent *pUVar1;
  
  pUVar1 = GetComponentInternal(this,Frame1);
  *param_1 = pUVar1;
  *param_2 = (this->ConstraintInstance).ConstraintBone1;
  pUVar1 = GetComponentInternal(this,Frame2);
  *param_3 = pUVar1;
  *param_4 = (this->ConstraintInstance).ConstraintBone2;
  return;
}

// GetConstraint @ 148308460

/* WARNING: Removing unreachable block (ram,0x0001483084d9) */
/* WARNING: Removing unreachable block (ram,0x0001483084e6) */
/* WARNING: Removing unreachable block (ram,0x0001483084ea) */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FConstraintInstanceAccessor * __thiscall
UPhysicsConstraintComponent::GetConstraint
          (UPhysicsConstraintComponent *this,FConstraintInstanceAccessor *__return_storage_ptr__)

{
  FWeakObjectPtr local_res8;
  UPhysicsConstraintComponent *local_res10;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (this != (UPhysicsConstraintComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this != (UPhysicsConstraintComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  (__return_storage_ptr__->Owner).WeakPtr = local_res8;
  __return_storage_ptr__->Index = 0;
  return __return_storage_ptr__;
}

// GetConstraintForce @ 148308510

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
UPhysicsConstraintComponent::GetConstraintForce
          (UPhysicsConstraintComponent *this,TVector<double> *param_1,TVector<double> *param_2)

{
  FConstraintInstance::GetConstraintForce(&this->ConstraintInstance,param_1,param_2);
  return;
}

// GetConstraintScale @ 148308530

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

float __thiscall UPhysicsConstraintComponent::GetConstraintScale(UPhysicsConstraintComponent *this)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  
  dVar1 = (double)CONCAT44(*(uint *)((longlong)&this->_padding_ + 4) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           (uint)this->_padding_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  dVar2 = (double)CONCAT44(*(uint *)((longlong)&this->_padding_ + 4) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           (uint)this->_padding_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  uVar3 = (uint)this->_padding_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar4 = *(uint *)((longlong)&this->_padding_ + 4) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (dVar2 <= dVar1) {
    dVar1 = dVar2;
  }
  if ((double)CONCAT44(uVar4,uVar3) <= dVar1) {
    dVar1 = (double)CONCAT44(uVar4,uVar3);
  }
  return (float)dVar1;
}

// GetCurrentSwing1 @ 1483087e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

float __thiscall UPhysicsConstraintComponent::GetCurrentSwing1(UPhysicsConstraintComponent *this)

{
  float fVar1;
  
  fVar1 = FConstraintInstance::GetCurrentSwing1(&this->ConstraintInstance);
  return fVar1 * __real_42652ee0;
}

// GetCurrentSwing2 @ 148308810

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

float __thiscall UPhysicsConstraintComponent::GetCurrentSwing2(UPhysicsConstraintComponent *this)

{
  float fVar1;
  
  fVar1 = FConstraintInstance::GetCurrentSwing2(&this->ConstraintInstance);
  return fVar1 * __real_42652ee0;
}

// GetCurrentTwist @ 148308840

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

float __thiscall UPhysicsConstraintComponent::GetCurrentTwist(UPhysicsConstraintComponent *this)

{
  float fVar1;
  
  fVar1 = FConstraintInstance::GetCurrentTwist(&this->ConstraintInstance);
  return fVar1 * __real_42652ee0;
}

// GetPhysicsObject @ 14830b960

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FPhysicsObject * __thiscall
UPhysicsConstraintComponent::GetPhysicsObject(UPhysicsConstraintComponent *this,Type param_1)

{
  UPrimitiveComponent *pUVar1;
  longlong lVar2;
  FPhysicsObject *pFVar3;
  undefined8 local_res18 [2];
  
  pUVar1 = GetComponentInternal(this,param_1);
  if (pUVar1 == (UPrimitiveComponent *)0x0) {
    return (FPhysicsObject *)0x0;
  }
  lVar2 = 800;
  if (param_1 != Frame1) {
    lVar2 = 0x328;
  }
  local_res18[0] = *(undefined8 *)((longlong)&this->_padding_ + lVar2);
  pFVar3 = (FPhysicsObject *)
           (**(code **)(*(longlong *)&pUVar1->field_0x260 + 0x18))(&pUVar1->field_0x260,local_res18)
  ;
  return pFVar3;
}

// GetPrivateStaticClass @ 14830c590

UClass * __cdecl UPhysicsConstraintComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPhysicsConstraintComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PhysicsConstraintComponent",
               &Z_Registration_Info_UClass_UPhysicsConstraintComponent.InnerSingleton,
               StaticRegisterNativesUPhysicsConstraintComponent,0x560,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UPhysicsConstraintComponent>,
               InternalVTableHelperCtorCaller<UPhysicsConstraintComponent>,local_res8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPhysicsConstraintComponent.InnerSingleton;
}

// InitComponentConstraint @ 14830efd0

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
UPhysicsConstraintComponent::InitComponentConstraint(UPhysicsConstraintComponent *this)

{
  bool bVar1;
  UPrimitiveComponent *pUVar2;
  FBodyInstance *pFVar3;
  FBodyInstance *this_00;
  FSingleParticlePhysicsProxy *pFVar4;
  FBodyInstance *pFVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  double dVar8;
  double dVar9;
  uint uVar10;
  uint uVar11;
  FName local_res8;
  FName local_res10;
  UPhysicsConstraintComponent *local_res18;
  uint uStack_9c;
  undefined1 local_88 [8];
  FDelegateAllocation local_80;
  TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> local_70;
  FDestructionSentinel local_58;
  FDelegateAllocation *local_40;
  
  UpdateConstraintFrames(this);
  pFVar5 = (FBodyInstance *)0x0;
  pUVar2 = GetComponentInternal(this,Frame1);
  pFVar3 = pFVar5;
  if (pUVar2 != (UPrimitiveComponent *)0x0) {
    pFVar3 = (FBodyInstance *)
             (**(code **)(*(longlong *)pUVar2 + 0x818))
                       (pUVar2,(this->ConstraintInstance).ConstraintBone1,1,0xffffffff);
  }
  pUVar2 = GetComponentInternal(this,Frame2);
  this_00 = pFVar5;
  if (pUVar2 != (UPrimitiveComponent *)0x0) {
    this_00 = (FBodyInstance *)
              (**(code **)(*(longlong *)pUVar2 + 0x818))
                        (pUVar2,(this->ConstraintInstance).ConstraintBone2,1,0xffffffff);
  }
  if ((pFVar3 == (FBodyInstance *)0x0) ||
     (bVar1 = FBodyInstance::IsValidBodyInstance(pFVar3), !bVar1)) {
    pUVar2 = GetComponentInternal(this,Frame1);
    pFVar3 = pFVar5;
    if (pUVar2 != (UPrimitiveComponent *)0x0) {
      local_res8 = (this->ConstraintInstance).ConstraintBone1;
      pFVar3 = (FBodyInstance *)
               (**(code **)(*(longlong *)&pUVar2->field_0x260 + 0x18))
                         (&pUVar2->field_0x260,&local_res8);
    }
  }
  else {
    pFVar4 = FBodyInstance::GetPhysicsActor(pFVar3);
    pFVar3 = (FBodyInstance *)(pFVar4->Reference).Ptr;
  }
  if ((this_00 == (FBodyInstance *)0x0) ||
     (bVar1 = FBodyInstance::IsValidBodyInstance(this_00), !bVar1)) {
    pUVar2 = GetComponentInternal(this,Frame2);
    if (pUVar2 != (UPrimitiveComponent *)0x0) {
      local_res10 = (this->ConstraintInstance).ConstraintBone2;
      pFVar5 = (FBodyInstance *)
               (**(code **)(*(longlong *)&pUVar2->field_0x260 + 0x18))
                         (&pUVar2->field_0x260,&local_res10);
    }
  }
  else {
    pFVar4 = FBodyInstance::GetPhysicsActor(this_00);
    pFVar5 = (FBodyInstance *)(pFVar4->Reference).Ptr;
  }
  if ((pFVar3 != (FBodyInstance *)0x0) || (pFVar5 != (FBodyInstance *)0x0)) {
    local_70._16_8_ = 0;
    local_70._0_8_ = 0;
    local_70._8_8_ = 0;
    local_88 = (undefined1  [8])0x0;
    local_80.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_80.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_88,
               (FWriteAccessScope *)&local_58);
    local_40 = &local_80;
    puVar6 = UE::Core::Private::DelegateAllocate(0x30,&local_80);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &___7__TCommonDelegateInstanceState___A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[2] = uVar7;
      *puVar6 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUPhysicsConstraintComponent____A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UPhysicsConstraintComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar6[3] = 0;
      local_res18 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UPhysicsConstraintComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&local_res18);
      puVar6[4] = OnConstraintBrokenWrapper;
      puVar6[5] = (ulonglong)uStack_9c << 0x20;
    }
    if (local_58.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
    }
    uVar10 = (uint)this->_padding_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar11 = *(uint *)((longlong)&this->_padding_ + 4) &
             __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    dVar8 = (double)CONCAT44(*(uint *)((longlong)&this->_padding_ + 4) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             (uint)this->_padding_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    dVar9 = (double)CONCAT44(*(uint *)((longlong)&this->_padding_ + 4) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             (uint)this->_padding_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    if (dVar9 <= dVar8) {
      dVar8 = dVar9;
    }
    if ((double)CONCAT44(uVar11,uVar10) <= dVar8) {
      dVar8 = (double)CONCAT44(uVar11,uVar10);
    }
    FConstraintInstance::InitConstraint
              (&this->ConstraintInstance,(FPhysicsObject *)pFVar3,(FPhysicsObject *)pFVar5,
               (float)dVar8,(UObject *)this,
               (TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> *)local_88,&local_70);
  }
  this->bIsBrokenLocal = false;
  return;
}

// InitializeComponent @ 1483102d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPhysicsConstraintComponent::InitializeComponent(UPhysicsConstraintComponent *this)

{
  UActorComponent::InitializeComponent((UActorComponent *)this);
  InitComponentConstraint(this);
  return;
}

// IsBroken @ 1483109c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UPhysicsConstraintComponent::IsBroken(UPhysicsConstraintComponent *this)

{
  bool bVar1;
  
  if (this->bIsBrokenLocal == false) {
    bVar1 = FConstraintInstance::IsBroken(&this->ConstraintInstance);
    if (!bVar1) {
      return false;
    }
  }
  return true;
}

// IsProjectionEnabled @ 148310ca0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UPhysicsConstraintComponent::IsProjectionEnabled(UPhysicsConstraintComponent *this)

{
  return (this->ConstraintInstance).ProfileInstance.bEnableProjection;
}

// OnConstraintBrokenHandler @ 148312f50

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
UPhysicsConstraintComponent::OnConstraintBrokenHandler
          (UPhysicsConstraintComponent *this,FConstraintInstance *param_1)

{
  FConstraintBrokenSignature_DelegateWrapper
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnConstraintBroken,
             (int)param_1->_padding_);
  return;
}

// OnConstraintBrokenWrapper @ 148312f70

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
UPhysicsConstraintComponent::OnConstraintBrokenWrapper
          (UPhysicsConstraintComponent *this,int param_1)

{
  FConstraintBrokenSignature_DelegateWrapper
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnConstraintBroken,
             param_1);
  return;
}

// OnPlasticDeformationHandler @ 148313480

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
UPhysicsConstraintComponent::OnPlasticDeformationHandler
          (UPhysicsConstraintComponent *this,FConstraintInstance *param_1)

{
  FPlasticDeformationEventSignature_DelegateWrapper
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnPlasticDeformation,
             (int)param_1->_padding_);
  return;
}

// OnPlasticDeformationWrapper @ 1483134a0

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
UPhysicsConstraintComponent::OnPlasticDeformationWrapper
          (UPhysicsConstraintComponent *this,int param_1)

{
  FPlasticDeformationEventSignature_DelegateWrapper
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnPlasticDeformation,
             param_1);
  return;
}

// OnUnregister @ 1483160f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPhysicsConstraintComponent::OnUnregister(UPhysicsConstraintComponent *this)

{
  USceneComponent::OnUnregister((USceneComponent *)this);
  FConstraintInstance::TermConstraint(&this->ConstraintInstance);
  return;
}

// PostLoad @ 1483184c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPhysicsConstraintComponent::PostLoad(UPhysicsConstraintComponent *this)

{
  UPhysicsConstraintTemplate *pUVar1;
  FPackageFileVersion FVar2;
  UPrimitiveComponent *pUVar3;
  UPrimitiveComponent *pUVar4;
  
  UActorComponent::PostLoad((UActorComponent *)this);
  FVar2 = UObjectBaseUtility::GetLinkerUEVersion((UObjectBaseUtility *)this);
  if ((*(int *)FVar2 < 0xf6) &&
     (pUVar1 = (this->ConstraintSetup_DEPRECATED).field0_0x0.DebugPtr,
     pUVar1 != (UPhysicsConstraintTemplate *)0x0)) {
    FConstraintInstance::CopyConstraintParamsFrom
              (&this->ConstraintInstance,&pUVar1->DefaultInstance);
    (this->ConstraintSetup_DEPRECATED).field0_0x0.DebugPtr = (UPhysicsConstraintTemplate *)0x0;
  }
  FVar2 = UObjectBaseUtility::GetLinkerUEVersion((UObjectBaseUtility *)this);
  if (*(int *)FVar2 < 0x15d) {
    pUVar3 = GetComponentInternal(this,Frame1);
    pUVar4 = GetComponentInternal(this,Frame2);
    if ((pUVar3 != (UPrimitiveComponent *)0x0) && (((pUVar3->BodyInstance)._padding_ & 1) != 0)) {
      (**(code **)(*(longlong *)pUVar3 + 0x998))(pUVar3,(this->ConstraintInstance).ConstraintBone1);
    }
    if ((pUVar4 != (UPrimitiveComponent *)0x0) && (((pUVar4->BodyInstance)._padding_ & 1) != 0)) {
      (**(code **)(*(longlong *)pUVar4 + 0x998))(pUVar4,(this->ConstraintInstance).ConstraintBone2);
    }
  }
  return;
}

// ReInitConstraintAndApplyPhysicsState @ 14831aa10

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
UPhysicsConstraintComponent::ReInitConstraintAndApplyPhysicsState
          (UPhysicsConstraintComponent *this,UPrimitiveComponent *param_1,
          EComponentPhysicsStateChange param_2)

{
  return;
}

// SetAngularBreakable @ 148321350

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
UPhysicsConstraintComponent::SetAngularBreakable
          (UPhysicsConstraintComponent *this,bool param_1,float param_2)

{
  undefined1 *puVar1;
  
  (this->ConstraintInstance).ProfileInstance.bAngularBreakable = '\0';
  puVar1 = &(this->ConstraintInstance).ProfileInstance.field_0x80;
  *puVar1 = *puVar1 | param_1 << 6;
  (this->ConstraintInstance).ProfileInstance.AngularBreakThreshold = param_2;
  FConstraintInstance::UpdateBreakable(&this->ConstraintInstance);
  return;
}

// SetAngularDriveAccelerationMode @ 1483213a0

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
UPhysicsConstraintComponent::SetAngularDriveAccelerationMode
          (UPhysicsConstraintComponent *this,bool param_1)

{
  FConstraintInstance::SetAngularDriveAccelerationMode(&this->ConstraintInstance,param_1);
  return;
}

// SetAngularDriveMode @ 1483213c0

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
UPhysicsConstraintComponent::SetAngularDriveMode(UPhysicsConstraintComponent *this,Type param_1)

{
  FConstraintInstance::SetAngularDriveMode(&this->ConstraintInstance,param_1);
  return;
}

// SetAngularDriveParams @ 1483213e0

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
UPhysicsConstraintComponent::SetAngularDriveParams
          (UPhysicsConstraintComponent *this,float param_1,float param_2,float param_3)

{
  FConstraintInstance::SetAngularDriveParams(&this->ConstraintInstance,param_1,param_2,param_3);
  return;
}

// SetAngularOrientationTarget @ 148321400

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
UPhysicsConstraintComponent::SetAngularOrientationTarget
          (UPhysicsConstraintComponent *this,TRotator<double> *param_1)

{
  TQuat<double> *pTVar1;
  TQuat<double> local_28;
  
  pTVar1 = UE::Math::TRotator<double>::Quaternion(param_1,&local_28);
  FConstraintInstance::SetAngularOrientationTarget(&this->ConstraintInstance,pTVar1);
  return;
}

// SetAngularPlasticity @ 148321440

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
UPhysicsConstraintComponent::SetAngularPlasticity
          (UPhysicsConstraintComponent *this,bool param_1,float param_2)

{
  undefined1 *puVar1;
  
  (this->ConstraintInstance).ProfileInstance.bAngularPlasticity = '\0';
  puVar1 = &(this->ConstraintInstance).ProfileInstance.field_0x80;
  *puVar1 = *puVar1 | param_1 << 7;
  (this->ConstraintInstance).ProfileInstance.AngularPlasticityThreshold = param_2;
  FConstraintInstance::UpdatePlasticity(&this->ConstraintInstance);
  return;
}

// SetAngularSwing1Limit @ 148321490

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
UPhysicsConstraintComponent::SetAngularSwing1Limit
          (UPhysicsConstraintComponent *this,EAngularConstraintMotion param_1,float param_2)

{
  (this->ConstraintInstance).ProfileInstance.ConeLimit.Swing1LimitDegrees = param_2;
  (this->ConstraintInstance).ProfileInstance.ConeLimit.Swing1Motion.Value = (uchar)param_1;
  FConstraintInstance::UpdateAngularLimit(&this->ConstraintInstance);
  return;
}

// SetAngularSwing2Limit @ 1483214b0

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
UPhysicsConstraintComponent::SetAngularSwing2Limit
          (UPhysicsConstraintComponent *this,EAngularConstraintMotion param_1,float param_2)

{
  (this->ConstraintInstance).ProfileInstance.ConeLimit.Swing2LimitDegrees = param_2;
  (this->ConstraintInstance).ProfileInstance.ConeLimit.Swing2Motion.Value = (uchar)param_1;
  FConstraintInstance::UpdateAngularLimit(&this->ConstraintInstance);
  return;
}

// SetAngularTwistLimit @ 1483214d0

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
UPhysicsConstraintComponent::SetAngularTwistLimit
          (UPhysicsConstraintComponent *this,EAngularConstraintMotion param_1,float param_2)

{
  (this->ConstraintInstance).ProfileInstance.TwistLimit.TwistLimitDegrees = param_2;
  (this->ConstraintInstance).ProfileInstance.TwistLimit.TwistMotion.Value = (uchar)param_1;
  FConstraintInstance::UpdateAngularLimit(&this->ConstraintInstance);
  return;
}

// SetAngularVelocityDriveSLERP @ 1483214f0

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
UPhysicsConstraintComponent::SetAngularVelocityDriveSLERP
          (UPhysicsConstraintComponent *this,bool param_1)

{
  FConstraintInstance::SetAngularVelocityDriveSLERP(&this->ConstraintInstance,param_1);
  return;
}

// SetAngularVelocityDriveTwistAndSwing @ 148321510

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
UPhysicsConstraintComponent::SetAngularVelocityDriveTwistAndSwing
          (UPhysicsConstraintComponent *this,bool param_1,bool param_2)

{
  FConstraintInstance::SetAngularVelocityDriveTwistAndSwing
            (&this->ConstraintInstance,param_1,param_2);
  return;
}

// SetAngularVelocityTarget @ 148321530

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
UPhysicsConstraintComponent::SetAngularVelocityTarget
          (UPhysicsConstraintComponent *this,TVector<double> *param_1)

{
  FConstraintInstance::SetAngularVelocityTarget(&this->ConstraintInstance,param_1);
  return;
}

// SetConstrainedComponents @ 148321620

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
UPhysicsConstraintComponent::SetConstrainedComponents
          (UPhysicsConstraintComponent *this,UPrimitiveComponent *param_1,FName param_2,
          UPrimitiveComponent *param_3,FName param_4)

{
  UPrimitiveComponent *local_res10;
  
  if (param_1 != (UPrimitiveComponent *)0x0) {
    (this->ComponentName1).ComponentName = *(FName *)&param_1->field_0x18;
    local_res10 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&(this->OverrideComponent1).WeakPtr,(FObjectPtr)&local_res10);
    (this->ConstraintInstance).ConstraintBone1 = param_2;
  }
  if (param_3 != (UPrimitiveComponent *)0x0) {
    (this->ComponentName2).ComponentName = *(FName *)&param_3->field_0x18;
    local_res10 = param_3;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_3);
    }
    FWeakObjectPtr::operator=(&(this->OverrideComponent2).WeakPtr,(FObjectPtr)&local_res10);
    (this->ConstraintInstance).ConstraintBone2 = param_4;
  }
  InitComponentConstraint(this);
  return;
}

// SetConstraintReferenceFrame @ 1483216e0

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
UPhysicsConstraintComponent::SetConstraintReferenceFrame
          (UPhysicsConstraintComponent *this,Type param_1,TTransform<double> *param_2)

{
  FConstraintInstance::SetRefFrame(&this->ConstraintInstance,param_1,param_2);
  return;
}

// SetConstraintReferenceOrientation @ 148321700

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
UPhysicsConstraintComponent::SetConstraintReferenceOrientation
          (UPhysicsConstraintComponent *this,Type param_1,TVector<double> *param_2,
          TVector<double> *param_3)

{
  FConstraintInstance::SetRefOrientation(&this->ConstraintInstance,param_1,param_2,param_3);
  return;
}

// SetConstraintReferencePosition @ 148321720

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
UPhysicsConstraintComponent::SetConstraintReferencePosition
          (UPhysicsConstraintComponent *this,Type param_1,TVector<double> *param_2)

{
  FConstraintInstance::SetRefPosition(&this->ConstraintInstance,param_1,param_2);
  return;
}

// SetContactTransferScale @ 148321740

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
UPhysicsConstraintComponent::SetContactTransferScale
          (UPhysicsConstraintComponent *this,float param_1)

{
  (this->ConstraintInstance).ProfileInstance.ContactTransferScale = param_1;
  FConstraintInstance::UpdateContactTransferScale(&this->ConstraintInstance);
  return;
}

// SetDisableCollision @ 148321760

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
UPhysicsConstraintComponent::SetDisableCollision(UPhysicsConstraintComponent *this,bool param_1)

{
  FConstraintInstance::SetDisableCollision(&this->ConstraintInstance,param_1);
  return;
}

// SetLinearBreakable @ 148321be0

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
UPhysicsConstraintComponent::SetLinearBreakable
          (UPhysicsConstraintComponent *this,bool param_1,float param_2)

{
  undefined1 *puVar1;
  
  (this->ConstraintInstance).ProfileInstance.bLinearBreakable = '\0';
  puVar1 = &(this->ConstraintInstance).ProfileInstance.field_0x81;
  *puVar1 = *puVar1 | param_1;
  (this->ConstraintInstance).ProfileInstance.LinearBreakThreshold = param_2;
  FConstraintInstance::UpdateBreakable(&this->ConstraintInstance);
  return;
}

// SetLinearDriveAccelerationMode @ 148321c30

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
UPhysicsConstraintComponent::SetLinearDriveAccelerationMode
          (UPhysicsConstraintComponent *this,bool param_1)

{
  FConstraintInstance::SetLinearDriveAccelerationMode(&this->ConstraintInstance,param_1);
  return;
}

// SetLinearDriveParams @ 148321c50

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
UPhysicsConstraintComponent::SetLinearDriveParams
          (UPhysicsConstraintComponent *this,float param_1,float param_2,float param_3)

{
  FConstraintInstance::SetLinearDriveParams(&this->ConstraintInstance,param_1,param_2,param_3);
  return;
}

// SetLinearPlasticity @ 148321c70

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
UPhysicsConstraintComponent::SetLinearPlasticity
          (UPhysicsConstraintComponent *this,bool param_1,float param_2,
          EConstraintPlasticityType param_3)

{
  undefined1 *puVar1;
  
  (this->ConstraintInstance).ProfileInstance.bLinearPlasticity = '\0';
  puVar1 = &(this->ConstraintInstance).ProfileInstance.field_0x81;
  *puVar1 = *puVar1 | param_1 * '\x02';
  (this->ConstraintInstance).ProfileInstance.LinearPlasticityThreshold = param_2;
  (this->ConstraintInstance).ProfileInstance.LinearPlasticityType.Value = (uchar)param_3;
  FConstraintInstance::UpdatePlasticity(&this->ConstraintInstance);
  return;
}

// SetLinearPositionDrive @ 148321ca0

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
UPhysicsConstraintComponent::SetLinearPositionDrive
          (UPhysicsConstraintComponent *this,bool param_1,bool param_2,bool param_3)

{
  FConstraintInstance::SetLinearPositionDrive(&this->ConstraintInstance,param_1,param_2,param_3);
  return;
}

// SetLinearPositionTarget @ 148321cc0

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
UPhysicsConstraintComponent::SetLinearPositionTarget
          (UPhysicsConstraintComponent *this,TVector<double> *param_1)

{
  FConstraintInstance::SetLinearPositionTarget(&this->ConstraintInstance,param_1);
  return;
}

// SetLinearVelocityDrive @ 148321d00

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
UPhysicsConstraintComponent::SetLinearVelocityDrive
          (UPhysicsConstraintComponent *this,bool param_1,bool param_2,bool param_3)

{
  FConstraintInstance::SetLinearVelocityDrive(&this->ConstraintInstance,param_1,param_2,param_3);
  return;
}

// SetLinearVelocityTarget @ 148321d20

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
UPhysicsConstraintComponent::SetLinearVelocityTarget
          (UPhysicsConstraintComponent *this,TVector<double> *param_1)

{
  FConstraintInstance::SetLinearVelocityTarget(&this->ConstraintInstance,param_1);
  return;
}

// SetLinearXLimit @ 148321d40

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
UPhysicsConstraintComponent::SetLinearXLimit
          (UPhysicsConstraintComponent *this,ELinearConstraintMotion param_1,float param_2)

{
  uchar uVar1;
  
  uVar1 = (this->ConstraintInstance).ProfileInstance.LinearLimit.ZMotion.Value;
  (this->ConstraintInstance).ProfileInstance.LinearLimit.YMotion.Value =
       (this->ConstraintInstance).ProfileInstance.LinearLimit.YMotion.Value;
  (this->ConstraintInstance).ProfileInstance.LinearLimit.ZMotion.Value = uVar1;
  (this->ConstraintInstance).ProfileInstance.LinearLimit.Limit = param_2;
  (this->ConstraintInstance).ProfileInstance.LinearLimit.XMotion.Value = (uchar)param_1;
  FConstraintInstance::UpdateLinearLimit(&this->ConstraintInstance);
  return;
}

// SetLinearYLimit @ 148321d80

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
UPhysicsConstraintComponent::SetLinearYLimit
          (UPhysicsConstraintComponent *this,ELinearConstraintMotion param_1,float param_2)

{
  (this->ConstraintInstance).ProfileInstance.LinearLimit.ZMotion.Value =
       (this->ConstraintInstance).ProfileInstance.LinearLimit.ZMotion.Value;
  (this->ConstraintInstance).ProfileInstance.LinearLimit.Limit = param_2;
  (this->ConstraintInstance).ProfileInstance.LinearLimit.YMotion.Value = (uchar)param_1;
  FConstraintInstance::UpdateLinearLimit(&this->ConstraintInstance);
  return;
}

// SetLinearZLimit @ 148321db0

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
UPhysicsConstraintComponent::SetLinearZLimit
          (UPhysicsConstraintComponent *this,ELinearConstraintMotion param_1,float param_2)

{
  (this->ConstraintInstance).ProfileInstance.LinearLimit.YMotion.Value =
       (this->ConstraintInstance).ProfileInstance.LinearLimit.YMotion.Value;
  (this->ConstraintInstance).ProfileInstance.LinearLimit.Limit = param_2;
  (this->ConstraintInstance).ProfileInstance.LinearLimit.ZMotion.Value = (uchar)param_1;
  FConstraintInstance::UpdateLinearLimit(&this->ConstraintInstance);
  return;
}

// SetOrientationDriveSLERP @ 148322020

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
UPhysicsConstraintComponent::SetOrientationDriveSLERP
          (UPhysicsConstraintComponent *this,bool param_1)

{
  FConstraintInstance::SetOrientationDriveSLERP(&this->ConstraintInstance,param_1);
  return;
}

// SetOrientationDriveTwistAndSwing @ 148322040

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
UPhysicsConstraintComponent::SetOrientationDriveTwistAndSwing
          (UPhysicsConstraintComponent *this,bool param_1,bool param_2)

{
  FConstraintInstance::SetOrientationDriveTwistAndSwing(&this->ConstraintInstance,param_1,param_2);
  return;
}

// SetProjectionEnabled @ 148322320

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
UPhysicsConstraintComponent::SetProjectionEnabled(UPhysicsConstraintComponent *this,bool param_1)

{
  if (!param_1) {
    FConstraintInstance::DisableProjection(&this->ConstraintInstance);
    return;
  }
  FConstraintInstance::SetProjectionParams
            (&this->ConstraintInstance,true,
             (this->ConstraintInstance).ProfileInstance.ProjectionLinearAlpha,
             (this->ConstraintInstance).ProfileInstance.ProjectionAngularAlpha,
             (this->ConstraintInstance).ProfileInstance.ProjectionLinearTolerance,
             (this->ConstraintInstance).ProfileInstance.ProjectionAngularTolerance);
  return;
}

// SetProjectionParams @ 148322340

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
UPhysicsConstraintComponent::SetProjectionParams
          (UPhysicsConstraintComponent *this,float param_1,float param_2,float param_3,float param_4
          )

{
  FConstraintInstance::SetProjectionParams
            (&this->ConstraintInstance,(this->ConstraintInstance).ProfileInstance.bEnableProjection,
             param_1,param_2,param_3,param_4);
  return;
}

// StaticRegisterNativesUPhysicsConstraintComponent @ 148323b50

void __cdecl UPhysicsConstraintComponent::StaticRegisterNativesUPhysicsConstraintComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x2d;
  local_18.DataPtr = Z_Construct_UClass_UPhysicsConstraintComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TermComponentConstraint @ 148324260

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
UPhysicsConstraintComponent::TermComponentConstraint(UPhysicsConstraintComponent *this)

{
  FConstraintInstance::TermConstraint(&this->ConstraintInstance);
  return;
}

// UpdateConstraintFrames @ 1483277e0

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

void __thiscall
UPhysicsConstraintComponent::UpdateConstraintFrames(UPhysicsConstraintComponent *this)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  ulonglong uVar6;
  float fVar7;
  undefined1 auVar8 [16];
  uint uVar9;
  uint uVar10;
  TVector<double> *pTVar11;
  FPhysicsObject *pFVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  double dVar30;
  double dVar34;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double dVar35;
  undefined1 in_XMM2 [16];
  undefined1 auVar36 [16];
  double dVar37;
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
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined4 uVar53;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  double local_1c8;
  double dStack_1c0;
  undefined8 local_1b8;
  TVector<double>_u_0 local_1a8;
  TVector<double>_u_0 local_188;
  TVector<double>_u_0 local_170;
  TVector<double>_u_0 local_158;
  TTransform<double> local_138;
  TTransform<double> local_d8;
  TVector<double> local_78 [4];
  
  GetBodyTransformInternal(this,&local_138,Frame1,(this->ConstraintInstance).ConstraintBone1);
  local_138.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_138.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_138.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_138.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  dVar30 = local_138.Rotation.XY.m128d_f64[0] * local_138.Rotation.XY.m128d_f64[0] +
           local_138.Rotation.ZW.m128d_f64[0] * local_138.Rotation.ZW.m128d_f64[0];
  dVar34 = local_138.Rotation.XY.m128d_f64[1] * local_138.Rotation.XY.m128d_f64[1] +
           local_138.Rotation.ZW.m128d_f64[1] * local_138.Rotation.ZW.m128d_f64[1];
  auVar17._8_4_ = SUB84(dVar34,0);
  auVar17._0_8_ = dVar30;
  auVar17._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
  auVar18._0_8_ = auVar17._8_8_ + dVar30;
  auVar18._8_8_ = dVar30 + dVar34;
  auVar36 = sqrtpd(in_XMM2,auVar18);
  uVar13 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= auVar18._0_8_);
  uVar15 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= auVar18._8_8_);
  uVar14 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= auVar18._0_8_);
  uVar16 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= auVar18._8_8_);
  auVar31 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar36);
  auVar19 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar36);
  auVar32._0_8_ = (ulonglong)(auVar31._0_8_ * local_138.Rotation.XY.m128d_f64[0]) & uVar13;
  uVar6 = uVar15 & (ulonglong)(auVar31._8_8_ * local_138.Rotation.XY.m128d_f64[1]);
  auVar32._8_4_ = (undefined4)uVar6;
  auVar32._12_4_ = (undefined4)(uVar6 >> 0x20);
  auVar38._0_4_ = ~(uint)uVar13 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
  auVar38._4_4_ = ~(uint)(uVar13 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
  auVar38._8_4_ = ~(uint)uVar15 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
  auVar38._12_4_ = ~(uint)(uVar15 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_
  ;
  auVar20._0_8_ = uVar14 & (ulonglong)(auVar19._0_8_ * local_138.Rotation.ZW.m128d_f64[0]);
  uVar6 = uVar16 & (ulonglong)(auVar19._8_8_ * local_138.Rotation.ZW.m128d_f64[1]);
  auVar20._8_4_ = (undefined4)uVar6;
  auVar20._12_4_ = (undefined4)(uVar6 >> 0x20);
  local_138.Rotation.XY.m128d_f64 = (double  [2])(auVar32 | auVar38);
  auVar3._4_4_ = ~(uint)(uVar14 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
  auVar3._0_4_ = ~(uint)uVar14 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
  auVar3._8_4_ = ~(uint)uVar16 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
  auVar3._12_4_ = ~(uint)(uVar16 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
  local_138.Rotation.ZW.m128d_f64 = (double  [2])(auVar20 | auVar3);
  GetBodyTransformInternal(this,&local_d8,Frame2,(this->ConstraintInstance).ConstraintBone2);
  auVar1 = ___xmm_3ff00000000000000000000000000000;
  local_d8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_d8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_d8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_d8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  dVar30 = local_d8.Rotation.XY.m128d_f64[0] * local_d8.Rotation.XY.m128d_f64[0] +
           local_d8.Rotation.ZW.m128d_f64[0] * local_d8.Rotation.ZW.m128d_f64[0];
  dVar34 = local_d8.Rotation.XY.m128d_f64[1] * local_d8.Rotation.XY.m128d_f64[1] +
           local_d8.Rotation.ZW.m128d_f64[1] * local_d8.Rotation.ZW.m128d_f64[1];
  auVar21._8_4_ = SUB84(dVar34,0);
  auVar21._0_8_ = dVar30;
  auVar21._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
  auVar22._0_8_ = auVar21._8_8_ + dVar30;
  auVar22._8_8_ = dVar30 + dVar34;
  auVar19 = sqrtpd(auVar36,auVar22);
  uVar13 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= auVar22._0_8_);
  uVar15 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= auVar22._8_8_);
  auVar31 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar19);
  uVar14 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= auVar22._0_8_);
  uVar16 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= auVar22._8_8_);
  auVar19 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar19);
  auVar33._0_8_ = (ulonglong)(auVar31._0_8_ * local_d8.Rotation.XY.m128d_f64[0]) & uVar13;
  uVar6 = uVar15 & (ulonglong)(auVar31._8_8_ * local_d8.Rotation.XY.m128d_f64[1]);
  auVar33._8_4_ = (undefined4)uVar6;
  auVar33._12_4_ = (undefined4)(uVar6 >> 0x20);
  auVar39._0_4_ = ~(uint)uVar13 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
  auVar39._4_4_ = ~(uint)(uVar13 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
  auVar39._8_4_ = ~(uint)uVar15 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
  auVar39._12_4_ = ~(uint)(uVar15 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_
  ;
  local_d8.Rotation.XY.m128d_f64 = (double  [2])(auVar33 | auVar39);
  auVar8._8_8_ = _UNK_150689518;
  auVar8._0_8_ = ___xmm_00000000000000003ff0000000000000;
  local_170._s_0.Z = (double)this->_padding_;
  auVar23._0_8_ = uVar14 & (ulonglong)(auVar19._0_8_ * local_d8.Rotation.ZW.m128d_f64[0]);
  uVar6 = uVar16 & (ulonglong)(auVar19._8_8_ * local_d8.Rotation.ZW.m128d_f64[1]);
  auVar23._8_4_ = (undefined4)uVar6;
  auVar23._12_4_ = (undefined4)(uVar6 >> 0x20);
  dVar37 = (double)this->_padding_;
  auVar4._4_4_ = ~(uint)(uVar14 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
  auVar4._0_4_ = ~(uint)uVar14 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
  auVar4._8_4_ = ~(uint)uVar16 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
  auVar4._12_4_ = ~(uint)(uVar16 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
  local_d8.Rotation.ZW.m128d_f64 = (double  [2])(auVar23 | auVar4);
  local_170._s_0.X = (double)this->_padding_;
  local_170._s_0.Y = (double)this->_padding_;
  auVar19._0_8_ = this->_padding_;
  auVar19._8_8_ = this->_padding_;
  auVar31._0_8_ = this->_padding_;
  auVar31._8_8_ = this->_padding_;
  auVar36 = blendpd(auVar19,auVar31,2);
  auVar54._0_8_ =
       _UNK_150689518 * (double)auVar19._0_8_ -
       (double)auVar19._8_8_ * ___xmm_00000000000000003ff0000000000000;
  auVar54._8_8_ = (double)auVar19._8_8_ * 0.0 - (double)auVar31._0_8_ * _UNK_150689518;
  auVar19 = blendpd(auVar8,ZEXT816(0),2);
  auVar24._0_8_ = auVar19._0_8_ * (double)auVar31._0_8_ - auVar36._0_8_ * 0.0;
  auVar24._8_8_ = auVar19._8_8_ * (double)auVar31._8_8_ - auVar36._8_8_ * 0.0;
  auVar36._0_8_ = this->_padding_;
  auVar36._8_8_ = this->_padding_;
  auVar19 = blendpd(auVar54,auVar24,2);
  auVar55._0_8_ = auVar19._0_8_ + auVar19._0_8_;
  auVar55._8_8_ = auVar19._8_8_ + auVar19._8_8_;
  dVar30 = auVar54._8_8_ + auVar54._8_8_;
  dVar34 = auVar24._0_8_ + auVar24._0_8_;
  uVar53 = (undefined4)((ulonglong)dVar34 >> 0x20);
  auVar47._8_4_ = SUB84(dVar34,0);
  auVar47._0_8_ = dVar30;
  auVar47._12_4_ = uVar53;
  auVar40._8_4_ = SUB84(dVar34,0);
  auVar40._0_8_ = dVar30;
  auVar40._12_4_ = uVar53;
  auVar41 = blendpd(auVar40,auVar55,2);
  auVar48._0_8_ = auVar47._8_8_ * (double)auVar36._0_8_ - (double)auVar36._8_8_ * dVar30;
  auVar48._8_8_ = auVar55._0_8_ * (double)auVar36._8_8_ - (double)auVar31._0_8_ * dVar34;
  auVar19 = blendpd(auVar36,auVar31,2);
  auVar25._8_4_ = SUB84(auVar48._8_8_,0);
  auVar25._0_8_ = auVar48._0_8_;
  auVar25._12_4_ = (int)((ulonglong)auVar48._8_8_ >> 0x20);
  auVar42._0_8_ = auVar41._0_8_ * (double)auVar31._0_8_ - auVar19._0_8_ * auVar55._0_8_;
  auVar42._8_8_ = auVar41._8_8_ * (double)auVar31._8_8_ - auVar19._8_8_ * auVar55._8_8_;
  dVar34 = dVar34 * dVar37 + _UNK_150689518 + auVar42._0_8_;
  local_1a8._0_8_ = this->_padding_;
  local_1a8._8_8_ = this->_padding_;
  auVar19 = blendpd(auVar48,auVar42,2);
  local_188._s_0.Z = auVar55._0_8_ * dVar37 + auVar19._0_8_;
  local_188._8_4_ = SUB84(dVar34,0);
  local_188._0_8_ = dVar30 * dVar37 + ___xmm_00000000000000003ff0000000000000 + auVar25._8_8_;
  local_188._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
  dVar37 = __xmm_3ff00000000000000000000000000000._8_8_;
  auVar36 = blendpd(local_1a8._0_16_,auVar31,2);
  auVar56._0_8_ =
       dVar37 * (double)local_1a8._0_8_ -
       (double)local_1a8._8_8_ * (double)__xmm_3ff00000000000000000000000000000;
  auVar56._8_8_ = (double)local_1a8._8_8_ * 0.0 - (double)auVar31._0_8_ * dVar37;
  auVar19 = blendpd(___xmm_3ff00000000000000000000000000000,ZEXT816(0),2);
  auVar26._0_8_ = auVar19._0_8_ * (double)auVar31._0_8_ - auVar36._0_8_ * 0.0;
  auVar26._8_8_ = auVar19._8_8_ * (double)auVar31._8_8_ - auVar36._8_8_ * 0.0;
  auVar19 = blendpd(auVar56,auVar26,2);
  auVar41._0_8_ = this->_padding_;
  auVar41._8_8_ = this->_padding_;
  dVar30 = auVar56._8_8_ + auVar56._8_8_;
  dVar34 = auVar26._0_8_ + auVar26._0_8_;
  uVar53 = (undefined4)((ulonglong)dVar34 >> 0x20);
  auVar57._0_8_ = auVar19._0_8_ + auVar19._0_8_;
  auVar57._8_8_ = auVar19._8_8_ + auVar19._8_8_;
  auVar49._8_4_ = SUB84(dVar34,0);
  auVar49._0_8_ = dVar30;
  auVar49._12_4_ = uVar53;
  auVar43._8_4_ = SUB84(dVar34,0);
  auVar43._0_8_ = dVar30;
  auVar43._12_4_ = uVar53;
  auVar36 = blendpd(auVar43,auVar57,2);
  auVar50._0_8_ = auVar49._8_8_ * (double)auVar41._0_8_ - (double)auVar41._8_8_ * dVar30;
  auVar50._8_8_ = auVar57._0_8_ * (double)auVar41._8_8_ - (double)auVar31._0_8_ * dVar34;
  auVar19 = blendpd(auVar41,auVar31,2);
  auVar27._8_4_ = SUB84(auVar50._8_8_,0);
  auVar27._0_8_ = auVar50._0_8_;
  auVar27._12_4_ = (int)((ulonglong)auVar50._8_8_ >> 0x20);
  auVar44._0_8_ = auVar36._0_8_ * (double)auVar31._0_8_ - auVar19._0_8_ * auVar57._0_8_;
  auVar44._8_8_ = auVar36._8_8_ * (double)auVar31._8_8_ - auVar19._8_8_ * auVar57._8_8_;
  auVar19 = blendpd(auVar50,auVar44,2);
  dVar34 = dVar34 * (double)auVar31._8_8_ + dVar37 + auVar44._0_8_;
  local_1b8 = auVar57._0_8_ * (double)auVar31._8_8_ + auVar19._0_8_;
  unique0x100001a1 = SUB84(dVar34,0);
  local_1c8 = dVar30 * (double)auVar31._8_8_ + (double)__xmm_3ff00000000000000000000000000000 +
              auVar27._8_8_;
  unique0x100001a5 = (int)((ulonglong)dVar34 >> 0x20);
  pTVar11 = UE::Math::TTransform<double>::InverseTransformPosition
                      (&local_138,(TVector<double> *)&local_1a8._s_0,
                       (TVector<double> *)&local_170._s_0);
  dVar30 = (pTVar11->field0_0x0)._s_0.Y;
  (this->ConstraintInstance).Pos1.field0_0x0._s_0.X = (pTVar11->field0_0x0)._s_0.X;
  (this->ConstraintInstance).Pos1.field0_0x0._s_0.Y = dVar30;
  (this->ConstraintInstance).Pos1.field0_0x0._s_0.Z = (pTVar11->field0_0x0)._s_0.Z;
  pTVar11 = UE::Math::TTransform<double>::InverseTransformVectorNoScale
                      (&local_138,(TVector<double> *)&local_1a8._s_0,
                       (TVector<double> *)&local_188._s_0);
  dVar30 = (pTVar11->field0_0x0)._s_0.Y;
  (this->ConstraintInstance).PriAxis1.field0_0x0._s_0.X = (pTVar11->field0_0x0)._s_0.X;
  (this->ConstraintInstance).PriAxis1.field0_0x0._s_0.Y = dVar30;
  (this->ConstraintInstance).PriAxis1.field0_0x0._s_0.Z = (pTVar11->field0_0x0)._s_0.Z;
  pTVar11 = UE::Math::TTransform<double>::InverseTransformVectorNoScale
                      (&local_138,(TVector<double> *)&local_1a8._s_0,(TVector<double> *)&local_1c8);
  local_1b8 = 0.0;
  dVar30 = (pTVar11->field0_0x0)._s_0.Y;
  (this->ConstraintInstance).SecAxis1.field0_0x0._s_0.X = (pTVar11->field0_0x0)._s_0.X;
  (this->ConstraintInstance).SecAxis1.field0_0x0._s_0.Y = dVar30;
  dStack_1c0 = _UNK_150689518;
  local_1c8 = ___xmm_00000000000000003ff0000000000000;
  (this->ConstraintInstance).SecAxis1.field0_0x0._s_0.Z = (pTVar11->field0_0x0)._s_0.Z;
  UE::Math::TRotator<double>::RotateVector
            (&(this->ConstraintInstance).AngularRotationOffset,(TVector<double> *)&local_158._s_0,
             (TVector<double> *)&local_1c8);
  local_1b8 = 0.0;
  _local_1c8 = auVar1;
  UE::Math::TRotator<double>::RotateVector
            (&(this->ConstraintInstance).AngularRotationOffset,local_78,
             (TVector<double> *)&local_1c8);
  local_1a8._0_8_ = this->_padding_;
  local_1a8._8_8_ = this->_padding_;
  auVar1._0_8_ = this->_padding_;
  auVar1._8_8_ = this->_padding_;
  dVar37 = (double)this->_padding_;
  dVar35 = local_158._8_8_;
  auVar58._0_8_ = dVar35 * (double)local_1a8._0_8_ - (double)local_1a8._8_8_ * local_158._0_8_;
  auVar58._8_8_ = local_158._s_0.Z * (double)local_1a8._8_8_ - (double)auVar1._0_8_ * dVar35;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = local_158._s_0.Z;
  auVar19 = blendpd(local_158._0_16_,auVar5,2);
  auVar31 = blendpd(local_1a8._0_16_,auVar1,2);
  auVar28._0_8_ = auVar19._0_8_ * (double)auVar1._0_8_ - auVar31._0_8_ * local_158._s_0.Z;
  auVar28._8_8_ = auVar19._8_8_ * (double)auVar1._8_8_ - auVar31._8_8_ * 0.0;
  auVar2._0_8_ = this->_padding_;
  auVar2._8_8_ = this->_padding_;
  auVar19 = blendpd(auVar58,auVar28,2);
  dVar30 = auVar58._8_8_ + auVar58._8_8_;
  dVar34 = auVar28._0_8_ + auVar28._0_8_;
  uVar53 = (undefined4)((ulonglong)dVar34 >> 0x20);
  auVar59._0_8_ = auVar19._0_8_ + auVar19._0_8_;
  auVar59._8_8_ = auVar19._8_8_ + auVar19._8_8_;
  auVar51._8_4_ = SUB84(dVar34,0);
  auVar51._0_8_ = dVar30;
  auVar51._12_4_ = uVar53;
  auVar45._8_4_ = SUB84(dVar34,0);
  auVar45._0_8_ = dVar30;
  auVar45._12_4_ = uVar53;
  auVar31 = blendpd(auVar45,auVar59,2);
  auVar52._0_8_ = auVar51._8_8_ * (double)auVar2._0_8_ - (double)auVar2._8_8_ * dVar30;
  auVar52._8_8_ = auVar59._0_8_ * (double)auVar2._8_8_ - (double)auVar1._0_8_ * dVar34;
  auVar19 = blendpd(auVar2,auVar1,2);
  auVar29._8_4_ = SUB84(auVar52._8_8_,0);
  auVar29._0_8_ = auVar52._0_8_;
  auVar29._12_4_ = (int)((ulonglong)auVar52._8_8_ >> 0x20);
  auVar46._0_8_ = auVar31._0_8_ * (double)auVar1._0_8_ - auVar19._0_8_ * auVar59._0_8_;
  auVar46._8_8_ = auVar31._8_8_ * (double)auVar1._8_8_ - auVar19._8_8_ * auVar59._8_8_;
  auVar19 = blendpd(auVar52,auVar46,2);
  dVar34 = dVar34 * dVar37 + dVar35 + auVar46._0_8_;
  local_1b8 = auVar59._0_8_ * dVar37 + local_158._s_0.Z + auVar19._0_8_;
  unique0x100001c5 = SUB84(dVar34,0);
  local_1c8 = dVar30 * dVar37 + local_158._0_8_ + auVar29._8_8_;
  unique0x100001c9 = (int)((ulonglong)dVar34 >> 0x20);
  UE::Math::TTransform<double>::TransformVectorNoScale
            ((TTransform<double> *)&this->_padding_,(TVector<double> *)&local_188._s_0,local_78);
  pTVar11 = UE::Math::TTransform<double>::InverseTransformPosition
                      (&local_d8,(TVector<double> *)&local_1a8._s_0,
                       (TVector<double> *)&local_170._s_0);
  dVar30 = (pTVar11->field0_0x0)._s_0.Y;
  (this->ConstraintInstance).Pos2.field0_0x0._s_0.X = (pTVar11->field0_0x0)._s_0.X;
  (this->ConstraintInstance).Pos2.field0_0x0._s_0.Y = dVar30;
  (this->ConstraintInstance).Pos2.field0_0x0._s_0.Z = (pTVar11->field0_0x0)._s_0.Z;
  pTVar11 = UE::Math::TTransform<double>::InverseTransformVectorNoScale
                      (&local_d8,(TVector<double> *)&local_1a8._s_0,(TVector<double> *)&local_1c8);
  dVar30 = (pTVar11->field0_0x0)._s_0.Y;
  (this->ConstraintInstance).PriAxis2.field0_0x0._s_0.X = (pTVar11->field0_0x0)._s_0.X;
  (this->ConstraintInstance).PriAxis2.field0_0x0._s_0.Y = dVar30;
  (this->ConstraintInstance).PriAxis2.field0_0x0._s_0.Z = (pTVar11->field0_0x0)._s_0.Z;
  pTVar11 = UE::Math::TTransform<double>::InverseTransformVectorNoScale
                      (&local_d8,(TVector<double> *)&local_1a8._s_0,
                       (TVector<double> *)&local_188._s_0);
  dVar30 = (pTVar11->field0_0x0)._s_0.Y;
  (this->ConstraintInstance).SecAxis2.field0_0x0._s_0.X = (pTVar11->field0_0x0)._s_0.X;
  (this->ConstraintInstance).SecAxis2.field0_0x0._s_0.Y = dVar30;
  uVar10 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar9 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  (this->ConstraintInstance).SecAxis2.field0_0x0._s_0.Z = (pTVar11->field0_0x0)._s_0.Z;
  dVar30 = (double)CONCAT44(*(uint *)((longlong)&this->_padding_ + 4) & uVar10,
                            (uint)this->_padding_ & uVar9);
  dVar34 = (double)CONCAT44(*(uint *)((longlong)&this->_padding_ + 4) & uVar10,
                            (uint)this->_padding_ & uVar9);
  dVar37 = (double)CONCAT44(*(uint *)((longlong)&this->_padding_ + 4) & uVar10,
                            (uint)this->_padding_ & uVar9);
  if (dVar34 <= dVar30) {
    dVar30 = dVar34;
  }
  if (dVar37 <= dVar30) {
    dVar30 = dVar37;
  }
  fVar7 = (float)dVar30;
  if ((float)dVar30 <= __real_3c23d70a) {
    fVar7 = __real_3c23d70a;
  }
  pFVar12 = GetPhysicsObject(this,Frame1);
  dVar30 = __real_3ff0000000000000;
  if (pFVar12 != (FPhysicsObject *)0x0) {
    dVar37 = (this->ConstraintInstance).Pos1.field0_0x0._s_0.Y;
    dVar35 = __real_3ff0000000000000 / (double)fVar7;
    dVar34 = (this->ConstraintInstance).Pos1.field0_0x0._s_0.Z;
    (this->ConstraintInstance).Pos1.field0_0x0._s_0.X =
         (this->ConstraintInstance).Pos1.field0_0x0._s_0.X * dVar35;
    (this->ConstraintInstance).Pos1.field0_0x0._s_0.Y = dVar37 * dVar35;
    (this->ConstraintInstance).Pos1.field0_0x0._s_0.Z = dVar35 * dVar34;
  }
  pFVar12 = GetPhysicsObject(this,Frame2);
  if (pFVar12 != (FPhysicsObject *)0x0) {
    dVar37 = (this->ConstraintInstance).Pos2.field0_0x0._s_0.Y;
    dVar30 = dVar30 / (double)fVar7;
    dVar34 = (this->ConstraintInstance).Pos2.field0_0x0._s_0.Z;
    (this->ConstraintInstance).Pos2.field0_0x0._s_0.X =
         (this->ConstraintInstance).Pos2.field0_0x0._s_0.X * dVar30;
    (this->ConstraintInstance).Pos2.field0_0x0._s_0.Y = dVar37 * dVar30;
    (this->ConstraintInstance).Pos2.field0_0x0._s_0.Z = dVar30 * dVar34;
  }
  return;
}

// execBreakConstraint @ 14832cf20

void __cdecl
UPhysicsConstraintComponent::execBreakConstraint(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FConstraintInstance::TermConstraint((FConstraintInstance *)&param_1[0x11].field_0x10);
  param_1[0x22].field_0x8 = 1;
  return;
}

// execGetConstrainedComponents @ 14832d530

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UPhysicsConstraintComponent::execGetConstrainedComponents
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  UPrimitiveComponent *pUVar9;
  uchar *puVar10;
  uchar *puVar11;
  uchar *puVar12;
  uchar *puVar13;
  uchar local_res8 [8];
  undefined8 local_res10 [2];
  uchar local_res20 [8];
  uchar local_48 [16];
  
  local_res20[0] = '\0';
  local_res20[1] = '\0';
  local_res20[2] = '\0';
  local_res20[3] = '\0';
  local_res20[4] = '\0';
  local_res20[5] = '\0';
  local_res20[6] = '\0';
  local_res20[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  puVar10 = param_2->MostRecentPropertyAddress;
  local_res8[0] = '\0';
  local_res8[1] = '\0';
  local_res8[2] = '\0';
  local_res8[3] = '\0';
  local_res8[4] = '\0';
  local_res8[5] = '\0';
  local_res8[6] = '\0';
  local_res8[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar13 = local_res20;
  if (puVar10 != (uchar *)0x0) {
    puVar13 = puVar10;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  puVar10 = param_2->MostRecentPropertyAddress;
  local_48[0] = '\0';
  local_48[1] = '\0';
  local_48[2] = '\0';
  local_48[3] = '\0';
  local_48[4] = '\0';
  local_48[5] = '\0';
  local_48[6] = '\0';
  local_48[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar11 = local_res8;
  if (puVar10 != (uchar *)0x0) {
    puVar11 = puVar10;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_48);
  }
  puVar10 = param_2->MostRecentPropertyAddress;
  local_res10[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar12 = local_48;
  if (puVar10 != (uchar *)0x0) {
    puVar12 = puVar10;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  puVar10 = (uchar *)local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar10 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar9 = GetComponentInternal((UPhysicsConstraintComponent *)param_1,Frame1);
  *(UPrimitiveComponent **)puVar13 = pUVar9;
  uVar2 = param_1[0x14].field_0x1;
  uVar3 = param_1[0x14].field_0x2;
  uVar4 = param_1[0x14].field_0x3;
  uVar5 = param_1[0x14].field_0x4;
  uVar6 = param_1[0x14].field_0x5;
  uVar7 = param_1[0x14].field_0x6;
  uVar8 = param_1[0x14].field_0x7;
  puVar11[0] = param_1[0x14].field_0x0;
  puVar11[1] = uVar2;
  puVar11[2] = uVar3;
  puVar11[3] = uVar4;
  puVar11[4] = uVar5;
  puVar11[5] = uVar6;
  puVar11[6] = uVar7;
  puVar11[7] = uVar8;
  pUVar9 = GetComponentInternal((UPhysicsConstraintComponent *)param_1,Frame2);
  *(UPrimitiveComponent **)puVar12 = pUVar9;
  uVar2 = param_1[0x14].field_0x9;
  uVar3 = param_1[0x14].field_0xa;
  uVar4 = param_1[0x14].field_0xb;
  uVar5 = param_1[0x14].field_0xc;
  uVar6 = param_1[0x14].field_0xd;
  uVar7 = param_1[0x14].field_0xe;
  uVar8 = param_1[0x14].field_0xf;
  puVar10[0] = param_1[0x14].field_0x8;
  puVar10[1] = uVar2;
  puVar10[2] = uVar3;
  puVar10[3] = uVar4;
  puVar10[4] = uVar5;
  puVar10[5] = uVar6;
  puVar10[6] = uVar7;
  puVar10[7] = uVar8;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (*(UObject **)puVar13 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(*(UObject **)puVar13);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (*(UObject **)puVar12 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(*(UObject **)puVar12);
    }
  }
  return;
}

// execGetConstraint @ 14832d720

/* WARNING: Removing unreachable block (ram,0x00014832d7a6) */
/* WARNING: Removing unreachable block (ram,0x00014832d7b3) */
/* WARNING: Removing unreachable block (ram,0x00014832d7b7) */

void __cdecl
UPhysicsConstraintComponent::execGetConstraint(UObject *param_1,FFrame *param_2,void *param_3)

{
  FWeakObjectPtr local_res8;
  UObject *local_res10;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  *(FWeakObjectPtr *)param_3 = local_res8;
  *(undefined4 *)((longlong)param_3 + 8) = 0;
  return;
}

// execGetConstraintForce @ 14832d7e0

void __cdecl
UPhysicsConstraintComponent::execGetConstraintForce(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TVector<double> *pTVar2;
  TVector<double> *pTVar3;
  TVector<double> local_38;
  TVector<double> local_20;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pTVar3 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  pTVar2 = &local_38;
  if (pTVar3 != (TVector<double> *)0x0) {
    pTVar2 = pTVar3;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_20);
  }
  pTVar3 = &local_20;
  if ((TVector<double> *)param_2->MostRecentPropertyAddress != (TVector<double> *)0x0) {
    pTVar3 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FConstraintInstance::GetConstraintForce
            ((FConstraintInstance *)&param_1[0x11].field_0x10,pTVar2,pTVar3);
  return;
}

// execGetCurrentSwing1 @ 14832d8e0

void __cdecl
UPhysicsConstraintComponent::execGetCurrentSwing1(UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar1 = FConstraintInstance::GetCurrentSwing1((FConstraintInstance *)&param_1[0x11].field_0x10);
  *(float *)param_3 = fVar1 * __real_42652ee0;
  return;
}

// execGetCurrentSwing2 @ 14832d930

void __cdecl
UPhysicsConstraintComponent::execGetCurrentSwing2(UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar1 = FConstraintInstance::GetCurrentSwing2((FConstraintInstance *)&param_1[0x11].field_0x10);
  *(float *)param_3 = fVar1 * __real_42652ee0;
  return;
}

// execGetCurrentTwist @ 14832d980

void __cdecl
UPhysicsConstraintComponent::execGetCurrentTwist(UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar1 = FConstraintInstance::GetCurrentTwist((FConstraintInstance *)&param_1[0x11].field_0x10);
  *(float *)param_3 = fVar1 * __real_42652ee0;
  return;
}

// execIsBroken @ 14832e220

void __cdecl
UPhysicsConstraintComponent::execIsBroken(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (param_1[0x22].field_0x8 == '\0') {
    bVar1 = FConstraintInstance::IsBroken((FConstraintInstance *)&param_1[0x11].field_0x10);
    if (!bVar1) {
      *(undefined1 *)param_3 = 0;
      return;
    }
  }
  *(undefined1 *)param_3 = 1;
  return;
}

// execIsProjectionEnabled @ 14832e270

void __cdecl
UPhysicsConstraintComponent::execIsProjectionEnabled(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(byte *)param_3 = (byte)param_1[0x1c].field_0x8 >> 3 & 1;
  return;
}

// execReInitConstraintAndApplyPhysicsState @ 14832ed10

void __cdecl
UPhysicsConstraintComponent::execReInitConstraintAndApplyPhysicsState
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res10 [16];
  undefined8 local_res20;
  
  local_res20 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  return;
}

// execSetAngularBreakable @ 14832f1c0

void __cdecl
UPhysicsConstraintComponent::execSetAngularBreakable(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  int local_res8 [2];
  undefined4 local_res10 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar2 = local_res8[0] != 0;
  local_res10[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0x1c].field_0x8 = param_1[0x1c].field_0x8 & 0xbf;
  param_1[0x1c].field_0x8 = param_1[0x1c].field_0x8 | bVar2 << 6;
  *(undefined4 *)&param_1[0x19].field_0x1c = local_res10[0];
  FConstraintInstance::UpdateBreakable((FConstraintInstance *)&param_1[0x11].field_0x10);
  return;
}

// execSetAngularDriveAccelerationMode @ 14832f350

void __cdecl
UPhysicsConstraintComponent::execSetAngularDriveAccelerationMode
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FConstraintInstance::SetAngularDriveAccelerationMode
            ((FConstraintInstance *)&param_1[0x11].field_0x10,local_res8[0] != 0);
  return;
}

// execSetAngularDriveMode @ 14832f3f0

void __cdecl
UPhysicsConstraintComponent::execSetAngularDriveMode(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  byte local_res8 [8];
  
  local_res8[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FConstraintInstance::SetAngularDriveMode
            ((FConstraintInstance *)&param_1[0x11].field_0x10,(uint)local_res8[0]);
  return;
}

// execSetAngularDriveParams @ 14832f480

void __cdecl
UPhysicsConstraintComponent::execSetAngularDriveParams
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res8 [2];
  float local_res10 [2];
  float local_res20 [2];
  
  local_res20[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FConstraintInstance::SetAngularDriveParams
            ((FConstraintInstance *)&param_1[0x11].field_0x10,local_res20[0],local_res10[0],
             local_res8[0]);
  return;
}

// execSetAngularOrientationDrive @ 14832f5a0

void __cdecl
UPhysicsConstraintComponent::execSetAngularOrientationDrive
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  int local_res8 [2];
  int local_res10 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar2 = local_res8[0] != 0;
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FConstraintInstance::SetOrientationDriveTwistAndSwing
            ((FConstraintInstance *)&param_1[0x11].field_0x10,local_res10[0] != 0,bVar2);
  return;
}

// execSetAngularOrientationTarget @ 14832f680

void __cdecl
UPhysicsConstraintComponent::execSetAngularOrientationTarget
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TQuat<double> *pTVar2;
  TRotator<double> *this;
  TRotator<double> local_48;
  TQuat<double> local_28;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  this = &local_48;
  if ((TRotator<double> *)param_2->MostRecentPropertyAddress != (TRotator<double> *)0x0) {
    this = (TRotator<double> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar2 = UE::Math::TRotator<double>::Quaternion(this,&local_28);
  FConstraintInstance::SetAngularOrientationTarget
            ((FConstraintInstance *)&param_1[0x11].field_0x10,pTVar2);
  return;
}

// execSetAngularPlasticity @ 14832f730

void __cdecl
UPhysicsConstraintComponent::execSetAngularPlasticity
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  int local_res8 [2];
  undefined4 local_res10 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar2 = local_res8[0] != 0;
  local_res10[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0x1c].field_0x8 = param_1[0x1c].field_0x8 & 0x7f;
  param_1[0x1c].field_0x8 = param_1[0x1c].field_0x8 | bVar2 << 7;
  *(undefined4 *)&param_1[0x19].field_0x20 = local_res10[0];
  FConstraintInstance::UpdatePlasticity((FConstraintInstance *)&param_1[0x11].field_0x10);
  return;
}

// execSetAngularSwing1Limit @ 14832f8c0

void __cdecl
UPhysicsConstraintComponent::execSetAngularSwing1Limit
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res8 [8];
  undefined4 local_res10 [2];
  
  local_res8[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res10[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)&param_1[0x1b].field_0x8 = local_res10[0];
  param_1[0x1b].field_0x10 = local_res8[0];
  FConstraintInstance::UpdateAngularLimit((FConstraintInstance *)&param_1[0x11].field_0x10);
  return;
}

// execSetAngularSwing2Limit @ 14832f9a0

void __cdecl
UPhysicsConstraintComponent::execSetAngularSwing2Limit
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res8 [8];
  undefined4 local_res10 [2];
  
  local_res8[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res10[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)&param_1[0x1b].field_0xc = local_res10[0];
  param_1[0x1b].field_0x11 = local_res8[0];
  FConstraintInstance::UpdateAngularLimit((FConstraintInstance *)&param_1[0x11].field_0x10);
  return;
}

// execSetAngularTwistLimit @ 14832fa80

void __cdecl
UPhysicsConstraintComponent::execSetAngularTwistLimit
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res8 [8];
  undefined4 local_res10 [2];
  
  local_res8[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res10[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)(param_1 + 0x1c) = local_res10[0];
  param_1[0x1c].field_0x4 = local_res8[0];
  FConstraintInstance::UpdateAngularLimit((FConstraintInstance *)&param_1[0x11].field_0x10);
  return;
}

// execSetAngularVelocityDrive @ 14832fb60

void __cdecl
UPhysicsConstraintComponent::execSetAngularVelocityDrive
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  int local_res8 [2];
  int local_res10 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar2 = local_res8[0] != 0;
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FConstraintInstance::SetAngularVelocityDriveTwistAndSwing
            ((FConstraintInstance *)&param_1[0x11].field_0x10,local_res10[0] != 0,bVar2);
  return;
}

// execSetAngularVelocityDriveSLERP @ 14832fc40

void __cdecl
UPhysicsConstraintComponent::execSetAngularVelocityDriveSLERP
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FConstraintInstance::SetAngularVelocityDriveSLERP
            ((FConstraintInstance *)&param_1[0x11].field_0x10,local_res8[0] != 0);
  return;
}

// execSetAngularVelocityDriveTwistAndSwing @ 14832fce0

void __cdecl
UPhysicsConstraintComponent::execSetAngularVelocityDriveTwistAndSwing
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  int local_res8 [2];
  int local_res10 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar2 = local_res8[0] != 0;
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FConstraintInstance::SetAngularVelocityDriveTwistAndSwing
            ((FConstraintInstance *)&param_1[0x11].field_0x10,bVar2,local_res10[0] != 0);
  return;
}

// execSetAngularVelocityTarget @ 14832fdc0

void __cdecl
UPhysicsConstraintComponent::execSetAngularVelocityTarget
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TVector<double> *pTVar2;
  TVector<double> local_28;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pTVar2 = &local_28;
  if ((TVector<double> *)param_2->MostRecentPropertyAddress != (TVector<double> *)0x0) {
    pTVar2 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FConstraintInstance::SetAngularVelocityTarget
            ((FConstraintInstance *)&param_1[0x11].field_0x10,pTVar2);
  return;
}

// execSetConstrainedComponents @ 14832fe60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UPhysicsConstraintComponent::execSetConstrainedComponents
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  UObject *pUVar4;
  undefined8 local_res10 [2];
  undefined8 local_res20;
  UObject *local_38;
  UObject *local_30;
  UObject *local_28 [2];
  
  local_30 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_30,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_30);
  }
  local_res20 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_38 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res10[0] = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pUVar4 = local_38;
  uVar3 = local_res20;
  uVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_30 != (UObject *)0x0) {
    *(undefined8 *)(param_1 + 0xf) = *(undefined8 *)&local_30->field_0x18;
    local_28[0] = local_30;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(local_30);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&param_1[0xf].field_0x18,(FObjectPtr)local_28);
    *(undefined8 *)(param_1 + 0x14) = uVar3;
  }
  if (pUVar4 != (UObject *)0x0) {
    *(undefined8 *)&param_1[0xf].field_0x10 = *(undefined8 *)&pUVar4->field_0x18;
    local_28[0] = pUVar4;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&param_1[0xf].field_0x20,(FObjectPtr)local_28);
    *(undefined8 *)&param_1[0x14].field_0x8 = uVar2;
  }
  InitComponentConstraint((UPhysicsConstraintComponent *)param_1);
  return;
}

// execSetConstraintReferenceFrame @ 148330030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UPhysicsConstraintComponent::execSetConstraintReferenceFrame
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  TTransform<double> *pTVar12;
  undefined1 auStack_a8 [32];
  byte local_88 [16];
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_88[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_88);
  }
  fVar6 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar9 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[0];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar7 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar10 = GlobalVectorConstants::FloatZero.m128_f32[3];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar8 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar11 = GlobalVectorConstants::Float1110.m128_f32[3];
  local_78.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_78.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_78.Rotation.ZW.m128d_f64[0] = (double)fVar6;
  local_78.Rotation.ZW.m128d_f64[1] = (double)fVar9;
  local_78.Translation.ZW.m128d_f64[0] = (double)fVar7;
  local_78.Translation.ZW.m128d_f64[1] = (double)fVar10;
  local_78.Translation.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar4,0);
  local_78.Translation.XY.m128d_f64[0] = (double)fVar2;
  local_78.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  local_78.Scale3D.ZW.m128d_f64[0] = (double)fVar8;
  local_78.Scale3D.ZW.m128d_f64[1] = (double)fVar11;
  local_78.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar5,0);
  local_78.Scale3D.XY.m128d_f64[0] = (double)fVar3;
  local_78.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  pTVar12 = &local_78;
  if ((TTransform<double> *)param_2->MostRecentPropertyAddress != (TTransform<double> *)0x0) {
    pTVar12 = (TTransform<double> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FConstraintInstance::SetRefFrame
            ((FConstraintInstance *)&param_1[0x11].field_0x10,(uint)local_88[0],pTVar12);
  return;
}

// execSetConstraintReferenceOrientation @ 148330190

void __cdecl
UPhysicsConstraintComponent::execSetConstraintReferenceOrientation
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TVector<double> *pTVar2;
  TVector<double> *pTVar3;
  byte local_res8 [8];
  TVector<double> local_38;
  TVector<double> local_20;
  
  local_res8[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pTVar3 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  pTVar2 = &local_38;
  if (pTVar3 != (TVector<double> *)0x0) {
    pTVar2 = pTVar3;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_20);
  }
  pTVar3 = &local_20;
  if ((TVector<double> *)param_2->MostRecentPropertyAddress != (TVector<double> *)0x0) {
    pTVar3 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FConstraintInstance::SetRefOrientation
            ((FConstraintInstance *)&param_1[0x11].field_0x10,(uint)local_res8[0],pTVar2,pTVar3);
  return;
}

// execSetConstraintReferencePosition @ 1483302d0

void __cdecl
UPhysicsConstraintComponent::execSetConstraintReferencePosition
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TVector<double> *pTVar2;
  byte local_res8 [8];
  TVector<double> local_28;
  
  local_res8[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pTVar2 = &local_28;
  if ((TVector<double> *)param_2->MostRecentPropertyAddress != (TVector<double> *)0x0) {
    pTVar2 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FConstraintInstance::SetRefPosition
            ((FConstraintInstance *)&param_1[0x11].field_0x10,(uint)local_res8[0],pTVar2);
  return;
}

// execSetContactTransferScale @ 1483303b0

void __cdecl
UPhysicsConstraintComponent::execSetContactTransferScale
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)&param_1[0x19].field_0x24 = local_res8[0];
  FConstraintInstance::UpdateContactTransferScale((FConstraintInstance *)&param_1[0x11].field_0x10);
  return;
}

// execSetDisableCollision @ 148330450

void __cdecl
UPhysicsConstraintComponent::execSetDisableCollision(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FConstraintInstance::SetDisableCollision
            ((FConstraintInstance *)&param_1[0x11].field_0x10,local_res8[0] != 0);
  return;
}

// execSetLinearBreakable @ 148330580

void __cdecl
UPhysicsConstraintComponent::execSetLinearBreakable(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  int local_res8 [2];
  undefined4 local_res10 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar2 = local_res8[0] != 0;
  local_res10[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0x1c].field_0x9 = param_1[0x1c].field_0x9 & 0xfe;
  param_1[0x1c].field_0x9 = param_1[0x1c].field_0x9 | bVar2;
  *(undefined4 *)&param_1[0x19].field_0x14 = local_res10[0];
  FConstraintInstance::UpdateBreakable((FConstraintInstance *)&param_1[0x11].field_0x10);
  return;
}

// execSetLinearDriveAccelerationMode @ 148330710

void __cdecl
UPhysicsConstraintComponent::execSetLinearDriveAccelerationMode
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FConstraintInstance::SetLinearDriveAccelerationMode
            ((FConstraintInstance *)&param_1[0x11].field_0x10,local_res8[0] != 0);
  return;
}

// execSetLinearDriveParams @ 1483307b0

void __cdecl
UPhysicsConstraintComponent::execSetLinearDriveParams
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res8 [2];
  float local_res10 [2];
  float local_res20 [2];
  
  local_res20[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FConstraintInstance::SetLinearDriveParams
            ((FConstraintInstance *)&param_1[0x11].field_0x10,local_res20[0],local_res10[0],
             local_res8[0]);
  return;
}

// execSetLinearPlasticity @ 1483308d0

void __cdecl
UPhysicsConstraintComponent::execSetLinearPlasticity(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  undefined1 local_res8 [8];
  int local_res10 [2];
  undefined4 local_res20 [2];
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar2 = local_res10[0] != 0;
  local_res20[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res8[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0x1c].field_0x9 = param_1[0x1c].field_0x9 & 0xfd;
  param_1[0x1c].field_0x9 = param_1[0x1c].field_0x9 | bVar2 * '\x02';
  *(undefined4 *)&param_1[0x19].field_0x18 = local_res20[0];
  param_1[0x21].field_0x18 = local_res8[0];
  FConstraintInstance::UpdatePlasticity((FConstraintInstance *)&param_1[0x11].field_0x10);
  return;
}

// execSetLinearPositionDrive @ 148330a10

void __cdecl
UPhysicsConstraintComponent::execSetLinearPositionDrive
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  bool bVar3;
  int local_res8 [2];
  int local_res10 [4];
  int local_res20 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar2 = local_res8[0] != 0;
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar3 = local_res10[0] != 0;
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FConstraintInstance::SetLinearPositionDrive
            ((FConstraintInstance *)&param_1[0x11].field_0x10,bVar2,bVar3,local_res20[0] != 0);
  return;
}

// execSetLinearPositionTarget @ 148330b30

void __cdecl
UPhysicsConstraintComponent::execSetLinearPositionTarget
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TVector<double> *pTVar2;
  TVector<double> local_28;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pTVar2 = &local_28;
  if ((TVector<double> *)param_2->MostRecentPropertyAddress != (TVector<double> *)0x0) {
    pTVar2 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FConstraintInstance::SetLinearPositionTarget
            ((FConstraintInstance *)&param_1[0x11].field_0x10,pTVar2);
  return;
}

// execSetLinearVelocityDrive @ 148330c70

void __cdecl
UPhysicsConstraintComponent::execSetLinearVelocityDrive
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  bool bVar3;
  int local_res8 [2];
  int local_res10 [4];
  int local_res20 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar2 = local_res8[0] != 0;
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar3 = local_res10[0] != 0;
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FConstraintInstance::SetLinearVelocityDrive
            ((FConstraintInstance *)&param_1[0x11].field_0x10,bVar2,bVar3,local_res20[0] != 0);
  return;
}

// execSetLinearVelocityTarget @ 148330d90

void __cdecl
UPhysicsConstraintComponent::execSetLinearVelocityTarget
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TVector<double> *pTVar2;
  TVector<double> local_28;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pTVar2 = &local_28;
  if ((TVector<double> *)param_2->MostRecentPropertyAddress != (TVector<double> *)0x0) {
    pTVar2 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FConstraintInstance::SetLinearVelocityTarget
            ((FConstraintInstance *)&param_1[0x11].field_0x10,pTVar2);
  return;
}

// execSetLinearXLimit @ 148330e30

void __cdecl
UPhysicsConstraintComponent::execSetLinearXLimit(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res8 [8];
  undefined4 local_res10 [2];
  
  local_res8[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res10[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0x1a].field_0x19 = param_1[0x1a].field_0x19;
  param_1[0x1a].field_0x1a = param_1[0x1a].field_0x1a;
  *(undefined4 *)&param_1[0x1a].field_0x14 = local_res10[0];
  param_1[0x1a].field_0x18 = local_res8[0];
  FConstraintInstance::UpdateLinearLimit((FConstraintInstance *)&param_1[0x11].field_0x10);
  return;
}

// execSetLinearYLimit @ 148330f30

void __cdecl
UPhysicsConstraintComponent::execSetLinearYLimit(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res8 [8];
  undefined4 local_res10 [2];
  
  local_res8[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res10[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0x1a].field_0x1a = param_1[0x1a].field_0x1a;
  *(undefined4 *)&param_1[0x1a].field_0x14 = local_res10[0];
  param_1[0x1a].field_0x19 = local_res8[0];
  FConstraintInstance::UpdateLinearLimit((FConstraintInstance *)&param_1[0x11].field_0x10);
  return;
}

// execSetLinearZLimit @ 148331020

void __cdecl
UPhysicsConstraintComponent::execSetLinearZLimit(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res8 [8];
  undefined4 local_res10 [2];
  
  local_res8[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res10[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0x1a].field_0x19 = param_1[0x1a].field_0x19;
  *(undefined4 *)&param_1[0x1a].field_0x14 = local_res10[0];
  param_1[0x1a].field_0x1a = local_res8[0];
  FConstraintInstance::UpdateLinearLimit((FConstraintInstance *)&param_1[0x11].field_0x10);
  return;
}

// execSetOrientationDriveSLERP @ 148331110

void __cdecl
UPhysicsConstraintComponent::execSetOrientationDriveSLERP
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FConstraintInstance::SetOrientationDriveSLERP
            ((FConstraintInstance *)&param_1[0x11].field_0x10,local_res8[0] != 0);
  return;
}

// execSetOrientationDriveTwistAndSwing @ 1483311b0

void __cdecl
UPhysicsConstraintComponent::execSetOrientationDriveTwistAndSwing
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  int local_res8 [2];
  int local_res10 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar2 = local_res8[0] != 0;
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FConstraintInstance::SetOrientationDriveTwistAndSwing
            ((FConstraintInstance *)&param_1[0x11].field_0x10,bVar2,local_res10[0] != 0);
  return;
}

// execSetProjectionEnabled @ 148331290

void __cdecl
UPhysicsConstraintComponent::execSetProjectionEnabled
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] != 0) {
    FConstraintInstance::EnableProjection((FConstraintInstance *)&param_1[0x11].field_0x10);
    return;
  }
  FConstraintInstance::DisableProjection((FConstraintInstance *)&param_1[0x11].field_0x10);
  return;
}

// execSetProjectionParams @ 148331340

void __cdecl
UPhysicsConstraintComponent::execSetProjectionParams(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res8 [2];
  float local_res10 [2];
  float local_res20 [2];
  float local_18 [4];
  
  local_18[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  local_res20[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FConstraintInstance::SetProjectionParams
            ((FConstraintInstance *)&param_1[0x11].field_0x10,
             (bool)((byte)param_1[0x1c].field_0x8 >> 3 & 1),local_18[0],local_res20[0],
             local_res10[0],local_res8[0]);
  return;
}

