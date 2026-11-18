// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 16

// StaticStruct @ 14758bee0

UScriptStruct * __cdecl FPoseDataContainer::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPoseDataContainer.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FPoseDataContainer.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPoseDataContainer,(UObject *)pUVar1,
                         L"PoseDataContainer");
  }
  return Z_Registration_Info_UScriptStruct_FPoseDataContainer.OuterSingleton;
}

// ~FPoseDataContainer @ 1475a9bc0

void __thiscall FPoseDataContainer::~FPoseDataContainer(FPoseDataContainer *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Curves).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FPoseData,int>
            ((FPoseData *)(this->Poses).AllocatorInstance.Data,(this->Poses).ArrayNum);
  pFVar1 = (this->Poses).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FPoseAssetInfluences,int>
            ((FPoseAssetInfluences *)(this->TrackPoseInfluenceIndices).AllocatorInstance.Data,
             (this->TrackPoseInfluenceIndices).ArrayNum);
  pFVar1 = (this->TrackPoseInfluenceIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TrackBoneIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Tracks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SortedCurveIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PoseFNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator() @ 1475ac470

bool __thiscall
`FPoseDataContainer::RebuildCurveIndexTable'::__l2::<lambda_1>::operator()
          (void *this,int param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  uint uVar9;
  
  plVar1 = *(longlong **)this;
  uVar9 = 0;
  if (param_1 < (int)plVar1[1]) {
    uVar9 = (uint)~param_1 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  plVar2 = *(longlong **)this;
  uVar3 = *(undefined8 *)(*plVar1 + (longlong)param_1 * 0xc);
  uVar9 = 0;
  if (param_2 < (int)plVar2[1]) {
    uVar9 = (uint)~param_2 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  uVar4 = *(undefined8 *)(*plVar2 + (longlong)param_2 * 0xc);
  iVar8 = (int)uVar3 - (int)uVar4;
  if (iVar8 == 0) {
    iVar8 = (int)((ulonglong)uVar3 >> 0x20) - (int)((ulonglong)uVar4 >> 0x20);
  }
  return SUB41((uint)iVar8 >> 0x1f,0);
}

// operator() @ 1475ac980

FName __thiscall
`FPoseDataContainer::GetPoseCurve'::__l5::<lambda_1>::operator()(void *this,int param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FName FVar4;
  uint uVar5;
  uint in_register_00000014;
  uint uVar6;
  uint in_R8D;
  
  FVar4.Number = in_register_00000014;
  FVar4.ComparisonIndex.Value = param_1;
  lVar1 = *(longlong *)this;
  uVar5 = 0;
  if ((int)in_R8D < *(int *)(lVar1 + 0x18)) {
    uVar5 = ~in_R8D >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      FVar4 = (FName)(*pcVar2)();
      return FVar4;
    }
  }
  uVar5 = *(uint *)(*(longlong *)(lVar1 + 0x10) + (longlong)(int)in_R8D * 4);
  uVar6 = 0;
  if ((int)uVar5 < *(int *)(lVar1 + 0x68)) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      FVar4 = (FName)(*pcVar2)();
      return FVar4;
    }
  }
  *(undefined8 *)FVar4 = *(undefined8 *)(*(longlong *)(lVar1 + 0x60) + (longlong)(int)uVar5 * 0xc);
  return FVar4;
}

// operator() @ 1475ad590

