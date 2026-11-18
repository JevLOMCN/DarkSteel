// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MotionWarping
// Functions: 37

// Construct<FMotionWarpingWindowData> @ 14cefd620

void __cdecl UE::CoreUObject::Private::Construct<FMotionWarpingWindowData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FMotionWarpingWindowData> @ 14cefd630

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMotionWarpingWindowData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FMotionWarpingWindowData> @ 14cefd640

void __cdecl UE::CoreUObject::Private::Destruct<FMotionWarpingWindowData>(void *param_1)

{
  return;
}

// Copy<FMotionWarpingWindowData> @ 14cefd650

bool __cdecl
UE::CoreUObject::Private::Copy<FMotionWarpingWindowData>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar2);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *puVar2 = *puVar1;
      *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar1 + 1);
      *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)((longlong)puVar1 + 0xc);
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FAttributeBasedRootMotionComponentPrePhysicsTickFunction> @ 14cefd770

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UE::CoreUObject::Private::Construct<FAttributeBasedRootMotionComponentPrePhysicsTickFunction>
          (void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  FTickFunction::FTickFunction(param_1);
  *(undefined ***)param_1 = &___7FAttributeBasedRootMotionComponentPrePhysicsTickFunction__6B_;
  return;
}

// ConstructForTests<FAttributeBasedRootMotionComponentPrePhysicsTickFunction> @ 14cefd7b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UE::CoreUObject::Private::
ConstructForTests<FAttributeBasedRootMotionComponentPrePhysicsTickFunction>(void *param_1)

{
  FTickFunction::FTickFunction(param_1);
  *(undefined ***)param_1 = &___7FAttributeBasedRootMotionComponentPrePhysicsTickFunction__6B_;
  return;
}

// Destruct<FAttributeBasedRootMotionComponentPrePhysicsTickFunction> @ 14cefd7e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UE::CoreUObject::Private::Destruct<FAttributeBasedRootMotionComponentPrePhysicsTickFunction>
          (void *param_1)

{
  FTickTaskLevel *this;
  code *pcVar1;
  bool bVar2;
  
  *(undefined ***)param_1 = &___7FTickFunction__6B_;
  if ((*(byte **)((longlong)param_1 + 0x20) != (byte *)0x0) &&
     ((**(byte **)((longlong)param_1 + 0x20) & 1) != 0)) {
    FTickTaskManager::Get();
    if (*(longlong *)((longlong)param_1 + 0x20) == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TickFunction->InternalData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TickTaskManager.cpp"
                         ,0x8a0,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    this = *(FTickTaskLevel **)(*(longlong *)((longlong)param_1 + 0x20) + 0x28);
    if (this == (FTickTaskLevel *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Level",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TickTaskManager.cpp"
                         ,0x8a2,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FTickTaskLevel::RemoveTickFunction(this,param_1);
    **(byte **)((longlong)param_1 + 0x20) = **(byte **)((longlong)param_1 + 0x20) & 0xfe;
  }
  ::operator_delete(*(void **)((longlong)param_1 + 0x20),0x30);
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
    return;
  }
  return;
}

// Construct<FPrecomputedWarpSteeringSettings> @ 14ceff1c0

void __cdecl UE::CoreUObject::Private::Construct<FPrecomputedWarpSteeringSettings>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)param_1 = 1;
  *(undefined4 *)((longlong)param_1 + 4) = 0x43960000;
  *(undefined4 *)((longlong)param_1 + 8) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x43070000;
  return;
}

// ConstructForTests<FPrecomputedWarpSteeringSettings> @ 14ceff1f0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPrecomputedWarpSteeringSettings>(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  *(undefined4 *)((longlong)param_1 + 4) = 0x43960000;
  *(undefined4 *)((longlong)param_1 + 8) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x43070000;
  return;
}

// Destruct<FPrecomputedWarpSteeringSettings> @ 14ceff210

void __cdecl UE::CoreUObject::Private::Destruct<FPrecomputedWarpSteeringSettings>(void *param_1)

{
  return;
}

// Copy<FPrecomputedWarpSteeringSettings> @ 14ceff220

bool __cdecl
UE::CoreUObject::Private::Copy<FPrecomputedWarpSteeringSettings>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPrecomputedWarpCurve> @ 14ceff250

