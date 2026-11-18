// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 18

// ApplyAttributeChanges<FIdentityIndexRemap> @ 147d60590

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FISMCInstanceDataSceneProxy::ApplyAttributeChanges<FIdentityIndexRemap>
          (FISMCInstanceDataSceneProxy *this,FISMInstanceUpdateChangeSet *param_1,
          FIdentityIndexRemap *param_2,FWriteView *param_3)

{
  int iVar1;
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar4;
  code *pcVar5;
  bool bVar6;
  undefined8 uVar7;
  longlong *plVar8;
  int iVar9;
  int *piVar10;
  TArray<float,TSizedDefaultAllocator<32>_> local_38;
  FDeltaRange<2> local_28;
  
  if ((param_1->_padding_ & 0x20000) == 0) {
    *param_3->NumCustomDataFloats = 0;
    pTVar4 = param_3->InstanceCustomData;
    pTVar4->ArrayNum = 0;
    if (pTVar4->ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&pTVar4->AllocatorInstance,0,&pTVar4->ArrayMax);
    }
    goto LAB_147d6066d;
  }
  *param_3->NumCustomDataFloats = (int)param_1->_padding_;
  if (((int)param_1->_padding_ == 0) || ((param_1->_padding_ & 0x20000) == 0)) {
    local_28.bFullUpdate = false;
    local_28._1_3_ = 0;
    local_28.NumItems = 0;
    local_28.Tracker = (FInstanceAttributeTracker *)0x0;
LAB_147d60614:
    local_28.bFullUpdate = true;
  }
  else {
    iVar1 = (int)param_1->_padding_;
    local_28.NumItems = iVar1;
    local_28.Tracker = (FInstanceAttributeTracker *)param_1;
    if (((char)param_1->_padding_ != '\0') ||
       (iVar9 = (int)param_1->_padding_ + (int)param_1->_padding_, iVar9 == iVar1))
    goto LAB_147d60614;
    local_28._0_8_ = CONCAT44(iVar9,local_28._0_4_) & 0xffffffffffffff00;
  }
  Scatter<FInstanceAttributeTracker::FDeltaRange<2>,float,FIdentityIndexRemap>
            (&local_28,param_3->InstanceCustomData,param_1->PostUpdateNumInstances,
             (TArray<float,TSizedDefaultAllocator<32>_> *)&param_1->_padding_,param_2,
             *param_3->NumCustomDataFloats);
