// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 11

// StaticClass @ 1468774d0

UClass * __cdecl UMovieSceneVisibilityTrack::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneVisibilityTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneVisibilityTrack",
               &Z_Registration_Info_UClass_UMovieSceneVisibilityTrack.InnerSingleton,
               StaticRegisterNativesUMovieSceneVisibilityTrack,0x148,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneVisibilityTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneVisibilityTrack>,local_res8,
               UMovieScenePropertyTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneVisibilityTrack.InnerSingleton;
}

// UMovieSceneVisibilityTrack @ 14689f410

UMovieSceneVisibilityTrack * __thiscall
UMovieSceneVisibilityTrack::UMovieSceneVisibilityTrack
          (UMovieSceneVisibilityTrack *this,FVTableHelper *param_1)

{
  UMovieSceneNameableTrack::UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this,param_1);
  *(undefined8 *)&this->field_0x118 = 0;
  *(undefined8 *)&this->field_0x120 = 0;
  *(undefined8 *)&this->field_0x128 = 0;
  this->field_0x130 = 0;
  *(undefined8 *)&this->field_0x138 = 0;
  *(undefined8 *)&this->field_0x140 = 0;
  *(undefined ***)this = &_vftable__for__UMovieSceneDecorationContainerObject__;
  *(undefined ***)&this->field_0x70 = &_vftable__for__IMovieSceneTrackVirtualAPI__;
  return this;
}

// UMovieSceneVisibilityTrack @ 14689f470

UMovieSceneVisibilityTrack * __thiscall
UMovieSceneVisibilityTrack::UMovieSceneVisibilityTrack
          (UMovieSceneVisibilityTrack *this,FObjectInitializer *param_1)

{
  UMovieSceneNameableTrack::UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this,param_1);
  *(uint *)&this->field_0x78 = *(uint *)&this->field_0x78 | 0x11;
  *(undefined8 *)&this->field_0x118 = 0;
  *(undefined8 *)&this->field_0x120 = 0;
  *(undefined8 *)&this->field_0x128 = 0;
  this->field_0x130 = 0;
  *(undefined8 *)&this->field_0x138 = 0;
  *(undefined8 *)&this->field_0x140 = 0;
  *(undefined ***)this = &_vftable__for__UMovieSceneDecorationContainerObject__;
  *(undefined ***)&this->field_0x70 = &_vftable__for__IMovieSceneTrackVirtualAPI__;
  return this;
}

// ~UMovieSceneVisibilityTrack @ 1468a1190

void __thiscall
UMovieSceneVisibilityTrack::~UMovieSceneVisibilityTrack(UMovieSceneVisibilityTrack *this)

{
  *(undefined ***)this =
       &UMovieScenePropertyTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
  *(undefined ***)&this->field_0x70 =
       &UMovieScenePropertyTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
  if (*(void **)&this->field_0x138 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x138);
  }
  UMovieSceneNameableTrack::~UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this);
  return;
}

// CreateNewSection @ 1468af590

UMovieSceneSection * __thiscall
UMovieSceneVisibilityTrack::CreateNewSection(UMovieSceneVisibilityTrack *this)

