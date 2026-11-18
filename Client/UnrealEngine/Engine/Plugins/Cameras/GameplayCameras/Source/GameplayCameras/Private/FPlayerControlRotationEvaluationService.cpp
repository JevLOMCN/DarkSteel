// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 11

// FPlayerControlRotationEvaluationService @ 14d655f80

FPlayerControlRotationEvaluationService * __thiscall
UE::Cameras::FPlayerControlRotationEvaluationService::FPlayerControlRotationEvaluationService
          (FPlayerControlRotationEvaluationService *this,FPlayerControlRotationParams *param_1)

{
  TArray<TObjectPtr<UInputAction>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<UE::Cameras::TCameraDebugGraphEntry<1>,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  TVector2<double> TVar14;
  
  FCameraEvaluationService::FCameraEvaluationService((FCameraEvaluationService *)this);
  pTVar1 = &(this->ServiceParams).AxisActions;
  this->_padding_ = (longlong)&___7FPlayerControlRotationEvaluationService_Cameras_UE__6B_;
  (this->ServiceParams).AxisActionMagnitudeThreshold = param_1->AxisActionMagnitudeThreshold;
  (this->ServiceParams).AxisActionAngularSpeedThreshold = param_1->AxisActionAngularSpeedThreshold;
  (this->ServiceParams).bApplyControlRotation = param_1->bApplyControlRotation;
  piVar2 = &(this->ServiceParams).AxisActions.ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar4 = (param_1->AxisActions).ArrayNum;
  pFVar5 = (param_1->AxisActions).AllocatorInstance.Data;
  (this->ServiceParams).AxisActions.ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar4,0,&pTVar1->AllocatorInstance,iVar4,piVar2);
    ConstructItems<TObjectPtr<UInputAction>,TObjectPtr<UInputAction>,int>
              ((pTVar1->AllocatorInstance).Data,(TObjectPtr<UInputAction> *)pFVar5,iVar4);
  }
  (this->WeakInputComponent).WeakPtr = (FWeakObjectPtr)0x0;
  pTVar3 = &(this->AxisActionAngularSpeedGraph).Entries;
  (this->AxisBindings).ArrayNum = 0;
  (this->AxisBindings).ArrayMax = 0;
  piVar2 = &(this->AxisActionAngularSpeedGraph).Entries.ArrayMax;
  this->bIsFrozen = false;
  (this->AxisBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PreviousAxisBindingValue).field0_0x0._s_0.X = 0.0;
  (this->PreviousAxisBindingValue).field0_0x0._s_0.Y = 0.0;
  fVar6 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar7 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar8._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar8._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->DebugPawnTransform).Rotation.XY.m128d_f64 = auVar8;
  auVar9._8_4_ = SUB84((double)fVar7,0);
  auVar9._0_8_ = (double)fVar6;
  auVar9._12_4_ = (int)((ulonglong)(double)fVar7 >> 0x20);
  *(undefined1 (*) [16])(this->DebugPawnTransform).Rotation.ZW.m128d_f64 = auVar9;
  fVar6 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar7 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar10._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar10._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar10._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->DebugPawnTransform).Translation.XY.m128d_f64 = auVar10;
  auVar11._8_4_ = SUB84((double)fVar7,0);
  auVar11._0_8_ = (double)fVar6;
  auVar11._12_4_ = (int)((ulonglong)(double)fVar7 >> 0x20);
  *(undefined1 (*) [16])(this->DebugPawnTransform).Translation.ZW.m128d_f64 = auVar11;
  fVar6 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar7 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar12._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar12._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar12._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->DebugPawnTransform).Scale3D.XY.m128d_f64 = auVar12;
  auVar13._8_4_ = SUB84((double)fVar7,0);
  auVar13._0_8_ = (double)fVar6;
  auVar13._12_4_ = (int)((ulonglong)(double)fVar7 >> 0x20);
  *(undefined1 (*) [16])(this->DebugPawnTransform).Scale3D.ZW.m128d_f64 = auVar13;
  (this->DebugFreezeReason).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugFreezeReason).Data.ArrayNum = 0;
  (this->DebugFreezeReason).Data.ArrayMax = 0;
  (this->AxisActionAngularSpeedGraph).CurrentMinValue = 0.0;
  (this->AxisActionAngularSpeedGraph).CurrentMaxValue = 0.0;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->AxisActionAngularSpeedGraph).Entries.ArrayNum = 0;
  *piVar2 = 0;
  Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,0x14,&pTVar3->AllocatorInstance,0,piVar2);
  (this->AxisActionValueClock).Value._padding_ = 0;
  (this->AxisActionValueClock).Value._padding_ = 0;
  (this->AxisActionValueClock).Value._padding_ = 0;
  TVar14 = UE::Math::TVector2<double>::ZeroVector;
  (this->AxisActionValueClock).Value._padding_ = 0;
  *(TVector2<double>_u_0 *)&(this->AxisActionValueClock).Value =
       (TVector2<double>_u_0_s_0)TVar14.field0_0x0;
  (this->AxisActionValueClock).Value.TypeIndex = '\0';
  FCameraEvaluationService::SetEvaluationServiceFlags
            ((FCameraEvaluationService *)this,NeedsPostUpdate);
  return this;
}

// FPlayerControlRotationEvaluationService @ 14d656130

FPlayerControlRotationEvaluationService * __thiscall
UE::Cameras::FPlayerControlRotationEvaluationService::FPlayerControlRotationEvaluationService
          (FPlayerControlRotationEvaluationService *this)

