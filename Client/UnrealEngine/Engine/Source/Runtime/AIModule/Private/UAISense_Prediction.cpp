// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 12

// StaticClass @ 146f842e0

UClass * __cdecl UAISense_Prediction::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAISense_Prediction.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AISense_Prediction",
               &Z_Registration_Info_UClass_UAISense_Prediction.InnerSingleton,
               StaticRegisterNativesUAISense_Prediction,0xa0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UAISense_Prediction>,
               InternalVTableHelperCtorCaller<UAISense_Prediction>,local_res8,UAISense::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAISense_Prediction.InnerSingleton;
}

// UAISense_Prediction @ 146f94ab0

UAISense_Prediction * __thiscall
UAISense_Prediction::UAISense_Prediction(UAISense_Prediction *this,FVTableHelper *param_1)

{
  UAISense::UAISense((UAISense *)this,param_1);
  this->_padding_ = (longlong)&___7UAISense_Prediction__6B_;
  (this->RegisteredEvents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RegisteredEvents).ArrayNum = 0;
  (this->RegisteredEvents).ArrayMax = 0;
  return this;
}

// UAISense_Prediction @ 146f94af0

UAISense_Prediction * __thiscall
UAISense_Prediction::UAISense_Prediction(UAISense_Prediction *this,FObjectInitializer *param_1)

{
  UAISense::UAISense((UAISense *)this,param_1);
  this->_padding_ = (longlong)&___7UAISense_Prediction__6B_;
  (this->RegisteredEvents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RegisteredEvents).ArrayNum = 0;
  (this->RegisteredEvents).ArrayMax = 0;
  return this;
}

// ~UAISense_Prediction @ 146f96c70

void __thiscall UAISense_Prediction::~UAISense_Prediction(UAISense_Prediction *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UAISense_Prediction__6B_;
  pFVar1 = (this->RegisteredEvents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UAISense__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 146fb3d70

UClass * __cdecl UAISense_Prediction::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAISense_Prediction.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AISense_Prediction",
               &Z_Registration_Info_UClass_UAISense_Prediction.InnerSingleton,
               StaticRegisterNativesUAISense_Prediction,0xa0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UAISense_Prediction>,
               InternalVTableHelperCtorCaller<UAISense_Prediction>,local_res8,UAISense::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAISense_Prediction.InnerSingleton;
}

// RegisterEvent @ 146fc7450

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
UAISense_Prediction::RegisterEvent(UAISense_Prediction *this,FAIPredictionEvent *param_1)

{
  int *piVar1;
  TArray<FAIPredictionEvent,TSizedDefaultAllocator<32>_> *pTVar2;
  FAIPredictionEvent *pFVar3;
  FScriptContainerElement *pFVar4;
  AActor *pAVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  
  pTVar2 = &this->RegisteredEvents;
  pFVar3 = (FAIPredictionEvent *)(pTVar2->AllocatorInstance).Data;
  if ((pFVar3 <= param_1) && (param_1 < pFVar3 + (this->RegisteredEvents).ArrayMax)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  iVar8 = (this->RegisteredEvents).ArrayNum;
  piVar1 = &(this->RegisteredEvents).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&pTVar2->AllocatorInstance,piVar1);
  }
  lVar9 = (longlong)iVar8;
  (this->RegisteredEvents).ArrayNum = iVar8 + 1;
  pFVar4 = (pTVar2->AllocatorInstance).Data;
  pAVar5 = (param_1->Requestor).field0_0x0.DebugPtr;
  *(AActor **)(pFVar4 + lVar9 * 0x18) = pAVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar5 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pAVar5);
  }
  pAVar5 = (param_1->PredictedActor).field0_0x0.DebugPtr;
  *(AActor **)(pFVar4 + lVar9 * 0x18 + 8) = pAVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar5 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pAVar5);
  }
  *(float *)(pFVar4 + lVar9 * 0x18 + 0x10) = param_1->TimeToPredict;
  *(undefined4 *)&this->_padding_ = 0;
  return;
}

