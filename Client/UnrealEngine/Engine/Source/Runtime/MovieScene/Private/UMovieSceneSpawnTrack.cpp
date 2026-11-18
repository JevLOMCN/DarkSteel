// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 17

// StaticClass @ 1462725d0

UClass * __cdecl UMovieSceneSpawnTrack::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneSpawnTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneSpawnTrack",
               &Z_Registration_Info_UClass_UMovieSceneSpawnTrack.InnerSingleton,
               StaticRegisterNativesUMovieSceneSpawnTrack,0x138,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieSceneSpawnTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneSpawnTrack>,local_res8,
               UMovieSceneTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneSpawnTrack.InnerSingleton;
}

// UMovieSceneSpawnTrack @ 146299d30

UMovieSceneSpawnTrack * __thiscall
UMovieSceneSpawnTrack::UMovieSceneSpawnTrack(UMovieSceneSpawnTrack *this,FVTableHelper *param_1)

{
  UMovieSceneTrack::UMovieSceneTrack((UMovieSceneTrack *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  (this->Sections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Sections).ArrayNum = 0;
  (this->Sections).ArrayMax = 0;
  (this->ObjectGuid).A = 0;
  (this->ObjectGuid).B = 0;
  (this->ObjectGuid).C = 0;
  (this->ObjectGuid).D = 0;
  return this;
}

// UMovieSceneSpawnTrack @ 146299d80

UMovieSceneSpawnTrack * __thiscall
UMovieSceneSpawnTrack::UMovieSceneSpawnTrack
          (UMovieSceneSpawnTrack *this,FObjectInitializer *param_1)

{
  UMovieSceneTrack::UMovieSceneTrack((UMovieSceneTrack *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  (this->Sections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Sections).ArrayNum = 0;
  (this->Sections).ArrayMax = 0;
  (this->ObjectGuid).A = 0;
  (this->ObjectGuid).B = 0;
  (this->ObjectGuid).C = 0;
  (this->ObjectGuid).D = 0;
  return this;
}

// ~UMovieSceneSpawnTrack @ 14629bba0

void __thiscall UMovieSceneSpawnTrack::~UMovieSceneSpawnTrack(UMovieSceneSpawnTrack *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  pFVar1 = (this->Sections).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMovieSceneTrack::~UMovieSceneTrack((UMovieSceneTrack *)this);
  return;
}

// AddSection @ 1462a29f0

void __thiscall
UMovieSceneSpawnTrack::AddSection(UMovieSceneSpawnTrack *this,UMovieSceneSection *param_1)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UMovieSceneSection *local_18 [2];
  
  plVar2 = &this->_padding_;
  local_18[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMovieSceneSection *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  if (((UMovieSceneSection **)*plVar2 <= local_18) &&
     (local_18 < (UMovieSceneSection **)*plVar2 + *(int *)((longlong)&this->_padding_ + 4))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (int)this->_padding_;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)plVar2,piVar1);
  }
  *(int *)&this->_padding_ = iVar5 + 1;
  *(UMovieSceneSection **)(*plVar2 + (longlong)iVar5 * 8) = local_18[0];
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_18[0] != (UMovieSceneSection *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_18[0]);
  }
  return;
}

// CreateNewSection @ 1462ab320

UMovieSceneSection * __thiscall UMovieSceneSpawnTrack::CreateNewSection(UMovieSceneSpawnTrack *this)

{
  UMovieSceneSpawnSection *pUVar1;
  
  pUVar1 = NewObject<UMovieSceneSpawnSection>
                     ((UObject *)this,(FName)0x0,RF_Transactional,(UObject *)0x0,false,
                      (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
  return (UMovieSceneSection *)pUVar1;
}

// GetAllSections @ 1462ae8c0

TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> * __thiscall
UMovieSceneSpawnTrack::GetAllSections(UMovieSceneSpawnTrack *this)

{
  return (TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> *)&this->Sections;
}

// GetPrivateStaticClass @ 1462af8e0

UClass * __cdecl UMovieSceneSpawnTrack::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneSpawnTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneSpawnTrack",
               &Z_Registration_Info_UClass_UMovieSceneSpawnTrack.InnerSingleton,
               StaticRegisterNativesUMovieSceneSpawnTrack,0x138,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieSceneSpawnTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneSpawnTrack>,local_res8,
               UMovieSceneTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneSpawnTrack.InnerSingleton;
}

// HasSection @ 1462b1540

bool __thiscall
UMovieSceneSpawnTrack::HasSection(UMovieSceneSpawnTrack *this,UMovieSceneSection *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar2 = (this->Sections).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)(this->Sections).ArrayNum * 8;
  for (; pFVar2 != pFVar1; pFVar2 = pFVar2 + 8) {
    if (*(UMovieSceneSection **)pFVar2 == param_1) goto LAB_1462b1567;
  }
  pFVar2 = (FScriptContainerElement *)0x0;
LAB_1462b1567:
  return pFVar2 != (FScriptContainerElement *)0x0;
}

// IsEmpty @ 1462b5480

bool __thiscall UMovieSceneSpawnTrack::IsEmpty(UMovieSceneSpawnTrack *this)

{
  return (this->Sections).ArrayNum == 0;
}

// PopulateSpawnedRangeMask @ 1462b6ea0

void __thiscall
UMovieSceneSpawnTrack::PopulateSpawnedRangeMask
          (UMovieSceneSpawnTrack *this,TRange<FFrameNumber> *param_1,
          TArray<TRange<FFrameNumber>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  TRangeBound<FFrameNumber> *pTVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  ForElementType<TRange<FFrameNumber>_> FVar5;
  FObjectPtr_u_0 *this_00;
  code *pcVar6;
  TRangeBound<FFrameNumber> TVar7;
  FFrameNumber FVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  UClass *pUVar12;
  FFrameNumber *pFVar13;
  ForElementType<TRange<FFrameNumber>_> FVar14;
  ulonglong uVar15;
  TEnumAsByte<ERangeBoundTypes::Type> TVar16;
  TRangeBound<FFrameNumber> TVar17;
  uint uVar18;
  uint uVar19;
  UObject *pUVar20;
  ulonglong uVar21;
  uint uVar22;
  uint uVar23;
  longlong lVar24;
  char cVar25;
  TRange<FFrameNumber> local_c8;
  longlong local_b8;
  uint local_b0;
  undefined4 local_ac;
  TRangeBound<FFrameNumber> local_a8;
  TRangeBound<FFrameNumber> TStack_a0;
  TRangeBound<FFrameNumber> local_98;
  uint uStack_90;
  undefined1 uStack_8c;
  undefined2 uStack_8b;
  undefined1 uStack_89;
  undefined1 local_88;
  FFrameNumber local_84;
  undefined1 local_80;
  FFrameNumber local_7c;
  longlong local_78;
  TRangeBound<FFrameNumber> local_70;
  undefined4 local_68;
  int iStack_64;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  int iStack_54;
  TRangeBound<FFrameNumber> local_50;
  TRange<FFrameNumber> local_48;
  
  iVar10 = (this->Sections).ArrayNum;
  if (1 < iVar10) {
    FVar5 = (param_2->AllocatorInstance).SecondaryData;
    FVar14 = (ForElementType<TRange<FFrameNumber>_>)param_2;
    if (FVar5 != (ForElementType<TRange<FFrameNumber>_>)0x0) {
      FVar14 = FVar5;
    }
    if ((ulonglong)FVar14 <= param_1) {
      FVar14 = (ForElementType<TRange<FFrameNumber>_>)param_2;
      if (FVar5 != (ForElementType<TRange<FFrameNumber>_>)0x0) {
        FVar14 = FVar5;
      }
      if ((param_1 < (TRange<FFrameNumber> *)((longlong)param_2->ArrayMax * 0x10 + (longlong)FVar14)
          ) && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar10 = param_2->ArrayNum;
    if (iVar10 == param_2->ArrayMax) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TRange<FFrameNumber>_>_>
                         (0x410,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar10 + 1;
    FVar5 = (param_2->AllocatorInstance).SecondaryData;
    TVar17 = param_1->UpperBound;
    if (FVar5 != (ForElementType<TRange<FFrameNumber>_>)0x0) {
      param_2 = (TArray<TRange<FFrameNumber>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                 *)FVar5;
    }
    pTVar1 = (TRangeBound<FFrameNumber> *)((longlong)param_2 + (longlong)iVar10 * 0x10);
    *pTVar1 = param_1->LowerBound;
    pTVar1[1] = TVar17;
    return;
  }
  if (iVar10 != 0) {
    pUVar20 = (UObject *)0x0;
    if ((iVar10 < 1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((*(byte *)(*(longlong *)(this->Sections).AllocatorInstance.Data + 0xd8) & 1) != 0) {
      if (((this->Sections).ArrayNum < 1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      this_00 = (FObjectPtr_u_0 *)(this->Sections).AllocatorInstance.Data;
      if (this_00->Handle != (UObject *)0x0) {
        pUVar12 = UMovieSceneSpawnSection::StaticClass();
        bVar9 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar12);
        if (bVar9) {
          pUVar20 = this_00->Handle;
        }
      }
      uVar3 = local_60;
      local_48.LowerBound.Type.Value = pUVar20[4].field_0x10;
      local_48.LowerBound._1_3_ = *(undefined3 *)&pUVar20[4].field_0x11;
      local_48.LowerBound.Value.Value = *(int *)&pUVar20[4].field_0x14;
      local_50.Type.Value = pUVar20[4].field_0x18;
      local_50._1_3_ = *(undefined3 *)&pUVar20[4].field_0x19;
      local_50.Value.Value = *(int *)&pUVar20[4].field_0x1c;
      if (local_48.LowerBound.Type.Value == '\0') {
        iStack_64 = local_48.LowerBound.Value.Value + 1;
        local_68 = CONCAT31(local_68._1_3_,1);
        local_48.LowerBound.Value.Value = iStack_64;
        local_48.LowerBound._0_4_ = local_68;
      }
      local_48.UpperBound = local_50;
      if (local_50.Type.Value == '\x01') {
        iStack_5c = local_50.Value.Value + 1;
        local_60 = local_60 & 0xffffff00;
        local_48.UpperBound =
             (TRangeBound<FFrameNumber>)(CONCAT44(iStack_5c,uVar3) & 0xffffffffffffff00);
      }
      TRange<FFrameNumber>::Intersection(&local_c8,param_1,&local_48);
      FVar8.Value = local_c8.UpperBound.Value.Value;
      if ((local_c8.LowerBound.Type.Value != '\x02') && (local_c8.UpperBound.Type.Value != '\x02'))
      {
        if ((local_c8.LowerBound.Type.Value == '\x02') &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Type != ERangeBoundTypes::Open",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                               ,99,L""), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (FVar8.Value < local_c8.LowerBound.Value.Value) {
          return;
        }
        pFVar13 = TRangeBound<FFrameNumber>::GetValue(&local_c8.UpperBound);
        iVar10 = pFVar13->Value;
        pFVar13 = TRangeBound<FFrameNumber>::GetValue(&local_c8.LowerBound);
        if (pFVar13->Value == iVar10) {
          if (local_c8.LowerBound.Type.Value == '\0') {
            return;
          }
          if (local_c8.UpperBound.Type.Value == '\0') {
            return;
          }
        }
      }
      uVar3 = *(uint *)(pUVar20 + 10);
      local_b8 = *(longlong *)&pUVar20[9].field_0x20;
      if (((int)uVar3 < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar10 = *(int *)&pUVar20[10].field_0x18;
      local_78 = *(longlong *)&pUVar20[10].field_0x10;
      if ((iVar10 < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVar8.Value = local_c8.LowerBound.Value.Value;
      if (uVar3 == 0) {
        if (pUVar20[10].field_0x9 == '\0') {
          return;
        }
        if (pUVar20[10].field_0x8 == '\0') {
          return;
        }
        FVar5 = (param_2->AllocatorInstance).SecondaryData;
        FVar14 = (ForElementType<TRange<FFrameNumber>_>)param_2;
        if (FVar5 != (ForElementType<TRange<FFrameNumber>_>)0x0) {
          FVar14 = FVar5;
        }
        if ((ulonglong)FVar14 <= &local_c8) {
          FVar14 = (ForElementType<TRange<FFrameNumber>_>)param_2;
          if (FVar5 != (ForElementType<TRange<FFrameNumber>_>)0x0) {
            FVar14 = FVar5;
          }
          if ((&local_c8 <
               (TRange<FFrameNumber> *)((longlong)param_2->ArrayMax * 0x10 + (longlong)FVar14)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        iVar10 = param_2->ArrayNum;
        local_a8._0_4_ = local_c8.LowerBound._0_4_;
        local_a8.Value.Value = local_c8.LowerBound.Value.Value;
        TStack_a0._0_4_ = local_c8.UpperBound._0_4_;
        TStack_a0.Value.Value = local_c8.UpperBound.Value.Value;
        if (iVar10 == param_2->ArrayMax) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TRange<FFrameNumber>_>_>
                             (0x410,&param_2->AllocatorInstance,&param_2->ArrayMax);
          local_a8._0_4_ = local_c8.LowerBound._0_4_;
          local_a8.Value.Value = local_c8.LowerBound.Value.Value;
          TStack_a0._0_4_ = local_c8.UpperBound._0_4_;
          TStack_a0.Value.Value = local_c8.UpperBound.Value.Value;
        }
      }
      else {
        TVar17.Value.Value = local_c8.LowerBound.Value.Value;
        TVar17.Type.Value = local_c8.LowerBound.Type.Value;
        TVar17._1_3_ = local_c8.LowerBound._1_3_;
        TVar16.Value = local_c8.LowerBound.Type.Value;
        local_70 = TVar17;
        if (TVar16.Value == '\x02') {
          uVar18 = 0;
        }
        else {
          lVar24 = 0;
          if (TVar16.Value == '\0') {
            lVar24 = 4;
          }
          iVar11 = *(int *)((longlong)
                            &`struct_FFrameNumber___cdecl_UE::MovieScene::DiscreteInclusiveLower(TRangeBound<FFrameNumber>_const&___ptr64)'
                             ::__l2::Offsets + lVar24);
          if ((TVar16.Value == '\x02') &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Type != ERangeBoundTypes::Open",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                 ,99,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar19 = 0;
          uVar18 = 0;
          uVar23 = uVar3;
          if (0 < (int)uVar3) {
            do {
              uVar22 = uVar23 >> 1;
              uVar18 = uVar19;
              if (*(int *)(local_b8 + (longlong)(int)(uVar22 + uVar19) * 4) <= iVar11 + FVar8.Value)
              {
                uVar18 = uVar22 + uVar19 + (uVar23 & 1);
              }
              uVar23 = uVar22;
              uVar19 = uVar18;
            } while (uVar22 != 0);
          }
        }
        uVar21 = 0;
        uVar23 = uVar3 - 1;
        if ((int)uVar18 < (int)(uVar3 - 1)) {
          uVar23 = uVar18;
        }
        if (TVar16.Value != '\x02') {
          uVar15 = uVar21;
          if (TVar16.Value == '\0') {
            uVar15 = 4;
          }
          uVar19 = 0;
          uVar18 = uVar3;
          if (0 < (int)uVar3) {
            do {
              uVar22 = uVar18 >> 1;
              iVar11 = uVar22 + (int)uVar21;
              if (*(int *)(local_b8 + (longlong)iVar11 * 4) <=
                  local_70.Value.Value +
                  *(int *)((longlong)
                           &`struct_FFrameNumber___cdecl_UE::MovieScene::DiscreteInclusiveLower(TRangeBound<FFrameNumber>_const&___ptr64)'
                            ::__l2::Offsets + uVar15)) {
                uVar21 = (ulonglong)(iVar11 + (uVar18 & 1));
              }
              uVar19 = (uint)uVar21;
              uVar18 = uVar22;
            } while (uVar22 != 0);
          }
          uVar21 = (ulonglong)(uVar19 - 1);
          if ((int)(uVar19 - 1) < 0) {
            uVar21 = 0;
          }
        }
        uVar18 = (uint)uVar21;
        uVar19 = 0;
        if ((int)uVar18 < iVar10) {
          uVar19 = ~uVar18 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        cVar25 = *(char *)((int)uVar18 + local_78);
        if ((int)uVar23 < (int)uVar3) {
          lVar24 = (longlong)(int)uVar23;
          do {
            if (((int)uVar23 < 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            local_88 = 1;
            local_84.Value = *(int *)(local_b8 + lVar24 * 4);
            if (local_c8.LowerBound.Type.Value == '\x02') {
              TVar16.Value = '\x02';
              pFVar13 = &local_c8.LowerBound.Value;
LAB_1462b74a2:
              if (TVar16.Value != local_c8.LowerBound.Type.Value) break;
            }
            else {
              if (local_84.Value <= local_c8.LowerBound.Value.Value) {
                if ((local_84.Value < local_c8.LowerBound.Value.Value) ||
                   (pFVar13 = &local_c8.LowerBound.Value, local_c8.LowerBound.Type.Value != '\x01'))
                {
                  pFVar13 = &local_84;
                }
                TVar16.Value = '\x01';
                goto LAB_1462b74a2;
              }
              pFVar13 = &local_c8.LowerBound.Value;
              TVar16.Value = local_c8.LowerBound.Type.Value;
            }
            if ((TVar16.Value != '\x02') && (pFVar13->Value != local_c8.LowerBound.Value.Value))
            break;
            local_80 = 1;
            local_7c.Value = local_84.Value;
            if (local_c8.UpperBound.Type.Value == '\x02') {
              TVar16.Value = '\x02';
              pFVar13 = &local_c8.UpperBound.Value;
LAB_1462b74f1:
              if (TVar16.Value != local_c8.UpperBound.Type.Value) break;
            }
            else {
              if (local_c8.UpperBound.Value.Value <= local_84.Value) {
                if ((local_c8.UpperBound.Value.Value < local_84.Value) ||
                   (pFVar13 = &local_c8.UpperBound.Value, local_c8.UpperBound.Type.Value != '\x01'))
                {
                  pFVar13 = &local_7c;
                }
                TVar16.Value = '\x01';
                goto LAB_1462b74f1;
              }
              pFVar13 = &local_c8.UpperBound.Value;
              TVar16.Value = local_c8.UpperBound.Type.Value;
            }
            if ((TVar16.Value != '\x02') && (pFVar13->Value != local_c8.UpperBound.Value.Value))
            break;
            uVar19 = (uint)((int)uVar23 < iVar10) & ~uVar23 >> 0x1f;
            if ((uVar19 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            if (cVar25 != *(char *)(local_78 + lVar24)) {
              if (cVar25 != '\0') {
                if (((int)uVar23 < 0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                       ,0x14f,
                                       L"Array index out of bounds: %lld from an array of size %lld"
                                      ), bVar9)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                FVar5 = (param_2->AllocatorInstance).SecondaryData;
                local_b0 = local_b0 & 0xffffff00;
                uVar4 = *(undefined4 *)(local_b8 + lVar24 * 4);
                local_ac = uVar4;
                uVar4 = local_ac;
                uStack_90 = local_b0;
                local_ac._0_1_ = (undefined1)uVar4;
                uStack_8c = (undefined1)local_ac;
                local_ac._1_2_ = (undefined2)((uint)uVar4 >> 8);
                uStack_8b = local_ac._1_2_;
                local_ac._3_1_ = (undefined1)((uint)uVar4 >> 0x18);
                uStack_89 = local_ac._3_1_;
                FVar14 = (ForElementType<TRange<FFrameNumber>_>)param_2;
                if (FVar5 != (ForElementType<TRange<FFrameNumber>_>)0x0) {
                  FVar14 = FVar5;
                }
                local_98 = TVar17;
                local_ac = uVar4;
                if ((ulonglong)FVar14 <= &local_98) {
                  FVar14 = (ForElementType<TRange<FFrameNumber>_>)param_2;
                  if (FVar5 != (ForElementType<TRange<FFrameNumber>_>)0x0) {
                    FVar14 = FVar5;
                  }
                  if ((&local_98 <
                       (TRangeBound<FFrameNumber> *)
                       ((longlong)param_2->ArrayMax * 0x10 + (longlong)FVar14)) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar9)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                }
                iVar11 = param_2->ArrayNum;
                if (iVar11 == param_2->ArrayMax) {
                  iVar11 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TRange<FFrameNumber>_>_>
                                     (0x410,&param_2->AllocatorInstance,&param_2->ArrayMax);
                }
                TVar7.Value.Value._0_1_ = uStack_8c;
                TVar7._0_4_ = uStack_90;
                TVar7.Value.Value._1_2_ = uStack_8b;
                TVar7.Value.Value._3_1_ = uStack_89;
                param_2->ArrayNum = iVar11 + 1;
                FVar5 = (param_2->AllocatorInstance).SecondaryData;
                FVar14 = (ForElementType<TRange<FFrameNumber>_>)param_2;
                if (FVar5 != (ForElementType<TRange<FFrameNumber>_>)0x0) {
                  FVar14 = FVar5;
                }
                pTVar1 = (TRangeBound<FFrameNumber> *)((longlong)FVar14 + (longlong)iVar11 * 0x10);
                *pTVar1 = local_98;
                pTVar1[1] = TVar7;
              }
              if ((uVar19 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 bVar9)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              cVar25 = *(char *)(local_78 + lVar24);
              if (cVar25 != '\0') {
                if (((int)uVar23 < 0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                       ,0x14f,
                                       L"Array index out of bounds: %lld from an array of size %lld"
                                      ), bVar9)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                local_58 = CONCAT31(local_58._1_3_,1);
                iStack_54 = *(int *)(local_b8 + lVar24 * 4);
                TVar17.Value.Value = iStack_54;
                TVar17._0_4_ = local_58;
                local_70 = TVar17;
              }
            }
            uVar23 = uVar23 + 1;
            lVar24 = lVar24 + 1;
          } while ((int)uVar23 < (int)uVar3);
        }
        TStack_a0.Value.Value = local_c8.UpperBound.Value.Value;
        TStack_a0.Type.Value = local_c8.UpperBound.Type.Value;
        TStack_a0._1_3_ = local_c8.UpperBound._1_3_;
        local_a8 = TVar17;
        if ((TVar17.Type.Value.Value != '\x02') && (local_c8.UpperBound.Type.Value != '\x02')) {
          if (local_c8.UpperBound.Value.Value < local_70.Value.Value) {
            return;
          }
          pFVar13 = TRangeBound<FFrameNumber>::GetValue(&TStack_a0);
          iVar10 = pFVar13->Value;
          pFVar13 = TRangeBound<FFrameNumber>::GetValue(&local_a8);
          if (pFVar13->Value == iVar10) {
            if (local_a8.Type.Value == '\0') {
              return;
            }
            if (TStack_a0.Type.Value == '\0') {
              return;
            }
          }
        }
        if (cVar25 == '\0') {
          return;
        }
        FVar5 = (param_2->AllocatorInstance).SecondaryData;
        FVar14 = (ForElementType<TRange<FFrameNumber>_>)param_2;
        if (FVar5 != (ForElementType<TRange<FFrameNumber>_>)0x0) {
          FVar14 = FVar5;
        }
        if ((ulonglong)FVar14 <= &local_a8) {
          FVar14 = (ForElementType<TRange<FFrameNumber>_>)param_2;
          if (FVar5 != (ForElementType<TRange<FFrameNumber>_>)0x0) {
            FVar14 = FVar5;
          }
          if ((&local_a8 <
               (TRangeBound<FFrameNumber> *)((longlong)param_2->ArrayMax * 0x10 + (longlong)FVar14))
             && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        iVar10 = param_2->ArrayNum;
        if (iVar10 == param_2->ArrayMax) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TRange<FFrameNumber>_>_>
                             (0x410,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
      }
      param_2->ArrayNum = iVar10 + 1;
      FVar5 = (param_2->AllocatorInstance).SecondaryData;
      if (FVar5 != (ForElementType<TRange<FFrameNumber>_>)0x0) {
        param_2 = (TArray<TRange<FFrameNumber>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                   *)FVar5;
      }
      puVar2 = (undefined4 *)((longlong)param_2 + (longlong)iVar10 * 0x10);
      *puVar2 = local_a8._0_4_;
      puVar2[1] = local_a8.Value.Value;
      puVar2[2] = TStack_a0._0_4_;
      puVar2[3] = TStack_a0.Value.Value;
    }
  }
  return;
}

// PostLoad @ 1462b78a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UMovieSceneSpawnTrack::PostLoad(UMovieSceneSpawnTrack *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  uint uVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  undefined1 auStackY_258 [32];
  ForAnyElementType local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  FArchiveState local_208;
  undefined8 local_178;
  ForAnyElementType *local_170;
  undefined8 local_168;
  FArchiveState local_160;
  undefined8 local_d0;
  ForAnyElementType *local_c8;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_258;
  uVar9 = 0;
  local_228.Data = (FScriptContainerElement *)0x0;
  local_220 = 0;
  uVar11 = uVar9;
  if (0 < (this->Sections).ArrayNum) {
    do {
      uVar8 = (uint)uVar9;
      uVar5 = 0;
      if ((int)uVar8 < (this->Sections).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pUVar7 = *(UObject **)((this->Sections).AllocatorInstance.Data + uVar11);
      if ((pUVar7 != (UObject *)0x0) &&
         (pUVar6 = Z_Construct_UClass_UMovieSceneBoolSection_NoRegister(),
         *(UClass **)&pUVar7->field_0x10 == pUVar6)) {
        UObject::ConditionalPostLoad(pUVar7);
        lVar3 = local_220;
        uVar5 = local_220._4_4_;
        local_220 = (ulonglong)local_220._4_4_ << 0x20;
        if ((lVar3 < 0) && (uVar5 != 0)) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,0,&local_228,0,(int *)((longlong)&local_220 + 4));
        }
        local_218 = 0;
        local_208._padding_ = 0;
        local_208.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
        local_208.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
        local_208.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
        local_208.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
        local_208._40_8_ = 0;
        local_208.ArSerializingDefaults = 0;
        local_208.ArPortFlags = 0;
        local_208.ArMaxSerializeSize = 0;
        local_208.ArUEVer.FileVersionUE4 = 0;
        local_208.ArUEVer.FileVersionUE5 = 0;
        local_208.ArLicenseeUEVer = 0;
        local_208.ArEngineVer.Major = 0;
        local_208.ArEngineVer.Minor = 0;
        local_208.ArEngineVer.Patch = 0;
        local_208.ArEngineVer._6_2_ = 0;
        local_208.ArEngineVer.Changelist = 0;
        local_208.CustomVersionContainer = (FCustomVersionContainer *)0x0;
        local_208.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
        local_208.SavePackageData = (FArchiveSavePackageData *)0x0;
        local_208.SerializedProperty = (FProperty *)0x0;
        local_208.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
        local_208.bCustomVersionsAreReset = false;
        local_208._129_7_ = 0;
        local_208.NextProxy = (FArchiveState *)0x0;
        FArchiveState::FArchiveState(&local_208);
        local_178 = 0;
        local_208._padding_ =
             (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
        local_170 = &local_228;
        local_168 = 0;
        FArchiveState::SetIsSaving(&local_208,true);
        (**(code **)(local_208._padding_ + 0x108))(&local_208,0);
        local_208.ArIgnoreClassRef = '\0';
        local_208.ArNoDelta = '\0';
        local_208.ArIgnoreArchetypeRef = '\0';
        local_208._padding_ = (longlong)&___7FObjectWriter__6B_;
        (**(code **)(*(longlong *)pUVar7 + 200))(pUVar7,&local_208);
        FArchive::~FArchive((FArchive *)&local_208);
        local_210 = 0;
        FObjectInitializer::AssertIfInConstructor
                  ((UObject *)this,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
        pUVar6 = UMovieSceneSpawnSection::StaticClass();
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_b8,pUVar6);
        local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
        local_b8._56_8_ = (UPackage *)0x0;
        local_b8._16_4_ = 0;
        local_b8._20_4_ = 0;
        local_b8._24_4_ = RF_Transactional;
        local_b8._40_8_ = (UObject *)0x0;
        local_b8[0x20] = false;
        local_b8._8_8_ = this;
        pUVar7 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
        if (local_b8._64_8_ != 0) {
          plVar10 = (longlong *)(local_b8 + 0x50);
          if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
            plVar10 = (longlong *)local_b8._104_8_;
          }
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
        local_160._padding_ = 0;
        local_160.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
        local_160.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
        local_160.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
        local_160.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
        local_160._40_8_ = 0;
        local_160.ArSerializingDefaults = 0;
        local_160.ArPortFlags = 0;
        local_160.ArMaxSerializeSize = 0;
        local_160.ArUEVer.FileVersionUE4 = 0;
        local_160.ArUEVer.FileVersionUE5 = 0;
        local_160.ArLicenseeUEVer = 0;
        local_160.ArEngineVer.Major = 0;
        local_160.ArEngineVer.Minor = 0;
        local_160.ArEngineVer.Patch = 0;
        local_160.ArEngineVer._6_2_ = 0;
        local_160.ArEngineVer.Changelist = 0;
        local_160.CustomVersionContainer = (FCustomVersionContainer *)0x0;
        local_160.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
        local_160.SavePackageData = (FArchiveSavePackageData *)0x0;
        local_160.SerializedProperty = (FProperty *)0x0;
        local_160.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
        local_160.bCustomVersionsAreReset = false;
        local_160._129_7_ = 0;
        local_160.NextProxy = (FArchiveState *)0x0;
        FArchiveState::FArchiveState(&local_160);
        local_d0 = 0;
        local_160._padding_ = (longlong)&___7FObjectReader__6B_;
        local_c8 = &local_228;
        FArchiveState::SetIsLoading(&local_160,true);
        (**(code **)(local_160._padding_ + 0x108))(&local_160,0);
        local_160.ArIgnoreClassRef = '\0';
        local_160.ArIgnoreArchetypeRef = '\0';
        (**(code **)(*(longlong *)pUVar7 + 200))(pUVar7,&local_160);
        FArchive::~FArchive((FArchive *)&local_160);
        uVar5 = 0;
        if ((int)uVar8 < (this->Sections).ArrayNum) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar1 = (this->Sections).AllocatorInstance.Data;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar7);
        }
        *(UObject **)(pFVar1 + uVar11) = pUVar7;
      }
      uVar9 = (ulonglong)(uVar8 + 1);
      uVar11 = uVar11 + 8;
    } while ((int)(uVar8 + 1) < (this->Sections).ArrayNum);
  }
  UMovieSceneTrack::PostLoad((UMovieSceneTrack *)this);
  if (local_228.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_228.Data);
  }
  return;
}

// RemoveAllAnimationData @ 1462b8a10

void __thiscall UMovieSceneSpawnTrack::RemoveAllAnimationData(UMovieSceneSpawnTrack *this)

{
  int *piVar1;
  
  piVar1 = &(this->Sections).ArrayMax;
  (this->Sections).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->Sections).AllocatorInstance,0,piVar1);
  }
  return;
}

// RemoveSection @ 1462b8de0

void __thiscall
UMovieSceneSpawnTrack::RemoveSection(UMovieSceneSpawnTrack *this,UMovieSceneSection *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  iVar1 = (int)this->_padding_;
  if (iVar1 != 0) {
    iVar6 = 0;
    plVar2 = (longlong *)this->_padding_;
    bVar7 = (UMovieSceneSection *)*plVar2 != param_1;
    lVar3 = 0;
    iVar4 = 0;
    do {
      iVar5 = iVar4;
      do {
        lVar3 = lVar3 + 1;
        iVar5 = iVar5 + 1;
        if (iVar1 <= lVar3) break;
      } while (bVar7 == ((UMovieSceneSection *)plVar2[lVar3] != param_1));
      if (bVar7 != false) {
        if (iVar6 != iVar4) {
          memmove(plVar2 + iVar6,plVar2 + iVar4,(longlong)(iVar5 - iVar4) << 3);
        }
        iVar6 = iVar6 + (iVar5 - iVar4);
      }
      bVar7 = (bool)(bVar7 ^ 1);
      iVar4 = iVar5;
    } while (lVar3 < iVar1);
    *(int *)&this->_padding_ = iVar6;
  }
  return;
}

// RemoveSectionAt @ 1462b9040

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UMovieSceneSpawnTrack::RemoveSectionAt(UMovieSceneSpawnTrack *this,int param_1)

{
  TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_>::RemoveAt
            ((TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_> *)&this->_padding_,
             param_1,Default);
  return;
}

// StaticRegisterNativesUMovieSceneSpawnTrack @ 1462bde00

void __cdecl UMovieSceneSpawnTrack::StaticRegisterNativesUMovieSceneSpawnTrack(void)

{
  return;
}

// SupportsType @ 1462be0a0

bool __thiscall
UMovieSceneSpawnTrack::SupportsType
          (UMovieSceneSpawnTrack *this,TSubclassOf<UMovieSceneSection> param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar2 != 0) {
    pUVar4 = Z_Construct_UClass_UMovieSceneSection_NoRegister();
    if (pUVar4 != (UClass *)0x0) {
      iVar1 = (int)pUVar4->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        pUVar4 = *(UClass **)param_1.Class.field0_0x0;
        goto LAB_1462be0ea;
      }
    }
  }
  pUVar4 = (UClass *)0x0;
LAB_1462be0ea:
  pUVar5 = UMovieSceneSpawnSection::StaticClass();
  return pUVar4 == pUVar5;
}

