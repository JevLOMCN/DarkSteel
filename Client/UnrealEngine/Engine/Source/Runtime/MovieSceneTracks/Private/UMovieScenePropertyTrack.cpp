// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 26

// StaticClass @ 1468763f0

UClass * __cdecl UMovieScenePropertyTrack::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieScenePropertyTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieScenePropertyTrack",
               &Z_Registration_Info_UClass_UMovieScenePropertyTrack.InnerSingleton,
               StaticRegisterNativesUMovieScenePropertyTrack,0x148,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieScenePropertyTrack>,
               InternalVTableHelperCtorCaller<UMovieScenePropertyTrack>,local_res8,
               UMovieSceneNameableTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieScenePropertyTrack.InnerSingleton;
}

// UMovieScenePropertyTrack @ 14689ecb0

UMovieScenePropertyTrack * __thiscall
UMovieScenePropertyTrack::UMovieScenePropertyTrack
          (UMovieScenePropertyTrack *this,FVTableHelper *param_1)

{
  UMovieSceneNameableTrack::UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  (this->SectionToKey).field0_0x0.DebugPtr = (UMovieSceneSection *)0x0;
  (this->PropertyBinding).PropertyName.ComparisonIndex = 0;
  (this->PropertyBinding).PropertyName.Number = 0;
  (this->PropertyBinding).PropertyPath.ComparisonIndex = 0;
  (this->PropertyBinding).PropertyPath.Number = 0;
  (this->PropertyBinding).bCanUseClassLookup = false;
  (this->Sections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Sections).ArrayNum = 0;
  (this->Sections).ArrayMax = 0;
  return this;
}

// UMovieScenePropertyTrack @ 14689ed10

UMovieScenePropertyTrack * __thiscall
UMovieScenePropertyTrack::UMovieScenePropertyTrack
          (UMovieScenePropertyTrack *this,FObjectInitializer *param_1)

{
  UMovieSceneNameableTrack::UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  *(uint *)&this->_padding_ = (uint)this->_padding_ | 0x11;
  (this->SectionToKey).field0_0x0.DebugPtr = (UMovieSceneSection *)0x0;
  (this->PropertyBinding).PropertyName.ComparisonIndex = 0;
  (this->PropertyBinding).PropertyName.Number = 0;
  (this->PropertyBinding).PropertyPath.ComparisonIndex = 0;
  (this->PropertyBinding).PropertyPath.Number = 0;
  (this->PropertyBinding).bCanUseClassLookup = false;
  (this->Sections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Sections).ArrayNum = 0;
  (this->Sections).ArrayMax = 0;
  return this;
}

// ~UMovieScenePropertyTrack @ 1468a0ed0

void __thiscall UMovieScenePropertyTrack::~UMovieScenePropertyTrack(UMovieScenePropertyTrack *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  pFVar1 = (this->Sections).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMovieSceneNameableTrack::~UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this);
  return;
}

// AddSection @ 1468a9440

void __thiscall
UMovieScenePropertyTrack::AddSection(UMovieScenePropertyTrack *this,UMovieSceneSection *param_1)

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
  if (1 < (int)this->_padding_) {
    (**(code **)(this[-1]._padding_ + 0x330))(&this[-1]._padding_,param_1);
  }
  return;
}

// FindAllSections @ 1468b3b60

