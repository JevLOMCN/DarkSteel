// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 14

// DrawTraces @ 14781df40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
TSQTraits<ChaosInterface::FPTRaycastHit,0,2>::DrawTraces
          (UWorld *param_1,TVector<double> *param_2,TVector<double> *param_3,
          FImplicitObject *param_4,TQuat<double> *param_5,FHitResult *param_6)

{
  int iVar1;
  TArray<FHitResult,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  iVar1 = UE::Core::Private::
          ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x100,8,&local_18.AllocatorInstance,&local_18.ArrayMax);
  local_18.ArrayNum = iVar1 + 1;
  FHitResult::FHitResult
            ((FHitResult *)(local_18.AllocatorInstance.Data + (longlong)iVar1 * 0x100),param_6);
  DrawLineTraces(param_1,param_2,param_3,&local_18,DebugLineLifetime);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// DrawTraces @ 14781dff0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
TSQTraits<ChaosInterface::FPTRaycastHit,0,0>::DrawTraces
          (UWorld *param_1,TVector<double> *param_2,TVector<double> *param_3,
          FImplicitObject *param_4,TQuat<double> *param_5,FHitResult *param_6)

{
  int iVar1;
  TArray<FHitResult,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  iVar1 = UE::Core::Private::
          ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x100,8,&local_18.AllocatorInstance,&local_18.ArrayMax);
  local_18.ArrayNum = iVar1 + 1;
  FHitResult::FHitResult
            ((FHitResult *)(local_18.AllocatorInstance.Data + (longlong)iVar1 * 0x100),param_6);
  DrawLineTraces(param_1,param_2,param_3,&local_18,DebugLineLifetime);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// DrawTraces @ 14781e0a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
TSQTraits<ChaosInterface::FPTSweepHit,1,2>::DrawTraces
          (UWorld *param_1,TVector<double> *param_2,TVector<double> *param_3,
          FImplicitObject *param_4,TQuat<double> *param_5,FHitResult *param_6)

{
  int iVar1;
  TArray<FHitResult,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  iVar1 = UE::Core::Private::
          ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x100,8,&local_18.AllocatorInstance,&local_18.ArrayMax);
  local_18.ArrayNum = iVar1 + 1;
  FHitResult::FHitResult
            ((FHitResult *)(local_18.AllocatorInstance.Data + (longlong)iVar1 * 0x100),param_6);
  DrawGeomSweeps(param_1,param_2,param_3,param_4,param_5,&local_18,DebugLineLifetime);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// DrawTraces @ 14781e170

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
TSQTraits<ChaosInterface::FPTSweepHit,1,0>::DrawTraces
          (UWorld *param_1,TVector<double> *param_2,TVector<double> *param_3,
          FImplicitObject *param_4,TQuat<double> *param_5,FHitResult *param_6)

{
  int iVar1;
  TArray<FHitResult,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  iVar1 = UE::Core::Private::
          ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x100,8,&local_18.AllocatorInstance,&local_18.ArrayMax);
  local_18.ArrayNum = iVar1 + 1;
  FHitResult::FHitResult
            ((FHitResult *)(local_18.AllocatorInstance.Data + (longlong)iVar1 * 0x100),param_6);
  DrawGeomSweeps(param_1,param_2,param_3,param_4,param_5,&local_18,DebugLineLifetime);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// DrawTraces @ 14781e240

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
TSQTraits<ChaosInterface::FRaycastHit,0,2>::DrawTraces
          (UWorld *param_1,TVector<double> *param_2,TVector<double> *param_3,
          FImplicitObject *param_4,TQuat<double> *param_5,FHitResult *param_6)

{
  int iVar1;
  TArray<FHitResult,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  iVar1 = UE::Core::Private::
          ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x100,8,&local_18.AllocatorInstance,&local_18.ArrayMax);
  local_18.ArrayNum = iVar1 + 1;
  FHitResult::FHitResult
            ((FHitResult *)(local_18.AllocatorInstance.Data + (longlong)iVar1 * 0x100),param_6);
  DrawLineTraces(param_1,param_2,param_3,&local_18,DebugLineLifetime);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// DrawTraces @ 14781e2f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
TSQTraits<ChaosInterface::FRaycastHit,0,0>::DrawTraces
          (UWorld *param_1,TVector<double> *param_2,TVector<double> *param_3,
          FImplicitObject *param_4,TQuat<double> *param_5,FHitResult *param_6)

