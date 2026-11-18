// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 10

// StaticClass @ 1493175d0

UClass * __cdecl UNiagaraBaselineController_Basic::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraBaselineController_Basic.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraBaselineController_Basic",
               &Z_Registration_Info_UClass_UNiagaraBaselineController_Basic.InnerSingleton,
               StaticRegisterNativesUNiagaraBaselineController_Basic,0x80,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraBaselineController_Basic>,
               InternalVTableHelperCtorCaller<UNiagaraBaselineController_Basic>,local_res8,
               UNiagaraBaselineController::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraBaselineController_Basic.InnerSingleton;
}

// UNiagaraBaselineController_Basic @ 1493353e0

UNiagaraBaselineController_Basic * __thiscall
UNiagaraBaselineController_Basic::UNiagaraBaselineController_Basic
          (UNiagaraBaselineController_Basic *this,FVTableHelper *param_1)

{
  UNiagaraBaselineController::UNiagaraBaselineController((UNiagaraBaselineController *)this,param_1)
  ;
  this->NumInstances = 1;
  this->_padding_ = (longlong)&___7UNiagaraBaselineController_Basic__6B_;
  (this->SpawnedComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SpawnedComponents).ArrayNum = 0;
  (this->SpawnedComponents).ArrayMax = 0;
  return this;
}

// UNiagaraBaselineController_Basic @ 149335420

UNiagaraBaselineController_Basic * __thiscall
UNiagaraBaselineController_Basic::UNiagaraBaselineController_Basic
          (UNiagaraBaselineController_Basic *this,FObjectInitializer *param_1)

{
  UNiagaraBaselineController::UNiagaraBaselineController((UNiagaraBaselineController *)this,param_1)
  ;
  this->NumInstances = 1;
  this->_padding_ = (longlong)&___7UNiagaraBaselineController_Basic__6B_;
  (this->SpawnedComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SpawnedComponents).ArrayNum = 0;
  (this->SpawnedComponents).ArrayMax = 0;
  return this;
}

// ~UNiagaraBaselineController_Basic @ 149336c90

void __thiscall
UNiagaraBaselineController_Basic::~UNiagaraBaselineController_Basic
          (UNiagaraBaselineController_Basic *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraBaselineController_Basic__6B_;
  pFVar1 = (this->SpawnedComponents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UNiagaraBaselineController__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 149355cc0

UClass * __cdecl UNiagaraBaselineController_Basic::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraBaselineController_Basic.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraBaselineController_Basic",
               &Z_Registration_Info_UClass_UNiagaraBaselineController_Basic.InnerSingleton,
               StaticRegisterNativesUNiagaraBaselineController_Basic,0x80,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraBaselineController_Basic>,
               InternalVTableHelperCtorCaller<UNiagaraBaselineController_Basic>,local_res8,
               UNiagaraBaselineController::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraBaselineController_Basic.InnerSingleton;
}

// OnBeginTest_Implementation @ 14935fa30

void __thiscall
UNiagaraBaselineController_Basic::OnBeginTest_Implementation(UNiagaraBaselineController_Basic *this)

{
  TArray<TObjectPtr<UNiagaraComponent>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *_Dst;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  uVar3 = this->NumInstances;
  if (0 < (int)uVar3) {
    pTVar1 = &this->SpawnedComponents;
    iVar7 = (this->SpawnedComponents).ArrayNum;
    piVar2 = &(this->SpawnedComponents).ArrayNum;
    if (iVar7 < (int)uVar3) {
      iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,uVar3 - iVar7,&pTVar1->AllocatorInstance,piVar2,
                         &(this->SpawnedComponents).ArrayMax);
      memset((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 8,0,
             (longlong)(int)(uVar3 - iVar7) << 3);
      return;
    }
    if ((int)uVar3 < iVar7) {
      uVar8 = iVar7 - uVar3;
      if (((int)(uVar8 | uVar3) < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (uVar8 != 0) {
        _Dst = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar3 * 8;
        iVar7 = (*piVar2 - uVar3) - uVar8;
        if (iVar7 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar8 * 8,(longlong)iVar7 << 3);
        }
        *piVar2 = *piVar2 - uVar8;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&pTVar1->AllocatorInstance,*piVar2,&(this->SpawnedComponents).ArrayMax);
      }
    }
  }
  return;
}

// OnEndTest_Implementation @ 149360170

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
UNiagaraBaselineController_Basic::OnEndTest_Implementation
          (UNiagaraBaselineController_Basic *this,FNiagaraPerfBaselineStats *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  char *pcVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  FNiagaraPerfBaselineStats local_18;
  
  local_18.PerInstanceAvg_GT = param_1->PerInstanceAvg_GT;
  local_18.PerInstanceAvg_RT = param_1->PerInstanceAvg_RT;
  local_18.PerInstanceMax_GT = param_1->PerInstanceMax_GT;
  local_18.PerInstanceMax_RT = param_1->PerInstanceMax_RT;
  UEngine::RemoveOnScreenDebugMessage(GEngine,(longlong)*(int *)((longlong)&this->_padding_ + 4));
  pUVar6 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->_padding_);
  if (pUVar6 == (UObject *)0x0) {
LAB_1493601f1:
    pcVar8 = "System";
  }
  else {
    pUVar7 = Z_Construct_UClass_UNiagaraSystem_NoRegister();
    iVar2 = (int)pUVar7->_padding_;
    if ((*(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38) < iVar2) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar7->_padding_)) goto LAB_1493601f1;
    if ((UNiagaraEffectType *)this->_padding_ != (UNiagaraEffectType *)0x0) {
      UNiagaraEffectType::UpdatePerfBaselineStats((UNiagaraEffectType *)this->_padding_,&local_18);
      goto LAB_14936021e;
    }
    pcVar8 = "EffectType";
  }
  bVar5 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_7558058588782984960>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraPerfBaseline.cpp"
                     ,0x100,pcVar8);
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_14936021e:
  if ((AActor *)this->_padding_ == (AActor *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7558058588782984955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraPerfBaseline.cpp"
                       ,0x105,"Owner");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    AActor::Destroy((AActor *)this->_padding_,false,true);
  }
  pFVar9 = (this->SpawnedComponents).AllocatorInstance.Data;
  iVar2 = (this->SpawnedComponents).ArrayNum;
  pFVar1 = pFVar9 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->SpawnedComponents).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UNiagaraComponent>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar9 == pFVar1) break;
    plVar3 = *(longlong **)pFVar9;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x4a0))(plVar3,0);
    }
    pFVar9 = pFVar9 + 8;
  }
  return;
}