LAB_147d6066d:
  plVar8 = &param_1->_padding_;
  pTVar2 = param_3->InstanceLightShadowUVBias;
  if ((*(byte *)((longlong)&param_1->_padding_ + 2) >> 4 & 1) == 0) {
    pTVar2->ArrayNum = 0;
    if (pTVar2->ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,0x10,0,&pTVar2->AllocatorInstance,0,&pTVar2->ArrayMax);
    }
  }
  else {
    if ((int)param_1->_padding_ != param_1->PostUpdateNumInstances) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InSource.Num() == DestNumElements * ElementStride",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstanceData\\InstanceDataUpdateUtils.h"
                         ,0x2a,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (pTVar2 != (TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)plVar8) {
      pFVar3 = (pTVar2->AllocatorInstance).Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)*plVar8;
      *plVar8 = 0;
      pTVar2->ArrayNum = (int)param_1->_padding_;
      pTVar2->ArrayMax = *(int *)((longlong)&param_1->_padding_ + 4);
      param_1->_padding_ = 0;
    }
  }
  piVar10 = &param_1->PostUpdateNumInstances;
  if ((param_1->_padding_ & 0x10000) == 0) {
    pTVar4 = param_3->InstanceRandomIDs;
    pTVar4->ArrayNum = 0;
    if (pTVar4->ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&pTVar4->AllocatorInstance,0,&pTVar4->ArrayMax);
    }
  }
  else {
    TArray<float,TSizedDefaultAllocator<32>_>::SetNumZeroed
              (param_3->InstanceRandomIDs,*piVar10,Default);
    if (param_1->_padding_ != 0) {
      local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38.ArrayNum = 0;
      local_38.ArrayMax = 0;
      TArray<float,TSizedDefaultAllocator<32>_>::SetNumZeroed(&local_38,*piVar10,Default);
      UE::Core::Private::Function::CheckCallable((void *)param_1->_padding_);
      pcVar5 = (code *)param_1->_padding_;
      plVar8 = &param_1->_padding_;
      if ((longlong *)param_1->_padding_ != (longlong *)0x0) {
        plVar8 = (longlong *)param_1->_padding_;
      }
      uVar7 = (**(code **)(*plVar8 + 8))();
      (*pcVar5)(uVar7,&local_38);
      pTVar4 = param_3->InstanceRandomIDs;
      if (local_38.ArrayNum != *piVar10) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InSource.Num() == DestNumElements * ElementStride",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstanceData\\InstanceDataUpdateUtils.h"
                           ,0x2a,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      if (pTVar4 != &local_38) {
        pFVar3 = (pTVar4->AllocatorInstance).Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        (pTVar4->AllocatorInstance).Data = local_38.AllocatorInstance.Data;
        local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        pTVar4->ArrayNum = local_38.ArrayNum;
        pTVar4->ArrayMax = local_38.ArrayMax;
        local_38.ArrayNum = 0;
        local_38.ArrayMax = 0;
      }
      if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// ApplyAttributeChanges<FReorderTableIndexRemap> @ 147d60870

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FISMCInstanceDataSceneProxy::ApplyAttributeChanges<FReorderTableIndexRemap>
          (FISMCInstanceDataSceneProxy *this,FISMInstanceUpdateChangeSet *param_1,
          FReorderTableIndexRemap *param_2,FWriteView *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *pTVar3;
  code *pcVar4;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar5;
  bool bVar6;
  uint uVar7;
  undefined8 uVar8;
  uint uVar9;
  longlong *plVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar14;
  FIdentityDeltaRange local_res10 [2];
  FDeltaRange<2> local_48;
  TArray<float,TSizedDefaultAllocator<32>_> local_38;
  
  uVar12 = 0;
  if ((param_1->_padding_ & 0x20000) == 0) {
    *param_3->NumCustomDataFloats = 0;
    pTVar5 = param_3->InstanceCustomData;
    pTVar5->ArrayNum = 0;
    if (pTVar5->ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&pTVar5->AllocatorInstance,0,&pTVar5->ArrayMax);
    }
    goto LAB_147d60952;
  }
  *param_3->NumCustomDataFloats = (int)param_1->_padding_;
  if (((int)param_1->_padding_ == 0) || ((param_1->_padding_ & 0x20000) == 0)) {
    local_48.bFullUpdate = false;
    local_48._1_3_ = 0;
    local_48.NumItems = 0;
    local_48.Tracker = (FInstanceAttributeTracker *)0x0;
LAB_147d608ef:
    local_48.bFullUpdate = true;
  }
  else {
    iVar2 = (int)param_1->_padding_;
    local_48.NumItems = iVar2;
    local_48.Tracker = (FInstanceAttributeTracker *)param_1;
    if (((char)param_1->_padding_ != '\0') ||
       (iVar14 = (int)param_1->_padding_ + (int)param_1->_padding_, iVar14 == iVar2))
    goto LAB_147d608ef;
    local_48._0_8_ = CONCAT44(iVar14,local_48._0_4_) & 0xffffffffffffff00;
  }
  Scatter<FInstanceAttributeTracker::FDeltaRange<2>,float,FReorderTableIndexRemap>
            (&local_48,param_3->InstanceCustomData,param_1->PostUpdateNumInstances,
             (TArray<float,TSizedDefaultAllocator<32>_> *)&param_1->_padding_,param_2,
             *param_3->NumCustomDataFloats);
LAB_147d60952:
  pTVar3 = param_3->InstanceLightShadowUVBias;
  local_res10[0].NumItems = (int)param_1->_padding_;
  if ((*(byte *)((longlong)&param_1->_padding_ + 2) >> 4 & 1) == 0) {
    pTVar3->ArrayNum = 0;
    if (pTVar3->ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,0x10,0,&pTVar3->AllocatorInstance,0,&pTVar3->ArrayMax);
    }
  }
  else {
    Scatter<FIdentityDeltaRange,UE::Math::TVector4<float>,FReorderTableIndexRemap>
              (local_res10,pTVar3,param_1->PostUpdateNumInstances,
               (TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)&param_1->_padding_,
               param_2,1);
  }
  if ((param_1->_padding_ & 0x10000) == 0) {
    pTVar5 = param_3->InstanceRandomIDs;
    pTVar5->ArrayNum = 0;
    if (pTVar5->ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&pTVar5->AllocatorInstance,0,&pTVar5->ArrayMax);
    }
  }
  else {
    TArray<float,TSizedDefaultAllocator<32>_>::SetNumZeroed
              (param_3->InstanceRandomIDs,param_1->PostUpdateNumInstances,Default);
    if (param_1->_padding_ != 0) {
      local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38.ArrayNum = 0;
      local_38.ArrayMax = 0;
      TArray<float,TSizedDefaultAllocator<32>_>::SetNumZeroed
                (&local_38,param_1->PostUpdateNumInstances,Default);
      UE::Core::Private::Function::CheckCallable((void *)param_1->_padding_);
      pcVar4 = (code *)param_1->_padding_;
      plVar10 = &param_1->_padding_;
      if ((longlong *)param_1->_padding_ != (longlong *)0x0) {
        plVar10 = (longlong *)param_1->_padding_;
      }
      uVar8 = (**(code **)(*plVar10 + 8))();
      (*pcVar4)(uVar8,&local_38);
      pTVar5 = param_3->InstanceRandomIDs;
      iVar2 = local_38.ArrayNum;
      TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (pTVar5,param_1->PostUpdateNumInstances,Default);
      uVar13 = uVar12;
      if (0 < iVar2) {
        do {
          uVar11 = (uint)uVar12;
          uVar7 = FReorderTableIndexRemap::operator[](param_2,uVar11);
          if (uVar7 != 0xffffffff) {
            uVar9 = 0;
            if ((int)uVar11 < local_38.ArrayNum) {
              uVar9 = ~uVar11 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar1 = local_38.AllocatorInstance.Data + uVar13 * 4;
            uVar9 = 0;
            if ((int)uVar7 < pTVar5->ArrayNum) {
              uVar9 = ~uVar7 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            *(undefined4 *)((pTVar5->AllocatorInstance).Data + (longlong)(int)uVar7 * 4) =
                 *(undefined4 *)pFVar1;
          }
          uVar12 = (ulonglong)(uVar11 + 1);
          uVar13 = uVar13 + 1;
        } while ((int)(uVar11 + 1) < iVar2);
      }
      if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// ApplyAttributeChanges<FSrcIndexRemap> @ 147d60bb0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FISMCInstanceDataSceneProxy::ApplyAttributeChanges<FSrcIndexRemap>
          (FISMCInstanceDataSceneProxy *this,FISMInstanceUpdateChangeSet *param_1,
          FSrcIndexRemap *param_2,FWriteView *param_3)

{
  int iVar1;
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar4;
  undefined8 uVar5;
  longlong *plVar6;
  int iVar7;
  FIdentityDeltaRange local_res10 [2];
  undefined1 local_38 [8];
  FISMInstanceUpdateChangeSet *pFStack_30;
  
  if ((param_1->_padding_ & 0x20000) == 0) {
    *param_3->NumCustomDataFloats = 0;
    pTVar4 = param_3->InstanceCustomData;
    pTVar4->ArrayNum = 0;
    if (pTVar4->ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&pTVar4->AllocatorInstance,0,&pTVar4->ArrayMax);
    }
    goto LAB_147d60c8e;
  }
  *param_3->NumCustomDataFloats = (int)param_1->_padding_;
  if (((int)param_1->_padding_ == 0) || ((param_1->_padding_ & 0x20000) == 0)) {
    local_38 = (undefined1  [8])0x0;
    pFStack_30 = (FISMInstanceUpdateChangeSet *)0x0;
LAB_147d60c2d:
    local_38[0] = 1;
  }
  else {
    iVar1 = (int)param_1->_padding_;
    local_38._4_4_ = iVar1;
    pFStack_30 = param_1;
    if (((char)param_1->_padding_ != '\0') ||
       (iVar7 = (int)param_1->_padding_ + (int)param_1->_padding_, iVar7 == iVar1))
    goto LAB_147d60c2d;
    local_38 = (undefined1  [8])(CONCAT44(iVar7,local_38._0_4_) & 0xffffffffffffff00);
  }
  Scatter<FInstanceAttributeTracker::FDeltaRange<2>,float,FSrcIndexRemap>
            ((FDeltaRange<2> *)local_38,param_3->InstanceCustomData,param_1->PostUpdateNumInstances,
             (TArray<float,TSizedDefaultAllocator<32>_> *)&param_1->_padding_,param_2,
             *param_3->NumCustomDataFloats);
LAB_147d60c8e:
  pTVar2 = param_3->InstanceLightShadowUVBias;
  local_res10[0].NumItems = (int)param_1->_padding_;
  if ((*(byte *)((longlong)&param_1->_padding_ + 2) >> 4 & 1) == 0) {
    pTVar2->ArrayNum = 0;
    if (pTVar2->ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,0x10,0,&pTVar2->AllocatorInstance,0,&pTVar2->ArrayMax);
    }
  }
  else {
    Scatter<FIdentityDeltaRange,UE::Math::TVector4<float>,FSrcIndexRemap>
              (local_res10,pTVar2,param_1->PostUpdateNumInstances,
               (TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)&param_1->_padding_,
               param_2,1);
  }
  if ((param_1->_padding_ & 0x10000) == 0) {
    pTVar4 = param_3->InstanceRandomIDs;
    pTVar4->ArrayNum = 0;
    if (pTVar4->ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&pTVar4->AllocatorInstance,0,&pTVar4->ArrayMax);
    }
  }
  else {
    TArray<float,TSizedDefaultAllocator<32>_>::SetNumZeroed
              (param_3->InstanceRandomIDs,param_1->PostUpdateNumInstances,Default);
    if (param_1->_padding_ != 0) {
      local_38 = (undefined1  [8])0x0;
      pFStack_30 = (FISMInstanceUpdateChangeSet *)0x0;
      TArray<float,TSizedDefaultAllocator<32>_>::SetNumZeroed
                ((TArray<float,TSizedDefaultAllocator<32>_> *)local_38,
                 param_1->PostUpdateNumInstances,Default);
      UE::Core::Private::Function::CheckCallable((void *)param_1->_padding_);
      pcVar3 = (code *)param_1->_padding_;
      plVar6 = &param_1->_padding_;
      if ((longlong *)param_1->_padding_ != (longlong *)0x0) {
        plVar6 = (longlong *)param_1->_padding_;
      }
      uVar5 = (**(code **)(*plVar6 + 8))();
      (*pcVar3)(uVar5,local_38);
      local_res10[0].NumItems = (int)pFStack_30;
      Scatter<FIdentityDeltaRange,float,FSrcIndexRemap>
                (local_res10,param_3->InstanceRandomIDs,param_1->PostUpdateNumInstances,
                 (TArray<float,TSizedDefaultAllocator<32>_> *)local_38,param_2,1);
      if (local_38 != (undefined1  [8])0x0) {
        FMemory::Free((void *)local_38);
        return;
      }
    }
  }
  return;
}

// ApplyDataChanges<FIdentityIndexRemap> @ 147d60e00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FISMCInstanceDataSceneProxy::ApplyDataChanges<FIdentityIndexRemap>
          (FISMCInstanceDataSceneProxy *this,FISMInstanceUpdateChangeSet *param_1,
          FIdentityIndexRemap *param_2,int param_3,FWriteView *param_4)

{
  float *pfVar1;
  float fVar2;
  undefined8 uVar3;
  FRenderTransform *pFVar4;
  TVector<double> *pTVar5;
  TArray<FRenderBounds,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<FRenderTransform,TSizedDefaultAllocator<32>_> *pTVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  double dVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  char cVar26;
  bool bVar27;
  bool bVar28;
  uint uVar29;
  longlong *plVar30;
  int iVar31;
  int iVar32;
  uint uVar33;
  FScriptContainerElement *pFVar34;
  longlong lVar35;
  uint uVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined1 auStackY_2e8 [32];
  undefined1 local_2b8 [8];
  FISMInstanceUpdateChangeSet *local_2b0;
  uint uStack_2a8;
  uint uStack_2a4;
  int local_2a0;
  undefined4 uStack_29c;
  int local_298;
  char local_290;
  undefined8 local_28c;
  FAnyValidIterator<3> local_280;
  char local_268;
  undefined8 local_264;
  FAnyValidIterator<3> local_258;
  FDeltaRange<1> local_240;
  FConstIterator local_230;
  FConstIterator local_208;
  TVector<float>_u_0 local_1e0;
  uint local_1d0;
  uint local_1cc;
  FIdentityIndexRemap *local_1c8;
  FISMCInstanceDataSceneProxy *local_1c0;
  TVector<float>_u_0 local_1b8;
  float fStack_1ac;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  TVector<float>_u_0 local_188;
  float fStack_17c;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  TVector<float>_u_0 local_158;
  float fStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float local_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  plVar30 = &param_1->_padding_;
  lVar35 = param_1->_padding_;
  pFVar4 = param_4->PrimitiveToRelativeWorld;
  *(longlong *)&pFVar4->TransformRows[0].field0_0x0 = *plVar30;
  *(longlong *)((longlong)&pFVar4->TransformRows[0].field0_0x0 + 8) = lVar35;
  lVar35 = param_1->_padding_;
  *(longlong *)((longlong)&pFVar4->TransformRows[1].field0_0x0 + 4) = param_1->_padding_;
  *(longlong *)&pFVar4->TransformRows[2].field0_0x0 = lVar35;
  lVar35 = param_1->_padding_;
  *(longlong *)((longlong)&pFVar4->TransformRows[2].field0_0x0 + 8) = param_1->_padding_;
  *(longlong *)((longlong)&(pFVar4->Origin).field0_0x0 + 4) = lVar35;
  pTVar5 = param_4->PrimitiveWorldSpaceOffset;
  dVar20 = (double)param_1->_padding_;
  (pTVar5->field0_0x0)._s_0.X = (double)param_1->_padding_;
  (pTVar5->field0_0x0)._s_0.Y = dVar20;
  (pTVar5->field0_0x0)._s_0.Z = (double)param_1->_padding_;
  local_298 = param_3;
  local_1c8 = param_2;
  local_1c0 = this;
  if (((param_1->_padding_ & 0x200000) != 0) &&
     (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                         ("!ChangeSet.Flags.bHasPerInstanceLocalBounds",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh\\ISMInstanceDataSceneProxy.cpp"
                          ,0x9a,L""), bVar27)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  TArray<FRenderBounds,TSizedDefaultAllocator<32>_>::operator=
            (param_4->InstanceLocalBounds,
             (TArray<FRenderBounds,TSizedDefaultAllocator<32>_> *)&param_1->_padding_);
  GetLocalBoundsPadExtent
            ((TVector<float> *)&local_1e0._s_0,param_4->PrimitiveToRelativeWorld,
             *(float *)((longlong)&param_1->_padding_ + 4));
  pTVar6 = param_4->InstanceLocalBounds;
  iVar32 = pTVar6->ArrayNum;
  pFVar34 = (pTVar6->AllocatorInstance).Data;
  pFVar9 = pFVar34 + (longlong)iVar32 * 0x18;
  while( true ) {
    if (pTVar6->ArrayNum != iVar32) {
      local_2b8[0] = 0;
      `TCheckedPointerIterator<FRenderBounds,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_2b8);
    }
    if (pFVar34 == pFVar9) break;
    *(float *)pFVar34 = *(float *)pFVar34 - local_1e0._s_0.X;
    *(float *)(pFVar34 + 4) = *(float *)(pFVar34 + 4) - local_1e0._s_0.Y;
    *(float *)(pFVar34 + 8) = *(float *)(pFVar34 + 8) - local_1e0._s_0.Z;
    *(float *)(pFVar34 + 0xc) = local_1e0._s_0.X + *(float *)(pFVar34 + 0xc);
    *(float *)(pFVar34 + 0x10) = local_1e0._s_0.Y + *(float *)(pFVar34 + 0x10);
    *(float *)(pFVar34 + 0x14) = local_1e0._s_0.Z + *(float *)(pFVar34 + 0x14);
    pFVar34 = pFVar34 + 0x18;
  }
  pTVar7 = param_4->InstanceToPrimitiveRelative;
  uVar33 = (uint)param_1->_padding_;
  if ((((char)param_1->_padding_ == '\0') && (*(char *)((longlong)&param_1->_padding_ + 6) == '\0'))
     && (uVar36 = (int)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4),
        uVar36 != uVar33)) {
    bVar27 = false;
    uVar33 = uVar36;
  }
  else {
    bVar27 = true;
  }
  TArray<FRenderTransform,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (pTVar7,local_298,Default);
  if (uVar33 == 0) {
LAB_147d617cc:
    if ((param_1->_padding_ & 0x40000) == 0) {
      pTVar7 = param_4->PrevInstanceToPrimitiveRelative;
      pTVar7->ArrayNum = 0;
      if (pTVar7->ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,4,0,&pTVar7->AllocatorInstance,0,&pTVar7->ArrayMax);
      }
    }
    else {
      plVar30 = &param_1->_padding_;
      if ((char)param_1->_padding_ == '\0') {
        plVar30 = &param_1->_padding_;
      }
      fVar2 = *(float *)plVar30;
      fVar11 = *(float *)((longlong)plVar30 + 4);
      fVar12 = *(float *)(plVar30 + 1);
      fStack_1ac = *(float *)((longlong)plVar30 + 0xc);
      pTVar7 = param_4->PrevInstanceToPrimitiveRelative;
      local_1a8 = plVar30[2];
      uStack_1a0 = plVar30[3];
      iVar32 = (int)param_1->_padding_;
      local_198 = *(float *)(plVar30 + 4);
      fVar13 = *(float *)((longlong)plVar30 + 0x24);
      fVar14 = *(float *)(plVar30 + 5);
      fVar15 = *(float *)((longlong)plVar30 + 0x2c);
      if ((((char)param_1->_padding_ == '\0') &&
          (*(char *)((longlong)&param_1->_padding_ + 6) == '\0')) &&
         (iVar31 = (int)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4),
         iVar31 != iVar32)) {
        local_240.bFullUpdate = false;
        iVar32 = iVar31;
      }
      else {
        local_240.bFullUpdate = true;
      }
      local_240.NumItems = iVar32;
      local_240.Tracker = (FInstanceAttributeTracker *)param_1;
      local_1b8._s_0.X = fVar2;
      local_1b8._s_0.Y = fVar11;
      local_1b8._s_0.Z = fVar12;
      fStack_194 = fVar13;
      fStack_190 = fVar14;
      fStack_18c = fVar15;
      TArray<FRenderTransform,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (pTVar7,local_298,Default);
      if (iVar32 != 0) {
        bVar27 = FRenderTransform::IsScaleNonUniform((FRenderTransform *)&local_1b8._s_0);
        fVar44 = local_198;
        fVar16 = fStack_1ac;
        fVar17 = (float)local_1a8;
        fVar18 = local_1a8._4_4_;
        fVar19 = (float)uStack_1a0;
        fVar43 = uStack_1a0._4_4_;
        if (!bVar27) {
          FInstanceAttributeTracker::FDeltaRange<1>::GetIterator(&local_240,&local_208);
          do {
            if (local_208.bUseIterator == false) goto LAB_147d61b09;
            iVar32 = (local_208.It.Tracker)->LastChangedIndex + 1;
            if ((local_208.It.Tracker)->MaxIndex < iVar32) {
              iVar32 = (local_208.It.Tracker)->MaxIndex;
            }
            iVar31 = local_208.It.ElementOffset + local_208.It.ElementIndex * 8;
            bVar27 = SBORROW4(iVar31,iVar32);
            iVar31 = iVar31 - iVar32;
            while( true ) {
              if (bVar27 == iVar31 < 0) goto LAB_147d61d45;
              lVar35 = (longlong)local_208.ItemIndex;
              uVar33 = local_208.ItemIndex;
              if (local_208.bUseIterator != false) {
                uVar33 = local_208.It.ElementOffset + local_208.It.ElementIndex * 8;
              }
              uVar36 = 0;
              if (local_208.ItemIndex < (int)param_1->_padding_) {
                uVar36 = (uint)~local_208.ItemIndex >> 0x1f;
              }
              if ((uVar36 == 0) &&
                 (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar27)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              lVar8 = param_1->_padding_;
              pfVar1 = (float *)(lVar8 + lVar35 * 0x30);
              fVar39 = *pfVar1;
              fVar40 = pfVar1[1];
              fVar37 = pfVar1[2];
              local_f8 = fVar40 * fVar16 + fVar39 * fVar2 + fVar37 * fVar19;
              fStack_f4 = fVar40 * fVar17 + fVar39 * fVar11 + fVar37 * fVar43;
              fStack_f0 = fVar40 * fVar18 + fVar39 * fVar12 + fVar37 * fVar44;
              pfVar1 = (float *)(lVar8 + 0xc + lVar35 * 0x30);
              fVar39 = *pfVar1;
              fVar40 = pfVar1[1];
              fVar37 = pfVar1[2];
              fStack_ec = fVar40 * fVar16 + fVar39 * fVar2 + fVar37 * fVar19;
              fStack_e8 = fVar40 * fVar17 + fVar39 * fVar11 + fVar37 * fVar43;
              fStack_e4 = fVar40 * fVar18 + fVar39 * fVar12 + fVar37 * fVar44;
              pfVar1 = (float *)(lVar8 + 0x18 + lVar35 * 0x30);
              fVar39 = *pfVar1;
              fVar40 = pfVar1[1];
              fVar37 = pfVar1[2];
              uVar3 = *(undefined8 *)(lVar8 + 0x24 + lVar35 * 0x30);
              fVar41 = (float)uVar3;
              fVar42 = (float)((ulonglong)uVar3 >> 0x20);
              uVar3 = CONCAT44(fStack_f4,local_f8);
              uVar21 = CONCAT44(fStack_ec,fStack_f0);
              local_e0 = fVar40 * fVar16 + fVar39 * fVar2 + fVar37 * fVar19;
              fStack_dc = fVar40 * fVar17 + fVar39 * fVar11 + fVar37 * fVar43;
              fVar40 = fVar40 * fVar18 + fVar39 * fVar12 + fVar37 * fVar44;
              fVar39 = *(float *)(lVar8 + 0x2c + lVar35 * 0x30);
              uVar22 = CONCAT44(fStack_e4,fStack_e8);
              uVar23 = CONCAT44(fStack_dc,local_e0);
              uVar36 = 0;
              if ((int)uVar33 < pTVar7->ArrayNum) {
                uVar36 = ~uVar33 >> 0x1f;
              }
              fVar37 = fVar41 * fVar2 + fVar13 + fVar42 * fVar16 + fVar39 * fVar19;
              fVar38 = fVar41 * fVar11 + fVar14 + fVar42 * fVar17 + fVar39 * fVar43;
              fVar39 = fVar41 * fVar12 + fVar15 + fVar42 * fVar18 + fVar39 * fVar44;
              _fStack_d4 = CONCAT44(fVar38,fVar37);
              fStack_d8 = fVar40;
              fStack_cc = fVar39;
              if ((uVar36 == 0) &&
                 (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar27)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              local_208.ItemIndex = local_208.ItemIndex + 1;
              lVar35 = (longlong)(int)uVar33;
              pFVar9 = (pTVar7->AllocatorInstance).Data;
              *(undefined8 *)(pFVar9 + lVar35 * 0x30) = uVar3;
              *(undefined8 *)(pFVar9 + lVar35 * 0x30 + 8) = uVar21;
              *(undefined8 *)(pFVar9 + lVar35 * 0x30 + 0x10) = uVar22;
              *(undefined8 *)(pFVar9 + lVar35 * 0x30 + 0x10 + 8) = uVar23;
              pFVar9 = pFVar9 + lVar35 * 0x30 + 0x20;
              *(float *)pFVar9 = fVar40;
              *(float *)(pFVar9 + 4) = fVar37;
              *(float *)(pFVar9 + 8) = fVar38;
              *(float *)(pFVar9 + 0xc) = fVar39;
              if (local_208.bUseIterator != false) break;
LAB_147d61b09:
              bVar27 = SBORROW4(local_208.ItemIndex,local_208.MaxNum);
              iVar31 = local_208.ItemIndex - local_208.MaxNum;
            }
            local_208.It.CurrentElement = local_208.It.CurrentElement & 0xfffffffc;
            FInstanceAttributeTracker::FAnyValidIterator<3>::AdvanceUntilAny(&local_208.It);
          } while( true );
        }
        FInstanceAttributeTracker::FDeltaRange<1>::GetIterator(&local_240,&local_230);
        do {
          if (local_230.bUseIterator == false) goto LAB_147d618d7;
          iVar32 = (local_230.It.Tracker)->LastChangedIndex + 1;
          if ((local_230.It.Tracker)->MaxIndex < iVar32) {
            iVar32 = (local_230.It.Tracker)->MaxIndex;
          }
          iVar31 = local_230.It.ElementOffset + local_230.It.ElementIndex * 8;
          bVar27 = SBORROW4(iVar31,iVar32);
          iVar31 = iVar31 - iVar32;
          while( true ) {
            if (bVar27 == iVar31 < 0) goto LAB_147d61d45;
            lVar35 = (longlong)local_230.ItemIndex;
            uVar33 = local_230.ItemIndex;
            if (local_230.bUseIterator != false) {
              uVar33 = local_230.It.ElementOffset + local_230.It.ElementIndex * 8;
            }
            uVar36 = 0;
            if (local_230.ItemIndex < (int)param_1->_padding_) {
              uVar36 = (uint)~local_230.ItemIndex >> 0x1f;
            }
            if ((uVar36 == 0) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar27)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            lVar8 = param_1->_padding_;
            pfVar1 = (float *)(lVar8 + lVar35 * 0x30);
            fVar39 = *pfVar1;
            fVar40 = pfVar1[1];
            fVar37 = pfVar1[2];
            local_158._s_0.X = fVar40 * fVar16 + fVar39 * fVar2 + fVar37 * fVar19;
            local_158._s_0.Y = fVar40 * fVar17 + fVar39 * fVar11 + fVar37 * fVar43;
            local_158._s_0.Z = fVar40 * fVar18 + fVar39 * fVar12 + fVar37 * fVar44;
            pfVar1 = (float *)(lVar8 + 0xc + lVar35 * 0x30);
            fVar39 = *pfVar1;
            fVar40 = pfVar1[1];
            fVar37 = pfVar1[2];
            fStack_14c = fVar40 * fVar16 + fVar39 * fVar2 + fVar37 * fVar19;
            local_148 = fVar40 * fVar17 + fVar39 * fVar11 + fVar37 * fVar43;
            fStack_144 = fVar40 * fVar18 + fVar39 * fVar12 + fVar37 * fVar44;
            pfVar1 = (float *)(lVar8 + 0x18 + lVar35 * 0x30);
            fVar39 = *pfVar1;
            fVar40 = pfVar1[1];
            fVar37 = pfVar1[2];
            uVar3 = *(undefined8 *)(lVar8 + 0x24 + lVar35 * 0x30);
            fVar41 = (float)uVar3;
            fVar42 = (float)((ulonglong)uVar3 >> 0x20);
            fStack_140 = fVar40 * fVar16 + fVar39 * fVar2 + fVar37 * fVar19;
            fStack_13c = fVar40 * fVar17 + fVar39 * fVar11 + fVar37 * fVar43;
            fStack_138 = fVar40 * fVar18 + fVar39 * fVar12 + fVar37 * fVar44;
            fVar39 = *(float *)(lVar8 + 0x2c + lVar35 * 0x30);
            fStack_134 = fVar41 * fVar2 + fVar13 + fVar42 * fVar16 + fVar39 * fVar19;
            fStack_130 = fVar41 * fVar11 + fVar14 + fVar42 * fVar17 + fVar39 * fVar43;
            fStack_12c = fVar41 * fVar12 + fVar15 + fVar42 * fVar18 + fVar39 * fVar44;
            FRenderTransform::Orthogonalize((FRenderTransform *)&local_158._s_0);
            uVar3 = CONCAT44(local_158._s_0.Y,local_158._s_0.X);
            uVar21 = CONCAT44(fStack_14c,local_158._s_0.Z);
            uVar22 = CONCAT44(fStack_144,local_148);
            uVar23 = CONCAT44(fStack_13c,fStack_140);
            uVar24 = CONCAT44(fStack_134,fStack_138);
            uVar25 = CONCAT44(fStack_12c,fStack_130);
            uVar36 = 0;
            if ((int)uVar33 < pTVar7->ArrayNum) {
              uVar36 = ~uVar33 >> 0x1f;
            }
            if ((uVar36 == 0) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar27)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            local_230.ItemIndex = local_230.ItemIndex + 1;
            lVar35 = (longlong)(int)uVar33;
            pFVar9 = (pTVar7->AllocatorInstance).Data;
            *(undefined8 *)(pFVar9 + lVar35 * 0x30) = uVar3;
            *(undefined8 *)(pFVar9 + lVar35 * 0x30 + 8) = uVar21;
            *(undefined8 *)(pFVar9 + lVar35 * 0x30 + 0x10) = uVar22;
            *(undefined8 *)(pFVar9 + lVar35 * 0x30 + 0x10 + 8) = uVar23;
            *(undefined8 *)(pFVar9 + lVar35 * 0x30 + 0x20) = uVar24;
            *(undefined8 *)(pFVar9 + lVar35 * 0x30 + 0x20 + 8) = uVar25;
            if (local_230.bUseIterator != false) break;
LAB_147d618d7:
            bVar27 = SBORROW4(local_230.ItemIndex,local_230.MaxNum);
            iVar31 = local_230.ItemIndex - local_230.MaxNum;
          }
          local_230.It.CurrentElement = local_230.It.CurrentElement & 0xfffffffc;
          FInstanceAttributeTracker::FAnyValidIterator<3>::AdvanceUntilAny(&local_230.It);
        } while( true );
      }
    }
LAB_147d61d45:
    ApplyAttributeChanges<FIdentityIndexRemap>(local_1c0,param_1,local_1c8,param_4);
    return;
  }
  fVar2 = *(float *)((longlong)&param_1->_padding_ + 4);
  uVar3 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  fVar43 = (float)uVar3;
  fVar44 = (float)((ulonglong)uVar3 >> 0x20);
  fVar11 = *(float *)plVar30;
  fVar12 = *(float *)((longlong)&param_1->_padding_ + 4);
  fVar13 = *(float *)&param_1->_padding_;
  fVar14 = *(float *)((longlong)&param_1->_padding_ + 4);
  fVar15 = *(float *)&param_1->_padding_;
  fVar16 = *(float *)((longlong)&param_1->_padding_ + 4);
  fVar17 = *(float *)&param_1->_padding_;
  fVar18 = *(float *)((longlong)&param_1->_padding_ + 4);
  fVar19 = *(float *)&param_1->_padding_;
  bVar28 = FRenderTransform::IsScaleNonUniform((FRenderTransform *)plVar30);
  if (!bVar28) {
    if (bVar27) {
      local_268 = '\0';
      local_264 = (ulonglong)uVar33 << 0x20;
      local_258.Tracker = (FInstanceAttributeTracker *)0x0;
      local_258.ElementIndex = 0;
      local_258._16_8_ = local_258._16_8_ & 0xffffffff00000000;
    }
    else {
      iVar32 = (int)param_1->_padding_;
      if ((int)param_1->_padding_ < iVar32) {
        iVar32 = (int)param_1->_padding_;
      }
      uVar36 = iVar32 >> 0x1f & 7;
      uVar33 = iVar32 + uVar36;
      iVar32 = (uVar33 & 7) - uVar36;
      uVar33 = (int)uVar33 >> 3;
      uStack_2a8 = uVar33;
      local_2a0 = iVar32;
      if (((int)uVar33 < 0) || (iVar31 = (int)param_1->_padding_, iVar31 <= (int)uVar33)) {
        uStack_2a4 = 0;
        local_2b0 = param_1;
      }
      else {
        uVar36 = 0;
        if ((int)uVar33 < iVar31) {
          uVar36 = ~uVar33 >> 0x1f;
        }
        local_2b0 = param_1;
        if ((uVar36 == 0) &&
           (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar27)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        uStack_2a4 = *(uint *)(param_1->_padding_ + (longlong)(int)uVar33 * 4) & 0x33333333;
      }
      uStack_2a4 = uStack_2a4 >> ((char)iVar32 * '\x04' & 0x1fU);
      iVar31 = (int)param_1->_padding_;
      if ((int)uVar33 < iVar31) {
LAB_147d614c0:
        if (uStack_2a4 == 0) {
          uVar33 = uVar33 + 1;
          iVar32 = 0;
          local_2a0 = 0;
          uStack_2a8 = uVar33;
          if ((int)uVar33 < iVar31) goto code_r0x000147d614d4;
          uStack_2a4 = 0;
        }
        else {
          local_1cc = 0;
          if (uStack_2a4 != 0) {
            for (; (uStack_2a4 >> local_1cc & 1) == 0; local_1cc = local_1cc + 1) {
            }
          }
          uVar33 = 0x20;
          if (uStack_2a4 != 0) {
            uVar33 = local_1cc;
          }
          uStack_2a4 = uStack_2a4 >> ((char)(uVar33 >> 2) * '\x04' & 0x1fU);
          local_2a0 = iVar32 + (uVar33 >> 2);
        }
      }
LAB_147d6155d:
      local_268 = '\x01';
      local_258._16_8_ = CONCAT44(uStack_29c,local_2a0);
      local_258.CurrentElement = uStack_2a4;
      local_264 = 0;
      local_258.ElementIndex = uStack_2a8;
      local_258.Tracker = (FInstanceAttributeTracker *)local_2b0;
    }
    uVar33 = 0;
    do {
      cVar26 = local_268;
      if (local_268 == '\0') goto LAB_147d615b3;
      iVar32 = *(int *)((longlong)&(local_258.Tracker)->FirstChangedIndex + 4) + 1;
      if ((int)*(longlong *)&(local_258.Tracker)->MaxIndex < iVar32) {
        iVar32 = (int)*(longlong *)&(local_258.Tracker)->MaxIndex;
      }
      iVar31 = local_258.ElementOffset + local_258.ElementIndex * 8;
      bVar27 = SBORROW4(iVar31,iVar32);
      iVar31 = iVar31 - iVar32;
      while( true ) {
        if (bVar27 == iVar31 < 0) goto LAB_147d617cc;
        lVar35 = (longlong)(int)uVar33;
        uVar36 = uVar33;
        if (cVar26 != '\0') {
          uVar36 = local_258.ElementOffset + local_258.ElementIndex * 8;
        }
        uVar29 = 0;
        if ((int)uVar33 < (int)param_1->_padding_) {
          uVar29 = ~uVar33 >> 0x1f;
        }
        if ((uVar29 == 0) &&
           (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar27)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        lVar8 = param_1->_padding_;
        pfVar1 = (float *)(lVar8 + lVar35 * 0x30);
        fVar39 = *pfVar1;
        fVar40 = pfVar1[1];
        fVar37 = pfVar1[2];
        local_128 = fVar40 * fVar14 + fVar39 * fVar11 + fVar37 * fVar17;
        fStack_124 = fVar40 * fVar15 + fVar39 * fVar12 + fVar37 * fVar18;
        fStack_120 = fVar40 * fVar16 + fVar39 * fVar13 + fVar37 * fVar19;
        pfVar1 = (float *)(lVar8 + 0xc + lVar35 * 0x30);
        fVar39 = *pfVar1;
        fVar40 = pfVar1[1];
        fVar37 = pfVar1[2];
        fStack_11c = fVar40 * fVar14 + fVar39 * fVar11 + fVar37 * fVar17;
        fStack_118 = fVar40 * fVar15 + fVar39 * fVar12 + fVar37 * fVar18;
        fStack_114 = fVar40 * fVar16 + fVar39 * fVar13 + fVar37 * fVar19;
        pfVar1 = (float *)(lVar8 + 0x18 + lVar35 * 0x30);
        fVar39 = *pfVar1;
        fVar40 = pfVar1[1];
        fVar37 = pfVar1[2];
        uVar3 = *(undefined8 *)(lVar8 + 0x24 + lVar35 * 0x30);
        fVar41 = (float)uVar3;
        fVar42 = (float)((ulonglong)uVar3 >> 0x20);
        uVar3 = CONCAT44(fStack_124,local_128);
        uVar21 = CONCAT44(fStack_11c,fStack_120);
        local_110 = fVar40 * fVar14 + fVar39 * fVar11 + fVar37 * fVar17;
        fStack_10c = fVar40 * fVar15 + fVar39 * fVar12 + fVar37 * fVar18;
        fVar40 = fVar40 * fVar16 + fVar39 * fVar13 + fVar37 * fVar19;
        fVar39 = *(float *)(lVar8 + 0x2c + lVar35 * 0x30);
        uVar22 = CONCAT44(fStack_114,fStack_118);
        uVar23 = CONCAT44(fStack_10c,local_110);
        uVar29 = 0;
        if ((int)uVar36 < pTVar7->ArrayNum) {
          uVar29 = ~uVar36 >> 0x1f;
        }
        fVar37 = fVar41 * fVar11 + fVar43 + fVar42 * fVar14 + fVar39 * fVar17;
        fVar38 = fVar41 * fVar12 + fVar44 + fVar42 * fVar15 + fVar39 * fVar18;
        fVar39 = fVar41 * fVar13 + fVar2 + fVar42 * fVar16 + fVar39 * fVar19;
        _fStack_104 = CONCAT44(fVar38,fVar37);
        fStack_108 = fVar40;
        fStack_fc = fVar39;
        if ((uVar29 == 0) &&
           (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar27)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        lVar35 = (longlong)(int)uVar36;
        uVar33 = uVar33 + 1;
        local_264 = CONCAT44(local_264._4_4_,uVar33);
        pFVar9 = (pTVar7->AllocatorInstance).Data;
        *(undefined8 *)(pFVar9 + lVar35 * 0x30) = uVar3;
        *(undefined8 *)(pFVar9 + lVar35 * 0x30 + 8) = uVar21;
        *(undefined8 *)(pFVar9 + lVar35 * 0x30 + 0x10) = uVar22;
        *(undefined8 *)(pFVar9 + lVar35 * 0x30 + 0x10 + 8) = uVar23;
        pFVar9 = pFVar9 + lVar35 * 0x30 + 0x20;
        *(float *)pFVar9 = fVar40;
        *(float *)(pFVar9 + 4) = fVar37;
        *(float *)(pFVar9 + 8) = fVar38;
        *(float *)(pFVar9 + 0xc) = fVar39;
        if (cVar26 != '\0') break;
LAB_147d615b3:
        bVar27 = SBORROW4(uVar33,local_264._4_4_);
        iVar31 = uVar33 - local_264._4_4_;
      }
      local_258.CurrentElement = local_258.CurrentElement & 0xfffffffc;
      FInstanceAttributeTracker::FAnyValidIterator<3>::AdvanceUntilAny(&local_258);
      uVar33 = (uint)local_264;
    } while( true );
  }
  if (bVar27) {
    local_290 = '\0';
    local_28c = (ulonglong)uVar33 << 0x20;
    local_280.Tracker = (FInstanceAttributeTracker *)0x0;
    local_280.ElementIndex = 0;
    local_280._16_8_ = local_280._16_8_ & 0xffffffff00000000;
  }
  else {
    iVar32 = (int)param_1->_padding_;
    if ((int)param_1->_padding_ < iVar32) {
      iVar32 = (int)param_1->_padding_;
    }
    uVar36 = iVar32 >> 0x1f & 7;
    uVar33 = iVar32 + uVar36;
    iVar32 = (uVar33 & 7) - uVar36;
    uVar33 = (int)uVar33 >> 3;
    uStack_2a8 = uVar33;
    local_2a0 = iVar32;
    if (((int)uVar33 < 0) || (iVar31 = (int)param_1->_padding_, iVar31 <= (int)uVar33)) {
      uStack_2a4 = 0;
      local_2b0 = param_1;
    }
    else {
      uVar36 = 0;
      if ((int)uVar33 < iVar31) {
        uVar36 = ~uVar33 >> 0x1f;
      }
      local_2b0 = param_1;
      if ((uVar36 == 0) &&
         (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar27)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uStack_2a4 = *(uint *)(param_1->_padding_ + (longlong)(int)uVar33 * 4) & 0x33333333;
    }
    uStack_2a4 = uStack_2a4 >> ((char)iVar32 * '\x04' & 0x1fU);
    iVar31 = (int)param_1->_padding_;
    if ((int)uVar33 < iVar31) {
LAB_147d610e3:
      if (uStack_2a4 == 0) {
        uVar33 = uVar33 + 1;
        iVar32 = 0;
        local_2a0 = 0;
        uStack_2a8 = uVar33;
        if ((int)uVar33 < iVar31) goto code_r0x000147d610f7;
        uStack_2a4 = 0;
      }
      else {
        local_1d0 = 0;
        if (uStack_2a4 != 0) {
          for (; (uStack_2a4 >> local_1d0 & 1) == 0; local_1d0 = local_1d0 + 1) {
          }
        }
        uVar33 = 0x20;
        if (uStack_2a4 != 0) {
          uVar33 = local_1d0;
        }
        uStack_2a4 = uStack_2a4 >> ((char)(uVar33 >> 2) * '\x04' & 0x1fU);
        local_2a0 = iVar32 + (uVar33 >> 2);
      }
    }
LAB_147d61180:
    local_290 = '\x01';
    local_280._16_8_ = CONCAT44(uStack_29c,local_2a0);
    local_280.CurrentElement = uStack_2a4;
    local_28c = 0;
    local_280.ElementIndex = uStack_2a8;
    local_280.Tracker = (FInstanceAttributeTracker *)local_2b0;
  }
  uVar33 = 0;
  do {
    cVar26 = local_290;
    if (local_290 == '\0') goto LAB_147d611e5;
    iVar32 = *(int *)((longlong)&(local_280.Tracker)->FirstChangedIndex + 4) + 1;
    if ((int)*(longlong *)&(local_280.Tracker)->MaxIndex < iVar32) {
      iVar32 = (int)*(longlong *)&(local_280.Tracker)->MaxIndex;
    }
    iVar31 = local_280.ElementOffset + local_280.ElementIndex * 8;
    bVar27 = SBORROW4(iVar31,iVar32);
    iVar31 = iVar31 - iVar32;
    while( true ) {
      if (bVar27 == iVar31 < 0) goto LAB_147d617cc;
      lVar35 = (longlong)(int)uVar33;
      uVar36 = uVar33;
      if (cVar26 != '\0') {
        uVar36 = local_280.ElementOffset + local_280.ElementIndex * 8;
      }
      uVar29 = 0;
      if ((int)uVar33 < (int)param_1->_padding_) {
        uVar29 = ~uVar33 >> 0x1f;
      }
      if ((uVar29 == 0) &&
         (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar27)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      lVar8 = param_1->_padding_;
      pfVar1 = (float *)(lVar8 + lVar35 * 0x30);
      fVar39 = *pfVar1;
      fVar40 = pfVar1[1];
      fVar37 = pfVar1[2];
      local_188._s_0.X = fVar40 * fVar14 + fVar39 * fVar11 + fVar37 * fVar17;
      local_188._s_0.Y = fVar40 * fVar15 + fVar39 * fVar12 + fVar37 * fVar18;
      local_188._s_0.Z = fVar40 * fVar16 + fVar39 * fVar13 + fVar37 * fVar19;
      pfVar1 = (float *)(lVar8 + 0xc + lVar35 * 0x30);
      fVar39 = *pfVar1;
      fVar40 = pfVar1[1];
      fVar37 = pfVar1[2];
      fStack_17c = fVar40 * fVar14 + fVar39 * fVar11 + fVar37 * fVar17;
      local_178 = fVar40 * fVar15 + fVar39 * fVar12 + fVar37 * fVar18;
      fStack_174 = fVar40 * fVar16 + fVar39 * fVar13 + fVar37 * fVar19;
      pfVar1 = (float *)(lVar8 + 0x18 + lVar35 * 0x30);
      fVar39 = *pfVar1;
      fVar40 = pfVar1[1];
      fVar37 = pfVar1[2];
      uVar3 = *(undefined8 *)(lVar8 + 0x24 + lVar35 * 0x30);
      fVar41 = (float)uVar3;
      fVar42 = (float)((ulonglong)uVar3 >> 0x20);
      fStack_170 = fVar40 * fVar14 + fVar39 * fVar11 + fVar37 * fVar17;
      fStack_16c = fVar40 * fVar15 + fVar39 * fVar12 + fVar37 * fVar18;
      fStack_168 = fVar40 * fVar16 + fVar39 * fVar13 + fVar37 * fVar19;
      fVar39 = *(float *)(lVar8 + 0x2c + lVar35 * 0x30);
      fStack_164 = fVar41 * fVar11 + fVar43 + fVar42 * fVar14 + fVar39 * fVar17;
      fStack_160 = fVar41 * fVar12 + fVar44 + fVar42 * fVar15 + fVar39 * fVar18;
      fStack_15c = fVar41 * fVar13 + fVar2 + fVar42 * fVar16 + fVar39 * fVar19;
      FRenderTransform::Orthogonalize((FRenderTransform *)&local_188._s_0);
      uVar3 = CONCAT44(local_188._s_0.Y,local_188._s_0.X);
      uVar21 = CONCAT44(fStack_17c,local_188._s_0.Z);
      uVar22 = CONCAT44(fStack_174,local_178);
      uVar23 = CONCAT44(fStack_16c,fStack_170);
      uVar24 = CONCAT44(fStack_164,fStack_168);
      uVar25 = CONCAT44(fStack_15c,fStack_160);
      uVar29 = 0;
      if ((int)uVar36 < pTVar7->ArrayNum) {
        uVar29 = ~uVar36 >> 0x1f;
      }
      if ((uVar29 == 0) &&
         (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar27)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      lVar35 = (longlong)(int)uVar36;
      uVar33 = uVar33 + 1;
      local_28c = CONCAT44(local_28c._4_4_,uVar33);
      pFVar9 = (pTVar7->AllocatorInstance).Data;
      *(undefined8 *)(pFVar9 + lVar35 * 0x30) = uVar3;
      *(undefined8 *)(pFVar9 + lVar35 * 0x30 + 8) = uVar21;
      *(undefined8 *)(pFVar9 + lVar35 * 0x30 + 0x10) = uVar22;
      *(undefined8 *)(pFVar9 + lVar35 * 0x30 + 0x10 + 8) = uVar23;
      *(undefined8 *)(pFVar9 + lVar35 * 0x30 + 0x20) = uVar24;
      *(undefined8 *)(pFVar9 + lVar35 * 0x30 + 0x20 + 8) = uVar25;
      if (cVar26 != '\0') break;
LAB_147d611e5:
      bVar27 = SBORROW4(uVar33,local_28c._4_4_);
      iVar31 = uVar33 - local_28c._4_4_;
    }
    local_280.CurrentElement = local_280.CurrentElement & 0xfffffffc;
    FInstanceAttributeTracker::FAnyValidIterator<3>::AdvanceUntilAny(&local_280);
    uVar33 = (uint)local_28c;
  } while( true );
code_r0x000147d614d4:
  if (((int)uVar33 < 0) &&
     (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar27)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  iVar31 = (int)param_1->_padding_;
  uStack_2a4 = *(uint *)(param_1->_padding_ + (longlong)(int)uVar33 * 4) & 0x33333333;
  if (iVar31 <= (int)uVar33) goto LAB_147d6155d;
  goto LAB_147d614c0;
code_r0x000147d610f7:
  if (((int)uVar33 < 0) &&
     (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar27)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  iVar31 = (int)param_1->_padding_;
  uStack_2a4 = *(uint *)(param_1->_padding_ + (longlong)(int)uVar33 * 4) & 0x33333333;
  if (iVar31 <= (int)uVar33) goto LAB_147d61180;
  goto LAB_147d610e3;
}

// ApplyDataChanges<FReorderTableIndexRemap> @ 147d61dc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FISMCInstanceDataSceneProxy::ApplyDataChanges<FReorderTableIndexRemap>
          (FISMCInstanceDataSceneProxy *this,FISMInstanceUpdateChangeSet *param_1,
          FReorderTableIndexRemap *param_2,int param_3,FWriteView *param_4)

{
  float *pfVar1;
  float fVar2;
  undefined8 uVar3;
  FRenderTransform *pFVar4;
  TVector<double> *pTVar5;
  TArray<FRenderBounds,TSizedDefaultAllocator<32>_> *pTVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  TArray<FRenderTransform,TSizedDefaultAllocator<32>_> *pTVar9;
  code *pcVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  double dVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  char cVar27;
  bool bVar28;
  bool bVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  longlong *plVar34;
  int iVar35;
  FScriptContainerElement *pFVar36;
  longlong lVar37;
  longlong lVar38;
  int iVar39;
  int iVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined1 auStackY_2e8 [32];
  undefined1 local_2b8 [4];
  int local_2b4;
  FISMInstanceUpdateChangeSet *local_2b0;
  uint uStack_2a8;
  uint uStack_2a4;
  uint local_2a0;
  undefined4 uStack_29c;
  FReorderTableIndexRemap *local_298;
  char local_290;
  uint local_28c;
  int local_288;
  FAnyValidIterator<3> local_280;
  char local_268;
  uint local_264;
  int local_260;
  FAnyValidIterator<3> local_258;
  FDeltaRange<1> local_240;
  FWriteView *local_230;
  FConstIterator local_228;
  FConstIterator local_200;
  TArray<FRenderTransform,TSizedDefaultAllocator<32>_> *local_1d8;
  TVector<float>_u_0 local_1d0;
  uint local_1c0;
  uint local_1bc;
  FISMCInstanceDataSceneProxy *local_1b8;
  TVector<float>_u_0 local_1b0;
  float fStack_1a4;
  undefined8 local_1a0;
  undefined8 uStack_198;
  float local_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  TVector<float>_u_0 local_180;
  float fStack_174;
  float local_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  TVector<float>_u_0 local_150;
  float fStack_144;
  float local_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float local_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float local_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  ulonglong local_c0;
  
  local_c0 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  plVar34 = &param_1->_padding_;
  lVar37 = param_1->_padding_;
  pFVar4 = param_4->PrimitiveToRelativeWorld;
  local_230 = param_4;
  *(longlong *)&pFVar4->TransformRows[0].field0_0x0 = *plVar34;
  *(longlong *)((longlong)&pFVar4->TransformRows[0].field0_0x0 + 8) = lVar37;
  lVar37 = param_1->_padding_;
  *(longlong *)((longlong)&pFVar4->TransformRows[1].field0_0x0 + 4) = param_1->_padding_;
  *(longlong *)&pFVar4->TransformRows[2].field0_0x0 = lVar37;
  lVar37 = param_1->_padding_;
  *(longlong *)((longlong)&pFVar4->TransformRows[2].field0_0x0 + 8) = param_1->_padding_;
  *(longlong *)((longlong)&(pFVar4->Origin).field0_0x0 + 4) = lVar37;
  pTVar5 = param_4->PrimitiveWorldSpaceOffset;
  dVar21 = (double)param_1->_padding_;
  (pTVar5->field0_0x0)._s_0.X = (double)param_1->_padding_;
  (pTVar5->field0_0x0)._s_0.Y = dVar21;
  uVar20 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  *(int *)((longlong)&pTVar5->field0_0x0 + 0x10) = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&pTVar5->field0_0x0 + 0x14) = uVar20;
  local_2b4 = param_3;
  local_298 = param_2;
  local_1b8 = this;
  if (((param_1->_padding_ & 0x200000) != 0) &&
     (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                         ("!ChangeSet.Flags.bHasPerInstanceLocalBounds",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh\\ISMInstanceDataSceneProxy.cpp"
                          ,0x9a,L""), bVar28)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  TArray<FRenderBounds,TSizedDefaultAllocator<32>_>::operator=
            (param_4->InstanceLocalBounds,
             (TArray<FRenderBounds,TSizedDefaultAllocator<32>_> *)&param_1->_padding_);
  GetLocalBoundsPadExtent
            ((TVector<float> *)&local_1d0._s_0,param_4->PrimitiveToRelativeWorld,
             *(float *)((longlong)&param_1->_padding_ + 4));
  pTVar6 = param_4->InstanceLocalBounds;
  iVar35 = pTVar6->ArrayNum;
  pFVar36 = (pTVar6->AllocatorInstance).Data;
  pFVar8 = pFVar36 + (longlong)iVar35 * 0x18;
  while( true ) {
    if (pTVar6->ArrayNum != iVar35) {
      local_2b8[0] = 0;
      `TCheckedPointerIterator<FRenderBounds,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_2b8);
    }
    iVar39 = local_2b4;
    if (pFVar36 == pFVar8) break;
    *(float *)pFVar36 = *(float *)pFVar36 - local_1d0._s_0.X;
    *(float *)(pFVar36 + 4) = *(float *)(pFVar36 + 4) - local_1d0._s_0.Y;
    *(float *)(pFVar36 + 8) = *(float *)(pFVar36 + 8) - local_1d0._s_0.Z;
    *(float *)(pFVar36 + 0xc) = local_1d0._s_0.X + *(float *)(pFVar36 + 0xc);
    *(float *)(pFVar36 + 0x10) = local_1d0._s_0.Y + *(float *)(pFVar36 + 0x10);
    *(float *)(pFVar36 + 0x14) = local_1d0._s_0.Z + *(float *)(pFVar36 + 0x14);
    pFVar36 = pFVar36 + 0x18;
  }
  local_1d8 = param_4->InstanceToPrimitiveRelative;
  iVar35 = (int)param_1->_padding_;
  if ((((char)param_1->_padding_ == '\0') && (*(char *)((longlong)&param_1->_padding_ + 6) == '\0'))
     && (iVar40 = (int)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4),
        iVar40 != iVar35)) {
    bVar28 = false;
    iVar35 = iVar40;
  }
  else {
    bVar28 = true;
  }
  TArray<FRenderTransform,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (local_1d8,local_2b4,Default);
  uVar33 = 0;
  if (iVar35 == 0) {
LAB_147d627cc:
    if ((param_1->_padding_ & 0x40000) == 0) {
      pTVar9 = local_230->PrevInstanceToPrimitiveRelative;
      pTVar9->ArrayNum = 0;
      if (pTVar9->ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,4,0,&pTVar9->AllocatorInstance,0,&pTVar9->ArrayMax);
      }
    }
    else {
      plVar34 = &param_1->_padding_;
      if ((char)param_1->_padding_ == '\0') {
        plVar34 = &param_1->_padding_;
      }
      fVar2 = *(float *)plVar34;
      fVar11 = *(float *)((longlong)plVar34 + 4);
      fVar12 = *(float *)(plVar34 + 1);
      fStack_1a4 = *(float *)((longlong)plVar34 + 0xc);
      iVar35 = (int)param_1->_padding_;
      local_1a0 = plVar34[2];
      uStack_198 = plVar34[3];
      pTVar9 = local_230->PrevInstanceToPrimitiveRelative;
      local_190 = *(float *)(plVar34 + 4);
      fVar13 = *(float *)((longlong)plVar34 + 0x24);
      fVar14 = *(float *)(plVar34 + 5);
      fVar15 = *(float *)((longlong)plVar34 + 0x2c);
      if ((((char)param_1->_padding_ == '\0') &&
          (*(char *)((longlong)&param_1->_padding_ + 6) == '\0')) &&
         (iVar40 = (int)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4),
         iVar40 != iVar35)) {
        local_240.bFullUpdate = false;
        iVar35 = iVar40;
      }
      else {
        local_240.bFullUpdate = true;
      }
      local_240.NumItems = iVar35;
      local_240.Tracker = (FInstanceAttributeTracker *)param_1;
      local_1b0._s_0.X = fVar2;
      local_1b0._s_0.Y = fVar11;
      local_1b0._s_0.Z = fVar12;
      fStack_18c = fVar13;
      fStack_188 = fVar14;
      fStack_184 = fVar15;
      TArray<FRenderTransform,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (pTVar9,iVar39,Default);
      if (iVar35 != 0) {
        bVar28 = FRenderTransform::IsScaleNonUniform((FRenderTransform *)&local_1b0._s_0);
        fVar48 = local_190;
        fVar16 = fStack_1a4;
        fVar17 = (float)local_1a0;
        fVar18 = local_1a0._4_4_;
        fVar19 = (float)uStack_198;
        fVar47 = uStack_198._4_4_;
        if (!bVar28) {
          FInstanceAttributeTracker::FDeltaRange<1>::GetIterator(&local_240,&local_200);
          do {
            if (local_200.bUseIterator == false) goto LAB_147d62b13;
            iVar35 = (local_200.It.Tracker)->LastChangedIndex + 1;
            if ((local_200.It.Tracker)->MaxIndex < iVar35) {
              iVar35 = (local_200.It.Tracker)->MaxIndex;
            }
            iVar39 = local_200.It.ElementOffset + local_200.It.ElementIndex * 8;
            bVar28 = SBORROW4(iVar39,iVar35);
            iVar39 = iVar39 - iVar35;
            while( true ) {
              iVar35 = local_200.ItemIndex;
              if (bVar28 == iVar39 < 0) goto LAB_147d62d64;
              lVar37 = (longlong)local_200.ItemIndex;
              uVar33 = local_200.ItemIndex;
              if (local_200.bUseIterator != false) {
                uVar33 = local_200.It.ElementOffset + local_200.It.ElementIndex * 8;
              }
              uVar33 = FReorderTableIndexRemap::operator[](local_298,uVar33);
              lVar38 = (longlong)(int)uVar33;
              if (uVar33 != 0xffffffff) {
                uVar32 = 0;
                if (iVar35 < (int)param_1->_padding_) {
                  uVar32 = (uint)~iVar35 >> 0x1f;
                }
                if ((uVar32 == 0) &&
                   (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar28)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                lVar7 = param_1->_padding_;
                pfVar1 = (float *)(lVar7 + lVar37 * 0x30);
                fVar43 = *pfVar1;
                fVar44 = pfVar1[1];
                fVar41 = pfVar1[2];
                local_f0 = fVar44 * fVar16 + fVar43 * fVar2 + fVar41 * fVar19;
                fStack_ec = fVar44 * fVar17 + fVar43 * fVar11 + fVar41 * fVar47;
                fStack_e8 = fVar44 * fVar18 + fVar43 * fVar12 + fVar41 * fVar48;
                pfVar1 = (float *)(lVar7 + 0xc + lVar37 * 0x30);
                fVar43 = *pfVar1;
                fVar44 = pfVar1[1];
                fVar41 = pfVar1[2];
                fStack_e4 = fVar44 * fVar16 + fVar43 * fVar2 + fVar41 * fVar19;
                fStack_e0 = fVar44 * fVar17 + fVar43 * fVar11 + fVar41 * fVar47;
                fStack_dc = fVar44 * fVar18 + fVar43 * fVar12 + fVar41 * fVar48;
                pfVar1 = (float *)(lVar7 + 0x18 + lVar37 * 0x30);
                fVar43 = *pfVar1;
                fVar44 = pfVar1[1];
                fVar41 = pfVar1[2];
                uVar3 = *(undefined8 *)(lVar7 + 0x24 + lVar37 * 0x30);
                fVar45 = (float)uVar3;
                fVar46 = (float)((ulonglong)uVar3 >> 0x20);
                uVar3 = CONCAT44(fStack_ec,local_f0);
                uVar22 = CONCAT44(fStack_e4,fStack_e8);
                local_d8 = fVar44 * fVar16 + fVar43 * fVar2 + fVar41 * fVar19;
                fStack_d4 = fVar44 * fVar17 + fVar43 * fVar11 + fVar41 * fVar47;
                fVar44 = fVar44 * fVar18 + fVar43 * fVar12 + fVar41 * fVar48;
                fVar43 = *(float *)(lVar7 + 0x2c + lVar37 * 0x30);
                uVar23 = CONCAT44(fStack_dc,fStack_e0);
                uVar24 = CONCAT44(fStack_d4,local_d8);
                uVar32 = 0;
                if ((int)uVar33 < pTVar9->ArrayNum) {
                  uVar32 = ~uVar33 >> 0x1f;
                }
                fVar41 = fVar45 * fVar2 + fVar13 + fVar46 * fVar16 + fVar43 * fVar19;
                fVar42 = fVar45 * fVar11 + fVar14 + fVar46 * fVar17 + fVar43 * fVar47;
                fVar43 = fVar45 * fVar12 + fVar15 + fVar46 * fVar18 + fVar43 * fVar48;
                fStack_d0 = fVar44;
                fStack_cc = fVar41;
                fStack_c8 = fVar42;
                fStack_c4 = fVar43;
                if ((uVar32 == 0) &&
                   (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar28)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                pFVar8 = (pTVar9->AllocatorInstance).Data;
                *(undefined8 *)(pFVar8 + lVar38 * 0x30) = uVar3;
                *(undefined8 *)(pFVar8 + lVar38 * 0x30 + 8) = uVar22;
                *(undefined8 *)(pFVar8 + lVar38 * 0x30 + 0x10) = uVar23;
                *(undefined8 *)(pFVar8 + lVar38 * 0x30 + 0x10 + 8) = uVar24;
                pFVar8 = pFVar8 + lVar38 * 0x30 + 0x20;
                *(float *)pFVar8 = fVar44;
                *(float *)(pFVar8 + 4) = fVar41;
                *(float *)(pFVar8 + 8) = fVar42;
                *(float *)(pFVar8 + 0xc) = fVar43;
              }
              local_200.ItemIndex = local_200.ItemIndex + 1;
              if (local_200.bUseIterator != false) break;
LAB_147d62b13:
              bVar28 = SBORROW4(local_200.ItemIndex,local_200.MaxNum);
              iVar39 = local_200.ItemIndex - local_200.MaxNum;
            }
            local_200.It.CurrentElement = local_200.It.CurrentElement & 0xfffffffc;
            FInstanceAttributeTracker::FAnyValidIterator<3>::AdvanceUntilAny(&local_200.It);
          } while( true );
        }
        FInstanceAttributeTracker::FDeltaRange<1>::GetIterator(&local_240,&local_228);
        do {
          if (local_228.bUseIterator == false) goto LAB_147d628ca;
          iVar35 = (local_228.It.Tracker)->LastChangedIndex + 1;
          if ((local_228.It.Tracker)->MaxIndex < iVar35) {
            iVar35 = (local_228.It.Tracker)->MaxIndex;
          }
          iVar39 = local_228.It.ElementOffset + local_228.It.ElementIndex * 8;
          bVar28 = SBORROW4(iVar39,iVar35);
          iVar39 = iVar39 - iVar35;
          while( true ) {
            iVar35 = local_228.ItemIndex;
            if (bVar28 == iVar39 < 0) goto LAB_147d62d64;
            lVar37 = (longlong)local_228.ItemIndex;
            uVar33 = local_228.ItemIndex;
            if (local_228.bUseIterator != false) {
              uVar33 = local_228.It.ElementOffset + local_228.It.ElementIndex * 8;
            }
            uVar33 = FReorderTableIndexRemap::operator[](local_298,uVar33);
            lVar38 = (longlong)(int)uVar33;
            if (uVar33 != 0xffffffff) {
              uVar32 = 0;
              if (iVar35 < (int)param_1->_padding_) {
                uVar32 = (uint)~iVar35 >> 0x1f;
              }
              if ((uVar32 == 0) &&
                 (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar28)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              lVar7 = param_1->_padding_;
              pfVar1 = (float *)(lVar7 + lVar37 * 0x30);
              fVar43 = *pfVar1;
              fVar44 = pfVar1[1];
              fVar41 = pfVar1[2];
              local_150._s_0.X = fVar44 * fVar16 + fVar43 * fVar2 + fVar41 * fVar19;
              local_150._s_0.Y = fVar44 * fVar17 + fVar43 * fVar11 + fVar41 * fVar47;
              local_150._s_0.Z = fVar44 * fVar18 + fVar43 * fVar12 + fVar41 * fVar48;
              pfVar1 = (float *)(lVar7 + 0xc + lVar37 * 0x30);
              fVar43 = *pfVar1;
              fVar44 = pfVar1[1];
              fVar41 = pfVar1[2];
              fStack_144 = fVar44 * fVar16 + fVar43 * fVar2 + fVar41 * fVar19;
              local_140 = fVar44 * fVar17 + fVar43 * fVar11 + fVar41 * fVar47;
              fStack_13c = fVar44 * fVar18 + fVar43 * fVar12 + fVar41 * fVar48;
              pfVar1 = (float *)(lVar7 + 0x18 + lVar37 * 0x30);
              fVar43 = *pfVar1;
              fVar44 = pfVar1[1];
              fVar41 = pfVar1[2];
              uVar3 = *(undefined8 *)(lVar7 + 0x24 + lVar37 * 0x30);
              fVar45 = (float)uVar3;
              fVar46 = (float)((ulonglong)uVar3 >> 0x20);
              fStack_138 = fVar44 * fVar16 + fVar43 * fVar2 + fVar41 * fVar19;
              fStack_134 = fVar44 * fVar17 + fVar43 * fVar11 + fVar41 * fVar47;
              fStack_130 = fVar44 * fVar18 + fVar43 * fVar12 + fVar41 * fVar48;
              fVar43 = *(float *)(lVar7 + 0x2c + lVar37 * 0x30);
              fStack_12c = fVar45 * fVar2 + fVar13 + fVar46 * fVar16 + fVar43 * fVar19;
              fStack_128 = fVar45 * fVar11 + fVar14 + fVar46 * fVar17 + fVar43 * fVar47;
              fStack_124 = fVar45 * fVar12 + fVar15 + fVar46 * fVar18 + fVar43 * fVar48;
              FRenderTransform::Orthogonalize((FRenderTransform *)&local_150._s_0);
              uVar3 = CONCAT44(local_150._s_0.Y,local_150._s_0.X);
              uVar22 = CONCAT44(fStack_144,local_150._s_0.Z);
              uVar23 = CONCAT44(fStack_13c,local_140);
              uVar24 = CONCAT44(fStack_134,fStack_138);
              uVar25 = CONCAT44(fStack_12c,fStack_130);
              uVar26 = CONCAT44(fStack_124,fStack_128);
              uVar32 = 0;
              if ((int)uVar33 < pTVar9->ArrayNum) {
                uVar32 = ~uVar33 >> 0x1f;
              }
              if ((uVar32 == 0) &&
                 (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar28)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              pFVar8 = (pTVar9->AllocatorInstance).Data;
              *(undefined8 *)(pFVar8 + lVar38 * 0x30) = uVar3;
              *(undefined8 *)(pFVar8 + lVar38 * 0x30 + 8) = uVar22;
              *(undefined8 *)(pFVar8 + lVar38 * 0x30 + 0x10) = uVar23;
              *(undefined8 *)(pFVar8 + lVar38 * 0x30 + 0x10 + 8) = uVar24;
              *(undefined8 *)(pFVar8 + lVar38 * 0x30 + 0x20) = uVar25;
              *(undefined8 *)(pFVar8 + lVar38 * 0x30 + 0x20 + 8) = uVar26;
            }
            local_228.ItemIndex = local_228.ItemIndex + 1;
            if (local_228.bUseIterator != false) break;
LAB_147d628ca:
            bVar28 = SBORROW4(local_228.ItemIndex,local_228.MaxNum);
            iVar39 = local_228.ItemIndex - local_228.MaxNum;
          }
          local_228.It.CurrentElement = local_228.It.CurrentElement & 0xfffffffc;
          FInstanceAttributeTracker::FAnyValidIterator<3>::AdvanceUntilAny(&local_228.It);
        } while( true );
      }
    }
LAB_147d62d64:
    ApplyAttributeChanges<FReorderTableIndexRemap>(local_1b8,param_1,local_298,local_230);
    return;
  }
  fVar2 = *(float *)((longlong)&param_1->_padding_ + 4);
  uVar3 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  fVar47 = (float)uVar3;
  fVar48 = (float)((ulonglong)uVar3 >> 0x20);
  fVar11 = *(float *)plVar34;
  fVar12 = *(float *)((longlong)&param_1->_padding_ + 4);
  fVar13 = *(float *)&param_1->_padding_;
  fVar14 = *(float *)((longlong)&param_1->_padding_ + 4);
  fVar15 = *(float *)&param_1->_padding_;
  fVar16 = *(float *)((longlong)&param_1->_padding_ + 4);
  fVar17 = *(float *)&param_1->_padding_;
  fVar18 = *(float *)((longlong)&param_1->_padding_ + 4);
  fVar19 = *(float *)&param_1->_padding_;
  bVar29 = FRenderTransform::IsScaleNonUniform((FRenderTransform *)plVar34);
  if (!bVar29) {
    if (bVar28) {
      local_268 = '\0';
      local_258.Tracker = (FInstanceAttributeTracker *)0x0;
      local_258.ElementIndex = 0;
      local_258._16_8_ = local_258._16_8_ & 0xffffffff00000000;
      local_260 = iVar35;
    }
    else {
      iVar35 = (int)param_1->_padding_;
      if ((int)param_1->_padding_ < iVar35) {
        iVar35 = (int)param_1->_padding_;
      }
      uVar32 = iVar35 >> 0x1f & 7;
      uVar30 = iVar35 + uVar32;
      uVar32 = (uVar30 & 7) - uVar32;
      uVar30 = (int)uVar30 >> 3;
      uStack_2a4 = uVar33;
      local_2b0 = param_1;
      uStack_2a8 = uVar30;
      local_2a0 = uVar32;
      if ((-1 < (int)uVar30) && (iVar35 = (int)param_1->_padding_, (int)uVar30 < iVar35)) {
        uVar31 = 0;
        if ((int)uVar30 < iVar35) {
          uVar31 = ~uVar30 >> 0x1f;
        }
        if ((uVar31 == 0) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar28)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        uStack_2a4 = *(uint *)(param_1->_padding_ + (longlong)(int)uVar30 * 4) & 0x33333333;
      }
      uStack_2a4 = uStack_2a4 >> ((char)uVar32 * '\x04' & 0x1fU);
      iVar35 = (int)param_1->_padding_;
      if ((int)uVar30 < iVar35) {
LAB_147d624a0:
        if (uStack_2a4 == 0) {
          uVar30 = uVar30 + 1;
          local_2a0 = 0;
          uStack_2a8 = uVar30;
          if ((int)uVar30 < iVar35) goto code_r0x000147d624b6;
          uStack_2a4 = 0;
        }
        else {
          local_1bc = 0;
          if (uStack_2a4 != 0) {
            for (; (uStack_2a4 >> local_1bc & 1) == 0; local_1bc = local_1bc + 1) {
            }
          }
          uVar33 = 0x20;
          if (uStack_2a4 != 0) {
            uVar33 = local_1bc;
          }
          uStack_2a4 = uStack_2a4 >> ((char)(uVar33 >> 2) * '\x04' & 0x1fU);
          local_2a0 = uVar32 + (uVar33 >> 2);
        }
      }
LAB_147d62540:
      local_268 = '\x01';
      local_260 = 0;
      local_258._16_8_ = CONCAT44(uStack_29c,local_2a0);
      local_258.CurrentElement = uStack_2a4;
      local_258.ElementIndex = uStack_2a8;
      local_258.Tracker = (FInstanceAttributeTracker *)local_2b0;
    }
    local_264 = 0;
    do {
      cVar27 = local_268;
      if (local_268 == '\0') goto LAB_147d6259a;
      iVar35 = *(int *)((longlong)&(local_258.Tracker)->FirstChangedIndex + 4) + 1;
      if ((int)*(longlong *)&(local_258.Tracker)->MaxIndex < iVar35) {
        iVar35 = (int)*(longlong *)&(local_258.Tracker)->MaxIndex;
      }
      iVar40 = local_258.ElementOffset + local_258.ElementIndex * 8;
      bVar28 = SBORROW4(iVar40,iVar35);
      iVar40 = iVar40 - iVar35;
      while( true ) {
        uVar33 = local_264;
        iVar39 = local_2b4;
        if (bVar28 == iVar40 < 0) goto LAB_147d627cc;
        lVar37 = (longlong)(int)local_264;
        uVar32 = local_264;
        if (cVar27 != '\0') {
          uVar32 = local_258.ElementOffset + local_258.ElementIndex * 8;
        }
        uVar32 = FReorderTableIndexRemap::operator[](local_298,uVar32);
        lVar38 = (longlong)(int)uVar32;
        if (uVar32 != 0xffffffff) {
          uVar30 = 0;
          if ((int)uVar33 < (int)param_1->_padding_) {
            uVar30 = ~uVar33 >> 0x1f;
          }
          if ((uVar30 == 0) &&
             (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar28)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pTVar9 = local_1d8;
          lVar7 = param_1->_padding_;
          pfVar1 = (float *)(lVar7 + lVar37 * 0x30);
          fVar43 = *pfVar1;
          fVar44 = pfVar1[1];
          fVar41 = pfVar1[2];
          local_120 = fVar44 * fVar14 + fVar43 * fVar11 + fVar41 * fVar17;
          fStack_11c = fVar44 * fVar15 + fVar43 * fVar12 + fVar41 * fVar18;
          fStack_118 = fVar44 * fVar16 + fVar43 * fVar13 + fVar41 * fVar19;
          pfVar1 = (float *)(lVar7 + 0xc + lVar37 * 0x30);
          fVar43 = *pfVar1;
          fVar44 = pfVar1[1];
          fVar41 = pfVar1[2];
          fStack_114 = fVar44 * fVar14 + fVar43 * fVar11 + fVar41 * fVar17;
          fStack_110 = fVar44 * fVar15 + fVar43 * fVar12 + fVar41 * fVar18;
          fStack_10c = fVar44 * fVar16 + fVar43 * fVar13 + fVar41 * fVar19;
          pfVar1 = (float *)(lVar7 + 0x18 + lVar37 * 0x30);
          fVar43 = *pfVar1;
          fVar44 = pfVar1[1];
          fVar41 = pfVar1[2];
          uVar3 = *(undefined8 *)(lVar7 + 0x24 + lVar37 * 0x30);
          fVar45 = (float)uVar3;
          fVar46 = (float)((ulonglong)uVar3 >> 0x20);
          uVar3 = CONCAT44(fStack_11c,local_120);
          uVar22 = CONCAT44(fStack_114,fStack_118);
          local_108 = fVar44 * fVar14 + fVar43 * fVar11 + fVar41 * fVar17;
          fStack_104 = fVar44 * fVar15 + fVar43 * fVar12 + fVar41 * fVar18;
          fVar44 = fVar44 * fVar16 + fVar43 * fVar13 + fVar41 * fVar19;
          fVar43 = *(float *)(lVar7 + 0x2c + lVar37 * 0x30);
          uVar23 = CONCAT44(fStack_10c,fStack_110);
          uVar24 = CONCAT44(fStack_104,local_108);
          uVar30 = 0;
          if ((int)uVar32 < local_1d8->ArrayNum) {
            uVar30 = ~uVar32 >> 0x1f;
          }
          fVar41 = fVar45 * fVar11 + fVar47 + fVar46 * fVar14 + fVar43 * fVar17;
          fVar42 = fVar45 * fVar12 + fVar48 + fVar46 * fVar15 + fVar43 * fVar18;
          fVar43 = fVar45 * fVar13 + fVar2 + fVar46 * fVar16 + fVar43 * fVar19;
          fStack_100 = fVar44;
          fStack_fc = fVar41;
          fStack_f8 = fVar42;
          fStack_f4 = fVar43;
          if ((uVar30 == 0) &&
             (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar28)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pFVar8 = (pTVar9->AllocatorInstance).Data;
          *(undefined8 *)(pFVar8 + lVar38 * 0x30) = uVar3;
          *(undefined8 *)(pFVar8 + lVar38 * 0x30 + 8) = uVar22;
          *(undefined8 *)(pFVar8 + lVar38 * 0x30 + 0x10) = uVar23;
          *(undefined8 *)(pFVar8 + lVar38 * 0x30 + 0x10 + 8) = uVar24;
          pFVar8 = pFVar8 + lVar38 * 0x30 + 0x20;
          *(float *)pFVar8 = fVar44;
          *(float *)(pFVar8 + 4) = fVar41;
          *(float *)(pFVar8 + 8) = fVar42;
          *(float *)(pFVar8 + 0xc) = fVar43;
        }
        local_264 = uVar33 + 1;
        if (cVar27 != '\0') break;
LAB_147d6259a:
        bVar28 = SBORROW4(local_264,local_260);
        iVar40 = local_264 - local_260;
      }
      local_258.CurrentElement = local_258.CurrentElement & 0xfffffffc;
      FInstanceAttributeTracker::FAnyValidIterator<3>::AdvanceUntilAny(&local_258);
    } while( true );
  }
  if (bVar28) {
    local_290 = '\0';
    local_280.Tracker = (FInstanceAttributeTracker *)0x0;
    local_280.ElementIndex = 0;
    local_280._16_8_ = local_280._16_8_ & 0xffffffff00000000;
    local_288 = iVar35;
  }
  else {
    iVar35 = (int)param_1->_padding_;
    if ((int)param_1->_padding_ < iVar35) {
      iVar35 = (int)param_1->_padding_;
    }
    uVar32 = iVar35 >> 0x1f & 7;
    uVar30 = iVar35 + uVar32;
    uVar32 = (uVar30 & 7) - uVar32;
    uVar30 = (int)uVar30 >> 3;
    uStack_2a4 = uVar33;
    local_2b0 = param_1;
    uStack_2a8 = uVar30;
    local_2a0 = uVar32;
    if ((-1 < (int)uVar30) && (iVar35 = (int)param_1->_padding_, (int)uVar30 < iVar35)) {
      uVar31 = 0;
      if ((int)uVar30 < iVar35) {
        uVar31 = ~uVar30 >> 0x1f;
      }
      if ((uVar31 == 0) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar28)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uStack_2a4 = *(uint *)(param_1->_padding_ + (longlong)(int)uVar30 * 4) & 0x33333333;
    }
    uStack_2a4 = uStack_2a4 >> ((char)uVar32 * '\x04' & 0x1fU);
    iVar35 = (int)param_1->_padding_;
    if ((int)uVar30 < iVar35) {
LAB_147d620b0:
      if (uStack_2a4 == 0) {
        uVar30 = uVar30 + 1;
        local_2a0 = 0;
        uStack_2a8 = uVar30;
        if ((int)uVar30 < iVar35) goto code_r0x000147d620c6;
        uStack_2a4 = 0;
      }
      else {
        local_1c0 = 0;
        if (uStack_2a4 != 0) {
          for (; (uStack_2a4 >> local_1c0 & 1) == 0; local_1c0 = local_1c0 + 1) {
          }
        }
        uVar33 = 0x20;
        if (uStack_2a4 != 0) {
          uVar33 = local_1c0;
        }
        uStack_2a4 = uStack_2a4 >> ((char)(uVar33 >> 2) * '\x04' & 0x1fU);
        local_2a0 = uVar32 + (uVar33 >> 2);
      }
    }
LAB_147d62150:
    local_290 = '\x01';
    local_288 = 0;
    local_280._16_8_ = CONCAT44(uStack_29c,local_2a0);
    local_280.CurrentElement = uStack_2a4;
    local_280.ElementIndex = uStack_2a8;
    local_280.Tracker = (FInstanceAttributeTracker *)local_2b0;
  }
  local_28c = 0;
  do {
    cVar27 = local_290;
    if (local_290 == '\0') goto LAB_147d621b5;
    iVar35 = *(int *)((longlong)&(local_280.Tracker)->FirstChangedIndex + 4) + 1;
    if ((int)*(longlong *)&(local_280.Tracker)->MaxIndex < iVar35) {
      iVar35 = (int)*(longlong *)&(local_280.Tracker)->MaxIndex;
    }
    iVar40 = local_280.ElementOffset + local_280.ElementIndex * 8;
    bVar28 = SBORROW4(iVar40,iVar35);
    iVar40 = iVar40 - iVar35;
    while( true ) {
      uVar33 = local_28c;
      iVar39 = local_2b4;
      if (bVar28 == iVar40 < 0) goto LAB_147d627cc;
      lVar37 = (longlong)(int)local_28c;
      uVar32 = local_28c;
      if (cVar27 != '\0') {
        uVar32 = local_280.ElementOffset + local_280.ElementIndex * 8;
      }
      uVar32 = FReorderTableIndexRemap::operator[](local_298,uVar32);
      lVar38 = (longlong)(int)uVar32;
      if (uVar32 != 0xffffffff) {
        uVar30 = 0;
        if ((int)uVar33 < (int)param_1->_padding_) {
          uVar30 = ~uVar33 >> 0x1f;
        }
        if ((uVar30 == 0) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar28)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        lVar7 = param_1->_padding_;
        pfVar1 = (float *)(lVar7 + lVar37 * 0x30);
        fVar43 = *pfVar1;
        fVar44 = pfVar1[1];
        fVar41 = pfVar1[2];
        local_180._s_0.X = fVar44 * fVar14 + fVar43 * fVar11 + fVar41 * fVar17;
        local_180._s_0.Y = fVar44 * fVar15 + fVar43 * fVar12 + fVar41 * fVar18;
        local_180._s_0.Z = fVar44 * fVar16 + fVar43 * fVar13 + fVar41 * fVar19;
        pfVar1 = (float *)(lVar7 + 0xc + lVar37 * 0x30);
        fVar43 = *pfVar1;
        fVar44 = pfVar1[1];
        fVar41 = pfVar1[2];
        fStack_174 = fVar44 * fVar14 + fVar43 * fVar11 + fVar41 * fVar17;
        local_170 = fVar44 * fVar15 + fVar43 * fVar12 + fVar41 * fVar18;
        fStack_16c = fVar44 * fVar16 + fVar43 * fVar13 + fVar41 * fVar19;
        pfVar1 = (float *)(lVar7 + 0x18 + lVar37 * 0x30);
        fVar43 = *pfVar1;
        fVar44 = pfVar1[1];
        fVar41 = pfVar1[2];
        uVar3 = *(undefined8 *)(lVar7 + 0x24 + lVar37 * 0x30);
        fVar45 = (float)uVar3;
        fVar46 = (float)((ulonglong)uVar3 >> 0x20);
        fStack_168 = fVar44 * fVar14 + fVar43 * fVar11 + fVar41 * fVar17;
        fStack_164 = fVar44 * fVar15 + fVar43 * fVar12 + fVar41 * fVar18;
        fStack_160 = fVar44 * fVar16 + fVar43 * fVar13 + fVar41 * fVar19;
        fVar43 = *(float *)(lVar7 + 0x2c + lVar37 * 0x30);
        fStack_15c = fVar45 * fVar11 + fVar47 + fVar46 * fVar14 + fVar43 * fVar17;
        fStack_158 = fVar45 * fVar12 + fVar48 + fVar46 * fVar15 + fVar43 * fVar18;
        fStack_154 = fVar45 * fVar13 + fVar2 + fVar46 * fVar16 + fVar43 * fVar19;
        FRenderTransform::Orthogonalize((FRenderTransform *)&local_180._s_0);
        pTVar9 = local_1d8;
        uVar3 = CONCAT44(local_180._s_0.Y,local_180._s_0.X);
        uVar22 = CONCAT44(fStack_174,local_180._s_0.Z);
        uVar23 = CONCAT44(fStack_16c,local_170);
        uVar24 = CONCAT44(fStack_164,fStack_168);
        uVar25 = CONCAT44(fStack_15c,fStack_160);
        uVar26 = CONCAT44(fStack_154,fStack_158);
        uVar30 = 0;
        if ((int)uVar32 < local_1d8->ArrayNum) {
          uVar30 = ~uVar32 >> 0x1f;
        }
        if ((uVar30 == 0) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar28)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pFVar8 = (pTVar9->AllocatorInstance).Data;
        *(undefined8 *)(pFVar8 + lVar38 * 0x30) = uVar3;
        *(undefined8 *)(pFVar8 + lVar38 * 0x30 + 8) = uVar22;
        *(undefined8 *)(pFVar8 + lVar38 * 0x30 + 0x10) = uVar23;
        *(undefined8 *)(pFVar8 + lVar38 * 0x30 + 0x10 + 8) = uVar24;
        *(undefined8 *)(pFVar8 + lVar38 * 0x30 + 0x20) = uVar25;
        *(undefined8 *)(pFVar8 + lVar38 * 0x30 + 0x20 + 8) = uVar26;
      }
      local_28c = uVar33 + 1;
      if (cVar27 != '\0') break;
LAB_147d621b5:
      bVar28 = SBORROW4(local_28c,local_288);
      iVar40 = local_28c - local_288;
    }
    local_280.CurrentElement = local_280.CurrentElement & 0xfffffffc;
    FInstanceAttributeTracker::FAnyValidIterator<3>::AdvanceUntilAny(&local_280);
  } while( true );
code_r0x000147d624b6:
  if (((int)uVar30 < 0) &&
     (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar28)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  iVar35 = (int)param_1->_padding_;
  uStack_2a4 = *(uint *)(param_1->_padding_ + (longlong)(int)uVar30 * 4) & 0x33333333;
  uVar32 = uVar33;
  if (iVar35 <= (int)uVar30) goto LAB_147d62540;
  goto LAB_147d624a0;
code_r0x000147d620c6:
  if (((int)uVar30 < 0) &&
     (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar28)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  iVar35 = (int)param_1->_padding_;
  uStack_2a4 = *(uint *)(param_1->_padding_ + (longlong)(int)uVar30 * 4) & 0x33333333;
  uVar32 = uVar33;
  if (iVar35 <= (int)uVar30) goto LAB_147d62150;
  goto LAB_147d620b0;
}

// UpdateIdMapping<FIdentityIndexRemap> @ 147d76650

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FISMCInstanceDataSceneProxy::UpdateIdMapping<FIdentityIndexRemap>
          (FISMCInstanceDataSceneProxy *this,FISMInstanceUpdateChangeSet *param_1,
          FIdentityIndexRemap *param_2)

{
  ::UpdateIdMapping<FIdentityIndexRemap>
            ((FInstanceUpdateChangeSet *)param_1,param_2,&this->InstanceIdIndexMap);
  return;
}

// FISMCInstanceDataSceneProxy @ 147d779a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FISMCInstanceDataSceneProxy * __thiscall
FISMCInstanceDataSceneProxy::FISMCInstanceDataSceneProxy
          (FISMCInstanceDataSceneProxy *this,FStaticShaderPlatform param_1,Type param_2)

{
  undefined1 *puVar1;
  FStaticShaderPlatform FVar2;
  bool bVar3;
  
  FInstanceDataSceneProxy::FInstanceDataSceneProxy((FInstanceDataSceneProxy *)this);
  (this->ShaderPlatform).Platform = param_1.Platform;
  this->_padding_ = (longlong)&___7FISMCInstanceDataSceneProxy__6B_;
  this->bUseLegacyRenderingPath = false;
  this->FeatureLevel = param_2;
  (this->ValidInstanceIdMask).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  (this->ValidInstanceIdMask).NumBits = 0;
  (this->ValidInstanceIdMask).MaxBits = 0x80;
  (this->InstanceDataUpdateTaskInfo).InstanceDataBufferHeader.bInstanceDataIsGPUOnly = false;
  (this->InstanceIdIndexMap).IndexToIdMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstanceIdIndexMap).IndexToIdMap.ArrayNum = 0;
  (this->InstanceIdIndexMap).IndexToIdMap.ArrayMax = 0;
  (this->InstanceIdIndexMap).IdToIndexMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstanceIdIndexMap).IdToIndexMap.ArrayNum = 0;
  (this->InstanceIdIndexMap).IdToIndexMap.ArrayMax = 0;
  (this->InstanceIdIndexMap).NumInstances = 0;
  (this->InstanceDataUpdateTaskInfo).UpdateTaskHandle.Pimpl.Reference = (FTaskBase *)0x0;
  (this->InstanceDataUpdateTaskInfo).InstanceDataBufferHeader.NumInstances = 0;
  (this->InstanceDataUpdateTaskInfo).InstanceDataBufferHeader.PayloadDataStride = 0;
  (this->InstanceDataUpdateTaskInfo).InstanceDataBufferHeader.Flags.Packed = 0;
  (this->PrecomputedOptimizationData).Object = (FISMPrecomputedSpatialHashData *)0x0;
  (this->PrecomputedOptimizationData).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  FVar2.Platform = (this->ShaderPlatform).Platform;
  this->bIsNew = true;
  this->bBuildOptimized = false;
  bVar3 = UseGPUScene(FVar2,(FGenericStaticFeatureLevel)param_2);
  this->bUseLegacyRenderingPath = !bVar3;
  return this;
}

// ~FISMCInstanceDataSceneProxy @ 147d7b1f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FISMCInstanceDataSceneProxy::~FISMCInstanceDataSceneProxy(FISMCInstanceDataSceneProxy *this)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  FTaskBase *pFVar3;
  FScriptContainerElement *pFVar4;
  ForElementType<unsigned_int> FVar5;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PrecomputedOptimizationData).SharedReferenceCount.ReferenceController);
  pFVar3 = (this->InstanceDataUpdateTaskInfo).UpdateTaskHandle.Pimpl.Reference;
  if (pFVar3 != (FTaskBase *)0x0) {
    LOCK();
    paVar1 = &pFVar3->RefCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar3->_padding_)(pFVar3,1);
    }
  }
  pFVar4 = (this->InstanceIdIndexMap).IdToIndexMap.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->InstanceIdIndexMap).IndexToIdMap.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  FVar5 = (this->ValidInstanceIdMask).AllocatorInstance.SecondaryData;
  if (FVar5 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar5);
  }
  FInstanceDataSceneProxy::~FInstanceDataSceneProxy((FInstanceDataSceneProxy *)this);
  return;
}

