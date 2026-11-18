// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraAnimNotifies
// Functions: 16

// StaticClass @ 14a067d30

UClass * __cdecl UAnimNotifyState_TimedNiagaraEffect::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimNotifyState_TimedNiagaraEffect.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NiagaraAnimNotifies",L"AnimNotifyState_TimedNiagaraEffect",
               &Z_Registration_Info_UClass_UAnimNotifyState_TimedNiagaraEffect.InnerSingleton,
               StaticRegisterNativesUAnimNotifyState_TimedNiagaraEffect,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimNotifyState_TimedNiagaraEffect>,
               InternalVTableHelperCtorCaller<UAnimNotifyState_TimedNiagaraEffect>,local_res8,
               UAnimNotifyState::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimNotifyState_TimedNiagaraEffect.InnerSingleton;
}

// UAnimNotifyState_TimedNiagaraEffect @ 14a068c80

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

UAnimNotifyState_TimedNiagaraEffect * __thiscall
UAnimNotifyState_TimedNiagaraEffect::UAnimNotifyState_TimedNiagaraEffect
          (UAnimNotifyState_TimedNiagaraEffect *this,FVTableHelper *param_1)

{
  UAnimNotifyState::UAnimNotifyState((UAnimNotifyState *)this,param_1);
  this->bApplyRateScaleAsTimeDilation = false;
  this->_padding_ = (longlong)&___7UAnimNotifyState_TimedNiagaraEffect__6B_;
  (this->Template).field0_0x0.DebugPtr = (UNiagaraSystem *)0x0;
  (this->SocketName).ComparisonIndex = 0;
  (this->SocketName).Number = 0;
  (this->Scale).field0_0x0._s_0.X = 1.0;
  (this->Scale).field0_0x0._s_0.Y = 1.0;
  (this->Scale).field0_0x0._s_0.Z = 1.0;
  return this;
}

// UAnimNotifyState_TimedNiagaraEffect @ 14a068ce0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

UAnimNotifyState_TimedNiagaraEffect * __thiscall
UAnimNotifyState_TimedNiagaraEffect::UAnimNotifyState_TimedNiagaraEffect
          (UAnimNotifyState_TimedNiagaraEffect *this,FObjectInitializer *param_1)

{
  UAnimNotifyState::UAnimNotifyState((UAnimNotifyState *)this,param_1);
  this->_padding_ = (longlong)&___7UAnimNotifyState_TimedNiagaraEffect__6B_;
  (this->Scale).field0_0x0._s_0.X = 1.0;
  (this->Scale).field0_0x0._s_0.Y = 1.0;
  (this->Scale).field0_0x0._s_0.Z = 1.0;
  (this->SocketName).ComparisonIndex = 0;
  (this->SocketName).Number = 0;
  this->bApplyRateScaleAsTimeDilation = false;
  (this->Template).field0_0x0.DebugPtr = (UNiagaraSystem *)0x0;
  (this->LocationOffset).field0_0x0._s_0.X = 0.0;
  (this->LocationOffset).field0_0x0._s_0.Y = 0.0;
  (this->LocationOffset).field0_0x0._s_0.Z = 0.0;
  (this->RotationOffset).Pitch = 0.0;
  (this->RotationOffset).Yaw = 0.0;
  (this->RotationOffset).Roll = 0.0;
  return this;
}

// ~UAnimNotifyState_TimedNiagaraEffect @ 14a069040

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UAnimNotifyState_TimedNiagaraEffect::~UAnimNotifyState_TimedNiagaraEffect
          (UAnimNotifyState_TimedNiagaraEffect *this)

{
  this->_padding_ = (longlong)&___7UAnimNotifyState_TimedNiagaraEffect__6B_;
  UAnimNotifyState::~UAnimNotifyState((UAnimNotifyState *)this);
  return;
}

// GetNotifyName_Implementation @ 14a069360

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FString * __thiscall
UAnimNotifyState_TimedNiagaraEffect::GetNotifyName_Implementation
          (UAnimNotifyState_TimedNiagaraEffect *this,FString *__return_storage_ptr__)