// RequestControllerPredictionEvent @ 146fcc740

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UAISense_Prediction::RequestControllerPredictionEvent
          (AAIController *param_1,AActor *param_2,float param_3)

{
  UAIPerceptionSystem *this;
  TObjectPtr<AActor>_u_0 local_38;
  AActor *local_30;
  float local_28;
  
  this = UAIPerceptionSystem::GetCurrent((UObject *)param_1);
  if (this != (UAIPerceptionSystem *)0x0) {
    local_38 = (TObjectPtr<AActor>_u_0)param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (AAIController *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_30 = param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (AActor *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    local_28 = param_3;
    UAIPerceptionSystem::OnEvent<FAIPredictionEvent,UAISense_Prediction>
              (this,(FAIPredictionEvent *)&local_38.ObjectPtr);
  }
  return;
}

// RequestPawnPredictionEvent @ 146fcd320

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
UAISense_Prediction::RequestPawnPredictionEvent(APawn *param_1,AActor *param_2,float param_3)

{
  UAIPerceptionSystem *this;
  TObjectPtr<AController>_u_0 local_38;
  AActor *local_30;
  float local_28;
  
  this = UAIPerceptionSystem::GetCurrent((UObject *)param_1);
  if ((this != (UAIPerceptionSystem *)0x0) &&
     (local_38 = (TObjectPtr<AController>_u_0)(param_1->Controller).field0_0x0.DebugPtr,
     local_38.DebugPtr != (AController *)0x0)) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)local_38.DebugPtr);
    }
    local_30 = param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (AActor *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    local_28 = param_3;
    UAIPerceptionSystem::OnEvent<FAIPredictionEvent,UAISense_Prediction>
              (this,(FAIPredictionEvent *)&local_38.ObjectPtr);
  }
  return;
}

// StaticRegisterNativesUAISense_Prediction @ 146fd3630

