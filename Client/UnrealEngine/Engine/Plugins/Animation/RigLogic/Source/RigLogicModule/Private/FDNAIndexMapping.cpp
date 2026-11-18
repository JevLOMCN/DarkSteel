// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigLogicModule
// Functions: 8

// ~FDNAIndexMapping @ 14a661060

void __thiscall FDNAIndexMapping::~FDNAIndexMapping(FDNAIndexMapping *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  DestructItems<TBaseBlendedCurve<TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed>,int>
            ((TBaseBlendedCurve<TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed> *)
             (this->MaskMultiplierCurvesPerLOD).AllocatorInstance.Data,
             (this->MaskMultiplierCurvesPerLOD).ArrayNum);
  pFVar1 = (this->MaskMultiplierCurvesPerLOD).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TBaseBlendedCurve<TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed>,int>
            ((TBaseBlendedCurve<TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed> *)
             (this->MorphTargetCurvesPerLOD).AllocatorInstance.Data,
             (this->MorphTargetCurvesPerLOD).ArrayNum);
  pFVar1 = (this->MorphTargetCurvesPerLOD).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->JointsMapDNAIndicesToMeshPoseBoneIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DriverJointsToControlAttributesMap).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = (void *)(this->NeuralNetworkMaskCurves)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = (void *)(this->ControlAttributeCurves)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
    return;
  }
  return;
}

// Init @ 14a67aa50

void __thiscall
FDNAIndexMapping::Init
          (FDNAIndexMapping *this,IDNAReader *param_1,USkeleton *param_2,USkeletalMesh *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = (param_2->Guid).B;
  uVar2 = (param_2->Guid).C;
  uVar3 = (param_2->Guid).D;
  (this->SkeletonGuid).A = (param_2->Guid).A;
  (this->SkeletonGuid).B = uVar1;
  (this->SkeletonGuid).C = uVar2;
  (this->SkeletonGuid).D = uVar3;
  MapControlCurves(this,param_1,param_2);
  MapNeuralNetworkMaskCurves(this,param_1,param_2);
  MapJoints(this,param_1,param_3);
  MapDriverJoints(this,param_1,param_3);
  MapMorphTargets(this,param_1,param_2,param_3);
  MapMaskMultipliers(this,param_1,param_2);
  return;
}

// MapControlCurves @ 14a67c400

void __thiscall
FDNAIndexMapping::MapControlCurves(FDNAIndexMapping *this,IDNAReader *param_1,USkeleton *param_2)

{
  int *piVar1;
  longlong lVar2;
  ushort uVar3;
  int iVar4;
  longlong lVar5;
  FName *pFVar6;
  ForAnyElementType FVar7;
  TBaseBlendedCurve<TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed> *pTVar8;
  uint uVar9;
  uint uVar10;
  FLLMScope local_res8 [2];
  IDNAReader *local_res10;
  FMemScope local_res20;
  FName local_88;
  FString local_80;
  FString local_70;
  TNamedValueArray<TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed> local_60;
  undefined8 local_48;
  
  local_res10 = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name35,L"Animation/RigLogic");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name35,false,None,Default,true);
  FMemScope::FMemScope(&local_res20,&LLMScope_Name35,true);
  uVar3 = (**(code **)(*(longlong *)
                        (&param_1->field_0x8 + *(int *)(*(longlong *)&param_1->field_0x8 + 4)) +
                      0xa8))();
  pTVar8 = &this->ControlAttributeCurves;
  uVar10 = 0;
  piVar1 = (int *)((longlong)&(this->ControlAttributeCurves)._padding_ + 4);
  iVar4 = *piVar1;
  *(undefined4 *)&(this->ControlAttributeCurves)._padding_ = 0;
  if (iVar4 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,(ForAnyElementType *)pTVar8,0,piVar1);
  }
  *(undefined1 *)&(this->ControlAttributeCurves)._padding_ = 0;
  uVar9 = (uint)uVar3;
  if (*piVar1 < (int)(uint)uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,uVar9,(ForAnyElementType *)pTVar8,
               (int)(this->ControlAttributeCurves)._padding_,piVar1);
  }
  if (uVar9 != 0) {
    do {
      (**(code **)(*(longlong *)
                    (&param_1->field_0x8 + *(int *)(*(longlong *)&param_1->field_0x8 + 4)) + 0xb0))
                (&param_1->field_0x8 + *(int *)(*(longlong *)&param_1->field_0x8 + 4),&local_70,
                 uVar10 & 0xffff);
      ::FString::FString((FString *)&local_60,L"<obj>_<attr>");
      CreateCurveName(&local_80,&local_70,(FString *)&local_60);
      if (local_60.Elements.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Elements.AllocatorInstance.Data);
      }
      FVar7.Data = (FScriptContainerElement *)L"";
      if (local_80.Data.ArrayNum != 0) {
        FVar7.Data = local_80.Data.AllocatorInstance.Data;
      }
      iVar4 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar7.Data,L"");
      if (iVar4 == 0) {
        if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_80.Data.AllocatorInstance.Data);
        }
        goto LAB_14a67c646;
      }
      iVar4 = (int)(this->ControlAttributeCurves)._padding_;
      FVar7.Data = (FScriptContainerElement *)L"";
      if (local_80.Data.ArrayNum != 0) {
        FVar7.Data = local_80.Data.AllocatorInstance.Data;
      }
      if (iVar4 == *piVar1) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x414,(ForAnyElementType *)pTVar8,piVar1);
      }
      lVar2 = pTVar8->_padding_;
      lVar5 = (longlong)iVar4;
      *(int *)&(this->ControlAttributeCurves)._padding_ = iVar4 + 1;
      pFVar6 = ::FName::FName(&local_88,(wchar_t *)FVar7.Data);
      *(FName *)(lVar2 + lVar5 * 0x14) = *pFVar6;
      *(undefined4 *)(lVar2 + 8 + lVar5 * 0x14) = 0;
      *(undefined1 *)(lVar2 + 0xc + lVar5 * 0x14) = 0;
      *(uint *)(lVar2 + 0x10 + lVar5 * 0x14) = uVar10;
      *(undefined1 *)&(this->ControlAttributeCurves)._padding_ = 0;
      if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80.Data.AllocatorInstance.Data);
      }
      if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Data.AllocatorInstance.Data);
      }
      uVar10 = uVar10 + 1;
      param_1 = local_res10;
    } while (uVar10 < uVar9);
  }
  local_60._17_4_ = 0;
  local_60._21_2_ = 0;
  local_60._23_1_ = 0;
  local_60.Elements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60.Elements.ArrayNum = 0;
  local_60.Elements.ArrayMax = 0;
  local_60.bSorted = false;
  local_48 = 0;
  UE::Anim::FNamedValueArrayUtils::
  RemoveByPredicate<TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed,TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed,_FDNAIndexMapping::MapControlCurves_::__l2::<lambda_1>_>
            ((TNamedValueArray<TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed> *)pTVar8,
             &local_60,local_res10._0_1_);
  local_70.Data.AllocatorInstance.Data = local_60.Elements.AllocatorInstance.Data;
