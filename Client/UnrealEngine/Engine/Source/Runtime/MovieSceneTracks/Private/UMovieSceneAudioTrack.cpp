// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 20

// StaticClass @ 146882d60

UClass * __cdecl UMovieSceneAudioTrack::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneAudioTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneAudioTrack",
               &Z_Registration_Info_UClass_UMovieSceneAudioTrack.InnerSingleton,
               StaticRegisterNativesUMovieSceneAudioTrack,0x128,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieSceneAudioTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneAudioTrack>,local_res8,
               UMovieSceneNameableTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneAudioTrack.InnerSingleton;
}

// UMovieSceneAudioTrack @ 14689cc60

UMovieSceneAudioTrack * __thiscall
UMovieSceneAudioTrack::UMovieSceneAudioTrack(UMovieSceneAudioTrack *this,FVTableHelper *param_1)

{
  UMovieSceneNameableTrack::UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  (this->AudioSections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AudioSections).ArrayNum = 0;
  (this->AudioSections).ArrayMax = 0;
  return this;
}

// UMovieSceneAudioTrack @ 14689ccb0

UMovieSceneAudioTrack * __thiscall
UMovieSceneAudioTrack::UMovieSceneAudioTrack
          (UMovieSceneAudioTrack *this,FObjectInitializer *param_1)

{
  UMovieSceneNameableTrack::UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  (this->AudioSections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AudioSections).ArrayNum = 0;
  (this->AudioSections).ArrayMax = 0;
  FMovieSceneBlendTypeField::Add((FMovieSceneBlendTypeField *)&this->_padding_,Absolute);
  return this;
}

// ~UMovieSceneAudioTrack @ 1468a0330

void __thiscall UMovieSceneAudioTrack::~UMovieSceneAudioTrack(UMovieSceneAudioTrack *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  pFVar1 = (this->AudioSections).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMovieSceneNameableTrack::~UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this);
  return;
}

// AddNewSound @ 1468a72d0

UMovieSceneSection * __thiscall
UMovieSceneAudioTrack::AddNewSound
          (UMovieSceneAudioTrack *this,USoundBase *param_1,FFrameNumber param_2)

{
  UMovieSceneSection *pUVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001468a72d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pUVar1 = (UMovieSceneSection *)(**(code **)(this->_padding_ + 0x380))();
  return pUVar1;
}

// AddNewSoundOnRow @ 1468a72f0

UMovieSceneSection * __thiscall
UMovieSceneAudioTrack::AddNewSoundOnRow
          (UMovieSceneAudioTrack *this,USoundBase *param_1,FFrameNumber param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  bool bVar6;
  UMovieSceneSection *pUVar7;
  UClass *pUVar8;
  UObject *pUVar9;
  UMovieSceneAudioSection *this_00;
  TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_> *pTVar10;
  int iVar11;
  float fVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auVar16 [16];
  double dVar17;
  undefined1 in_XMM3 [16];
  undefined1 auVar18 [16];
  undefined8 in_stack_ffffffffffffff88;
  undefined4 uVar19;
  UMovieSceneAudioSection *local_48 [6];
  
  uVar19 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
  if (param_1 == (USoundBase *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Sound",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Tracks\\MovieSceneAudioTrack.cpp"
                       ,0x5a,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pUVar7 = (UMovieSceneSection *)(*pcVar4)();
      return pUVar7;
    }
  }
  pUVar8 = Z_Construct_UClass_UMovieScene_NoRegister();
  pUVar9 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar8);
  dVar15 = (double)(int)*(undefined8 *)&pUVar9[7].field_0x20;
  dVar17 = __real_3ff0000000000000 /
           (double)(int)((ulonglong)*(undefined8 *)&pUVar9[7].field_0x20 >> 0x20);
  dVar13 = dVar17 * dVar15;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = dVar13;
  auVar18 = roundpd(in_XMM3,auVar18,1);
  dVar14 = auVar18._0_8_;
  auVar16._0_8_ = dVar13 - dVar14;
  auVar16._8_8_ = 0;
  if (__real_41dfffffffc00000 <= dVar14) {
    dVar14 = __real_41dfffffffc00000;
  }
  if (dVar14 <= __real_c1e0000000000000) {
    dVar14 = __real_c1e0000000000000;
  }
  iVar11 = (int)dVar14 + (int)auVar16._0_8_;
  fVar12 = MovieSceneHelpers::GetSoundDuration(param_1);
  if ((fVar12 != __real_461c4000) && (0.0 < fVar12)) {
    dVar17 = (double)fVar12 * dVar15 * dVar17;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = dVar17;
    auVar18 = roundpd(auVar16,auVar5,1);
    dVar14 = auVar18._0_8_;
    dVar15 = dVar14;
    if (__real_41dfffffffc00000 <= dVar14) {
      dVar15 = __real_41dfffffffc00000;
    }
    if (dVar15 <= __real_c1e0000000000000) {
      dVar15 = __real_c1e0000000000000;
    }
    iVar11 = (int)dVar15 + (int)(dVar17 - dVar14);
  }
  this_00 = (UMovieSceneAudioSection *)(**(code **)(this->_padding_ + 0x358))(this);
  if (this_00 != (UMovieSceneAudioSection *)0x0) {
    pUVar8 = Z_Construct_UClass_UMovieSceneAudioSection_NoRegister();
    iVar2 = (int)pUVar8->_padding_;
    if ((iVar2 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar8->_padding_)) goto LAB_1468a7443;
  }
  this_00 = (UMovieSceneAudioSection *)0x0;