{
  int iVar1;
  TArray<FHitResult,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  iVar1 = UE::Core::Private::
          ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x100,8,&local_18.AllocatorInstance,&local_18.ArrayMax);
  local_18.ArrayNum = iVar1 + 1;
  FHitResult::FHitResult
            ((FHitResult *)(local_18.AllocatorInstance.Data + (longlong)iVar1 * 0x100),param_6);
  DrawLineTraces(param_1,param_2,param_3,&local_18,DebugLineLifetime);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// DrawTraces @ 14781e3a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
TSQTraits<ChaosInterface::FSweepHit,1,2>::DrawTraces
          (UWorld *param_1,TVector<double> *param_2,TVector<double> *param_3,
          FImplicitObject *param_4,TQuat<double> *param_5,FHitResult *param_6)

{
  int iVar1;
  TArray<FHitResult,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  iVar1 = UE::Core::Private::
          ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x100,8,&local_18.AllocatorInstance,&local_18.ArrayMax);
  local_18.ArrayNum = iVar1 + 1;
  FHitResult::FHitResult
            ((FHitResult *)(local_18.AllocatorInstance.Data + (longlong)iVar1 * 0x100),param_6);
  DrawGeomSweeps(param_1,param_2,param_3,param_4,param_5,&local_18,DebugLineLifetime);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// DrawTraces @ 14781e470

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
TSQTraits<ChaosInterface::FSweepHit,1,0>::DrawTraces
          (UWorld *param_1,TVector<double> *param_2,TVector<double> *param_3,
          FImplicitObject *param_4,TQuat<double> *param_5,FHitResult *param_6)

{
  int iVar1;
  TArray<FHitResult,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  iVar1 = UE::Core::Private::
          ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x100,8,&local_18.AllocatorInstance,&local_18.ArrayMax);
  local_18.ArrayNum = iVar1 + 1;
  FHitResult::FHitResult
            ((FHitResult *)(local_18.AllocatorInstance.Data + (longlong)iVar1 * 0x100),param_6);
  DrawGeomSweeps(param_1,param_2,param_3,param_4,param_5,&local_18,DebugLineLifetime);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// ResetOutHits @ 147860cf0

void __cdecl
TSQTraits<ChaosInterface::FPTRaycastHit,0,0>::ResetOutHits
          (FHitResult *param_1,TVector<double> *param_2,TVector<double> *param_3)

{
  double dVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  FHitResult *pFVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 local_108;
  undefined4 local_64;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  memset(&local_108,0,0x100);
  lVar9 = 2;
  local_50 = 0;
  uStack_48 = 0;
  local_108._4_4_ = 0x3f800000;
  local_64 = 0xffffffff;
  local_40 = 0;
  uStack_38 = 0xffffffff;
  pFVar7 = param_1;
  puVar8 = &local_108;
  do {
    uVar2 = *puVar8;
    uVar3 = puVar8[1];
    uVar4 = puVar8[2];
    uVar5 = puVar8[3];
    pFVar7->FaceIndex = (int)uVar2;
    pFVar7->Time = (float)(int)((ulonglong)uVar2 >> 0x20);
    pFVar7->Distance = (float)(int)uVar3;
    pFVar7->_padding_ = (int)((ulonglong)uVar3 >> 0x20);
    uVar2 = puVar8[4];
    uVar3 = puVar8[5];
    *(undefined8 *)&pFVar7->Location = uVar4;
    *(undefined8 *)&(pFVar7->Location).field_0x8 = uVar5;
    uVar4 = puVar8[6];
    uVar5 = puVar8[7];
    *(undefined8 *)&(pFVar7->Location).field_0x10 = uVar2;
    *(undefined8 *)&pFVar7->ImpactPoint = uVar3;
    uVar2 = puVar8[8];
    uVar3 = puVar8[9];
    *(undefined8 *)&(pFVar7->ImpactPoint).field_0x8 = uVar4;
    *(undefined8 *)&(pFVar7->ImpactPoint).field_0x10 = uVar5;
    uVar4 = puVar8[10];
    uVar5 = puVar8[0xb];
    *(undefined8 *)&pFVar7->Normal = uVar2;
    *(undefined8 *)&(pFVar7->Normal).field_0x8 = uVar3;
    uVar2 = puVar8[0xc];
    uVar3 = puVar8[0xd];
    *(undefined8 *)&(pFVar7->Normal).field_0x10 = uVar4;
    *(undefined8 *)&pFVar7->ImpactNormal = uVar5;
    uVar4 = puVar8[0xe];
    uVar5 = puVar8[0xf];
    *(undefined8 *)&(pFVar7->ImpactNormal).field_0x8 = uVar2;
    *(undefined8 *)&(pFVar7->ImpactNormal).field_0x10 = uVar3;
    *(undefined8 *)&pFVar7->TraceStart = uVar4;
    *(undefined8 *)&(pFVar7->TraceStart).field_0x8 = uVar5;
    lVar9 = lVar9 + -1;
    pFVar7 = (FHitResult *)&(pFVar7->TraceStart).field_0x10;
    puVar8 = puVar8 + 0x10;
  } while (lVar9 != 0);
  dVar6 = (param_2->field0_0x0)._s_0.Y;
  dVar1 = (param_2->field0_0x0)._s_0.Z;
  *(double *)&param_1->TraceStart = (param_2->field0_0x0)._s_0.X;
  *(double *)&(param_1->TraceStart).field_0x8 = dVar6;
  *(double *)&(param_1->TraceStart).field_0x10 = dVar1;
  dVar6 = (param_3->field0_0x0)._s_0.Y;
  dVar1 = (param_3->field0_0x0)._s_0.Z;
  *(double *)&param_1->TraceEnd = (param_3->field0_0x0)._s_0.X;
  *(double *)&(param_1->TraceEnd).field_0x8 = dVar6;
  *(double *)&(param_1->TraceEnd).field_0x10 = dVar1;
  return;
}