LAB_14a67c646:
  if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// MapDriverJoints @ 14a67c6e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FDNAIndexMapping::MapDriverJoints(FDNAIndexMapping *this,IDNAReader *param_1,USkeletalMesh *param_2)

{
  int *piVar1;
  <lambda_1> <Var2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  short sVar8;
  ushort uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  TTuple<FName,int> *pTVar14;
  int iVar15;
  FScriptContainerElement *pFVar16;
  ForAnyElementType FVar17;
  TArray<FDNAIndexMapping::FMeshPoseBoneControlAttributeMapping,TSizedDefaultAllocator<32>_>
  *this_00;
  int *piVar18;
  FScriptContainerElement *pFVar19;
  uint uVar20;
  FLLMScope local_res10 [2];
  FName local_98;
  FMemScope local_90;
  FString local_88;
  FString local_78;
  int local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  uint uStack_54;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name90,L"Animation/RigLogic");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res10,LLMScope_Name90,false,None,Default,true);
  FMemScope::FMemScope(&local_90,&LLMScope_Name90,true);
  sVar8 = (**(code **)(*(longlong *)param_1 + 0x60))(param_1);
  if (((sVar8 != 0) ||
      (sVar8 = (**(code **)(*(longlong *)&param_1->field_0x40 + 0x28))(&param_1->field_0x40),
      sVar8 != 0)) ||
     (sVar8 = (*(code *)**(undefined8 **)&param_1->field_0x40)(&param_1->field_0x40), sVar8 != 0)) {
    lVar13 = (**(code **)(param_2->_padding_ + 0x318))(param_2);
    uVar9 = (**(code **)(*(longlong *)
                          (&param_1->field_0x8 + *(int *)(*(longlong *)&param_1->field_0x8 + 4)) +
                        0xa8))();
    this_00 = &this->DriverJointsToControlAttributesMap;
    piVar1 = &(this->DriverJointsToControlAttributesMap).ArrayMax;
    (this->DriverJointsToControlAttributesMap).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,4,0,&this_00->AllocatorInstance,0,piVar1);
    }
    if (*piVar1 < (int)(uint)(uVar9 >> 2)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,4,(uint)(uVar9 >> 2),&this_00->AllocatorInstance,
                 (this->DriverJointsToControlAttributesMap).ArrayNum,piVar1);
    }
    uVar6 = _UNK_15060db28;
    uVar5 = ___xmm_ffffffffffffffffffffffffffffffff;
    uVar20 = 0;
    if (uVar9 != 0) {
      do {
        (**(code **)(*(longlong *)
                      (&param_1->field_0x8 + *(int *)(*(longlong *)&param_1->field_0x8 + 4)) + 0xb0)
        )(&param_1->field_0x8 + *(int *)(*(longlong *)&param_1->field_0x8 + 4),&local_88);
        iVar15 = local_88.Data.ArrayNum;
        iVar10 = iVar15 + -1;
        if (iVar15 == 0) {
          iVar10 = 0;
        }
        if (iVar10 < 2) {
LAB_14a67c892:
          if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.Data.AllocatorInstance.Data);
          }
        }
        else {
          pFVar19 = local_88.Data.AllocatorInstance.Data + (longlong)iVar15 * 2;
          do {
            if (pFVar19 == local_88.Data.AllocatorInstance.Data) {
              iVar10 = -1;
              goto LAB_14a67c8da;
            }
            pFVar19 = pFVar19 + -2;
          } while (*(short *)pFVar19 != 0x2e);
          iVar10 = (int)((longlong)pFVar19 - (longlong)local_88.Data.AllocatorInstance.Data >> 1);
LAB_14a67c8da:
          ::FString::Mid(&local_88,&local_78,0,iVar10);
          FVar17.Data = (FScriptContainerElement *)L"";
          if (local_78.Data.ArrayNum != 0) {
            FVar17.Data = local_78.Data.AllocatorInstance.Data;
          }
          ::FName::FName(&local_98,(wchar_t *)FVar17.Data);
          if (local_98 == (FName)0x0) {
LAB_14a67cc4b:
            if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_78.Data.AllocatorInstance.Data);
            }
            goto LAB_14a67c892;
          }
          pTVar14 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                    ::Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                            *)(lVar13 + 0x90),local_98);
          piVar18 = (int *)&pTVar14->field_0x8;
          if (pTVar14 == (TTuple<FName,int> *)0x0) {
            piVar18 = (int *)0x0;
          }
          if ((piVar18 == (int *)0x0) || (<Var2.BoneIndex = *piVar18, <Var2.BoneIndex == -1))
          goto LAB_14a67cc4b;
          uVar11 = TArray<FDNAIndexMapping::FMeshPoseBoneControlAttributeMapping,TSizedDefaultAllocator<32>_>
                   ::FindLastByPredicate<_FDNAIndexMapping::MapDriverJoints_::__l7::<lambda_1>_>
                             (this_00,<Var2,(this->DriverJointsToControlAttributesMap).ArrayNum);
          if (uVar11 == 0xffffffff) {
            pFVar19 = (this_00->AllocatorInstance).Data;
            uStack_64 = (undefined4)uVar5;
            uStack_60 = (undefined4)((ulonglong)uVar5 >> 0x20);
            uStack_5c = (undefined4)uVar6;
            uStack_58 = (undefined4)((ulonglong)uVar6 >> 0x20);
            local_68 = <Var2.BoneIndex;
            uStack_54 = uVar11;
            if (((pFVar19 <= (FScriptContainerElement *)&local_68) &&
                ((FScriptContainerElement *)&local_68 < pFVar19 + (longlong)*piVar1 * 0x18)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar7)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            uVar11 = (this->DriverJointsToControlAttributesMap).ArrayNum;
            if (uVar11 == *piVar1) {
              uVar11 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x418,&this_00->AllocatorInstance,piVar1);
            }
            (this->DriverJointsToControlAttributesMap).ArrayNum = uVar11 + 1;
            pFVar3 = (this_00->AllocatorInstance).Data;
            pFVar19 = pFVar3 + (longlong)(int)uVar11 * 0x18;
            *(ulonglong *)pFVar19 = CONCAT44(uStack_64,local_68);
            *(ulonglong *)(pFVar19 + 8) = CONCAT44(uStack_5c,uStack_60);
            *(ulonglong *)(pFVar3 + (longlong)(int)uVar11 * 0x18 + 0x10) =
                 CONCAT44(uStack_54,uStack_58);
          }
          uVar12 = 0;
          if ((int)uVar11 < (this->DriverJointsToControlAttributesMap).ArrayNum) {
            uVar12 = ~uVar11 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar19 = (this_00->AllocatorInstance).Data + (longlong)(int)uVar11 * 0x18;
          pFVar3 = (this->JointsMapDNAIndicesToMeshPoseBoneIndices).AllocatorInstance.Data;
          if (pFVar3 != pFVar3 + (longlong)(this->JointsMapDNAIndicesToMeshPoseBoneIndices).ArrayNum
                                 * 4) {
            pFVar16 = pFVar3;
            do {
              if (*(int *)pFVar16 == *(int *)pFVar19) {
                iVar10 = (int)((longlong)pFVar16 - (longlong)pFVar3 >> 2);
                goto LAB_14a67ca96;
              }
              pFVar16 = pFVar16 + 4;
            } while (pFVar16 !=
                     pFVar3 + (longlong)(this->JointsMapDNAIndicesToMeshPoseBoneIndices).ArrayNum *
                              4);
          }
          iVar10 = -1;
LAB_14a67ca96:
          *(int *)(pFVar19 + 4) = iVar10;
          bVar7 = ::FString::EndsWith(&local_88,L".x",2,IgnoreCase);
          if ((bVar7) || (bVar7 = ::FString::EndsWith(&local_88,L".qx",3,IgnoreCase), bVar7)) {
            *(uint *)(pFVar19 + 8) = uVar20;
          }
          else {
            bVar7 = ::FString::EndsWith(&local_88,L".y",2,IgnoreCase);
            if ((bVar7) || (bVar7 = ::FString::EndsWith(&local_88,L".qy",3,IgnoreCase), bVar7)) {
              *(uint *)(pFVar19 + 0xc) = uVar20;
            }
            else {
              bVar7 = ::FString::EndsWith(&local_88,L".z",2,IgnoreCase);
              if ((bVar7) || (bVar7 = ::FString::EndsWith(&local_88,L".qz",3,IgnoreCase), bVar7)) {
                *(uint *)(pFVar19 + 0x10) = uVar20;
              }
              else {
                bVar7 = ::FString::EndsWith(&local_88,L".w",2,IgnoreCase);
                if ((bVar7) || (bVar7 = ::FString::EndsWith(&local_88,L".qw",3,IgnoreCase), bVar7))
                {
                  *(uint *)(pFVar19 + 0x14) = uVar20;
                }
              }
            }
          }
          if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
          }
          if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.Data.AllocatorInstance.Data);
          }
        }
        uVar20 = uVar20 + 1;
      } while (uVar20 < uVar9);
    }
  }
  FMemScope::~FMemScope(&local_90);
  FLLMScope::~FLLMScope(local_res10);
  return;
}

