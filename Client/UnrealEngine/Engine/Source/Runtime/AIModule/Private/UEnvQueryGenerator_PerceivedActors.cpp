// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 9

// StaticClass @ 146f10e30

UClass * __cdecl UEnvQueryGenerator_PerceivedActors::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryGenerator_PerceivedActors.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryGenerator_PerceivedActors",
               &Z_Registration_Info_UClass_UEnvQueryGenerator_PerceivedActors.InnerSingleton,
               StaticRegisterNativesUEnvQueryGenerator_PerceivedActors,0xa8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UEnvQueryGenerator_PerceivedActors>,
               InternalVTableHelperCtorCaller<UEnvQueryGenerator_PerceivedActors>,local_res8,
               UEnvQueryGenerator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryGenerator_PerceivedActors.InnerSingleton;
}

// UEnvQueryGenerator_PerceivedActors @ 146f2bbd0

UEnvQueryGenerator_PerceivedActors * __thiscall
UEnvQueryGenerator_PerceivedActors::UEnvQueryGenerator_PerceivedActors
          (UEnvQueryGenerator_PerceivedActors *this,FVTableHelper *param_1)

{
  FFieldClass *pFVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UEnvQueryGenerator_PerceivedActors__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  (this->AllowedActorClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->SearchRadius)._padding_ = 0;
  (this->SearchRadius)._padding_ = 0;
  (this->SearchRadius)._padding_ = 0;
  (this->SearchRadius)._padding_ = (longlong)&___7FAIDataProviderFloatValue__6B_;
  (this->SearchRadius)._padding_ = 0;
  (this->SearchRadius)._padding_ = 0;
  (this->SearchRadius).DefaultValue = 0.0;
  pFVar1 = FFloatProperty::StaticClass();
  (this->SearchRadius)._padding_ = (longlong)pFVar1;
  (this->ListenerContext).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->SenseToUse).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  this->bIncludeKnownActors = true;
  return this;
}

// UEnvQueryGenerator_PerceivedActors @ 146f2bc60

UEnvQueryGenerator_PerceivedActors * __thiscall
UEnvQueryGenerator_PerceivedActors::UEnvQueryGenerator_PerceivedActors
          (UEnvQueryGenerator_PerceivedActors *this,FObjectInitializer *param_1)

{
  FFieldClass *pFVar1;
  UClass *pUVar2;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffffd | 1;
  this->_padding_ = (longlong)&___7UEnvQueryGenerator_PerceivedActors__6B_;
  this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  (this->AllowedActorClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->SearchRadius)._padding_ = 0;
  (this->SearchRadius)._padding_ = 0;
  (this->SearchRadius)._padding_ = 0;
  (this->SearchRadius)._padding_ = (longlong)&___7FAIDataProviderFloatValue__6B_;
  (this->SearchRadius)._padding_ = 0;
  (this->SearchRadius)._padding_ = 0;
  (this->SearchRadius).DefaultValue = 0.0;
  pFVar1 = FFloatProperty::StaticClass();
  (this->SearchRadius)._padding_ = (longlong)pFVar1;
  (this->ListenerContext).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->SenseToUse).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  this->bIncludeKnownActors = true;
  pUVar2 = UEnvQueryItemType_Actor::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  this->_padding_ = (longlong)pUVar2;
  (this->SearchRadius).DefaultValue = -1.0;
  pUVar2 = UEnvQueryContext_Querier::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->ListenerContext).Class.field0_0x0.DebugPtr = pUVar2;
  return this;
}

// ~UEnvQueryGenerator_PerceivedActors @ 146f2eca0

void __thiscall
UEnvQueryGenerator_PerceivedActors::~UEnvQueryGenerator_PerceivedActors
          (UEnvQueryGenerator_PerceivedActors *this)