void __cdecl UE::CoreUObject::Private::Construct<FPrecomputedWarpCurve>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0x3f800000;
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FPrecomputedWarpCurve> @ 14ceff270

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPrecomputedWarpCurve>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0x3f800000;
  *(undefined8 *)param_1 = 0;
  return;
}

// Destruct<FPrecomputedWarpCurve> @ 14ceff290

void __cdecl UE::CoreUObject::Private::Destruct<FPrecomputedWarpCurve>(void *param_1)

{
  return;
}

// Copy<FPrecomputedWarpCurve> @ 14ceff2a0

bool __cdecl
UE::CoreUObject::Private::Copy<FPrecomputedWarpCurve>(void *param_1,void *param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined4 *)(lVar2 + 8 + (longlong)param_1);
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      *(undefined4 *)((longlong)param_1 + 8) = uVar1;
      param_1 = (void *)((longlong)param_1 + 0xc);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMotionDeltaTrackContainer> @ 14ceff620

void __cdecl UE::CoreUObject::Private::Construct<FMotionDeltaTrackContainer>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FMotionDeltaTrackContainer> @ 14ceff630

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMotionDeltaTrackContainer>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FMotionDeltaTrackContainer> @ 14ceff640

void __cdecl UE::CoreUObject::Private::Destruct<FMotionDeltaTrackContainer>(void *param_1)

{
  DestructItems<FMotionDeltaTrack,int>
            (*(FMotionDeltaTrack **)param_1,*(int *)((longlong)param_1 + 8));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FMotionDeltaTrackContainer> @ 14ceff6c0

bool __cdecl
UE::CoreUObject::Private::Copy<FMotionDeltaTrackContainer>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  int iVar4;
  FMotionDeltaTrack *pFVar5;
  ForAnyElementType *pFVar6;
  
  if (param_3 != 0) {
    pFVar6 = param_1;
    do {
      pFVar2 = (ForAnyElementType *)(((longlong)param_2 - (longlong)param_1) + (longlong)pFVar6);
      if (pFVar6 != pFVar2) {
        DestructItems<FMotionDeltaTrack,int>
                  ((FMotionDeltaTrack *)pFVar6->Data,*(int *)&pFVar6[1].Data);
        iVar3 = *(int *)&pFVar2[1].Data;
        piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
        pFVar5 = (FMotionDeltaTrack *)pFVar2->Data;
        iVar4 = *piVar1;
        *(int *)&pFVar6[1].Data = iVar3;
        if ((iVar3 == 0) && (iVar4 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x60,8,iVar3,iVar4,pFVar6,iVar3,piVar1);
          ConstructItems<FMotionDeltaTrack,FMotionDeltaTrack,int>(pFVar6->Data,pFVar5,iVar3);
        }
      }
      param_3 = param_3 + -1;
      pFVar6 = pFVar6 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMotionDeltaTrack> @ 14ceffd30

void __cdecl UE::CoreUObject::Private::Construct<FMotionDeltaTrack>(void *param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x30) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x38) = uVar1;
  *(double *)((longlong)param_1 + 0x40) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  *(double *)((longlong)param_1 + 0x48) = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  *(double *)((longlong)param_1 + 0x50) = dVar2;
  *(double *)((longlong)param_1 + 0x58) = UE::Math::TRotator<double>::ZeroRotator.Roll;
  return;
}

// ConstructForTests<FMotionDeltaTrack> @ 14ceffd90

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMotionDeltaTrack>(void *param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x30) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x38) = uVar1;
  *(double *)((longlong)param_1 + 0x40) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  *(double *)((longlong)param_1 + 0x48) = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  *(double *)((longlong)param_1 + 0x50) = dVar2;
  *(double *)((longlong)param_1 + 0x58) = UE::Math::TRotator<double>::ZeroRotator.Roll;
  return;
}

// Destruct<FMotionDeltaTrack> @ 14ceffde0

void __cdecl UE::CoreUObject::Private::Destruct<FMotionDeltaTrack>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FMotionDeltaTrack> @ 14ceffe70

