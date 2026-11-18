// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 25

// StaticClass @ 146875f30

UClass * __cdecl UMovieSceneCameraCutTrack::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneCameraCutTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneCameraCutTrack",
               &Z_Registration_Info_UClass_UMovieSceneCameraCutTrack.InnerSingleton,
               StaticRegisterNativesUMovieSceneCameraCutTrack,0x138,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UMovieSceneCameraCutTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneCameraCutTrack>,local_res8,
               UMovieSceneNameableTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneCameraCutTrack.InnerSingleton;
}

// UMovieSceneCameraCutTrack @ 14689d040

UMovieSceneCameraCutTrack * __thiscall
UMovieSceneCameraCutTrack::UMovieSceneCameraCutTrack
          (UMovieSceneCameraCutTrack *this,FObjectInitializer *param_1)

{
  UMovieSceneNameableTrack::UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this,param_1);
  *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffff3;
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->bCanBlend = false;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  this->bAutoArrangeSections = true;
  (this->Sections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Sections).ArrayNum = 0;
  (this->Sections).ArrayMax = 0;
  FMovieSceneBlendTypeField::Add((FMovieSceneBlendTypeField *)&this->_padding_,Absolute);
  return this;
}

// UMovieSceneCameraCutTrack @ 14689d0b0

UMovieSceneCameraCutTrack * __thiscall
UMovieSceneCameraCutTrack::UMovieSceneCameraCutTrack
          (UMovieSceneCameraCutTrack *this,FVTableHelper *param_1)

{
  UMovieSceneNameableTrack::UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  (this->Sections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Sections).ArrayNum = 0;
  (this->Sections).ArrayMax = 0;
  return this;
}

// ~UMovieSceneCameraCutTrack @ 1468a04e0

void __thiscall
UMovieSceneCameraCutTrack::~UMovieSceneCameraCutTrack(UMovieSceneCameraCutTrack *this)

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

// AddNewCameraCut @ 1468a68a0

UMovieSceneCameraCutSection * __thiscall
UMovieSceneCameraCutTrack::AddNewCameraCut
          (UMovieSceneCameraCutTrack *this,FMovieSceneObjectBindingID *param_1,FFrameNumber param_2)