TArray<UMovieSceneSection_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> * __thiscall
UMovieScenePropertyTrack::FindAllSections
          (UMovieScenePropertyTrack *this,
          TArray<UMovieSceneSection_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *__return_storage_ptr__,FFrameNumber param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  ForElementType<UMovieSceneSection_*> FVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  ForElementType<UMovieSceneSection_*> FVar8;
  TArray<UMovieSceneSection_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *pTVar9;
  char cVar10;
  int *piVar11;
  FScriptContainerElement *pFVar12;
  FIdentityFunctor local_res8 [8];
  UMovieSceneSection *local_58;
  undefined1 local_50;
  int local_4c;
  undefined1 local_48;
  int local_44;
  undefined4 local_40;
  int iStack_3c;
  undefined4 uStack_38;
  int aiStack_34 [3];
  
  (__return_storage_ptr__->AllocatorInstance).SecondaryData =
       (ForElementType<UMovieSceneSection_*>)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 4;
  pFVar12 = (this->Sections).AllocatorInstance.Data;
  iVar2 = (this->Sections).ArrayNum;
  pFVar1 = pFVar12 + (longlong)iVar2 * 8;
  do {
    if ((this->Sections).ArrayNum != iVar2) {
      local_res8[0] = (FIdentityFunctor)0x0;
      `TCheckedPointerIterator<TObjectPtr<UMovieSceneSection>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar12 == pFVar1) {
      FVar3 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
      FVar8 = (ForElementType<UMovieSceneSection_*>)__return_storage_ptr__;
      if (FVar3 != (ForElementType<UMovieSceneSection_*>)0x0) {
        FVar8 = FVar3;
      }
      AlgoImpl::
      IntroSortInternal<UMovieSceneSection_*,int,FIdentityFunctor,bool_(__cdecl*)(UMovieSceneSection_const_*,UMovieSceneSection_const_*)>
                ((UMovieSceneSection **)FVar8,__return_storage_ptr__->ArrayNum,local_res8[0],
                 MovieSceneHelpers::SortOverlappingSections);
      return __return_storage_ptr__;
    }
    local_58 = *(UMovieSceneSection **)pFVar12;
    bVar5 = MovieSceneHelpers::IsSectionKeyable(local_58);
    if (bVar5) {
      local_50 = 1;
      local_4c = param_1.Value;
      local_40 = *(undefined4 *)&(local_58->SectionRange).Value.LowerBound;
      iStack_3c = (local_58->SectionRange).Value.LowerBound.Value.Value;
      uStack_38 = *(undefined4 *)&(local_58->SectionRange).Value.UpperBound;
      aiStack_34[0] = (local_58->SectionRange).Value.UpperBound.Value.Value;
      cVar6 = (char)local_40;
      if (cVar6 == '\x02') {
        piVar11 = &iStack_3c;
        cVar10 = cVar6;
LAB_1468b3c34:
        bVar5 = cVar10 != cVar6;
        cVar6 = cVar10;
        if (bVar5) goto LAB_1468b3d71;
      }
      else {
        if (param_1.Value <= iStack_3c) {
          if ((param_1.Value < iStack_3c) || (piVar11 = &iStack_3c, cVar6 != '\x01')) {
            piVar11 = &local_4c;
          }
          cVar10 = '\x01';
          goto LAB_1468b3c34;
        }
        piVar11 = &iStack_3c;
      }
      if ((cVar6 == '\x02') || (*piVar11 == iStack_3c)) {
        local_48 = 1;
        local_44 = param_1.Value;
        cVar6 = (char)uStack_38;
        if (cVar6 == '\x02') {
          piVar11 = aiStack_34;
          cVar10 = cVar6;
LAB_1468b3c95:
          bVar5 = cVar10 != cVar6;
          cVar6 = cVar10;
          if (bVar5) goto LAB_1468b3d71;
        }
        else {
          if (aiStack_34[0] <= param_1.Value) {
            if ((aiStack_34[0] < param_1.Value) || (piVar11 = aiStack_34, cVar6 != '\x01')) {
              piVar11 = &local_44;
            }
            cVar10 = '\x01';
            goto LAB_1468b3c95;
          }
          piVar11 = aiStack_34;
        }
        if ((cVar6 == '\x02') || (*piVar11 == aiStack_34[0])) {
          FVar3 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
          FVar8 = (ForElementType<UMovieSceneSection_*>)__return_storage_ptr__;
          if (FVar3 != (ForElementType<UMovieSceneSection_*>)0x0) {
            FVar8 = FVar3;
          }
          if ((ulonglong)FVar8 <= &local_58) {
            FVar8 = (ForElementType<UMovieSceneSection_*>)__return_storage_ptr__;
            if (FVar3 != (ForElementType<UMovieSceneSection_*>)0x0) {
              FVar8 = FVar3;
            }
            if ((&local_58 <
                 (UMovieSceneSection **)
                 ((longlong)FVar8 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar5)) {
              pcVar4 = (code *)swi(3);
              pTVar9 = (TArray<UMovieSceneSection_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                        *)(*pcVar4)();
              return pTVar9;
            }
          }
          iVar7 = __return_storage_ptr__->ArrayNum;
          if (iVar7 == __return_storage_ptr__->ArrayMax) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UMovieSceneSection_*>_>
                              (0x808,&__return_storage_ptr__->AllocatorInstance,
                               &__return_storage_ptr__->ArrayMax);
          }
          __return_storage_ptr__->ArrayNum = iVar7 + 1;
          FVar3 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
          FVar8 = (ForElementType<UMovieSceneSection_*>)__return_storage_ptr__;
          if (FVar3 != (ForElementType<UMovieSceneSection_*>)0x0) {
            FVar8 = FVar3;
          }
          *(UMovieSceneSection **)((longlong)FVar8 + (longlong)iVar7 * 8) = local_58;
        }
      }
    }
LAB_1468b3d71:
    pFVar12 = pFVar12 + 8;
  } while( true );
}

// FindOrAddSection @ 1468b4120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

UMovieSceneSection * __thiscall
UMovieScenePropertyTrack::FindOrAddSection
          (UMovieScenePropertyTrack *this,FFrameNumber param_1,bool *param_2)

{
  ForElementType<UMovieSceneSection_*> FVar1;
  code *pcVar2;
  bool bVar3;
  UMovieSceneSection *pUVar4;
  FSectionParameter this_00;
  ForElementType<UMovieSceneSection_*> FVar5;
  undefined2 uStackX_11;
  undefined1 uStackX_13;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  longlong local_80;
  undefined1 local_78 [4];
  undefined4 local_74;
  undefined1 local_70;
  undefined2 local_6f;
  undefined1 local_6d;
  undefined4 local_6c;
  undefined1 local_68;
  undefined2 local_67;
  undefined1 local_65;
  undefined4 local_64;
  undefined4 local_5c;
  TArray<UMovieSceneSection_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> local_50;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_a8;
  *param_2 = false;
  FindAllSections(this,&local_50,param_1);
  if (local_50.ArrayNum == 0) {
    if (local_50.AllocatorInstance.SecondaryData != (ForElementType<UMovieSceneSection_*>)0x0) {
      FMemory::Free((void *)local_50.AllocatorInstance.SecondaryData);
    }
  }
  else {
    pUVar4 = (this->SectionToKey).field0_0x0.DebugPtr;
    if (pUVar4 != (UMovieSceneSection *)0x0) {
      FVar5 = (ForElementType<UMovieSceneSection_*>)&local_50;
      if (local_50.AllocatorInstance.SecondaryData != (ForElementType<UMovieSceneSection_*>)0x0) {
        FVar5 = local_50.AllocatorInstance.SecondaryData;
      }
      FVar1 = (ForElementType<UMovieSceneSection_*>)
              ((longlong)FVar5 + (longlong)local_50.ArrayNum * 8);
      for (; FVar5 != FVar1; FVar5 = (ForElementType<UMovieSceneSection_*>)((longlong)FVar5 + 8)) {
        if (pUVar4 == *(UMovieSceneSection **)FVar5) {
          if (local_50.AllocatorInstance.SecondaryData == (ForElementType<UMovieSceneSection_*>)0x0)
          {
            return pUVar4;
          }
          FMemory::Free((void *)local_50.AllocatorInstance.SecondaryData);
          return pUVar4;
        }
      }
    }
    if (local_50.ArrayNum < 1) {
      local_80 = (longlong)local_50.ArrayNum;
      local_88 = 0;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pUVar4 = (UMovieSceneSection *)(*pcVar2)();
        return pUVar4;
      }
    }
    FVar5 = (ForElementType<UMovieSceneSection_*>)&local_50;
    if (local_50.AllocatorInstance.SecondaryData != (ForElementType<UMovieSceneSection_*>)0x0) {
      FVar5 = local_50.AllocatorInstance.SecondaryData;
    }
    pUVar4 = *(UMovieSceneSection **)FVar5;
    if (local_50.AllocatorInstance.SecondaryData != (ForElementType<UMovieSceneSection_*>)0x0) {
      FMemory::Free((void *)local_50.AllocatorInstance.SecondaryData);
    }
    if (pUVar4 != (UMovieSceneSection *)0x0) {
      return pUVar4;
    }
  }
  this_00.Section = (UMovieSceneSection *)(**(code **)(this->_padding_ + 0x358))(this);
  if (((this_00.Section)->_padding_ & 8) == 0) {
    `UMovieScenePropertyTrack::FindOrAddSection'::__l2::<lambda_1>::operator()(local_78);
  }
  UObjectBase::AtomicallySetFlags((UObjectBase *)this_00.Section,RF_Transactional);
  uStackX_13 = (undefined1)((uint)param_1.Value >> 0x18);
  uStackX_11 = (undefined2)((uint)param_1.Value >> 8);
  local_6d = uStackX_13;
  local_65 = uStackX_13;
  local_64 = CONCAT31(local_64._1_3_,1);
  local_74 = local_64;
  local_5c = CONCAT31(local_5c._1_3_,1);
  local_6c = local_5c;
  local_70 = (undefined1)param_1.Value;
  local_6f = uStackX_11;
  local_67 = uStackX_11;
  local_68 = local_70;
  (**(code **)((this_00.Section)->_padding_ + 0x2c8))(this_00.Section,&local_74);
  UMovieSceneTrack::AddSection((UMovieSceneTrack *)this,this_00);
  *param_2 = true;
  return this_00.Section;
}

// FindOrExtendSection @ 1468b4300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

UMovieSceneSection * __thiscall
UMovieScenePropertyTrack::FindOrExtendSection
          (UMovieScenePropertyTrack *this,FFrameNumber param_1,float *param_2)

{
  ForElementType<UMovieSceneSection_*> FVar1;
  TRangeBound<FFrameNumber> TVar2;
  longlong lVar3;
  undefined8 uVar4;
  code *pcVar5;
  char cVar6;
  bool bVar7;
  UMovieSceneSection *pUVar8;
  TEnumAsByte<ERangeBoundTypes::Type> TVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  ForElementType<UMovieSceneSection_*> FVar13;
  FFrameNumber FVar14;
  int iVar15;
  uint uVar16;
  UMovieSceneSection *pUVar17;
  UMovieSceneSection *pUVar18;
  bool bVar19;
  float fVar20;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  TRangeBound<FFrameNumber> local_a8;
  undefined4 local_a0;
  int iStack_9c;
  undefined4 local_98;
  int iStack_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  int iStack_7c;
  undefined4 local_78;
  int iStack_74;
  TArray<UMovieSceneSection_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> local_70;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_e8;
  *param_2 = 1.0;
  FindAllSections(this,&local_70,param_1);
  pUVar8 = (this->SectionToKey).field0_0x0.DebugPtr;
  if ((pUVar8 == (UMovieSceneSection *)0x0) ||
     (bVar7 = MovieSceneHelpers::IsSectionKeyable(pUVar8), !bVar7)) {
    if (local_70.ArrayNum < 1) {
      pUVar8 = (UMovieSceneSection *)0x0;
      local_b8 = '\0';
      bVar7 = false;
      pUVar18 = (UMovieSceneSection *)0xffffffff;
      if (0 < (this->Sections).ArrayNum) {
        local_b0 = 0;
        local_b0._0_4_ = 0;
        pUVar17 = pUVar8;
        iVar15 = (int)local_b0;
        do {
          lVar3 = local_b0;
          iVar11 = (this->Sections).ArrayNum;
          uVar16 = (uint)pUVar17;
          uVar10 = 0;
          if ((int)uVar16 < iVar11) {
            uVar10 = ~uVar16 >> 0x1f;
          }
          if (uVar10 == 0) {
            local_c8 = (longlong)(int)uVar16;
            local_c0 = (longlong)iVar11;
            bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar19) {
              pcVar5 = (code *)swi(3);
              pUVar8 = (UMovieSceneSection *)(*pcVar5)();
              return pUVar8;
            }
          }
          lVar3 = *(longlong *)((this->Sections).AllocatorInstance.Data + lVar3);
          uVar4 = *(undefined8 *)(lVar3 + 0xb0);
          if ((char)uVar4 != '\x02') {
            uVar10 = (uint)uVar4 & 0xff;
            local_90 = uVar4;
            if ((char)uVar4 == '\x01') {
              if ((uVar10 == 2) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Type != ERangeBoundTypes::Open",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                      ,99,L""), bVar19)) {
                pcVar5 = (code *)swi(3);
                pUVar8 = (UMovieSceneSection *)(*pcVar5)();
                return pUVar8;
              }
              iVar11 = local_90._4_4_;
            }
            else {
              if ((uVar10 == 2) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Type != ERangeBoundTypes::Open",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                      ,99,L""), bVar19)) {
                pcVar5 = (code *)swi(3);
                pUVar8 = (UMovieSceneSection *)(*pcVar5)();
                return pUVar8;
              }
              iVar11 = local_90._4_4_ + 1;
            }
            iVar12 = -(param_1.Value - iVar11);
            if (iVar12 < 0) {
              iVar12 = param_1.Value - iVar11;
            }
            if ((!bVar7) || (iVar12 < iVar15)) {
              bVar7 = true;
              local_b8 = '\x01';
              pUVar18 = pUVar17;
              iVar15 = iVar12;
            }
          }
          uVar4 = *(undefined8 *)(lVar3 + 0xb8);
          if ((char)uVar4 != '\x02') {
            uVar10 = (uint)uVar4 & 0xff;
            local_88 = uVar4;
            if ((char)uVar4 == '\x01') {
              if ((uVar10 == 2) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Type != ERangeBoundTypes::Open",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                      ,99,L""), bVar19)) {
                pcVar5 = (code *)swi(3);
                pUVar8 = (UMovieSceneSection *)(*pcVar5)();
                return pUVar8;
              }
              iVar11 = local_88._4_4_ + 1;
            }
            else {
              if ((uVar10 == 2) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Type != ERangeBoundTypes::Open",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                      ,99,L""), bVar19)) {
                pcVar5 = (code *)swi(3);
                pUVar8 = (UMovieSceneSection *)(*pcVar5)();
                return pUVar8;
              }
              iVar11 = local_88._4_4_;
            }
            iVar12 = -(param_1.Value - iVar11);
            if (iVar12 < 0) {
              iVar12 = param_1.Value - iVar11;
            }
            if (bVar7) {
              if (iVar12 < iVar15) {
                local_b8 = '\0';
                bVar7 = true;
                pUVar18 = pUVar17;
                iVar15 = iVar12;
              }
            }
            else {
              local_b8 = '\0';
              bVar7 = true;
              pUVar18 = pUVar17;
              iVar15 = iVar12;
            }
          }
          cVar6 = local_b8;
          local_b0 = local_b0 + 8;
          pUVar17 = (UMovieSceneSection *)(ulonglong)(uVar16 + 1);
        } while ((int)(uVar16 + 1) < (this->Sections).ArrayNum);
        uVar10 = (uint)pUVar18;
        if (uVar10 != 0xffffffff) {
          iVar15 = (this->Sections).ArrayNum;
          uVar16 = 0;
          if ((int)uVar10 < iVar15) {
            uVar16 = ~uVar10 >> 0x1f;
          }
          if (uVar16 == 0) {
            local_c8 = (longlong)(int)uVar10;
            local_c0 = (longlong)iVar15;
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar7) {
              pcVar5 = (code *)swi(3);
              pUVar8 = (UMovieSceneSection *)(*pcVar5)();
              return pUVar8;
            }
          }
          pUVar8 = *(UMovieSceneSection **)
                    ((this->Sections).AllocatorInstance.Data + (longlong)(int)uVar10 * 8);
          if (cVar6 == '\0') {
            local_78 = CONCAT31(local_78._1_3_,1);
            iStack_74 = param_1.Value;
            (**(code **)(pUVar8->_padding_ + 0x2d8))(pUVar8,CONCAT44(param_1.Value,local_78));
          }
          else {
            local_80 = CONCAT31(local_80._1_3_,1);
            iStack_7c = param_1.Value;
            (**(code **)(pUVar8->_padding_ + 0x2d0))(pUVar8,CONCAT44(param_1.Value,local_80));
          }
        }
      }
    }
    else {
      FVar13 = (ForElementType<UMovieSceneSection_*>)&local_70;
      if (local_70.AllocatorInstance.SecondaryData != (ForElementType<UMovieSceneSection_*>)0x0) {
        FVar13 = local_70.AllocatorInstance.SecondaryData;
      }
      pUVar8 = *(UMovieSceneSection **)FVar13;
    }
    goto LAB_1468b47e8;
  }
  FVar13 = (ForElementType<UMovieSceneSection_*>)&local_70;
  if (local_70.AllocatorInstance.SecondaryData != (ForElementType<UMovieSceneSection_*>)0x0) {
    FVar13 = local_70.AllocatorInstance.SecondaryData;
  }
  FVar1 = (ForElementType<UMovieSceneSection_*>)((longlong)FVar13 + (longlong)local_70.ArrayNum * 8)
  ;
  if (FVar13 != FVar1) {
    pUVar8 = (this->SectionToKey).field0_0x0.DebugPtr;
    do {
      if (pUVar8 == (UMovieSceneSection *)0x0) {
        bVar7 = *(UMovieSceneSection **)FVar13 == (UMovieSceneSection *)0x0;
      }
      else {
        bVar7 = pUVar8 == *(UMovieSceneSection **)FVar13;
      }
      if (bVar7) {
        bVar19 = SBORROW4(local_70.ArrayNum,1);
        iVar15 = local_70.ArrayNum + -1;
        bVar7 = local_70.ArrayNum == 1;
        goto LAB_1468b44e1;
      }
      FVar13 = (ForElementType<UMovieSceneSection_*>)((longlong)FVar13 + 8);
    } while (FVar13 != FVar1);
  }
  TVar2 = (((this->SectionToKey).field0_0x0.DebugPtr)->SectionRange).Value.UpperBound;
  if (TVar2.Type.Value.Value == '\x02') {
LAB_1468b44bb:
    pUVar8 = (this->SectionToKey).field0_0x0.DebugPtr;
    local_98 = CONCAT31(local_98._1_3_,1);
    iStack_94 = param_1.Value;
    (**(code **)(pUVar8->_padding_ + 0x2d0))(pUVar8,CONCAT44(param_1.Value,local_98));
  }
  else {
    uVar10 = TVar2._0_4_ & 0xff;
    local_a8 = TVar2;
    if (TVar2.Type.Value.Value == '\x01') {
      if ((uVar10 == 2) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pUVar8 = (UMovieSceneSection *)(*pcVar5)();
        return pUVar8;
      }
      FVar14.Value = local_a8.Value.Value + 1;
    }
    else {
      if ((uVar10 == 2) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pUVar8 = (UMovieSceneSection *)(*pcVar5)();
        return pUVar8;
      }
      FVar14.Value = local_a8.Value.Value;
    }
    if (param_1.Value < FVar14.Value) goto LAB_1468b44bb;
    TVar2 = (((this->SectionToKey).field0_0x0.DebugPtr)->SectionRange).Value.UpperBound;
    TVar9 = TVar2.Type.Value;
    FVar14 = TVar2.Value.Value;
    if (TVar9.Value == '\x01') {
      FVar14.Value = FVar14.Value + 1;
    }
    else if ((TVar9.Value == '\x02') &&
            (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                               ("Type != ERangeBoundTypes::Open",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                ,99,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pUVar8 = (UMovieSceneSection *)(*pcVar5)();
      return pUVar8;
    }
    if (FVar14.Value != param_1.Value) {
      pUVar8 = (this->SectionToKey).field0_0x0.DebugPtr;
      local_a0 = CONCAT31(local_a0._1_3_,1);
      iStack_9c = param_1.Value;
      (**(code **)(pUVar8->_padding_ + 0x2d8))(pUVar8,CONCAT44(param_1.Value,local_a0));
    }
  }
  bVar19 = false;
  bVar7 = local_70.ArrayNum == 0;
  iVar15 = local_70.ArrayNum;
LAB_1468b44e1:
  if (!bVar7 && bVar19 == iVar15 < 0) {
    fVar20 = MovieSceneHelpers::CalculateWeightForBlending
                       ((this->SectionToKey).field0_0x0.DebugPtr,param_1);
    *param_2 = fVar20;
  }
  pUVar8 = (this->SectionToKey).field0_0x0.DebugPtr;
LAB_1468b47e8:
  if (local_70.AllocatorInstance.SecondaryData != (ForElementType<UMovieSceneSection_*>)0x0) {
    FMemory::Free((void *)local_70.AllocatorInstance.SecondaryData);
  }
  return pUVar8;
}

// FindSection @ 1468b48f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

UMovieSceneSection * __thiscall
UMovieScenePropertyTrack::FindSection(UMovieScenePropertyTrack *this,FFrameNumber param_1)

{
  ForElementType<UMovieSceneSection_*> FVar1;
  code *pcVar2;
  bool bVar3;
  UMovieSceneSection *pUVar4;
  ForElementType<UMovieSceneSection_*> FVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_50;
  TArray<UMovieSceneSection_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> local_48;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  FindAllSections(this,&local_48,param_1);
  if (local_48.ArrayNum == 0) {
    pUVar4 = (UMovieSceneSection *)0x0;
  }
  else {
    pUVar4 = (this->SectionToKey).field0_0x0.DebugPtr;
    if (pUVar4 != (UMovieSceneSection *)0x0) {
      FVar5 = (ForElementType<UMovieSceneSection_*>)&local_48;
      if (local_48.AllocatorInstance.SecondaryData != (ForElementType<UMovieSceneSection_*>)0x0) {
        FVar5 = local_48.AllocatorInstance.SecondaryData;
      }
      FVar1 = (ForElementType<UMovieSceneSection_*>)
              ((longlong)FVar5 + (longlong)local_48.ArrayNum * 8);
      for (; FVar5 != FVar1; FVar5 = (ForElementType<UMovieSceneSection_*>)((longlong)FVar5 + 8)) {
        if (pUVar4 == *(UMovieSceneSection **)FVar5) goto LAB_1468b49b0;
      }
    }
    if (local_48.ArrayNum < 1) {
      local_50 = (longlong)local_48.ArrayNum;
      local_58 = 0;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pUVar4 = (UMovieSceneSection *)(*pcVar2)();
        return pUVar4;
      }
    }
    FVar5 = (ForElementType<UMovieSceneSection_*>)&local_48;
    if (local_48.AllocatorInstance.SecondaryData != (ForElementType<UMovieSceneSection_*>)0x0) {
      FVar5 = local_48.AllocatorInstance.SecondaryData;
    }
    pUVar4 = *(UMovieSceneSection **)FVar5;
  }
LAB_1468b49b0:
  if (local_48.AllocatorInstance.SecondaryData != (ForElementType<UMovieSceneSection_*>)0x0) {
    FMemory::Free((void *)local_48.AllocatorInstance.SecondaryData);
  }
  return pUVar4;
}