// OnOwnerTick_Implementation @ 149360430

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
UNiagaraBaselineController_Basic::OnOwnerTick_Implementation
          (UNiagaraBaselineController_Basic *this,float param_1)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  uint uVar11;
  UNiagaraSystem *pUVar12;
  UObject *pUVar13;
  UNiagaraComponent *pUVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  undefined8 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  TVector<double>_u_0 local_108;
  TRotator<double> local_e8;
  TVector<double>_u_0 local_c8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  double local_98;
  double local_80;
  
  pUVar12 = UNiagaraBaselineController::GetSystem((UNiagaraBaselineController *)this);
  if (pUVar12 != (UNiagaraSystem *)0x0) {
    if (this->_padding_ == 0) {
      bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_7558058588782984906>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraPerfBaseline.cpp"
                          ,0x136,"Owner");
      if (bVar10) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else {
      lVar17 = *(longlong *)(this->_padding_ + 0x1b8);
      uVar19 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
      uVar21 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      uVar22 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      uVar23 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
      if (lVar17 != 0) {
        local_a8 = *(undefined4 *)(lVar17 + 0x210);
        uStack_a4 = *(undefined4 *)(lVar17 + 0x214);
        uStack_a0 = *(undefined4 *)(lVar17 + 0x218);
        uStack_9c = *(undefined4 *)(lVar17 + 0x21c);
        local_98 = *(double *)(lVar17 + 0x220);
        uVar19 = local_98;
        uVar20 = local_a8;
        uVar21 = uStack_a4;
        uVar22 = uStack_a0;
        uVar23 = uStack_9c;
      }
      uVar16 = 0;
      if (0 < this->NumInstances) {
        lVar17 = 0;
        lVar18 = 0;
        local_108._s_0.Z = (double)uVar19;
        do {
          uVar15 = ~uVar16 >> 0x1f;
          uVar11 = 0;
          if ((int)uVar16 < (this->SpawnedComponents).ArrayNum) {
            uVar11 = uVar15;
          }
          if ((uVar11 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (*(longlong *)((this->SpawnedComponents).AllocatorInstance.Data + lVar18) == 0) {
LAB_149360601:
            dVar9 = UE::Math::TRotator<double>::ZeroRotator.Roll;
            dVar8 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
            dVar7 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
            uVar6 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
            uVar5 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
            uVar4 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
            local_80 = (double)uVar19;
            pUVar12 = UNiagaraBaselineController::GetSystem((UNiagaraBaselineController *)this);
            pUVar13 = (UObject *)(**(code **)(this->_padding_ + 0x180))(this);
            local_108._s_0.X = (double)uVar4;
            local_108._s_0.Y = (double)uVar5;
            local_108._s_0.Z = (double)uVar6;
            local_e8.Pitch = dVar7;
            local_e8.Yaw = dVar8;
            local_e8.Roll = dVar9;
            local_c8._s_0.Z = local_80;
            local_c8._0_4_ = uVar20;
            local_c8._4_4_ = uVar21;
            local_c8._8_4_ = uVar22;
            local_c8._12_4_ = uVar23;
            pUVar14 = UNiagaraFunctionLibrary::SpawnSystemAtLocation
                                (pUVar13,pUVar12,(TVector<double> *)&local_c8._s_0,&local_e8,
                                 (TVector<double> *)&local_108._s_0,false,false,None,false);
            uVar11 = 0;
            if ((int)uVar16 < (this->SpawnedComponents).ArrayNum) {
              uVar11 = uVar15;
            }
            if ((uVar11 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pFVar1 = (this->SpawnedComponents).AllocatorInstance.Data;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUVar14 != (UNiagaraComponent *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar14);
            }
            *(UNiagaraComponent **)(pFVar1 + lVar17 * 8) = pUVar14;
            uVar11 = 0;
            if ((int)uVar16 < (this->SpawnedComponents).ArrayNum) {
              uVar11 = uVar15;
            }
            if ((uVar11 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            UNiagaraComponent::InitForPerformanceBaseline
                      (*(UNiagaraComponent **)
                        ((this->SpawnedComponents).AllocatorInstance.Data + lVar17 * 8));
            uVar11 = 0;
            if ((int)uVar16 < (this->SpawnedComponents).ArrayNum) {
              uVar11 = uVar15;
            }
            if ((uVar11 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            plVar2 = *(longlong **)((this->SpawnedComponents).AllocatorInstance.Data + lVar17 * 8);
            (**(code **)(*plVar2 + 0x2b8))(plVar2,0);
          }
          else {
            uVar11 = 0;
            if ((int)uVar16 < (this->SpawnedComponents).ArrayNum) {
              uVar11 = uVar15;
            }
            if ((uVar11 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if ((*(byte *)(*(longlong *)
                            ((this->SpawnedComponents).AllocatorInstance.Data + lVar17 * 8) + 0x9a)
                & 0x10) == 0) goto LAB_149360601;
          }
          uVar16 = uVar16 + 1;
          lVar17 = lVar17 + 1;
          lVar18 = lVar18 + 8;
        } while ((int)uVar16 < this->NumInstances);
      }
    }
  }
  return;
}

// OnTickTest_Implementation @ 149360ee0

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
UNiagaraBaselineController_Basic::OnTickTest_Implementation(UNiagaraBaselineController_Basic *this)

{
  float fVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  char *pcVar8;
  float fVar9;
  FName FStackX_8;
  FString FStack_38;
  FString aFStack_28 [2];
  
  if (this->_padding_ == 0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7558058588782984977>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraPerfBaseline.cpp"
                       ,0xef,"Owner");
    if (!bVar4) {
      return false;
    }
    goto code_r0x000149360ebf;
  }
  pUVar6 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->_padding_);
  if (pUVar6 == (UObject *)0x0) {
LAB_149360e93:
    pcVar8 = "System";
  }
  else {
    pUVar7 = Z_Construct_UClass_UNiagaraSystem_NoRegister();
    iVar2 = (int)pUVar7->_padding_;
    if ((*(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38) < iVar2) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar7->_padding_)) goto LAB_149360e93;
    if (this->_padding_ != 0) {
      fVar1 = *(float *)&this->_padding_;
      fVar9 = AActor::GetGameTimeSinceCreation((AActor *)this->_padding_);
      if (fVar1 <= fVar9) {
        return false;
      }
      pUVar6 = TPersistentObjectPtr<FSoftObjectPath>::Get
                         ((TPersistentObjectPtr<FSoftObjectPath> *)&this->_padding_);
      if (pUVar6 != (UObject *)0x0) {
        pUVar7 = Z_Construct_UClass_UNiagaraSystem_NoRegister();
        iVar2 = (int)pUVar7->_padding_;
        if ((iVar2 <= *(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
            &pUVar7->_padding_)) goto LAB_149360de7;
      }
      pUVar6 = (UObject *)0x0;
LAB_149360de7:
      FStackX_8.ComparisonIndex.Value = *(uint *)&pUVar6->field_0x18;
      FStackX_8.Number = *(uint *)&pUVar6->field_0x1c;
      ::FName::ToString(&FStackX_8,&FStack_38);
      ::FString::PrintfImpl(aFStack_28,L"Generating Niagara Performance Baselines: %s");
      if (FStack_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_38.Data.AllocatorInstance.Data);
      }
      UEngine::AddOnScreenDebugMessage
                (GEngine,*(int *)((longlong)&this->_padding_ + 4),__real_40800000,FColor::White,
                 aFStack_28,true,&UE::Math::TVector2<double>::UnitVector);
      if (aFStack_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(aFStack_28[0].Data.AllocatorInstance.Data);
      }
      return true;
    }
    pcVar8 = "EffectType";
  }
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_7558058588782984977>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraPerfBaseline.cpp"
                     ,0xef,pcVar8);
  if (!bVar4) {
    return false;
  }
code_r0x000149360ebf:
  pcVar3 = (code *)swi(3);
  uVar5 = (*pcVar3)();
  return (bool)uVar5;
}

// StaticRegisterNativesUNiagaraBaselineController_Basic @ 149370340

void __cdecl
UNiagaraBaselineController_Basic::StaticRegisterNativesUNiagaraBaselineController_Basic(void)

{
  return;
}