{
  int iVar1;
  undefined8 uVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  UMovieSceneCameraCutSection *pUVar8;
  UClass *pUVar9;
  FObjectPtr_u_0 FVar10;
  char cVar11;
  uint uVar12;
  FObjectPtr_u_0 *pFVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  FObjectPtr_u_0 FVar16;
  int iVar17;
  TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_> *pTVar18;
  FObjectPtr_u_0 *pFVar19;
  undefined1 local_res20 [8];
  undefined1 local_78 [4];
  int local_74;
  FObjectPtr_u_0 local_70;
  undefined8 local_68;
  undefined8 local_60;
  FObjectPtr_u_0 *local_58;
  undefined1 local_50 [4];
  int local_4c;
  undefined1 local_48;
  int local_44;
  
  FindEndTimeForCameraCut(this,(FFrameNumber)(int)&local_74);
  FVar16.Handle = (UObject *)0x0;
  pTVar18 = &this->Sections;
  pFVar19 = (FObjectPtr_u_0 *)(pTVar18->AllocatorInstance).Data;
  iVar1 = (this->Sections).ArrayNum;
  pFVar13 = pFVar19 + iVar1;
  local_58 = pFVar13;
  do {
    if ((this->Sections).ArrayNum != iVar1) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UMovieSceneSection>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res20);
    }
    FVar10.Handle = FVar16.Handle;
    if (pFVar19 == pFVar13) goto LAB_1468a6a41;
    local_70 = (FObjectPtr_u_0)pFVar19->Handle;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UMovieSceneCameraCutSection *)local_70.Handle != (UMovieSceneCameraCutSection *)0x0)) {
      UE::GC::MarkAsReachable(local_70.Handle);
    }
    uVar2 = *(undefined8 *)&local_70.Handle[4].field_0x10;
    if (((char)uVar2 != '\x02') && (local_70.Handle[4].field_0x18 != '\x02')) {
      uVar12 = (uint)uVar2 & 0xff;
      local_68 = uVar2;
      if ((char)uVar2 == '\x01') {
        if ((uVar12 == 2) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Type != ERangeBoundTypes::Open",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                               ,99,L""), bVar7)) {
          pcVar3 = (code *)swi(3);
          pUVar8 = (UMovieSceneCameraCutSection *)(*pcVar3)();
          return pUVar8;
        }
        iVar17 = local_68._4_4_;
      }
      else {
        if ((uVar12 == 2) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Type != ERangeBoundTypes::Open",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                               ,99,L""), bVar7)) {
          pcVar3 = (code *)swi(3);
          pUVar8 = (UMovieSceneCameraCutSection *)(*pcVar3)();
          return pUVar8;
        }
        iVar17 = local_68._4_4_ + 1;
      }
      iVar6 = local_74;
      if (iVar17 == param_2.Value) {
        iVar17 = (int)((ulonglong)*(undefined8 *)&local_70.Handle[4].field_0x18 >> 0x20);
        cVar11 = (char)*(undefined8 *)&local_70.Handle[4].field_0x18;
        if (cVar11 == '\x01') {
          iVar17 = iVar17 + 1;
        }
        else if ((cVar11 == '\x02') &&
                (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Type != ERangeBoundTypes::Open",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                    ,99,L""), bVar7)) {
          pcVar3 = (code *)swi(3);
          pUVar8 = (UMovieSceneCameraCutSection *)(*pcVar3)();
          return pUVar8;
        }
        pFVar13 = local_58;
        if (iVar17 == iVar6) {
          FVar10.Handle = (UObject *)0x0;
          if ((UMovieSceneCameraCutSection *)local_70.Handle != (UMovieSceneCameraCutSection *)0x0)
          {
            pUVar9 = Z_Construct_UClass_UMovieSceneCameraCutSection_NoRegister();
            bVar7 = FObjectPtr::IsA((FObjectPtr *)&local_70,pUVar9);
            if (bVar7) {
              FVar10 = local_70;
            }
          }
LAB_1468a6a41:
          if ((UMovieSceneCameraCutSection *)FVar10.Handle == (UMovieSceneCameraCutSection *)0x0) {
            local_60 = 0;
            FVar10.Handle =
                 (UObject *)
                 NewObject<UMovieSceneCameraCutSection>
                           ((UObject *)this,(FName)0x0,RF_Transactional,(UObject *)0x0,false,
                            (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
            local_44 = local_74;
            local_50[0] = 1;
            local_48 = 0;
            local_4c = param_2.Value;
            (**(code **)(*(longlong *)FVar10.Handle + 0x2c8))(FVar10.Handle,local_50);
            uVar12 = (param_1->Guid).B;
            uVar4 = (param_1->Guid).C;
            uVar5 = (param_1->Guid).D;
            (((FMovieSceneObjectBindingID *)&FVar10.Handle[7].field_0x14)->Guid).A =
                 (param_1->Guid).A;
            *(uint *)&FVar10.Handle[7].field_0x18 = uVar12;
            *(uint *)&FVar10.Handle[7].field_0x1c = uVar4;
            *(uint *)&FVar10.Handle[7].field_0x20 = uVar5;
            *(undefined8 *)&FVar10.Handle[7].field_0x24 = *(undefined8 *)&param_1->SequenceID;
            (**(code **)this->_padding_)(&this->_padding_,FVar10.Handle);
          }
          else {
            uVar12 = (param_1->Guid).B;
            uVar4 = (param_1->Guid).C;
            uVar5 = (param_1->Guid).D;
            *(uint *)&(FVar10.Handle + 0x118)->field_0x14 = (param_1->Guid).A;
            *(uint *)&(FVar10.Handle + 0x118)->field_0x18 = uVar12;
            *(uint *)&(FVar10.Handle + 0x118)->field_0x1c = uVar4;
            *(uint *)&(FVar10.Handle + 0x118)->field_0x20 = uVar5;
            *(undefined8 *)&FVar10.Handle[7].field_0x24 = *(undefined8 *)&param_1->SequenceID;
          }
          pFVar14 = (pTVar18->AllocatorInstance).Data;
          iVar1 = (this->Sections).ArrayNum;
          pFVar15 = pFVar14 + (longlong)iVar1 * 8;
          while( true ) {
            if ((this->Sections).ArrayNum != iVar1) {
              `TCheckedPointerIterator<TObjectPtr<UMovieSceneSection>_const_,int,0>::operator!='::
              __l2::<lambda_1>::operator()(local_78);
            }
            if (pFVar14 == pFVar15) break;
            pFVar14 = pFVar14 + 8;
          }
          MovieSceneHelpers::SortConsecutiveSections
                    ((TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> *)pTVar18);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pFVar15 = (pTVar18->AllocatorInstance).Data, 0 < (this->Sections).ArrayNum)) {
            do {
              if (*(UObject **)pFVar15 != (UObject *)0x0) {
                UE::GC::MarkAsReachable(*(UObject **)pFVar15);
              }
              FVar16._0_4_ = FVar16._0_4_ + 1;
              FVar16._4_4_ = 0;
              pFVar15 = pFVar15 + 8;
            } while ((int)FVar16._0_4_ < (this->Sections).ArrayNum);
          }
          AutoArrangeSectionsIfNeeded(this,(UMovieSceneSection *)FVar10.Handle,false,false);
          return (UMovieSceneCameraCutSection *)FVar10.Handle;
        }
      }
    }
    pFVar19 = pFVar19 + 1;
  } while( true );
}

// AddSection @ 1468a8730

void __thiscall
UMovieSceneCameraCutTrack::AddSection(UMovieSceneCameraCutTrack *this,UMovieSceneSection *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UClass *pUVar5;
  longlong *plVar6;
  UMovieSceneSection *local_18 [2];
  
  if (param_1 != (UMovieSceneSection *)0x0) {
    pUVar5 = Z_Construct_UClass_UMovieSceneCameraCutSection_NoRegister();
    iVar4 = (int)pUVar5->_padding_;
    if ((iVar4 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar4 * 8)
        == &pUVar5->_padding_)) {
      plVar6 = &this->_padding_;
      local_18[0] = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      if ((((UMovieSceneSection **)*plVar6 <= local_18) &&
          (local_18 < (UMovieSceneSection **)*plVar6 + *(int *)((longlong)&this->_padding_ + 4))) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar4 = (int)this->_padding_;
      piVar1 = (int *)((longlong)&this->_padding_ + 4);
      if (iVar4 == *piVar1) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)plVar6,piVar1);
      }
      *(int *)&this->_padding_ = iVar4 + 1;
      *(UMovieSceneSection **)(*plVar6 + (longlong)iVar4 * 8) = local_18[0];
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_18[0] != (UMovieSceneSection *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_18[0]);
      }
    }
  }
  return;
}

// AutoArrangeSectionsIfNeeded @ 1468ab2b0

bool __thiscall
UMovieSceneCameraCutTrack::AutoArrangeSectionsIfNeeded
          (UMovieSceneCameraCutTrack *this,UMovieSceneSection *param_1,bool param_2,bool param_3)

{
  TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_> *pTVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  if ((this->bAutoArrangeSections != false) &&
     (iVar3 = UMovieSceneTrack::GetMaxRowIndex((UMovieSceneTrack *)this), iVar3 == 0)) {
    pTVar1 = &this->Sections;
    pFVar4 = (pTVar1->AllocatorInstance).Data;
    iVar3 = (this->Sections).ArrayNum;
    pFVar5 = pFVar4 + (longlong)iVar3 * 8;
    if (this->bCanBlend == false) {
      while( true ) {
        if ((this->Sections).ArrayNum != iVar3) {
          `TCheckedPointerIterator<TObjectPtr<UMovieSceneSection>_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res8);
        }
        if (pFVar4 == pFVar5) break;
        pFVar4 = pFVar4 + 8;
      }
      bVar2 = MovieSceneHelpers::FixupConsecutiveSections
                        ((TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> *)pTVar1,param_1,
                         param_2,param_3);
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        pFVar5 = (pTVar1->AllocatorInstance).Data;
        iVar3 = 0;
        if (0 < (this->Sections).ArrayNum) {
          do {
            if (*(UObject **)pFVar5 != (UObject *)0x0) {
              UE::GC::MarkAsReachable(*(UObject **)pFVar5);
            }
            iVar3 = iVar3 + 1;
            pFVar5 = pFVar5 + 8;
          } while (iVar3 < (this->Sections).ArrayNum);
        }
      }
    }
    else {
      while( true ) {
        if ((this->Sections).ArrayNum != iVar3) {
          `TCheckedPointerIterator<TObjectPtr<UMovieSceneSection>_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res8);
        }
        if (pFVar4 == pFVar5) break;
        pFVar4 = pFVar4 + 8;
      }
      bVar2 = MovieSceneHelpers::FixupConsecutiveBlendingSections
                        ((TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> *)pTVar1,param_1,
                         param_2,param_3);
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        pFVar5 = (pTVar1->AllocatorInstance).Data;
        iVar3 = 0;
        if (0 < (this->Sections).ArrayNum) {
          do {
            if (*(UObject **)pFVar5 != (UObject *)0x0) {
              UE::GC::MarkAsReachable(*(UObject **)pFVar5);
            }
            iVar3 = iVar3 + 1;
            pFVar5 = pFVar5 + 8;
          } while (iVar3 < (this->Sections).ArrayNum);
        }
      }
    }
    return bVar2;
  }
  return false;
}

// CreateNewSection @ 1468add30

UMovieSceneSection * __thiscall
UMovieSceneCameraCutTrack::CreateNewSection(UMovieSceneCameraCutTrack *this)

{
  UMovieSceneCameraCutSection *pUVar1;
  
  pUVar1 = NewObject<UMovieSceneCameraCutSection>
                     ((UObject *)this,(FName)0x0,RF_Transactional,(UObject *)0x0,false,
                      (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
  return (UMovieSceneSection *)pUVar1;
}

// FindEndTimeForCameraCut @ 1468b3dd0

FFrameNumber __thiscall
UMovieSceneCameraCutTrack::FindEndTimeForCameraCut
          (UMovieSceneCameraCutTrack *this,FFrameNumber param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  UClass *pUVar9;
  UObject *pUVar10;
  uint uVar11;
  undefined4 in_register_00000014;
  int *piVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  int in_R8D;
  double dVar15;
  undefined1 in_XMM2 [16];
  undefined1 auVar16 [16];
  double dVar17;
  float fVar18;
  int iStackX_c;
  undefined1 local_res18 [8];
  
  piVar12 = (int *)CONCAT44(in_register_00000014,param_1.Value);
  pUVar9 = Z_Construct_UClass_UMovieScene_NoRegister();
  pUVar10 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar9);
  iVar7 = *(int *)&pUVar10[7].field_0x1c;
  cVar6 = (char)*(undefined4 *)&pUVar10[7].field_0x18;
  if ((cVar6 == '\x02') &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InUpperBound.IsOpen()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\MovieSceneTimeHelpers.h"
                         ,0x44,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar7 = (*pcVar4)();
    return (FFrameNumber)iVar7;
  }
  lVar14 = 0;
  if (cVar6 == '\x01') {
    lVar14 = 4;
  }
  iVar8 = *(int *)((longlong)
                   &`struct_FFrameNumber___cdecl_UE::MovieScene::DiscreteExclusiveUpper(TRangeBound<FFrameNumber>_const&___ptr64)'
                    ::__l2::Offsets + lVar14);
  if ((cVar6 == '\x02') &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar7 = (*pcVar4)();
    return (FFrameNumber)iVar7;
  }
  pFVar13 = (this->Sections).AllocatorInstance.Data;
  iVar2 = (this->Sections).ArrayNum;
  pFVar1 = pFVar13 + (longlong)iVar2 * 8;
  iVar7 = iVar7 + iVar8;
  iVar8 = in_R8D;
  if (in_R8D < iVar7) {
    iVar8 = iVar7;
  }
  *piVar12 = iVar8;
  do {
    if ((this->Sections).ArrayNum != iVar2) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UMovieSceneSection>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res18);
    }
    if (pFVar13 == pFVar1) goto LAB_1468b3fad;
    lVar14 = *(longlong *)pFVar13;
    uVar3 = *(undefined8 *)(lVar14 + 0xb0);
    if ((char)uVar3 != '\x02') {
      uVar11 = (uint)uVar3 & 0xff;
      iStackX_c = (int)((ulonglong)uVar3 >> 0x20);
      if ((char)uVar3 == '\x01') {
        if ((uVar11 == 2) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Type != ERangeBoundTypes::Open",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                               ,99,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar7 = (*pcVar4)();
          return (FFrameNumber)iVar7;
        }
      }
      else {
        if ((uVar11 == 2) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Type != ERangeBoundTypes::Open",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                               ,99,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar7 = (*pcVar4)();
          return (FFrameNumber)iVar7;
        }
        iStackX_c = iStackX_c + 1;
      }
      if (in_R8D < iStackX_c) {
        uVar3 = *(undefined8 *)(lVar14 + 0xb0);
        iVar7 = (int)((ulonglong)uVar3 >> 0x20);
        cVar6 = (char)uVar3;
        if (cVar6 != '\x01') {
          if ((cVar6 == '\x02') &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Type != ERangeBoundTypes::Open",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                 ,99,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            iVar7 = (*pcVar4)();
            return (FFrameNumber)iVar7;
          }
          iVar7 = iVar7 + 1;
        }
        *piVar12 = iVar7;
LAB_1468b3fad:
        if (in_R8D == *piVar12) {
          dVar17 = ((double)(int)*(undefined8 *)&pUVar10[7].field_0x20 * __real_3fe0000000000000) /
                   (double)(int)((ulonglong)*(undefined8 *)&pUVar10[7].field_0x20 >> 0x20);
          auVar16._8_8_ = 0;
          auVar16._0_8_ = dVar17;
          auVar16 = roundpd(in_XMM2,auVar16,1);
          dVar15 = auVar16._0_8_;
          dVar17 = dVar17 - dVar15;
          if (__real_41dfffffffc00000 <= dVar15) {
            dVar15 = __real_41dfffffffc00000;
          }
          if (dVar15 <= __real_c1e0000000000000) {
            dVar15 = __real_c1e0000000000000;
          }
          iVar7 = (int)dVar17;
          fVar18 = (float)dVar17 - (float)iVar7;
          if ((0.0 < fVar18) && (::FFrameTime::MaxSubframe <= fVar18)) {
            fVar18 = ::FFrameTime::MaxSubframe;
          }
          if (::FFrameTime::MaxSubframe <= fVar18) {
            fVar18 = ::FFrameTime::MaxSubframe;
          }
          if (fVar18 <= 0.0) {
            fVar18 = 0.0;
          }
          *piVar12 = (int)dVar15 +
                     ((int)ROUND((fVar18 + 0.0 + fVar18 + 0.0) - __real_3f000000) >> 1) + in_R8D +
                     iVar7;
        }
        return (FFrameNumber)param_1.Value;
      }
    }
    pFVar13 = pFVar13 + 8;
  } while( true );
}

// GetAllSections @ 1468b56e0

TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> * __thiscall
UMovieSceneCameraCutTrack::GetAllSections(UMovieSceneCameraCutTrack *this)

{
  return (TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> *)&this->Sections;
}

// GetPrivateStaticClass @ 1468b6850

UClass * __cdecl UMovieSceneCameraCutTrack::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneCameraCutTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneCameraCutTrack",
               &Z_Registration_Info_UClass_UMovieSceneCameraCutTrack.InnerSingleton,
               StaticRegisterNativesUMovieSceneCameraCutTrack,0x138,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UMovieSceneCameraCutTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneCameraCutTrack>,local_res8,
               UMovieSceneNameableTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneCameraCutTrack.InnerSingleton;
}

// HasSection @ 1468ba6e0

bool __thiscall
UMovieSceneCameraCutTrack::HasSection(UMovieSceneCameraCutTrack *this,UMovieSceneSection *param_1)

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

// IsAutoManagingSections @ 1468bc680

bool __thiscall UMovieSceneCameraCutTrack::IsAutoManagingSections(UMovieSceneCameraCutTrack *this)

{
  int iVar1;
  
  if (this->bAutoArrangeSections != false) {
    iVar1 = UMovieSceneTrack::GetMaxRowIndex((UMovieSceneTrack *)this);
    if (iVar1 == 0) {
      return true;
    }
  }
  return false;
}

// IsEmpty @ 1468bc730

bool __thiscall UMovieSceneCameraCutTrack::IsEmpty(UMovieSceneCameraCutTrack *this)

{
  return (this->Sections).ArrayNum == 0;
}

// PreCompileImpl @ 1468c6470

void __thiscall
UMovieSceneCameraCutTrack::PreCompileImpl
          (UMovieSceneCameraCutTrack *this,FMovieSceneTrackPreCompileResult *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  UMovieSceneCameraCutSection *this_00;
  UClass *pUVar4;
  FString *pFVar5;
  FScriptContainerElement *pFVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  undefined1 local_res8 [8];
  FString local_38;
  FString local_28;
  
  pFVar6 = (this->Sections).AllocatorInstance.Data;
  iVar2 = (this->Sections).ArrayNum;
  pFVar1 = pFVar6 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Sections).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UMovieSceneSection>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar6 == pFVar1) {
      return;
    }
    this_00 = *(UMovieSceneCameraCutSection **)pFVar6;
    if (this_00 == (UMovieSceneCameraCutSection *)0x0) {
      pFVar5 = GetTypeName<UMovieSceneCameraCutSection>(&local_28);
      if ((pFVar5->Data).ArrayNum == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar7);
    }
    pUVar4 = Z_Construct_UClass_UMovieSceneCameraCutSection_NoRegister();
    iVar3 = (int)pUVar4->_padding_;
    if ((*(int *)(*(longlong *)&this_00->field_0x10 + 0x38) < iVar3) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar3 * 8) !=
        &pUVar4->_padding_)) break;
    UMovieSceneCameraCutSection::ComputeInitialCameraCutTransform(this_00);
    pFVar6 = pFVar6 + 8;
  }
  pFVar5 = GetTypeName<UMovieSceneCameraCutSection>(&local_38);
  pwVar7 = L"";
  if ((pFVar5->Data).ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
  pFVar5 = GetFullNameForCastLogError<UMovieSceneSection>(&local_28,(UMovieSceneSection *)this_00);
  if ((pFVar5->Data).ArrayNum != 0) {
    pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar7,pwVar8);
}