float __thiscall
`FPoseDataContainer::GetPoseCurve'::__l5::<lambda_2>::operator()(void *this,int param_1)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  
  lVar1 = *(longlong *)this;
  plVar2 = *(longlong **)((longlong)this + 8);
  uVar5 = 0;
  if (param_1 < *(int *)(lVar1 + 0x18)) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      fVar7 = (float)(*pcVar3)();
      return fVar7;
    }
  }
  uVar5 = *(uint *)(*(longlong *)(lVar1 + 0x10) + (longlong)param_1 * 4);
  uVar6 = 0;
  if ((int)uVar5 < (int)plVar2[1]) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      fVar7 = (float)(*pcVar3)();
      return fVar7;
    }
  }
  return *(float *)(*plVar2 + (longlong)(int)uVar5 * 4);
}

// BlendPoseCurve @ 1475b57c0

void __thiscall
FPoseDataContainer::BlendPoseCurve
          (FPoseDataContainer *this,FPoseData *param_1,FBlendedCurve *param_2,float param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  FName FVar4;
  FName FVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  undefined8 *puVar9;
  FName *pFVar10;
  ECurveElementFlags *pEVar11;
  longlong lVar12;
  longlong lVar13;
  FCurveElement *pFVar14;
  FCurveElement *pFVar15;
  int iVar16;
  FName *pFVar17;
  uint uVar18;
  FIdentityFunctor local_res10;
  <lambda_2> local_78;
  <lambda_2> local_68;
  TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement> local_58;
  
  if (param_1 != (FPoseData *)0x0) {
    local_58._padding_ = 0;
    local_58._padding_ = 0;
    local_58.Filter = *(FCurveFilter **)&param_2->field_0x18;
    iVar8 = (param_1->CurveData).ArrayNum;
    local_58._padding_._0_1_ = '\x01';
    if (((local_58.Filter == (FCurveFilter *)0x0) || ((local_58.Filter)->FilterMode == None)) ||
       (((local_58.Filter)->FilterMode == DisallowFiltered &&
        ((int)(local_58.Filter)->_padding_ == 0)))) {
      local_68.__this = this;
      local_68.CurveValues = &param_1->CurveData;
      UE::Anim::FCurveUtils::
      BuildLinearUnfiltered<_FPoseDataContainer::GetPoseCurve_::__l5::<lambda_1>,_FPoseDataContainer::GetPoseCurve_::__l5::<lambda_2>,TMemStackAllocator<0>,UE::Anim::FCurveElement>
                (&local_58,iVar8,(<lambda_1>)this,&local_68);
    }
    else {
      local_78.__this = this;
      local_78.CurveValues = &param_1->CurveData;
      UE::Anim::FCurveUtils::
      BuildSortedFiltered<_FPoseDataContainer::GetPoseCurve_::__l5::<lambda_1>,_FPoseDataContainer::GetPoseCurve_::__l5::<lambda_2>,TMemStackAllocator<0>,UE::Anim::FCurveElement>
                (&local_58,iVar8,(<lambda_1>)this,&local_78,local_58.Filter);
    }
    if (((TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)param_2 == &local_58)
       && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("(void*)&InOutValueArray0 != (void*)&InValueArray1",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Animation\\NamedValueArray.h"
                              ,0x10a,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar16 = (int)local_58._padding_;
    lVar12 = (longlong)(int)local_58._padding_;
    puVar1 = &param_2->field_0x8;
    iVar8 = *(int *)puVar1;
    if ((int)local_58._padding_ != 0) {
      if (param_2->field_0x10 == '\0') {
        AlgoImpl::
        IntroSortInternal<UE::Anim::FCurveElement,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement>::FElementSortPredicate>
                  (*(FCurveElement **)param_2,iVar8,local_res10,(FElementSortPredicate)local_res10);
        param_2->field_0x10 = 1;
      }
      pFVar15 = (FCurveElement *)local_58._padding_;
      if ((char)local_58._padding_ == '\0') {
        AlgoImpl::
        IntroSortInternal<UE::Anim::FCurveElement,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement>::FElementSortPredicate>
                  ((FCurveElement *)local_58._padding_,iVar16,local_res10,
                   (FElementSortPredicate)local_res10);
      }
      if (iVar16 < iVar8) {
        iVar16 = iVar8;
      }
      uVar18 = iVar16 / 2 + iVar16;
      if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
      }
      puVar2 = &param_2->field_0xc;
      if (*(int *)&param_2->field_0xc < (int)uVar18) {
        UE::Core::Private::
        ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                  (0x10,4,uVar18,(ForElementType<UE::Anim::FCurveElement> *)param_2,*(int *)puVar1,
                   (int *)puVar2);
      }
      pFVar17 = *(FName **)param_2;
      pFVar10 = pFVar17 + (longlong)iVar8 * 2;
      pFVar14 = (FCurveElement *)((longlong)pFVar15 + lVar12);
      if (pFVar17 != pFVar10) {
        if (pFVar15 == pFVar14) {
          return;
        }
        do {
          while( true ) {
            FVar4 = pFVar15->Name;
            FVar5 = *pFVar17;
            if (FVar5 != FVar4) break;
            pFVar17[1].ComparisonIndex.Value =
                 (uint)(param_3 * pFVar15->Value + (float)pFVar17[1].ComparisonIndex.Value);
            pEVar11 = &pFVar15->Flags;
            pFVar15 = pFVar15 + 1;
            *(ECurveElementFlags *)&pFVar17[1].Number =
                 (ECurveElementFlags)pFVar17[1].Number | *pEVar11;
            pFVar17 = pFVar17 + 2;
            if ((pFVar17 == pFVar10) || (pFVar15 == pFVar14)) goto LAB_1475b5a8f;
          }
          iVar8 = FVar5.ComparisonIndex.Value.Value - FVar4.ComparisonIndex.Value;
          if (iVar8 == 0) {
            iVar8 = FVar5.Number - FVar4.Number;
          }
          if (iVar8 < 0) {
            pFVar17 = pFVar17 + 2;
            bVar7 = pFVar17 == pFVar10;
          }
          else {
            lVar12 = *(longlong *)param_2;
            iVar8 = *(int *)puVar1;
            if (iVar8 == *(int *)puVar2) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                                (0x410,(ForElementType<UE::Anim::FCurveElement> *)param_2,
                                 (int *)puVar2);
            }
            iVar16 = (int)((longlong)pFVar17 - lVar12 >> 4);
            *(int *)puVar1 = iVar8 + 1;
            lVar13 = (longlong)iVar16 * 0x10;
            memmove((void *)(*(longlong *)param_2 + lVar13 + 0x10),
                    (void *)(*(longlong *)param_2 + lVar13),(longlong)(iVar8 - iVar16) << 4);
            lVar12 = *(longlong *)param_2;
            pFVar10 = (FName *)((longlong)*(int *)puVar1 * 0x10 + lVar12);
            *(undefined8 *)(lVar13 + lVar12) = 0;
            ((undefined8 *)(lVar13 + lVar12))[1] = 0;
            *(undefined4 *)(lVar13 + 8 + lVar12) = 0;
            *(FName *)(lVar13 + lVar12) = pFVar15->Name;
            pFVar17 = (FName *)(lVar12 + 0x10 + lVar13);
            *(float *)(lVar13 + 8 + lVar12) = param_3 * pFVar15->Value;
            pEVar11 = &pFVar15->Flags;
            pFVar15 = pFVar15 + 1;
            bVar7 = pFVar15 == pFVar14;
            *(ECurveElementFlags *)(lVar13 + 0xc + lVar12) = *pEVar11;
          }
        } while (!bVar7);
      }
LAB_1475b5a8f:
      if (pFVar15 < pFVar14) {
        iVar8 = *(int *)puVar1;
        iVar16 = (int)((longlong)pFVar14 - (longlong)pFVar15 >> 4);
        uVar18 = iVar16 + iVar8;
        if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
        }
        if (*(int *)puVar2 < (int)uVar18) {
          UE::Core::Private::
          ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                    (0x10,4,uVar18,(ForElementType<UE::Anim::FCurveElement> *)param_2,iVar8,
                     (int *)puVar2);
        }
        UE::Core::Private::
        ReallocGrow<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                  (0x10,4,iVar16,(ForElementType<UE::Anim::FCurveElement> *)param_2,(int *)puVar1,
                   (int *)puVar2);
        puVar9 = (undefined8 *)((longlong)iVar8 * 0x10 + *(longlong *)param_2);
        lVar12 = (longlong)pFVar15 - (longlong)puVar9;
        pEVar11 = &pFVar15->Flags;
        do {
          *puVar9 = 0;
          puVar9[1] = 0;
          *(undefined4 *)(puVar9 + 1) = 0;
          *puVar9 = *(undefined8 *)(lVar12 + (longlong)puVar9);
          puVar3 = puVar9 + 2;
          *(float *)(puVar9 + 1) = param_3 * *(float *)(pEVar11 + -4);
          *(ECurveElementFlags *)((longlong)puVar9 + 0xc) = *pEVar11;
          puVar9 = puVar3;
          pEVar11 = pEVar11 + 0x10;
        } while ((FCurveElement *)(lVar12 + (longlong)puVar3) < pFVar14);
      }
    }
  }
  return;
}

// DeleteTrack @ 1475be870

void __thiscall FPoseDataContainer::DeleteTrack(FPoseDataContainer *this,int param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res10 [8];
  
  uVar4 = 0;
  if (param_1 < (this->Tracks).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar6 = (this->Tracks).AllocatorInstance.Data + (longlong)param_1 * 8;
  iVar5 = (this->Tracks).ArrayNum + ~param_1;
  if (iVar5 != 0) {
    memmove(pFVar6,pFVar6 + 8,(longlong)iVar5 << 3);
  }
  piVar1 = &(this->Tracks).ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,&(this->Tracks).AllocatorInstance,(this->Tracks).ArrayNum,&(this->Tracks).ArrayMax)
  ;
  iVar5 = (this->Poses).ArrayNum;
  pFVar6 = (this->Poses).AllocatorInstance.Data;
  pFVar7 = pFVar6 + (longlong)iVar5 * 0x20;
  while( true ) {
    if ((this->Poses).ArrayNum != iVar5) {
      `TCheckedPointerIterator<FPoseData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar6 == pFVar7) break;
    pFVar6 = pFVar6 + 0x20;
  }
  return;
}