// GetAllSections @ 1468b57a0

TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> * __thiscall
UMovieScenePropertyTrack::GetAllSections(UMovieScenePropertyTrack *this)

{
  return (TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> *)&this->Sections;
}

// GetPrivateStaticClass @ 1468b81b0

UClass * __cdecl UMovieScenePropertyTrack::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieScenePropertyTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieScenePropertyTrack",
               &Z_Registration_Info_UClass_UMovieScenePropertyTrack.InnerSingleton,
               StaticRegisterNativesUMovieScenePropertyTrack,0x148,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieScenePropertyTrack>,
               InternalVTableHelperCtorCaller<UMovieScenePropertyTrack>,local_res8,
               UMovieSceneNameableTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieScenePropertyTrack.InnerSingleton;
}

// GetSectionToKey @ 1468b9840

UMovieSceneSection * __thiscall
UMovieScenePropertyTrack::GetSectionToKey(UMovieScenePropertyTrack *this)

{
  return (this->SectionToKey).field0_0x0.DebugPtr;
}

// GetTrackName @ 1468b9aa0

FName __thiscall UMovieScenePropertyTrack::GetTrackName(UMovieScenePropertyTrack *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = (this->PropertyBinding).PropertyPath;
  return in_RDX;
}

// HasSection @ 1468baa90