{
  UMovieSceneVisibilitySection *pUVar1;
  
  pUVar1 = NewObject<UMovieSceneVisibilitySection>
                     ((UObject *)this,(FName)0x0,RF_Transactional,(UObject *)0x0,false,
                      (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
  return (UMovieSceneSection *)pUVar1;
}

// GetPrivateStaticClass @ 1468b8930

UClass * __cdecl UMovieSceneVisibilityTrack::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneVisibilityTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneVisibilityTrack",
               &Z_Registration_Info_UClass_UMovieSceneVisibilityTrack.InnerSingleton,
               StaticRegisterNativesUMovieSceneVisibilityTrack,0x148,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneVisibilityTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneVisibilityTrack>,local_res8,
               UMovieScenePropertyTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneVisibilityTrack.InnerSingleton;
}

// PostLoad @ 1468c5e70

void __thiscall UMovieSceneVisibilityTrack::PostLoad(UMovieSceneVisibilityTrack *this)

{
  UObject *this_00;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  UClass *pUVar6;
  UMovieSceneVisibilitySection *pUVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ForAnyElementType local_198;
  undefined8 local_190;
  FArchiveState local_188;
  undefined8 local_f8;
  ForAnyElementType *local_f0;
  undefined8 local_e8;
  FArchiveState local_e0;
  undefined8 local_50;
  ForAnyElementType *local_48;
  
  bVar4 = false;
  uVar9 = 0;
  local_198.Data = (FScriptContainerElement *)0x0;
  local_190 = 0;
  uVar10 = uVar9;
  if (0 < *(int *)&this->field_0x140) {
    do {
      uVar8 = (uint)uVar9;
      uVar5 = 0;
      if ((int)uVar8 < *(int *)&this->field_0x140) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      this_00 = *(UObject **)(uVar10 + *(longlong *)&this->field_0x138);
      if ((this_00 != (UObject *)0x0) &&
         (pUVar6 = Z_Construct_UClass_UMovieSceneBoolSection_NoRegister(),
         *(UClass **)&this_00->field_0x10 == pUVar6)) {
        UObject::ConditionalPostLoad(this_00);
        lVar1 = local_190;
        uVar5 = local_190._4_4_;
        local_190 = (ulonglong)local_190._4_4_ << 0x20;
        if ((lVar1 < 0) && (uVar5 != 0)) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,0,&local_198,0,(int *)((longlong)&local_190 + 4));
        }
        local_188._padding_ = 0;
        local_188.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
        local_188.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
        local_188.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
        local_188.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
        local_188._40_8_ = 0;
        local_188.ArSerializingDefaults = 0;
        local_188.ArPortFlags = 0;
        local_188.ArMaxSerializeSize = 0;
        local_188.ArUEVer.FileVersionUE4 = 0;
        local_188.ArUEVer.FileVersionUE5 = 0;
        local_188.ArLicenseeUEVer = 0;
        local_188.ArEngineVer.Major = 0;
        local_188.ArEngineVer.Minor = 0;
        local_188.ArEngineVer.Patch = 0;
        local_188.ArEngineVer._6_2_ = 0;
        local_188.ArEngineVer.Changelist = 0;
        local_188.CustomVersionContainer = (FCustomVersionContainer *)0x0;
        local_188.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
        local_188.SavePackageData = (FArchiveSavePackageData *)0x0;
        local_188.SerializedProperty = (FProperty *)0x0;
        local_188.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
        local_188.bCustomVersionsAreReset = false;
        local_188._129_7_ = 0;
        local_188.NextProxy = (FArchiveState *)0x0;
        FArchiveState::FArchiveState(&local_188);
        local_f8 = 0;
        local_188._padding_ =
             (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
        local_f0 = &local_198;
        local_e8 = 0;
        FArchiveState::SetIsSaving(&local_188,true);
        (**(code **)(local_188._padding_ + 0x108))(&local_188,0);
        local_188.ArIgnoreClassRef = '\0';
        local_188.ArNoDelta = '\0';
        local_188.ArIgnoreArchetypeRef = '\0';
        local_188._padding_ = (longlong)&___7FObjectWriter__6B_;
        (**(code **)(*(longlong *)this_00 + 200))(this_00,&local_188);
        FArchive::~FArchive((FArchive *)&local_188);
        pUVar7 = NewObject<UMovieSceneVisibilitySection>
                           ((UObject *)this,(FName)0x0,RF_Transactional,(UObject *)0x0,false,
                            (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
        local_e0._padding_ = 0;
        local_e0.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
        *(undefined2 *)&pUVar7->field_0x198 = 0;
        local_e0.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
        local_e0.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
        local_e0.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
        local_e0._40_8_ = 0;
        local_e0.ArSerializingDefaults = 0;
        local_e0.ArPortFlags = 0;
        local_e0.ArMaxSerializeSize = 0;
        local_e0.ArUEVer.FileVersionUE4 = 0;
        local_e0.ArUEVer.FileVersionUE5 = 0;
        local_e0.ArLicenseeUEVer = 0;
        local_e0.ArEngineVer.Major = 0;
        local_e0.ArEngineVer.Minor = 0;
        local_e0.ArEngineVer.Patch = 0;
        local_e0.ArEngineVer._6_2_ = 0;
        local_e0.ArEngineVer.Changelist = 0;
        local_e0.CustomVersionContainer = (FCustomVersionContainer *)0x0;
        local_e0.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
        local_e0.SavePackageData = (FArchiveSavePackageData *)0x0;
        local_e0.SerializedProperty = (FProperty *)0x0;
        local_e0.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
        local_e0.bCustomVersionsAreReset = false;
        local_e0._129_7_ = 0;
        local_e0.NextProxy = (FArchiveState *)0x0;
        FArchiveState::FArchiveState(&local_e0);
        local_50 = 0;
        local_e0._padding_ = (longlong)&___7FObjectReader__6B_;
        local_48 = &local_198;
        FArchiveState::SetIsLoading(&local_e0,true);
        (**(code **)(local_e0._padding_ + 0x108))(&local_e0,0);
        local_e0.ArIgnoreClassRef = '\0';
        local_e0.ArIgnoreArchetypeRef = '\0';
        (**(code **)(*(longlong *)pUVar7 + 200))(pUVar7,&local_e0);
        FArchive::~FArchive((FArchive *)&local_e0);
        uVar5 = 0;
        if ((int)uVar8 < *(int *)&this->field_0x140) {
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
        lVar1 = *(longlong *)&this->field_0x138;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar7);
        }
        *(UMovieSceneVisibilitySection **)(lVar1 + uVar10) = pUVar7;
        bVar4 = true;
      }
      uVar9 = (ulonglong)(uVar8 + 1);
      uVar10 = uVar10 + 8;
    } while ((int)(uVar8 + 1) < *(int *)&this->field_0x140);
    if (bVar4) {
      UMovieSceneTrack::ForceUpdateEvaluationTree((UMovieSceneTrack *)this);
    }
  }
  UMovieSceneTrack::PostLoad((UMovieSceneTrack *)this);
  if (local_198.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.Data);
  }
  return;
}