// FindOrAddPoseData @ 1475cab50

FPoseData * __thiscall FPoseDataContainer::FindOrAddPoseData(FPoseDataContainer *this,FName param_1)

{
  int *piVar1;
  FName *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  FPoseData *pFVar7;
  FScriptContainerElement *pFVar8;
  FName *pFVar9;
  FName local_res10;
  
  pFVar2 = (FName *)(this->PoseFNames).AllocatorInstance.Data;
  pFVar9 = pFVar2;
  do {
    local_res10 = param_1;
    if (pFVar9 == pFVar2 + (this->PoseFNames).ArrayNum) {
LAB_1475cab95:
      if (((pFVar2 <= &local_res10) && (&local_res10 < pFVar2 + (this->PoseFNames).ArrayMax)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FPoseData *)(*pcVar3)();
        return pFVar7;
      }
      uVar5 = (this->PoseFNames).ArrayNum;
      piVar1 = &(this->PoseFNames).ArrayMax;
      if (uVar5 == *piVar1) {
        uVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,(ForAnyElementType *)this,piVar1);
      }
      (this->PoseFNames).ArrayNum = uVar5 + 1;
      *(FName *)((this->PoseFNames).AllocatorInstance.Data + (longlong)(int)uVar5 * 8) = local_res10
      ;
      uVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x20,8,1,&(this->Poses).AllocatorInstance,&(this->Poses).ArrayNum,
                         &(this->Poses).ArrayMax);
      pFVar8 = (this->Poses).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x20;
      *(undefined8 *)pFVar8 = 0;
      *(undefined8 *)(pFVar8 + 8) = 0;
      *(undefined8 *)(pFVar8 + 0x10) = 0;
      *(undefined8 *)(pFVar8 + 0x18) = 0;
      if ((uVar5 != uVar6) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("PoseIndex == Poses.AddZeroed(1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\PoseAsset.cpp"
                             ,0x8a,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FPoseData *)(*pcVar3)();
        return pFVar7;
      }
LAB_1475cacae:
      uVar6 = 0;
      if ((int)uVar5 < (this->Poses).ArrayNum) {
        uVar6 = ~uVar5 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FPoseData *)(*pcVar3)();
        return pFVar7;
      }
      return (FPoseData *)((this->Poses).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x20);
    }
    if (*pFVar9 == param_1) {
      uVar5 = (uint)((longlong)pFVar9 - (longlong)pFVar2 >> 3);
      if (uVar5 != 0xffffffff) goto LAB_1475cacae;
      goto LAB_1475cab95;
    }
    pFVar9 = pFVar9 + 1;
  } while( true );
}