// ResetOutHits @ 147860e10

void __cdecl
TSQTraits<ChaosInterface::FPTSweepHit,1,0>::ResetOutHits
          (FHitResult *param_1,TVector<double> *param_2,TVector<double> *param_3)

{
  double dVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  FHitResult *pFVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 local_108;
  undefined4 local_64;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  memset(&local_108,0,0x100);
  lVar9 = 2;
  local_50 = 0;
  uStack_48 = 0;
  local_108._4_4_ = 0x3f800000;
  local_64 = 0xffffffff;
  local_40 = 0;
  uStack_38 = 0xffffffff;
  pFVar7 = param_1;
  puVar8 = &local_108;
  do {
    uVar2 = *puVar8;
    uVar3 = puVar8[1];
    uVar4 = puVar8[2];
    uVar5 = puVar8[3];
    pFVar7->FaceIndex = (int)uVar2;
    pFVar7->Time = (float)(int)((ulonglong)uVar2 >> 0x20);
    pFVar7->Distance = (float)(int)uVar3;
    pFVar7->_padding_ = (int)((ulonglong)uVar3 >> 0x20);
    uVar2 = puVar8[4];
    uVar3 = puVar8[5];
    *(undefined8 *)&pFVar7->Location = uVar4;
    *(undefined8 *)&(pFVar7->Location).field_0x8 = uVar5;
    uVar4 = puVar8[6];
    uVar5 = puVar8[7];
    *(undefined8 *)&(pFVar7->Location).field_0x10 = uVar2;
    *(undefined8 *)&pFVar7->ImpactPoint = uVar3;
    uVar2 = puVar8[8];
    uVar3 = puVar8[9];
    *(undefined8 *)&(pFVar7->ImpactPoint).field_0x8 = uVar4;
    *(undefined8 *)&(pFVar7->ImpactPoint).field_0x10 = uVar5;
    uVar4 = puVar8[10];
    uVar5 = puVar8[0xb];
    *(undefined8 *)&pFVar7->Normal = uVar2;
    *(undefined8 *)&(pFVar7->Normal).field_0x8 = uVar3;
    uVar2 = puVar8[0xc];
    uVar3 = puVar8[0xd];
    *(undefined8 *)&(pFVar7->Normal).field_0x10 = uVar4;
    *(undefined8 *)&pFVar7->ImpactNormal = uVar5;
    uVar4 = puVar8[0xe];
    uVar5 = puVar8[0xf];
    *(undefined8 *)&(pFVar7->ImpactNormal).field_0x8 = uVar2;
    *(undefined8 *)&(pFVar7->ImpactNormal).field_0x10 = uVar3;
    *(undefined8 *)&pFVar7->TraceStart = uVar4;
    *(undefined8 *)&(pFVar7->TraceStart).field_0x8 = uVar5;
    lVar9 = lVar9 + -1;
    pFVar7 = (FHitResult *)&(pFVar7->TraceStart).field_0x10;
    puVar8 = puVar8 + 0x10;
  } while (lVar9 != 0);
  dVar6 = (param_2->field0_0x0)._s_0.Y;
  dVar1 = (param_2->field0_0x0)._s_0.Z;
  *(double *)&param_1->TraceStart = (param_2->field0_0x0)._s_0.X;
  *(double *)&(param_1->TraceStart).field_0x8 = dVar6;
  *(double *)&(param_1->TraceStart).field_0x10 = dVar1;
  dVar6 = (param_3->field0_0x0)._s_0.Y;
  dVar1 = (param_3->field0_0x0)._s_0.Z;
  *(double *)&param_1->TraceEnd = (param_3->field0_0x0)._s_0.X;
  *(double *)&(param_1->TraceEnd).field_0x8 = dVar6;
  *(double *)&(param_1->TraceEnd).field_0x10 = dVar1;
  return;
}

