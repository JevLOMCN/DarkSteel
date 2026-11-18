// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraAnimNotifies
// Functions: 16

// StaticClass @ 14a067e30

UClass * __cdecl UAnimNotifyState_TimedNiagaraEffectAdvanced::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimNotifyState_TimedNiagaraEffectAdvanced.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NiagaraAnimNotifies",L"AnimNotifyState_TimedNiagaraEffectAdvanced",
               &Z_Registration_Info_UClass_UAnimNotifyState_TimedNiagaraEffectAdvanced.
                InnerSingleton,StaticRegisterNativesUAnimNotifyState_TimedNiagaraEffectAdvanced,
               0x100,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimNotifyState_TimedNiagaraEffectAdvanced>,
               InternalVTableHelperCtorCaller<UAnimNotifyState_TimedNiagaraEffectAdvanced>,
               local_res8,UAnimNotifyState_TimedNiagaraEffect::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimNotifyState_TimedNiagaraEffectAdvanced.InnerSingleton;
}

// UAnimNotifyState_TimedNiagaraEffectAdvanced @ 14a068d50

UAnimNotifyState_TimedNiagaraEffectAdvanced * __thiscall
UAnimNotifyState_TimedNiagaraEffectAdvanced::UAnimNotifyState_TimedNiagaraEffectAdvanced
          (UAnimNotifyState_TimedNiagaraEffectAdvanced *this,FVTableHelper *param_1)

{
  UAnimNotifyState::UAnimNotifyState((UAnimNotifyState *)this,param_1);
  this->NotifyProgressType = Forward;
  this->bApplyRateScaleToProgress = true;
  this->_padding_ = 0;
  this->_padding_ = 0x3ff0000000000000;
  this->_padding_ = 0x3ff0000000000000;
  this->_padding_ = 0x3ff0000000000000;
  this->_padding_ = (longlong)&___7UAnimNotifyState_TimedNiagaraEffectAdvanced__6B_;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  (this->NotifyProgressUserParameter).ComparisonIndex = 0;
  (this->NotifyProgressUserParameter).Number = 0;
  (this->AnimCurves).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnimCurves).ArrayNum = 0;
  (this->AnimCurves).ArrayMax = 0;
  *(undefined8 *)&this->ProgressInfoMap = 0;
  *(undefined8 *)&(this->ProgressInfoMap).field_0x8 = 0;
  *(undefined8 *)&(this->ProgressInfoMap).field_0x20 = 0;
  *(undefined4 *)&(this->ProgressInfoMap).field_0x28 = 0;
  *(undefined4 *)&(this->ProgressInfoMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ProgressInfoMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ProgressInfoMap).field_0x34 = 0;
  *(undefined8 *)&(this->ProgressInfoMap).field_0x40 = 0;
  *(undefined4 *)&(this->ProgressInfoMap).field_0x48 = 0;
  return this;
}

// UAnimNotifyState_TimedNiagaraEffectAdvanced @ 14a068e00

UAnimNotifyState_TimedNiagaraEffectAdvanced * __thiscall
UAnimNotifyState_TimedNiagaraEffectAdvanced::UAnimNotifyState_TimedNiagaraEffectAdvanced
          (UAnimNotifyState_TimedNiagaraEffectAdvanced *this,FObjectInitializer *param_1)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  UAnimNotifyState::UAnimNotifyState((UAnimNotifyState *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0x3ff0000000000000;
  this->_padding_ = 0x3ff0000000000000;
  this->_padding_ = 0x3ff0000000000000;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UAnimNotifyState_TimedNiagaraEffectAdvanced__6B_;
  (this->NotifyProgressUserParameter).ComparisonIndex = 0;
  (this->NotifyProgressUserParameter).Number = 0;
  (this->AnimCurves).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnimCurves).ArrayNum = 0;
  (this->AnimCurves).ArrayMax = 0;
  *(undefined8 *)&this->ProgressInfoMap = 0;
  *(undefined8 *)&(this->ProgressInfoMap).field_0x8 = 0;
  *(undefined8 *)&(this->ProgressInfoMap).field_0x20 = 0;
  this->NotifyProgressType = Forward;
  this->bApplyRateScaleToProgress = true;
  *(undefined4 *)&(this->ProgressInfoMap).field_0x28 = 0;
  *(undefined4 *)&(this->ProgressInfoMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ProgressInfoMap).field_0x34 = 0;
  *(undefined4 *)&(this->ProgressInfoMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ProgressInfoMap).field_0x40 = 0;
  *(undefined4 *)&(this->ProgressInfoMap).field_0x48 = 0;
  pFVar1 = ::FName::FName(local_res8,"NormalizedNotifyProgress");
  this->NotifyProgressUserParameter = *pFVar1;
  return this;
}

