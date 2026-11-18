// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 11

// StaticClass @ 1465923a0

UClass * __cdecl UMovieScene3DConstraintSection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieScene3DConstraintSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieScene3DConstraintSection",
               &Z_Registration_Info_UClass_UMovieScene3DConstraintSection.InnerSingleton,
               StaticRegisterNativesUMovieScene3DConstraintSection,0x138,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieScene3DConstraintSection>,
               InternalVTableHelperCtorCaller<UMovieScene3DConstraintSection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieScene3DConstraintSection.InnerSingleton;
}

// UMovieScene3DConstraintSection @ 146618d70

UMovieScene3DConstraintSection * __thiscall
UMovieScene3DConstraintSection::UMovieScene3DConstraintSection
          (UMovieScene3DConstraintSection *this,FVTableHelper *param_1)

{
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieScene3DConstraintSection__6B_;
  (this->ConstraintId_DEPRECATED).A = 0;
  (this->ConstraintId_DEPRECATED).B = 0;
  (this->ConstraintId_DEPRECATED).C = 0;
  (this->ConstraintId_DEPRECATED).D = 0;
  (this->ConstraintBindingID).Guid.A = 0;
  (this->ConstraintBindingID).Guid.B = 0;
  (this->ConstraintBindingID).Guid.C = 0;
  (this->ConstraintBindingID).Guid.D = 0;
  (this->ConstraintBindingID).SequenceID = 0;
  (this->ConstraintBindingID).ResolveParentIndex = -1;
  return this;
}

// UMovieScene3DConstraintSection @ 146618dd0

UMovieScene3DConstraintSection * __thiscall
UMovieScene3DConstraintSection::UMovieScene3DConstraintSection
          (UMovieScene3DConstraintSection *this,FObjectInitializer *param_1)

{
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7UMovieScene3DConstraintSection__6B_;
  (this->ConstraintId_DEPRECATED).A = 0;
  (this->ConstraintId_DEPRECATED).B = 0;
  (this->ConstraintId_DEPRECATED).C = 0;
  (this->ConstraintId_DEPRECATED).D = 0;
  (this->ConstraintBindingID).Guid.A = 0;
  (this->ConstraintBindingID).Guid.B = 0;
  (this->ConstraintBindingID).Guid.C = 0;
  (this->ConstraintBindingID).Guid.D = 0;
  (this->ConstraintBindingID).SequenceID = 0;
  (this->ConstraintBindingID).ResolveParentIndex = -1;
  return this;
}

// ~UMovieScene3DConstraintSection @ 1466214a0

void __thiscall
UMovieScene3DConstraintSection::~UMovieScene3DConstraintSection
          (UMovieScene3DConstraintSection *this)

{
  this->_padding_ = (longlong)&___7UMovieScene3DConstraintSection__6B_;
  UMovieSceneSection::~UMovieSceneSection((UMovieSceneSection *)this);
  return;
}

// GetPrivateStaticClass @ 146695f80

UClass * __cdecl UMovieScene3DConstraintSection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieScene3DConstraintSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieScene3DConstraintSection",
               &Z_Registration_Info_UClass_UMovieScene3DConstraintSection.InnerSingleton,
               StaticRegisterNativesUMovieScene3DConstraintSection,0x138,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieScene3DConstraintSection>,
               InternalVTableHelperCtorCaller<UMovieScene3DConstraintSection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieScene3DConstraintSection.InnerSingleton;
}

// GetReferencedBindings @ 146697050

void __thiscall
UMovieScene3DConstraintSection::GetReferencedBindings
          (UMovieScene3DConstraintSection *this,TArray<FGuid,TSizedDefaultAllocator<32>_> *param_1)

