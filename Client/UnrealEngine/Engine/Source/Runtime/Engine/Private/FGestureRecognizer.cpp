// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// DetectGestures @ 147c426c0

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
FGestureRecognizer::DetectGestures
          (FGestureRecognizer *this,TVector<double> (*param_1) [11],UPlayerInput *param_2,
          float param_3)

{
  atomic<int> *paVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  double dVar14;
  float fVar15;
  float *pfVar16;
  IPlatformInputDeviceMapper *pIVar17;
  int iVar18;
  FName FVar19;
  int iVar20;
  FSharedReferencer<1> FVar21;
  uint uVar22;
  float fVar23;
  double dVar24;
  FInputDeviceId local_res8 [2];
  LARGE_INTEGER local_100;
  float *local_f8;
  LARGE_INTEGER local_f0;
  FKey local_e8 [7];
  
  uVar22 = (uint)((*param_1)[0].field0_0x0._s_0.Z != 0.0);
  if ((*param_1)[1].field0_0x0._s_0.Z != 0.0) {
    uVar22 = uVar22 + 1;
  }
  if ((*param_1)[2].field0_0x0._s_0.Z != 0.0) {
    uVar22 = uVar22 + 1;
  }
  if ((*param_1)[3].field0_0x0._s_0.Z != 0.0) {
    uVar22 = uVar22 + 1;
  }
  if ((*param_1)[4].field0_0x0._s_0.Z != 0.0) {
    uVar22 = uVar22 + 1;
  }
  if ((*param_1)[5].field0_0x0._s_0.Z != 0.0) {
    uVar22 = uVar22 + 1;
  }
  if ((*param_1)[6].field0_0x0._s_0.Z != 0.0) {
    uVar22 = uVar22 + 1;
  }
  if ((*param_1)[7].field0_0x0._s_0.Z != 0.0) {
    uVar22 = uVar22 + 1;
  }
  if ((*param_1)[8].field0_0x0._s_0.Z != 0.0) {
    uVar22 = uVar22 + 1;
  }
  if ((*param_1)[9].field0_0x0._s_0.Z != 0.0) {
    uVar22 = uVar22 + 1;
  }
  if ((*param_1)[10].field0_0x0._s_0.Z != 0.0) {
    uVar22 = uVar22 + 1;
  }
  if ((this->PreviousTouchCount == 0) && (uVar22 == 0)) goto LAB_147c43041;
  if ((this->PreviousTouchCount < 1) && (uVar22 != 0)) {
    dVar2 = (*param_1)[0].field0_0x0._s_0.Y;
    this->AnchorPoints[0].field0_0x0._s_0.X = (*param_1)[0].field0_0x0._s_0.X;
    this->AnchorPoints[0].field0_0x0._s_0.Y = dVar2;
  }
  if ((this->PreviousTouchCount < 2) && (1 < uVar22)) {
    dVar2 = (*param_1)[1].field0_0x0._s_0.Y;
    this->AnchorPoints[1].field0_0x0._s_0.X = (*param_1)[1].field0_0x0._s_0.X;
    this->AnchorPoints[1].field0_0x0._s_0.Y = dVar2;
  }
  if ((this->PreviousTouchCount < 3) && (2 < uVar22)) {
    dVar2 = (*param_1)[2].field0_0x0._s_0.Y;
    this->AnchorPoints[2].field0_0x0._s_0.X = (*param_1)[2].field0_0x0._s_0.X;
    this->AnchorPoints[2].field0_0x0._s_0.Y = dVar2;
  }
  if ((this->PreviousTouchCount < 4) && (3 < uVar22)) {
    dVar2 = (*param_1)[3].field0_0x0._s_0.Y;
    this->AnchorPoints[3].field0_0x0._s_0.X = (*param_1)[3].field0_0x0._s_0.X;
    this->AnchorPoints[3].field0_0x0._s_0.Y = dVar2;
  }
  if ((this->PreviousTouchCount < 5) && (4 < uVar22)) {
    dVar2 = (*param_1)[4].field0_0x0._s_0.Y;
    this->AnchorPoints[4].field0_0x0._s_0.X = (*param_1)[4].field0_0x0._s_0.X;
    this->AnchorPoints[4].field0_0x0._s_0.Y = dVar2;
  }
  if ((this->PreviousTouchCount < 6) && (5 < uVar22)) {
    dVar2 = (*param_1)[5].field0_0x0._s_0.Y;
    this->AnchorPoints[5].field0_0x0._s_0.X = (*param_1)[5].field0_0x0._s_0.X;
    this->AnchorPoints[5].field0_0x0._s_0.Y = dVar2;
  }
  if ((this->PreviousTouchCount < 7) && (6 < uVar22)) {
    dVar2 = (*param_1)[6].field0_0x0._s_0.Y;
    this->AnchorPoints[6].field0_0x0._s_0.X = (*param_1)[6].field0_0x0._s_0.X;
    this->AnchorPoints[6].field0_0x0._s_0.Y = dVar2;
  }
  if ((this->PreviousTouchCount < 8) && (7 < uVar22)) {
    dVar2 = (*param_1)[7].field0_0x0._s_0.Y;
    this->AnchorPoints[7].field0_0x0._s_0.X = (*param_1)[7].field0_0x0._s_0.X;
    this->AnchorPoints[7].field0_0x0._s_0.Y = dVar2;
  }
  if ((this->PreviousTouchCount < 9) && (8 < uVar22)) {
    dVar2 = (*param_1)[8].field0_0x0._s_0.Y;
    this->AnchorPoints[8].field0_0x0._s_0.X = (*param_1)[8].field0_0x0._s_0.X;
    this->AnchorPoints[8].field0_0x0._s_0.Y = dVar2;
  }
  if ((this->PreviousTouchCount < 10) && (9 < uVar22)) {
    dVar2 = (*param_1)[9].field0_0x0._s_0.Y;
    this->AnchorPoints[9].field0_0x0._s_0.X = (*param_1)[9].field0_0x0._s_0.X;
    this->AnchorPoints[9].field0_0x0._s_0.Y = dVar2;
  }
  fVar15 = __real_42652ee0;
  dVar14 = __real_4076800000000000;
  dVar2 = __real_40c3880000000000;
  if ((this->PreviousTouchCount < 0xb) && (10 < uVar22)) {
    dVar3 = (*param_1)[10].field0_0x0._s_0.Y;
    this->AnchorPoints[10].field0_0x0._s_0.X = (*param_1)[10].field0_0x0._s_0.X;
    this->AnchorPoints[10].field0_0x0._s_0.Y = dVar3;
LAB_147c42985:
    pfVar16 = TMapBase<FKey,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,float,0>_>::
              Find((TMapBase<FKey,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,float,0>_>
                    *)this,&EKeys::Gesture_Pinch);
    dVar3 = (*param_1)[0].field0_0x0._s_0.X;
    dVar4 = (*param_1)[0].field0_0x0._s_0.Y;
    uVar8 = *(undefined4 *)&(*param_1)[0].field0_0x0;
    uVar9 = *(undefined4 *)((longlong)&(*param_1)[0].field0_0x0 + 4);
    uVar10 = *(undefined4 *)((longlong)&(*param_1)[0].field0_0x0 + 8);
    dVar24 = (*param_1)[1].field0_0x0._s_0.X;
    dVar5 = (*param_1)[1].field0_0x0._s_0.Y;
    uVar11 = *(undefined4 *)&(*param_1)[1].field0_0x0;
    uVar12 = *(undefined4 *)((longlong)&(*param_1)[1].field0_0x0 + 4);
    uVar13 = *(undefined4 *)((longlong)&(*param_1)[1].field0_0x0 + 8);
    if (pfVar16 == (float *)0x0) {
      if (((this->AnchorDistanceSq == 0.0) ||
          (dVar7 = (this->LastPinchPoint_Start).field0_0x0._s_0.X - dVar3,
          dVar6 = (this->LastPinchPoint_Start).field0_0x0._s_0.Y - dVar4,
          dVar2 < dVar6 * dVar6 + dVar7 * dVar7)) ||
         (dVar7 = (this->LastPinchPoint_End).field0_0x0._s_0.X - dVar24,
         dVar6 = (this->LastPinchPoint_End).field0_0x0._s_0.Y - dVar5,
         dVar2 < dVar6 * dVar6 + dVar7 * dVar7)) {
        this->AnchorDistanceSq =
             (float)((dVar4 - dVar5) * (dVar4 - dVar5) + (dVar3 - dVar24) * (dVar3 - dVar24));
      }
      local_res8[0].InternalId = 0x3f800000;
      TMapBase<FKey,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,float,0>_>::
      Emplace<FKey_const_&,float>
                ((TMapBase<FKey,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,float,0>_>
                  *)this,&EKeys::Gesture_Pinch,(float *)local_res8);
      pfVar16 = TMapBase<FKey,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,float,0>_>
                ::Find((TMapBase<FKey,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,float,0>_>
                        *)this,&EKeys::Gesture_Pinch);
    }
    *pfVar16 = (float)((dVar4 - dVar5) * (dVar4 - dVar5) + (dVar3 - dVar24) * (dVar3 - dVar24)) /
               this->AnchorDistanceSq;
    FVar21 = EKeys::Gesture_Pinch.KeyDetails.SharedReferenceCount;
    FVar19 = EKeys::Gesture_Pinch.KeyName;
    local_f0 = (LARGE_INTEGER)EKeys::Gesture_Pinch.KeyDetails.Object;
    local_e8[0].KeyDetails.Object = EKeys::Gesture_Pinch.KeyDetails.Object;
    local_e8[0].KeyName = EKeys::Gesture_Pinch.KeyName;
    local_e8[0].KeyDetails.SharedReferenceCount.ReferenceController =
         EKeys::Gesture_Pinch.KeyDetails.SharedReferenceCount.ReferenceController;
    paVar1 = &(EKeys::Gesture_Pinch.KeyDetails.SharedReferenceCount.ReferenceController)->
              SharedReferenceCount;
    if (EKeys::Gesture_Pinch.KeyDetails.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar1 = (atomic<int>)((int)*paVar1 + 1);
      UNLOCK();
    }
    local_f8 = TMapBase<FKey,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,float,0>_>
               ::Find((TMapBase<FKey,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,float,0>_>
                       *)this,local_e8);
    iVar18 = -1;
    if (local_f8 != (float *)0x0) {
      local_100 = (LARGE_INTEGER)UPlayerInput::GetOwningLocalPlayer(param_2);
      pIVar17 = IPlatformInputDeviceMapper::Get();
      if ((ULocalPlayer *)local_100.QuadPart == (ULocalPlayer *)0x0) {
        iVar20 = -1;
      }
      else {
        iVar20 = ((FPlatformUserId *)(local_100.QuadPart + 0x11c))->InternalId;
      }
      (**(code **)(pIVar17->_padding_ + 0x70))(pIVar17,local_res8,iVar20);
      QueryPerformanceCounter(&local_100);
      local_e8[0].KeyName = FVar19;
      local_e8[0].KeyDetails.SharedReferenceCount.ReferenceController = FVar21.ReferenceController;
      fVar23 = *local_f8;
      local_e8[0].KeyDetails.Object = (FKeyDetails *)local_f0;
      if (FVar21.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *paVar1 = (atomic<int>)((int)*paVar1 + 1);
        UNLOCK();
      }
      UPlayerInput::InputGesture
                (param_2,local_res8[0],local_e8,IE_Pressed,fVar23,local_100.QuadPart);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar21.ReferenceController);
    *(undefined4 *)&(this->LastPinchPoint_Start).field0_0x0 = uVar8;
    *(undefined4 *)((longlong)&(this->LastPinchPoint_Start).field0_0x0 + 4) = uVar9;
    *(undefined4 *)((longlong)&(this->LastPinchPoint_Start).field0_0x0 + 8) = uVar10;
    *(int *)((longlong)&(this->LastPinchPoint_Start).field0_0x0 + 0xc) =
         (int)((ulonglong)dVar4 >> 0x20);
    *(undefined4 *)&(this->LastPinchPoint_End).field0_0x0 = uVar11;
    *(undefined4 *)((longlong)&(this->LastPinchPoint_End).field0_0x0 + 4) = uVar12;
    *(undefined4 *)((longlong)&(this->LastPinchPoint_End).field0_0x0 + 8) = uVar13;
    *(int *)((longlong)&(this->LastPinchPoint_End).field0_0x0 + 0xc) =
         (int)((ulonglong)dVar5 >> 0x20);
    dVar3 = FGenericPlatformMath::Atan2
                      ((*param_1)[0].field0_0x0._s_0.Y - (*param_1)[1].field0_0x0._s_0.Y,
                       (*param_1)[0].field0_0x0._s_0.X - (*param_1)[1].field0_0x0._s_0.X);
    dVar3 = FGenericPlatformMath::Fmod((double)((float)dVar3 * fVar15),dVar14);
    if (dVar3 < 0.0) {
      dVar3 = dVar3 + dVar14;
    }
    pfVar16 = TMapBase<FKey,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,float,0>_>::
              Find((TMapBase<FKey,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,float,0>_>
                    *)this,&EKeys::Gesture_Rotate);
    if (pfVar16 == (float *)0x0) {
      this->StartAngle = (float)dVar3;
      local_res8[0].InternalId = 0;
      TMapBase<FKey,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,float,0>_>::
      Emplace<FKey_const_&,float>
                ((TMapBase<FKey,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,float,0>_>
                  *)this,&EKeys::Gesture_Rotate,(float *)local_res8);
      FVar21 = EKeys::Gesture_Rotate.KeyDetails.SharedReferenceCount;
      FVar19 = EKeys::Gesture_Rotate.KeyName;
      local_100 = (LARGE_INTEGER)EKeys::Gesture_Rotate.KeyDetails.Object;
      local_e8[0].KeyDetails.Object = EKeys::Gesture_Rotate.KeyDetails.Object;
      local_e8[0].KeyName = EKeys::Gesture_Rotate.KeyName;
      local_e8[0].KeyDetails.SharedReferenceCount.ReferenceController =
           EKeys::Gesture_Rotate.KeyDetails.SharedReferenceCount.ReferenceController;
      if (EKeys::Gesture_Rotate.KeyDetails.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (EKeys::Gesture_Rotate.KeyDetails.SharedReferenceCount.ReferenceController)->
        SharedReferenceCount =
             (atomic<int>)
             ((int)(EKeys::Gesture_Rotate.KeyDetails.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      local_f8 = TMapBase<FKey,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,float,0>_>
                 ::Find((TMapBase<FKey,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,float,0>_>
                         *)this,local_e8);
      if (local_f8 != (float *)0x0) {
        local_f0 = (LARGE_INTEGER)UPlayerInput::GetOwningLocalPlayer(param_2);
        pIVar17 = IPlatformInputDeviceMapper::Get();
        if ((ULocalPlayer *)local_f0.QuadPart != (ULocalPlayer *)0x0) {
          iVar18 = ((FPlatformUserId *)(local_f0.QuadPart + 0x11c))->InternalId;
        }
        (**(code **)(pIVar17->_padding_ + 0x70))(pIVar17,local_res8,iVar18);
        QueryPerformanceCounter(&local_f0);
        fVar23 = *local_f8;
LAB_147c42dda:
        local_e8[0].KeyDetails.Object = (FKeyDetails *)local_100;
        if (FVar21.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (FVar21.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FVar21.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_e8[0].KeyName = FVar19;
        local_e8[0].KeyDetails.SharedReferenceCount.ReferenceController = FVar21.ReferenceController
        ;
        UPlayerInput::InputGesture
                  (param_2,local_res8[0],local_e8,IE_Pressed,fVar23,local_f0.QuadPart);
      }
    }
    else {
      *pfVar16 = (float)dVar3 - this->StartAngle;
      FVar21 = EKeys::Gesture_Rotate.KeyDetails.SharedReferenceCount;
      FVar19 = EKeys::Gesture_Rotate.KeyName;
      local_e8[0].KeyName = EKeys::Gesture_Rotate.KeyName;
      local_100 = (LARGE_INTEGER)EKeys::Gesture_Rotate.KeyDetails.Object;
      local_e8[0].KeyDetails.Object = EKeys::Gesture_Rotate.KeyDetails.Object;
      local_e8[0].KeyDetails.SharedReferenceCount.ReferenceController =
           EKeys::Gesture_Rotate.KeyDetails.SharedReferenceCount.ReferenceController;
      if (EKeys::Gesture_Rotate.KeyDetails.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (EKeys::Gesture_Rotate.KeyDetails.SharedReferenceCount.ReferenceController)->
        SharedReferenceCount =
             (atomic<int>)
             ((int)(EKeys::Gesture_Rotate.KeyDetails.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      local_f8 = TMapBase<FKey,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,float,0>_>
                 ::Find((TMapBase<FKey,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,float,0>_>
                         *)this,local_e8);
      if (local_f8 != (float *)0x0) {
        local_f0 = (LARGE_INTEGER)UPlayerInput::GetOwningLocalPlayer(param_2);
        pIVar17 = IPlatformInputDeviceMapper::Get();
        if ((ULocalPlayer *)local_f0.QuadPart != (ULocalPlayer *)0x0) {
          iVar18 = ((FPlatformUserId *)(local_f0.QuadPart + 0x11c))->InternalId;
        }
        (**(code **)(pIVar17->_padding_ + 0x70))(pIVar17,local_res8,iVar18);
        QueryPerformanceCounter(&local_f0);
        fVar23 = *local_f8;
        goto LAB_147c42dda;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar21.ReferenceController);
  }
  else if (1 < uVar22) goto LAB_147c42985;
  if ((1 < this->PreviousTouchCount) && (uVar22 < 2)) {
    local_e8[0].KeyName = EKeys::Gesture_Pinch.KeyName;
    local_e8[0].KeyDetails.Object = EKeys::Gesture_Pinch.KeyDetails.Object;
    local_e8[0].KeyDetails.SharedReferenceCount.ReferenceController =
         EKeys::Gesture_Pinch.KeyDetails.SharedReferenceCount.ReferenceController;
    if (EKeys::Gesture_Pinch.KeyDetails.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (EKeys::Gesture_Pinch.KeyDetails.SharedReferenceCount.ReferenceController)->
      SharedReferenceCount =
           (atomic<int>)
           ((int)(EKeys::Gesture_Pinch.KeyDetails.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    HandleGesture(this,param_2,local_e8,false,true);
    local_e8[0].KeyName = EKeys::Gesture_Rotate.KeyName;
    local_e8[0].KeyDetails.Object = EKeys::Gesture_Rotate.KeyDetails.Object;
    local_e8[0].KeyDetails.SharedReferenceCount.ReferenceController =
         EKeys::Gesture_Rotate.KeyDetails.SharedReferenceCount.ReferenceController;
    if (EKeys::Gesture_Rotate.KeyDetails.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (EKeys::Gesture_Rotate.KeyDetails.SharedReferenceCount.ReferenceController)->
      SharedReferenceCount =
           (atomic<int>)
           ((int)(EKeys::Gesture_Rotate.KeyDetails.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    HandleGesture(this,param_2,local_e8,false,true);
  }
  iVar18 = this->PreviousTouchCount;
  if (iVar18 == 0) {
    if (uVar22 == 1) {
      this->FlickTime = 0.0;
    }
  }
  else {
    if (iVar18 == 1) {
      if (uVar22 == 1) {
        dVar2 = (*param_1)[0].field0_0x0._s_0.Y;
        (this->FlickCurrent).field0_0x0._s_0.X = (*param_1)[0].field0_0x0._s_0.X;
        (this->FlickCurrent).field0_0x0._s_0.Y = dVar2;
        this->FlickTime = param_3 + this->FlickTime;
        goto LAB_147c43041;
      }
    }
    else if (iVar18 < 1) goto LAB_147c43041;
    if ((uVar22 == 0) && (this->FlickTime <= __real_3e800000 && __real_3e800000 != this->FlickTime))
    {
      dVar4 = (this->FlickCurrent).field0_0x0._s_0.X - this->AnchorPoints[0].field0_0x0._s_0.X;
      dVar3 = (this->FlickCurrent).field0_0x0._s_0.Y;
      dVar24 = dVar3 - this->AnchorPoints[0].field0_0x0._s_0.Y;
      if (dVar2 < dVar24 * dVar24 + dVar4 * dVar4) {
        dVar2 = FGenericPlatformMath::Atan2(this->AnchorPoints[0].field0_0x0._s_0.Y - dVar3,dVar4);
        dVar2 = FGenericPlatformMath::Fmod((double)((float)dVar2 * fVar15),dVar14);
        if (dVar2 < 0.0) {
          dVar2 = dVar2 + dVar14;
        }
        local_res8[0].InternalId = (int)(float)dVar2;
        TMapBase<FKey,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,float,0>_>::
        Emplace<FKey_const_&,float_const_&>
                  ((TMapBase<FKey,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,float,0>_>
                    *)this,&EKeys::Gesture_Flick,(float *)local_res8);
        local_e8[0].KeyName = EKeys::Gesture_Flick.KeyName;
        local_e8[0].KeyDetails.Object = EKeys::Gesture_Flick.KeyDetails.Object;
        local_e8[0].KeyDetails.SharedReferenceCount.ReferenceController =
             EKeys::Gesture_Flick.KeyDetails.SharedReferenceCount.ReferenceController;
        if (EKeys::Gesture_Flick.KeyDetails.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (EKeys::Gesture_Flick.KeyDetails.SharedReferenceCount.ReferenceController)->
          SharedReferenceCount =
               (atomic<int>)
               ((int)(EKeys::Gesture_Flick.KeyDetails.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        HandleGesture(this,param_2,local_e8,true,true);
      }
    }
  }
LAB_147c43041:
  this->PreviousTouchCount = uVar22;
  return;
}

// HandleGesture @ 147c60300

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
FGestureRecognizer::HandleGesture
          (FGestureRecognizer *this,UPlayerInput *param_1,FKey *param_2,bool param_3,bool param_4)

{
  float fVar1;
  FName FVar2;
  uint uVar3;
  float *pfVar4;
  ULocalPlayer *pUVar5;
  IPlatformInputDeviceMapper *pIVar6;
  int iVar7;
  EInputEvent EVar8;
  FInputDeviceId local_res8 [2];
  LARGE_INTEGER local_res18 [2];
  FKey local_48;
  
  pfVar4 = TMapBase<FKey,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,float,0>_>::
           Find((TMapBase<FKey,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,float,0>_>
                 *)this,param_2);
  if (pfVar4 != (float *)0x0) {
    pUVar5 = UPlayerInput::GetOwningLocalPlayer(param_1);
    pIVar6 = IPlatformInputDeviceMapper::Get();
    if (pUVar5 == (ULocalPlayer *)0x0) {
      iVar7 = -1;
    }
    else {
      iVar7 = (pUVar5->PlatformUserId).InternalId;
    }
    (**(code **)(pIVar6->_padding_ + 0x70))(pIVar6,local_res8,iVar7);
    QueryPerformanceCounter(local_res18);
    if (param_3) {
      EVar8 = IE_Pressed;
    }
    else {
      EVar8 = (param_4 ^ 1) + IE_Released;
    }
    local_48.KeyName = param_2->KeyName;
    fVar1 = *pfVar4;
    local_48.KeyDetails.Object = (param_2->KeyDetails).Object;
    local_48.KeyDetails.SharedReferenceCount.ReferenceController =
         (param_2->KeyDetails).SharedReferenceCount.ReferenceController;
    if (local_48.KeyDetails.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_48.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_48.KeyDetails.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    UPlayerInput::InputGesture(param_1,local_res8[0],&local_48,EVar8,fVar1,local_res18[0].QuadPart);
    if ((param_4) &&
       (*(int *)&(this->CurrentGestureValues).field_0x8 !=
        *(int *)&(this->CurrentGestureValues).field_0x34)) {
      FVar2 = param_2->KeyName;
      uVar3 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
      TSet<TTuple<FKey,float>,TDefaultMapHashableKeyFuncs<FKey,float,0>,FDefaultSetAllocator>::
      RemoveImpl<FKey>((TSet<TTuple<FKey,float>,TDefaultMapHashableKeyFuncs<FKey,float,0>,FDefaultSetAllocator>
                        *)this,uVar3 + FVar2.Number,param_2);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->KeyDetails).SharedReferenceCount.ReferenceController);
  return;
}

// SetAnchorDistanceSquared @ 147c7fad0

void __thiscall
FGestureRecognizer::SetAnchorDistanceSquared
          (FGestureRecognizer *this,TVector2<double> *param_1,TVector2<double> *param_2)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (param_1->field0_0x0)._s_0.Y - (param_2->field0_0x0)._s_0.Y;
  dVar2 = (param_1->field0_0x0)._s_0.X - (param_2->field0_0x0)._s_0.X;
  this->AnchorDistanceSq = (float)(dVar1 * dVar1 + dVar2 * dVar2);
  return;
}