// ~UAnimNotifyState_TimedNiagaraEffectAdvanced @ 14a069060

void __thiscall
UAnimNotifyState_TimedNiagaraEffectAdvanced::~UAnimNotifyState_TimedNiagaraEffectAdvanced
          (UAnimNotifyState_TimedNiagaraEffectAdvanced *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UAnimNotifyState_TimedNiagaraEffectAdvanced__6B_;
  *(undefined4 *)&(this->ProgressInfoMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ProgressInfoMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UMeshComponent_*,UAnimNotifyState_TimedNiagaraEffectAdvanced::FInstanceProgressInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UMeshComponent_*,UAnimNotifyState_TimedNiagaraEffectAdvanced::FInstanceProgressInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UMeshComponent_*,UAnimNotifyState_TimedNiagaraEffectAdvanced::FInstanceProgressInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ProgressInfoMap);
  pFVar2 = (this->AnimCurves).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7UAnimNotifyState_TimedNiagaraEffect__6B_;
  UAnimNotifyState::~UAnimNotifyState((UAnimNotifyState *)this);
  return;
}

// GetNotifyProgress @ 14a069400

float __thiscall
UAnimNotifyState_TimedNiagaraEffectAdvanced::GetNotifyProgress
          (UAnimNotifyState_TimedNiagaraEffectAdvanced *this,UMeshComponent *param_1)

{
  FInstanceProgressInfo *pFVar1;
  float fVar2;
  
  pFVar1 = TMapBase<UMeshComponent_*,UAnimNotifyState_TimedNiagaraEffectAdvanced::FInstanceProgressInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMeshComponent_*,UAnimNotifyState_TimedNiagaraEffectAdvanced::FInstanceProgressInfo,0>_>
           ::Find((TMapBase<UMeshComponent_*,UAnimNotifyState_TimedNiagaraEffectAdvanced::FInstanceProgressInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMeshComponent_*,UAnimNotifyState_TimedNiagaraEffectAdvanced::FInstanceProgressInfo,0>_>
                   *)&this->ProgressInfoMap,param_1);
  if (pFVar1 != (FInstanceProgressInfo *)0x0) {
    fVar2 = pFVar1->Duration;
    if (pFVar1->Duration <= __real_322bcc77) {
      fVar2 = __real_322bcc77;
    }
    fVar2 = pFVar1->Elapsed / fVar2;
    if (__real_3f800000 <= fVar2) {
      fVar2 = __real_3f800000;
    }
    if (fVar2 <= 0.0) {
      fVar2 = 0.0;
    }
    return fVar2;
  }
  return 0.0;
}

// GetPrivateStaticClass @ 14a069510

UClass * __cdecl UAnimNotifyState_TimedNiagaraEffectAdvanced::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimNotifyState_TimedNiagaraEffectAdvanced.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NiagaraAnimNotifies",L"AnimNotifyState_TimedNiagaraEffectAdvanced",
               &Z_Registration_Info_UClass_UAnimNotifyState_TimedNiagaraEffectAdvanced.
                InnerSingleton,StaticRegisterNativesUAnimNotifyState_TimedNiagaraEffectAdvanced,
               0x100,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimNotifyState_TimedNiagaraEffectAdvanced>,
               InternalVTableHelperCtorCaller<UAnimNotifyState_TimedNiagaraEffectAdvanced>,
               local_res8,UAnimNotifyState_TimedNiagaraEffect::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimNotifyState_TimedNiagaraEffectAdvanced.InnerSingleton;
}

// NotifyBegin @ 14a069930

void __thiscall
UAnimNotifyState_TimedNiagaraEffectAdvanced::NotifyBegin
          (UAnimNotifyState_TimedNiagaraEffectAdvanced *this,USkeletalMeshComponent *param_1,
          UAnimSequenceBase *param_2,float param_3)

{
  return;
}

// NotifyBegin @ 14a069940

void __thiscall
UAnimNotifyState_TimedNiagaraEffectAdvanced::NotifyBegin
          (UAnimNotifyState_TimedNiagaraEffectAdvanced *this,USkeletalMeshComponent *param_1,
          UAnimSequenceBase *param_2,float param_3,FAnimNotifyEventReference *param_4)