{
  FMovieSceneObjectBindingID *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  
  pFVar1 = &this->ConstraintBindingID;
  pFVar2 = (param_1->AllocatorInstance).Data;
  if ((pFVar2 <= pFVar1) && (pFVar1 < pFVar2 + (longlong)param_1->ArrayMax * 0x10)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar6 = param_1->ArrayNum;
  if (iVar6 == param_1->ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar6 + 1;
  uVar4 = *(undefined8 *)&(this->ConstraintBindingID).Guid.C;
  pFVar2 = (param_1->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
  *(undefined8 *)pFVar2 = *(undefined8 *)&pFVar1->Guid;
  *(undefined8 *)(pFVar2 + 8) = uVar4;
  return;
}

// OnBindingIDsUpdated @ 1466a8900

void __thiscall
UMovieScene3DConstraintSection::OnBindingIDsUpdated
          (UMovieScene3DConstraintSection *this,
          TMap<UE::MovieScene::FFixedObjectBindingID,UE::MovieScene::FFixedObjectBindingID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FFixedObjectBindingID,UE::MovieScene::FFixedObjectBindingID,0>_>
          *param_1,FMovieSceneSequenceID param_2,
          TSharedRef<UE::MovieScene::FSharedPlaybackState,1> *param_3)

{
  FMovieSceneObjectBindingID *this_00;
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  FMovieSceneSequenceID FVar5;
  bool bVar6;
  int iVar7;
  ulong64 uVar8;
  FMovieSceneSequenceHierarchy *pFVar9;
  FRelativeObjectBindingID *pFVar10;
  longlong lVar11;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_68;
  uint local_58;
  int iStack_54;
  FFixedObjectBindingID local_50;
  FRelativeObjectBindingID local_38;
  
  local_68.Object = param_3->Object;
  local_68.SharedReferenceCount.ReferenceController =
       (param_3->SharedReferenceCount).ReferenceController;
  if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = &this->ConstraintBindingID;
  FMovieSceneObjectBindingID::ResolveToFixed(this_00,&local_50,param_2,&local_68);
  uVar8 = CityHash64((char *)&local_50,0x10);
  iVar7 = TSet<TTuple<UE::MovieScene::FFixedObjectBindingID,UE::MovieScene::FFixedObjectBindingID>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FFixedObjectBindingID,UE::MovieScene::FFixedObjectBindingID,0>,FDefaultSetAllocator>
          ::FindIndexByHash<UE::MovieScene::FFixedObjectBindingID>
                    ((TSet<TTuple<UE::MovieScene::FFixedObjectBindingID,UE::MovieScene::FFixedObjectBindingID>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FFixedObjectBindingID,UE::MovieScene::FFixedObjectBindingID,0>,FDefaultSetAllocator>
                      *)param_1,(uint)uVar8 ^ local_50.SequenceID.Value,&local_50);
  if (iVar7 == -1) goto LAB_1466a8a35;
  pFVar9 = UE::MovieScene::FSharedPlaybackState::GetHierarchy(param_3->Object);
  uVar8 = CityHash64((char *)&local_50,0x10);
  iVar7 = TSet<TTuple<UE::MovieScene::FFixedObjectBindingID,UE::MovieScene::FFixedObjectBindingID>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FFixedObjectBindingID,UE::MovieScene::FFixedObjectBindingID,0>,FDefaultSetAllocator>
          ::FindIndexByHash<UE::MovieScene::FFixedObjectBindingID>
                    ((TSet<TTuple<UE::MovieScene::FFixedObjectBindingID,UE::MovieScene::FFixedObjectBindingID>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FFixedObjectBindingID,UE::MovieScene::FFixedObjectBindingID,0>,FDefaultSetAllocator>
                      *)param_1,(uint)uVar8 ^ local_50.SequenceID.Value,&local_50);
  if (iVar7 == -1) {
    lVar11 = 0;
LAB_1466a89ca:
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x27b,L"");
    if (bVar6) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    lVar11 = (longlong)iVar7 * 0x30 + *(longlong *)param_1;
    if (lVar11 == 0) goto LAB_1466a89ca;
  }
  pFVar10 = UE::MovieScene::FFixedObjectBindingID::ConvertToRelative
                      ((FFixedObjectBindingID *)(lVar11 + 0x14),&local_38,param_2,pFVar9);
  uVar2 = (pFVar10->Guid).B;
  uVar3 = (pFVar10->Guid).C;
  uVar4 = (pFVar10->Guid).D;
  local_58 = (pFVar10->SequenceID).Value;
  iStack_54 = pFVar10->ResolveParentIndex;
  FVar5.Value = (pFVar10->SequenceID).Value;
  iVar7 = pFVar10->ResolveParentIndex;
  (this_00->Guid).A = (pFVar10->Guid).A;
  (this_00->Guid).B = uVar2;
  (this->ConstraintBindingID).Guid.C = uVar3;
  (this->ConstraintBindingID).Guid.D = uVar4;
  (this->ConstraintBindingID).SequenceID = FVar5.Value;
  (this->ConstraintBindingID).ResolveParentIndex = iVar7;
LAB_1466a8a35:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return;
}

// PostLoad @ 1466ad0d0

void __thiscall UMovieScene3DConstraintSection::PostLoad(UMovieScene3DConstraintSection *this)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  UMovieSceneSignedObject::PostLoad((UMovieSceneSignedObject *)this);
  if ((((this->ConstraintId_DEPRECATED).C != 0 || (this->ConstraintId_DEPRECATED).D != 0) ||
      (this->ConstraintId_DEPRECATED).B != 0) || (this->ConstraintId_DEPRECATED).A != 0) {
    if ((((this->ConstraintBindingID).Guid.D == 0 && (this->ConstraintBindingID).Guid.C == 0) &&
        (this->ConstraintBindingID).Guid.B == 0) && (this->ConstraintBindingID).Guid.A == 0) {
      uVar1 = (this->ConstraintId_DEPRECATED).A;
      uVar2 = (this->ConstraintId_DEPRECATED).B;
      uVar3 = (this->ConstraintId_DEPRECATED).C;
      uVar4 = (this->ConstraintId_DEPRECATED).D;
      (this->ConstraintBindingID).SequenceID = 0;
      (this->ConstraintBindingID).ResolveParentIndex = 0;
      (this->ConstraintBindingID).Guid.A = uVar1;
      (this->ConstraintBindingID).Guid.B = uVar2;
      (this->ConstraintBindingID).Guid.C = uVar3;
      (this->ConstraintBindingID).Guid.D = uVar4;
    }
    (this->ConstraintId_DEPRECATED).C = 0;
    (this->ConstraintId_DEPRECATED).D = 0;
    (this->ConstraintId_DEPRECATED).A = 0;
    (this->ConstraintId_DEPRECATED).B = 0;
  }
  return;
}

// StaticRegisterNativesUMovieScene3DConstraintSection @ 1466fe6d0

void __cdecl
UMovieScene3DConstraintSection::StaticRegisterNativesUMovieScene3DConstraintSection(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UMovieScene3DConstraintSection_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetConstraintBindingID @ 146720d60

void __cdecl
UMovieScene3DConstraintSection::execGetConstraintBindingID
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = *(undefined8 *)&param_1[7].field_0x10;
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[7].field_0x8;
  *(undefined8 *)((longlong)param_3 + 8) = uVar1;
  *(undefined8 *)((longlong)param_3 + 0x10) = *(undefined8 *)&param_1[7].field_0x18;
  return;
}

// execSetConstraintBindingID @ 146720f70

void __cdecl
UMovieScene3DConstraintSection::execSetConstraintBindingID
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  uchar uVar13;
  uchar uVar14;
  uchar uVar15;
  uchar uVar16;
  uchar *puVar17;
  uchar local_28 [32];
  
  local_28[0x14] = 0xff;
  local_28[0x15] = 0xff;
  local_28[0x16] = 0xff;
  local_28[0x17] = 0xff;
  local_28[0] = '\0';
  local_28[1] = '\0';
  local_28[2] = '\0';
  local_28[3] = '\0';
  local_28[4] = '\0';
  local_28[5] = '\0';
  local_28[6] = '\0';
  local_28[7] = '\0';
  local_28[8] = '\0';
  local_28[9] = '\0';
  local_28[10] = '\0';
  local_28[0xb] = '\0';
  local_28[0xc] = '\0';
  local_28[0xd] = '\0';
  local_28[0xe] = '\0';
  local_28[0xf] = '\0';
  local_28[0x10] = '\0';
  local_28[0x11] = '\0';
  local_28[0x12] = '\0';
  local_28[0x13] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  puVar17 = local_28;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar17 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = puVar17[1];
  uVar3 = puVar17[2];
  uVar4 = puVar17[3];
  uVar5 = puVar17[4];
  uVar6 = puVar17[5];
  uVar7 = puVar17[6];
  uVar8 = puVar17[7];
  uVar9 = puVar17[8];
  uVar10 = puVar17[9];
  uVar11 = puVar17[10];
  uVar12 = puVar17[0xb];
  uVar13 = puVar17[0xc];
  uVar14 = puVar17[0xd];
  uVar15 = puVar17[0xe];
  uVar16 = puVar17[0xf];
  param_1[7].field_0x8 = puVar17[0];
  param_1[7].field_0x9 = uVar2;
  param_1[7].field_0xa = uVar3;
  param_1[7].field_0xb = uVar4;
  param_1[7].field_0xc = uVar5;
  param_1[7].field_0xd = uVar6;
  param_1[7].field_0xe = uVar7;
  param_1[7].field_0xf = uVar8;
  param_1[7].field_0x10 = uVar9;
  param_1[7].field_0x11 = uVar10;
  param_1[7].field_0x12 = uVar11;
  param_1[7].field_0x13 = uVar12;
  param_1[7].field_0x14 = uVar13;
  param_1[7].field_0x15 = uVar14;
  param_1[7].field_0x16 = uVar15;
  param_1[7].field_0x17 = uVar16;
  uVar2 = puVar17[0x11];
  uVar3 = puVar17[0x12];
  uVar4 = puVar17[0x13];
  uVar5 = puVar17[0x14];
  uVar6 = puVar17[0x15];
  uVar7 = puVar17[0x16];
  uVar8 = puVar17[0x17];
  param_1[7].field_0x18 = puVar17[0x10];
  param_1[7].field_0x19 = uVar2;
  param_1[7].field_0x1a = uVar3;
  param_1[7].field_0x1b = uVar4;
  param_1[7].field_0x1c = uVar5;
  param_1[7].field_0x1d = uVar6;
  param_1[7].field_0x1e = uVar7;
  param_1[7].field_0x1f = uVar8;
  return;
}