bool __cdecl
UE::CoreUObject::Private::Copy<FMotionDeltaTrack>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  ForAnyElementType *pFVar6;
  ForAnyElementType *pFVar7;
  
  if (param_3 != 0) {
    pFVar7 = param_1;
    do {
      pFVar6 = (ForAnyElementType *)((longlong)pFVar7 + ((longlong)param_2 - (longlong)param_1));
      if (pFVar7 != pFVar6) {
        iVar3 = *(int *)&pFVar6[1].Data;
        piVar1 = (int *)((longlong)&pFVar7[1].Data + 4);
        pFVar5 = pFVar6->Data;
        iVar4 = *piVar1;
        *(int *)&pFVar7[1].Data = iVar3;
        if ((iVar3 == 0) && (iVar4 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x60,0x10,iVar3,iVar4,pFVar7,iVar3,piVar1);
          if (iVar3 != 0) {
            memcpy(pFVar7->Data,pFVar5,(longlong)iVar3 * 0x60);
          }
        }
      }
      pFVar2 = pFVar7 + 2;
      if (pFVar2 != pFVar6 + 2) {
        iVar3 = *(int *)&pFVar6[3].Data;
        piVar1 = (int *)((longlong)&pFVar7[3].Data + 4);
        pFVar5 = pFVar6[2].Data;
        iVar4 = *piVar1;
        *(int *)&pFVar7[3].Data = iVar3;
        if ((iVar3 == 0) && (iVar4 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,iVar3,iVar4,pFVar2,iVar3,piVar1);
          if (iVar3 != 0) {
            memcpy(pFVar2->Data,pFVar5,(longlong)iVar3 * 0x18);
          }
        }
      }
      pFVar2 = pFVar7 + 4;
      if (pFVar2 != pFVar6 + 4) {
        iVar3 = *(int *)&pFVar6[5].Data;
        piVar1 = (int *)((longlong)&pFVar7[5].Data + 4);
        pFVar5 = pFVar6[4].Data;
        iVar4 = *piVar1;
        *(int *)&pFVar7[5].Data = iVar3;
        if ((iVar3 == 0) && (iVar4 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,iVar3,iVar4,pFVar2,iVar3,piVar1);
          if (iVar3 != 0) {
            memcpy(pFVar2->Data,pFVar5,(longlong)iVar3 * 0x18);
          }
        }
      }
      pFVar5 = pFVar6[7].Data;
      pFVar7[6].Data = pFVar6[6].Data;
      pFVar7[7].Data = pFVar5;
      pFVar7[8].Data = pFVar6[8].Data;
      pFVar5 = pFVar6[10].Data;
      pFVar7[9].Data = pFVar6[9].Data;
      pFVar7[10].Data = pFVar5;
      pFVar7[0xb].Data = pFVar6[0xb].Data;
      param_3 = param_3 + -1;
      pFVar7 = pFVar7 + 0xc;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMotionWarpingTarget> @ 14cf003b0

void __cdecl UE::CoreUObject::Private::Construct<FMotionWarpingTarget>(void *param_1)

{
  undefined8 uVar1;
  double dVar2;
  FWeakObjectPtr *this;
  undefined8 uStackX_8;
  
  *(undefined8 *)param_1 = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uStackX_8 = 0;
  *(double *)((longlong)param_1 + 8) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
  *(double *)((longlong)param_1 + 0x18) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  *(double *)((longlong)param_1 + 0x20) = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  *(double *)((longlong)param_1 + 0x28) = dVar2;
  *(double *)((longlong)param_1 + 0x30) = UE::Math::TRotator<double>::ZeroRotator.Roll;
  this = (FWeakObjectPtr *)((longlong)param_1 + 0x38);
  this->ObjectIndex = 0;
  this->ObjectSerialNumber = 0;
  FWeakObjectPtr::operator=(this,(FObjectPtr)&uStackX_8);
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined2 *)((longlong)param_1 + 0x48) = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x50) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x58) = uVar1;
  *(double *)((longlong)param_1 + 0x60) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  *(double *)((longlong)param_1 + 0x68) = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  *(double *)((longlong)param_1 + 0x70) = dVar2;
  *(double *)((longlong)param_1 + 0x78) = UE::Math::TRotator<double>::ZeroRotator.Roll;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined1 *)((longlong)param_1 + 0x88) = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x90) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x98) = uVar1;
  *(double *)((longlong)param_1 + 0xa0) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0xa8) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0xb0) = uVar1;
  *(double *)((longlong)param_1 + 0xb8) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0xc0) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 200) = uVar1;
  *(double *)((longlong)param_1 + 0xd0) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined2 *)((longlong)param_1 + 0xd8) = 0;
  return;
}