{
  longlong lVar1;
  FName local_res8;
  FName *local_res10 [2];
  TKeyInitializer<UMeshComponent_*_&&> local_res20;
  
  lVar1 = (**(code **)(this->_padding_ + 0x318))();
  if (lVar1 != 0) {
    local_res8.ComparisonIndex.Value = (uint)this->_padding_;
    local_res8.Number = *(uint *)((longlong)&this->_padding_ + 4);
    TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName>
              ((TArray<FName,TSizedDefaultAllocator<32>_> *)(lVar1 + 0x68),&local_res8);
  }
  UAnimNotifyState::NotifyBegin((UAnimNotifyState *)this,param_1,param_2,param_3,param_4);
  local_res10[0] = &local_res8;
  local_res8 = (FName)param_1;
  TSet<TTuple<UMeshComponent_*,UAnimNotifyState_TimedNiagaraEffectAdvanced::FInstanceProgressInfo>,TDefaultMapHashableKeyFuncs<UMeshComponent_*,UAnimNotifyState_TimedNiagaraEffectAdvanced::FInstanceProgressInfo,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<UMeshComponent_*_&&>_>
            ((TSet<TTuple<UMeshComponent_*,UAnimNotifyState_TimedNiagaraEffectAdvanced::FInstanceProgressInfo>,TDefaultMapHashableKeyFuncs<UMeshComponent_*,UAnimNotifyState_TimedNiagaraEffectAdvanced::FInstanceProgressInfo,0>,FDefaultSetAllocator>
              *)&this->ProgressInfoMap,&local_res20,(bool *)local_res10);
  lVar1 = *(longlong *)&this->ProgressInfoMap;
  *(float *)(lVar1 + 8 + (longlong)(int)local_res20.Key * 0x18) = param_3;
  *(undefined4 *)(lVar1 + 0xc + (longlong)(int)local_res20.Key * 0x18) = 0;
  return;
}

// NotifyEnd @ 14a069be0

void __thiscall
UAnimNotifyState_TimedNiagaraEffectAdvanced::NotifyEnd
          (UAnimNotifyState_TimedNiagaraEffectAdvanced *this,USkeletalMeshComponent *param_1,
          UAnimSequenceBase *param_2)

{
  return;
}

// NotifyEnd @ 14a069bf0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UAnimNotifyState_TimedNiagaraEffectAdvanced::NotifyEnd
          (UAnimNotifyState_TimedNiagaraEffectAdvanced *this,USkeletalMeshComponent *param_1,
          UAnimSequenceBase *param_2,FAnimNotifyEventReference *param_3)

{
  uint uVar1;
  USkeletalMeshComponent *local_res8;
  
  UAnimNotifyState_TimedNiagaraEffect::NotifyEnd
            ((UAnimNotifyState_TimedNiagaraEffect *)this,param_1,param_2,param_3);
  if (*(int *)&(this->ProgressInfoMap).field_0x8 != *(int *)&(this->ProgressInfoMap).field_0x34) {
    uVar1 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    local_res8 = param_1;
    TSet<TTuple<UMeshComponent_*,UAnimNotifyState_TimedNiagaraEffectAdvanced::FInstanceProgressInfo>,TDefaultMapHashableKeyFuncs<UMeshComponent_*,UAnimNotifyState_TimedNiagaraEffectAdvanced::FInstanceProgressInfo,0>,FDefaultSetAllocator>
    ::RemoveImpl<UMeshComponent_const_*>
              ((TSet<TTuple<UMeshComponent_*,UAnimNotifyState_TimedNiagaraEffectAdvanced::FInstanceProgressInfo>,TDefaultMapHashableKeyFuncs<UMeshComponent_*,UAnimNotifyState_TimedNiagaraEffectAdvanced::FInstanceProgressInfo,0>,FDefaultSetAllocator>
                *)&this->ProgressInfoMap,uVar1 >> 0x10 ^ uVar1,(UMeshComponent **)&local_res8);
  }
  return;
}

// NotifyTick @ 14a069c60

void __thiscall
UAnimNotifyState_TimedNiagaraEffectAdvanced::NotifyTick
          (UAnimNotifyState_TimedNiagaraEffectAdvanced *this,USkeletalMeshComponent *param_1,
          UAnimSequenceBase *param_2,float param_3)