{
  UNiagaraSystem *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = (this->Template).field0_0x0.DebugPtr;
  if (pUVar1 != (UNiagaraSystem *)0x0) {
    local_res8[0] = (FName)pUVar1->_padding_;
    ::FName::ToString(local_res8,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  UAnimNotifyState::GetNotifyName_Implementation((UAnimNotifyState *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14a069450

UClass * __cdecl UAnimNotifyState_TimedNiagaraEffect::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimNotifyState_TimedNiagaraEffect.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NiagaraAnimNotifies",L"AnimNotifyState_TimedNiagaraEffect",
               &Z_Registration_Info_UClass_UAnimNotifyState_TimedNiagaraEffect.InnerSingleton,
               StaticRegisterNativesUAnimNotifyState_TimedNiagaraEffect,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimNotifyState_TimedNiagaraEffect>,
               InternalVTableHelperCtorCaller<UAnimNotifyState_TimedNiagaraEffect>,local_res8,
               UAnimNotifyState::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimNotifyState_TimedNiagaraEffect.InnerSingleton;
}

// GetSpawnedComponentTag @ 14a069690

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FName __thiscall
UAnimNotifyState_TimedNiagaraEffect::GetSpawnedComponentTag
          (UAnimNotifyState_TimedNiagaraEffect *this)

{
  FName in_RDX;
  
  *(longlong *)in_RDX = this->_padding_;
  *(undefined4 *)((longlong)in_RDX + 4) = *(undefined4 *)((longlong)&this->_padding_ + 4);
  return in_RDX;
}

// GetSpawnedEffect @ 14a0696b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UFXSystemComponent * __thiscall
UAnimNotifyState_TimedNiagaraEffect::GetSpawnedEffect
          (UAnimNotifyState_TimedNiagaraEffect *this,UMeshComponent *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UFXSystemComponent *this_00;
  bool bVar3;
  UClass *pUVar4;
  FString *pFVar5;
  ForAnyElementType FVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  FName local_res10;
  TArray<USceneComponent_*,TSizedDefaultAllocator<32>_> local_48;
  FString local_38;
  FString local_28;
  
  if (param_1 != (UMeshComponent *)0x0) {
    local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.ArrayNum = 0;
    local_48.ArrayMax = 0;
    USceneComponent::GetChildrenComponents((USceneComponent *)param_1,false,&local_48);
    iVar2 = local_48.ArrayNum;
    if (local_48.ArrayNum != 0) {
      pFVar1 = local_48.AllocatorInstance.Data + (longlong)local_48.ArrayNum * 8;
      FVar6.Data = local_48.AllocatorInstance.Data;
      while( true ) {
        if (local_48.ArrayNum != iVar2) {
          `TCheckedPointerIterator<USceneComponent_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_res10);
        }
        if (FVar6.Data == pFVar1) break;
        this_00 = *(UFXSystemComponent **)FVar6.Data;
        if (this_00 != (UFXSystemComponent *)0x0) {
          local_res10.ComparisonIndex.Value = (uint)this->_padding_;
          local_res10.Number = *(uint *)((longlong)&this->_padding_ + 4);
          bVar3 = UActorComponent::ComponentHasTag((UActorComponent *)this_00,local_res10);
          if (bVar3) {
            pUVar4 = Z_Construct_UClass_UFXSystemComponent_NoRegister();
            iVar2 = (int)pUVar4->_padding_;
            if ((iVar2 <= *(int *)(this_00->_padding_ + 0x38)) &&
               ((longlong *)
                *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
                &pUVar4->_padding_)) {
              if (local_48.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
                return this_00;
              }
              FMemory::Free(local_48.AllocatorInstance.Data);
              return this_00;
            }
            pFVar5 = GetTypeName<UFXSystemComponent>(&local_38);
            pwVar7 = L"";
            if ((pFVar5->Data).ArrayNum == 0) {
              pwVar8 = L"";
            }
            else {
              pwVar8 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
            }
            pFVar5 = GetFullNameForCastLogError<USceneComponent>
                               (&local_28,(USceneComponent *)this_00);
            if ((pFVar5->Data).ArrayNum != 0) {
              pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
            }
                    /* WARNING: Subroutine does not return */
            CastLogError(pwVar7,pwVar8);
          }
        }
        FVar6.Data = FVar6.Data + 8;
      }
    }
    if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
  }
  return (UFXSystemComponent *)0x0;
}

// NotifyBegin @ 14a0698a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UAnimNotifyState_TimedNiagaraEffect::NotifyBegin
          (UAnimNotifyState_TimedNiagaraEffect *this,USkeletalMeshComponent *param_1,
          UAnimSequenceBase *param_2,float param_3)

{
  return;
}

// NotifyBegin @ 14a0698b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UAnimNotifyState_TimedNiagaraEffect::NotifyBegin
          (UAnimNotifyState_TimedNiagaraEffect *this,USkeletalMeshComponent *param_1,
          UAnimSequenceBase *param_2,float param_3,FAnimNotifyEventReference *param_4)

{
  longlong lVar1;
  FName local_res8;
  
  lVar1 = (**(code **)(this->_padding_ + 0x318))();
  if (lVar1 != 0) {
    local_res8.ComparisonIndex.Value = (uint)this->_padding_;
    local_res8.Number = *(uint *)((longlong)&this->_padding_ + 4);
    TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName>
              ((TArray<FName,TSizedDefaultAllocator<32>_> *)(lVar1 + 0x68),&local_res8);
  }
  UAnimNotifyState::NotifyBegin((UAnimNotifyState *)this,param_1,param_2,param_3,param_4);
  return;
}

// NotifyEnd @ 14a069a00

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UAnimNotifyState_TimedNiagaraEffect::NotifyEnd
          (UAnimNotifyState_TimedNiagaraEffect *this,USkeletalMeshComponent *param_1,
          UAnimSequenceBase *param_2)

{
  return;
}

// NotifyEnd @ 14a069a10

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UAnimNotifyState_TimedNiagaraEffect::NotifyEnd
          (UAnimNotifyState_TimedNiagaraEffect *this,USkeletalMeshComponent *param_1,
          UAnimSequenceBase *param_2,FAnimNotifyEventReference *param_3)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  UFXSystemComponent *pUVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 local_58;
  
  pUVar5 = GetSpawnedEffect(this,(UMeshComponent *)param_1);
  if (pUVar5 != (UFXSystemComponent *)0x0) {
    local_58 = CONCAT44(*(undefined4 *)((longlong)&this->_padding_ + 4),(int)this->_padding_);
    if ((((undefined8 *)pUVar5->_padding_ <= &local_58) &&
        (&local_58 < (undefined8 *)pUVar5->_padding_ + *(int *)((longlong)&pUVar5->_padding_ + 4)))
       && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar1 = (int)pUVar5->_padding_;
    if (iVar1 != 0) {
      iVar10 = 0;
      plVar2 = (longlong *)pUVar5->_padding_;
      bVar4 = *plVar2 != local_58;
      lVar7 = 0;
      lVar6 = local_58;
      iVar8 = 0;
      do {
        iVar9 = iVar8;
        do {
          lVar7 = lVar7 + 1;
          iVar9 = iVar9 + 1;
          if (iVar1 <= lVar7) break;
        } while (bVar4 == (plVar2[lVar7] != lVar6));
        if (bVar4 != false) {
          if (iVar10 != iVar8) {
            memmove(plVar2 + iVar10,plVar2 + iVar8,(longlong)(iVar9 - iVar8) << 3);
            lVar6 = local_58;
          }
          iVar10 = iVar10 + (iVar9 - iVar8);
        }
        bVar4 = (bool)(bVar4 ^ 1);
        iVar8 = iVar9;
      } while (lVar7 < iVar1);
      *(int *)&pUVar5->_padding_ = iVar10;
    }
    if (this->bDestroyAtEnd == false) {
      (**(code **)(pUVar5->_padding_ + 0x2c0))(pUVar5);
    }
    else {
      (**(code **)(pUVar5->_padding_ + 0x4a0))(pUVar5,0);
    }
  }
  UAnimNotifyState::NotifyEnd((UAnimNotifyState *)this,param_1,param_2,param_3);
  return;
}

// SpawnEffect @ 14a06a340

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

UFXSystemComponent * __thiscall
UAnimNotifyState_TimedNiagaraEffect::SpawnEffect
          (UAnimNotifyState_TimedNiagaraEffect *this,USkeletalMeshComponent *param_1,
          UAnimSequenceBase *param_2)

{
  UNiagaraSystem *pUVar1;
  char cVar2;
  int iVar3;
  UNiagaraComponent *this_00;
  TObjectPtr<UObject_const_>_u_0 local_78;
  TObjectPtr<UNiagaraSystem>_u_0 local_70;
  double local_68;
  double dStack_60;
  double local_58;
  double local_50;
  double dStack_48;
  double local_40;
  double local_38;
  double dStack_30;
  double local_28;
  USkeletalMeshComponent *local_20;
  FName local_18;
  undefined1 local_10;
  undefined1 local_f;
  undefined4 local_e;
  
  if (((this->Template).field0_0x0.DebugPtr != (UNiagaraSystem *)0x0) &&
     ((cVar2 = (**(code **)(param_1->_padding_ + 0x540))(param_1,this->SocketName), cVar2 != '\0' ||
      (iVar3 = USkinnedMeshComponent::GetBoneIndex
                         ((USkinnedMeshComponent *)param_1,this->SocketName), iVar3 != -1)))) {
    local_78.DebugPtr = (UObject *)0x0;
    local_68 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_60 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_58 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_40 = UE::Math::TRotator<double>::ZeroRotator.Roll;
    local_28 = (double)__real_3ff0000000000000;
    local_e = 0x10001;
    local_50 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
    dStack_48 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
    local_38 = (double)___xmm_3ff00000000000003ff0000000000000;
    dStack_30 = (double)_UNK_150689688;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = (this->Template).field0_0x0.DebugPtr, pUVar1 != (UNiagaraSystem *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    local_70 = (this->Template).field0_0x0;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_68 = (this->LocationOffset).field0_0x0._s_0.X;
    dStack_60 = (this->LocationOffset).field0_0x0._s_0.Y;
    local_f = this->bDestroyAtEnd == false;
    local_58 = (this->LocationOffset).field0_0x0._s_0.Z;
    local_18 = this->SocketName;
    local_50 = (this->RotationOffset).Pitch;
    dStack_48 = (this->RotationOffset).Yaw;
    local_40 = (this->RotationOffset).Roll;
    local_38 = (this->Scale).field0_0x0._s_0.X;
    dStack_30 = (this->Scale).field0_0x0._s_0.Y;
    local_10 = 0;
    local_28 = (this->Scale).field0_0x0._s_0.Z;
    local_20 = param_1;
    this_00 = UNiagaraFunctionLibrary::SpawnSystemAttachedWithParams
                        ((FFXSystemSpawnParameters *)&local_78.ObjectPtr);
    if (this_00 != (UNiagaraComponent *)0x0) {
      if (this->bApplyRateScaleAsTimeDilation == false) {
        return (UFXSystemComponent *)this_00;
      }
      UNiagaraComponent::SetCustomTimeDilation(this_00,param_2->RateScale);
      return (UFXSystemComponent *)this_00;
    }
  }
  return (UFXSystemComponent *)0x0;
}

// StaticRegisterNativesUAnimNotifyState_TimedNiagaraEffect @ 14a06a910

void __cdecl
UAnimNotifyState_TimedNiagaraEffect::StaticRegisterNativesUAnimNotifyState_TimedNiagaraEffect(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// ValidateParameters @ 14a06a9d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
UAnimNotifyState_TimedNiagaraEffect::ValidateParameters
          (UAnimNotifyState_TimedNiagaraEffect *this,USkeletalMeshComponent *param_1)

{
  char cVar1;
  int iVar2;
  
  if ((this->Template).field0_0x0.DebugPtr == (UNiagaraSystem *)0x0) {
    return false;
  }
  cVar1 = (**(code **)(param_1->_padding_ + 0x540))(param_1,this->SocketName);
  if (cVar1 == '\0') {
    iVar2 = USkinnedMeshComponent::GetBoneIndex((USkinnedMeshComponent *)param_1,this->SocketName);
    return iVar2 != -1;
  }
  return true;
}

// execGetSpawnedEffect @ 14a06ad80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UAnimNotifyState_TimedNiagaraEffect::execGetSpawnedEffect
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FProperty *pFVar3;
  bool bVar4;
  UClass *pUVar5;
  FString *pFVar6;
  ForAnyElementType FVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  USceneComponent *this;
  FName local_res10;
  USceneComponent *local_res20;
  TArray<USceneComponent_*,TSizedDefaultAllocator<32>_> local_58;
  FString local_48;
  FString local_38;
  
  local_res20 = (USceneComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 != (USceneComponent *)0x0) {
    local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.ArrayNum = 0;
    local_58.ArrayMax = 0;
    USceneComponent::GetChildrenComponents(local_res20,false,&local_58);
    iVar2 = local_58.ArrayNum;
    if (local_58.ArrayNum != 0) {
      pFVar1 = local_58.AllocatorInstance.Data + (longlong)local_58.ArrayNum * 8;
      FVar7.Data = local_58.AllocatorInstance.Data;
      do {
        if (local_58.ArrayNum != iVar2) {
          `TCheckedPointerIterator<USceneComponent_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_res10);
        }
        if (FVar7.Data == pFVar1) break;
        this = *(USceneComponent **)FVar7.Data;
        if (this != (USceneComponent *)0x0) {
          local_res10.ComparisonIndex.Value = (uint)*(undefined8 *)&param_1->field_0x18;
          local_res10.Number = *(uint *)&param_1->field_0xc;
          bVar4 = UActorComponent::ComponentHasTag((UActorComponent *)this,local_res10);
          if (bVar4) goto LAB_14a06ae97;
        }
        FVar7.Data = FVar7.Data + 8;
      } while( true );
    }
    if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.AllocatorInstance.Data);
    }
  }
  this = (USceneComponent *)0x0;
LAB_14a06aedd:
  *(USceneComponent **)param_3 = this;
  return;
LAB_14a06ae97:
  pUVar5 = Z_Construct_UClass_UFXSystemComponent_NoRegister();
  iVar2 = (int)pUVar5->_padding_;
  if ((*(int *)(this->_padding_ + 0x38) < iVar2) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
      &pUVar5->_padding_)) {
    pFVar6 = GetTypeName<UFXSystemComponent>(&local_48);
    pwVar8 = L"";
    if ((pFVar6->Data).ArrayNum == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
    pFVar6 = GetFullNameForCastLogError<USceneComponent>(&local_38,this);
    if ((pFVar6->Data).ArrayNum != 0) {
      pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar8,pwVar9);
  }
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  goto LAB_14a06aedd;
}