// ResetOutHits @ 147860f30

void __cdecl
TSQTraits<ChaosInterface::FRaycastHit,0,1>::ResetOutHits
          (TArray<FHitResult,TSizedDefaultAllocator<32>_> *param_1,TVector<double> *param_2,
          TVector<double> *param_3)

{
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x100,8,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
  }
  return;
}

// ResetOutHits @ 147860f70

void __cdecl
TSQTraits<ChaosInterface::FRaycastHit,0,0>::ResetOutHits
          (FHitResult *param_1,TVector<double> *param_2,TVector<double> *param_3)

{
  double dVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  FHitResult *pFVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 local_108;
  undefined4 local_64;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  memset(&local_108,0,0x100);
  lVar9 = 2;
  local_50 = 0;
  uStack_48 = 0;
  local_108._4_4_ = 0x3f800000;
  local_64 = 0xffffffff;
  local_40 = 0;
  uStack_38 = 0xffffffff;
  pFVar7 = param_1;
  puVar8 = &local_108;
  do {
    uVar2 = *puVar8;
    uVar3 = puVar8[1];
    uVar4 = puVar8[2];
    uVar5 = puVar8[3];
    pFVar7->FaceIndex = (int)uVar2;
    pFVar7->Time = (float)(int)((ulonglong)uVar2 >> 0x20);
    pFVar7->Distance = (float)(int)uVar3;
    pFVar7->_padding_ = (int)((ulonglong)uVar3 >> 0x20);
    uVar2 = puVar8[4];
    uVar3 = puVar8[5];
    *(undefined8 *)&pFVar7->Location = uVar4;
    *(undefined8 *)&(pFVar7->Location).field_0x8 = uVar5;
    uVar4 = puVar8[6];
    uVar5 = puVar8[7];
    *(undefined8 *)&(pFVar7->Location).field_0x10 = uVar2;
    *(undefined8 *)&pFVar7->ImpactPoint = uVar3;
    uVar2 = puVar8[8];
    uVar3 = puVar8[9];
    *(undefined8 *)&(pFVar7->ImpactPoint).field_0x8 = uVar4;
    *(undefined8 *)&(pFVar7->ImpactPoint).field_0x10 = uVar5;
    uVar4 = puVar8[10];
    uVar5 = puVar8[0xb];
    *(undefined8 *)&pFVar7->Normal = uVar2;
    *(undefined8 *)&(pFVar7->Normal).field_0x8 = uVar3;
    uVar2 = puVar8[0xc];
    uVar3 = puVar8[0xd];
    *(undefined8 *)&(pFVar7->Normal).field_0x10 = uVar4;
    *(undefined8 *)&pFVar7->ImpactNormal = uVar5;
    uVar4 = puVar8[0xe];
    uVar5 = puVar8[0xf];
    *(undefined8 *)&(pFVar7->ImpactNormal).field_0x8 = uVar2;
    *(undefined8 *)&(pFVar7->ImpactNormal).field_0x10 = uVar3;
    *(undefined8 *)&pFVar7->TraceStart = uVar4;
    *(undefined8 *)&(pFVar7->TraceStart).field_0x8 = uVar5;
    lVar9 = lVar9 + -1;
    pFVar7 = (FHitResult *)&(pFVar7->TraceStart).field_0x10;
    puVar8 = puVar8 + 0x10;
  } while (lVar9 != 0);
  dVar6 = (param_2->field0_0x0)._s_0.Y;
  dVar1 = (param_2->field0_0x0)._s_0.Z;
  *(double *)&param_1->TraceStart = (param_2->field0_0x0)._s_0.X;
  *(double *)&(param_1->TraceStart).field_0x8 = dVar6;
  *(double *)&(param_1->TraceStart).field_0x10 = dVar1;
  dVar6 = (param_3->field0_0x0)._s_0.Y;
  dVar1 = (param_3->field0_0x0)._s_0.Z;
  *(double *)&param_1->TraceEnd = (param_3->field0_0x0)._s_0.X;
  *(double *)&(param_1->TraceEnd).field_0x8 = dVar6;
  *(double *)&(param_1->TraceEnd).field_0x10 = dVar1;
  return;
}