LAB_1468a7443:
  pTVar10 = &this->AudioSections;
  (**(code **)(this_00->_padding_ + 0x330))
            (this_00,pTVar10,param_2.Value,iVar11,CONCAT44(uVar19,param_3));
  UMovieSceneAudioSection::SetSound(this_00,param_1);
  local_48[0] = this_00;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  pFVar3 = (pTVar10->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)local_48) &&
     ((FScriptContainerElement *)local_48 < pFVar3 + (longlong)(this->AudioSections).ArrayMax * 8))
  {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pUVar7 = (UMovieSceneSection *)(*pcVar4)();
      return pUVar7;
    }
  }
  iVar11 = (this->AudioSections).ArrayNum;
  piVar1 = &(this->AudioSections).ArrayMax;
  if (iVar11 == *piVar1) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar10->AllocatorInstance,piVar1);
  }
  pFVar3 = (pTVar10->AllocatorInstance).Data;
  (this->AudioSections).ArrayNum = iVar11 + 1;
  *(UMovieSceneAudioSection **)(pFVar3 + (longlong)iVar11 * 8) = local_48[0];
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_48[0] != (UMovieSceneAudioSection *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_48[0]);
  }
  return (UMovieSceneSection *)this_00;
}

// AddSection @ 1468a8510

void __thiscall
UMovieSceneAudioTrack::AddSection(UMovieSceneAudioTrack *this,UMovieSceneSection *param_1)

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

// CreateNewSection @ 1468ad990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneSection * __thiscall UMovieSceneAudioTrack::CreateNewSection(UMovieSceneAudioTrack *this)