bool __thiscall
UMovieScenePropertyTrack::HasSection(UMovieScenePropertyTrack *this,UMovieSceneSection *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  
  pFVar2 = (this->Sections).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)(this->Sections).ArrayNum * 8;
  while( true ) {
    if (pFVar2 == pFVar1) {
      return false;
    }
    if (*(UMovieSceneSection **)pFVar2 == (UMovieSceneSection *)0x0) {
      bVar3 = param_1 == (UMovieSceneSection *)0x0;
    }
    else {
      bVar3 = *(UMovieSceneSection **)pFVar2 == param_1;
    }
    if (bVar3) break;
    pFVar2 = pFVar2 + 8;
  }
  return true;
}

// InitializeFromProperty @ 1468bc2d0

void __thiscall
UMovieScenePropertyTrack::InitializeFromProperty
          (UMovieScenePropertyTrack *this,FProperty *param_1,FPropertyDefinition *param_2)

{
  return;
}

// IsEmpty @ 1468bc8b0

bool __thiscall UMovieScenePropertyTrack::IsEmpty(UMovieScenePropertyTrack *this)

{
  return (this->Sections).ArrayNum == 0;
}

// PostLoad @ 1468c5b90

void __thiscall UMovieScenePropertyTrack::PostLoad(UMovieScenePropertyTrack *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  FFrameNumber *pFVar6;
  longlong lVar7;
  uint uVar8;
  FSectionIndexParameter FVar9;
  TRangeBound<FFrameNumber> TStack_28;
  TRangeBound<FFrameNumber> TStack_20;
  FGuid FStack_18;
  
  UObject::PostLoad((UObject *)this);
  FStack_18 = FMovieSceneEvaluationCustomVersion::GUID;
  iVar3 = UObjectBaseUtility::GetLinkerCustomVersion((UObjectBaseUtility *)this,&FStack_18);
  if (iVar3 < 1) {
    uVar8 = (uint)this->_padding_;
    *(uint *)&this->_padding_ = (uVar8 >> 3 ^ uVar8) & 2 ^ uVar8;
  }
  FVar9.SectionIndex = 0;
  lVar4 = (**(code **)(this->_padding_ + 0x360))(this);
  if (0 < *(int *)(lVar4 + 8)) {
    lVar4 = 0;
    do {
      plVar5 = (longlong *)(**(code **)(this->_padding_ + 0x360))();
      uVar8 = 0;
      if (FVar9.SectionIndex < (int)plVar5[1]) {
        uVar8 = (uint)~FVar9.SectionIndex >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      lVar7 = *(longlong *)(lVar4 + *plVar5);
      if (lVar7 == 0) {
        UMovieSceneTrack::RemoveSectionAt((UMovieSceneTrack *)this,FVar9);
      }
      else {
        TStack_28._0_4_ = *(undefined4 *)(lVar7 + 0xb0);
        TStack_28.Value.Value = *(int *)(lVar7 + 0xb4);
        TStack_20._0_4_ = *(undefined4 *)(lVar7 + 0xb8);
        iVar3 = *(int *)(lVar7 + 0xbc);
        TStack_20.Value.Value = iVar3;
        if ((TStack_28.Type.Value == '\x02') || (TStack_20.Type.Value == '\x02')) {
LAB_146228b7c:
          FVar9.SectionIndex = FVar9.SectionIndex + 1;
          lVar4 = lVar4 + 8;
        }
        else {
          if ((TStack_28.Type.Value == '\x02') &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("Type != ERangeBoundTypes::Open",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                 ,99,L""), bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          if (TStack_28.Value.Value <= iVar3) {
            pFVar6 = TRangeBound<FFrameNumber>::GetValue(&TStack_20);
            iVar3 = pFVar6->Value;
            pFVar6 = TRangeBound<FFrameNumber>::GetValue(&TStack_28);
            if ((pFVar6->Value != iVar3) ||
               ((TStack_28.Type.Value != '\0' && (TStack_20.Type.Value != '\0'))))
            goto LAB_146228b7c;
          }
          UMovieSceneTrack::RemoveSectionAt((UMovieSceneTrack *)this,FVar9);
        }
      }
      lVar7 = (**(code **)(this->_padding_ + 0x360))(this);
    } while (FVar9.SectionIndex < *(int *)(lVar7 + 8));
  }
  return;
}

// RemoveAllAnimationData @ 1468c9030

void __thiscall UMovieScenePropertyTrack::RemoveAllAnimationData(UMovieScenePropertyTrack *this)

{
  int *piVar1;
  
  piVar1 = &(this->Sections).ArrayMax;
  (this->Sections).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->Sections).AllocatorInstance,0,piVar1);
    (this->SectionToKey).field0_0x0.DebugPtr = (UMovieSceneSection *)0x0;
    return;
  }
  (this->SectionToKey).field0_0x0.DebugPtr = (UMovieSceneSection *)0x0;
  return;
}