{
  int *piVar1;
  TArray<UE::Cameras::TCameraDebugGraphEntry<1>,TSizedDefaultAllocator<32>_> *pTVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  TVector2<double> TVar11;
  
  FCameraEvaluationService::FCameraEvaluationService((FCameraEvaluationService *)this);
  pTVar2 = &(this->AxisActionAngularSpeedGraph).Entries;
  this->bIsFrozen = false;
  this->_padding_ = (longlong)&___7FPlayerControlRotationEvaluationService_Cameras_UE__6B_;
  (this->ServiceParams).AxisActionMagnitudeThreshold = 0.0;
  piVar1 = &(this->AxisActionAngularSpeedGraph).Entries.ArrayMax;
  (this->ServiceParams).AxisActionAngularSpeedThreshold = 0.0;
  (this->ServiceParams).bApplyControlRotation = true;
  (this->ServiceParams).AxisActions.ArrayNum = 0;
  (this->ServiceParams).AxisActions.ArrayMax = 0;
  (this->WeakInputComponent).WeakPtr = (FWeakObjectPtr)0x0;
  (this->AxisBindings).ArrayNum = 0;
  (this->AxisBindings).ArrayMax = 0;
  (this->ServiceParams).AxisActions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AxisBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PreviousAxisBindingValue).field0_0x0._s_0.X = 0.0;
  (this->PreviousAxisBindingValue).field0_0x0._s_0.Y = 0.0;
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->DebugPawnTransform).Rotation.XY.m128d_f64 = auVar5;
  auVar6._8_4_ = SUB84((double)fVar4,0);
  auVar6._0_8_ = (double)fVar3;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])(this->DebugPawnTransform).Rotation.ZW.m128d_f64 = auVar6;
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->DebugPawnTransform).Translation.XY.m128d_f64 = auVar7;
  auVar8._8_4_ = SUB84((double)fVar4,0);
  auVar8._0_8_ = (double)fVar3;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])(this->DebugPawnTransform).Translation.ZW.m128d_f64 = auVar8;
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar9._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar9._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar9._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->DebugPawnTransform).Scale3D.XY.m128d_f64 = auVar9;
  auVar10._8_4_ = SUB84((double)fVar4,0);
  auVar10._0_8_ = (double)fVar3;
  auVar10._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])(this->DebugPawnTransform).Scale3D.ZW.m128d_f64 = auVar10;
  (this->DebugFreezeReason).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugFreezeReason).Data.ArrayNum = 0;
  (this->DebugFreezeReason).Data.ArrayMax = 0;
  (this->AxisActionAngularSpeedGraph).CurrentMinValue = 0.0;
  (this->AxisActionAngularSpeedGraph).CurrentMaxValue = 0.0;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->AxisActionAngularSpeedGraph).Entries.ArrayNum = 0;
  *piVar1 = 0;
  Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,0x14,&pTVar2->AllocatorInstance,0,piVar1);
  (this->AxisActionValueClock).Value._padding_ = 0;
  (this->AxisActionValueClock).Value._padding_ = 0;
  (this->AxisActionValueClock).Value._padding_ = 0;
  TVar11 = UE::Math::TVector2<double>::ZeroVector;
  (this->AxisActionValueClock).Value._padding_ = 0;
  *(TVector2<double>_u_0 *)&(this->AxisActionValueClock).Value =
       (TVector2<double>_u_0_s_0)TVar11.field0_0x0;
  (this->AxisActionValueClock).Value.TypeIndex = '\0';
  FCameraEvaluationService::SetEvaluationServiceFlags
            ((FCameraEvaluationService *)this,NeedsPostUpdate);
  return this;
}

// BindActionValues @ 14d65ca50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Cameras::FPlayerControlRotationEvaluationService::BindActionValues
          (FPlayerControlRotationEvaluationService *this,UEnhancedInputComponent *param_1)

