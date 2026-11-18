// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// FScopedMovementUpdate @ 147bb9d40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FScopedMovementUpdate * __thiscall
FScopedMovementUpdate::FScopedMovementUpdate
          (FScopedMovementUpdate *this,USceneComponent *param_1,Type param_2,bool param_3)

{
  undefined1 *puVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  FScopedMovementUpdate *pFVar11;
  byte bVar12;
  
  this->Owner = param_1;
  this->OuterDeferredScope = (FScopedMovementUpdate *)0x0;
  this->CurrentOverlapState = eUseParent;
  bVar12 = 0;
  this->TeleportType = None;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar4._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar4._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar4._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->InitialTransform).Rotation.XY.m128d_f64 = auVar4;
  auVar5._8_4_ = SUB84((double)fVar3,0);
  auVar5._0_8_ = (double)fVar2;
  auVar5._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->InitialTransform).Rotation.ZW.m128d_f64 = auVar5;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar6._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar6._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar6._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->InitialTransform).Translation.XY.m128d_f64 = auVar6;
  auVar7._8_4_ = SUB84((double)fVar3,0);
  auVar7._0_8_ = (double)fVar2;
  auVar7._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->InitialTransform).Translation.ZW.m128d_f64 = auVar7;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->InitialTransform).Scale3D.XY.m128d_f64 = auVar8;
  auVar9._8_4_ = SUB84((double)fVar3,0);
  auVar9._0_8_ = (double)fVar2;
  auVar9._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->InitialTransform).Scale3D.ZW.m128d_f64 = auVar9;
  (this->PendingOverlaps).AllocatorInstance.SecondaryData = (ForElementType<FOverlapInfo>)0x0;
  this->FinalOverlapCandidatesIndex = -1;
  (this->PendingOverlaps).ArrayNum = 0;
  (this->PendingOverlaps).ArrayMax = 3;
  (this->BlockingHits).AllocatorInstance.SecondaryData = (ForElementType<FHitResult>)0x0;
  (this->BlockingHits).ArrayNum = 0;
  (this->BlockingHits).ArrayMax = 2;
  this->bDeferUpdates = '\0';
  if (param_2 == DeferredGroupUpdates) {
    bVar12 = 8;
  }
  this->field_0x608 = param_2 == DeferredUpdates | this->field_0x608 & 0xf1 | param_3 << 2 | bVar12;
  if ((param_1 == (USceneComponent *)0x0) || (((uint)param_1->_padding_ >> 0x1e & 1) != 0)) {
    this->bDeferUpdates = '\0';
    this->bIsGroupDeferedUpdate = '\0';
    this->Owner = (USceneComponent *)0x0;
  }
  else {
    pFVar11 = USceneComponent::GetCurrentScopedMovement(param_1);
    this->OuterDeferredScope = pFVar11;
    dVar10 = (param_1->ComponentToWorld).Rotation.XY.m128d_f64[1];
    (this->InitialTransform).Rotation.XY.m128d_f64[0] =
         (param_1->ComponentToWorld).Rotation.XY.m128d_f64[0];
    (this->InitialTransform).Rotation.XY.m128d_f64[1] = dVar10;
    dVar10 = (param_1->ComponentToWorld).Rotation.ZW.m128d_f64[1];
    (this->InitialTransform).Rotation.ZW.m128d_f64[0] =
         (param_1->ComponentToWorld).Rotation.ZW.m128d_f64[0];
    (this->InitialTransform).Rotation.ZW.m128d_f64[1] = dVar10;
    dVar10 = (param_1->ComponentToWorld).Translation.XY.m128d_f64[1];
    (this->InitialTransform).Translation.XY.m128d_f64[0] =
         (param_1->ComponentToWorld).Translation.XY.m128d_f64[0];
    (this->InitialTransform).Translation.XY.m128d_f64[1] = dVar10;
    dVar10 = (param_1->ComponentToWorld).Translation.ZW.m128d_f64[1];
    (this->InitialTransform).Translation.ZW.m128d_f64[0] =
         (param_1->ComponentToWorld).Translation.ZW.m128d_f64[0];
    (this->InitialTransform).Translation.ZW.m128d_f64[1] = dVar10;
    dVar10 = (param_1->ComponentToWorld).Scale3D.XY.m128d_f64[1];
    (this->InitialTransform).Scale3D.XY.m128d_f64[0] =
         (param_1->ComponentToWorld).Scale3D.XY.m128d_f64[0];
    (this->InitialTransform).Scale3D.XY.m128d_f64[1] = dVar10;
    dVar10 = (param_1->ComponentToWorld).Scale3D.ZW.m128d_f64[1];
    (this->InitialTransform).Scale3D.ZW.m128d_f64[0] =
         (param_1->ComponentToWorld).Scale3D.ZW.m128d_f64[0];
    (this->InitialTransform).Scale3D.ZW.m128d_f64[1] = dVar10;
    dVar10 = (param_1->RelativeLocation).field0_0x0._s_0.Y;
    (this->InitialRelativeLocation).field0_0x0._s_0.X =
         (param_1->RelativeLocation).field0_0x0._s_0.X;
    (this->InitialRelativeLocation).field0_0x0._s_0.Y = dVar10;
    (this->InitialRelativeLocation).field0_0x0._s_0.Z =
         (param_1->RelativeLocation).field0_0x0._s_0.Z;
    dVar10 = (param_1->RelativeRotation).Yaw;
    (this->InitialRelativeRotation).Pitch = (param_1->RelativeRotation).Pitch;
    (this->InitialRelativeRotation).Yaw = dVar10;
    (this->InitialRelativeRotation).Roll = (param_1->RelativeRotation).Roll;
    dVar10 = (param_1->RelativeScale3D).field0_0x0._s_0.Y;
    (this->InitialRelativeScale).field0_0x0._s_0.X = (param_1->RelativeScale3D).field0_0x0._s_0.X;
    (this->InitialRelativeScale).field0_0x0._s_0.Y = dVar10;
    (this->InitialRelativeScale).field0_0x0._s_0.Z = (param_1->RelativeScale3D).field0_0x0._s_0.Z;
    if (((param_2 == ImmediateUpdates) && (pFVar11 != (FScopedMovementUpdate *)0x0)) &&
       (pFVar11->bDeferUpdates != 0)) {
      if (((s_ScopedWarningCount < 100) || (((byte)GFrameCounter & 0x1f) == 0)) &&
         (s_ScopedWarningCount = s_ScopedWarningCount + 1, 1 < (byte)LogScopedMovementUpdate._0_1_))
      {
        UE::Logging::Private::BasicLog<2>
                  (&::LOG_Static,(FLogCategoryBase *)&LogScopedMovementUpdate);
      }
      this->bDeferUpdates = '\x01';
    }
    bVar12 = this->field_0x608;
    if (((this->bIsGroupDeferedUpdate != '\0') &&
        (this->OuterDeferredScope != (FScopedMovementUpdate *)0x0)) &&
       (this->OuterDeferredScope->bIsGroupDeferedUpdate == '\0')) {
      if (2 < (byte)LogScopedMovementUpdate._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  (&::LOG_Static,(FLogCategoryBase *)&LogScopedMovementUpdate);
      }
      this->bIsGroupDeferedUpdate = '\0';
      this->bDeferUpdates = '\x01';
      bVar12 = this->field_0x608;
    }
    if ((bVar12 & 9) != 0) {
      USceneComponent::BeginScopedMovementUpdate(param_1,this);
      return this;
    }
  }
  return this;
}