// MapJoints @ 14a67db20

void __thiscall
FDNAIndexMapping::MapJoints(FDNAIndexMapping *this,IDNAReader *param_1,USkeletalMesh *param_2)

{
  TArray<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  ushort uVar7;
  int iVar8;
  longlong lVar9;
  TTuple<FName,int> *pTVar10;
  undefined4 *puVar11;
  wchar_t *pwVar12;
  undefined4 uVar13;
  ushort uVar14;
  FLLMScope local_res8 [2];
  FName local_res10;
  FMemScope local_res18;
  undefined4 local_58 [2];
  wchar_t *local_50;
  int local_48;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name159,L"Animation/RigLogic");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name159,false,None,Default,true);
  FMemScope::FMemScope(&local_res18,&LLMScope_Name159,true);
  lVar9 = (**(code **)(param_2->_padding_ + 0x318))(param_2);
  uVar7 = (**(code **)(*(longlong *)
                        (&param_1->field_0x8 + *(int *)(*(longlong *)&param_1->field_0x8 + 4)) +
                      0xb8))();
  pTVar1 = &this->JointsMapDNAIndicesToMeshPoseBoneIndices;
  uVar3 = (this->JointsMapDNAIndicesToMeshPoseBoneIndices).ArrayMax;
  (this->JointsMapDNAIndicesToMeshPoseBoneIndices).ArrayNum = 0;
  piVar2 = &(this->JointsMapDNAIndicesToMeshPoseBoneIndices).ArrayMax;
  if (uVar7 != uVar3 && (int)uVar3 <= (int)(uint)uVar7) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,(uint)uVar7,&pTVar1->AllocatorInstance,0,piVar2);
  }
  uVar14 = 0;
  if (uVar7 != 0) {
    do {
      (**(code **)(*(longlong *)
                    (&param_1->field_0x8 + *(int *)(*(longlong *)&param_1->field_0x8 + 4)) + 0xc0))
                (&param_1->field_0x8 + *(int *)(*(longlong *)&param_1->field_0x8 + 4),&local_50,
                 uVar14);
      pwVar12 = L"";
      if (local_48 != 0) {
        pwVar12 = local_50;
      }
      ::FName::FName(&local_res10,pwVar12);
      uVar13 = 0xffffffff;
      if (local_res10 != (FName)0x0) {
        pTVar10 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                          *)(lVar9 + 0x90),local_res10);
        puVar11 = (undefined4 *)&pTVar10->field_0x8;
        if (pTVar10 == (TTuple<FName,int> *)0x0) {
          puVar11 = (undefined4 *)0x0;
        }
        if (puVar11 != (undefined4 *)0x0) {
          uVar13 = *puVar11;
        }
      }
      pFVar4 = (pTVar1->AllocatorInstance).Data;
      local_58[0] = uVar13;
      if (((pFVar4 <= (FScriptContainerElement *)local_58) &&
          ((FScriptContainerElement *)local_58 < pFVar4 + (longlong)*piVar2 * 4)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar8 = (this->JointsMapDNAIndicesToMeshPoseBoneIndices).ArrayNum;
      if (iVar8 == *piVar2) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&pTVar1->AllocatorInstance,piVar2);
      }
      (this->JointsMapDNAIndicesToMeshPoseBoneIndices).ArrayNum = iVar8 + 1;
      *(undefined4 *)((pTVar1->AllocatorInstance).Data + (longlong)iVar8 * 4) = local_58[0];
      if (local_50 != (wchar_t *)0x0) {
        FMemory::Free(local_50);
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 < uVar7);
  }
  FMemScope::~FMemScope(&local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// MapMaskMultipliers @ 14a67e1e0

void __thiscall
FDNAIndexMapping::MapMaskMultipliers(FDNAIndexMapping *this,IDNAReader *param_1,USkeleton *param_2)

{
  int *piVar1;
  ushort uVar2;
  TBaseBlendedCurve<TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed> *pTVar3;
  FName FVar4;
  code *pcVar5;
  bool bVar6;
  ushort uVar7;
  int iVar8;
  longlong lVar9;
  FName *pFVar10;
  ForAnyElementType FVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  int *piVar15;
  TArray<TBaseBlendedCurve<TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed>,TSizedDefaultAllocator<32>_>
  *pTVar16;
  ushort *puVar17;
  ushort local_res8;
  <lambda_1> local_res10;
  FLLMScope local_e4;
  uint local_e0;
  FString local_d8;
  TArray<TBaseBlendedCurve<TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed>,TSizedDefaultAllocator<32>_>
  *local_c8;
  TNamedValueArray<TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed> local_c0;
  undefined8 local_a8;
  ulonglong local_a0;
  ushort *local_98;
  int *local_90;
  longlong local_88;
  FMemScope local_80;
  ushort *local_78;
  ulonglong local_70;
  FString local_68;
  FString local_58;
  FName local_48 [2];
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name216,L"Animation/RigLogic");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(&local_e4,LLMScope_Name216,false,None,Default,true);
  FMemScope::FMemScope(&local_80,&LLMScope_Name216,true);
  uVar7 = (**(code **)(*(longlong *)
                        (&param_1->field_0x8 + *(int *)(*(longlong *)&param_1->field_0x8 + 4)) +
                      0x78))();
  pTVar16 = &this->MaskMultiplierCurvesPerLOD;
  piVar15 = &(this->MaskMultiplierCurvesPerLOD).ArrayNum;
  pTVar3 = (TBaseBlendedCurve<TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed> *)
           (pTVar16->AllocatorInstance).Data;
  piVar1 = &(this->MaskMultiplierCurvesPerLOD).ArrayMax;
  local_c8 = pTVar16;
  local_90 = piVar15;
  if ((this->MaskMultiplierCurvesPerLOD).ArrayMax < 0) {
    DestructItems<TBaseBlendedCurve<TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed>,int>
              (pTVar3,*piVar15);
    *piVar15 = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,&pTVar16->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TBaseBlendedCurve<TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed>,int>
              (pTVar3,*piVar15);
    *piVar15 = 0;
  }
  iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,(uint)uVar7,&pTVar16->AllocatorInstance,piVar15,piVar1);
  DefaultConstructItems<TBaseBlendedCurve<TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed>,int>
            ((pTVar16->AllocatorInstance).Data + (longlong)iVar8 * 0x20,(uint)uVar7);
  local_res8 = 0;
  if (uVar7 != 0) {
    local_res10 = SUB81(param_1,0);
    do {
      (**(code **)(*(longlong *)
                    (&param_1->field_0x8 + *(int *)(*(longlong *)&param_1->field_0x8 + 4)) + 0x118))
                (&param_1->field_0x8 + *(int *)(*(longlong *)&param_1->field_0x8 + 4),&local_78,
                 local_res8);
      uVar12 = (uint)local_res8;
      local_e0 = (uint)local_res8;
      if ((*piVar15 <= (int)local_e0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar8 = (int)local_70;
      if (iVar8 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(local_70 & 0xffffffff);
      }
      local_a0 = (ulonglong)local_res8;
      lVar14 = (ulonglong)local_res8 * 0x20;
      pFVar13 = (pTVar16->AllocatorInstance).Data + lVar14;
      local_88 = lVar14;
      if (*(int *)(pFVar13 + 0xc) < iVar8) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x14,4,iVar8,(ForAnyElementType *)pFVar13,*(int *)(pFVar13 + 8),
                   (int *)(pFVar13 + 0xc));
        iVar8 = (int)local_70;
      }
      local_98 = local_78 + iVar8;
      puVar17 = local_78;
      if (local_78 != local_98) {
        do {
          uVar2 = *puVar17;
          (**(code **)(*(longlong *)
                        (&param_1->field_0x8 + *(int *)(*(longlong *)&param_1->field_0x8 + 4)) +
                      0x108))(&param_1->field_0x8 + *(int *)(*(longlong *)&param_1->field_0x8 + 4),
                              &local_68,uVar2);
          ::FString::FString(&local_58,L"<obj>_<attr>");
          CreateCurveName(&local_d8,&local_68,&local_58);
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
          FVar11.Data = (FScriptContainerElement *)L"";
          if (local_d8.Data.ArrayNum != 0) {
            FVar11.Data = local_d8.Data.AllocatorInstance.Data;
          }
          iVar8 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar11.Data,"");
          if (iVar8 == 0) {
            if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_d8.Data.AllocatorInstance.Data);
            }
            if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_68.Data.AllocatorInstance.Data);
            }
            goto LAB_14a67e619;
          }
          if ((*piVar15 <= (int)uVar12) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar13 = (local_c8->AllocatorInstance).Data + lVar14;
          FVar11.Data = (FScriptContainerElement *)L"";
          if (local_d8.Data.ArrayNum != 0) {
            FVar11.Data = local_d8.Data.AllocatorInstance.Data;
          }
          iVar8 = *(int *)(pFVar13 + 8);
          if (iVar8 == *(int *)(pFVar13 + 0xc)) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x414,(ForAnyElementType *)pFVar13,(int *)(pFVar13 + 0xc));
          }
          lVar14 = *(longlong *)pFVar13;
          lVar9 = (longlong)iVar8;
          *(int *)(pFVar13 + 8) = iVar8 + 1;
          pFVar10 = ::FName::FName(local_48,(wchar_t *)FVar11.Data);
          FVar4 = *pFVar10;
          *(uint *)(lVar14 + 0x10 + lVar9 * 0x14) = (uint)uVar2;
          *(FName *)(lVar14 + lVar9 * 0x14) = FVar4;
          *(undefined4 *)(lVar14 + 8 + lVar9 * 0x14) = 0;
          *(undefined1 *)(lVar14 + 0xc + lVar9 * 0x14) = 0;
          pFVar13[0x10] = (FScriptContainerElement)0x0;
          if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d8.Data.AllocatorInstance.Data);
          }
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
          puVar17 = puVar17 + 1;
          lVar14 = local_88;
          piVar15 = local_90;
          uVar12 = local_e0;
        } while (puVar17 != local_98);
      }
      local_c0._17_4_ = 0;
      local_c0._21_2_ = 0;
      local_c0._23_1_ = 0;
      local_c0.Elements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c0.Elements.ArrayNum = 0;
      local_c0.Elements.ArrayMax = 0;
      local_c0.bSorted = false;
      local_a8 = 0;
      if ((*piVar15 <= (int)uVar12) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pTVar16 = local_c8;
      UE::Anim::FNamedValueArrayUtils::
      RemoveByPredicate<TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed,TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed,_FDNAIndexMapping::MapMaskMultipliers_::__l4::<lambda_1>_>
                ((TNamedValueArray<TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed> *)
                 ((local_c8->AllocatorInstance).Data + (ulonglong)local_res8 * 0x20),&local_c0,
                 local_res10);
      if (local_c0.Elements.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.Elements.AllocatorInstance.Data);
      }
      local_res8 = local_res8 + 1;
    } while (local_res8 < uVar7);
  }