{
  TArray<FEnhancedInputActionValueBinding_*,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int *piVar3;
  TArray<FEnhancedInputActionValueBinding,TSizedDefaultAllocator<32>_> *pTVar4;
  UObject *pUVar5;
  FInputBindingHandle *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  UObject *pUVar10;
  ulonglong uVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  undefined1 local_res18 [8];
  uint local_res20;
  FScriptContainerElement *local_b8;
  FString local_b0;
  FInputBindingHandle local_a0;
  FWeakObjectPtr local_90;
  double local_88;
  double dStack_80;
  double local_78;
  undefined1 uStack_70;
  undefined7 uStack_6f;
  FName local_68;
  UEnhancedInputComponent *local_60;
  UObject *local_58;
  FScriptContainerElement *local_50;
  
  if (5 < (byte)LogCameraSystem._0_1_) {
    if (param_1 == (UEnhancedInputComponent *)0x0) {
      ::FString::FString(&local_b0,L"None");
    }
    else {
      local_68 = (FName)param_1->_padding_;
      ::FName::ToString(&local_68,&local_b0);
    }
    Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogCameraSystem);
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
  }
  local_60 = param_1;
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UEnhancedInputComponent *)0x0)) {
    GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->WeakInputComponent).WeakPtr,(FObjectPtr)&local_60);
  pTVar1 = &this->AxisBindings;
  piVar2 = &(this->AxisBindings).ArrayMax;
  (this->AxisBindings).ArrayNum = 0;
  if ((this->AxisBindings).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar1->AllocatorInstance,0,piVar2);
  }
  local_res20 = (this->ServiceParams).AxisActions.ArrayNum;
  uVar11 = (ulonglong)(int)local_res20;
  pFVar14 = (this->ServiceParams).AxisActions.AllocatorInstance.Data;
  local_50 = pFVar14 + uVar11 * 8;
  do {
    pFVar13 = local_50;
    if ((this->ServiceParams).AxisActions.ArrayNum != (int)uVar11) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UInputAction>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (pFVar14 == pFVar13) {
      return;
    }
    pUVar5 = *(UObject **)pFVar14;
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar5);
    }
    pTVar4 = &param_1->EnhancedActionValueBindings;
    pFVar13 = (pTVar4->AllocatorInstance).Data;
    pFVar12 = pFVar13 + (longlong)(param_1->EnhancedActionValueBindings).ArrayNum * 0x38;
    for (; pFVar13 != pFVar12; pFVar13 = pFVar13 + 0x38) {
      pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pFVar13 + 0x10));
      if (pUVar10 == pUVar5) {
        if (pFVar13 != (FScriptContainerElement *)0x0) goto LAB_14d65ccf9;
        break;
      }
    }
    FInputBindingHandle::FInputBindingHandle(&local_a0);
    local_a0._padding_ = (longlong)&___7FEnhancedInputActionValueBinding__6B_;
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar5);
    }
    local_90.ObjectIndex = 0;
    local_90.ObjectSerialNumber = 0;
    local_58 = pUVar5;
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar5);
    }
    FWeakObjectPtr::operator=(&local_90,(FObjectPtr)&local_58);
    pFVar6 = (FInputBindingHandle *)(pTVar4->AllocatorInstance).Data;
    uStack_70 = 0;
    local_88 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_80 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_78 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    if (((pFVar6 <= &local_a0) &&
        (&local_a0 <
         (FInputBindingHandle *)
         ((longlong)pFVar6 + (longlong)(param_1->EnhancedActionValueBindings).ArrayMax * 0x38))) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar9 = (param_1->EnhancedActionValueBindings).ArrayNum;
    piVar3 = &(param_1->EnhancedActionValueBindings).ArrayMax;
    if (iVar9 == *piVar3) {
      iVar9 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x838,&pTVar4->AllocatorInstance,piVar3);
    }
    (param_1->EnhancedActionValueBindings).ArrayNum = iVar9 + 1;
    pFVar13 = (pTVar4->AllocatorInstance).Data + (longlong)iVar9 * 0x38;
    *(undefined ***)pFVar13 = &___7FInputBindingHandle__6B_;
    *(uint *)(pFVar13 + 8) = local_a0.Handle;
    *(undefined ***)pFVar13 = &___7FEnhancedInputActionValueBinding__6B_;
    *(FWeakObjectPtr *)(pFVar13 + 0x10) = local_90;
    *(double *)(pFVar13 + 0x18) = local_88;
    *(double *)(pFVar13 + 0x20) = dStack_80;
    *(double *)(pFVar13 + 0x28) = local_78;
    *(ulonglong *)(pFVar13 + 0x30) = CONCAT71(uStack_6f,uStack_70);