// ~FScopedMovementUpdate @ 147bbef70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FScopedMovementUpdate::~FScopedMovementUpdate(FScopedMovementUpdate *this)

{
  ForElementType<FHitResult> FVar1;
  ForElementType<FOverlapInfo> FVar2;
  
  if (((this->bDeferUpdates != '\0' || this->bIsGroupDeferedUpdate != '\0') &&
      (this->Owner != (USceneComponent *)0x0)) && (((uint)this->Owner->_padding_ >> 0x1e & 1) == 0))
  {
    USceneComponent::EndScopedMovementUpdate(this->Owner,this);
  }
  this->Owner = (USceneComponent *)0x0;
  FVar1 = (this->BlockingHits).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<FHitResult>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  FVar2 = (this->PendingOverlaps).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<FOverlapInfo>)0x0) {
    FMemory::Free((void *)FVar2);
    return;
  }
  return;
}

// AppendOverlapsAfterMove @ 147bc93c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FScopedMovementUpdate::AppendOverlapsAfterMove
          (FScopedMovementUpdate *this,TArrayView<FOverlapInfo_const_,int> *param_1,bool param_2,
          bool param_3)

{
  int *piVar1;
  EOverlapState EVar2;
  int iVar3;
  FOverlapInfo *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ForElementType<FOverlapInfo> FVar8;
  
  this->bHasMoved = '\x01';
  EVar2 = this->CurrentOverlapState;
  if (param_3) {
    this->CurrentOverlapState = eIncludesOverlaps;
    if (param_1->ArrayNum == 0) {
      this->FinalOverlapCandidatesIndex = -1;
    }
    else {
      piVar1 = &(this->PendingOverlaps).ArrayNum;
      this->FinalOverlapCandidatesIndex = *piVar1;
      pFVar4 = param_1->DataPtr;
      iVar3 = param_1->ArrayNum;
      if ((pFVar4 == (FOverlapInfo *)0x0) && (iVar3 != 0)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ptr != nullptr || Count == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x9c1,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      iVar7 = UE::Core::Private::
              ReallocGrow<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<FOverlapInfo>_>
                        (0x108,8,iVar3,&(this->PendingOverlaps).AllocatorInstance,piVar1,
                         &(this->PendingOverlaps).ArrayMax);
      FVar8 = (this->PendingOverlaps).AllocatorInstance.SecondaryData;
      if (FVar8 == (ForElementType<FOverlapInfo>)0x0) {
        FVar8 = (ForElementType<FOverlapInfo>)&this->PendingOverlaps;
      }
      ConstructItems<FOverlapInfo,FOverlapInfo,int>
                ((void *)((longlong)FVar8 + (longlong)iVar7 * 0x108),pFVar4,iVar3);
    }
  }
  else {
    this->CurrentOverlapState = eUnknown;
    this->FinalOverlapCandidatesIndex = -1;
    pFVar4 = param_1->DataPtr;
    iVar3 = param_1->ArrayNum;
    if ((pFVar4 == (FOverlapInfo *)0x0) && (iVar3 != 0)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ptr != nullptr || Count == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x9c1,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar7 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<FOverlapInfo>_>
                      (0x108,8,iVar3,&(this->PendingOverlaps).AllocatorInstance,
                       &(this->PendingOverlaps).ArrayNum,&(this->PendingOverlaps).ArrayMax);
    FVar8 = (this->PendingOverlaps).AllocatorInstance.SecondaryData;
    if (FVar8 == (ForElementType<FOverlapInfo>)0x0) {
      FVar8 = (ForElementType<FOverlapInfo>)&this->PendingOverlaps;
    }
    ConstructItems<FOverlapInfo,FOverlapInfo,int>
              ((void *)((longlong)FVar8 + (longlong)iVar7 * 0x108),pFVar4,iVar3);
  }
  if (EVar2 == eForceUpdate) {
    this->CurrentOverlapState = eForceUpdate;
  }
  return;
}

// GetOverlapsAtEnd @ 147be3a40

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TOptional<TArrayView<FOverlapInfo_const_,int>_> * __thiscall
FScopedMovementUpdate::GetOverlapsAtEnd
          (FScopedMovementUpdate *this,
          TOptional<TArrayView<FOverlapInfo_const_,int>_> *__return_storage_ptr__,
          UPrimitiveComponent *param_1,
          TArray<FOverlapInfo,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_> *param_2,
          bool param_3)

{
  EOverlapState EVar1;
  int iVar2;
  ForElementType<FOverlapInfo> FVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  bool bVar9;
  char cVar10;
  undefined4 in_EAX;
  int iVar11;
  TOptional<TArrayView<FOverlapInfo_const_,int>_> *pTVar12;
  uint uVar13;
  longlong lVar14;
  double dVar15;
  double dVar16;
  TOptional<TArrayView<FOverlapInfo_const_,int>_>_u_0 local_108;
  TOptional<TArrayView<FOverlapInfo_const_,int>_>_u_0 local_f8;
  TOptional<TArrayView<FOverlapInfo_const_,int>_>_u_0 local_e8;
  TArrayView<FOverlapInfo_const_,int> local_d8;
  TOptional<TArrayView<FOverlapInfo_const_,int>_>_u_0 local_c8;
  TArrayView<FOverlapInfo_const_,int> local_b8;
  TVector<double>_u_0 local_a8;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  TQuat<double> local_78;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  (__return_storage_ptr__->field0_0x0).TypedValue.DataPtr = (FOverlapInfo *)0x0;
  (__return_storage_ptr__->field0_0x0).TypedValue.ArrayNum = -1;
  EVar1 = this->CurrentOverlapState;
  if (EVar1 == eUseParent) {
    if (param_3) {
      local_90 = *(undefined8 *)&param_1->field_0x230;
      uStack_88 = *(undefined8 *)&param_1->field_0x238;
      local_80 = *(undefined8 *)&param_1->field_0x240;
      local_48 = *(undefined8 *)&param_1->field_0x200;
      uStack_40 = *(undefined8 *)&param_1->field_0x208;
      local_58 = *(undefined8 *)&param_1->field_0x1f0;
      uStack_50 = *(undefined8 *)&param_1->field_0x1f8;
      local_38 = *(undefined4 *)(this->InitialTransform).Rotation.XY.m128d_f64;
      uStack_34 = *(undefined4 *)((longlong)(this->InitialTransform).Rotation.XY.m128d_f64 + 4);
      uStack_30 = *(undefined4 *)((this->InitialTransform).Rotation.XY.m128d_f64 + 1);
      uStack_2c = *(undefined4 *)((longlong)(this->InitialTransform).Rotation.XY.m128d_f64 + 0xc);
      local_28 = *(undefined4 *)(this->InitialTransform).Rotation.ZW.m128d_f64;
      uStack_24 = *(undefined4 *)((longlong)(this->InitialTransform).Rotation.ZW.m128d_f64 + 4);
      uStack_20 = *(undefined4 *)((this->InitialTransform).Rotation.ZW.m128d_f64 + 1);
      uStack_1c = *(undefined4 *)((longlong)(this->InitialTransform).Rotation.ZW.m128d_f64 + 0xc);
      cVar10 = (**(code **)(*(longlong *)param_1 + 0x8c0))(param_1,&local_38,&local_58,&local_90);
      if (cVar10 != '\0') {
        local_b8.DataPtr = (FOverlapInfo *)(param_1->OverlappingComponents).AllocatorInstance.Data;
        iVar2 = (param_1->OverlappingComponents).ArrayNum;
        if ((iVar2 < 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          pTVar12 = (TOptional<TArrayView<FOverlapInfo_const_,int>_> *)(*pcVar4)();
          return pTVar12;
        }
        local_b8.ArrayNum = iVar2;
        bVar9 = UPrimitiveComponent::
                ConvertRotationOverlapsToCurrentOverlaps<TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>
                          (param_1,param_2,&local_b8);
        if (!bVar9) {
          return __return_storage_ptr__;
        }
        FVar3 = (param_2->AllocatorInstance).SecondaryData;
        iVar2 = param_2->ArrayNum;
        local_f8.TypedValue.DataPtr = (FOverlapInfo *)param_2;
        if (FVar3 != (ForElementType<FOverlapInfo>)0x0) {
          local_f8.TypedValue.DataPtr = (FOverlapInfo *)FVar3;
        }
        if ((iVar2 < 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          pTVar12 = (TOptional<TArrayView<FOverlapInfo_const_,int>_> *)(*pcVar4)();
          return pTVar12;
        }
        if (&local_f8 == &__return_storage_ptr__->field0_0x0) {
          return __return_storage_ptr__;
        }
        (__return_storage_ptr__->field0_0x0).TypedValue.DataPtr = local_f8.TypedValue.DataPtr;
        *(ulonglong *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) =
             CONCAT44(local_f8._12_4_,iVar2);
        if ((__return_storage_ptr__->field0_0x0).TypedValue.ArrayNum != -1) {
          return __return_storage_ptr__;
        }
        local_f8.TypedValue.ArrayNum = iVar2;
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x171,
                           L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                          );
        if (!bVar9) {
          return __return_storage_ptr__;
        }
        goto code_r0x000147be3ea5;
      }
    }
    local_e8.TypedValue.DataPtr =
         (FOverlapInfo *)(param_1->OverlappingComponents).AllocatorInstance.Data;
    iVar2 = (param_1->OverlappingComponents).ArrayNum;
    if ((iVar2 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar9)) {
      pcVar4 = (code *)swi(3);
      pTVar12 = (TOptional<TArrayView<FOverlapInfo_const_,int>_> *)(*pcVar4)();
      return pTVar12;
    }
    if (&local_e8 != &__return_storage_ptr__->field0_0x0) {
      (__return_storage_ptr__->field0_0x0).TypedValue.DataPtr = local_e8.TypedValue.DataPtr;
      *(ulonglong *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) =
           CONCAT44(local_e8._12_4_,iVar2);
      if (((__return_storage_ptr__->field0_0x0).TypedValue.ArrayNum == -1) &&
         (local_e8.TypedValue.ArrayNum = iVar2,
         bVar9 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x171,
                            L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                           ), bVar9)) goto code_r0x000147be3ea5;
    }
  }
  else if (EVar1 != eUnknown) {
    if (EVar1 == eIncludesOverlaps) {
      iVar2 = this->FinalOverlapCandidatesIndex;
      if (iVar2 == -1) {
        FVar3 = (param_2->AllocatorInstance).SecondaryData;
        iVar2 = param_2->ArrayNum;
        local_108.TypedValue.DataPtr = (FOverlapInfo *)param_2;
        if (FVar3 != (ForElementType<FOverlapInfo>)0x0) {
          local_108.TypedValue.DataPtr = (FOverlapInfo *)FVar3;
        }
        if ((iVar2 < 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          pTVar12 = (TOptional<TArrayView<FOverlapInfo_const_,int>_> *)(*pcVar4)();
          return pTVar12;
        }
        if (&local_108 != &__return_storage_ptr__->field0_0x0) {
          (__return_storage_ptr__->field0_0x0).TypedValue.DataPtr = local_108.TypedValue.DataPtr;
          *(ulonglong *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) =
               CONCAT44(local_108._12_4_,iVar2);
          if (((__return_storage_ptr__->field0_0x0).TypedValue.ArrayNum == -1) &&
             (local_108.TypedValue.ArrayNum = iVar2,
             bVar9 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0x171,
                                L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                               ), bVar9)) goto code_r0x000147be3ea5;
        }
      }
      else {
        dVar6 = (this->InitialTransform).Scale3D.ZW.m128d_f64[0] - *(double *)&param_1->field_0x240;
        dVar7 = (this->InitialTransform).Scale3D.ZW.m128d_f64[1] - *(double *)&param_1->field_0x248;
        dVar15 = (this->InitialTransform).Scale3D.XY.m128d_f64[0] - *(double *)&param_1->field_0x230
        ;
        dVar16 = (this->InitialTransform).Scale3D.XY.m128d_f64[1] - *(double *)&param_1->field_0x238
        ;
        lVar14 = -(ulonglong)
                  (__real_3f1a36e2e0000000 <
                  (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) & _UNK_15061cc8c,
                                   SUB84(dVar7,0) & _UNK_15061cc88));
        auVar5._8_4_ = (int)lVar14;
        auVar5._0_8_ = -(ulonglong)
                        (__real_3f1a36e2e0000000 <
                        (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) &
                                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                         SUB84(dVar6,0) &
                                         (uint)__xmm_7fffffffffffffff7fffffffffffffff));
        auVar5._12_4_ = (int)((ulonglong)lVar14 >> 0x20);
        uVar13 = movmskpd((int)this,auVar5);
        lVar14 = -(ulonglong)
                  (__real_3f1a36e2e0000000 <
                  (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) & _UNK_15061cc8c,
                                   SUB84(dVar16,0) & _UNK_15061cc88));
        auVar8._8_4_ = (int)lVar14;
        auVar8._0_8_ = -(ulonglong)
                        (__real_3f1a36e2e0000000 <
                        (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) &
                                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                         SUB84(dVar15,0) &
                                         (uint)__xmm_7fffffffffffffff7fffffffffffffff));
        auVar8._12_4_ = (int)((ulonglong)lVar14 >> 0x20);
        iVar11 = movmskpd(in_EAX,auVar8);
        if ((uVar13 & 0x3fffffff) == 0 && iVar11 == 0) {
          local_d8.DataPtr =
               *(FOverlapInfo **)&(this->PendingOverlaps).AllocatorInstance.SecondaryData;
          local_78.X = *(double *)&param_1->field_0x1f0;
          local_78.Y = *(double *)&param_1->field_0x1f8;
          local_78.Z = *(double *)&param_1->field_0x200;
          local_78.W = *(double *)&param_1->field_0x208;
          if ((ForElementType<FOverlapInfo>)local_d8.DataPtr == (ForElementType<FOverlapInfo>)0x0) {
            local_d8.DataPtr = (FOverlapInfo *)&this->PendingOverlaps;
          }
          iVar11 = (this->PendingOverlaps).ArrayNum;
          local_a8._s_0.X = (double)*(undefined8 *)&param_1->field_0x210;
          local_a8._s_0.Y = (double)*(undefined8 *)&param_1->field_0x218;
          local_a8._s_0.Z = (double)*(undefined8 *)&param_1->field_0x220;
          if ((iVar11 < 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar9)) {
            pcVar4 = (code *)swi(3);
            pTVar12 = (TOptional<TArrayView<FOverlapInfo_const_,int>_> *)(*pcVar4)();
            return pTVar12;
          }
          local_d8.ArrayNum = iVar11;
          bVar9 = UPrimitiveComponent::
                  ConvertSweptOverlapsToCurrentOverlaps<TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>
                            (param_1,param_2,&local_d8,iVar2,(TVector<double> *)&local_a8._s_0,
                             &local_78);
          if ((bVar9) &&
             (TArrayView<FOverlapInfo_const_,int>::
              TArrayView<FOverlapInfo_const_,int><TArray<FOverlapInfo,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>_&,TArray<FOverlapInfo,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>_>
                        (&local_c8.TypedValue,param_2),
             &local_c8 != &__return_storage_ptr__->field0_0x0)) {
            (__return_storage_ptr__->field0_0x0).TypedValue.DataPtr = local_c8.TypedValue.DataPtr;
            *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = local_c8._8_8_;
            if (((__return_storage_ptr__->field0_0x0).TypedValue.ArrayNum == -1) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  ), bVar9)) goto code_r0x000147be3ea5;
          }
        }
      }
    }
    else if ((EVar1 != eForceUpdate) &&
            (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                               ("false",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Engine\\ScopedMovementUpdate.cpp"
                                ,0x10c,L"Unknown FScopedMovementUpdate::EOverlapState value"), bVar9
            )) {
code_r0x000147be3ea5:
      pcVar4 = (code *)swi(3);
      pTVar12 = (TOptional<TArrayView<FOverlapInfo_const_,int>_> *)(*pcVar4)();
      return pTVar12;
    }
  }
  return __return_storage_ptr__;
}

