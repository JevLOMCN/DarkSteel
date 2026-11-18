// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FastGeoStreaming
// Functions: 13

// Call @ 14da23050

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FInstancedStaticMeshComponentHelper::CollectPSOPrecacheData<FFastGeoInstancedStaticMeshComponent>'::__l2::<lambda_1>,void,FStaticMeshLODResources_const_&,int,bool,TArray<FVertexElement,TFixedAllocator<17>_>_&>
::Call(void *param_1,FStaticMeshLODResources *param_2,int *param_3,bool *param_4,
      TArray<FVertexElement,TFixedAllocator<17>_> *param_5)

{
  `FInstancedStaticMeshComponentHelper::
  CollectPSOPrecacheData<FFastGeoInstancedStaticMeshComponent>'::__l2::<lambda_1>::operator()
            (param_1,param_2,*param_3,*param_4,param_5);
  return;
}

// Call @ 14da23070

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FInstancedStaticMeshComponentHelper::CollectPSOPrecacheData<FFastGeoProceduralISMComponent>'::__l2::<lambda_1>,void,FStaticMeshLODResources_const_&,int,bool,TArray<FVertexElement,TFixedAllocator<17>_>_&>
::Call(void *param_1,FStaticMeshLODResources *param_2,int *param_3,bool *param_4,
      TArray<FVertexElement,TFixedAllocator<17>_> *param_5)

{
  `FInstancedStaticMeshComponentHelper::CollectPSOPrecacheData<FFastGeoProceduralISMComponent>'::
  __l2::<lambda_1>::operator()(param_1,param_2,*param_3,*param_4,param_5);
  return;
}

// Call @ 14da23090

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FStaticMeshComponentHelper::CollectPSOPrecacheData<FFastGeoStaticMeshComponentBase>'::__l2::<lambda_1>,void,FStaticMeshLODResources_const_&,int,bool,TArray<FVertexElement,TFixedAllocator<17>_>_&>
::Call(void *param_1,FStaticMeshLODResources *param_2,int *param_3,bool *param_4,
      TArray<FVertexElement,TFixedAllocator<17>_> *param_5)