LAB_14d65ccf9:
    pFVar12 = (pTVar1->AllocatorInstance).Data;
    local_b8 = pFVar13;
    if (((pFVar12 <= (FScriptContainerElement *)&local_b8) &&
        ((FScriptContainerElement *)&local_b8 < pFVar12 + (longlong)*piVar2 * 8)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar9 = (this->AxisBindings).ArrayNum;
    if (iVar9 == *piVar2) {
      iVar9 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar1->AllocatorInstance,piVar2);
    }
    pFVar14 = pFVar14 + 8;
    (this->AxisBindings).ArrayNum = iVar9 + 1;
    *(FScriptContainerElement **)((pTVar1->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_b8
    ;
    uVar11 = (ulonglong)local_res20;
  } while( true );
}

// GetTypeID @ 14d661ce0

FCameraObjectTypeID * __thiscall
UE::Cameras::FPlayerControlRotationEvaluationService::GetTypeID
          (FPlayerControlRotationEvaluationService *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// IsKindOf @ 14d663110

bool __thiscall
UE::Cameras::FPlayerControlRotationEvaluationService::IsKindOf
          (FPlayerControlRotationEvaluationService *this,FCameraObjectTypeID *param_1)

{
  if (((TCameraObjectTypeID<UE::Cameras::FPlayerControlRotationEvaluationService>)param_1->ID !=
       PrivateTypeID) &&
     ((TCameraObjectTypeID<UE::Cameras::FCameraEvaluationService>)param_1->ID !=
      FCameraEvaluationService::PrivateTypeID)) {
    return false;
  }
  return true;
}

// MonitorActiveContext @ 14d6633e0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FPlayerControlRotationEvaluationService::MonitorActiveContext
          (FPlayerControlRotationEvaluationService *this,
          TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> *param_1)

{
  UEnhancedInputComponent *pUVar1;
  bool bVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  
  if (param_1->Object != (FCameraEvaluationContext *)0x0) {
    pUVar3 = FWeakObjectPtr::Get(&(param_1->Object->WeakPlayerController).WeakPtr);
    if ((pUVar3 != (UObject *)0x0) &&
       (pUVar3 = *(UObject **)&pUVar3[0x13].field_0x18, pUVar3 != (UObject *)0x0)) {
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable(pUVar3);
      }
      if (*(longlong *)&pUVar3[9].field_0x10 != 0) {
        pUVar4 = Z_Construct_UClass_UEnhancedInputComponent_NoRegister();
        bVar2 = FObjectPtr::IsA((FObjectPtr *)&pUVar3[9].field_0x10,pUVar4);
        if ((bVar2) &&
           (pUVar1 = *(UEnhancedInputComponent **)&pUVar3[9].field_0x10,
           pUVar1 != (UEnhancedInputComponent *)0x0)) {
          bVar2 = TWeakObjectPtr<UEnhancedInputComponent,FWeakObjectPtr>::
                  UEOpEquals<UEnhancedInputComponent,bool>(&this->WeakInputComponent,pUVar1);
          if (!bVar2) {
            BindActionValues(this,pUVar1);
          }
          goto LAB_14d66347b;
        }
      }
    }
  }
  UnbindActionValues(this);
LAB_14d66347b:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnAddReferencedObjects @ 14d663670

void __thiscall
UE::Cameras::FPlayerControlRotationEvaluationService::OnAddReferencedObjects
          (FPlayerControlRotationEvaluationService *this,FReferenceCollector *param_1)

{
  (**(code **)(param_1->_padding_ + 0x90))
            (param_1,(this->ServiceParams).AxisActions.AllocatorInstance.Data,
             (this->ServiceParams).AxisActions.ArrayNum,0,0);
  return;
}

// OnBuildDebugBlocks @ 14d665140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Cameras::FPlayerControlRotationEvaluationService::OnBuildDebugBlocks
          (FPlayerControlRotationEvaluationService *this,FCameraDebugBlockBuildParams *param_1,
          FCameraDebugBlockBuilder *param_2)

{
  int *piVar1;
  TArray<UE::Cameras::TCameraDebugGraphEntry<1>,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<UE::Cameras::TCameraDebugGraphEntry<1>,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *this_00;
  FScriptContainerElement *_Src;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  FPlayerControlRotationDebugBlock *pFVar8;
  ulonglong uVar9;
  int iVar10;
  undefined1 auStackY_98 [32];
  longlong local_58;
  longlong lStack_50;
  longlong local_48;
  byte bStack_40;
  undefined7 uStack_3f;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_98;
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)param_2->Storage;
  pFVar8 = TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::BuildObjectUninitialized
                     (this_00,0x110,0x10);
  memset(pFVar8,0,0x110);
  pFVar8 = FPlayerControlRotationDebugBlock::FPlayerControlRotationDebugBlock(pFVar8);
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::RegisterInitializedObject
            (this_00,(FCameraDebugBlock *)pFVar8);
  FCameraDebugBlockBuilder::OnAttachDebugBlock(param_2,(FCameraDebugBlock *)pFVar8);
  dVar6 = (this->DebugPawnTransform).Rotation.XY.m128d_f64[1];
  (pFVar8->PawnTransform).Rotation.XY.m128d_f64[0] =
       (this->DebugPawnTransform).Rotation.XY.m128d_f64[0];
  (pFVar8->PawnTransform).Rotation.XY.m128d_f64[1] = dVar6;
  dVar6 = (this->DebugPawnTransform).Rotation.ZW.m128d_f64[1];
  (pFVar8->PawnTransform).Rotation.ZW.m128d_f64[0] =
       (this->DebugPawnTransform).Rotation.ZW.m128d_f64[0];
  (pFVar8->PawnTransform).Rotation.ZW.m128d_f64[1] = dVar6;
  dVar6 = (this->DebugPawnTransform).Translation.XY.m128d_f64[1];
  (pFVar8->PawnTransform).Translation.XY.m128d_f64[0] =
       (this->DebugPawnTransform).Translation.XY.m128d_f64[0];
  (pFVar8->PawnTransform).Translation.XY.m128d_f64[1] = dVar6;
  dVar6 = (this->DebugPawnTransform).Translation.ZW.m128d_f64[1];
  (pFVar8->PawnTransform).Translation.ZW.m128d_f64[0] =
       (this->DebugPawnTransform).Translation.ZW.m128d_f64[0];
  (pFVar8->PawnTransform).Translation.ZW.m128d_f64[1] = dVar6;
  dVar6 = (this->DebugPawnTransform).Scale3D.XY.m128d_f64[1];
  (pFVar8->PawnTransform).Scale3D.XY.m128d_f64[0] =
       (this->DebugPawnTransform).Scale3D.XY.m128d_f64[0];
  (pFVar8->PawnTransform).Scale3D.XY.m128d_f64[1] = dVar6;
  dVar6 = (this->DebugPawnTransform).Scale3D.ZW.m128d_f64[1];
  (pFVar8->PawnTransform).Scale3D.ZW.m128d_f64[0] =
       (this->DebugPawnTransform).Scale3D.ZW.m128d_f64[0];
  (pFVar8->PawnTransform).Scale3D.ZW.m128d_f64[1] = dVar6;
  dVar6 = (this->CurrentControlRotation).Yaw;
  (pFVar8->ControlRotation).Pitch = (this->CurrentControlRotation).Pitch;
  (pFVar8->ControlRotation).Yaw = dVar6;
  (pFVar8->ControlRotation).Roll = (this->CurrentControlRotation).Roll;
  dVar6 = (this->CameraRotation).Yaw;
  (pFVar8->CameraRotation).Pitch = (this->CameraRotation).Pitch;
  (pFVar8->CameraRotation).Yaw = dVar6;
  (pFVar8->CameraRotation).Roll = (this->CameraRotation).Roll;
  pFVar8->bIsFrozen = this->bIsFrozen;
  iVar4 = (this->DebugFreezeReason).Data.ArrayNum;
  iVar10 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar10 = 0;
  }
  ::FString::AssignRange
            (&pFVar8->FreezeReason,(wchar_t *)(this->DebugFreezeReason).Data.AllocatorInstance.Data,
             iVar10);
  pTVar2 = &(this->AxisActionAngularSpeedGraph).Entries;
  pTVar3 = &(pFVar8->AxisActionAngularSpeedGraph).Entries;
  (pFVar8->AxisActionAngularSpeedGraph).CurrentMinValue =
       (this->AxisActionAngularSpeedGraph).CurrentMinValue;
  (pFVar8->AxisActionAngularSpeedGraph).CurrentMaxValue =
       (this->AxisActionAngularSpeedGraph).CurrentMaxValue;
  if (pTVar3 != pTVar2) {
    iVar10 = (this->AxisActionAngularSpeedGraph).Entries.ArrayNum;
    piVar1 = &(pFVar8->AxisActionAngularSpeedGraph).Entries.ArrayMax;
    _Src = (pTVar2->AllocatorInstance).Data;
    iVar4 = *piVar1;
    (pFVar8->AxisActionAngularSpeedGraph).Entries.ArrayNum = iVar10;
    if ((iVar10 == 0) && (iVar4 == 0)) {
      *piVar1 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar10,iVar4,&pTVar3->AllocatorInstance,iVar10,piVar1);
      if (iVar10 != 0) {
        memcpy((pTVar3->AllocatorInstance).Data,_Src,(longlong)iVar10 << 3);
      }
    }
  }
  if (&this->AxisActionValueClock != &pFVar8->AxisActionValueClock) {
    bStack_40 = (this->AxisActionValueClock).Value.TypeIndex;
    uVar9 = (ulonglong)bStack_40;
    if (1 < uVar9) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(CopyConstructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xec,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<UE::Cameras::FCameraDebugClock::FVectorValue,UE::Cameras::FCameraDebugClock::FAngleValue>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
                ::__l2::CopyConstructors)[uVar9])(&local_58,&this->AxisActionValueClock);
    (pFVar8->AxisActionValueClock).Value._padding_ = local_58;
    (pFVar8->AxisActionValueClock).Value._padding_ = lStack_50;
    (pFVar8->AxisActionValueClock).Value._padding_ = local_48;
    *(ulonglong *)&(pFVar8->AxisActionValueClock).Value.TypeIndex = CONCAT71(uStack_3f,bStack_40);
  }
  return;
}