// ResetOutHits @ 147861090

void __cdecl
TSQTraits<ChaosInterface::FSweepHit,1,1>::ResetOutHits
          (TArray<FHitResult,TSizedDefaultAllocator<32>_> *param_1,TVector<double> *param_2,
          TVector<double> *param_3)

{
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x100,8,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
  }
  return;
}

// ResetOutHits @ 1478610d0

void __cdecl
TSQTraits<ChaosInterface::FSweepHit,1,0>::ResetOutHits
          (FHitResult *param_1,TVector<double> *param_2,TVector<double> *param_3)

{
  double dVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  FHitResult *pFVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 local_108;
  undefined4 local_64;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  memset(&local_108,0,0x100);
  lVar9 = 2;
  local_50 = 0;
  uStack_48 = 0;
  local_108._4_4_ = 0x3f800000;
  local_64 = 0xffffffff;
  local_40 = 0;
  uStack_38 = 0xffffffff;
  pFVar7 = param_1;
  puVar8 = &local_108;
  do {
    uVar2 = *puVar8;
    uVar3 = puVar8[1];
    uVar4 = puVar8[2];
    uVar5 = puVar8[3];
    pFVar7->FaceIndex = (int)uVar2;
    pFVar7->Time = (float)(int)((ulonglong)uVar2 >> 0x20);
    pFVar7->Distance = (float)(int)uVar3;
    pFVar7->_padding_ = (int)((ulonglong)uVar3 >> 0x20);
    uVar2 = puVar8[4];
    uVar3 = puVar8[5];
    *(undefined8 *)&pFVar7->Location = uVar4;
    *(undefined8 *)&(pFVar7->Location).field_0x8 = uVar5;
    uVar4 = puVar8[6];
    uVar5 = puVar8[7];
    *(undefined8 *)&(pFVar7->Location).field_0x10 = uVar2;
    *(undefined8 *)&pFVar7->ImpactPoint = uVar3;
    uVar2 = puVar8[8];
    uVar3 = puVar8[9];
    *(undefined8 *)&(pFVar7->ImpactPoint).field_0x8 = uVar4;
    *(undefined8 *)&(pFVar7->ImpactPoint).field_0x10 = uVar5;
    uVar4 = puVar8[10];
    uVar5 = puVar8[0xb];
    *(undefined8 *)&pFVar7->Normal = uVar2;
    *(undefined8 *)&(pFVar7->Normal).field_0x8 = uVar3;
    uVar2 = puVar8[0xc];
    uVar3 = puVar8[0xd];
    *(undefined8 *)&(pFVar7->Normal).field_0x10 = uVar4;
    *(undefined8 *)&pFVar7->ImpactNormal = uVar5;
    uVar4 = puVar8[0xe];
    uVar5 = puVar8[0xf];
    *(undefined8 *)&(pFVar7->ImpactNormal).field_0x8 = uVar2;
    *(undefined8 *)&(pFVar7->ImpactNormal).field_0x10 = uVar3;
    *(undefined8 *)&pFVar7->TraceStart = uVar4;
    *(undefined8 *)&(pFVar7->TraceStart).field_0x8 = uVar5;
    lVar9 = lVar9 + -1;
    pFVar7 = (FHitResult *)&(pFVar7->TraceStart).field_0x10;
    puVar8 = puVar8 + 0x10;
  } while (lVar9 != 0);
  dVar6 = (param_2->field0_0x0)._s_0.Y;
  dVar1 = (param_2->field0_0x0)._s_0.Z;
  *(double *)&param_1->TraceStart = (param_2->field0_0x0)._s_0.X;
  *(double *)&(param_1->TraceStart).field_0x8 = dVar6;
  *(double *)&(param_1->TraceStart).field_0x10 = dVar1;
  dVar6 = (param_3->field0_0x0)._s_0.Y;
  dVar1 = (param_3->field0_0x0)._s_0.Z;
  *(double *)&param_1->TraceEnd = (param_3->field0_0x0)._s_0.X;
  *(double *)&(param_1->TraceEnd).field_0x8 = dVar6;
  *(double *)&(param_1->TraceEnd).field_0x10 = dVar1;
  return;
}