LAB_14a67e619:
  FMemScope::~FMemScope(&local_80);
  FLLMScope::~FLLMScope(&local_e4);
  return;
}

// MapMorphTargets @ 14a67eec0

void __thiscall
FDNAIndexMapping::MapMorphTargets
          (FDNAIndexMapping *this,IDNAReader *param_1,USkeleton *param_2,USkeletalMesh *param_3)

{
  undefined2 *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  ushort uVar7;
  int iVar8;
  uint uVar9;
  longlong *plVar10;
  TTuple<FName,int> *pTVar11;
  longlong lVar12;
  ForAnyElementType FVar13;
  uint *puVar14;
  FScriptContainerElement *pFVar15;
  TArray<TBaseBlendedCurve<TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed>,TSizedDefaultAllocator<32>_>
  *pTVar16;
  ushort uVar17;
  int *piVar18;
  undefined2 *puVar19;
  longlong lVar20;
  <lambda_1> local_res10;
  FLLMScope local_res20 [2];
  undefined2 local_d8 [2];
  undefined4 local_d4;
  TArray<TBaseBlendedCurve<TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed>,TSizedDefaultAllocator<32>_>
  *local_d0;
  TNamedValueArray<TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed> local_c8;
  undefined8 local_b0;
  FName local_a8;
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator> *local_a0;
  longlong *local_98;
  FMemScope local_90;
  undefined2 *local_88;
  ulonglong local_80;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name178,L"Animation/RigLogic");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res20,LLMScope_Name178,false,None,Default,true);
  FMemScope::FMemScope(&local_90,&LLMScope_Name178,true);
  uVar7 = (**(code **)(*(longlong *)
                        (&param_1->field_0x8 + *(int *)(*(longlong *)&param_1->field_0x8 + 4)) +
                      0x78))();
  USkeletalMesh::WaitUntilAsyncPropertyReleased(param_3,MorphTargetIndexMap,ReadOnly);
  local_a0 = (TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
              *)&param_3->MorphTargetIndexMap;
  plVar10 = (longlong *)(**(code **)(param_3->_padding_ + 0x450))(param_3);
  pTVar16 = &this->MorphTargetCurvesPerLOD;
  local_d0 = pTVar16;
  local_98 = plVar10;
  TArray<TBaseBlendedCurve<TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed>,TSizedDefaultAllocator<32>_>
  ::Reset(pTVar16,(uint)uVar7);
  piVar18 = &(this->MorphTargetCurvesPerLOD).ArrayNum;
  iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,(uint)uVar7,&pTVar16->AllocatorInstance,piVar18,
                     &(this->MorphTargetCurvesPerLOD).ArrayMax);
  DefaultConstructItems<TBaseBlendedCurve<TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed>,int>
            ((pTVar16->AllocatorInstance).Data + (longlong)iVar8 * 0x20,(uint)uVar7);
  uVar17 = 0;
  if (uVar7 != 0) {
    local_res10 = SUB81(param_1,0);
    do {
      (**(code **)(*(longlong *)
                    (&param_1->field_0x8 + *(int *)(*(longlong *)&param_1->field_0x8 + 4)) + 0x150))
                (&param_1->field_0x8 + *(int *)(*(longlong *)&param_1->field_0x8 + 4),&local_88,
                 uVar17);
      if ((*piVar18 <= (int)(uint)uVar17) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar20 = (ulonglong)uVar17 * 0x20;
      pFVar15 = (pTVar16->AllocatorInstance).Data + lVar20;
      iVar8 = (int)local_80;
      if (iVar8 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(local_80 & 0xffffffff);
      }
      if (*(int *)(pFVar15 + 0xc) < iVar8) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x14,4,iVar8,(ForAnyElementType *)pFVar15,*(int *)&pFVar15[8].field_0x0,
                   (int *)(pFVar15 + 0xc));
        iVar8 = (int)local_80;
      }
      puVar1 = local_88 + iVar8;
      pTVar16 = local_d0;
      for (puVar19 = local_88; local_d0 = pTVar16, puVar19 != puVar1; puVar19 = puVar19 + 1) {
        (**(code **)(*(longlong *)
                      (&param_1->field_0x8 + *(int *)(*(longlong *)&param_1->field_0x8 + 4)) + 0x148
                    ))(&param_1->field_0x8 + *(int *)(*(longlong *)&param_1->field_0x8 + 4),local_d8
                       ,*puVar19);
        (**(code **)(*(longlong *)
                      (&param_1->field_0x8 + *(int *)(*(longlong *)&param_1->field_0x8 + 4)) + 0x128
                    ))(&param_1->field_0x8 + *(int *)(*(longlong *)&param_1->field_0x8 + 4),
                       &local_48,local_d8[0]);
        (**(code **)(*(longlong *)
                      (&param_1->field_0x8 + *(int *)(*(longlong *)&param_1->field_0x8 + 4)) + 0xe8)
        )(&param_1->field_0x8 + *(int *)(*(longlong *)&param_1->field_0x8 + 4),&local_58,
          (undefined2)local_d4);
        ::FString::ConcatFC(&local_68,&local_48,L"__");
        ::FString::ConcatFF(&local_78,&local_68,&local_58);
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        FVar13.Data = (FScriptContainerElement *)L"";
        if (local_78.Data.ArrayNum != 0) {
          FVar13.Data = local_78.Data.AllocatorInstance.Data;
        }
        ::FName::FName(&local_a8,(wchar_t *)FVar13.Data);
        pTVar11 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                  ::Find(local_a0,local_a8);
        puVar14 = (uint *)&pTVar11->field_0x8;
        if (pTVar11 == (TTuple<FName,int> *)0x0) {
          puVar14 = (uint *)0x0;
        }
        if (puVar14 != (uint *)0x0) {
          uVar2 = *puVar14;
          if (uVar2 != 0xffffffff) {
            uVar9 = 0;
            if ((int)uVar2 < (int)plVar10[1]) {
              uVar9 = ~uVar2 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pTVar16 = local_d0;
            lVar3 = *(longlong *)(*plVar10 + (longlong)(int)uVar2 * 8);
            if ((local_d0->ArrayNum <= (int)(uint)uVar17) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            uVar4 = *(undefined8 *)(lVar3 + 0x18);
            pFVar15 = (pTVar16->AllocatorInstance).Data + lVar20;
            iVar8 = *(int *)&pFVar15[8].field_0x0;
            if (iVar8 == *(int *)(pFVar15 + 0xc)) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x414,(ForAnyElementType *)pFVar15,(int *)(pFVar15 + 0xc));
            }
            *(int *)&pFVar15[8].field_0x0 = iVar8 + 1;
            lVar3 = *(longlong *)&pFVar15->field_0x0;
            lVar12 = (longlong)iVar8;
            *(undefined8 *)(lVar3 + lVar12 * 0x14) = uVar4;
            *(undefined4 *)(lVar3 + lVar12 * 0x14 + 8) = 0;
            *(undefined1 *)(lVar3 + lVar12 * 0x14 + 0xc) = 0;
            *(undefined4 *)(lVar3 + lVar12 * 0x14 + 0x10) = local_d4;
            pFVar15[0x10].field_0x0 = 0;
            plVar10 = local_98;
          }
        }
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        pTVar16 = local_d0;
      }
      piVar18 = &pTVar16->ArrayNum;
      local_c8._17_4_ = 0;
      local_c8._21_2_ = 0;
      local_c8._23_1_ = 0;
      local_c8.Elements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c8.Elements.ArrayNum = 0;
      local_c8.Elements.ArrayMax = 0;
      local_c8.bSorted = false;
      local_b0 = 0;
      if ((*piVar18 <= (int)(uint)uVar17) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      UE::Anim::FNamedValueArrayUtils::
      RemoveByPredicate<TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed,TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed,_FDNAIndexMapping::MapMorphTargets_::__l4::<lambda_1>_>
                ((TNamedValueArray<TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed> *)
                 ((pTVar16->AllocatorInstance).Data + lVar20),&local_c8,local_res10);
      if (local_c8.Elements.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Elements.AllocatorInstance.Data);
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 < uVar7);
  }
  FMemScope::~FMemScope(&local_90);
  FLLMScope::~FLLMScope(local_res20);
  return;
}