// OnPostUpdate @ 14d668a40

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FPlayerControlRotationEvaluationService::OnPostUpdate
          (FPlayerControlRotationEvaluationService *this,
          FCameraEvaluationServiceUpdateParams *param_1,
          FCameraEvaluationServiceUpdateResult *param_2)

{
  double dVar1;
  FCameraNodeEvaluationResult *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  FCameraEvaluationContext *pFVar4;
  UEnhancedInputComponent *pUVar5;
  UObject *pUVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  TSharedPtr<UE::Cameras::FCameraEvaluationContext,1> *pTVar10;
  UObject *pUVar11;
  UClass *pUVar12;
  TTransform<double> *pTVar13;
  wchar_t *pwVar14;
  TSharedPtr<UE::Cameras::FCameraEvaluationContext,1> local_38;
  
  pFVar2 = param_2->EvaluationResult;
  dVar1 = (pFVar2->CameraPose).Rotation.Yaw;
  (this->CameraRotation).Pitch = (pFVar2->CameraPose).Rotation.Pitch;
  (this->CameraRotation).Yaw = dVar1;
  dVar1 = (pFVar2->CameraPose).Rotation.Roll;
  (this->CameraRotation).Roll = dVar1;
  dVar7 = (this->CameraRotation).Pitch;
  dVar8 = (this->CameraRotation).Yaw;
  this->bDebugDidApplyControlRotation = false;
  (this->CurrentControlRotation).Pitch = dVar7;
  (this->CurrentControlRotation).Yaw = dVar8;
  (this->CurrentControlRotation).Roll = dVar1;
  pTVar10 = FCameraEvaluationContextStack::GetActiveContext
                      (&param_1->Evaluator->ContextStack,&local_38);
  pTVar3 = (pTVar10->SharedReferenceCount).ReferenceController;
  pFVar4 = pTVar10->Object;
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  else {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pFVar4 == (FCameraEvaluationContext *)0x0) {
    UnbindActionValues(this);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    pwVar14 = L"no active context";
  }
  else {
    pUVar11 = FWeakObjectPtr::Get(&(pFVar4->WeakPlayerController).WeakPtr);
    if (pUVar11 == (UObject *)0x0) {
LAB_14d668b6f:
      UnbindActionValues(this);
    }
    else {
      pUVar11 = *(UObject **)&pUVar11[0x13].field_0x18;
      if (GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar11 != (UObject *)0x0) goto LAB_14d668b24;
        goto LAB_14d668b6f;
      }
      if (pUVar11 == (UObject *)0x0) goto LAB_14d668b6f;
      GC::MarkAsReachable(pUVar11);
LAB_14d668b24:
      if (*(longlong *)&pUVar11[9].field_0x10 == 0) goto LAB_14d668b6f;
      pUVar12 = Z_Construct_UClass_UEnhancedInputComponent_NoRegister();
      bVar9 = FObjectPtr::IsA((FObjectPtr *)&pUVar11[9].field_0x10,pUVar12);
      if ((!bVar9) ||
         (pUVar5 = *(UEnhancedInputComponent **)&pUVar11[9].field_0x10,
         pUVar5 == (UEnhancedInputComponent *)0x0)) goto LAB_14d668b6f;
      bVar9 = TWeakObjectPtr<UEnhancedInputComponent,FWeakObjectPtr>::
              UEOpEquals<UEnhancedInputComponent,bool>(&this->WeakInputComponent,pUVar5);
      if (!bVar9) {
        BindActionValues(this,pUVar5);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    pUVar11 = FWeakObjectPtr::Get(&(pFVar4->WeakPlayerController).WeakPtr);
    if (pUVar11 != (UObject *)0x0) {
      pUVar6 = *(UObject **)&pUVar11[0x13].field_0x18;
      if (pUVar6 != (UObject *)0x0) {
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(pUVar6);
        }
        if (*(longlong *)(pUVar6 + 0xb) == 0) {
          pTVar13 = &UE::Math::TTransform<double>::Identity;
        }
        else {
          pTVar13 = (TTransform<double> *)(*(longlong *)(pUVar6 + 0xb) + 0x1f0);
        }
        dVar1 = (pTVar13->Rotation).XY.m128d_f64[1];
        (this->DebugPawnTransform).Rotation.XY.m128d_f64[0] = (pTVar13->Rotation).XY.m128d_f64[0];
        (this->DebugPawnTransform).Rotation.XY.m128d_f64[1] = dVar1;
        dVar1 = (pTVar13->Rotation).ZW.m128d_f64[1];
        (this->DebugPawnTransform).Rotation.ZW.m128d_f64[0] = (pTVar13->Rotation).ZW.m128d_f64[0];
        (this->DebugPawnTransform).Rotation.ZW.m128d_f64[1] = dVar1;
        dVar1 = (pTVar13->Translation).XY.m128d_f64[1];
        (this->DebugPawnTransform).Translation.XY.m128d_f64[0] =
             (pTVar13->Translation).XY.m128d_f64[0];
        (this->DebugPawnTransform).Translation.XY.m128d_f64[1] = dVar1;
        dVar1 = (pTVar13->Translation).ZW.m128d_f64[1];
        (this->DebugPawnTransform).Translation.ZW.m128d_f64[0] =
             (pTVar13->Translation).ZW.m128d_f64[0];
        (this->DebugPawnTransform).Translation.ZW.m128d_f64[1] = dVar1;
        dVar1 = (pTVar13->Scale3D).XY.m128d_f64[1];
        (this->DebugPawnTransform).Scale3D.XY.m128d_f64[0] = (pTVar13->Scale3D).XY.m128d_f64[0];
        (this->DebugPawnTransform).Scale3D.XY.m128d_f64[1] = dVar1;
        dVar1 = (pTVar13->Scale3D).ZW.m128d_f64[1];
        (this->DebugPawnTransform).Scale3D.ZW.m128d_f64[0] = (pTVar13->Scale3D).ZW.m128d_f64[0];
        (this->DebugPawnTransform).Scale3D.ZW.m128d_f64[1] = dVar1;
      }
      if ((this->AxisBindings).ArrayNum == 0) {
        this->bIsFrozen = false;
        ::FString::operator=(&this->DebugFreezeReason,L"no input bindings defined");
      }
      else {
        UpdateControlRotation(this,param_1,param_2);
      }
      if ((this->ServiceParams).bApplyControlRotation != false) {
        (**(code **)(*(longlong *)pUVar11 + 0x7b0))(pUVar11,&this->CurrentControlRotation);
      }
      this->bDebugDidApplyControlRotation = (this->ServiceParams).bApplyControlRotation;
      goto LAB_14d668c7b;
    }
    pwVar14 = L"no player controller on active context";
  }
  this->bIsFrozen = false;
  ::FString::operator=(&this->DebugFreezeReason,pwVar14);
LAB_14d668c7b:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// UnbindActionValues @ 14d6743d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Cameras::FPlayerControlRotationEvaluationService::UnbindActionValues
          (FPlayerControlRotationEvaluationService *this)

{
  int *piVar1;
  
  if (5 < (byte)LogCameraSystem._0_1_) {
    Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogCameraSystem);
  }
  (this->WeakInputComponent).WeakPtr = (FWeakObjectPtr)0x0;
  piVar1 = &(this->AxisBindings).ArrayMax;
  (this->AxisBindings).ArrayNum = 0;
  if (*piVar1 < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->AxisBindings).AllocatorInstance,0,piVar1);
  }
  return;
}