// RemoveSection @ 1468ca020

void __thiscall
UMovieScenePropertyTrack::RemoveSection(UMovieScenePropertyTrack *this,UMovieSceneSection *param_1)

{
  longlong *plVar1;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  TObjectPtr<UMovieSceneSection>_u_0 local_res8;
  
  local_res8.DebugPtr = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMovieSceneSection *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_>::Remove
            ((TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_> *)&this->_padding_,
             (TObjectPtr<UMovieSceneSection> *)&local_res8.ObjectPtr);
  if ((UMovieSceneSection *)this->_padding_ == (UMovieSceneSection *)0x0) {
    bVar4 = param_1 == (UMovieSceneSection *)0x0;
  }
  else {
    bVar4 = (UMovieSceneSection *)this->_padding_ == param_1;
  }
  if (bVar4) {
    if (0 < (int)this->_padding_) {
      if ((int)this->_padding_ < 1) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      plVar1 = (longlong *)this->_padding_;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar2 = (UObject *)*plVar1, pUVar2 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      this->_padding_ = *plVar1;
      return;
    }
    this->_padding_ = 0;
  }
  return;
}

// RemoveSectionAt @ 1468ca8a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UMovieScenePropertyTrack::RemoveSectionAt(UMovieScenePropertyTrack *this,int param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UObject *pUVar6;
  
  pUVar6 = (UObject *)0x0;
  uVar5 = 0;
  if (param_1 < (int)this->_padding_) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar1 = this->_padding_;
  lVar2 = *(longlong *)(this->_padding_ + (longlong)param_1 * 8);
  TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_>::RemoveAt
            ((TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_> *)&this->_padding_,
             param_1,Default);
  if (lVar1 != lVar2) {
    return;
  }
  if (0 < (int)this->_padding_) {
    if (((int)this->_padding_ < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pUVar6 = *(UObject **)this->_padding_;
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_1468ca9b1;
    if (pUVar6 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar6);
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
LAB_1468ca9b1:
  this->_padding_ = (longlong)pUVar6;
  return;
}

// Serialize @ 1468cdb60

void __thiscall
UMovieScenePropertyTrack::Serialize(UMovieScenePropertyTrack *this,FArchive *param_1)

{
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FMovieSceneEvaluationCustomVersion::GUID);
  UMovieSceneDecorationContainerObject::Serialize
            ((UMovieSceneDecorationContainerObject *)this,param_1);
  return;
}

// Serialize @ 1468cdba0

void __thiscall
UMovieScenePropertyTrack::Serialize(UMovieScenePropertyTrack *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FMovieSceneEvaluationCustomVersion::GUID);
  UMovieSceneDecorationContainerObject::Serialize
            ((UMovieSceneDecorationContainerObject *)this,pFVar1);
  return;
}