// IsTransformDirty @ 147bf1490

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall FScopedMovementUpdate::IsTransformDirty(FScopedMovementUpdate *this)

{
  USceneComponent *pUVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined4 in_EAX;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  
  pUVar1 = this->Owner;
  if (pUVar1 == (USceneComponent *)0x0) {
    return false;
  }
  dVar15 = (this->InitialTransform).Translation.ZW.m128d_f64[0] -
           (pUVar1->ComponentToWorld).Translation.ZW.m128d_f64[0];
  dVar17 = (this->InitialTransform).Translation.ZW.m128d_f64[1] -
           (pUVar1->ComponentToWorld).Translation.ZW.m128d_f64[1];
  dVar19 = (this->InitialTransform).Translation.XY.m128d_f64[0] -
           (pUVar1->ComponentToWorld).Translation.XY.m128d_f64[0];
  dVar21 = (this->InitialTransform).Translation.XY.m128d_f64[1] -
           (pUVar1->ComponentToWorld).Translation.XY.m128d_f64[1];
  lVar14 = -(ulonglong)
            (__real_3e45798ee0000000 <
            (double)CONCAT44((uint)((ulonglong)dVar17 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar17,0) & _UNK_15061cc88));
  auVar2._8_4_ = (int)lVar14;
  auVar2._0_8_ = -(ulonglong)
                  (__real_3e45798ee0000000 <
                  (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar15,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar2._12_4_ = (int)((ulonglong)lVar14 >> 0x20);
  uVar11 = movmskpd((int)this,auVar2);
  lVar14 = -(ulonglong)
            (__real_3e45798ee0000000 <
            (double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar21,0) & _UNK_15061cc88));
  auVar7._8_4_ = (int)lVar14;
  auVar7._0_8_ = -(ulonglong)
                  (__real_3e45798ee0000000 <
                  (double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar19,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar7._12_4_ = (int)((ulonglong)lVar14 >> 0x20);
  iVar10 = movmskpd(in_EAX,auVar7);
  if ((uVar11 & 0x3fffffff) == 0 && iVar10 == 0) {
    dVar19 = (this->InitialTransform).Rotation.ZW.m128d_f64[0];
    dVar21 = (this->InitialTransform).Rotation.ZW.m128d_f64[1];
    dVar15 = (this->InitialTransform).Rotation.XY.m128d_f64[0];
    dVar17 = (this->InitialTransform).Rotation.XY.m128d_f64[1];
    dVar16 = dVar19 - (pUVar1->ComponentToWorld).Rotation.ZW.m128d_f64[0];
    dVar18 = dVar21 - (pUVar1->ComponentToWorld).Rotation.ZW.m128d_f64[1];
    dVar19 = dVar19 + (pUVar1->ComponentToWorld).Rotation.ZW.m128d_f64[0];
    dVar21 = dVar21 + (pUVar1->ComponentToWorld).Rotation.ZW.m128d_f64[1];
    dVar20 = dVar15 - (pUVar1->ComponentToWorld).Rotation.XY.m128d_f64[0];
    dVar22 = dVar17 - (pUVar1->ComponentToWorld).Rotation.XY.m128d_f64[1];
    dVar15 = dVar15 + (pUVar1->ComponentToWorld).Rotation.XY.m128d_f64[0];
    dVar17 = dVar17 + (pUVar1->ComponentToWorld).Rotation.XY.m128d_f64[1];
    lVar14 = -(ulonglong)
              (__real_3e45798ee0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar18,0) & _UNK_15061cc88));
    auVar3._8_4_ = (int)lVar14;
    auVar3._0_8_ = -(ulonglong)
                    (__real_3e45798ee0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar16,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    );
    auVar3._12_4_ = (int)((ulonglong)lVar14 >> 0x20);
    iVar12 = movmskpd(0,auVar3);
    lVar14 = -(ulonglong)
              (__real_3e45798ee0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar22 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar22,0) & _UNK_15061cc88));
    auVar4._8_4_ = (int)lVar14;
    auVar4._0_8_ = -(ulonglong)
                    (__real_3e45798ee0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar20,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    );
    auVar4._12_4_ = (int)((ulonglong)lVar14 >> 0x20);
    uVar11 = movmskpd(iVar10,auVar4);
    uVar13 = iVar12 << 2 | uVar11;
    if (uVar13 != 0) {
      lVar14 = -(ulonglong)
                (__real_3e45798ee0000000 <
                (double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar21,0) & _UNK_15061cc88));
      auVar5._8_4_ = (int)lVar14;
      auVar5._0_8_ = -(ulonglong)
                      (__real_3e45798ee0000000 <
                      (double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(dVar19,0) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar5._12_4_ = (int)((ulonglong)lVar14 >> 0x20);
      uVar13 = movmskpd(uVar13,auVar5);
      lVar14 = -(ulonglong)
                (__real_3e45798ee0000000 <
                (double)CONCAT44((uint)((ulonglong)dVar17 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar17,0) & _UNK_15061cc88));
      auVar8._8_4_ = (int)lVar14;
      auVar8._0_8_ = -(ulonglong)
                      (__real_3e45798ee0000000 <
                      (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(dVar15,0) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar8._12_4_ = (int)((ulonglong)lVar14 >> 0x20);
      uVar11 = movmskpd(uVar11,auVar8);
      if ((uVar13 & 0x3fffffff) != 0 || uVar11 != 0) {
        return true;
      }
    }
    dVar15 = (this->InitialTransform).Scale3D.ZW.m128d_f64[0] -
             (pUVar1->ComponentToWorld).Scale3D.ZW.m128d_f64[0];
    dVar17 = (this->InitialTransform).Scale3D.ZW.m128d_f64[1] -
             (pUVar1->ComponentToWorld).Scale3D.ZW.m128d_f64[1];
    dVar19 = (this->InitialTransform).Scale3D.XY.m128d_f64[0] -
             (pUVar1->ComponentToWorld).Scale3D.XY.m128d_f64[0];
    dVar21 = (this->InitialTransform).Scale3D.XY.m128d_f64[1] -
             (pUVar1->ComponentToWorld).Scale3D.XY.m128d_f64[1];
    lVar14 = -(ulonglong)
              (__real_3e45798ee0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar17 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar17,0) & _UNK_15061cc88));
    auVar6._8_4_ = (int)lVar14;
    auVar6._0_8_ = -(ulonglong)
                    (__real_3e45798ee0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar15,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    );
    auVar6._12_4_ = (int)((ulonglong)lVar14 >> 0x20);
    uVar13 = movmskpd(0,auVar6);
    lVar14 = -(ulonglong)
              (__real_3e45798ee0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar21,0) & _UNK_15061cc88));
    auVar9._8_4_ = (int)lVar14;
    auVar9._0_8_ = -(ulonglong)
                    (__real_3e45798ee0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar19,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    );
    auVar9._12_4_ = (int)((ulonglong)lVar14 >> 0x20);
    iVar10 = movmskpd(uVar11,auVar9);
    if ((uVar13 & 0x3fffffff) == 0 && iVar10 == 0) {
      return false;
    }
  }
  return true;
}