// ConstructForTests<FMotionWarpingTarget> @ 14cf003c0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMotionWarpingTarget>(void *param_1)

{
  undefined8 uVar1;
  double dVar2;
  FWeakObjectPtr *this;
  undefined8 uStackX_8;
  
  *(undefined8 *)param_1 = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uStackX_8 = 0;
  *(double *)((longlong)param_1 + 8) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
  *(double *)((longlong)param_1 + 0x18) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  *(double *)((longlong)param_1 + 0x20) = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  *(double *)((longlong)param_1 + 0x28) = dVar2;
  *(double *)((longlong)param_1 + 0x30) = UE::Math::TRotator<double>::ZeroRotator.Roll;
  this = (FWeakObjectPtr *)((longlong)param_1 + 0x38);
  this->ObjectIndex = 0;
  this->ObjectSerialNumber = 0;
  FWeakObjectPtr::operator=(this,(FObjectPtr)&uStackX_8);
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined2 *)((longlong)param_1 + 0x48) = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x50) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x58) = uVar1;
  *(double *)((longlong)param_1 + 0x60) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  *(double *)((longlong)param_1 + 0x68) = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  *(double *)((longlong)param_1 + 0x70) = dVar2;
  *(double *)((longlong)param_1 + 0x78) = UE::Math::TRotator<double>::ZeroRotator.Roll;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined1 *)((longlong)param_1 + 0x88) = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x90) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x98) = uVar1;
  *(double *)((longlong)param_1 + 0xa0) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0xa8) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0xb0) = uVar1;
  *(double *)((longlong)param_1 + 0xb8) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0xc0) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 200) = uVar1;
  *(double *)((longlong)param_1 + 0xd0) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined2 *)((longlong)param_1 + 0xd8) = 0;
  return;
}

// Destruct<FMotionWarpingTarget> @ 14cf003d0

void __cdecl UE::CoreUObject::Private::Destruct<FMotionWarpingTarget>(void *param_1)

{
  return;
}

// Copy<FMotionWarpingTarget> @ 14cf00660

bool __cdecl
UE::CoreUObject::Private::Copy<FMotionWarpingTarget>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 *puVar29;
  
  if (param_3 != 0) {
    puVar29 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar29);
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      uVar5 = puVar1[4];
      uVar6 = puVar1[5];
      uVar7 = puVar1[6];
      uVar8 = puVar1[7];
      uVar9 = puVar1[8];
      uVar10 = puVar1[9];
      uVar11 = puVar1[10];
      uVar12 = puVar1[0xb];
      uVar13 = puVar1[0xc];
      uVar14 = puVar1[0xd];
      uVar15 = puVar1[0xe];
      uVar16 = puVar1[0xf];
      uVar17 = puVar1[0x10];
      uVar18 = puVar1[0x11];
      uVar19 = puVar1[0x12];
      uVar20 = puVar1[0x13];
      uVar21 = puVar1[0x14];
      uVar22 = puVar1[0x15];
      uVar23 = puVar1[0x16];
      uVar24 = puVar1[0x17];
      uVar25 = puVar1[0x18];
      uVar26 = puVar1[0x19];
      uVar27 = puVar1[0x1a];
      uVar28 = puVar1[0x1b];
      *puVar29 = *puVar1;
      puVar29[1] = uVar2;
      puVar29[2] = uVar3;
      puVar29[3] = uVar4;
      puVar29[4] = uVar5;
      puVar29[5] = uVar6;
      puVar29[6] = uVar7;
      puVar29[7] = uVar8;
      puVar29[8] = uVar9;
      puVar29[9] = uVar10;
      puVar29[10] = uVar11;
      puVar29[0xb] = uVar12;
      puVar29[0xc] = uVar13;
      puVar29[0xd] = uVar14;
      puVar29[0xe] = uVar15;
      puVar29[0xf] = uVar16;
      puVar29[0x10] = uVar17;
      puVar29[0x11] = uVar18;
      puVar29[0x12] = uVar19;
      puVar29[0x13] = uVar20;
      puVar29[0x14] = uVar21;
      puVar29[0x15] = uVar22;
      puVar29[0x16] = uVar23;
      puVar29[0x17] = uVar24;
      puVar29[0x18] = uVar25;
      puVar29[0x19] = uVar26;
      puVar29[0x1a] = uVar27;
      puVar29[0x1b] = uVar28;
      param_3 = param_3 + -1;
      puVar29 = puVar29 + 0x1c;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMotionWarpingUpdateContext> @ 14cf009e0