// RearrangeAllSections @ 1468c78d0

void __thiscall UMovieSceneCameraCutTrack::RearrangeAllSections(UMovieSceneCameraCutTrack *this)

{
  TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_> *pTVar1;
  bool bVar2;
  FFrameRate FVar3;
  FFrameRate FVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  code *pcVar8;
  FFrameRate FVar9;
  FFrameRate FVar10;
  float fVar11;
  bool bVar12;
  bool bVar13;
  UClass *pUVar14;
  UObject *pUVar15;
  FFrameTime FVar16;
  uint uVar17;
  FScriptContainerElement *pFVar18;
  FScriptContainerElement *pFVar19;
  uint uVar20;
  int iVar21;
  undefined1 local_res20 [8];
  undefined1 local_a8 [4];
  int local_a4;
  float local_a0;
  uint local_98;
  undefined4 uStack_94;
  uint local_90;
  undefined4 uStack_8c;
  longlong local_88;
  undefined1 local_80 [8];
  uint local_78;
  int iStack_74;
  undefined4 uStack_70;
  int iStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  int iStack_5c;
  
  pUVar14 = Z_Construct_UClass_UMovieScene_NoRegister();
  pUVar15 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar14);
  if (pUVar15 == (UObject *)0x0) {
    local_res20[0] = 0;
    bVar12 = `UMovieSceneCameraCutTrack::RearrangeAllSections'::__l3::<lambda_1>::operator()
                       (local_res20);
    if (!bVar12) {
      return;
    }
  }
  pTVar1 = &this->Sections;
  pFVar18 = (pTVar1->AllocatorInstance).Data;
  iVar21 = (this->Sections).ArrayNum;
  pFVar19 = pFVar18 + (longlong)iVar21 * 8;
  while( true ) {
    if ((this->Sections).ArrayNum != iVar21) {
      local_a8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UMovieSceneSection>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_a8);
    }
    if (pFVar18 == pFVar19) break;
    pFVar18 = pFVar18 + 8;
  }
  MovieSceneHelpers::SortConsecutiveSections
            ((TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> *)pTVar1);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    pFVar19 = (pTVar1->AllocatorInstance).Data;
    iVar21 = 0;
    if (0 < (this->Sections).ArrayNum) {
      do {
        if (*(UObject **)pFVar19 != (UObject *)0x0) {
          UE::GC::MarkAsReachable(*(UObject **)pFVar19);
        }
        iVar21 = iVar21 + 1;
        pFVar19 = pFVar19 + 8;
      } while (iVar21 < (this->Sections).ArrayNum);
    }
  }
  if (this->bAutoArrangeSections != false) {
    iVar21 = UMovieSceneTrack::GetMaxRowIndex((UMovieSceneTrack *)this);
    bVar12 = true;
    if (iVar21 == 0) goto LAB_1468c79bf;
  }
  bVar12 = false;
LAB_1468c79bf:
  fVar11 = __real_3f000000;
  bVar2 = this->bCanBlend;
  FVar3.Numerator = *(int *)&pUVar15[7].field_0x20;
  FVar3.Denominator = *(int *)&pUVar15[7].field_0x24;
  FVar4.Numerator = *(int *)&pUVar15[8].field_0x0;
  FVar4.Denominator = *(int *)&pUVar15[8].field_0x4;
  uVar20 = 1;
  iVar21 = (this->Sections).ArrayNum;
  if (1 < iVar21) {
    local_88 = 8;
    do {
      lVar7 = local_88;
      uVar17 = 0;
      if ((int)uVar20 < (this->Sections).ArrayNum) {
        uVar17 = ~uVar20 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      plVar5 = *(longlong **)((pTVar1->AllocatorInstance).Data + lVar7);
      uVar17 = 0;
      if ((int)(uVar20 - 1) < (this->Sections).ArrayNum) {
        uVar17 = -uVar20 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      local_78 = *(uint *)(plVar5 + 0x16);
      iStack_74 = *(int *)((longlong)plVar5 + 0xb4);
      uStack_70 = (undefined4)plVar5[0x17];
      iStack_6c = *(int *)((longlong)plVar5 + 0xbc);
      plVar6 = *(longlong **)((pTVar1->AllocatorInstance).Data + lVar7 + -8);
      iVar21 = 0;
      local_68 = (undefined4)plVar6[0x16];
      uStack_64 = *(undefined4 *)((longlong)plVar6 + 0xb4);
      uStack_60 = (undefined4)plVar6[0x17];
      iStack_5c = *(int *)((longlong)plVar6 + 0xbc);
      if ((char)uStack_60 == '\x02') {
        uVar17 = local_78 & 0xff;
      }
      else {
        uVar17 = local_78;
        iVar21 = 0;
        if ((char)local_78 != '\x02') {
          iVar21 = iStack_5c;
          if (((char)uStack_70 != '\x02') && (iVar21 = iStack_6c, iStack_5c < iStack_6c)) {
            iVar21 = iStack_5c;
          }
          if ((char)local_78 == '\x02') {
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Type != ERangeBoundTypes::Open",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                ,99,L"");
            if (bVar13) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            uVar17 = local_78 & 0xff;
          }
          iVar21 = iVar21 - iStack_74;
        }
      }
      if (((bVar2 == false) && (0 < iVar21)) || ((bVar12 && (iVar21 < 0)))) {
        if (((char)uVar17 == '\x02') &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Type != ERangeBoundTypes::Open",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                ,99,L""), bVar13)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        local_98 = iStack_74 + ((int)ROUND((float)iVar21 - fVar11) >> 1);
        uStack_94 = 0;
        FVar9.Denominator = 0;
        FVar9.Numerator = local_98;
        FVar16 = ConvertFrameTime((FFrameTime)local_80,FVar9,FVar3);
        local_90 = *(uint *)FVar16;
        if (fVar11 < *(float *)((longlong)FVar16 + 4) || fVar11 == *(float *)((longlong)FVar16 + 4))
        {
          local_90 = local_90 + 1;
        }
        uStack_8c = 0;
        FVar10.Denominator = 0;
        FVar10.Numerator = local_90;
        ConvertFrameTime((FFrameTime)&local_a4,FVar10,FVar4);
        iVar21 = local_a4;
        if (local_a0 != 0.0) {
          iVar21 = local_a4 + 1;
        }
        if (((char)uStack_60 == '\x02') &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Type != ERangeBoundTypes::Open",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                ,0x73,L""), bVar13)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iStack_5c = iVar21;
        (**(code **)(*plVar6 + 0x2c8))(plVar6,&local_68);
        if (((char)local_78 == '\x02') &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Type != ERangeBoundTypes::Open",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                ,0x73,L""), bVar13)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iStack_74 = iVar21;
        (**(code **)(*plVar5 + 0x2c8))(plVar5,&local_78);
      }
      if (bVar2 == false) {
        *(undefined4 *)(plVar5 + 0xf) = 0;
        *(undefined4 *)((longlong)plVar5 + 0x94) = 0;
        *(undefined4 *)((longlong)plVar6 + 0x7c) = 0;
        *(undefined4 *)((longlong)plVar6 + 0xac) = 0;
      }
      uVar20 = uVar20 + 1;
      iVar21 = (this->Sections).ArrayNum;
      local_88 = local_88 + 8;
    } while ((int)uVar20 < iVar21);
  }
  if (bVar2 == false) {
    if (0 < iVar21) {
      lVar7 = *(longlong *)(pTVar1->AllocatorInstance).Data;
      *(undefined4 *)(lVar7 + 0x78) = 0;
      *(undefined4 *)(lVar7 + 0x94) = 0;
    }
    iVar21 = (this->Sections).ArrayNum;
    if (1 < iVar21) {
      uVar20 = 0;
      if ((int)(iVar21 - 1U) < iVar21) {
        uVar20 = ~(iVar21 - 1U) >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar7 = *(longlong *)
               ((pTVar1->AllocatorInstance).Data + (longlong)(this->Sections).ArrayNum * 8 + -8);
      *(undefined4 *)(lVar7 + 0x7c) = 0;
      *(undefined4 *)(lVar7 + 0xac) = 0;
    }
  }
  return;
}

// RemoveAllAnimationData @ 1468c8d80

void __thiscall UMovieSceneCameraCutTrack::RemoveAllAnimationData(UMovieSceneCameraCutTrack *this)

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

// RemoveSection @ 1468c98f0

void __thiscall
UMovieSceneCameraCutTrack::RemoveSection
          (UMovieSceneCameraCutTrack *this,UMovieSceneSection *param_1)

{
  longlong *this_00;
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  TObjectPtr<UMovieSceneSection>_u_0 local_res8;
  
  this_00 = &this->_padding_;
  local_res8.DebugPtr = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMovieSceneSection *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_>::Remove
            ((TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_> *)this_00,
             (TObjectPtr<UMovieSceneSection> *)&local_res8.ObjectPtr);
  AutoArrangeSectionsIfNeeded((UMovieSceneCameraCutTrack *)&this[-1]._padding_,param_1,true,false);
  lVar3 = *this_00;
  iVar2 = (int)this->_padding_;
  lVar1 = lVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((int)this->_padding_ != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UMovieSceneSection>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_res8);
    }
    if (lVar3 == lVar1) break;
    lVar3 = lVar3 + 8;
  }
  MovieSceneHelpers::SortConsecutiveSections
            ((TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> *)this_00);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    puVar4 = (undefined8 *)*this_00;
    iVar2 = 0;
    if (0 < (int)this->_padding_) {
      do {
        if ((UObject *)*puVar4 != (UObject *)0x0) {
          UE::GC::MarkAsReachable((UObject *)*puVar4);
        }
        iVar2 = iVar2 + 1;
        puVar4 = puVar4 + 1;
      } while (iVar2 < (int)this->_padding_);
    }
  }
  return;
}

// RemoveSectionAt @ 1468ca340

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UMovieSceneCameraCutTrack::RemoveSectionAt(UMovieSceneCameraCutTrack *this,int param_1)

{
  longlong *this_00;
  longlong lVar1;
  int iVar2;
  UMovieSceneSection *pUVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined1 local_res10 [8];
  
  this_00 = &this->_padding_;
  iVar9 = 0;
  uVar6 = 0;
  if (param_1 < (int)this->_padding_) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pUVar3 = *(UMovieSceneSection **)(*this_00 + (longlong)param_1 * 8);
  TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_>::RemoveAt
            ((TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_> *)this_00,param_1,
             Default);
  AutoArrangeSectionsIfNeeded((UMovieSceneCameraCutTrack *)&this[-1]._padding_,pUVar3,true,false);
  lVar7 = *this_00;
  iVar2 = (int)this->_padding_;
  lVar1 = lVar7 + (longlong)iVar2 * 8;
  while( true ) {
    if ((int)this->_padding_ != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UMovieSceneSection>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (lVar7 == lVar1) break;
    lVar7 = lVar7 + 8;
  }
  MovieSceneHelpers::SortConsecutiveSections
            ((TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> *)this_00);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (puVar8 = (undefined8 *)*this_00, 0 < (int)this->_padding_)) {
    do {
      if ((UObject *)*puVar8 != (UObject *)0x0) {
        UE::GC::MarkAsReachable((UObject *)*puVar8);
      }
      iVar9 = iVar9 + 1;
      puVar8 = puVar8 + 1;
    } while (iVar9 < (int)this->_padding_);
  }
  return;
}

// SetIsAutoManagingSections @ 1468cebd0

void __thiscall
UMovieSceneCameraCutTrack::SetIsAutoManagingSections(UMovieSceneCameraCutTrack *this,bool param_1)

{
  this->bAutoArrangeSections = param_1;
  return;
}

// StaticRegisterNativesUMovieSceneCameraCutTrack @ 1468cff90

void __cdecl UMovieSceneCameraCutTrack::StaticRegisterNativesUMovieSceneCameraCutTrack(void)

{
  return;
}

// SupportsEasing @ 1468d0310

/* WARNING: Type propagation algorithm not settling */

EMovieSceneTrackEasingSupportFlags __thiscall
UMovieSceneCameraCutTrack::SupportsEasing
          (UMovieSceneCameraCutTrack *this,FMovieSceneSupportsEasingParams *param_1)

{
  int iVar1;
  UMovieSceneSection *pUVar2;
  undefined8 uVar3;
  code *pcVar4;
  FFrameNumber FVar5;
  TRangeBound<FFrameNumber> TVar6;
  bool bVar7;
  TEnumAsByte<ERangeBoundTypes::Type> TVar8;
  char cVar9;
  int iVar10;
  EMovieSceneTrackEasingSupportFlags EVar11;
  uint uVar12;
  FFrameNumber *pFVar13;
  int *piVar14;
  FFrameNumber FVar15;
  FFrameNumber FVar16;
  TEnumAsByte<ERangeBoundTypes::Type> TVar17;
  char cVar18;
  ulonglong uVar19;
  TRangeBound<FFrameNumber> TVar20;
  TRangeBound<FFrameNumber> TVar21;
  TEnumAsByte<ERangeBoundTypes::Type> TVar22;
  char cVar23;
  undefined8 *puVar24;
  longlong lVar25;
  uint uVar26;
  uint uVar27;
  undefined4 uVar28;
  EMovieSceneTrackEasingSupportFlags local_res18;
  uint local_res20;
  int iStack_164;
  undefined4 local_160;
  int iStack_15c;
  undefined4 local_158;
  FFrameNumber FStack_154;
  undefined4 local_150;
  FFrameNumber FStack_14c;
  TRangeBound<FFrameNumber> local_148;
  TRangeBound<FFrameNumber> TStack_140;
  TRangeBound<FFrameNumber> local_138;
  undefined1 local_130;
  int local_12c;
  undefined1 local_128;
  int local_124;
  undefined1 local_120;
  int local_11c;
  undefined1 local_118;
  int local_114;
  undefined4 local_110;
  int iStack_10c;
  uint local_108;
  int iStack_104;
  undefined4 local_100;
  int iStack_fc;
  uint local_f8;
  int iStack_f4;
  undefined4 local_f0;
  int iStack_ec;
  uint local_e8;
  int iStack_e4;
  undefined4 local_e0;
  int iStack_dc;
  uint local_d8;
  int iStack_d4;
  TRangeBound<FFrameNumber> local_d0;
  undefined1 local_c8 [4];
  undefined1 uStack_c4;
  undefined1 uStack_c3;
  undefined1 uStack_c2;
  undefined1 uStack_c1;
  undefined1 local_c0 [4];
  undefined4 local_bc;
  undefined4 local_b8;
  int iStack_b4;
  uint local_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  longlong local_a0;
  TRangeBound<FFrameNumber> local_98;
  TRangeBound<FFrameNumber> TStack_90;
  undefined4 local_88;
  int iStack_84;
  TRangeBound<FFrameNumber> TStack_80;
  undefined8 local_78;
  TRangeBound<FFrameNumber> local_70;
  TRangeBound<FFrameNumber> local_68;
  uchar local_60;
  undefined1 uStack_5f;
  undefined1 uStack_5e;
  undefined1 uStack_5d;
  int iStack_5c;
  uchar uStack_58;
  undefined1 uStack_57;
  undefined1 uStack_56;
  undefined1 uStack_55;
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  if (this->bCanBlend == false) {
    return None;
  }
  if (param_1->ForSection != (UMovieSceneSection *)0x0) {
    iVar1 = (this->Sections).ArrayNum;
    local_a0 = (longlong)iVar1;
    if (iVar1 == 1) {
      return All;
    }
    if (1 < iVar1) {
      if ((this->bAutoArrangeSections != false) &&
         (iVar10 = UMovieSceneTrack::GetMaxRowIndex((UMovieSceneTrack *)this), iVar10 == 0)) {
        uVar26 = iVar1 - 1;
        local_res20 = 0;
        if (((this->Sections).ArrayNum < 1) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          EVar11 = (*pcVar4)();
          return EVar11;
        }
        local_98 = *(TRangeBound<FFrameNumber> *)
                    (*(longlong *)(this->Sections).AllocatorInstance.Data + 0xb0);
        if (local_98.Type.Value.Value == '\0') {
          iStack_10c = local_98.Value.Value.Value + 1;
          local_110 = CONCAT31(local_110._1_3_,1);
          local_98.Value.Value = iStack_10c;
          local_98._0_4_ = local_110;
        }
        uVar27 = 0;
        if ((int)uVar26 < (this->Sections).ArrayNum) {
          uVar27 = ~uVar26 >> 0x1f;
        }
        if ((uVar27 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          EVar11 = (*pcVar4)();
          return EVar11;
        }
        uVar12 = local_f8;
        uVar27 = local_108;
        lVar25 = 0;
        uVar19 = *(ulonglong *)
                  (*(longlong *)
                    ((this->Sections).AllocatorInstance.Data + (longlong)(int)uVar26 * 8) + 0xb8);
        TStack_80 = (TRangeBound<FFrameNumber>)uVar19;
        if ((char)uVar19 == '\x01') {
          local_78._4_4_ = (int)(uVar19 >> 0x20);
          iStack_104 = local_78._4_4_ + 1;
          local_108 = local_108 & 0xffffff00;
          TStack_80 = (TRangeBound<FFrameNumber>)(CONCAT44(iStack_104,uVar27) & 0xffffffffffffff00);
        }
        TVar20 = (param_1->ForSection->SectionRange).Value.LowerBound;
        local_70 = (param_1->ForSection->SectionRange).Value.UpperBound;
        if (TVar20.Type.Value.Value == '\0') {
          iStack_fc = TVar20.Value.Value.Value + 1;
          local_100 = CONCAT31(local_100._1_3_,1);
          TVar20.Value.Value = iStack_fc;
          TVar20._0_4_ = local_100;
        }
        local_158 = TVar20._0_4_;
        FStack_154 = TVar20.Value.Value;
        FVar5.Value = FStack_154.Value;
        uVar27 = 0;
        TVar21 = local_70;
        if (local_70.Type.Value.Value == '\x01') {
          iStack_f4 = local_70.Value.Value + 1;
          local_f8 = local_f8 & 0xffffff00;
          TVar21 = (TRangeBound<FFrameNumber>)(CONCAT44(iStack_f4,uVar12) & 0xffffffffffffff00);
        }
        local_150 = TVar21._0_4_;
        FStack_14c = TVar21.Value.Value;
        local_78 = uVar19;
        do {
          uVar12 = 0;
          if ((int)uVar27 < (this->Sections).ArrayNum) {
            uVar12 = ~uVar27 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            EVar11 = (*pcVar4)();
            return EVar11;
          }
          uVar12 = local_e8;
          pUVar2 = *(UMovieSceneSection **)((this->Sections).AllocatorInstance.Data + lVar25 * 8);
          local_148 = (pUVar2->SectionRange).Value.LowerBound;
          local_68 = (pUVar2->SectionRange).Value.UpperBound;
          if (local_148.Type.Value.Value == '\0') {
            iStack_ec = local_148.Value.Value.Value + 1;
            local_f0 = CONCAT31(local_f0._1_3_,1);
            local_148.Value.Value = iStack_ec;
            local_148._0_4_ = local_f0;
          }
          TStack_140 = local_68;
          if (local_68.Type.Value.Value == '\x01') {
            iStack_e4 = local_68.Value.Value + 1;
            local_e8 = local_e8 & 0xffffff00;
            TStack_140 = (TRangeBound<FFrameNumber>)
                         (CONCAT44(iStack_e4,uVar12) & 0xffffffffffffff00);
          }
          FVar15 = local_148.Value.Value;
          TVar17 = local_148.Type.Value;
          if (pUVar2 != param_1->ForSection) {
            TVar8.Value = TVar17.Value;
            FVar16.Value = FVar15.Value;
            if ((TVar17.Value != '\x02') &&
               ((TVar20.Type.Value.Value == '\x02' ||
                ((FVar5.Value <= FVar15.Value &&
                 ((FVar5.Value < FVar15.Value || (TVar17.Value != '\x01')))))))) {
              TVar8.Value = TVar20.Type.Value.Value;
              FVar16.Value = FVar5.Value;
            }
            if ((TVar8.Value == TVar17.Value) &&
               ((TVar8.Value == '\x02' || (FVar16.Value == FVar15.Value)))) {
              TVar8 = TStack_140.Type.Value;
              if (TVar8.Value == '\x02') {
                return None;
              }
              TVar22 = TVar21.Type.Value;
              FVar15 = TStack_140.Value.Value;
              if (TVar22.Value == '\x02') {
LAB_1468d0643:
                pFVar13 = &FStack_14c;
                bVar7 = TVar22.Value != TVar8.Value;
                TVar8.Value = TVar22.Value;
                if (bVar7) goto LAB_1468d0662;
LAB_1468d064d:
                if (TVar8.Value == '\x02') {
                  return None;
                }
              }
              else {
                if (FStack_14c.Value < FVar15.Value) {
                  pFVar13 = &TStack_140.Value;
                  goto LAB_1468d064d;
                }
                if ((FVar15.Value < FStack_14c.Value) || (TVar8.Value != '\x01'))
                goto LAB_1468d0643;
                pFVar13 = &TStack_140.Value;
              }
              if (pFVar13->Value == FVar15.Value) {
                return None;
              }
            }
          }
LAB_1468d0662:
          if (local_98.Type.Value.Value == '\x02') {
LAB_1468d0713:
            uVar28 = TStack_140._0_4_;
            FVar15.Value = TStack_140.Value.Value;
          }
          else {
            if (TVar17.Value != '\x02') {
              if ((local_98.Type.Value.Value == '\x02') &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Type != ERangeBoundTypes::Open",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                     ,99,L""), bVar7)) {
                pcVar4 = (code *)swi(3);
                EVar11 = (*pcVar4)();
                return EVar11;
              }
              if ((TVar17.Value == '\x02') &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Type != ERangeBoundTypes::Open",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                     ,99,L""), bVar7)) {
                pcVar4 = (code *)swi(3);
                EVar11 = (*pcVar4)();
                return EVar11;
              }
              if (local_98.Value.Value <= local_148.Value.Value) goto LAB_1468d0713;
            }
            TVar6 = TStack_140;
            local_98 = local_148;
            TStack_90.Type.Value = TStack_140.Type.Value;
            TStack_90._1_3_ = TStack_140._1_3_;
            TStack_90.Value.Value = TStack_140.Value.Value;
            uVar28 = TStack_140._0_4_;
            FVar15.Value = TStack_140.Value.Value;
            local_res20 = uVar27;
            TStack_140 = TVar6;
          }
          if ((TStack_80.Type.Value != '\x02') &&
             ((TStack_140.Type.Value == '\x02' || (TStack_80.Value.Value < FVar15.Value)))) {
            TStack_80.Value.Value = FVar15.Value;
            TStack_80.Type.Value = (uchar)uVar28;
            TStack_80._1_3_ = SUB43(uVar28,1);
            uVar26 = uVar27;
            local_88 = local_148._0_4_;
            iStack_84 = local_148.Value.Value;
          }
          uVar27 = uVar27 + 1;
          lVar25 = lVar25 + 1;
          if (local_a0 <= lVar25) {
            uVar27 = 0;
            if ((int)local_res20 < (this->Sections).ArrayNum) {
              uVar27 = ~local_res20 >> 0x1f;
            }
            if ((uVar27 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar4 = (code *)swi(3);
              EVar11 = (*pcVar4)();
              return EVar11;
            }
            pUVar2 = *(UMovieSceneSection **)
                      ((this->Sections).AllocatorInstance.Data + (longlong)(int)local_res20 * 8);
            if (pUVar2 == (UMovieSceneSection *)0x0) {
              bVar7 = param_1->ForSection == (UMovieSceneSection *)0x0;
            }
            else {
              bVar7 = pUVar2 == param_1->ForSection;
            }
            EVar11 = (uint)bVar7 * 4 + AutomaticEasing;
            uVar27 = 0;
            if ((int)uVar26 < (this->Sections).ArrayNum) {
              uVar27 = ~uVar26 >> 0x1f;
            }
            if ((uVar27 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar4 = (code *)swi(3);
              EVar11 = (*pcVar4)();
              return EVar11;
            }
            pUVar2 = *(UMovieSceneSection **)
                      ((this->Sections).AllocatorInstance.Data + (longlong)(int)uVar26 * 8);
            if (pUVar2 == (UMovieSceneSection *)0x0) {
              bVar7 = param_1->ForSection == (UMovieSceneSection *)0x0;
            }
            else {
              bVar7 = pUVar2 == param_1->ForSection;
            }
            if (bVar7) {
              return EVar11 | ManualEaseOut;
            }
            return EVar11;
          }
        } while( true );
      }
      if ((this->bAutoArrangeSections == false) ||
         (iVar10 = UMovieSceneTrack::GetMaxRowIndex((UMovieSceneTrack *)this), iVar10 != 0)) {
        uVar26 = local_d8;
        TVar21 = (param_1->ForSection->SectionRange).Value.LowerBound;
        TVar20 = (param_1->ForSection->SectionRange).Value.UpperBound;
        local_138 = TVar20;
        if (TVar21.Type.Value.Value == '\0') {
          iStack_dc = TVar21.Value.Value.Value + 1;
          local_e0 = CONCAT31(local_e0._1_3_,1);
          TVar21.Value.Value = iStack_dc;
          TVar21._0_4_ = local_e0;
        }
        if (TVar20.Type.Value.Value == '\x01') {
          local_138.Value = TVar20.Value.Value;
          iStack_d4 = local_138.Value.Value + 1;
          local_d8 = local_d8 & 0xffffff00;
          TVar20 = (TRangeBound<FFrameNumber>)(CONCAT44(iStack_d4,uVar26) & 0xffffffffffffff00);
          local_138 = TVar20;
        }
        local_res18 = All;
        local_res20 = 0;
        if (iVar1 < 1) {
          return All;
        }
        local_d0.Value = TVar21.Value.Value;
        FVar15.Value = local_d0.Value.Value;
        local_138.Value = TVar20.Value.Value;
        FVar5.Value = local_138.Value.Value;
        local_a8 = 0;
        local_138 = TVar20;
        local_d0 = TVar21;
        do {
          lVar25 = local_a8;
          uVar26 = 0;
          if ((int)local_res20 < (this->Sections).ArrayNum) {
            uVar26 = ~local_res20 >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            EVar11 = (*pcVar4)();
            return EVar11;
          }
          pUVar2 = *(UMovieSceneSection **)((this->Sections).AllocatorInstance.Data + lVar25 * 8);
          local_60 = (pUVar2->SectionRange).Value.LowerBound.Type.Value;
          uStack_5f = (pUVar2->SectionRange).Value.LowerBound.field_0x1;
          uStack_5e = (pUVar2->SectionRange).Value.LowerBound.field_0x2;
          uStack_5d = (pUVar2->SectionRange).Value.LowerBound.field_0x3;
          iStack_5c = (pUVar2->SectionRange).Value.LowerBound.Value.Value;
          uStack_58 = (pUVar2->SectionRange).Value.UpperBound.Type.Value;
          uStack_57 = (pUVar2->SectionRange).Value.UpperBound.field_0x1;
          uStack_56 = (pUVar2->SectionRange).Value.UpperBound.field_0x2;
          uStack_55 = (pUVar2->SectionRange).Value.UpperBound.field_0x3;
          uStack_54 = (undefined1)(pUVar2->SectionRange).Value.UpperBound.Value.Value;
          uStack_53 = *(undefined1 *)
                       ((longlong)&(pUVar2->SectionRange).Value.UpperBound.Value.Value + 1);
          uStack_52 = *(undefined1 *)
                       ((longlong)&(pUVar2->SectionRange).Value.UpperBound.Value.Value + 2);
          uStack_51 = *(undefined1 *)
                       ((longlong)&(pUVar2->SectionRange).Value.UpperBound.Value.Value + 3);
          if ((pUVar2->SectionRange).Value.UpperBound.Type.Value == '\x02') {
            local_bc = 0;
            puVar24 = (undefined8 *)local_c0;
            local_c0[0] = 2;
          }
          else {
            local_c8[0] = 1;
            puVar24 = (undefined8 *)local_c8;
            uStack_c4 = uStack_54;
            uStack_c3 = uStack_53;
            uStack_c2 = uStack_52;
            uStack_c1 = uStack_51;
          }
          if (local_60 == '\x02') {
            uStack_ac = 0;
            local_b0 = CONCAT31(local_b0._1_3_,2);
            uVar19 = (ulonglong)local_b0;
          }
          else {
            local_b8 = CONCAT31(local_b8._1_3_,1);
            uVar19 = CONCAT44(iStack_5c,local_b8);
            iStack_b4 = iStack_5c;
          }
          uVar3 = *puVar24;
          iStack_164 = (int)(uVar19 >> 0x20);
          local_160 = (undefined4)uVar3;
          iStack_15c = (int)((ulonglong)uVar3 >> 0x20);
          if (pUVar2 != param_1->ForSection) {
            cVar18 = (char)uVar19;
            cVar23 = (char)uVar3;
            if (TVar21.Type.Value.Value != '\x02') {
              local_130 = 1;
              local_12c = FVar15.Value;
              cVar9 = cVar18;
              if (cVar18 == '\x02') {
                piVar14 = &iStack_164;
LAB_1468d0a33:
                if (cVar9 != cVar18) goto LAB_1468d0aaf;
              }
              else {
                if (FVar15.Value <= iStack_164) {
                  if ((FVar15.Value < iStack_164) || (piVar14 = &iStack_164, cVar18 != '\x01')) {
                    piVar14 = &local_12c;
                  }
                  cVar9 = '\x01';
                  goto LAB_1468d0a33;
                }
                piVar14 = &iStack_164;
              }
              if ((cVar9 == '\x02') || (*piVar14 == iStack_164)) {
                local_128 = 1;
                local_124 = FVar15.Value;
                cVar9 = cVar23;
                if (cVar23 == '\x02') {
                  piVar14 = &iStack_15c;
LAB_1468d0a83:
                  if (cVar9 != cVar23) goto LAB_1468d0aaf;
                }
                else {
                  if (iStack_15c <= FVar15.Value) {
                    if ((iStack_15c < FVar15.Value) || (piVar14 = &iStack_15c, cVar23 != '\x01')) {
                      piVar14 = &local_124;
                    }
                    cVar9 = '\x01';
                    goto LAB_1468d0a83;
                  }
                  piVar14 = &iStack_15c;
                }
                if ((cVar9 == '\x02') || (*piVar14 == iStack_15c)) {
                  local_res18 = local_res18 & ~ManualEaseIn;
                }
              }
            }
LAB_1468d0aaf:
            if (TVar20.Type.Value.Value != '\x02') {
              local_120 = 1;
              local_11c = FVar5.Value;
              if (cVar18 == '\x02') {
                piVar14 = &iStack_164;
                cVar9 = cVar18;
LAB_1468d0af4:
                bVar7 = cVar9 != cVar18;
                cVar18 = cVar9;
                if (bVar7) goto LAB_1468d0b55;
              }
              else {
                if (FVar5.Value <= iStack_164) {
                  if ((FVar5.Value < iStack_164) || (piVar14 = &iStack_164, cVar18 != '\x01')) {
                    piVar14 = &local_11c;
                  }
                  cVar9 = '\x01';
                  goto LAB_1468d0af4;
                }
                piVar14 = &iStack_164;
              }
              if ((cVar18 == '\x02') || (*piVar14 == iStack_164)) {
                local_118 = 1;
                local_114 = FVar5.Value;
                if (cVar23 == '\x02') {
                  piVar14 = &iStack_15c;
                  cVar18 = cVar23;
LAB_1468d0b3d:
                  bVar7 = cVar18 != cVar23;
                  cVar23 = cVar18;
                  if (bVar7) goto LAB_1468d0b55;
                }
                else {
                  if (iStack_15c <= FVar5.Value) {
                    if ((iStack_15c < FVar5.Value) || (piVar14 = &iStack_15c, cVar23 != '\x01')) {
                      piVar14 = &local_114;
                    }
                    cVar18 = '\x01';
                    goto LAB_1468d0b3d;
                  }
                  piVar14 = &iStack_15c;
                }
                if ((cVar23 == '\x02') || (*piVar14 == iStack_15c)) {
                  local_res18 = local_res18 & ~ManualEaseOut;
                }
              }
            }
          }
LAB_1468d0b55:
          local_res20 = local_res20 + 1;
          local_a8 = local_a8 + 1;
          if (local_a0 <= local_a8) {
            return local_res18;
          }
        } while( true );
      }
    }
  }
  return AutomaticEasing;
}

// SupportsMultipleRows @ 1468d0be0

bool __thiscall UMovieSceneCameraCutTrack::SupportsMultipleRows(UMovieSceneCameraCutTrack *this)

{
  return true;
}

// SupportsType @ 1468d1070

bool __thiscall
UMovieSceneCameraCutTrack::SupportsType
          (UMovieSceneCameraCutTrack *this,TSubclassOf<UMovieSceneSection> param_1)

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
        goto LAB_1468d10ba;
      }
    }
  }
  pUVar4 = (UClass *)0x0;
LAB_1468d10ba:
  pUVar5 = Z_Construct_UClass_UMovieSceneCameraCutSection_NoRegister();
  return pUVar4 == pUVar5;
}

// operator() @ 1504f5610

bool __thiscall
`UMovieSceneCameraCutTrack::RearrangeAllSections'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4247168875545755959>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4247168875545755959>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