{
  `FStaticMeshComponentHelper::CollectPSOPrecacheData<FFastGeoStaticMeshComponentBase>'::__l2::
  <lambda_1>::operator()(param_1,param_2,*param_3,*param_4,param_5);
  return;
}

// Call @ 14da230b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FInstancedSkinnedMeshComponentHelper::GetComponentDesc<FFastGeoInstancedSkinnedMeshComponent,0>'::__l2::<lambda_1>,void,FInstanceUpdateChangeSet_&>
::Call(void *param_1,FInstanceUpdateChangeSet *param_2)

{
  int *piVar1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FRenderBounds,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  undefined8 uVar11;
  bool bVar12;
  int iVar13;
  byte bVar14;
  byte bVar15;
  ulonglong uVar16;
  undefined1 auStackY_2a8 [32];
  undefined4 auStack_258 [2];
  undefined8 uStack_250;
  FInstanceUpdateChangeSet *pFStack_248;
  int iStack_240;
  int iStack_23c;
  FInstanceUpdateChangeSet *pFStack_238;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTStack_230;
  FIdentityDeltaRange FStack_228;
  int iStack_224;
  uint uStack_220;
  int iStack_21c;
  TArray<FRenderBounds,TSizedDefaultAllocator<32>_> *pTStack_218;
  FIdentityDeltaRange FStack_210;
  int iStack_20c;
  uint uStack_208;
  int iStack_204;
  TArray<float,TSizedDefaultAllocator<32>_> *pTStack_200;
  ulonglong uStack_1f8;
  FInstanceUpdateChangeSet *pFStack_1f0;
  int iStack_1e8;
  uint uStack_1e4;
  int iStack_1e0;
  undefined4 uStack_1dc;
  undefined8 uStack_1d8;
  TArray<FRenderTransform,TSizedDefaultAllocator<32>_> *pTStack_1d0;
  FDeltaRange<1> FStack_1c8;
  int iStack_1b8;
  undefined4 uStack_1b4;
  int iStack_1b0;
  undefined4 uStack_1ac;
  code *pcStack_1a8;
  undefined8 *puStack_1a0;
  float *pfStack_198;
  int iStack_190;
  undefined4 uStack_18c;
  code *pcStack_188;
  undefined8 *puStack_180;
  code *pcStack_178;
  undefined8 *puStack_170;
  TArrayView<float,int> TStack_168;
  FWriter FStack_158;
  FWriter FStack_140;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  FWriter FStack_100;
  FWriter FStack_d8;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulonglong uStack_38;
  
  uStack_38 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  iStack_1b0 = param_2->NumSourceInstances;
  if (((param_2->bNeedFullUpdate == false) && (param_2->bUpdateAllInstanceTransforms == false)) &&
     (iStack_23c = (param_2->InstanceAttributeTracker).NumChanged[0] +
                   (param_2->InstanceAttributeTracker).NumChanged[1], iStack_23c != iStack_1b0)) {
    iStack_240 = (uint)iStack_240._1_3_ << 8;
  }
  else {
    iStack_240 = CONCAT31(iStack_240._1_3_,1);
    iStack_23c = iStack_1b0;
  }
  pTStack_1d0 = &param_2->Transforms;
  FStack_1c8.NumItems = iStack_23c;
  FStack_1c8._0_4_ = iStack_240;
  iStack_1b8 = 1;
  uStack_1b4 = CONCAT31(uStack_1b4._1_3_,1);
  pFStack_238 = param_2;
  FStack_1c8.Tracker = &param_2->InstanceAttributeTracker;
  if (((param_2->Transforms).ArrayNum != 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("!bIsEnabled || DeltaDataArray.IsEmpty()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceData\\InstanceUpdateChangeSet.h"
                          ,0x113,L""), bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  uStack_1d8 = *(undefined8 *)param_1;
  puStack_1a0 = &uStack_1d8;
  FStack_100.Setup._28_4_ = uStack_1b4;
  FStack_100.Setup.ElementStride = iStack_1b8;
  FStack_100.Setup.DeltaDataArray = pTStack_1d0;
  FStack_100.Setup.Delta.bFullUpdate = FStack_1c8.bFullUpdate;
  FStack_100.Setup.Delta._1_3_ = FStack_1c8._1_3_;
  FStack_100.Setup.Delta.NumItems = FStack_1c8.NumItems;
  FStack_100.Setup._36_4_ = uStack_1ac;
  FStack_100.Setup.NumInstances = iStack_1b0;
  pcStack_1a8 = TFunctionRefCaller<``FInstancedSkinnedMeshComponentHelper::GetComponentDesc<FFastGeoInstancedSkinnedMeshComponent,0>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,FRenderTransform,int>
                ::Call;
  FStack_100.Setup.Delta.Tracker = FStack_1c8.Tracker;
  TDeltaSetup<FRenderTransform,FInstanceAttributeTracker::FDeltaRange<1>_>::FWriter::Gather
            (&FStack_100,(TFunctionRef<FRenderTransform___cdecl(int)> *)&pcStack_1a8);
  iStack_1e8 = param_2->NumCustomDataFloats;
  bVar15 = *(byte *)&param_2->Flags >> 1;
  if ((bVar15 & 1) == 0) {
    pTStack_200 = &param_2->PerInstanceCustomData;
    uStack_250 = 1;
    pFStack_248 = (FInstanceUpdateChangeSet *)0x0;
    iStack_1e0 = param_2->NumSourceInstances;
    uStack_1f8 = 1;
    pFStack_1f0 = (FInstanceUpdateChangeSet *)0x0;
    uStack_1e4 = CONCAT31(uStack_1e4._1_3_,bVar15) & 0xffffff01;
  }
  else {
    iStack_1e0 = param_2->NumSourceInstances;
    if (((param_2->bNeedFullUpdate == false) && ((*(byte *)&param_2->ForceFullFlags >> 1 & 1) == 0))
       && (iVar13 = (param_2->InstanceAttributeTracker).NumChanged[0] +
                    (param_2->InstanceAttributeTracker).NumChanged[2], iVar13 != iStack_1e0)) {
      uStack_250 = CONCAT44(iVar13,(undefined4)uStack_250) & 0xffffffffffffff00;
    }
    else {
      uStack_250 = CONCAT44(iStack_1e0,(undefined4)uStack_250);
      uStack_250 = CONCAT71(uStack_250._1_7_,1);
    }
    pTStack_200 = &param_2->PerInstanceCustomData;
    uStack_1e4 = CONCAT31(uStack_1e4._1_3_,bVar15) & 0xffffff01;
    uStack_1f8 = uStack_250;
    pFStack_248 = param_2;
    pFStack_1f0 = param_2;
    if (((param_2->PerInstanceCustomData).ArrayNum != 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("!bIsEnabled || DeltaDataArray.IsEmpty()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceData\\InstanceUpdateChangeSet.h"
                            ,0x113,L""), bVar12)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  lVar7 = *(longlong *)param_1;
  FStack_d8.Setup._28_4_ = uStack_1e4;
  FStack_d8.Setup.ElementStride = iStack_1e8;
  pfStack_198 = *(float **)(lVar7 + 0x418);
  iVar13 = *(int *)(lVar7 + 0x420);
  iVar5 = *(int *)(lVar7 + 0x410);
  FStack_d8.Setup.DeltaDataArray = pTStack_200;
  FStack_d8.Setup.Delta.bFullUpdate = (bool)(undefined1)uStack_1f8;
  FStack_d8.Setup.Delta._1_3_ = uStack_1f8._1_3_;
  FStack_d8.Setup.Delta.NumItems = uStack_1f8._4_4_;
  FStack_d8.Setup._36_4_ = uStack_1dc;
  FStack_d8.Setup.NumInstances = iStack_1e0;
  FStack_d8.Setup.Delta.Tracker = &pFStack_1f0->InstanceAttributeTracker;
  if ((iVar13 < 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  TStack_168._12_4_ = uStack_18c;
  TStack_168.ArrayNum = iVar13;
  TStack_168.DataPtr = pfStack_198;
  iStack_190 = iVar13;
  TDeltaSetup<float,FInstanceAttributeTracker::FDeltaRange<2>_>::FWriter::Gather<float>
            (&FStack_d8,&TStack_168,iVar5);
  bVar15 = *(byte *)&param_2->Flags >> 3;
  bVar14 = bVar15 & 1;
  if (*(longlong *)((longlong)param_1 + 0x70) == 0) {
    if (bVar14 == 0) {
      auStack_258[0] = 0;
    }
    else {
      uVar6 = param_2->NumSourceInstances;
      pTVar2 = &param_2->InstanceSkinningData;
      uVar16 = (ulonglong)uVar6;
      if (((param_2->InstanceSkinningData).ArrayNum != 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("!bIsEnabled || DeltaDataArray.IsEmpty()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceData\\InstanceUpdateChangeSet.h"
                              ,0x113,L""), bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      auStack_258[0] = 0;
      if (uVar6 == 0) {
        (param_2->InstanceSkinningData).ArrayNum = 0;
        if ((param_2->InstanceSkinningData).ArrayMax < 0) {
          ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0,&pTVar2->AllocatorInstance,0,&(param_2->InstanceSkinningData).ArrayMax);
        }
      }
      else {
        if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
          OnInvalidArrayNum((ulonglong)uVar6);
        }
        piVar1 = &(param_2->InstanceSkinningData).ArrayMax;
        (param_2->InstanceSkinningData).ArrayNum = 0;
        if (*piVar1 != uVar6) {
          ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,uVar6,&pTVar2->AllocatorInstance,0,piVar1);
        }
        if (0 < (int)uVar6) {
          do {
            pFVar4 = (pTVar2->AllocatorInstance).Data;
            if (((pFVar4 <= (FScriptContainerElement *)auStack_258) &&
                ((FScriptContainerElement *)auStack_258 < pFVar4 + (longlong)*piVar1 * 4)) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar12)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            iVar13 = (param_2->InstanceSkinningData).ArrayNum;
            if (iVar13 == *piVar1) {
              iVar13 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&pTVar2->AllocatorInstance,piVar1);
              (param_2->InstanceSkinningData).ArrayNum = iVar13;
            }
            (param_2->InstanceSkinningData).ArrayNum = iVar13 + 1;
            *(undefined4 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar13 * 4) =
                 auStack_258[0];
            uVar16 = uVar16 - 1;
          } while (uVar16 != 0);
        }
      }
    }
  }
  else {
    iStack_224 = 1;
    pTStack_230 = &param_2->InstanceSkinningData;
    iStack_21c = param_2->NumSourceInstances;
    uStack_220 = CONCAT31(uStack_220._1_3_,bVar15) & 0xffffff01;
    if (bVar14 == 0) {
      FStack_228.NumItems = 0;
    }
    else {
      FStack_228.NumItems = iStack_21c;
      if (((param_2->InstanceSkinningData).ArrayNum != 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("!bIsEnabled || DeltaDataArray.IsEmpty()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceData\\InstanceUpdateChangeSet.h"
                              ,0x113,L""), bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    FStack_158.Setup.ElementStride = iStack_224;
    FStack_158.Setup.Delta.NumItems = FStack_228.NumItems;
    uStack_a8 = *(undefined8 *)param_1;
    FStack_158.Setup.NumInstances = iStack_21c;
    FStack_158.Setup._16_4_ = uStack_220;
    FStack_158.Setup.DeltaDataArray = pTStack_230;
    uStack_98 = *(undefined8 *)((longlong)param_1 + 0x10);
    uStack_90 = *(undefined8 *)((longlong)param_1 + 0x18);
    uStack_a0 = *(undefined8 *)((longlong)param_1 + 0x70);
    uStack_88 = *(undefined8 *)((longlong)param_1 + 0x20);
    uStack_80 = *(undefined8 *)((longlong)param_1 + 0x28);
    uStack_78 = *(undefined8 *)((longlong)param_1 + 0x30);
    uStack_70 = *(undefined8 *)((longlong)param_1 + 0x38);
    puStack_180 = &uStack_a8;
    uStack_68 = *(undefined8 *)((longlong)param_1 + 0x40);
    uStack_60 = *(undefined8 *)((longlong)param_1 + 0x48);
    uStack_58 = *(undefined8 *)((longlong)param_1 + 0x50);
    uStack_50 = *(undefined8 *)((longlong)param_1 + 0x58);
    uStack_48 = *(undefined8 *)((longlong)param_1 + 0x60);
    uStack_40 = *(undefined8 *)((longlong)param_1 + 0x68);
    pcStack_188 = TFunctionRefCaller<``FInstancedSkinnedMeshComponentHelper::GetComponentDesc<FFastGeoInstancedSkinnedMeshComponent,0>'::__l2::<lambda_1>::operator()'::__l5::<lambda_2>,unsigned_int,int>
                  ::Call;
    TDeltaSetup<unsigned_int,FIdentityDeltaRange>::FWriter::Gather
              (&FStack_158,(TFunctionRef<unsigned_int___cdecl(int)> *)&pcStack_188);
  }
  if ((*(longlong *)((longlong)param_1 + 0x70) == 0) || (*(short *)((longlong)param_1 + 0x90) == 0))
  {
    if ((*(byte *)&param_2->Flags >> 5 & 1) != 0) {
      uVar6 = param_2->NumSourceInstances;
      pTVar3 = &param_2->InstanceLocalBounds;
      uVar16 = (ulonglong)uVar6;
      if (((param_2->InstanceLocalBounds).ArrayNum != 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("!bIsEnabled || DeltaDataArray.IsEmpty()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceData\\InstanceUpdateChangeSet.h"
                              ,0x113,L""), bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar4 = (FScriptContainerElement *)((longlong)param_1 + 0x78);
      if (uVar6 == 0) {
        (param_2->InstanceLocalBounds).ArrayNum = 0;
        if ((param_2->InstanceLocalBounds).ArrayMax < 0) {
          ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,4,0,&pTVar3->AllocatorInstance,0,&(param_2->InstanceLocalBounds).ArrayMax)
          ;
        }
      }
      else {
        if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
          OnInvalidArrayNum((ulonglong)uVar6);
        }
        piVar1 = &(param_2->InstanceLocalBounds).ArrayMax;
        (param_2->InstanceLocalBounds).ArrayNum = 0;
        if (*piVar1 != uVar6) {
          ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,4,uVar6,&pTVar3->AllocatorInstance,0,piVar1);
        }
        if (0 < (int)uVar6) {
          do {
            pFVar8 = (pTVar3->AllocatorInstance).Data;
            if (((pFVar8 <= pFVar4) && (pFVar4 < pFVar8 + (longlong)*piVar1 * 0x18)) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar12)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            iVar13 = (param_2->InstanceLocalBounds).ArrayNum;
            if (iVar13 == *piVar1) {
              iVar13 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x418,&pTVar3->AllocatorInstance,piVar1);
              (param_2->InstanceLocalBounds).ArrayNum = iVar13;
            }
            (param_2->InstanceLocalBounds).ArrayNum = iVar13 + 1;
            uVar11 = *(undefined8 *)((longlong)param_1 + 0x80);
            pFVar9 = (pTVar3->AllocatorInstance).Data;
            pFVar8 = pFVar9 + (longlong)iVar13 * 0x18;
            *(undefined8 *)pFVar8 = *(undefined8 *)pFVar4;
            *(undefined8 *)(pFVar8 + 8) = uVar11;
            *(undefined8 *)(pFVar9 + (longlong)iVar13 * 0x18 + 0x10) =
                 *(undefined8 *)((longlong)param_1 + 0x88);
            uVar16 = uVar16 - 1;
          } while (uVar16 != 0);
        }
      }
    }
  }
  else {
    pTStack_218 = &param_2->InstanceLocalBounds;
    bVar15 = *(byte *)&param_2->Flags >> 5;
    iStack_204 = param_2->NumSourceInstances;
    uStack_208 = CONCAT31(uStack_208._1_3_,bVar15) & 0xffffff01;
    iStack_20c = 1;
    if ((bVar15 & 1) == 0) {
      FStack_210.NumItems = 0;
    }
    else {
      FStack_210.NumItems = iStack_204;
      if (((param_2->InstanceLocalBounds).ArrayNum != 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("!bIsEnabled || DeltaDataArray.IsEmpty()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceData\\InstanceUpdateChangeSet.h"
                              ,0x113,L""), bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    uStack_128 = *(undefined8 *)param_1;
    FStack_140.Setup.ElementStride = iStack_20c;
    FStack_140.Setup.Delta.NumItems = FStack_210.NumItems;
    FStack_140.Setup.NumInstances = iStack_204;
    FStack_140.Setup._16_4_ = uStack_208;
    uStack_120 = *(undefined8 *)((longlong)param_1 + 0x70);
    puStack_170 = &uStack_128;
    FStack_140.Setup.DeltaDataArray = pTStack_218;
    uStack_118 = *(undefined8 *)((longlong)param_1 + 0x78);
    uStack_110 = *(undefined8 *)((longlong)param_1 + 0x80);
    pcStack_178 = TFunctionRefCaller<``FInstancedSkinnedMeshComponentHelper::GetComponentDesc<FFastGeoInstancedSkinnedMeshComponent,0>'::__l2::<lambda_1>::operator()'::__l10::<lambda_3>,FRenderBounds,int>
                  ::Call;
    uStack_108 = *(undefined8 *)((longlong)param_1 + 0x88);
    TDeltaSetup<FRenderBounds,FIdentityDeltaRange>::FWriter::Gather
              (&FStack_140,(TFunctionRef<FRenderBounds___cdecl(int)> *)&pcStack_178);
  }
  return;
}

// Call @ 14da230c0

UMaterialInterface * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FStaticMeshComponentHelper::GetUsedRayTracingOnlyMaterials<FFastGeoStaticMeshComponentBase>'::__l2::<lambda_1>,UMaterialInterface_*,int>
::Call(void *param_1,int *param_2)

{
  UMaterialInterface *pUVar1;
  
  pUVar1 = `FStaticMeshComponentHelper::
           GetUsedRayTracingOnlyMaterials<FFastGeoStaticMeshComponentBase>'::__l2::<lambda_1>::
           operator()(param_1,*param_2);
  return pUVar1;
}