// Serialize @ 1468cdc00

void __thiscall
UMovieSceneVisibilityTrack::Serialize(UMovieSceneVisibilityTrack *this,FArchive *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UClass *pUVar5;
  uint uVar6;
  longlong lVar7;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FMovieSceneEvaluationCustomVersion::GUID);
  UMovieSceneDecorationContainerObject::Serialize
            ((UMovieSceneDecorationContainerObject *)this,param_1);
  if (((param_1->field_0x28 & 1) != 0) && (uVar6 = 0, 0 < *(int *)&this->field_0x140)) {
    lVar7 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < *(int *)&this->field_0x140) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar1 = *(longlong *)(lVar7 + *(longlong *)&this->field_0x138);
      if ((lVar1 != 0) &&
         (pUVar5 = Z_Construct_UClass_UMovieSceneBoolSection_NoRegister(),
         *(UClass **)(lVar1 + 0x10) == pUVar5)) {
        (**(code **)(*(longlong *)param_1 + 0x1b0))(param_1,lVar1);
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 8;
    } while ((int)uVar6 < *(int *)&this->field_0x140);
  }
  return;
}

// Serialize @ 1468cdd10

void __thiscall
UMovieSceneVisibilityTrack::Serialize
          (UMovieSceneVisibilityTrack *this,FStructuredArchiveRecord param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FArchive *pFVar5;
  UClass *pUVar6;
  uint uVar7;
  longlong lVar8;
  FSlotBase local_res10;
  
  local_res10.StructuredArchive = (FStructuredArchive *)param_1;
  pFVar5 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res10);
  (**(code **)(*(longlong *)pFVar5 + 0x230))(pFVar5,&FMovieSceneEvaluationCustomVersion::GUID);
  UMovieSceneDecorationContainerObject::Serialize
            ((UMovieSceneDecorationContainerObject *)this,pFVar5);
  if (((pFVar5->field_0x28 & 1) != 0) && (uVar7 = 0, 0 < *(int *)&this->field_0x140)) {
    lVar8 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar7 < *(int *)&this->field_0x140) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar1 = *(longlong *)(lVar8 + *(longlong *)&this->field_0x138);
      if ((lVar1 != 0) &&
         (pUVar6 = Z_Construct_UClass_UMovieSceneBoolSection_NoRegister(),
         *(UClass **)(lVar1 + 0x10) == pUVar6)) {
        (**(code **)(*(longlong *)pFVar5 + 0x1b0))(pFVar5,lVar1);
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 8;
    } while ((int)uVar7 < *(int *)&this->field_0x140);
  }
  return;
}

// StaticRegisterNativesUMovieSceneVisibilityTrack @ 1468d02b0

void __cdecl UMovieSceneVisibilityTrack::StaticRegisterNativesUMovieSceneVisibilityTrack(void)

{
  return;
}

// SupportsType @ 1468d1e50

bool __thiscall
UMovieSceneVisibilityTrack::SupportsType
          (UMovieSceneVisibilityTrack *this,TSubclassOf<UMovieSceneSection> param_1)

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
        goto LAB_1468d1e9a;
      }
    }
  }
  pUVar4 = (UClass *)0x0;
LAB_1468d1e9a:
  pUVar5 = Z_Construct_UClass_UMovieSceneVisibilitySection_NoRegister();
  return pUVar4 == pUVar5;
}