// UpdateControlRotation @ 14d674a20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FPlayerControlRotationEvaluationService::UpdateControlRotation
          (FPlayerControlRotationEvaluationService *this,
          FCameraEvaluationServiceUpdateParams *param_1,
          FCameraEvaluationServiceUpdateResult *param_2)

{
  int *piVar1;
  TArray<UE::Cameras::TCameraDebugGraphEntry<1>,TSizedDefaultAllocator<32>_> *pTVar2;
  FString *pFVar3;
  float fVar4;
  FCameraNodeEvaluationResult *pFVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  FBuiltInCameraVariables *pFVar14;
  bool *pbVar15;
  FEntry *pFVar16;
  double *pdVar17;
  FScriptContainerElement *pFVar18;
  ForAnyElementType FVar19;
  char cVar20;
  float fVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined1 auStackY_168 [32];
  undefined1 local_118 [8];
  TVector2<double>_u_0 local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  double local_c0;
  double local_b8;
  undefined1 local_b0 [16];
  undefined8 local_a0;
  undefined8 uStack_98;
  float local_90;
  float fStack_8c;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pFVar14 = FBuiltInCameraVariables::Get();
  pFVar5 = param_2->EvaluationResult;
  if (this->bIsFrozen != false) goto LAB_14d674b28;
  pbVar15 = FCameraVariableTable::FindValue<bool>
                      (&pFVar5->VariableTable,
                       (FCameraVariableID)
                       (pFVar14->FreezeControlRotationDefinition).VariableID.Value);
  if (pbVar15 == (bool *)0x0) {
    cVar20 = '\0';
  }
  else {
    cVar20 = *pbVar15;
  }
  pFVar16 = FCameraVariableTable::FindEntry
                      (&pFVar5->VariableTable,
                       (FCameraVariableID)(pFVar14->ControlRotationDefinition).VariableID.Value);
  if (pFVar16 == (FEntry *)0x0) {
LAB_14d674b11:
    bVar11 = false;
  }
  else {
    if ((pFVar16->Type != Rotator3d) &&
       (bVar11 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<7269619262472323284>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                            ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType"), bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (((pFVar16->Flags & Written) == None) ||
       (pdVar17 = (double *)((pFVar5->VariableTable).Memory + pFVar16->Offset),
       pdVar17 == (double *)0x0)) goto LAB_14d674b11;
    dVar24 = pdVar17[1];
    (this->FrozenControlRotation).Pitch = *pdVar17;
    (this->FrozenControlRotation).Yaw = dVar24;
    bVar11 = true;
    (this->FrozenControlRotation).Roll = pdVar17[2];
  }
  if ((cVar20 == '\0') || (!bVar11)) {
    bVar11 = false;
  }
  else {
    bVar11 = true;
  }
  this->bIsFrozen = bVar11;
LAB_14d674b28:
  pFVar18 = (this->AxisBindings).AllocatorInstance.Data;
  iVar13 = (this->AxisBindings).ArrayNum;
  local_110._s_0.X = 0.0;
  local_110._s_0.Y = 0.0;
  uVar25 = 0;
  uVar26 = 0;
  uVar29 = 0;
  uVar30 = 0;
  uVar27 = 0;
  uVar28 = 0;
  pFVar7 = pFVar18 + (longlong)iVar13 * 8;
  while( true ) {
    if ((this->AxisBindings).ArrayNum != iVar13) {
      local_118[0] = 0;
      `TCheckedPointerIterator<FEnhancedInputActionValueBinding_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_118);
      uVar25 = SUB84(local_110._s_0.Y,0);
      uVar26 = (undefined4)((ulonglong)local_110._8_8_ >> 0x20);
      uVar27 = SUB84(local_110._s_0.X,0);
      uVar28 = (undefined4)((ulonglong)local_110._0_8_ >> 0x20);
    }
    if (pFVar18 == pFVar7) break;
    lVar6 = *(longlong *)pFVar18;
    local_b0 = *(undefined1 (*) [16])(lVar6 + 0x18);
    local_a0 = *(undefined8 *)(lVar6 + 0x28);
    uStack_98 = *(undefined8 *)(lVar6 + 0x30);
    dVar23 = local_b0._8_8_;
    dVar24 = local_b0._0_8_;
    dVar22 = dVar23 * dVar23 + dVar24 * dVar24;
    if ((double)CONCAT44(uVar30,uVar29) <= dVar22 && dVar22 != (double)CONCAT44(uVar30,uVar29)) {
      uVar25 = local_b0._8_4_;
      uVar26 = local_b0._12_4_;
      uVar27 = local_b0._0_4_;
      uVar28 = local_b0._4_4_;
      local_110._s_0.X = dVar24;
      local_110._s_0.Y = dVar23;
    }
    if (dVar22 <= (double)CONCAT44(uVar30,uVar29)) {
      dVar22 = (double)CONCAT44(uVar30,uVar29);
    }
    pFVar18 = pFVar18 + 8;
    uVar29 = SUB84(dVar22,0);
    uVar30 = (undefined4)((ulonglong)dVar22 >> 0x20);
  }
  dVar24 = (this->PreviousAxisBindingValue).field0_0x0._s_0.X;
  dVar22 = (this->PreviousAxisBindingValue).field0_0x0._s_0.Y;
  dVar23 = dVar22 * dVar22 + dVar24 * dVar24;
  if (dVar23 <= __real_3e45798ee0000000) {
    dVar24 = 0.0;
    dVar22 = 0.0;
  }
  else {
    local_c0 = __real_3ff0000000000000 / SQRT(dVar23);
    dVar24 = dVar24 * local_c0;
    dVar22 = dVar22 * local_c0;
  }
  dVar23 = (double)CONCAT44(uVar26,uVar25) * (double)CONCAT44(uVar26,uVar25) +
           (double)CONCAT44(uVar28,uVar27) * (double)CONCAT44(uVar28,uVar27);
  if (dVar23 <= __real_3e45798ee0000000) {
    dVar10 = 0.0;
    dVar23 = 0.0;
  }
  else {
    local_b8 = __real_3ff0000000000000 / SQRT(dVar23);
    dVar10 = (double)CONCAT44(uVar28,uVar27) * local_b8;
    dVar23 = (double)CONCAT44(uVar26,uVar25) * local_b8;
  }
  if (((dVar24 != 0.0) || (dVar9 = 0.0, dVar22 != 0.0)) &&
     ((dVar10 != 0.0 || (dVar9 = 0.0, dVar23 != 0.0)))) {
    dVar24 = dVar23 * dVar22 + dVar10 * dVar24;
    dVar22 = __real_bff0000000000000;
    if ((__real_bff0000000000000 <= dVar24) && (dVar22 = dVar24, __real_3ff0000000000000 <= dVar24))
    {
      dVar22 = __real_3ff0000000000000;
    }
    dVar9 = acos(dVar22);
    dVar9 = dVar9 * __real_404ca5dc1a63c1f8;
  }
  fVar21 = param_1->DeltaTime;
  if (param_1->DeltaTime <= 0.0) {
    fVar21 = __real_3f800000;
  }
  pTVar2 = &(this->AxisActionAngularSpeedGraph).Entries;
  *(undefined4 *)&(this->PreviousAxisBindingValue).field0_0x0 = uVar27;
  *(undefined4 *)((longlong)&(this->PreviousAxisBindingValue).field0_0x0 + 4) = uVar28;
  *(undefined4 *)((longlong)&(this->PreviousAxisBindingValue).field0_0x0 + 8) = uVar25;
  *(undefined4 *)((longlong)&(this->PreviousAxisBindingValue).field0_0x0 + 0xc) = uVar26;
  iVar13 = (this->AxisActionAngularSpeedGraph).Entries.ArrayNum;
  fVar4 = param_1->DeltaTime;
  local_110._4_4_ = uVar28;
  local_110._0_4_ = uVar27;
  local_110._12_4_ = uVar26;
  local_110._8_4_ = uVar25;
  if (iVar13 == 0) {
    local_90 = 0.0;
  }
  else {
    uVar12 = 0;
    if ((int)(iVar13 - 1U) < iVar13) {
      uVar12 = ~(iVar13 - 1U) >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    local_90 = fVar4 + *(float *)((pTVar2->AllocatorInstance).Data +
                                 (longlong)(this->AxisActionAngularSpeedGraph).Entries.ArrayNum * 8
                                 + -8);
  }
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  fStack_8c = (float)(dVar9 / (double)fVar21);
  if (((pFVar7 <= (FScriptContainerElement *)&local_90) &&
      ((FScriptContainerElement *)&local_90 <
       pFVar7 + (longlong)(this->AxisActionAngularSpeedGraph).Entries.ArrayMax * 8)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  iVar13 = (this->AxisActionAngularSpeedGraph).Entries.ArrayNum;
  piVar1 = &(this->AxisActionAngularSpeedGraph).Entries.ArrayMax;
  if (iVar13 == *piVar1) {
    iVar13 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,&pTVar2->AllocatorInstance,piVar1);
    (this->AxisActionAngularSpeedGraph).Entries.ArrayNum = iVar13;
  }
  (this->AxisActionAngularSpeedGraph).Entries.ArrayNum = iVar13 + 1;
  *(ulonglong *)((pTVar2->AllocatorInstance).Data + (longlong)iVar13 * 8) =
       CONCAT44(fStack_8c,local_90);
  Cameras::FCameraDebugClock::Update
            (&this->AxisActionValueClock,(TVector2<double> *)&local_110._s_0);
  pFVar3 = &this->DebugFreezeReason;
  if (this->bIsFrozen == false) {
    ::FString::PrintfImpl(&local_100,L"no freeze request (input speed %7.2fdeg/s)");
    FVar19.Data = local_100.Data.AllocatorInstance.Data;
    if (pFVar3 != &local_100) {
      pFVar7 = (pFVar3->Data).AllocatorInstance.Data;
      if (pFVar7 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar7);
      }
      (pFVar3->Data).AllocatorInstance.Data = local_100.Data.AllocatorInstance.Data;
      (this->DebugFreezeReason).Data.ArrayNum = local_100.Data.ArrayNum;
      (this->DebugFreezeReason).Data.ArrayMax = local_100.Data.ArrayMax;
      local_100.Data.ArrayNum = 0;
      local_100.Data.ArrayMax = 0;
      local_100.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FVar19.Data = (FScriptContainerElement *)0x0;
    }
  }
  else {
    dVar24 = (this->ServiceParams).AxisActionMagnitudeThreshold;
    dVar24 = dVar24 * dVar24;
    if (dVar24 <= (double)CONCAT44(uVar30,uVar29) && (double)CONCAT44(uVar30,uVar29) != dVar24) {
      if (dVar9 / (double)fVar21 < (this->ServiceParams).AxisActionAngularSpeedThreshold) {
        dVar22 = (this->FrozenControlRotation).Yaw;
        dVar24 = (this->FrozenControlRotation).Roll;
        (this->CurrentControlRotation).Pitch = (this->FrozenControlRotation).Pitch;
        (this->CurrentControlRotation).Yaw = dVar22;
        (this->CurrentControlRotation).Roll = dVar24;
        ::FString::PrintfImpl(&local_d0,L"unchanged input (%7.2fdeg/s < %7.2fdeg/s)");
        FVar19.Data = local_d0.Data.AllocatorInstance.Data;
        if (pFVar3 != &local_d0) {
          pFVar7 = (pFVar3->Data).AllocatorInstance.Data;
          if (pFVar7 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar7);
          }
          (pFVar3->Data).AllocatorInstance.Data = local_d0.Data.AllocatorInstance.Data;
          (this->DebugFreezeReason).Data.ArrayNum = local_d0.Data.ArrayNum;
          (this->DebugFreezeReason).Data.ArrayMax = local_d0.Data.ArrayMax;
          local_d0.Data.ArrayNum = 0;
          local_d0.Data.ArrayMax = 0;
          local_d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          FVar19.Data = (FScriptContainerElement *)0x0;
        }
      }
      else {
        this->bIsFrozen = false;
        ::FString::PrintfImpl(&local_e0,L"changed input (%7.2fdeg/s > %7.2fdeg/s)");
        FVar19.Data = local_e0.Data.AllocatorInstance.Data;
        if (pFVar3 != &local_e0) {
          pFVar7 = (pFVar3->Data).AllocatorInstance.Data;
          if (pFVar7 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar7);
          }
          (pFVar3->Data).AllocatorInstance.Data = local_e0.Data.AllocatorInstance.Data;
          (this->DebugFreezeReason).Data.ArrayNum = local_e0.Data.ArrayNum;
          (this->DebugFreezeReason).Data.ArrayMax = local_e0.Data.ArrayMax;
          local_e0.Data.ArrayNum = 0;
          local_e0.Data.ArrayMax = 0;
          local_e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          FVar19.Data = (FScriptContainerElement *)0x0;
        }
      }
    }
    else {
      this->bIsFrozen = false;
      ::FString::PrintfImpl(&local_f0,L"no input (magnitude squared %7.2f < %7.f)");
      FVar19.Data = local_f0.Data.AllocatorInstance.Data;
      if (pFVar3 != &local_f0) {
        pFVar7 = (pFVar3->Data).AllocatorInstance.Data;
        if (pFVar7 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar7);
        }
        (pFVar3->Data).AllocatorInstance.Data = local_f0.Data.AllocatorInstance.Data;
        (this->DebugFreezeReason).Data.ArrayNum = local_f0.Data.ArrayNum;
        (this->DebugFreezeReason).Data.ArrayMax = local_f0.Data.ArrayMax;
        local_f0.Data.ArrayNum = 0;
        local_f0.Data.ArrayMax = 0;
        local_f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        FVar19.Data = (FScriptContainerElement *)0x0;
      }
    }
  }
  if (FVar19.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar19.Data);
  }
  return;
}