// Call @ 14da230d0

FRenderTransform * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FInstancedSkinnedMeshComponentHelper::GetComponentDesc<FFastGeoInstancedSkinnedMeshComponent,0>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,FRenderTransform,int>
::Call(FRenderTransform *__return_storage_ptr__,void *param_1,int *param_2)

{
  ``FInstancedSkinnedMeshComponentHelper::GetComponentDesc<FFastGeoInstancedSkinnedMeshComponent,0>'
  ::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()
            (param_1,__return_storage_ptr__,*param_2);
  return __return_storage_ptr__;
}

// Call @ 14da23100

UMaterialInterface * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FStaticMeshComponentHelper::GetUsedMaterials<FFastGeoStaticMeshComponentBase>'::__l5::<lambda_1>,UMaterialInterface_*,int>
::Call(void *param_1,int *param_2)

{
  UMaterialInterface *pUVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014da23108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pUVar1 = (UMaterialInterface *)
           (**(code **)(**(longlong **)param_1 + 0x58))(*(longlong **)param_1,*param_2);
  return pUVar1;
}

// Call @ 14da23120

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UFastGeoContainer::OnCreateRenderState_Concurrent'::__l5::<lambda_1>,void,int>::
Call(void *param_1,int *param_2)

{
  `UFastGeoContainer::OnCreateRenderState_Concurrent'::__l5::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 14da23130

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FFastGeoComponentCluster::UpdateVisibility_Internal'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  undefined4 uVar3;
  code *pcVar4;
  void *pvVar5;
  int iVar6;
  undefined4 uVar7;
  bool bVar8;
  UFastGeoContainer *this;
  FFastGeoComponentCluster *pFVar9;
  FTaskBase *this_00;
  FTask *pFVar10;
  undefined8 uVar11;
  bool bVar12;
  void **appvStackX_18 [2];
  void *pvStack_78;
  undefined8 uStack_70;
  longlong lStack_68;
  longlong lStack_60;
  
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId170,
               "FFastGeoComponentCluster::UpdateVisibility_RenderThread",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoComponentCluster.cpp"
               ,0xaa);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId170);
  }
  this = (UFastGeoContainer *)FWeakObjectPtr::Get(param_1);
  if ((this != (UFastGeoContainer *)0x0) &&
     (pFVar9 = UFastGeoContainer::GetComponentCluster
                         (this,*(uint *)((longlong)param_1 + 8),*(int *)((longlong)param_1 + 0xc)),
     pFVar9 != (FFastGeoComponentCluster *)0x0)) {
    appvStackX_18[0] = &pvStack_78;
    uVar11 = 0;
    pvStack_78 = (void *)0x0;
    uStack_70 = 0;
    ``FFastGeoComponentCluster::UpdateVisibility_Internal'::__l5::<lambda_1>::operator()'::__l2::
    <lambda_1>::operator()
              (appvStackX_18,
               (TArray<FFastGeoPrimitiveComponent_*,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_1 + 0x18),true);
    ``FFastGeoComponentCluster::UpdateVisibility_Internal'::__l5::<lambda_1>::operator()'::__l2::
    <lambda_1>::operator()
              (appvStackX_18,
               (TArray<FFastGeoPrimitiveComponent_*,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_1 + 0x28),false);
    pvVar5 = pvStack_78;
    iVar6 = (int)uStack_70;
    if ((int)uStack_70 != 0) {
      uVar7 = uStack_70._4_4_;
      lStack_68 = *(longlong *)param_1;
      lStack_60 = *(longlong *)((longlong)param_1 + 8);
      uVar3 = *(undefined4 *)((longlong)param_1 + 0x10);
      pvStack_78 = (void *)0x0;
      uStack_70 = 0;
      this_00 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                            *)&Tasks::Private::SmallTaskAllocator);
      if (this_00 == (FTaskBase *)0x0) {
        Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x100);
        if (pvVar5 != (void *)0x0) {
          FMemory::Free(pvVar5);
        }
      }
      else {
        Tasks::Private::FTaskBase::FTaskBase(this_00,2,true);
        this_00->_padding_ =
             (longlong)
             &Tasks::Private::
              TExecutableTaskBase<``FFastGeoComponentCluster::UpdateVisibility_Internal'::`5'::<lambda_1>::operator()'::`8'::<lambda_2>,void,void>
              ::_vftable_;
        if (((*(ulonglong *)&(this_00->LowLevelTask).field_0x38 & 0x20) == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsCompleted()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                               ,0x1dd,L"State: %d"), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        (**(code **)(*(longlong *)&(this_00->LowLevelTask).field_0x28 + 0x18))
                  (&(this_00->LowLevelTask).field_0x28,&this_00->LowLevelTask);
        *(FTaskBase **)&this_00->LowLevelTask = this_00;
        *(undefined ***)&(this_00->LowLevelTask).field_0x28 =
             &
             ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
        ;
        *(FTaskBase **)&(this_00->LowLevelTask).field_0x8 = this_00;
        pFVar10 = LowLevelTasks::FTask::GetActiveTask();
        if (pFVar10 != (FTask *)0x0) {
          uVar11 = *(undefined8 *)&pFVar10->field_0x30;
        }
        *(undefined8 *)&(this_00->LowLevelTask).field_0x30 = uVar11;
        *(undefined8 *)&(this_00->LowLevelTask).field_0x38 = 0xc8000054b1584c00;
        this_00->ExtendedPriority = GameThreadNormalPri;
        FInheritedContextBase::CaptureInheritedContext((FInheritedContextBase *)&this_00->_padding_)
        ;
        *(undefined4 *)&this_00[1]._padding_ = uVar3;
        this_00[1]._padding_ = lStack_68;
        this_00[1]._padding_ = lStack_60;
        this_00[1]._padding_ = (longlong)pvVar5;
        *(undefined4 *)((longlong)&this_00[1]._padding_ + 4) = uVar7;
        *(int *)&this_00[1]._padding_ = iVar6;
        this_00->_padding_ =
             (longlong)
             &Tasks::Private::
              TExecutableTask<``FFastGeoComponentCluster::UpdateVisibility_Internal'::`5'::<lambda_1>::operator()'::`8'::<lambda_2>_>
              ::_vftable_;
        Tasks::Private::FTaskBase::TryLaunch(this_00,0x100);
        LOCK();
        paVar1 = &this_00->RefCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<unsigned_int>)0x1) {
          (**(code **)this_00->_padding_)(this_00,1);
        }
      }
    }
    if (pvStack_78 != (void *)0x0) {
      FMemory::Free(pvStack_78);
    }
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Call @ 14da23140

uint __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FInstancedSkinnedMeshComponentHelper::GetComponentDesc<FFastGeoInstancedSkinnedMeshComponent,0>'::__l2::<lambda_1>::operator()'::__l5::<lambda_2>,unsigned_int,int>
::Call(void *param_1,int *param_2)

{
  uint uVar1;
  
  uVar1 = ``FInstancedSkinnedMeshComponentHelper::
          GetComponentDesc<FFastGeoInstancedSkinnedMeshComponent,0>'::__l2::<lambda_1>::operator()'
          ::__l5::<lambda_2>::operator()(param_1,*param_2);
  return uVar1;
}

// Call @ 14da23150

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UFastGeoWorldSubsystem::UFastGeoWorldSubsystem'::__l5::<lambda_3>,void>::Call
          (void *param_1)

{
  UFastGeoWorldSubsystem::bEnableDebugView = true;
  `UFastGeoWorldSubsystem::UFastGeoWorldSubsystem'::__l2::<lambda_1>::operator()(*(void **)param_1);
  return;
}

// Call @ 14da23170

FRenderBounds * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FInstancedSkinnedMeshComponentHelper::GetComponentDesc<FFastGeoInstancedSkinnedMeshComponent,0>'::__l2::<lambda_1>::operator()'::__l10::<lambda_3>,FRenderBounds,int>
::Call(FRenderBounds *__return_storage_ptr__,void *param_1,int *param_2)

{
  ``FInstancedSkinnedMeshComponentHelper::GetComponentDesc<FFastGeoInstancedSkinnedMeshComponent,0>'
  ::__l2::<lambda_1>::operator()'::__l10::<lambda_3>::operator()
            (param_1,__return_storage_ptr__,*param_2);
  return __return_storage_ptr__;
}

// Call @ 14da231a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UFastGeoWorldSubsystem::UFastGeoWorldSubsystem'::__l5::<lambda_4>,void>::Call
          (void *param_1)

{
  UFastGeoWorldSubsystem::bEnableDebugView = false;
  `UFastGeoWorldSubsystem::UFastGeoWorldSubsystem'::__l2::<lambda_1>::operator()(*(void **)param_1);
  return;
}