{
  UClass *pUVar1;
  UMovieSceneSection *pUVar2;
  longlong *plVar3;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8 = 0;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UMovieSceneAudioSection_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_98._16_4_ = 0;
  local_98._20_4_ = 0;
  local_98._24_4_ = RF_Transactional;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_98._8_8_ = this;
  pUVar2 = (UMovieSceneSection *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// GetAllSections @ 1468b56c0

TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> * __thiscall
UMovieSceneAudioTrack::GetAllSections(UMovieSceneAudioTrack *this)

{
  return (TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> *)&this->AudioSections;
}

// GetCompatibleUserDecorationsImpl @ 1468b5a40

void __thiscall
UMovieSceneAudioTrack::GetCompatibleUserDecorationsImpl
          (UMovieSceneAudioTrack *this,
          TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator> *param_1)

{
  UClass *local_res18;
  UClass *local_res20;
  
  local_res20 = Z_Construct_UClass_UMovieSceneSectionAnchorsDecoration_NoRegister();
  TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>::Emplace<UClass_*>
            (param_1,&local_res18,(bool *)&local_res20);
  return;
}

// GetPrivateStaticClass @ 1468b6490

UClass * __cdecl UMovieSceneAudioTrack::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneAudioTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneAudioTrack",
               &Z_Registration_Info_UClass_UMovieSceneAudioTrack.InnerSingleton,
               StaticRegisterNativesUMovieSceneAudioTrack,0x128,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieSceneAudioTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneAudioTrack>,local_res8,
               UMovieSceneNameableTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneAudioTrack.InnerSingleton;
}

// HasSection @ 1468ba640

bool __thiscall
UMovieSceneAudioTrack::HasSection(UMovieSceneAudioTrack *this,UMovieSceneSection *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  
  pFVar2 = (this->AudioSections).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)(this->AudioSections).ArrayNum * 8;
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

// IsEmpty @ 1468bc6f0

bool __thiscall UMovieSceneAudioTrack::IsEmpty(UMovieSceneAudioTrack *this)

{
  return (this->AudioSections).ArrayNum == 0;
}

// PostRename @ 1468c61d0

void __thiscall
UMovieSceneAudioTrack::PostRename(UMovieSceneAudioTrack *this,UObject *param_1,FName param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  UClass *pUVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  UObject::PostRename((UObject *)this,param_1,param_2);
  pFVar6 = (this->AudioSections).AllocatorInstance.Data;
  iVar2 = (this->AudioSections).ArrayNum;
  pFVar1 = pFVar6 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->AudioSections).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UMovieSceneSection>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar6 == pFVar1) break;
    plVar4 = *(longlong **)pFVar6;
    if (plVar4 != (longlong *)0x0) {
      pUVar5 = Z_Construct_UClass_UMovieSceneAudioSection_NoRegister();
      iVar3 = (int)pUVar5->_padding_;
      if ((iVar3 <= *(int *)(plVar4[2] + 0x38)) &&
         ((longlong *)*(undefined1 **)(*(longlong *)(plVar4[2] + 0x30) + (longlong)iVar3 * 8) ==
          &pUVar5->_padding_)) {
        (**(code **)(*plVar4 + 0x3a0))(plVar4);
      }
    }
    pFVar6 = pFVar6 + 8;
  }
  return;
}

// RemoveAllAnimationData @ 1468c8d00

void __thiscall UMovieSceneAudioTrack::RemoveAllAnimationData(UMovieSceneAudioTrack *this)

{
  int *piVar1;
  
  piVar1 = &(this->AudioSections).ArrayMax;
  (this->AudioSections).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->AudioSections).AllocatorInstance,0,piVar1);
  }
  return;
}

// RemoveSection @ 1468c9850

void __thiscall
UMovieSceneAudioTrack::RemoveSection(UMovieSceneAudioTrack *this,UMovieSceneSection *param_1)

{
  TObjectPtr<UMovieSceneSection>_u_0 local_res8 [4];
  
  local_res8[0].DebugPtr = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMovieSceneSection *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_>::Remove
            ((TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_> *)&this->_padding_,
             (TObjectPtr<UMovieSceneSection> *)&local_res8[0].ObjectPtr);
  return;
}

// RemoveSectionAt @ 1468ca230

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UMovieSceneAudioTrack::RemoveSectionAt(UMovieSceneAudioTrack *this,int param_1)

{
  TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_>::RemoveAt
            ((TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_> *)&this->_padding_,
             param_1,Default);
  return;
}

// StaticRegisterNativesUMovieSceneAudioTrack @ 1468cff40

void __cdecl UMovieSceneAudioTrack::StaticRegisterNativesUMovieSceneAudioTrack(void)

{
  return;
}

// SupportsMultipleRows @ 1468d0bc0

bool __thiscall UMovieSceneAudioTrack::SupportsMultipleRows(UMovieSceneAudioTrack *this)

{
  return true;
}

// SupportsType @ 1468d0eb0

bool __thiscall
UMovieSceneAudioTrack::SupportsType
          (UMovieSceneAudioTrack *this,TSubclassOf<UMovieSceneSection> param_1)

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
        goto LAB_1468d0efa;
      }
    }
  }
  pUVar4 = (UClass *)0x0;
LAB_1468d0efa:
  pUVar5 = Z_Construct_UClass_UMovieSceneAudioSection_NoRegister();
  return pUVar4 == pUVar5;
}