void __cdecl UE::CoreUObject::Private::Construct<FMotionWarpingUpdateContext>(void *param_1)

{
  undefined8 local_res8;
  
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)param_1 = 0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(param_1,(FObjectPtr)&local_res8);
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0x3f800000;
  return;
}

// ConstructForTests<FMotionWarpingUpdateContext> @ 14cf00a30

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMotionWarpingUpdateContext>(void *param_1)

{
  undefined8 local_res8;
  
  *(undefined8 *)param_1 = 0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(param_1,(FObjectPtr)&local_res8);
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0x3f800000;
  return;
}

// Destruct<FMotionWarpingUpdateContext> @ 14cf00a80

void __cdecl UE::CoreUObject::Private::Destruct<FMotionWarpingUpdateContext>(void *param_1)

{
  return;
}

// Copy<FMotionWarpingUpdateContext> @ 14cf00a90

bool __cdecl
UE::CoreUObject::Private::Copy<FMotionWarpingUpdateContext>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (param_3 != 0) {
    lVar4 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined8 *)(lVar4 + 0x10 + (longlong)param_1);
      uVar2 = *(undefined4 *)(lVar4 + 0x18 + (longlong)param_1);
      uVar3 = ((undefined8 *)(lVar4 + (longlong)param_1))[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar4 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
      *(undefined4 *)((longlong)param_1 + 0x18) = uVar2;
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x1c);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FSwitchOffConditionData> @ 14cf00f20

void __cdecl UE::CoreUObject::Private::Construct<FSwitchOffConditionData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FSwitchOffConditionData> @ 14cf00f40

void __cdecl UE::CoreUObject::Private::ConstructForTests<FSwitchOffConditionData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FSwitchOffConditionData> @ 14cf00f60

void __cdecl UE::CoreUObject::Private::Destruct<FSwitchOffConditionData>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 8);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FSwitchOffConditionData> @ 14cf01000

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl
UE::CoreUObject::Private::Copy<FSwitchOffConditionData>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  ForAnyElementType *pFVar4;
  ForAnyElementType *pFVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    lVar6 = (longlong)param_2 - (longlong)param_1;
    do {
      pFVar4 = (ForAnyElementType *)((longlong)param_1 + lVar6 + 8);
      pFVar5 = (ForAnyElementType *)((longlong)param_1 + 8);
      *(undefined8 *)param_1 = *(undefined8 *)(lVar6 + (longlong)param_1);
      if (pFVar5 != pFVar4) {
        iVar2 = *(int *)((longlong)param_1 + lVar6 + 0x10);
        piVar1 = (int *)((longlong)param_1 + 0x14);
        pFVar3 = pFVar4->Data;
        *(int *)((longlong)param_1 + 0x10) = iVar2;
        if ((iVar2 == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar2,*piVar1,pFVar5,iVar2,piVar1);
          ConstructItems<TObjectPtr<UMotionWarpingSwitchOffCondition>,TObjectPtr<UMotionWarpingSwitchOffCondition>,int>
                    (pFVar5->Data,(TObjectPtr<UMotionWarpingSwitchOffCondition> *)pFVar3,iVar2);
        }
      }
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x18);
    } while (param_3 != 0);
  }
  return true;
}

// DereferenceIfNecessary<UMotionWarpingCharacterAdapter,UMotionWarpingCharacterAdapter_*_&> @ 14cf015a0

UMotionWarpingCharacterAdapter * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UMotionWarpingCharacterAdapter,UMotionWarpingCharacterAdapter_*_&>
          (UMotionWarpingCharacterAdapter **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UMotionWarpingComponent,UMotionWarpingComponent_*_&> @ 14cf015c0

UMotionWarpingComponent * __cdecl
UE::Core::Private::DereferenceIfNecessary<UMotionWarpingComponent,UMotionWarpingComponent_*_&>
          (UMotionWarpingComponent **param_1)

{
  return *param_1;
}