{
  (this->SearchRadius)._padding_ = (longlong)&___7FAIDataProviderValue__6B_;
  this->_padding_ = (longlong)&___7UEnvQueryGenerator__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7UEnvQueryNode__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GenerateItems @ 146f4e650

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
UEnvQueryGenerator_PerceivedActors::GenerateItems
          (UEnvQueryGenerator_PerceivedActors *this,FEnvQueryInstance *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FProperty *this_00;
  UObjectBaseUtility *this_01;
  UObjectBaseUtility *this_02;
  longlong lVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  int iVar11;
  UObject *pUVar12;
  UWorld *pUVar13;
  UClass *pUVar14;
  float *pfVar15;
  UClass *pUVar16;
  longlong *plVar17;
  UAIPerceptionComponent *this_03;
  UClass *pUVar18;
  ulonglong uVar19;
  ForAnyElementType FVar20;
  ForAnyElementType FVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined8 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  float fVar31;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_188;
  longlong local_178;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_170;
  uint local_160;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_158;
  FString local_148;
  double local_138;
  double dStack_130;
  double local_128;
  FName local_120;
  UClass *local_118;
  UClass *local_110;
  FName local_108;
  FScriptContainerElement *local_100;
  FString local_f8 [2];
  double local_d8;
  double local_d0;
  double dStack_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  double local_a8;
  
  pUVar12 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&param_1->_padding_ + 4));
  if ((pUVar12 != (UObject *)0x0) &&
     (pUVar13 = UEngine::GetWorldFromContextObject(GEngine,pUVar12,LogAndReturnNull),
     pUVar13 != (UWorld *)0x0)) {
    pUVar16 = (this->ListenerContext).Class.field0_0x0.DebugPtr;
    pUVar18 = (UClass *)0x0;
    local_188.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_188.ArrayNum = 0;
    local_188.ArrayMax = 0;
    local_158.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_158.ArrayNum = 0;
    local_158.ArrayMax = 0;
    if ((pUVar16 != (UClass *)0x0) &&
       (pUVar14 = UEnvQueryContext::StaticClass(), pUVar14 != (UClass *)0x0)) {
      iVar2 = (int)pUVar14->_padding_;
      if (((int)pUVar16->_padding_ < iVar2) ||
         ((longlong *)*(undefined1 **)(pUVar16->_padding_ + (longlong)iVar2 * 8) !=
          &pUVar14->_padding_)) {
        bVar10 = false;
      }
      else {
        bVar10 = true;
      }
      if (bVar10) {
        pUVar18 = (this->ListenerContext).Class.field0_0x0.DebugPtr;
      }
    }
    FEnvQueryInstance::PrepareContext(param_1,pUVar18,&local_158);
    FAIDataProviderValue::BindData
              ((FAIDataProviderValue *)&this->SearchRadius,pUVar12,(int)param_1->_padding_);
    this_00 = (FProperty *)(this->SearchRadius)._padding_;
    if ((this_00 == (FProperty *)0x0) ||
       (pfVar15 = FProperty::ContainerUObjectPtrToValuePtrInternal
                            (this_00,(UObject *)(this->SearchRadius)._padding_,0),
       pfVar15 == (float *)0x0)) {
      fVar31 = (this->SearchRadius).DefaultValue;
    }
    else {
      fVar31 = *pfVar15;
    }
    uVar19 = (ulonglong)local_158.ArrayNum;
    local_160 = local_158.ArrayNum;
    local_100 = local_158.AllocatorInstance.Data + uVar19 * 8;
    FVar21.Data = local_158.AllocatorInstance.Data;
LAB_146f4e7b8:
    pFVar1 = local_100;
    if (local_158.ArrayNum != (int)uVar19) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (FVar21.Data != pFVar1) {
      this_01 = *(UObjectBaseUtility **)FVar21.Data;
      if (this_01 == (UObjectBaseUtility *)0x0) {
LAB_146f4ebfc:
        if (FVisualLogger::bIsRecording != 0) {
          if (this_01 == (UObjectBaseUtility *)0x0) {
            ::FString::FString(&local_148,L"None");
          }
          else {
            local_108.ComparisonIndex.Value = *(uint *)&this_01->field_0x18;
            local_108.Number = *(uint *)&this_01->field_0x1c;
            ::FName::ToString(&local_108,&local_148);
          }
          FVisualLogger::CategorizedLogfImpl
                    (pUVar12,(FName *)&LogEQS.field_0x4,Error,
                     L"Tried to use EnvQueryGenerator_PerceivedActors while query context actor %s doesn\'t represent a valid perception listener"
                    );
          if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_148.Data.AllocatorInstance.Data);
            uVar19 = (ulonglong)local_160;
            FVar21.Data = FVar21.Data + 8;
            goto LAB_146f4e7b8;
          }
        }
LAB_146f4ebeb:
        uVar19 = (ulonglong)local_160;
        FVar21.Data = FVar21.Data + 8;
      }
      else {
        pUVar16 = Z_Construct_UClass_UAIPerceptionListenerInterface_NoRegister();
        plVar17 = UObjectBaseUtility::GetInterfaceAddress(this_01,pUVar16);
        if (plVar17 == (longlong *)0x0) {
          pUVar16 = Z_Construct_UClass_APawn_NoRegister();
          iVar2 = (int)pUVar16->_padding_;
          if (((iVar2 <= *(int *)(*(longlong *)&pUVar12->field_0x10 + 0x38)) &&
              ((longlong *)
               *(undefined1 **)
                (*(longlong *)(*(longlong *)&pUVar12->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
               &pUVar16->_padding_)) &&
             (this_02 = *(UObjectBaseUtility **)&pUVar12[0x12].field_0x20,
             this_02 != (UObjectBaseUtility *)0x0)) {
            pUVar16 = Z_Construct_UClass_UAIPerceptionListenerInterface_NoRegister();
            plVar17 = UObjectBaseUtility::GetInterfaceAddress(this_02,pUVar16);
            if (plVar17 != (longlong *)0x0) goto LAB_146f4e855;
          }
          goto LAB_146f4ebfc;
        }
LAB_146f4e855:
        this_03 = (UAIPerceptionComponent *)(**(code **)(*plVar17 + 0x10))();
        if (this_03 != (UAIPerceptionComponent *)0x0) {
          lVar3 = *(longlong *)(this_01 + 0xb);
          if (lVar3 == 0) {
            local_138 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                                         UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
            dStack_130 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                                          UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
            uVar22 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
            uVar23 = (undefined4)
                     ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
          }
          else {
            local_138 = *(double *)(lVar3 + 0x210);
            dStack_130 = *(double *)(lVar3 + 0x218);
            local_c0 = *(undefined8 *)(lVar3 + 0x220);
            uVar22 = (undefined4)local_c0;
            uVar23 = (undefined4)((ulonglong)local_c0 >> 0x20);
            local_d0 = local_138;
            dStack_c8 = dStack_130;
          }
          pUVar16 = (this->SenseToUse).Class.field0_0x0.DebugPtr;
          local_128 = (double)CONCAT44(uVar23,uVar22);
          local_170.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_170.ArrayNum = 0;
          local_170.ArrayMax = 0;
          if (this->bIncludeKnownActors == false) {
            local_110 = pUVar16;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar16 != (UClass *)0x0))
            {
              UE::GC::MarkAsReachable((UObject *)pUVar16);
            }
            UAIPerceptionComponent::GetCurrentlyPerceivedActors
                      (this_03,(TSubclassOf<UAISense>)&local_110,&local_170);
          }
          else {
            local_118 = pUVar16;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar16 != (UClass *)0x0))
            {
              UE::GC::MarkAsReachable((UObject *)pUVar16);
            }
            UAIPerceptionComponent::GetKnownPerceivedActors
                      (this_03,(TSubclassOf<UAISense>)&local_118,&local_170);
          }
          dVar9 = local_128;
          dVar8 = dStack_130;
          dVar7 = local_138;
          iVar2 = local_170.ArrayNum;
          pFVar1 = local_170.AllocatorInstance.Data + (longlong)local_170.ArrayNum * 8;
          FVar20.Data = local_170.AllocatorInstance.Data;
          uVar28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          uVar22 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
          uVar23 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
          uVar29 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
          uVar30 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
          while( true ) {
            if (local_170.ArrayNum != iVar2) {
              local_res20[0] = 0;
              `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_res20);
              uVar28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
              uVar22 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
              uVar23 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
              uVar29 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
              uVar30 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
            }
            if (FVar20.Data == pFVar1) break;
            local_178 = *(longlong *)FVar20.Data;
            if (local_178 != 0) {
              if (0.0 < fVar31) {
                lVar3 = *(longlong *)(local_178 + 0x1b8);
                uVar24 = uVar22;
                uVar25 = uVar23;
                uVar26 = uVar29;
                uVar27 = uVar30;
                local_d8 = (double)uVar28;
                if (lVar3 != 0) {
                  local_a8 = *(double *)(lVar3 + 0x220);
                  local_b8 = *(undefined4 *)(lVar3 + 0x210);
                  uStack_b4 = *(undefined4 *)(lVar3 + 0x214);
                  uStack_b0 = *(undefined4 *)(lVar3 + 0x218);
                  uStack_ac = *(undefined4 *)(lVar3 + 0x21c);
                  uVar24 = local_b8;
                  uVar25 = uStack_b4;
                  uVar26 = uStack_b0;
                  uVar27 = uStack_ac;
                  local_d8 = local_a8;
                }
                dVar6 = (double)CONCAT44(uVar27,uVar26) - dVar8;
                dVar5 = (double)CONCAT44(uVar25,uVar24) - dVar7;
                if ((double)(fVar31 * fVar31) <=
                    dVar6 * dVar6 + dVar5 * dVar5 + (local_d8 - dVar9) * (local_d8 - dVar9))
                goto LAB_146f4ebd0;
              }
              pUVar16 = (this->AllowedActorClass).Class.field0_0x0.DebugPtr;
              if ((pUVar16 != (UClass *)0x0) &&
                 (pUVar18 = Z_Construct_UClass_AActor_NoRegister(), pUVar18 != (UClass *)0x0)) {
                iVar11 = (int)pUVar18->_padding_;
                if (((int)pUVar16->_padding_ < iVar11) ||
                   ((longlong *)*(undefined1 **)(pUVar16->_padding_ + (longlong)iVar11 * 8) !=
                    &pUVar18->_padding_)) {
                  bVar10 = false;
                }
                else {
                  bVar10 = true;
                }
                if ((bVar10) &&
                   (pUVar16 = (this->AllowedActorClass).Class.field0_0x0.DebugPtr,
                   pUVar16 != (UClass *)0x0)) {
                  pUVar18 = Z_Construct_UClass_AActor_NoRegister();
                  if (pUVar18 == (UClass *)0x0) {
LAB_146f4eaed:
                    pUVar16 = (UClass *)0x0;
                  }
                  else {
                    iVar11 = (int)pUVar18->_padding_;
                    if (((int)pUVar16->_padding_ < iVar11) ||
                       ((longlong *)*(undefined1 **)(pUVar16->_padding_ + (longlong)iVar11 * 8) !=
                        &pUVar18->_padding_)) {
                      bVar10 = false;
                    }
                    else {
                      bVar10 = true;
                    }
                    if (!bVar10) goto LAB_146f4eaed;
                    pUVar16 = (this->AllowedActorClass).Class.field0_0x0.DebugPtr;
                  }
                  iVar11 = (int)pUVar16->_padding_;
                  uVar28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
                  uVar22 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
                  uVar23 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
                  uVar29 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
                  uVar30 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
                  if ((*(int *)(*(longlong *)(local_178 + 0x10) + 0x38) < iVar11) ||
                     ((longlong *)
                      *(undefined1 **)
                       (*(longlong *)(*(longlong *)(local_178 + 0x10) + 0x30) + (longlong)iVar11 * 8
                       ) != &pUVar16->_padding_)) goto LAB_146f4ebd0;
                }
              }
              if ((local_188.AllocatorInstance.Data <= (FScriptContainerElement *)&local_178) &&
                 (((FScriptContainerElement *)&local_178 <
                   local_188.AllocatorInstance.Data + (longlong)local_188.ArrayMax * 8 &&
                  (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar10)))) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              iVar11 = local_188.ArrayNum;
              if (local_188.ArrayNum == local_188.ArrayMax) {
                iVar11 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,&local_188.AllocatorInstance,&local_188.ArrayMax);
              }
              local_188.ArrayNum = iVar11 + 1;
              *(longlong *)(local_188.AllocatorInstance.Data + (longlong)iVar11 * 8) = local_178;
              uVar28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
              uVar22 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
              uVar23 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
              uVar29 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
              uVar30 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
            }
LAB_146f4ebd0:
            FVar20.Data = FVar20.Data + 8;
          }
          if (local_170.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_170.AllocatorInstance.Data);
          }
          goto LAB_146f4ebeb;
        }
        if (FVisualLogger::bIsRecording == 0) goto LAB_146f4ebeb;
        local_120.ComparisonIndex.Value = *(uint *)&this_01->field_0x18;
        local_120.Number = *(uint *)&this_01->field_0x1c;
        ::FName::ToString(&local_120,local_f8);
        FVisualLogger::CategorizedLogfImpl
                  (pUVar12,(FName *)&LogEQS.field_0x4,Error,
                   L"Tried to use EnvQueryGenerator_PerceivedActors while query context actor\'s %s UAIPerceptionComponent is missing"
                  );
        if (local_f8[0].Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
        goto LAB_146f4ebeb;
        FMemory::Free(local_f8[0].Data.AllocatorInstance.Data);
        uVar19 = (ulonglong)local_160;
        FVar21.Data = FVar21.Data + 8;
      }
      goto LAB_146f4e7b8;
    }
    UE::AI::EQS::Internal::RemoveDuplicatesSorted(&local_188);
    FEnvQueryInstance::AddItemData<UEnvQueryItemType_Actor,AActor_*>(param_1,&local_188);
    if (local_158.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.AllocatorInstance.Data);
    }
    if (local_188.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.AllocatorInstance.Data);
    }
  }
  return;
}

// GetDescriptionDetails @ 146f52450

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall
UEnvQueryGenerator_PerceivedActors::GetDescriptionDetails
          (UEnvQueryGenerator_PerceivedActors *this,FText *__return_storage_ptr__)

{
  int iVar1;
  FProperty *this_00;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  FText *pFVar5;
  FString *pFVar6;
  UClass *pUVar7;
  UClass *pUVar8;
  FTextFormat *pFVar9;
  UClass *pUVar10;
  FName local_res8;
  FName local_res18;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_1d8
  ;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  FFormatArgumentValue local_158;
  FFormatArgumentValue local_138;
  FFormatArgumentValue local_118;
  FFormatArgumentValue local_f8;
  FFormatArgumentValue local_d8;
  FText local_b8;
  FText local_a8;
  FString local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FTextFormat local_38;
  FTextFormat local_28;
  
  pUVar10 = (UClass *)0x0;
  local_1d8.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1d8.Pairs.ArrayNum = 0;
  local_1d8.Pairs.ArrayMax = 0;
  if ((this->SearchRadius)._padding_ == 0) {
    this_00 = (FProperty *)(this->SearchRadius)._padding_;
    pUVar4 = pUVar10;
    if (this_00 != (FProperty *)0x0) {
      pUVar4 = FProperty::ContainerUObjectPtrToValuePtrInternal(this_00,(UObject *)0x0,0);
    }
    if (pUVar4 == (UClass *)0x0) {
      pUVar4 = (UClass *)&(this->SearchRadius).DefaultValue;
    }
    if (0.0 < *(float *)&pUVar4->_padding_) goto LAB_146f5256b;
    pFVar5 = FText::FromString(&local_b8,L"Perception Range");
    local_158.Type = Text;
    FText::FText((FText *)&local_158.TextValue,pFVar5);
    if ((local_158.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FText *)(*pcVar2)();
      return pFVar5;
    }
    ::FString::FString(&local_1c8,L"Radius");
    TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
    Emplace<FString,FFormatArgumentValue>(&local_1d8,&local_1c8,&local_158);
    if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
    }
    if (local_158.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_158.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10
                  ))();
    }
    if (local_b8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
    }
  }
  else {
LAB_146f5256b:
    pFVar6 = FAIDataProviderValue::ToString((FAIDataProviderValue *)&this->SearchRadius,&local_98);
    pFVar5 = FText::FromString(&local_a8,pFVar6);
    local_138.Type = Text;
    FText::FText((FText *)&local_138.TextValue,pFVar5);
    if ((local_138.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FText *)(*pcVar2)();
      return pFVar5;
    }
    ::FString::FString(&local_1b8,L"Radius");
    TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
    Emplace<FString,FFormatArgumentValue>(&local_1d8,&local_1b8,&local_138);
    if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
    }
    if (local_138.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_138.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10
                  ))();
    }
    if (local_a8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
  pUVar4 = (this->SenseToUse).Class.field0_0x0.DebugPtr;
  if ((pUVar4 == (UClass *)0x0) ||
     (pUVar7 = Z_Construct_UClass_UAISense_NoRegister(), pUVar7 == (UClass *)0x0)) {
LAB_146f52784:
    pFVar5 = FText::FromString(&local_78,L"All senses");
    local_f8.Type = Text;
    FText::FText((FText *)&local_f8.TextValue,pFVar5);
    if ((local_f8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FText *)(*pcVar2)();
      return pFVar5;
    }
    ::FString::FString(&local_188,L"Sense");
    TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
    Emplace<FString,FFormatArgumentValue>(&local_1d8,&local_188,&local_f8);
    if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.Data.AllocatorInstance.Data);
    }
    if (local_f8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_f8.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10)
      )();
    }
    if (local_78.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
    }
  }
  else {
    iVar1 = (int)pUVar7->_padding_;
    if (((int)pUVar4->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) != &pUVar7->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((!bVar3) || (pUVar4 = (this->SenseToUse).Class.field0_0x0.DebugPtr, pUVar4 == (UClass *)0x0)
       ) goto LAB_146f52784;
    pUVar8 = Z_Construct_UClass_UAISense_NoRegister();
    pUVar7 = pUVar10;
    if (pUVar8 != (UClass *)0x0) {
      iVar1 = (int)pUVar8->_padding_;
      if (((int)pUVar4->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar8->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        pUVar7 = (this->SenseToUse).Class.field0_0x0.DebugPtr;
      }
    }
    local_res8 = (FName)pUVar7->_padding_;
    ::FName::ToString(&local_res8,&local_198);
    pFVar5 = FText::FromString(&local_88,&local_198);
    local_118.Type = Text;
    FText::FText((FText *)&local_118.TextValue,pFVar5);
    if ((local_118.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FText *)(*pcVar2)();
      return pFVar5;
    }
    ::FString::FString(&local_1a8,L"Sense");
    TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
    Emplace<FString,FFormatArgumentValue>(&local_1d8,&local_1a8,&local_118);
    if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
    }
    if (local_118.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_118.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10
                  ))();
    }
    if (local_88.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
    }
    if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Data.AllocatorInstance.Data);
    }
  }
  pUVar4 = (this->AllowedActorClass).Class.field0_0x0.DebugPtr;
  if ((pUVar4 != (UClass *)0x0) &&
     (pUVar7 = Z_Construct_UClass_AActor_NoRegister(), pUVar7 != (UClass *)0x0)) {
    iVar1 = (int)pUVar7->_padding_;
    if (((int)pUVar4->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) != &pUVar7->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) &&
       (pUVar4 = (this->AllowedActorClass).Class.field0_0x0.DebugPtr, pUVar4 != (UClass *)0x0)) {
      pUVar7 = Z_Construct_UClass_AActor_NoRegister();
      if (pUVar7 != (UClass *)0x0) {
        iVar1 = (int)pUVar7->_padding_;
        if (((int)pUVar4->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) !=
            &pUVar7->_padding_)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          pUVar10 = (this->AllowedActorClass).Class.field0_0x0.DebugPtr;
        }
      }
      local_res18 = (FName)pUVar10->_padding_;
      ::FName::ToString(&local_res18,&local_168);
      pFVar5 = FText::FromString(&local_68,&local_168);
      local_d8.Type = Text;
      FText::FText((FText *)&local_d8.TextValue,pFVar5);
      if ((local_d8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FText *)(*pcVar2)();
        return pFVar5;
      }
      ::FString::FString(&local_178,L"ActorClass");
      TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
      Emplace<FString,FFormatArgumentValue>(&local_1d8,&local_178,&local_d8);
      if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_178.Data.AllocatorInstance.Data);
      }
      if (local_d8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_d8.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168.Data.AllocatorInstance.Data);
      }
      pFVar5 = FText::AsLocalizable_Advanced_LocText
                         (&local_58,L"EnvQueryGenerator",L"PerceivedActorsOfClassDescription",
                          L"radius: {Radius}\nsense: {Sense}\nactors of class: {ActorClass}");
      pFVar9 = FTextFormat::FTextFormat(&local_38,pFVar5,Default);
      FText::Format(__return_storage_ptr__,pFVar9,&local_1d8);
      goto LAB_146f52a0c;
    }
  }
  pFVar5 = FText::AsLocalizable_Advanced_LocText
                     (&local_48,L"EnvQueryGenerator",L"PerceivedActorsDescription",
                      L"radius: {Radius}\nsense: {Sense}");
  pFVar9 = FTextFormat::FTextFormat(&local_28,pFVar5,Default);
  FText::Format(__return_storage_ptr__,pFVar9,&local_1d8);
  local_58.TextData.Reference = local_48.TextData.Reference;
LAB_146f52a0c:
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  DestructItems<TTuple<FString,FFormatArgumentValue>,int>
            ((TTuple<FString,FFormatArgumentValue> *)local_1d8.Pairs.AllocatorInstance.Data,
             local_1d8.Pairs.ArrayNum);
  if ((TTuple<FString,FFormatArgumentValue> *)local_1d8.Pairs.AllocatorInstance.Data !=
      (TTuple<FString,FFormatArgumentValue> *)0x0) {
    FMemory::Free(local_1d8.Pairs.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetDescriptionTitle @ 146f547c0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall
UEnvQueryGenerator_PerceivedActors::GetDescriptionTitle
          (UEnvQueryGenerator_PerceivedActors *this,FText *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  FText *pFVar5;
  FTextFormat *pFVar6;
  UClass *pUVar7;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_78;
  FString local_68;
  FText local_58;
  FText local_48;
  FTextFormat local_38;
  FFormatArgumentValue local_28;
  
  pUVar7 = (this->ListenerContext).Class.field0_0x0.DebugPtr;
  local_78.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Pairs.ArrayNum = 0;
  local_78.Pairs.ArrayMax = 0;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pUVar7 != (UClass *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
LAB_146f54806:
      pUVar4 = UEnvQueryContext::StaticClass();
      if (pUVar4 != (UClass *)0x0) {
        iVar1 = (int)pUVar4->_padding_;
        if (((int)pUVar7->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar1 * 8) !=
            &pUVar4->_padding_)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) goto LAB_146f54836;
      }
    }
  }
  else if (pUVar7 != (UClass *)0x0) goto LAB_146f54806;
  pUVar7 = (UClass *)0x0;
LAB_146f54836:
  UEnvQueryTypes::GetShortTypeName(&local_58,(UObject *)pUVar7);
  local_28.Type = Text;
  FText::FText((FText *)&local_28.TextValue,&local_58);
  if (local_28.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FText *)(*pcVar2)();
      return pFVar5;
    }
  }
  ::FString::FString(&local_68,L"DescribeContext");
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
  Emplace<FString,FFormatArgumentValue>(&local_78,&local_68,&local_28);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_28.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_28.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  pFVar5 = FText::AsLocalizable_Advanced_LocText
                     (&local_48,L"EnvQueryGenerator",L"DescriptionGeneratePerceivedActors",
                      L"Actors perceived by {DescribeContext}");
  pFVar6 = FTextFormat::FTextFormat(&local_38,pFVar5,Default);
  FText::Format(__return_storage_ptr__,pFVar6,&local_78);
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  DestructItems<TTuple<FString,FFormatArgumentValue>,int>
            ((TTuple<FString,FFormatArgumentValue> *)local_78.Pairs.AllocatorInstance.Data,
             local_78.Pairs.ArrayNum);
  if ((TTuple<FString,FFormatArgumentValue> *)local_78.Pairs.AllocatorInstance.Data !=
      (TTuple<FString,FFormatArgumentValue> *)0x0) {
    FMemory::Free(local_78.Pairs.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 146f585d0

UClass * __cdecl UEnvQueryGenerator_PerceivedActors::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryGenerator_PerceivedActors.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryGenerator_PerceivedActors",
               &Z_Registration_Info_UClass_UEnvQueryGenerator_PerceivedActors.InnerSingleton,
               StaticRegisterNativesUEnvQueryGenerator_PerceivedActors,0xa8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UEnvQueryGenerator_PerceivedActors>,
               InternalVTableHelperCtorCaller<UEnvQueryGenerator_PerceivedActors>,local_res8,
               UEnvQueryGenerator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryGenerator_PerceivedActors.InnerSingleton;
}

// StaticRegisterNativesUEnvQueryGenerator_PerceivedActors @ 146f76d60

void __cdecl
UEnvQueryGenerator_PerceivedActors::StaticRegisterNativesUEnvQueryGenerator_PerceivedActors(void)

{
  return;
}