// SetPropertyNameAndPath @ 1468cec30

void __thiscall
UMovieScenePropertyTrack::SetPropertyNameAndPath
          (UMovieScenePropertyTrack *this,FName param_1,FString *param_2)

{
  code *pcVar1;
  FName FVar2;
  undefined3 uVar3;
  bool bVar4;
  FMovieScenePropertyBinding *pFVar5;
  FMovieScenePropertyBinding local_28;
  
  if ((param_1 == (FName)0x0) || ((param_2->Data).ArrayNum < 2)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InPropertyName != NAME_None) && !InPropertyPath.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Tracks\\MovieScenePropertyTrack.cpp"
                       ,0x1d,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar5 = FMovieScenePropertyBinding::FMovieScenePropertyBinding(&local_28,param_1,param_2);
  FVar2 = pFVar5->PropertyPath;
  (this->PropertyBinding).PropertyName = pFVar5->PropertyName;
  (this->PropertyBinding).PropertyPath = FVar2;
  uVar3 = *(undefined3 *)&pFVar5->field_0x11;
  (this->PropertyBinding).bCanUseClassLookup = pFVar5->bCanUseClassLookup;
  *(undefined3 *)&(this->PropertyBinding).field_0x11 = uVar3;
  return;
}

// SetSectionToKey @ 1468ced70

void __thiscall
UMovieScenePropertyTrack::SetSectionToKey
          (UMovieScenePropertyTrack *this,UMovieSceneSection *param_1)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMovieSceneSection *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    (this->SectionToKey).field0_0x0.DebugPtr = param_1;
    return;
  }
  (this->SectionToKey).field0_0x0.DebugPtr = param_1;
  return;
}

// StaticRegisterNativesUMovieScenePropertyTrack @ 1468d01e0

void __cdecl UMovieScenePropertyTrack::StaticRegisterNativesUMovieScenePropertyTrack(void)

{
  return;
}

// operator() @ 1504f55d0

bool __thiscall
`UMovieScenePropertyTrack::FindOrAddSection'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<1684416934323421535>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1684416934323421535>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