void __cdecl UAISense_Prediction::StaticRegisterNativesUAISense_Prediction(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UAISense_Prediction_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// Update @ 146fdc4f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

float __thiscall UAISense_Prediction::Update(UAISense_Prediction *this)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  UObjectBaseUtility *this_00;
  AActor *pAVar5;
  code *pcVar6;
  FScriptContainerElement *pFVar7;
  bool bVar8;
  UClass *pUVar9;
  longlong *plVar10;
  longlong lVar11;
  double *pdVar12;
  UAIPerceptionComponent *this_01;
  int iVar13;
  longlong lVar14;
  uint *puVar15;
  FScriptContainerElement *pFVar16;
  longlong lVar17;
  ulonglong uVar18;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  double dVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  FScriptContainerElement *local_res18;
  FAIStimulus local_f8;
  double local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined1 local_70 [56];
  
  if ((this->_padding_ == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("PerceptionSystemInstance",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Perception\\AISense.cpp"
                         ,0x40,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    fVar19 = (float)(*pcVar6)();
    return fVar19;
  }
  fVar19 = __real_7f7fffff;
  lVar4 = this->_padding_;
  iVar1 = (this->RegisteredEvents).ArrayNum;
  pFVar16 = (this->RegisteredEvents).AllocatorInstance.Data;
  local_res18 = pFVar16 + (longlong)iVar1 * 0x18;
LAB_146fdc580:
  pFVar7 = local_res18;
  if ((this->RegisteredEvents).ArrayNum != iVar1) {
    local_res8[0] = 0;
    `TCheckedPointerIterator<FAIPredictionEvent,int,0>::operator!='::__l2::<lambda_1>::operator()
              (local_res8);
  }
  if (pFVar16 == pFVar7) {
    (this->RegisteredEvents).ArrayNum = 0;
    if ((this->RegisteredEvents).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,&(this->RegisteredEvents).AllocatorInstance,0,
                 &(this->RegisteredEvents).ArrayMax);
    }
    return fVar19;
  }
  this_00 = *(UObjectBaseUtility **)pFVar16;
  if ((this_00 != (UObjectBaseUtility *)0x0) && (*(longlong *)(pFVar16 + 8) != 0)) {
    pUVar9 = UAIPerceptionListenerInterface::StaticClass();
    plVar10 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar9);
    if ((plVar10 != (longlong *)0x0) &&
       ((lVar11 = (**(code **)(*plVar10 + 0x10))(plVar10), lVar11 != 0 &&
        (uVar2 = *(uint *)(lVar11 + 0xf4), *(int *)(lVar4 + 0x40) != *(int *)(lVar4 + 0x6c))))) {
      lVar11 = *(longlong *)(lVar4 + 0x78);
      lVar14 = lVar4 + 0x70;
      if (lVar11 != 0) {
        lVar14 = lVar11;
      }
      uVar18 = (ulonglong)(*(int *)(lVar4 + 0x80) - 1U & uVar2);
      iVar13 = *(int *)(lVar14 + uVar18 * 4);
      if (iVar13 == -1) goto LAB_146fdc7ed;
      lVar14 = *(longlong *)(lVar4 + 0x38);
      do {
        if (*(uint *)((longlong)iVar13 * 0x60 + lVar14) == uVar2) {
          lVar17 = lVar4 + 0x70;
          if (lVar11 != 0) {
            lVar17 = lVar11;
          }
          uVar3 = *(uint *)(lVar17 + uVar18 * 4);
          goto joined_r0x000146fdc666;
        }
        iVar13 = *(int *)((longlong)iVar13 * 0x60 + 0x58 + lVar14);
      } while (iVar13 != -1);
      pFVar16 = pFVar16 + 0x18;
      goto LAB_146fdc580;
    }
  }
LAB_146fdc7ed:
  pFVar16 = pFVar16 + 0x18;
  goto LAB_146fdc580;
joined_r0x000146fdc666:
  if (uVar3 == 0xffffffff) goto LAB_146fdc68a;
  puVar15 = (uint *)((longlong)(int)uVar3 * 0x60 + lVar14);
  if (*puVar15 == uVar2) {
    if (puVar15 != (uint *)0x0) goto LAB_146fdc6b2;
    goto LAB_146fdc68c;
  }
  uVar3 = puVar15[0x16];
  goto joined_r0x000146fdc666;
LAB_146fdc68a:
  puVar15 = (uint *)0x0;
LAB_146fdc68c:
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar8) {
    pcVar6 = (code *)swi(3);
    fVar19 = (float)(*pcVar6)();
    return fVar19;
  }
LAB_146fdc6b2:
  if ((puVar15[4] >> (*(byte *)((longlong)&this->_padding_ + 4) & 0x1f) & 1) != 0) {
    plVar10 = *(longlong **)(pFVar16 + 8);
    lVar11 = plVar10[0x37];
    if (lVar11 == 0) {
      uVar20 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
      uVar21 = (undefined4)
               ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
      uVar23 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
      uVar24 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      uVar25 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      uVar26 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    }
    else {
      local_88 = *(undefined4 *)(lVar11 + 0x210);
      uStack_84 = *(undefined4 *)(lVar11 + 0x214);
      uStack_80 = *(undefined4 *)(lVar11 + 0x218);
      uStack_7c = *(undefined4 *)(lVar11 + 0x21c);
      local_78 = *(undefined8 *)(lVar11 + 0x220);
      uVar20 = (undefined4)local_78;
      uVar21 = (undefined4)((ulonglong)local_78 >> 0x20);
      uVar23 = local_88;
      uVar24 = uStack_84;
      uVar25 = uStack_80;
      uVar26 = uStack_7c;
    }
    local_90 = (double)CONCAT44(uVar21,uVar20);
    pdVar12 = (double *)(**(code **)(*plVar10 + 0x360))(plVar10,local_70);
    dVar22 = (double)*(float *)(pFVar16 + 0x10);
    local_f8.ExpirationAge = 3.4028235e+38;
    local_res10 = 0;
    local_f8.Age = 0.0;
    local_f8.Strength = 1.0;
    local_f8.Tag.ComparisonIndex.Value = 0;
    local_f8.Tag.Number = 0;
    local_f8.Type.Index = 0xff;
    local_f8.StimulusLocation.field0_0x0._s_0.X =
         dVar22 * *pdVar12 + (double)CONCAT44(uVar24,uVar23);
    local_f8.StimulusLocation.field0_0x0._s_0.Y =
         dVar22 * pdVar12[1] + (double)CONCAT44(uVar26,uVar25);
    local_f8.StimulusLocation.field0_0x0._s_0.Z = dVar22 * pdVar12[2] + local_90;
    local_f8.ReceiverLocation.field0_0x0._s_0.X = (double)*(undefined8 *)(puVar15 + 6);
    local_f8.ReceiverLocation.field0_0x0._s_0.Y = (double)*(undefined8 *)(puVar15 + 8);
    local_f8.ReceiverLocation.field0_0x0._s_0.Z = (double)*(undefined8 *)(puVar15 + 10);
    ::FName::FName(&local_f8.Type.Name,L"Invalid");
    pAVar5 = *(AActor **)(pFVar16 + 8);
    local_f8._84_4_ = ((char)this->_padding_ == '\x01') + 2 | local_f8._84_4_ & 0xfffffffa;
    local_f8.Type.Index = *(uchar *)((longlong)&this->_padding_ + 4);
    local_f8.Type.Name = (FName)this->_padding_;
    puVar15[0x13] = puVar15[0x13] | 1;
    this_01 = (UAIPerceptionComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)(puVar15 + 2));
    UAIPerceptionComponent::RegisterStimulus(this_01,pAVar5,&local_f8);
  }
  goto LAB_146fdc7ed;
}

// execRequestControllerPredictionEvent @ 146fe79d0

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
UAISense_Prediction::execRequestControllerPredictionEvent
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  int iVar2;
  FProperty *pFVar3;
  UAISystemBase *pUVar4;
  float fVar5;
  AActor *pAVar6;
  UWorld *pUVar7;
  UClass *pUVar8;
  UWorld *pUVar9;
  FString *pFVar10;
  wchar_t *pwVar11;
  UAIPerceptionSystem *this;
  wchar_t *pwVar12;
  float local_res10 [2];
  AActor *local_res20;
  UWorld *local_58;
  FString local_50;
  TObjectPtr<AActor>_u_0 local_40;
  AActor *local_38;
  float local_30;
  
  local_58 = (UWorld *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_res20 = (AActor *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pUVar7 = local_58;
  pAVar6 = local_res20;
  fVar5 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = (UAIPerceptionSystem *)0x0;
  if (local_58 != (UWorld *)0x0) {
    pUVar8 = Z_Construct_UClass_UWorld_NoRegister();
    iVar2 = (int)pUVar8->_padding_;
    if ((((iVar2 <= *(int *)(pUVar7->_padding_ + 0x38)) &&
         (pUVar9 = pUVar7,
         (longlong *)*(undefined1 **)(*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar2 * 8)
         == &pUVar8->_padding_)) ||
        (pUVar9 = UEngine::GetWorldFromContextObject(GEngine,(UObject *)pUVar7,LogAndReturnNull),
        this = (UAIPerceptionSystem *)0x0, pUVar9 != (UWorld *)0x0)) &&
       (pUVar4 = (pUVar9->AISystem).field0_0x0.DebugPtr, this = (UAIPerceptionSystem *)0x0,
       pUVar4 != (UAISystemBase *)0x0)) {
      pUVar8 = Z_Construct_UClass_UAISystem_NoRegister();
      iVar2 = (int)pUVar8->_padding_;
      if ((*(int *)(pUVar4->_padding_ + 0x38) < iVar2) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
          &pUVar8->_padding_)) {
        pFVar10 = GetTypeName<UAISystem>(&local_50);
        pwVar11 = L"";
        if ((pFVar10->Data).ArrayNum == 0) {
          pwVar12 = L"";
        }
        else {
          pwVar12 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
        }
        pFVar10 = GetFullNameForCastLogError<UAISystemBase>((FString *)&local_40.ObjectPtr,pUVar4);
        if ((pFVar10->Data).ArrayNum != 0) {
          pwVar11 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar11,pwVar12);
      }
      this = *(UAIPerceptionSystem **)&pUVar4[2].bInstantiateAISystemOnClient;
    }
  }
  if (this != (UAIPerceptionSystem *)0x0) {
    local_40.DebugPtr = (AActor *)pUVar7;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UWorld *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    local_38 = pAVar6;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar6 != (AActor *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pAVar6);
    }
    local_30 = fVar5;
    UAIPerceptionSystem::OnEvent<FAIPredictionEvent,UAISense_Prediction>
              (this,(FAIPredictionEvent *)&local_40.ObjectPtr);
  }
  return;
}

// execRequestPawnPredictionEvent @ 146fe7c10

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
UAISense_Prediction::execRequestPawnPredictionEvent(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  int iVar2;
  FProperty *pFVar3;
  UAISystemBase *pUVar4;
  UAIPerceptionSystem *this;
  float fVar5;
  AActor *pAVar6;
  UWorld *pUVar7;
  UClass *pUVar8;
  UWorld *pUVar9;
  FString *pFVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  float local_res10 [4];
  AActor *local_res20;
  UWorld *local_58;
  FString local_50;
  TObjectPtr<AActor>_u_0 local_40;
  AActor *local_38;
  float local_30;
  
  local_58 = (UWorld *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_res20 = (AActor *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pUVar7 = local_58;
  pAVar6 = local_res20;
  fVar5 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_58 != (UWorld *)0x0) {
    pUVar8 = Z_Construct_UClass_UWorld_NoRegister();
    iVar2 = (int)pUVar8->_padding_;
    if ((((iVar2 <= *(int *)(pUVar7->_padding_ + 0x38)) &&
         (pUVar9 = pUVar7,
         (longlong *)*(undefined1 **)(*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar2 * 8)
         == &pUVar8->_padding_)) ||
        (pUVar9 = UEngine::GetWorldFromContextObject(GEngine,(UObject *)pUVar7,LogAndReturnNull),
        pUVar9 != (UWorld *)0x0)) &&
       (pUVar4 = (pUVar9->AISystem).field0_0x0.DebugPtr, pUVar4 != (UAISystemBase *)0x0)) {
      pUVar8 = Z_Construct_UClass_UAISystem_NoRegister();
      iVar2 = (int)pUVar8->_padding_;
      if ((*(int *)(pUVar4->_padding_ + 0x38) < iVar2) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
          &pUVar8->_padding_)) {
        pFVar10 = GetTypeName<UAISystem>(&local_50);
        pwVar11 = L"";
        if ((pFVar10->Data).ArrayNum == 0) {
          pwVar12 = L"";
        }
        else {
          pwVar12 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
        }
        pFVar10 = GetFullNameForCastLogError<UAISystemBase>((FString *)&local_40.ObjectPtr,pUVar4);
        if ((pFVar10->Data).ArrayNum != 0) {
          pwVar11 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar11,pwVar12);
      }
      this = *(UAIPerceptionSystem **)&pUVar4[2].bInstantiateAISystemOnClient;
      if ((this != (UAIPerceptionSystem *)0x0) &&
         (local_40 = (TObjectPtr<AActor>_u_0)
                     *(TObjectPtr<AActor>_u_0 *)
                      &(pUVar7->ComponentsThatNeedPreEndOfFrameSync).Elements.field_0x20,
         local_40.DebugPtr != (AActor *)0x0)) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)local_40.DebugPtr);
        }
        local_38 = pAVar6;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar6 != (AActor *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pAVar6);
        }
        local_30 = fVar5;
        UAIPerceptionSystem::OnEvent<FAIPredictionEvent,UAISense_Prediction>
                  (this,(FAIPredictionEvent *)&local_40.ObjectPtr);
      }
    }
  }
  return;
}