// Build @ 147d88990

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FISMCInstanceDataSceneProxy::Build
          (FISMCInstanceDataSceneProxy *this,FISMInstanceUpdateChangeSet *param_1)

{
  int *piVar1;
  code *pcVar2;
  FAccessTag FVar3;
  FAccessTag FVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  FIdentityIndexRemap local_res8 [8];
  FIdentityIndexRemap local_res10 [8];
  uint local_res18;
  EKind EStackX_1c;
  FWriteView local_98;
  
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Emerald,"FISMCInstanceDataSceneProxy_Build");
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId288,"FISMCInstanceDataSceneProxy_Build",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh\\ISMInstanceDataSceneProxy.cpp"
               ,0x120);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId288);
  }
  FInstanceDataSceneProxy::DecStatCounters((FInstanceDataSceneProxy *)this);
  if (((char)param_1->_padding_ == '\0') &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ChangeSet.IsFullUpdate()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh\\ISMInstanceDataSceneProxy.cpp"
                         ,0x123,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  EStackX_1c = Writer;
  uVar7 = ((uint)((ulonglong)this >> 0x14) & 0xffff ^ (uint)((ulonglong)this >> 4)) * -0x7a143595;
  local_res18 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
  local_res18 = local_res18 >> 0x10 ^ local_res18;
  FVar3.Kind = Writer;
  FVar3.WriterTag = local_res18;
  FInstanceSceneDataBuffers::BeginWriteAccess
            ((FInstanceSceneDataBuffers *)&this->_padding_,&local_98,FVar3);
  *local_98.Flags = *(FInstanceDataFlags *)((longlong)&param_1->_padding_ + 2);
  if ((this->bBuildOptimized == false) || (param_1->PostUpdateNumInstances == 0)) {
    ::UpdateIdMapping<FIdentityIndexRemap>
              ((FInstanceUpdateChangeSet *)param_1,local_res8,&this->InstanceIdIndexMap);
    iVar6 = (this->InstanceIdIndexMap).IndexToIdMap.ArrayNum;
    piVar1 = &(this->InstanceIdIndexMap).NumInstances;
    if (iVar6 == 0) {
      iVar6 = *piVar1;
    }
    if ((param_1->PostUpdateNumInstances != iVar6) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ChangeSet.PostUpdateNumInstances == InstanceIdIndexMap.GetMaxInstanceIndex()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh\\ISMInstanceDataSceneProxy.cpp"
                           ,0x137,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar6 = (this->InstanceIdIndexMap).IndexToIdMap.ArrayNum;
    if (iVar6 == 0) {
      iVar6 = *piVar1;
    }
    ApplyDataChanges<FIdentityIndexRemap>(this,param_1,local_res10,iVar6,&local_98);
  }
  else {
    BuildFromOptimizedDataBuffers(this,param_1,&this->InstanceIdIndexMap,&local_98);
  }
  FVar4.Kind = EStackX_1c;
  FVar4.WriterTag = local_res18;
  FInstanceSceneDataBuffers::EndWriteAccess((FInstanceSceneDataBuffers *)&this->_padding_,FVar4);
  FInstanceSceneDataBuffers::ValidateData((FInstanceSceneDataBuffers *)&this->_padding_);
  FInstanceDataSceneProxy::IncStatCounters((FInstanceDataSceneProxy *)this);
  this->bBuildOptimized = false;
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// BuildFromLegacyData @ 147d899a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FISMCInstanceDataSceneProxy::BuildFromLegacyData
          (FISMCInstanceDataSceneProxy *this,
          TUniquePtr<FStaticMeshInstanceData,TDefaultDelete<FStaticMeshInstanceData>_> *param_1,
          FRenderBounds *param_2,TArray<int,TSizedDefaultAllocator<32>_> *param_3)

{
  return;
}

// BuildFromOptimizedDataBuffers @ 147d8a450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FISMCInstanceDataSceneProxy::BuildFromOptimizedDataBuffers
          (FISMCInstanceDataSceneProxy *this,FISMInstanceUpdateChangeSet *param_1,
          FInstanceIdIndexMap *param_2,FWriteView *param_3)

{
  longlong *this_00;
  float *pfVar1;
  float fVar2;
  undefined8 uVar3;
  FRenderTransform *pFVar4;
  TVector<double> *pTVar5;
  TArray<FRenderBounds,TSizedDefaultAllocator<32>_> *pTVar6;
  FISMPrecomputedSpatialHashData *pFVar7;
  TArray<FRenderTransform,TSizedDefaultAllocator<32>_> *pTVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  FAccessTag FVar11;
  code *pcVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  double dVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  FSrcIndexRemap FVar28;
  bool bVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  int iVar33;
  int iVar34;
  FScriptContainerElement *pFVar35;
  longlong lVar36;
  FISMCInstanceDataSceneProxy *pFVar37;
  FWriteView *pFVar38;
  TSharedPtr<FISMPrecomputedSpatialHashData_const_,1> *pTVar39;
  uint uVar40;
  bool bVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined1 auStackY_2d8 [32];
  undefined1 local_298;
  FIdentityIndexRemap local_297 [7];
  FWriteView *local_290;
  FDeltaRange<1> local_288;
  FDeltaRange<1> local_278;
  FSrcIndexRemap local_268;
  FISMCInstanceDataSceneProxy *local_260;
  FInstanceSceneDataImmutable local_258;
  FConstIterator local_248;
  FConstIterator local_220;
  FConstIterator local_1f8;
  FConstIterator local_1d0;
  TVector<float>_u_0 local_1a8;
  TSharedPtr<FISMPrecomputedSpatialHashData_const_,1> *local_198;
  longlong local_190;
  FSharedReferencer<1> FStack_188;
  TVector<float>_u_0 local_180;
  float fStack_174;
  float local_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  TVector<float>_u_0 local_150;
  float fStack_144;
  float local_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float local_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float local_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  ulonglong local_c0;
  
  local_c0 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  local_290 = param_3;
  local_260 = this;
  FGenericPlatformMisc::BeginNamedEvent
            (&FColor::Emerald,"FISMCInstanceDataSceneProxy_BuildFromOptimizedDataBuffers");
  bVar41 = -1 < CpuChannel->Enabled;
  if (bVar41) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId183,
               "FISMCInstanceDataSceneProxy_BuildFromOptimizedDataBuffers",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh\\ISMInstanceDataSceneProxy.cpp"
               ,0xb7);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId183);
  }
  pFVar4 = param_3->PrimitiveToRelativeWorld;
  this_00 = &param_1->_padding_;
  lVar36 = param_1->_padding_;
  *(longlong *)&pFVar4->TransformRows[0].field0_0x0 = *this_00;
  *(longlong *)((longlong)&pFVar4->TransformRows[0].field0_0x0 + 8) = lVar36;
  lVar36 = param_1->_padding_;
  *(longlong *)((longlong)&pFVar4->TransformRows[1].field0_0x0 + 4) = param_1->_padding_;
  *(longlong *)&pFVar4->TransformRows[2].field0_0x0 = lVar36;
  lVar36 = param_1->_padding_;
  *(longlong *)((longlong)&pFVar4->TransformRows[2].field0_0x0 + 8) = param_1->_padding_;
  *(longlong *)((longlong)&(pFVar4->Origin).field0_0x0 + 4) = lVar36;
  pTVar5 = param_3->PrimitiveWorldSpaceOffset;
  dVar22 = (double)param_1->_padding_;
  (pTVar5->field0_0x0)._s_0.X = (double)param_1->_padding_;
  (pTVar5->field0_0x0)._s_0.Y = dVar22;
  (pTVar5->field0_0x0)._s_0.Z = (double)param_1->_padding_;
  if (((param_1->_padding_ & 0x200000) != 0) &&
     (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                         ("!ChangeSet.Flags.bHasPerInstanceLocalBounds",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh\\ISMInstanceDataSceneProxy.cpp"
                          ,0xbc,L""), bVar29)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  TArray<FRenderBounds,TSizedDefaultAllocator<32>_>::operator=
            (param_3->InstanceLocalBounds,
             (TArray<FRenderBounds,TSizedDefaultAllocator<32>_> *)&param_1->_padding_);
  GetLocalBoundsPadExtent
            ((TVector<float> *)&local_1a8._s_0,param_3->PrimitiveToRelativeWorld,
             *(float *)((longlong)&param_1->_padding_ + 4));
  pTVar6 = param_3->InstanceLocalBounds;
  iVar33 = pTVar6->ArrayNum;
  pFVar35 = (pTVar6->AllocatorInstance).Data;
  pFVar10 = pFVar35 + (longlong)iVar33 * 0x18;
  while( true ) {
    if (pTVar6->ArrayNum != iVar33) {
      local_298 = 0;
      `TCheckedPointerIterator<FRenderBounds,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_298);
    }
    pFVar38 = local_290;
    if (pFVar35 == pFVar10) break;
    *(float *)pFVar35 = *(float *)pFVar35 - local_1a8._s_0.X;
    *(float *)(pFVar35 + 4) = *(float *)(pFVar35 + 4) - local_1a8._s_0.Y;
    *(float *)(pFVar35 + 8) = *(float *)(pFVar35 + 8) - local_1a8._s_0.Z;
    *(float *)(pFVar35 + 0xc) = local_1a8._s_0.X + *(float *)(pFVar35 + 0xc);
    *(float *)(pFVar35 + 0x10) = local_1a8._s_0.Y + *(float *)(pFVar35 + 0x10);
    *(float *)(pFVar35 + 0x14) = local_1a8._s_0.Z + *(float *)(pFVar35 + 0x14);
    pFVar35 = pFVar35 + 0x18;
  }
  pTVar39 = &local_260->PrecomputedOptimizationData;
  pFVar7 = pTVar39->Object;
  local_198 = pTVar39;
  if (pFVar7 != (FISMPrecomputedSpatialHashData *)0x0) {
    iVar33 = (int)param_1->_padding_;
    if ((pFVar7->ProxyIndexToComponentIndexRemap).ArrayNum == 0) {
      pTVar8 = local_290->InstanceToPrimitiveRelative;
      if ((((char)param_1->_padding_ == '\0') &&
          (*(char *)((longlong)&param_1->_padding_ + 6) == '\0')) &&
         (iVar34 = *(int *)((longlong)&param_1->_padding_ + 4) + (int)param_1->_padding_,
         iVar34 != iVar33)) {
        local_288.bFullUpdate = false;
        iVar33 = iVar34;
      }
      else {
        local_288.bFullUpdate = true;
      }
      local_288.NumItems = iVar33;
      local_288.Tracker = (FInstanceAttributeTracker *)param_1;
      TArray<FRenderTransform,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (pTVar8,param_1->PostUpdateNumInstances,Default);
      if (iVar33 != 0) {
        fVar2 = *(float *)((longlong)&param_1->_padding_ + 4);
        uVar3 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
        fVar48 = (float)uVar3;
        fVar49 = (float)((ulonglong)uVar3 >> 0x20);
        fVar13 = *(float *)this_00;
        fVar14 = *(float *)((longlong)&param_1->_padding_ + 4);
        fVar15 = *(float *)&param_1->_padding_;
        fVar16 = *(float *)((longlong)&param_1->_padding_ + 4);
        fVar17 = *(float *)&param_1->_padding_;
        fVar18 = *(float *)((longlong)&param_1->_padding_ + 4);
        fVar19 = *(float *)&param_1->_padding_;
        fVar20 = *(float *)((longlong)&param_1->_padding_ + 4);
        fVar21 = *(float *)&param_1->_padding_;
        bVar29 = FRenderTransform::IsScaleNonUniform((FRenderTransform *)this_00);
        if (!bVar29) {
          FInstanceAttributeTracker::FDeltaRange<1>::GetIterator(&local_288,&local_220);
          do {
            if (local_220.bUseIterator == false) goto LAB_147d8a966;
            iVar33 = (local_220.It.Tracker)->LastChangedIndex + 1;
            if ((local_220.It.Tracker)->MaxIndex < iVar33) {
              iVar33 = (local_220.It.Tracker)->MaxIndex;
            }
            iVar34 = local_220.It.ElementOffset + local_220.It.ElementIndex * 8;
            bVar29 = SBORROW4(iVar34,iVar33);
            iVar34 = iVar34 - iVar33;
            while( true ) {
              if (bVar29 == iVar34 < 0) goto LAB_147d8ab6d;
              lVar36 = (longlong)local_220.ItemIndex;
              uVar40 = local_220.ItemIndex;
              if (local_220.bUseIterator != false) {
                uVar40 = local_220.It.ElementOffset + local_220.It.ElementIndex * 8;
              }
              uVar30 = 0;
              if (local_220.ItemIndex < (int)param_1->_padding_) {
                uVar30 = (uint)~local_220.ItemIndex >> 0x1f;
              }
              if ((uVar30 == 0) &&
                 (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar29)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              lVar9 = param_1->_padding_;
              pfVar1 = (float *)(lVar9 + lVar36 * 0x30);
              fVar44 = *pfVar1;
              fVar45 = pfVar1[1];
              fVar42 = pfVar1[2];
              local_120 = fVar45 * fVar16 + fVar44 * fVar13 + fVar42 * fVar19;
              fStack_11c = fVar45 * fVar17 + fVar44 * fVar14 + fVar42 * fVar20;
              fStack_118 = fVar45 * fVar18 + fVar44 * fVar15 + fVar42 * fVar21;
              pfVar1 = (float *)(lVar9 + 0xc + lVar36 * 0x30);
              fVar44 = *pfVar1;
              fVar45 = pfVar1[1];
              fVar42 = pfVar1[2];
              fStack_114 = fVar45 * fVar16 + fVar44 * fVar13 + fVar42 * fVar19;
              fStack_110 = fVar45 * fVar17 + fVar44 * fVar14 + fVar42 * fVar20;
              fStack_10c = fVar45 * fVar18 + fVar44 * fVar15 + fVar42 * fVar21;
              pfVar1 = (float *)(lVar9 + 0x18 + lVar36 * 0x30);
              fVar44 = *pfVar1;
              fVar45 = pfVar1[1];
              fVar42 = pfVar1[2];
              uVar3 = *(undefined8 *)(lVar9 + 0x24 + lVar36 * 0x30);
              fVar46 = (float)uVar3;
              fVar47 = (float)((ulonglong)uVar3 >> 0x20);
              uVar3 = CONCAT44(fStack_11c,local_120);
              uVar23 = CONCAT44(fStack_114,fStack_118);
              local_108 = fVar45 * fVar16 + fVar44 * fVar13 + fVar42 * fVar19;
              fStack_104 = fVar45 * fVar17 + fVar44 * fVar14 + fVar42 * fVar20;
              fVar45 = fVar45 * fVar18 + fVar44 * fVar15 + fVar42 * fVar21;
              fVar44 = *(float *)(lVar9 + 0x2c + lVar36 * 0x30);
              uVar24 = CONCAT44(fStack_10c,fStack_110);
              uVar25 = CONCAT44(fStack_104,local_108);
              uVar30 = 0;
              if ((int)uVar40 < pTVar8->ArrayNum) {
                uVar30 = ~uVar40 >> 0x1f;
              }
              fVar42 = fVar46 * fVar13 + fVar48 + fVar47 * fVar16 + fVar44 * fVar19;
              fVar43 = fVar46 * fVar14 + fVar49 + fVar47 * fVar17 + fVar44 * fVar20;
              fVar44 = fVar46 * fVar15 + fVar2 + fVar47 * fVar18 + fVar44 * fVar21;
              _fStack_fc = CONCAT44(fVar43,fVar42);
              fStack_100 = fVar45;
              fStack_f4 = fVar44;
              if ((uVar30 == 0) &&
                 (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar29)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              local_220.ItemIndex = local_220.ItemIndex + 1;
              lVar36 = (longlong)(int)uVar40;
              pFVar10 = (pTVar8->AllocatorInstance).Data;
              *(undefined8 *)(pFVar10 + lVar36 * 0x30) = uVar3;
              *(undefined8 *)(pFVar10 + lVar36 * 0x30 + 8) = uVar23;
              *(undefined8 *)(pFVar10 + lVar36 * 0x30 + 0x10) = uVar24;
              *(undefined8 *)(pFVar10 + lVar36 * 0x30 + 0x10 + 8) = uVar25;
              pFVar10 = pFVar10 + lVar36 * 0x30 + 0x20;
              *(float *)pFVar10 = fVar45;
              *(float *)(pFVar10 + 4) = fVar42;
              *(float *)(pFVar10 + 8) = fVar43;
              *(float *)(pFVar10 + 0xc) = fVar44;
              if (local_220.bUseIterator != false) break;
LAB_147d8a966:
              bVar29 = SBORROW4(local_220.ItemIndex,local_220.MaxNum);
              iVar34 = local_220.ItemIndex - local_220.MaxNum;
            }
            local_220.It.CurrentElement = local_220.It.CurrentElement & 0xfffffffc;
            FInstanceAttributeTracker::FAnyValidIterator<3>::AdvanceUntilAny(&local_220.It);
          } while( true );
        }
        FInstanceAttributeTracker::FDeltaRange<1>::GetIterator(&local_288,&local_248);
        do {
          if (local_248.bUseIterator == false) goto LAB_147d8a74a;
          iVar33 = (local_248.It.Tracker)->LastChangedIndex + 1;
          if ((local_248.It.Tracker)->MaxIndex < iVar33) {
            iVar33 = (local_248.It.Tracker)->MaxIndex;
          }
          iVar34 = local_248.It.ElementOffset + local_248.It.ElementIndex * 8;
          bVar29 = SBORROW4(iVar34,iVar33);
          iVar34 = iVar34 - iVar33;
          while( true ) {
            if (bVar29 == iVar34 < 0) goto LAB_147d8ab6d;
            lVar36 = (longlong)local_248.ItemIndex;
            uVar40 = local_248.ItemIndex;
            if (local_248.bUseIterator != false) {
              uVar40 = local_248.It.ElementOffset + local_248.It.ElementIndex * 8;
            }
            uVar30 = 0;
            if (local_248.ItemIndex < (int)param_1->_padding_) {
              uVar30 = (uint)~local_248.ItemIndex >> 0x1f;
            }
            if ((uVar30 == 0) &&
               (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar29)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            lVar9 = param_1->_padding_;
            pfVar1 = (float *)(lVar9 + lVar36 * 0x30);
            fVar44 = *pfVar1;
            fVar45 = pfVar1[1];
            fVar42 = pfVar1[2];
            local_180._s_0.X = fVar45 * fVar16 + fVar44 * fVar13 + fVar42 * fVar19;
            local_180._s_0.Y = fVar45 * fVar17 + fVar44 * fVar14 + fVar42 * fVar20;
            local_180._s_0.Z = fVar45 * fVar18 + fVar44 * fVar15 + fVar42 * fVar21;
            pfVar1 = (float *)(lVar9 + 0xc + lVar36 * 0x30);
            fVar44 = *pfVar1;
            fVar45 = pfVar1[1];
            fVar42 = pfVar1[2];
            fStack_174 = fVar45 * fVar16 + fVar44 * fVar13 + fVar42 * fVar19;
            local_170 = fVar45 * fVar17 + fVar44 * fVar14 + fVar42 * fVar20;
            fStack_16c = fVar45 * fVar18 + fVar44 * fVar15 + fVar42 * fVar21;
            pfVar1 = (float *)(lVar9 + 0x18 + lVar36 * 0x30);
            fVar44 = *pfVar1;
            fVar45 = pfVar1[1];
            fVar42 = pfVar1[2];
            uVar3 = *(undefined8 *)(lVar9 + 0x24 + lVar36 * 0x30);
            fVar46 = (float)uVar3;
            fVar47 = (float)((ulonglong)uVar3 >> 0x20);
            fStack_168 = fVar45 * fVar16 + fVar44 * fVar13 + fVar42 * fVar19;
            fStack_164 = fVar45 * fVar17 + fVar44 * fVar14 + fVar42 * fVar20;
            fStack_160 = fVar45 * fVar18 + fVar44 * fVar15 + fVar42 * fVar21;
            fVar44 = *(float *)(lVar9 + 0x2c + lVar36 * 0x30);
            fStack_15c = fVar46 * fVar13 + fVar48 + fVar47 * fVar16 + fVar44 * fVar19;
            fStack_158 = fVar46 * fVar14 + fVar49 + fVar47 * fVar17 + fVar44 * fVar20;
            fStack_154 = fVar46 * fVar15 + fVar2 + fVar47 * fVar18 + fVar44 * fVar21;
            FRenderTransform::Orthogonalize((FRenderTransform *)&local_180._s_0);
            uVar3 = CONCAT44(local_180._s_0.Y,local_180._s_0.X);
            uVar23 = CONCAT44(fStack_174,local_180._s_0.Z);
            uVar24 = CONCAT44(fStack_16c,local_170);
            uVar25 = CONCAT44(fStack_164,fStack_168);
            uVar26 = CONCAT44(fStack_15c,fStack_160);
            uVar27 = CONCAT44(fStack_154,fStack_158);
            uVar30 = 0;
            if ((int)uVar40 < pTVar8->ArrayNum) {
              uVar30 = ~uVar40 >> 0x1f;
            }
            if ((uVar30 == 0) &&
               (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar29)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            local_248.ItemIndex = local_248.ItemIndex + 1;
            lVar36 = (longlong)(int)uVar40;
            pFVar10 = (pTVar8->AllocatorInstance).Data;
            *(undefined8 *)(pFVar10 + lVar36 * 0x30) = uVar3;
            *(undefined8 *)(pFVar10 + lVar36 * 0x30 + 8) = uVar23;
            *(undefined8 *)(pFVar10 + lVar36 * 0x30 + 0x10) = uVar24;
            *(undefined8 *)(pFVar10 + lVar36 * 0x30 + 0x10 + 8) = uVar25;
            *(undefined8 *)(pFVar10 + lVar36 * 0x30 + 0x20) = uVar26;
            *(undefined8 *)(pFVar10 + lVar36 * 0x30 + 0x20 + 8) = uVar27;
            if (local_248.bUseIterator != false) break;
LAB_147d8a74a:
            bVar29 = SBORROW4(local_248.ItemIndex,local_248.MaxNum);
            iVar34 = local_248.ItemIndex - local_248.MaxNum;
          }
          local_248.It.CurrentElement = local_248.It.CurrentElement & 0xfffffffc;
          FInstanceAttributeTracker::FAnyValidIterator<3>::AdvanceUntilAny(&local_248.It);
        } while( true );
      }
LAB_147d8ab6d:
      pFVar37 = local_260;
      pFVar38 = local_290;
      ApplyAttributeChanges<FIdentityIndexRemap>(local_260,param_1,local_297,local_290);
    }
    else {
      pTVar8 = local_290->InstanceToPrimitiveRelative;
      local_268.IndexRemap = &pFVar7->ProxyIndexToComponentIndexRemap;
      if ((((char)param_1->_padding_ == '\0') &&
          (*(char *)((longlong)&param_1->_padding_ + 6) == '\0')) &&
         (iVar34 = *(int *)((longlong)&param_1->_padding_ + 4) + (int)param_1->_padding_,
         iVar34 != iVar33)) {
        local_278.bFullUpdate = false;
        iVar33 = iVar34;
      }
      else {
        local_278.bFullUpdate = true;
      }
      local_278.NumItems = iVar33;
      local_278.Tracker = (FInstanceAttributeTracker *)param_1;
      TArray<FRenderTransform,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (pTVar8,param_1->PostUpdateNumInstances,Default);
      if (iVar33 != 0) {
        fVar2 = *(float *)((longlong)&param_1->_padding_ + 4);
        uVar3 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
        fVar48 = (float)uVar3;
        fVar49 = (float)((ulonglong)uVar3 >> 0x20);
        fVar13 = *(float *)this_00;
        fVar14 = *(float *)((longlong)&param_1->_padding_ + 4);
        fVar15 = *(float *)&param_1->_padding_;
        fVar16 = *(float *)((longlong)&param_1->_padding_ + 4);
        fVar17 = *(float *)&param_1->_padding_;
        fVar18 = *(float *)((longlong)&param_1->_padding_ + 4);
        fVar19 = *(float *)&param_1->_padding_;
        fVar20 = *(float *)((longlong)&param_1->_padding_ + 4);
        fVar21 = *(float *)&param_1->_padding_;
        bVar29 = FRenderTransform::IsScaleNonUniform((FRenderTransform *)this_00);
        uVar40 = 0;
        if (!bVar29) {
          FInstanceAttributeTracker::FDeltaRange<1>::GetIterator(&local_278,&local_1d0);
          do {
            if (local_1d0.bUseIterator == false) goto LAB_147d8aedb;
            iVar33 = (local_1d0.It.Tracker)->LastChangedIndex + 1;
            if ((local_1d0.It.Tracker)->MaxIndex < iVar33) {
              iVar33 = (local_1d0.It.Tracker)->MaxIndex;
            }
            iVar34 = local_1d0.It.ElementOffset + local_1d0.It.ElementIndex * 8;
            bVar29 = SBORROW4(iVar34,iVar33);
            iVar34 = iVar34 - iVar33;
            while( true ) {
              FVar28.IndexRemap = local_268.IndexRemap;
              pFVar38 = local_290;
              if (bVar29 == iVar34 < 0) goto LAB_147d8b13b;
              lVar36 = (longlong)local_1d0.ItemIndex;
              uVar40 = local_1d0.ItemIndex;
              if (local_1d0.bUseIterator != false) {
                uVar40 = local_1d0.It.ElementOffset + local_1d0.It.ElementIndex * 8;
              }
              uVar31 = 0;
              uVar30 = uVar31;
              if (local_1d0.ItemIndex < (local_268.IndexRemap)->ArrayNum) {
                uVar30 = (uint)~local_1d0.ItemIndex >> 0x1f;
              }
              if ((uVar30 == 0) &&
                 (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar29)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              uVar30 = *(uint *)(((FVar28.IndexRemap)->AllocatorInstance).Data + lVar36 * 4);
              lVar36 = (longlong)(int)uVar30;
              uVar32 = uVar31;
              if ((int)uVar30 < (int)param_1->_padding_) {
                uVar32 = ~uVar30 >> 0x1f;
              }
              if ((uVar32 == 0) &&
                 (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar29)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              lVar9 = param_1->_padding_;
              pfVar1 = (float *)(lVar9 + lVar36 * 0x30);
              fVar44 = *pfVar1;
              fVar45 = pfVar1[1];
              fVar42 = pfVar1[2];
              local_f0 = fVar45 * fVar16 + fVar44 * fVar13 + fVar42 * fVar19;
              fStack_ec = fVar45 * fVar17 + fVar44 * fVar14 + fVar42 * fVar20;
              fStack_e8 = fVar45 * fVar18 + fVar44 * fVar15 + fVar42 * fVar21;
              pfVar1 = (float *)(lVar9 + 0xc + lVar36 * 0x30);
              fVar44 = *pfVar1;
              fVar45 = pfVar1[1];
              fVar42 = pfVar1[2];
              fStack_e4 = fVar45 * fVar16 + fVar44 * fVar13 + fVar42 * fVar19;
              fStack_e0 = fVar45 * fVar17 + fVar44 * fVar14 + fVar42 * fVar20;
              fStack_dc = fVar45 * fVar18 + fVar44 * fVar15 + fVar42 * fVar21;
              pfVar1 = (float *)(lVar9 + 0x18 + lVar36 * 0x30);
              fVar44 = *pfVar1;
              fVar45 = pfVar1[1];
              fVar42 = pfVar1[2];
              uVar3 = *(undefined8 *)(lVar9 + 0x24 + lVar36 * 0x30);
              fVar46 = (float)uVar3;
              fVar47 = (float)((ulonglong)uVar3 >> 0x20);
              uVar3 = CONCAT44(fStack_ec,local_f0);
              uVar23 = CONCAT44(fStack_e4,fStack_e8);
              local_d8 = fVar45 * fVar16 + fVar44 * fVar13 + fVar42 * fVar19;
              fStack_d4 = fVar45 * fVar17 + fVar44 * fVar14 + fVar42 * fVar20;
              fVar45 = fVar45 * fVar18 + fVar44 * fVar15 + fVar42 * fVar21;
              fVar44 = *(float *)(lVar9 + 0x2c + lVar36 * 0x30);
              uVar24 = CONCAT44(fStack_dc,fStack_e0);
              uVar25 = CONCAT44(fStack_d4,local_d8);
              if ((int)uVar40 < pTVar8->ArrayNum) {
                uVar31 = ~uVar40 >> 0x1f;
              }
              fVar42 = fVar46 * fVar13 + fVar48 + fVar47 * fVar16 + fVar44 * fVar19;
              fVar43 = fVar46 * fVar14 + fVar49 + fVar47 * fVar17 + fVar44 * fVar20;
              fVar44 = fVar46 * fVar15 + fVar2 + fVar47 * fVar18 + fVar44 * fVar21;
              _fStack_cc = CONCAT44(fVar43,fVar42);
              fStack_d0 = fVar45;
              fStack_c4 = fVar44;
              if ((uVar31 == 0) &&
                 (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar29)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              local_1d0.ItemIndex = local_1d0.ItemIndex + 1;
              lVar36 = (longlong)(int)uVar40;
              pFVar10 = (pTVar8->AllocatorInstance).Data;
              *(undefined8 *)(pFVar10 + lVar36 * 0x30) = uVar3;
              *(undefined8 *)(pFVar10 + lVar36 * 0x30 + 8) = uVar23;
              *(undefined8 *)(pFVar10 + lVar36 * 0x30 + 0x10) = uVar24;
              *(undefined8 *)(pFVar10 + lVar36 * 0x30 + 0x10 + 8) = uVar25;
              pFVar10 = pFVar10 + lVar36 * 0x30 + 0x20;
              *(float *)pFVar10 = fVar45;
              *(float *)(pFVar10 + 4) = fVar42;
              *(float *)(pFVar10 + 8) = fVar43;
              *(float *)(pFVar10 + 0xc) = fVar44;
              if (local_1d0.bUseIterator != false) break;
LAB_147d8aedb:
              bVar29 = SBORROW4(local_1d0.ItemIndex,local_1d0.MaxNum);
              iVar34 = local_1d0.ItemIndex - local_1d0.MaxNum;
            }
            local_1d0.It.CurrentElement = local_1d0.It.CurrentElement & 0xfffffffc;
            FInstanceAttributeTracker::FAnyValidIterator<3>::AdvanceUntilAny(&local_1d0.It);
          } while( true );
        }
        FInstanceAttributeTracker::FDeltaRange<1>::GetIterator(&local_278,&local_1f8);
        do {
          if (local_1f8.bUseIterator == false) goto LAB_147d8ac53;
          iVar33 = (local_1f8.It.Tracker)->LastChangedIndex + 1;
          if ((local_1f8.It.Tracker)->MaxIndex < iVar33) {
            iVar33 = (local_1f8.It.Tracker)->MaxIndex;
          }
          iVar34 = local_1f8.It.ElementOffset + local_1f8.It.ElementIndex * 8;
          bVar29 = SBORROW4(iVar34,iVar33);
          iVar34 = iVar34 - iVar33;
          while( true ) {
            FVar28.IndexRemap = local_268.IndexRemap;
            pFVar38 = local_290;
            if (bVar29 == iVar34 < 0) goto LAB_147d8b13b;
            lVar36 = (longlong)local_1f8.ItemIndex;
            uVar30 = local_1f8.ItemIndex;
            if (local_1f8.bUseIterator != false) {
              uVar30 = local_1f8.It.ElementOffset + local_1f8.It.ElementIndex * 8;
            }
            uVar31 = uVar40;
            if (local_1f8.ItemIndex < (local_268.IndexRemap)->ArrayNum) {
              uVar31 = (uint)~local_1f8.ItemIndex >> 0x1f;
            }
            if ((uVar31 == 0) &&
               (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar29)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            uVar31 = *(uint *)(((FVar28.IndexRemap)->AllocatorInstance).Data + lVar36 * 4);
            lVar36 = (longlong)(int)uVar31;
            uVar32 = uVar40;
            if ((int)uVar31 < (int)param_1->_padding_) {
              uVar32 = ~uVar31 >> 0x1f;
            }
            if ((uVar32 == 0) &&
               (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar29)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            lVar9 = param_1->_padding_;
            pfVar1 = (float *)(lVar9 + lVar36 * 0x30);
            fVar44 = *pfVar1;
            fVar45 = pfVar1[1];
            fVar42 = pfVar1[2];
            local_150._s_0.X = fVar45 * fVar16 + fVar44 * fVar13 + fVar42 * fVar19;
            local_150._s_0.Y = fVar45 * fVar17 + fVar44 * fVar14 + fVar42 * fVar20;
            local_150._s_0.Z = fVar45 * fVar18 + fVar44 * fVar15 + fVar42 * fVar21;
            pfVar1 = (float *)(lVar9 + 0xc + lVar36 * 0x30);
            fVar44 = *pfVar1;
            fVar45 = pfVar1[1];
            fVar42 = pfVar1[2];
            fStack_144 = fVar45 * fVar16 + fVar44 * fVar13 + fVar42 * fVar19;
            local_140 = fVar45 * fVar17 + fVar44 * fVar14 + fVar42 * fVar20;
            fStack_13c = fVar45 * fVar18 + fVar44 * fVar15 + fVar42 * fVar21;
            pfVar1 = (float *)(lVar9 + 0x18 + lVar36 * 0x30);
            fVar44 = *pfVar1;
            fVar45 = pfVar1[1];
            fVar42 = pfVar1[2];
            uVar3 = *(undefined8 *)(lVar9 + 0x24 + lVar36 * 0x30);
            fVar46 = (float)uVar3;
            fVar47 = (float)((ulonglong)uVar3 >> 0x20);
            fStack_138 = fVar45 * fVar16 + fVar44 * fVar13 + fVar42 * fVar19;
            fStack_134 = fVar45 * fVar17 + fVar44 * fVar14 + fVar42 * fVar20;
            fStack_130 = fVar45 * fVar18 + fVar44 * fVar15 + fVar42 * fVar21;
            fVar44 = *(float *)(lVar9 + 0x2c + lVar36 * 0x30);
            fStack_12c = fVar46 * fVar13 + fVar48 + fVar47 * fVar16 + fVar44 * fVar19;
            fStack_128 = fVar46 * fVar14 + fVar49 + fVar47 * fVar17 + fVar44 * fVar20;
            fStack_124 = fVar46 * fVar15 + fVar2 + fVar47 * fVar18 + fVar44 * fVar21;
            FRenderTransform::Orthogonalize((FRenderTransform *)&local_150._s_0);
            uVar3 = CONCAT44(local_150._s_0.Y,local_150._s_0.X);
            uVar23 = CONCAT44(fStack_144,local_150._s_0.Z);
            uVar24 = CONCAT44(fStack_13c,local_140);
            uVar25 = CONCAT44(fStack_134,fStack_138);
            uVar26 = CONCAT44(fStack_12c,fStack_130);
            uVar27 = CONCAT44(fStack_124,fStack_128);
            uVar31 = uVar40;
            if ((int)uVar30 < pTVar8->ArrayNum) {
              uVar31 = ~uVar30 >> 0x1f;
            }
            if ((uVar31 == 0) &&
               (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar29)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            local_1f8.ItemIndex = local_1f8.ItemIndex + 1;
            lVar36 = (longlong)(int)uVar30;
            pFVar10 = (pTVar8->AllocatorInstance).Data;
            *(undefined8 *)(pFVar10 + lVar36 * 0x30) = uVar3;
            *(undefined8 *)(pFVar10 + lVar36 * 0x30 + 8) = uVar23;
            *(undefined8 *)(pFVar10 + lVar36 * 0x30 + 0x10) = uVar24;
            *(undefined8 *)(pFVar10 + lVar36 * 0x30 + 0x10 + 8) = uVar25;
            *(undefined8 *)(pFVar10 + lVar36 * 0x30 + 0x20) = uVar26;
            *(undefined8 *)(pFVar10 + lVar36 * 0x30 + 0x20 + 8) = uVar27;
            if (local_1f8.bUseIterator != false) break;
LAB_147d8ac53:
            bVar29 = SBORROW4(local_1f8.ItemIndex,local_1f8.MaxNum);
            iVar34 = local_1f8.ItemIndex - local_1f8.MaxNum;
          }
          local_1f8.It.CurrentElement = local_1f8.It.CurrentElement & 0xfffffffc;
          FInstanceAttributeTracker::FAnyValidIterator<3>::AdvanceUntilAny(&local_1f8.It);
        } while( true );
      }
LAB_147d8b13b:
      pFVar37 = local_260;
      ApplyAttributeChanges<FSrcIndexRemap>(local_260,param_1,&local_268,pFVar38);
      pTVar39 = local_198;
    }
    FInstanceIdIndexMap::Reset(&pFVar37->InstanceIdIndexMap,param_1->PostUpdateNumInstances);
    FVar11 = pFVar38->AccessTag;
    if ((pTVar39->Object == (FISMPrecomputedSpatialHashData *)0x0) &&
       (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar29)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    local_258.CompressedInstanceSpatialHashes.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    local_258.CompressedInstanceSpatialHashes.ArrayNum = (pTVar39->Object->Hashes).ArrayNum;
    lVar36 = (longlong)local_258.CompressedInstanceSpatialHashes.ArrayNum;
    pFVar10 = (pTVar39->Object->Hashes).AllocatorInstance.Data;
    if (local_258.CompressedInstanceSpatialHashes.ArrayNum == 0) {
      local_258.CompressedInstanceSpatialHashes.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,local_258.CompressedInstanceSpatialHashes.ArrayNum,0,
                 (ForAnyElementType *)&local_258,local_258.CompressedInstanceSpatialHashes.ArrayNum,
                 &local_258.CompressedInstanceSpatialHashes.ArrayMax);
      memcpy(local_258.CompressedInstanceSpatialHashes.AllocatorInstance.Data,pFVar10,lVar36 * 0x28)
      ;
    }
    FInstanceSceneDataBuffers::SetImmutable
              ((FInstanceSceneDataBuffers *)&pFVar37->_padding_,&local_258,FVar11);
    if (local_258.CompressedInstanceSpatialHashes.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.CompressedInstanceSpatialHashes.AllocatorInstance.Data);
    }
    local_190 = 0;
    FStack_188.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar39 != (TSharedPtr<FISMPrecomputedSpatialHashData_const_,1> *)&local_190) {
      pTVar39->Object = (FISMPrecomputedSpatialHashData *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&pTVar39->SharedReferenceCount,&FStack_188);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_188.ReferenceController);
  }
  if (bVar41) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// DebugDrawInstanceChanges @ 147d94c00

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
FISMCInstanceDataSceneProxy::DebugDrawInstanceChanges
          (FISMCInstanceDataSceneProxy *this,FPrimitiveDrawInterface *param_1,
          ESceneDepthPriorityGroup param_2)

{
  FInstanceDataUpdateTaskInfo::WaitForUpdateCompletion(&this->InstanceDataUpdateTaskInfo);
  return;
}

// GetLocalBoundsPadExtent @ 147da64e0

TVector<float> * __cdecl
FISMCInstanceDataSceneProxy::GetLocalBoundsPadExtent
          (TVector<float> *__return_storage_ptr__,FRenderTransform *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  uVar4 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  if ((float)((uint)param_2 & __xmm_7fffffff7fffffff7fffffff7fffffff) < __real_322bcc77) {
    *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
         UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = (float)uVar4;
    return __return_storage_ptr__;
  }
  fVar5 = param_1->TransformRows[0].field0_0x0._s_0.X;
  fVar1 = param_1->TransformRows[0].field0_0x0._s_0.Y;
  fVar2 = param_1->TransformRows[0].field0_0x0._s_0.Z;
  fVar6 = param_1->TransformRows[1].field0_0x0._s_0.X;
  fVar3 = param_1->TransformRows[1].field0_0x0._s_0.Z;
  fVar7 = SQRT(fVar1 * fVar1 + fVar5 * fVar5 + fVar2 * fVar2);
  fVar5 = param_1->TransformRows[1].field0_0x0._s_0.Y;
  fVar1 = param_1->TransformRows[2].field0_0x0._s_0.X;
  fVar2 = param_1->TransformRows[2].field0_0x0._s_0.Z;
  fVar6 = SQRT(fVar5 * fVar5 + fVar6 * fVar6 + fVar3 * fVar3);
  fVar5 = param_1->TransformRows[2].field0_0x0._s_0.Y;
  fVar5 = SQRT(fVar5 * fVar5 + fVar1 * fVar1 + fVar2 * fVar2);
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  else {
    fVar5 = param_2 / fVar5;
  }
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  else {
    fVar6 = param_2 / fVar6;
  }
  if (0.0 < fVar7) {
    (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar6;
    (__return_storage_ptr__->field0_0x0)._s_0.X = param_2 / fVar7;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar5;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar6;
  (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar5;
  return __return_storage_ptr__;
}

// GetUpdateTaskInfo @ 147daa260

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FInstanceDataUpdateTaskInfo * __thiscall
FISMCInstanceDataSceneProxy::GetUpdateTaskInfo(FISMCInstanceDataSceneProxy *this)

{
  return &this->InstanceDataUpdateTaskInfo;
}

// TestAndApplyInstanceBufferSizeFixup @ 147dc4c70

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FISMCInstanceDataSceneProxy::TestAndApplyInstanceBufferSizeFixup
          (FISMCInstanceDataSceneProxy *this,int param_1)

{
  longlong *this_00;
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  FAccessTag FVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  ushort uVar10;
  undefined1 local_res10 [8];
  FWriteView local_a8;
  
  this_00 = &this->_padding_;
  if (*(int *)((longlong)&this->_padding_ + 4) != 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("AccessTag.Kind == FAccessTag::EKind::Reader && CurrentWriterTag.Value == 0u || AccessTag.Kind == FAccessTag::EKind::Writer && CurrentWriterTag.Value == AccessTag.WriterTag"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceDataSceneProxy.h"
                       ,0x182,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar8 = 0xf8;
  if ((this->_padding_ & 0x10000) == 0) {
    lVar8 = 0xc0;
  }
  if (param_1 != *(int *)((longlong)this_00 + lVar8)) {
    local_res10[0] = 0;
    bVar6 = `FISMCInstanceDataSceneProxy::TestAndApplyInstanceBufferSizeFixup'::__l3::<lambda_1>::
            operator()(local_res10);
    if (!bVar6) {
      uVar9 = ((uint)((ulonglong)this >> 0x14) & 0xffff ^ (uint)((ulonglong)this >> 4)) *
              -0x7a143595;
      uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
      FVar5.Kind = Writer;
      FVar5.WriterTag = uVar9 >> 0x10 ^ uVar9;
      FInstanceSceneDataBuffers::BeginWriteAccess
                ((FInstanceSceneDataBuffers *)this_00,&local_a8,FVar5);
      if ((param_1 != 0) && ((local_a8.InstanceLocalBounds)->ArrayNum == 0)) {
        if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x9d4c) < ::_TSS0) {
          _Init_thread_header(&::_TSS0);
          if (::_TSS0 == -1) {
            ZeroRenderBounds.Min.field0_0x0._0_8_ =
                 UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
            ZeroRenderBounds.Max.field0_0x0._s_0.X =
                 (float)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
            ZeroRenderBounds.Max.field0_0x0._s_0.Y =
                 (float)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >> 0x20);
            ZeroRenderBounds.Min.field0_0x0._s_0.Z =
                 UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
            ZeroRenderBounds.Max.field0_0x0._s_0.Z =
                 UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
            _Init_thread_footer(&::_TSS0);
          }
        }
        pFVar1 = ((local_a8.InstanceLocalBounds)->AllocatorInstance).Data;
        if ((pFVar1 < (FScriptContainerElement *)0x15520efc9) &&
           (&ZeroRenderBounds <
            (FRenderBounds *)(pFVar1 + (longlong)(local_a8.InstanceLocalBounds)->ArrayMax * 0x18)))
        {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar6) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        iVar7 = (local_a8.InstanceLocalBounds)->ArrayNum;
        if (iVar7 == (local_a8.InstanceLocalBounds)->ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x418,&(local_a8.InstanceLocalBounds)->AllocatorInstance,
                             &(local_a8.InstanceLocalBounds)->ArrayMax);
        }
        (local_a8.InstanceLocalBounds)->ArrayNum = iVar7 + 1;
        uVar4 = CONCAT44(ZeroRenderBounds.Max.field0_0x0._s_0.X,
                         ZeroRenderBounds.Min.field0_0x0._s_0.Z);
        pFVar2 = ((local_a8.InstanceLocalBounds)->AllocatorInstance).Data;
        pFVar1 = pFVar2 + (longlong)iVar7 * 0x18;
        *(undefined8 *)pFVar1 = ZeroRenderBounds.Min.field0_0x0._0_8_;
        *(undefined8 *)(pFVar1 + 8) = uVar4;
        *(ulonglong *)(pFVar2 + (longlong)iVar7 * 0x18 + 0x10) =
             CONCAT44(ZeroRenderBounds.Max.field0_0x0._s_0.Z,ZeroRenderBounds.Max.field0_0x0._s_0.Y)
        ;
      }
      uVar10 = (local_a8.Flags)->Packed >> 7;
      if ((uVar10 & 1) != 0) {
        if ((((local_a8.InstancePayloadExtension)->ArrayNum == 0) ||
            ((local_a8.InstanceToPrimitiveRelative)->ArrayNum == 0)) ||
           ((local_a8.InstancePayloadExtension)->ArrayNum %
            (local_a8.InstanceToPrimitiveRelative)->ArrayNum != 0)) {
          (local_a8.Flags)->Packed = (local_a8.Flags)->Packed & 0xff7f;
        }
        else if ((uVar10 & 1) != 0) {
          TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>::SetNumZeroed
                    (local_a8.InstancePayloadExtension,
                     ((local_a8.InstancePayloadExtension)->ArrayNum /
                     (local_a8.InstanceToPrimitiveRelative)->ArrayNum) * param_1,Default);
        }
      }
      TArray<FRenderTransform,TSizedDefaultAllocator<32>_>::SetNumZeroed
                (local_a8.InstanceToPrimitiveRelative,param_1,Default);
      if ((*(byte *)local_a8.Flags >> 1 & 1) != 0) {
        TArray<float,TSizedDefaultAllocator<32>_>::SetNumZeroed
                  (local_a8.InstanceCustomData,param_1 * *local_a8.NumCustomDataFloats,Default);
      }
      if ((*(byte *)local_a8.Flags >> 2 & 1) != 0) {
        TArray<FRenderTransform,TSizedDefaultAllocator<32>_>::SetNumZeroed
                  (local_a8.PrevInstanceToPrimitiveRelative,param_1,Default);
      }
      if ((*(byte *)local_a8.Flags >> 6 & 1) != 0) {
        TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumZeroed
                  (local_a8.InstanceHierarchyOffset,param_1,Default);
      }
      if ((*(byte *)local_a8.Flags >> 4 & 1) != 0) {
        TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>::SetNumZeroed
                  (local_a8.InstanceLightShadowUVBias,param_1,Default);
      }
      if ((*(byte *)local_a8.Flags >> 5 & 1) != 0) {
        TArray<FRenderBounds,TSizedDefaultAllocator<32>_>::SetNumZeroed
                  (local_a8.InstanceLocalBounds,param_1,Default);
      }
      if ((*(byte *)local_a8.Flags & 1) != 0) {
        TArray<float,TSizedDefaultAllocator<32>_>::SetNumZeroed
                  (local_a8.InstanceRandomIDs,param_1,Default);
      }
      if (((local_a8.Flags)->Packed & 0x100) != 0) {
        TBitArray<FDefaultBitArrayAllocator>::SetNum<bool>(local_a8.VisibleInstances,param_1,false);
      }
      FInstanceSceneDataBuffers::EndWriteAccess((FInstanceSceneDataBuffers *)this_00,FVar5);
    }
  }
  return;
}