// OnInnerScopeComplete @ 147bf5b00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FScopedMovementUpdate::OnInnerScopeComplete
          (FScopedMovementUpdate *this,FScopedMovementUpdate *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ForElementType<FOverlapInfo> FVar6;
  ForElementType<FHitResult> FVar7;
  ForElementType<FOverlapInfo> FVar8;
  ForElementType<FHitResult> FVar9;
  
  if ((this->Owner != (USceneComponent *)0x0) && (((uint)this->Owner->_padding_ >> 0x1e & 1) == 0))
  {
    if ((param_1->bHasMoved != '\0') || (bVar3 = IsTransformDirty(param_1), bVar3)) {
      this->bHasMoved = '\x01';
      if (param_1->CurrentOverlapState != eUseParent) {
        this->CurrentOverlapState = param_1->CurrentOverlapState;
        piVar1 = &(this->PendingOverlaps).ArrayNum;
        if (param_1->FinalOverlapCandidatesIndex == -1) {
          iVar4 = -1;
        }
        else {
          iVar4 = *piVar1 + param_1->FinalOverlapCandidatesIndex;
        }
        this->FinalOverlapCandidatesIndex = iVar4;
        if ((this == param_1) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(void*)this != (void*)&Source",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x96e,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar4 = (param_1->PendingOverlaps).ArrayNum;
        if (iVar4 != 0) {
          iVar5 = UE::Core::Private::
                  ReallocGrow<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<FOverlapInfo>_>
                            (0x108,8,iVar4,&(this->PendingOverlaps).AllocatorInstance,piVar1,
                             &(this->PendingOverlaps).ArrayMax);
          FVar8 = (param_1->PendingOverlaps).AllocatorInstance.SecondaryData;
          FVar6 = (this->PendingOverlaps).AllocatorInstance.SecondaryData;
          if (FVar8 == (ForElementType<FOverlapInfo>)0x0) {
            FVar8 = (ForElementType<FOverlapInfo>)&param_1->PendingOverlaps;
          }
          if (FVar6 == (ForElementType<FOverlapInfo>)0x0) {
            FVar6 = (ForElementType<FOverlapInfo>)&this->PendingOverlaps;
          }
          ConstructItems<FOverlapInfo,FOverlapInfo,int>
                    ((void *)((longlong)FVar6 + (longlong)iVar5 * 0x108),(FOverlapInfo *)FVar8,iVar4
                    );
        }
      }
      if (this->TeleportType < param_1->TeleportType) {
        this->TeleportType = param_1->TeleportType;
      }
    }
    if ((this == param_1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar4 = (param_1->BlockingHits).ArrayNum;
    if (iVar4 != 0) {
      iVar5 = UE::Core::Private::
              ReallocGrow<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FHitResult>_>
                        (0x100,8,iVar4,&(this->BlockingHits).AllocatorInstance,
                         &(this->BlockingHits).ArrayNum,&(this->BlockingHits).ArrayMax);
      FVar9 = (param_1->BlockingHits).AllocatorInstance.SecondaryData;
      FVar7 = (this->BlockingHits).AllocatorInstance.SecondaryData;
      if (FVar9 == (ForElementType<FHitResult>)0x0) {
        FVar9 = (ForElementType<FHitResult>)&param_1->BlockingHits;
      }
      if (FVar7 == (ForElementType<FHitResult>)0x0) {
        FVar7 = (ForElementType<FHitResult>)&this->BlockingHits;
      }
      ConstructItems<FHitResult,FHitResult,int>
                ((void *)((longlong)FVar7 + (longlong)iVar5 * 0x100),(FHitResult *)FVar9,iVar4);
    }
  }
  return;
}

// RevertMove @ 147bfe200

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FScopedMovementUpdate::RevertMove(FScopedMovementUpdate *this)

{
  TRotator<double> *this_00;
  int *piVar1;
  USceneComponent *this_01;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [12];
  bool bVar6;
  FPayload *pFVar7;
  TQuat<double> *pTVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar19;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar25;
  double dVar27;
  undefined1 auVar26 [16];
  double dVar28;
  undefined1 local_68 [16];
  double local_58;
  undefined1 local_48 [16];
  double local_38;
  double dStack_30;
  
  this_01 = this->Owner;
  if ((this_01 != (USceneComponent *)0x0) && (((uint)this_01->_padding_ >> 0x1e & 1) == 0)) {
    this->FinalOverlapCandidatesIndex = -1;
    piVar1 = &(this->PendingOverlaps).ArrayMax;
    (this->PendingOverlaps).ArrayNum = 0;
    if (*piVar1 < 0) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<FOverlapInfo>_>
                (0x108,8,0,&(this->PendingOverlaps).AllocatorInstance,0,piVar1);
    }
    piVar1 = &(this->BlockingHits).ArrayMax;
    (this->BlockingHits).ArrayNum = 0;
    if (*piVar1 < 0) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FHitResult>_>
                (0x100,8,0,&(this->BlockingHits).AllocatorInstance,0,piVar1);
    }
    bVar6 = IsTransformDirty(this);
    if (bVar6) {
      dVar2 = (this->InitialTransform).Rotation.XY.m128d_f64[1];
      (this_01->ComponentToWorld).Rotation.XY.m128d_f64[0] =
           (this->InitialTransform).Rotation.XY.m128d_f64[0];
      (this_01->ComponentToWorld).Rotation.XY.m128d_f64[1] = dVar2;
      dVar2 = (this->InitialTransform).Rotation.ZW.m128d_f64[1];
      (this_01->ComponentToWorld).Rotation.ZW.m128d_f64[0] =
           (this->InitialTransform).Rotation.ZW.m128d_f64[0];
      (this_01->ComponentToWorld).Rotation.ZW.m128d_f64[1] = dVar2;
      dVar2 = (this->InitialTransform).Translation.XY.m128d_f64[1];
      (this_01->ComponentToWorld).Translation.XY.m128d_f64[0] =
           (this->InitialTransform).Translation.XY.m128d_f64[0];
      (this_01->ComponentToWorld).Translation.XY.m128d_f64[1] = dVar2;
      dVar2 = (this->InitialTransform).Translation.ZW.m128d_f64[1];
      (this_01->ComponentToWorld).Translation.ZW.m128d_f64[0] =
           (this->InitialTransform).Translation.ZW.m128d_f64[0];
      (this_01->ComponentToWorld).Translation.ZW.m128d_f64[1] = dVar2;
      dVar2 = (this->InitialTransform).Scale3D.XY.m128d_f64[1];
      (this_01->ComponentToWorld).Scale3D.XY.m128d_f64[0] =
           (this->InitialTransform).Scale3D.XY.m128d_f64[0];
      (this_01->ComponentToWorld).Scale3D.XY.m128d_f64[1] = dVar2;
      dVar2 = (this->InitialTransform).Scale3D.ZW.m128d_f64[1];
      (this_01->ComponentToWorld).Scale3D.ZW.m128d_f64[0] =
           (this->InitialTransform).Scale3D.ZW.m128d_f64[0];
      (this_01->ComponentToWorld).Scale3D.ZW.m128d_f64[1] = dVar2;
      dVar2 = (this->InitialRelativeLocation).field0_0x0._s_0.Y;
      (this_01->RelativeLocation).field0_0x0._s_0.X =
           (this->InitialRelativeLocation).field0_0x0._s_0.X;
      (this_01->RelativeLocation).field0_0x0._s_0.Y = dVar2;
      (this_01->RelativeLocation).field0_0x0._s_0.Z =
           (this->InitialRelativeLocation).field0_0x0._s_0.Z;
      dVar2 = (this->InitialRelativeRotation).Yaw;
      (this_01->RelativeRotation).Pitch = (this->InitialRelativeRotation).Pitch;
      (this_01->RelativeRotation).Yaw = dVar2;
      (this_01->RelativeRotation).Roll = (this->InitialRelativeRotation).Roll;
      dVar2 = (this->InitialRelativeScale).field0_0x0._s_0.Y;
      (this_01->RelativeScale3D).field0_0x0._s_0.X = (this->InitialRelativeScale).field0_0x0._s_0.X;
      (this_01->RelativeScale3D).field0_0x0._s_0.Y = dVar2;
      (this_01->RelativeScale3D).field0_0x0._s_0.Z = (this->InitialRelativeScale).field0_0x0._s_0.Z;
      FRotationConversionCache::RotatorToQuat
                (&this_01->RelativeRotationCache,(TQuat<double> *)local_48,
                 &this->InitialRelativeRotation);
      local_48 = *(undefined1 (*) [16])(this->InitialTransform).Rotation.XY.m128d_f64;
      local_38 = (this->InitialTransform).Rotation.ZW.m128d_f64[0];
      dStack_30 = (this->InitialTransform).Rotation.ZW.m128d_f64[1];
      UE::Math::TQuat<double>::Rotator((TQuat<double> *)local_48,(TRotator<double> *)local_68);
      pFVar7 = FRotationConversionCache::GetOrCreatePayload(&this_01->WorldRotationCache);
      auVar15._8_8_ = 0;
      auVar15._0_8_ = local_58;
      this_00 = &pFVar7->CachedRotator;
      if (((local_68._0_8_ != (pFVar7->CachedRotator).Pitch) ||
          (auVar5._4_8_ = extraout_XMM0_Qb, auVar5._0_4_ = local_68._4_4_,
          auVar13._0_8_ = auVar5._0_8_ << 0x20, auVar13._8_4_ = local_68._8_4_,
          auVar13._12_4_ = local_68._12_4_, auVar13._8_8_ != (pFVar7->CachedRotator).Yaw)) ||
         (local_58 != (pFVar7->CachedRotator).Roll)) {
        auVar13 = divpd(local_68,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
        local_48 = local_68;
        auVar13 = roundpd(auVar15,auVar13,3);
        auVar14._8_8_ = 0;
        auVar14._0_8_ = local_58;
        auVar15 = divpd(auVar14,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
        dVar2 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
        auVar20._0_8_ = auVar13._0_8_ * dVar2;
        dVar3 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
        auVar20._8_8_ = auVar13._8_8_ * dVar3;
        dVar25 = local_68._0_8_ - auVar20._0_8_;
        dVar27 = local_68._8_8_ - auVar20._8_8_;
        auVar15 = roundpd(auVar20,auVar15,3);
        dVar4 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
        auVar16._8_4_ = SUB84(dVar27,0);
        auVar16._0_8_ = dVar25;
        auVar16._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
        dVar19 = auVar16._8_8_ + dVar3;
        local_58 = local_58 - auVar15._0_8_ * dVar4;
        dVar28 = 0.0 - auVar15._8_8_ * GlobalVectorConstants::Double360.ZW.m128d_f64[1];
        uVar9 = -(ulonglong)(0.0 <= dVar25);
        uVar11 = -(ulonglong)(0.0 <= dVar27);
        uVar10 = -(ulonglong)(0.0 <= local_58);
        uVar12 = -(ulonglong)(0.0 <= dVar28);
        auVar21._0_8_ = uVar9 & (ulonglong)dVar25;
        auVar21._8_4_ = (undefined4)(uVar11 & (ulonglong)dVar27);
        auVar21._12_4_ = (undefined4)((uVar11 & (ulonglong)dVar27) >> 0x20);
        auVar24._0_4_ = ~(uint)uVar9 & SUB84(dVar25 + dVar2,0);
        auVar24._4_4_ = ~(uint)(uVar9 >> 0x20) & (uint)((ulonglong)(dVar25 + dVar2) >> 0x20);
        auVar24._8_4_ = ~(uint)uVar11 & SUB84(dVar19,0);
        auVar24._12_4_ = ~(uint)(uVar11 >> 0x20) & (uint)((ulonglong)dVar19 >> 0x20);
        auVar24 = auVar24 | auVar21;
        auVar22._0_8_ = uVar10 & (ulonglong)local_58;
        auVar22._8_4_ = (undefined4)(uVar12 & (ulonglong)dVar28);
        auVar22._12_4_ = (undefined4)((uVar12 & (ulonglong)dVar28) >> 0x20);
        auVar17._8_4_ = SUB84(dVar28,0);
        auVar17._0_8_ = local_58;
        auVar17._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
        dVar19 = auVar17._8_8_ + GlobalVectorConstants::Double360.ZW.m128d_f64[1];
        auVar26._0_4_ = ~(uint)uVar10 & SUB84(local_58 + dVar4,0);
        auVar26._4_4_ = ~(uint)(uVar10 >> 0x20) & (uint)((ulonglong)(local_58 + dVar4) >> 0x20);
        auVar26._8_4_ = ~(uint)uVar12 & SUB84(dVar19,0);
        auVar26._12_4_ = ~(uint)(uVar12 >> 0x20) & (uint)((ulonglong)dVar19 >> 0x20);
        auVar26 = auVar26 | auVar22;
        uVar10 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar24._0_8_);
        uVar12 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar24._8_8_);
        uVar11 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar26._0_8_);
        auVar23._0_8_ = uVar10 & (ulonglong)(auVar24._0_8_ - dVar2);
        uVar9 = uVar12 & (ulonglong)(auVar24._8_8_ - dVar3);
        auVar23._8_4_ = (undefined4)uVar9;
        auVar23._12_4_ = (undefined4)(uVar9 >> 0x20);
        auVar18._0_4_ = ~(uint)uVar10 & auVar24._0_4_;
        auVar18._4_4_ = ~(uint)(uVar10 >> 0x20) & auVar24._4_4_;
        auVar18._8_4_ = ~(uint)uVar12 & auVar24._8_4_;
        auVar18._12_4_ = ~(uint)(uVar12 >> 0x20) & auVar24._12_4_;
        this_00->Pitch = (double)SUB168(auVar23 | auVar18,0);
        this_00->Yaw = (double)SUB168(auVar23 | auVar18,8);
        (pFVar7->CachedRotator).Roll =
             (double)((ulonglong)(auVar26._0_8_ - dVar4) & uVar11 |
                     CONCAT44(~(uint)(uVar11 >> 0x20) & auVar26._4_4_,~(uint)uVar11 & auVar26._0_4_)
                     );
        pTVar8 = UE::Math::TRotator<double>::Quaternion(this_00,(TQuat<double> *)local_48);
        dVar2 = pTVar8->Y;
        (pFVar7->CachedQuat).X = pTVar8->X;
        (pFVar7->CachedQuat).Y = dVar2;
        dVar2 = pTVar8->W;
        (pFVar7->CachedQuat).Z = pTVar8->Z;
        (pFVar7->CachedQuat).W = dVar2;
      }
      if (this->bDeferUpdates == 0) {
        USceneComponent::PropagateTransformUpdate(this_01,true,None,None);
        USceneComponent::UpdateOverlaps
                  (this_01,(TArrayView<FOverlapInfo_const_,int> *)0x0,true,
                   (TArrayView<FOverlapInfo_const_,int> *)0x0);
      }
    }
  }
  this->bHasMoved = '\0';
  this->CurrentOverlapState = eUseParent;
  this->TeleportType = None;
  return;
}

// SetWorldLocationAndRotation @ 147c01ec0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FScopedMovementUpdate::SetWorldLocationAndRotation
          (FScopedMovementUpdate *this,TVector<double> *param_1,TQuat<double> *param_2,bool param_3,
          ETeleportType param_4)

{
  bool bVar1;
  TVector<double>_u_0 local_28;
  
  if (this->Owner != (USceneComponent *)0x0) {
    local_28._s_0.X = (param_1->field0_0x0)._s_0.X;
    local_28._s_0.Y = (param_1->field0_0x0)._s_0.Y;
    local_28._s_0.Z = (param_1->field0_0x0)._s_0.Z;
    bVar1 = USceneComponent::InternalSetWorldLocationAndRotation
                      (this->Owner,(TVector<double> *)&local_28._s_0,param_2,param_3,param_4);
    return bVar1;
  }
  return false;
}