// FindPoseData @ 1475cad20

FPoseData * __thiscall FPoseDataContainer::FindPoseData(FPoseDataContainer *this,FName param_1)

{
  FName *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FPoseData *pFVar5;
  uint uVar6;
  FName *pFVar7;
  
  pFVar1 = (FName *)(this->PoseFNames).AllocatorInstance.Data;
  pFVar7 = pFVar1;
  while( true ) {
    if (pFVar7 == pFVar1 + (this->PoseFNames).ArrayNum) {
      return (FPoseData *)0x0;
    }
    if (*pFVar7 == param_1) break;
    pFVar7 = pFVar7 + 1;
  }
  uVar6 = (uint)((longlong)pFVar7 - (longlong)pFVar1 >> 3);
  if (uVar6 == 0xffffffff) {
    return (FPoseData *)0x0;
  }
  uVar4 = 0;
  if ((int)uVar6 < (this->Poses).ArrayNum) {
    uVar4 = ~uVar6 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FPoseData *)(*pcVar2)();
    return pFVar5;
  }
  return (FPoseData *)((this->Poses).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x20);
}

// GetDefaultTransform @ 1475d4220

TTransform<double> * __thiscall
FPoseDataContainer::GetDefaultTransform
          (FPoseDataContainer *this,TTransform<double> *__return_storage_ptr__,FName *param_1,
          USkeleton *param_2,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  __m128d _Var9;
  __m128d _Var10;
  bool bVar11;
  TTuple<FName,int> *pTVar12;
  TTransform<double> *pTVar13;
  longlong lVar14;
  int *piVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  
  _Var9.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  if (param_2 == (USkeleton *)0x0) {
    *&(__return_storage_ptr__->Rotation).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    _Var10 = UE::Math::TTransform<double>::Identity.Translation.XY;
    *&(__return_storage_ptr__->Rotation).ZW.m128d_f64 = _Var9.m128d_f64;
    _Var9 = UE::Math::TTransform<double>::Identity.Translation.ZW;
    *&(__return_storage_ptr__->Translation).XY.m128d_f64 = _Var10.m128d_f64;
    _Var10 = UE::Math::TTransform<double>::Identity.Scale3D.XY;
    *&(__return_storage_ptr__->Translation).ZW.m128d_f64 = _Var9.m128d_f64;
    _Var9 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
    *&(__return_storage_ptr__->Scale3D).XY.m128d_f64 = _Var10.m128d_f64;
    *&(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = _Var9.m128d_f64;
    return __return_storage_ptr__;
  }
  if (*param_1 != (FName)0x0) {
    pTVar12 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                      *)&(param_2->ReferenceSkeleton).FinalNameToIndexMap,*param_1);
    piVar15 = (int *)&pTVar12->field_0x8;
    if (pTVar12 == (TTuple<FName,int> *)0x0) {
      piVar15 = (int *)0x0;
    }
    if (piVar15 != (int *)0x0) {
      iVar2 = *piVar15;
      if (-1 < iVar2) {
        if (iVar2 < param_3->ArrayNum) {
          if (iVar2 < 0) {
            bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar11) {
              pcVar4 = (code *)swi(3);
              pTVar13 = (TTransform<double> *)(*pcVar4)();
              return pTVar13;
            }
          }
          pFVar3 = (param_3->AllocatorInstance).Data;
          lVar14 = (longlong)iVar2 * 0x60;
          dVar5 = *(double *)(pFVar3 + lVar14 + 8);
          dVar6 = *(double *)(pFVar3 + lVar14 + 0x10);
          dVar7 = *(double *)(pFVar3 + lVar14 + 0x10 + 8);
          (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = *(double *)(pFVar3 + lVar14);
          (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar5;
          dVar5 = *(double *)(pFVar3 + lVar14 + 0x20);
          dVar8 = *(double *)(pFVar3 + lVar14 + 0x20 + 8);
          (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = dVar6;
          (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar7;
          dVar6 = *(double *)(pFVar3 + lVar14 + 0x30);
          dVar7 = *(double *)(pFVar3 + lVar14 + 0x30 + 8);
          (__return_storage_ptr__->Translation).XY.m128d_f64[0] = dVar5;
          (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar8;
          pFVar1 = pFVar3 + lVar14 + 0x40;
          uVar16 = *(undefined4 *)pFVar1;
          uVar17 = *(undefined4 *)(pFVar1 + 4);
          uVar18 = *(undefined4 *)(pFVar1 + 8);
          uVar19 = *(undefined4 *)(pFVar1 + 0xc);
          (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = dVar6;
          (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar7;
          pFVar3 = pFVar3 + lVar14 + 0x50;
          uVar20 = *(undefined4 *)pFVar3;
          uVar21 = *(undefined4 *)(pFVar3 + 4);
          uVar22 = *(undefined4 *)(pFVar3 + 8);
          uVar23 = *(undefined4 *)(pFVar3 + 0xc);
          goto LAB_1475d4328;
        }
      }
    }
  }
  _Var9.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(__return_storage_ptr__->Rotation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  _Var10 = UE::Math::TTransform<double>::Identity.Translation.XY;
  *&(__return_storage_ptr__->Rotation).ZW.m128d_f64 = _Var9.m128d_f64;
  _Var9 = UE::Math::TTransform<double>::Identity.Translation.ZW;
  *&(__return_storage_ptr__->Translation).XY.m128d_f64 = _Var10.m128d_f64;
  uVar16 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
  uVar17 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
  uVar18 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
  uVar19 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
  *&(__return_storage_ptr__->Translation).ZW.m128d_f64 = _Var9.m128d_f64;
  uVar20 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
  uVar21 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
  uVar22 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
  uVar23 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
LAB_1475d4328:
  *(undefined4 *)(__return_storage_ptr__->Scale3D).XY.m128d_f64 = uVar16;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).XY.m128d_f64 + 4) = uVar17;
  *(undefined4 *)((__return_storage_ptr__->Scale3D).XY.m128d_f64 + 1) = uVar18;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).XY.m128d_f64 + 0xc) = uVar19;
  *(undefined4 *)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = uVar20;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 4) = uVar21;
  *(undefined4 *)((__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 1) = uVar22;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 0xc) = uVar23;
  return __return_storage_ptr__;
}

// GetDefaultTransform @ 1475d43a0

TTransform<double> * __thiscall
FPoseDataContainer::GetDefaultTransform
          (FPoseDataContainer *this,TTransform<double> *__return_storage_ptr__,int param_1,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  __m128d _Var7;
  __m128d _Var8;
  bool bVar9;
  TTransform<double> *pTVar10;
  longlong lVar11;
  
  _Var7.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  if ((-1 < param_1) && (param_1 < param_2->ArrayNum)) {
    if (param_1 < 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar2 = (code *)swi(3);
        pTVar10 = (TTransform<double> *)(*pcVar2)();
        return pTVar10;
      }
    }
    pFVar1 = (param_2->AllocatorInstance).Data;
    lVar11 = (longlong)param_1 * 0x60;
    dVar3 = *(double *)(pFVar1 + lVar11 + 8);
    dVar4 = *(double *)(pFVar1 + lVar11 + 0x10);
    dVar5 = *(double *)(pFVar1 + lVar11 + 0x10 + 8);
    (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = *(double *)(pFVar1 + lVar11);
    (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar3;
    dVar3 = *(double *)(pFVar1 + lVar11 + 0x20);
    dVar6 = *(double *)(pFVar1 + lVar11 + 0x20 + 8);
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = dVar4;
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar5;
    dVar4 = *(double *)(pFVar1 + lVar11 + 0x30);
    dVar5 = *(double *)(pFVar1 + lVar11 + 0x30 + 8);
    (__return_storage_ptr__->Translation).XY.m128d_f64[0] = dVar3;
    (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar6;
    dVar3 = *(double *)(pFVar1 + lVar11 + 0x40);
    dVar6 = *(double *)(pFVar1 + lVar11 + 0x40 + 8);
    (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = dVar4;
    (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar5;
    dVar4 = *(double *)(pFVar1 + lVar11 + 0x50);
    dVar5 = *(double *)(pFVar1 + lVar11 + 0x50 + 8);
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = dVar3;
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar6;
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = dVar4;
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar5;
    return __return_storage_ptr__;
  }
  *&(__return_storage_ptr__->Rotation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  _Var8 = UE::Math::TTransform<double>::Identity.Translation.XY;
  *&(__return_storage_ptr__->Rotation).ZW.m128d_f64 = _Var7.m128d_f64;
  _Var7 = UE::Math::TTransform<double>::Identity.Translation.ZW;
  *&(__return_storage_ptr__->Translation).XY.m128d_f64 = _Var8.m128d_f64;
  _Var8 = UE::Math::TTransform<double>::Identity.Scale3D.XY;
  *&(__return_storage_ptr__->Translation).ZW.m128d_f64 = _Var7.m128d_f64;
  _Var7 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
  *&(__return_storage_ptr__->Scale3D).XY.m128d_f64 = _Var8.m128d_f64;
  *&(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = _Var7.m128d_f64;
  return __return_storage_ptr__;
}

// GetPoseCurve @ 1475d74f0

void __thiscall
FPoseDataContainer::GetPoseCurve(FPoseDataContainer *this,FPoseData *param_1,FBlendedCurve *param_2)

{
  int iVar1;
  FCurveFilter *pFVar2;
  <lambda_2> local_18;
  
  if (param_1 != (FPoseData *)0x0) {
    pFVar2 = *(FCurveFilter **)&param_2->field_0x18;
    local_18.CurveValues = &param_1->CurveData;
    iVar1 = (param_1->CurveData).ArrayNum;
    param_2->field_0x10 = 1;
    local_18.__this = this;
    if (((pFVar2 != (FCurveFilter *)0x0) && (pFVar2->FilterMode != None)) &&
       ((pFVar2->FilterMode != DisallowFiltered || ((int)pFVar2->_padding_ != 0)))) {
      UE::Anim::FCurveUtils::
      BuildSortedFiltered<_FPoseDataContainer::GetPoseCurve_::__l5::<lambda_1>,_FPoseDataContainer::GetPoseCurve_::__l5::<lambda_2>,TMemStackAllocator<0>,UE::Anim::FCurveElement>
                ((TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)param_2,iVar1,
                 (<lambda_1>)this,&local_18,pFVar2);
      return;
    }
    UE::Anim::FCurveUtils::
    BuildLinearUnfiltered<_FPoseDataContainer::GetPoseCurve_::__l5::<lambda_1>,_FPoseDataContainer::GetPoseCurve_::__l5::<lambda_2>,TMemStackAllocator<0>,UE::Anim::FCurveElement>
              ((TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)param_2,iVar1,
               (<lambda_1>)this,&local_18);
  }
  return;
}

// PostSerialize @ 1475ea250

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FPoseDataContainer::PostSerialize(FPoseDataContainer *this,FArchive *param_1)

{
  code *pcVar1;
  FIdentityFunctor FVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  TArray<FAnimCurveBase,TSizedDefaultAllocator<32>_> *local_res8;
  
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&this->SortedCurveIndices,(this->Curves).ArrayNum,Default);
  uVar5 = 0;
  if (0 < (this->SortedCurveIndices).ArrayNum) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->SortedCurveIndices).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      *(uint *)((this->SortedCurveIndices).AllocatorInstance.Data + lVar6) = uVar5;
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 4;
    } while ((int)uVar5 < (this->SortedCurveIndices).ArrayNum);
  }
  local_res8._0_1_ = SUB81(&this->Curves,0);
  FVar2 = local_res8._0_1_;
  local_res8 = &this->Curves;
  AlgoImpl::
  IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,_FPoseDataContainer::RebuildCurveIndexTable_::__l2::<lambda_1>_>_>
            ((int *)(this->SortedCurveIndices).AllocatorInstance.Data,
             (this->SortedCurveIndices).ArrayNum,FVar2,(<lambda_1> *)&local_res8);
  return;
}

// RebuildCurveIndexTable @ 1475ebe40

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FPoseDataContainer::RebuildCurveIndexTable(FPoseDataContainer *this)

{
  code *pcVar1;
  FIdentityFunctor FVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  TArray<FAnimCurveBase,TSizedDefaultAllocator<32>_> *local_res8;
  
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&this->SortedCurveIndices,(this->Curves).ArrayNum,Default);
  uVar5 = 0;
  if (0 < (this->SortedCurveIndices).ArrayNum) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->SortedCurveIndices).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      *(uint *)((this->SortedCurveIndices).AllocatorInstance.Data + lVar6) = uVar5;
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 4;
    } while ((int)uVar5 < (this->SortedCurveIndices).ArrayNum);
  }
  local_res8._0_1_ = SUB81(&this->Curves,0);
  FVar2 = local_res8._0_1_;
  local_res8 = &this->Curves;
  AlgoImpl::
  IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,_FPoseDataContainer::RebuildCurveIndexTable_::__l2::<lambda_1>_>_>
            ((int *)(this->SortedCurveIndices).AllocatorInstance.Data,
             (this->SortedCurveIndices).ArrayNum,FVar2,(<lambda_1> *)&local_res8);
  return;
}