// Update @ 147dc5cc0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FISMCInstanceDataSceneProxy::Update
          (FISMCInstanceDataSceneProxy *this,FISMInstanceUpdateChangeSet *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  FAccessTag FVar4;
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<FRenderTransform,TSizedDefaultAllocator<32>_> *pTVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  bool bVar16;
  bool bVar17;
  FIdentityIndexRemap local_res8 [8];
  FISMInstanceUpdateChangeSet *local_res10;
  FIdentityIndexRemap local_res18 [8];
  FAccessTag local_res20;
  uint local_12c;
  int iStack_128;
  FAnyValidIterator<9> local_120;
  FISMInstanceUpdateChangeSet *local_108;
  undefined8 uStack_100;
  int local_f8;
  undefined4 uStack_f4;
  int local_f0;
  uint local_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  FWriteView local_c8;
  
  local_res10 = param_1;
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Emerald,"FISMCInstanceDataSceneProxy_Update");
  bVar16 = -1 < CpuChannel->Enabled;
  if (bVar16) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId334,"FISMCInstanceDataSceneProxy_Update",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh\\ISMInstanceDataSceneProxy.cpp"
               ,0x14e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId334);
  }
  if (((char)param_1->_padding_ != '\0') &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ChangeSet.IsFullUpdate()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh\\ISMInstanceDataSceneProxy.cpp"
                         ,0x14f,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FInstanceDataSceneProxy::DecStatCounters((FInstanceDataSceneProxy *)this);
  uVar11 = ((uint)((ulonglong)this >> 0x14) & 0xffff ^ (uint)((ulonglong)this >> 4)) * -0x7a143595;
  uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
  local_res20.Kind = Writer;
  local_res20.WriterTag = uVar11 >> 0x10 ^ uVar11;
  FVar4 = local_res20;
  FInstanceSceneDataBuffers::BeginWriteAccess
            ((FInstanceSceneDataBuffers *)&this->_padding_,&local_c8,local_res20);
  *local_c8.Flags = *(FInstanceDataFlags *)((longlong)&param_1->_padding_ + 2);
  local_f0 = param_1->PostUpdateNumInstances;
  iStack_128 = (int)param_1->_padding_;
  if (((char)param_1->_padding_ == '\0') &&
     ((int)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4) != iStack_128)) {
    iVar8 = (int)param_1->_padding_;
    if ((int)param_1->_padding_ < iVar8) {
      iVar8 = (int)param_1->_padding_;
    }
    uVar14 = iVar8 >> 0x1f & 7;
    uVar11 = iVar8 + uVar14;
    iVar8 = (uVar11 & 7) - uVar14;
    uVar11 = (int)uVar11 >> 3;
    uStack_100 = CONCAT44(uStack_100._4_4_,uVar11);
    local_res20 = (FAccessTag)&param_1->_padding_;
    local_108 = param_1;
    local_f8 = iVar8;
    if (((int)uVar11 < 0) || ((int)*(longlong *)local_res20 <= (int)uVar11)) {
      uVar14 = 0;
    }
    else {
      uVar14 = 0;
      if ((int)uVar11 < (int)*(longlong *)local_res20) {
        uVar14 = ~uVar11 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar14 = *(uint *)(param_1->_padding_ + (longlong)(int)uVar11 * 4) & 0x99999999;
    }
    uVar14 = uVar14 >> ((char)iVar8 * '\x04' & 0x1fU);
    iVar12 = (int)param_1->_padding_;
    uStack_100 = CONCAT44(uVar14,(int)uStack_100);
    if ((int)uVar11 < iVar12) {
LAB_147dc5ee6:
      if (uVar14 == 0) {
        uVar11 = uVar11 + 1;
        iVar8 = 0;
        local_f8 = 0;
        uStack_100 = CONCAT44(uStack_100._4_4_,uVar11);
        if ((int)uVar11 < iVar12) goto code_r0x000147dc5f01;
        uStack_100 = (ulonglong)uVar11;
      }
      else {
        local_ec = 0;
        if (uVar14 != 0) {
          for (; (uVar14 >> local_ec & 1) == 0; local_ec = local_ec + 1) {
          }
        }
        uVar11 = 0x20;
        if (uVar14 != 0) {
          uVar11 = local_ec;
        }
        local_f8 = iVar8 + (uVar11 >> 2);
        uStack_100 = CONCAT44(uVar14 >> ((char)(uVar11 >> 2) * '\x04' & 0x1fU),(int)uStack_100);
      }
    }
LAB_147dc5f96:
    bVar7 = true;
    local_120._16_8_ = CONCAT44(uStack_f4,local_f8);
    local_120.CurrentElement = uStack_100._4_4_;
    local_12c = 0;
    iStack_128 = 0;
    local_120.ElementIndex = (int)uStack_100;
    local_120.Tracker = (FInstanceAttributeTracker *)local_108;
  }
  else {
    bVar7 = false;
    local_120.Tracker = (FInstanceAttributeTracker *)0x0;
    local_120.ElementIndex = 0;
    local_120._16_8_ = (ulonglong)(uint)local_120._20_4_ << 0x20;
    local_12c = 0;
  }
LAB_147dc5ff1:
  if (!bVar7) goto LAB_147dc6018;
  iVar8 = *(int *)((longlong)&(local_120.Tracker)->FirstChangedIndex + 4) + 1;
  if ((int)*(longlong *)&(local_120.Tracker)->MaxIndex < iVar8) {
    iVar8 = (int)*(longlong *)&(local_120.Tracker)->MaxIndex;
  }
  iVar12 = local_120.ElementOffset + local_120.ElementIndex * 8;
  bVar17 = SBORROW4(iVar12,iVar8);
  iVar12 = iVar12 - iVar8;
  do {
    if (bVar17 == iVar12 < 0) {
      ::UpdateIdMapping<FIdentityIndexRemap>
                ((FInstanceUpdateChangeSet *)param_1,local_res8,&this->InstanceIdIndexMap);
      iVar8 = (this->InstanceIdIndexMap).IndexToIdMap.ArrayNum;
      if (iVar8 == 0) {
        iVar8 = (this->InstanceIdIndexMap).NumInstances;
      }
      if ((param_1->PostUpdateNumInstances != iVar8) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("ChangeSet.PostUpdateNumInstances == InstanceIdIndexMap.GetMaxInstanceIndex()"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh\\ISMInstanceDataSceneProxy.cpp"
                             ,0x178,L""), bVar7)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      ApplyDataChanges<FIdentityIndexRemap>(this,param_1,local_res18,local_f0,&local_c8);
      FInstanceSceneDataBuffers::EndWriteAccess((FInstanceSceneDataBuffers *)&this->_padding_,FVar4)
      ;
      FInstanceSceneDataBuffers::ValidateData((FInstanceSceneDataBuffers *)&this->_padding_);
      FInstanceDataSceneProxy::IncStatCounters((FInstanceDataSceneProxy *)this);
      if (bVar16) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      FGenericPlatformMisc::EndNamedEvent();
      return;
    }
    uVar11 = local_12c;
    if (bVar7) {
      uVar11 = local_120.ElementOffset + local_120.ElementIndex * 8;
    }
    uVar14 = FInstanceAttributeTracker::GetFlags((FInstanceAttributeTracker *)param_1,uVar11);
    if ((uVar14 & 1) == 0) {
      uVar14 = uVar11;
      if (*(char *)((longlong)&param_1->_padding_ + 7) == '\0') {
        uVar14 = 0;
        if ((int)local_12c < (int)param_1->_padding_) {
          uVar14 = ~local_12c >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar14 = *(uint *)(param_1->_padding_ + (longlong)(int)local_12c * 4);
      }
      if (-1 < (int)uVar14) {
        iVar8 = (this->InstanceIdIndexMap).IndexToIdMap.ArrayNum;
        piVar13 = &(this->InstanceIdIndexMap).NumInstances;
        if (iVar8 != 0) {
          piVar13 = &(this->InstanceIdIndexMap).IdToIndexMap.ArrayNum;
        }
        if ((int)uVar14 < *piVar13) {
          if (iVar8 == 0) {
            local_res20 = (FAccessTag)&(this->InstanceIdIndexMap).IdToIndexMap;
          }
          else {
            local_res20 = (FAccessTag)&(this->InstanceIdIndexMap).IdToIndexMap;
            uVar9 = 0;
            if ((int)uVar14 < (this->InstanceIdIndexMap).IdToIndexMap.ArrayNum) {
              uVar9 = ~uVar14 >> 0x1f;
            }
            if (uVar9 == 0) {
              local_res20 = (FAccessTag)&(this->InstanceIdIndexMap).IdToIndexMap;
              bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar17) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
            }
            if (*(int *)((this->InstanceIdIndexMap).IdToIndexMap.AllocatorInstance.Data +
                        (longlong)(int)uVar14 * 4) == -1) goto LAB_147dc642e;
          }
          if ((this->InstanceIdIndexMap).IndexToIdMap.ArrayNum != 0) {
            uVar9 = 0;
            if ((int)uVar14 < (this->InstanceIdIndexMap).IdToIndexMap.ArrayNum) {
              uVar9 = ~uVar14 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            uVar14 = *(uint *)(*(longlong *)local_res20 + (longlong)(int)uVar14 * 4);
          }
          local_res20 = (FAccessTag)local_c8.InstanceToPrimitiveRelative;
          uVar9 = 0;
          if ((int)uVar14 < (local_c8.InstanceToPrimitiveRelative)->ArrayNum) {
            uVar9 = ~uVar14 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pTVar6 = local_c8.InstanceToPrimitiveRelative;
          lVar10 = (longlong)(int)uVar14;
          pFVar1 = ((ForAnyElementType *)local_res20)->Data;
          pFVar15 = pFVar1 + lVar10 * 0x30;
          local_e8 = *(undefined4 *)pFVar15;
          uStack_e4 = *(undefined4 *)(pFVar15 + 4);
          uStack_e0 = *(undefined4 *)(pFVar15 + 8);
          uStack_dc = *(undefined4 *)(pFVar15 + 0xc);
          pFVar15 = pFVar1 + lVar10 * 0x30 + 0x10;
          local_d8 = *(undefined4 *)pFVar15;
          uStack_d4 = *(undefined4 *)(pFVar15 + 4);
          uStack_d0 = *(undefined4 *)(pFVar15 + 8);
          uStack_cc = *(undefined4 *)(pFVar15 + 0xc);
          local_108 = *(FISMInstanceUpdateChangeSet **)(pFVar1 + lVar10 * 0x30 + 0x20);
          uStack_100 = *(ulonglong *)(pFVar1 + lVar10 * 0x30 + 0x20 + 8);
          local_res20.WriterTag = ~uVar11 >> 0x1f;
          uVar9 = 0;
          if ((int)uVar11 < (local_c8.InstanceToPrimitiveRelative)->ArrayNum) {
            uVar9 = ~uVar11 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          lVar10 = (longlong)(int)uVar11;
          pFVar1 = (pTVar6->AllocatorInstance).Data;
          pFVar15 = pFVar1 + lVar10 * 0x30;
          *(undefined4 *)pFVar15 = local_e8;
          *(undefined4 *)(pFVar15 + 4) = uStack_e4;
          *(undefined4 *)(pFVar15 + 8) = uStack_e0;
          *(undefined4 *)(pFVar15 + 0xc) = uStack_dc;
          *(ulonglong *)(pFVar1 + lVar10 * 0x30 + 0x10) = CONCAT44(uStack_d4,local_d8);
          *(ulonglong *)(pFVar1 + lVar10 * 0x30 + 0x10 + 8) = CONCAT44(uStack_cc,uStack_d0);
          *(FISMInstanceUpdateChangeSet **)(pFVar1 + lVar10 * 0x30 + 0x20) = local_108;
          *(ulonglong *)(pFVar1 + lVar10 * 0x30 + 0x20 + 8) = uStack_100;
          CondMove<float>((bool)(*(byte *)((longlong)&local_res10->_padding_ + 2) >> 1 & 1),
                          local_c8.InstanceCustomData,uVar14,uVar11,(int)local_res10->_padding_);
          CondMove<float>((bool)(*(byte *)((longlong)&local_res10->_padding_ + 2) & 1),
                          local_c8.InstanceRandomIDs,uVar14,uVar11,1);
          pTVar5 = local_c8.InstanceLightShadowUVBias;
          param_1 = local_res10;
          if ((*(byte *)((longlong)&local_res10->_padding_ + 2) >> 4 & 1) != 0) {
            uVar9 = 0;
            if ((int)uVar14 < (local_c8.InstanceLightShadowUVBias)->ArrayNum) {
              uVar9 = ~uVar14 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pFVar15 = (pTVar5->AllocatorInstance).Data + (longlong)(int)uVar14 * 0x10;
            uVar14 = 0;
            if ((int)uVar11 < pTVar5->ArrayNum) {
              uVar14 = local_res20.WriterTag;
            }
            if ((uVar14 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            uVar3 = *(undefined8 *)(pFVar15 + 8);
            pFVar1 = (pTVar5->AllocatorInstance).Data + (longlong)(int)uVar11 * 0x10;
            *(undefined8 *)pFVar1 = *(undefined8 *)pFVar15;
            *(undefined8 *)(pFVar1 + 8) = uVar3;
            param_1 = local_res10;
          }
        }
      }
    }
LAB_147dc642e:
    local_12c = local_12c + 1;
    if (bVar7) goto code_r0x000147dc643d;
LAB_147dc6018:
    bVar17 = SBORROW4(local_12c,iStack_128);
    iVar12 = local_12c - iStack_128;
  } while( true );
code_r0x000147dc5f01:
  if (((int)uVar11 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar9 = *(uint *)(param_1->_padding_ + (longlong)(int)uVar11 * 4);
  uVar14 = uVar9 & 0x99999999;
  uStack_100 = CONCAT44(uVar9,(int)uStack_100) & 0x99999999ffffffff;
  iVar12 = *(int *)local_res20;
  if (iVar12 <= (int)uVar11) goto LAB_147dc5f96;
  goto LAB_147dc5ee6;
code_r0x000147dc643d:
  local_120.CurrentElement = local_120.CurrentElement & 0xfffffff6;
  FInstanceAttributeTracker::FAnyValidIterator<9>::AdvanceUntilAny(&local_120);
  goto LAB_147dc5ff1;
}

// UpdatePrimitiveTransform @ 147dc7a20

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FISMCInstanceDataSceneProxy::UpdatePrimitiveTransform
          (FISMCInstanceDataSceneProxy *this,FISMInstanceUpdateChangeSet *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstancedStaticMesh\\ISMInstanceDataSceneProxy.h"
                     ,0x3a,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// operator() @ 15051bb90

bool __thiscall
`FISMCInstanceDataSceneProxy::TestAndApplyInstanceBufferSizeFixup'::__l3::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<923085971962986736>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<923085971962986736>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