// MapNeuralNetworkMaskCurves @ 14a680200

void __thiscall
FDNAIndexMapping::MapNeuralNetworkMaskCurves
          (FDNAIndexMapping *this,IDNAReader *param_1,USkeleton *param_2)

{
  uint *puVar1;
  ushort uVar2;
  longlong lVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  longlong lVar7;
  FName *pFVar8;
  ForAnyElementType FVar9;
  TBaseBlendedCurve<TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed> *pTVar10;
  longlong *plVar11;
  ushort *puVar12;
  ushort local_res8;
  ushort local_res10;
  FLLMScope local_a4;
  TNamedValueArray<TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed> local_a0;
  undefined8 local_88;
  longlong *local_80;
  ushort *local_78;
  FMemScope local_70;
  FString local_68;
  ushort *local_58;
  int local_50;
  FName local_48 [2];
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name60,L"Animation/RigLogic");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(&local_a4,LLMScope_Name60,false,None,Default,true);
  FMemScope::FMemScope(&local_70,&LLMScope_Name60,true);
  plVar11 = (longlong *)&param_1->field_0x20;
  local_80 = plVar11;
  uVar4 = (**(code **)(*(longlong *)&param_1->field_0x20 + 0x10))(plVar11);
  pTVar10 = &this->NeuralNetworkMaskCurves;
  puVar1 = (uint *)((longlong)&(this->NeuralNetworkMaskCurves)._padding_ + 4);
  uVar6 = *puVar1;
  *(undefined4 *)&(this->NeuralNetworkMaskCurves)._padding_ = 0;
  if ((int)uVar6 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,(ForAnyElementType *)pTVar10,0,(int *)puVar1);
  }
  *(undefined1 *)&(this->NeuralNetworkMaskCurves)._padding_ = 0;
  if ((uint)uVar4 != *puVar1 && (int)*puVar1 <= (int)(uint)uVar4) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,(uint)uVar4,(ForAnyElementType *)pTVar10,
               (int)(this->NeuralNetworkMaskCurves)._padding_,(int *)puVar1);
  }
  uVar4 = (**(code **)(*(longlong *)
                        (&param_1->field_0x8 + *(int *)(*(longlong *)&param_1->field_0x8 + 4)) +
                      0x120))();
  local_res10 = 0;
  if (uVar4 != 0) {
    do {
      uVar5 = (**(code **)(*plVar11 + 0x28))(plVar11,local_res10);
      local_res8 = 0;
      if (uVar5 != 0) {
        do {
          (**(code **)(*plVar11 + 0x30))(plVar11,&local_a0,local_res10,local_res8);
          (**(code **)(*plVar11 + 0x38))(plVar11,&local_58,local_res10,local_res8);
          ::FString::ConcatCF(&local_68,L"CTRL_ML_",(FString *)&local_a0);
          local_78 = local_58 + local_50;
          puVar12 = local_58;
          if (local_58 != local_78) {
            do {
              uVar6 = (uint)(this->NeuralNetworkMaskCurves)._padding_;
              FVar9.Data = (FScriptContainerElement *)L"";
              if (local_68.Data.ArrayNum != 0) {
                FVar9.Data = local_68.Data.AllocatorInstance.Data;
              }
              uVar2 = *puVar12;
              if (uVar6 == *puVar1) {
                uVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x414,(ForAnyElementType *)pTVar10,(int *)puVar1);
              }
              lVar3 = pTVar10->_padding_;
              lVar7 = (longlong)(int)uVar6;
              *(uint *)&(this->NeuralNetworkMaskCurves)._padding_ = uVar6 + 1;
              pFVar8 = ::FName::FName(local_48,(wchar_t *)FVar9.Data);
              puVar12 = puVar12 + 1;
              *(FName *)(lVar3 + lVar7 * 0x14) = *pFVar8;
              *(undefined4 *)(lVar3 + 8 + lVar7 * 0x14) = 0;
              *(undefined1 *)(lVar3 + 0xc + lVar7 * 0x14) = 0;
              *(uint *)(lVar3 + 0x10 + lVar7 * 0x14) = (uint)uVar2;
              *(undefined1 *)&(this->NeuralNetworkMaskCurves)._padding_ = 0;
            } while (puVar12 != local_78);
          }
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
          if (local_a0.Elements.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a0.Elements.AllocatorInstance.Data);
          }
          local_res8 = local_res8 + 1;
          plVar11 = local_80;
        } while (local_res8 < uVar5);
      }
      local_res10 = local_res10 + 1;
    } while (local_res10 < uVar4);
  }
  local_a0._17_4_ = 0;
  local_a0._21_2_ = 0;
  local_a0._23_1_ = 0;
  local_a0.Elements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a0.Elements.ArrayNum = 0;
  local_a0.Elements.ArrayMax = 0;
  local_a0.bSorted = false;
  local_88 = 0;
  UE::Anim::FNamedValueArrayUtils::
  RemoveByPredicate<TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed,TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed,_FDNAIndexMapping::MapNeuralNetworkMaskCurves_::__l2::<lambda_1>_>
            ((TNamedValueArray<TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed> *)pTVar10,
             &local_a0,local_res8._0_1_);
  if (local_a0.Elements.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Elements.AllocatorInstance.Data);
  }
  FMemScope::~FMemScope(&local_70);
  FLLMScope::~FLLMScope(&local_a4);
  return;
}