// Reset @ 1475f6a50

void __thiscall FPoseDataContainer::Reset(FPoseDataContainer *this)

{
  int *piVar1;
  int iVar2;
  FPoseData *pFVar3;
  
  (this->PoseFNames).ArrayNum = 0;
  if ((this->PoseFNames).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,(ForAnyElementType *)this,0,&(this->PoseFNames).ArrayMax);
  }
  (this->SortedCurveIndices).ArrayNum = 0;
  if ((this->SortedCurveIndices).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->SortedCurveIndices).AllocatorInstance,0,
               &(this->SortedCurveIndices).ArrayMax);
  }
  piVar1 = &(this->Poses).ArrayMax;
  pFVar3 = (FPoseData *)(this->Poses).AllocatorInstance.Data;
  iVar2 = (this->Poses).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<FPoseData,int>(pFVar3,iVar2);
    (this->Poses).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,&(this->Poses).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FPoseData,int>(pFVar3,iVar2);
    (this->Poses).ArrayNum = 0;
  }
  (this->Tracks).ArrayNum = 0;
  if ((this->Tracks).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->Tracks).AllocatorInstance,0,&(this->Tracks).ArrayMax);
  }
  (this->TrackBoneIndices).ArrayNum = 0;
  if ((this->TrackBoneIndices).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->TrackBoneIndices).AllocatorInstance,0,
               &(this->TrackBoneIndices).ArrayMax);
  }
  (this->Curves).ArrayNum = 0;
  if ((this->Curves).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(this->Curves).AllocatorInstance,0,&(this->Curves).ArrayMax);
  }
  return;
}

// Serialize @ 1475f9830

bool __thiscall FPoseDataContainer::Serialize(FPoseDataContainer *this,FArchive *param_1)

{
  return false;
}