{
  return;
}

// NotifyTick @ 14a069c70

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UAnimNotifyState_TimedNiagaraEffectAdvanced::NotifyTick
          (UAnimNotifyState_TimedNiagaraEffectAdvanced *this,USkeletalMeshComponent *param_1,
          UAnimSequenceBase *param_2,float param_3,FAnimNotifyEventReference *param_4)

{
  ENiagaraAnimNotifyProgressType EVar1;
  int iVar2;
  FName FVar3;
  longlong lVar4;
  code *pcVar5;
  float fVar6;
  bool bVar7;
  uint uVar8;
  FInstanceProgressInfo *pFVar9;
  UFXSystemComponent *pUVar10;
  UAnimInstance *this_00;
  uint uVar11;
  longlong lVar12;
  float fVar13;
  float local_res8 [2];
  float local_58 [12];
  
  UAnimNotifyState::NotifyTick((UAnimNotifyState *)this,param_1,param_2,param_3,param_4);
  pFVar9 = TMapBase<UMeshComponent_*,UAnimNotifyState_TimedNiagaraEffectAdvanced::FInstanceProgressInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMeshComponent_*,UAnimNotifyState_TimedNiagaraEffectAdvanced::FInstanceProgressInfo,0>_>
           ::Find((TMapBase<UMeshComponent_*,UAnimNotifyState_TimedNiagaraEffectAdvanced::FInstanceProgressInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMeshComponent_*,UAnimNotifyState_TimedNiagaraEffectAdvanced::FInstanceProgressInfo,0>_>
                   *)&this->ProgressInfoMap,(UMeshComponent *)param_1);
  fVar6 = __real_3f800000;
  if (pFVar9 != (FInstanceProgressInfo *)0x0) {
    fVar13 = __real_3f800000;
    if (this->bApplyRateScaleToProgress != false) {
      fVar13 = (float)((uint)param_2->RateScale & __xmm_7fffffff7fffffff7fffffff7fffffff);
    }
    pFVar9->Elapsed = fVar13 * param_3 + pFVar9->Elapsed;
  }
  pUVar10 = UAnimNotifyState_TimedNiagaraEffect::GetSpawnedEffect
                      ((UAnimNotifyState_TimedNiagaraEffect *)this,(UMeshComponent *)param_1);
  if (pUVar10 != (UFXSystemComponent *)0x0) {
    EVar1 = this->NotifyProgressType;
    if ((EVar1 != None) && (this->NotifyProgressUserParameter != (FName)0x0)) {
      fVar13 = GetNotifyProgress(this,(UMeshComponent *)param_1);
      if (EVar1 == Reverse) {
        fVar13 = fVar6 - fVar13;
      }
      (**(code **)(pUVar10->_padding_ + 0xaa0))(pUVar10,this->NotifyProgressUserParameter,fVar13);
    }
    if ((this->AnimCurves).ArrayNum != 0) {
      this_00 = USkeletalMeshComponent::GetAnimInstance(param_1);
      iVar2 = (this->AnimCurves).ArrayNum;
      uVar11 = 0;
      if (this_00 == (UAnimInstance *)0x0) {
        if (iVar2 != 0) {
          lVar12 = 0;
          do {
            uVar8 = 0;
            if ((int)uVar11 < (this->AnimCurves).ArrayNum) {
              uVar8 = ~uVar11 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            uVar8 = 0;
            if ((int)uVar11 < (this->AnimCurves).ArrayNum) {
              uVar8 = ~uVar11 >> 0x1f;
            }
            FVar3 = *(FName *)((this->AnimCurves).AllocatorInstance.Data + lVar12);
            if ((uVar8 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            lVar4 = *(longlong *)((this->AnimCurves).AllocatorInstance.Data + lVar12 + 8);
            if ((FVar3 != (FName)0x0) && (lVar4 != 0)) {
              local_58[0] = 0.0;
              bVar7 = USkeletalMeshComponent::GetCurveValue(param_1,FVar3,0.0,local_58);
              if (bVar7) {
                (**(code **)(pUVar10->_padding_ + 0xaa0))(pUVar10,lVar4,local_58[0]);
              }
            }
            uVar11 = uVar11 + 1;
            lVar12 = lVar12 + 0x10;
          } while (uVar11 != (this->AnimCurves).ArrayNum);
        }
      }
      else if (iVar2 != 0) {
        lVar12 = 0;
        do {
          uVar8 = 0;
          if ((int)uVar11 < (this->AnimCurves).ArrayNum) {
            uVar8 = ~uVar11 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar8 = 0;
          if ((int)uVar11 < (this->AnimCurves).ArrayNum) {
            uVar8 = ~uVar11 >> 0x1f;
          }
          FVar3 = *(FName *)((this->AnimCurves).AllocatorInstance.Data + lVar12);
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          lVar4 = *(longlong *)((this->AnimCurves).AllocatorInstance.Data + lVar12 + 8);
          if ((FVar3 != (FName)0x0) && (lVar4 != 0)) {
            local_res8[0] = 0.0;
            bVar7 = UAnimInstance::GetCurveValue(this_00,FVar3,local_res8);
            if (bVar7) {
              (**(code **)(pUVar10->_padding_ + 0xaa0))(pUVar10,lVar4,local_res8[0]);
            }
          }
          uVar11 = uVar11 + 1;
          lVar12 = lVar12 + 0x10;
        } while (uVar11 != (this->AnimCurves).ArrayNum);
      }
    }
  }
  return;
}

// Serialize @ 14a06a260

void __thiscall
UAnimNotifyState_TimedNiagaraEffectAdvanced::Serialize
          (UAnimNotifyState_TimedNiagaraEffectAdvanced *this,FArchive *param_1)

{
  int iVar1;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  UObject::Serialize((UObject *)this,param_1);
  if ((param_1->field_0x28 & 1) != 0) {
    iVar1 = FArchiveState::CustomVer
                      ((FArchiveState *)param_1,&FFortniteMainBranchObjectVersion::GUID);
    if (iVar1 < 0x7e) {
      this->bApplyRateScaleToProgress = false;
    }
  }
  return;
}

// Serialize @ 14a06a2c0

void __thiscall
UAnimNotifyState_TimedNiagaraEffectAdvanced::Serialize
          (UAnimNotifyState_TimedNiagaraEffectAdvanced *this,FStructuredArchiveRecord param_1)

{
  int iVar1;
  FArchiveState *this_00;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  this_00 = (FArchiveState *)
            UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  (**(code **)(this_00->_padding_ + 0x230))(this_00,&FFortniteMainBranchObjectVersion::GUID);
  UObject::Serialize((UObject *)this,(FArchive *)this_00);
  if (this_00->ArIsLoading != 0) {
    iVar1 = FArchiveState::CustomVer(this_00,&FFortniteMainBranchObjectVersion::GUID);
    if (iVar1 < 0x7e) {
      this->bApplyRateScaleToProgress = false;
    }
  }
  return;
}

// StaticRegisterNativesUAnimNotifyState_TimedNiagaraEffectAdvanced @ 14a06a950

void __cdecl
UAnimNotifyState_TimedNiagaraEffectAdvanced::
StaticRegisterNativesUAnimNotifyState_TimedNiagaraEffectAdvanced(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffectAdvanced_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetNotifyProgress @ 14a06aca0

void __cdecl
UAnimNotifyState_TimedNiagaraEffectAdvanced::execGetNotifyProgress
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FInstanceProgressInfo *pFVar2;
  float fVar3;
  UMeshComponent *local_res8;
  
  local_res8 = (UMeshComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = TMapBase<UMeshComponent_*,UAnimNotifyState_TimedNiagaraEffectAdvanced::FInstanceProgressInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMeshComponent_*,UAnimNotifyState_TimedNiagaraEffectAdvanced::FInstanceProgressInfo,0>_>
           ::Find((TMapBase<UMeshComponent_*,UAnimNotifyState_TimedNiagaraEffectAdvanced::FInstanceProgressInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMeshComponent_*,UAnimNotifyState_TimedNiagaraEffectAdvanced::FInstanceProgressInfo,0>_>
                   *)&param_1[4].field_0x10,local_res8);
  if (pFVar2 == (FInstanceProgressInfo *)0x0) {
    *(undefined4 *)param_3 = 0;
  }
  else {
    fVar3 = pFVar2->Duration;
    if (pFVar2->Duration <= __real_322bcc77) {
      fVar3 = __real_322bcc77;
    }
    fVar3 = pFVar2->Elapsed / fVar3;
    if (__real_3f800000 <= fVar3) {
      fVar3 = __real_3f800000;
    }
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    *(float *)param_3 = fVar3;
  }
  return;
}

