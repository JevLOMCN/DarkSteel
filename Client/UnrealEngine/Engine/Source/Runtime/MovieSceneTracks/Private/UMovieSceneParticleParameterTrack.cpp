// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 20

// StaticClass @ 14687d590

UClass * __cdecl UMovieSceneParticleParameterTrack::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneParticleParameterTrack.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneParticleParameterTrack",
               &Z_Registration_Info_UClass_UMovieSceneParticleParameterTrack.InnerSingleton,
               StaticRegisterNativesUMovieSceneParticleParameterTrack,0x130,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneParticleParameterTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneParticleParameterTrack>,local_res8,
               UMovieSceneNameableTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneParticleParameterTrack.InnerSingleton;
}

// UMovieSceneParticleParameterTrack @ 14689ea60

UMovieSceneParticleParameterTrack * __thiscall
UMovieSceneParticleParameterTrack::UMovieSceneParticleParameterTrack
          (UMovieSceneParticleParameterTrack *this,FVTableHelper *param_1)

{
  UMovieSceneNameableTrack::UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  this->_padding_ = (longlong)&___7UMovieSceneParticleParameterTrack__6B_;
  (this->Sections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Sections).ArrayNum = 0;
  (this->Sections).ArrayMax = 0;
  return this;
}

// UMovieSceneParticleParameterTrack @ 14689eab0

UMovieSceneParticleParameterTrack * __thiscall
UMovieSceneParticleParameterTrack::UMovieSceneParticleParameterTrack
          (UMovieSceneParticleParameterTrack *this,FObjectInitializer *param_1)

{
  UMovieSceneNameableTrack::UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  this->_padding_ = (longlong)&___7UMovieSceneParticleParameterTrack__6B_;
  (this->Sections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Sections).ArrayNum = 0;
  (this->Sections).ArrayMax = 0;
  return this;
}

// ~UMovieSceneParticleParameterTrack @ 1468a0dc0

void __thiscall
UMovieSceneParticleParameterTrack::~UMovieSceneParticleParameterTrack
          (UMovieSceneParticleParameterTrack *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  this->_padding_ = (longlong)&___7UMovieSceneParticleParameterTrack__6B_;
  pFVar1 = (this->Sections).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IMovieSceneTrackTemplateProducer__6B_;
  UMovieSceneNameableTrack::~UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this);
  return;
}

// AddColorParameterKey @ 1468a5e90

void __thiscall
UMovieSceneParticleParameterTrack::AddColorParameterKey
          (UMovieSceneParticleParameterTrack *this,FName param_1,FFrameNumber param_2,
          FLinearColor *param_3,EMovieSceneKeyInterpolation param_4)

{
  int *piVar1;
  TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UMovieSceneParameterSection *this_00;
  UClass *pUVar7;
  UObject *pUVar8;
  UMovieSceneParameterSection *local_68 [2];
  FScriptContainerElement *local_58;
  int iStack_50;
  undefined4 uStack_4c;
  TArrayView<UMovieSceneSection_*_const,int> local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  FLinearColor_u_0 local_28;
  
  pTVar2 = &this->Sections;
  local_58 = (pTVar2->AllocatorInstance).Data;
  iVar6 = (this->Sections).ArrayNum;
  if (iVar6 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_48._12_4_ = uStack_4c;
  local_48.ArrayNum = iVar6;
  local_48.DataPtr = (UMovieSceneSection **)local_58;
  iStack_50 = iVar6;
  this_00 = (UMovieSceneParameterSection *)
            MovieSceneHelpers::FindNearestSectionAtTime(&local_48,param_2,-1);
  if (this_00 != (UMovieSceneParameterSection *)0x0) {
    pUVar7 = Z_Construct_UClass_UMovieSceneParameterSection_NoRegister();
    iVar6 = (int)pUVar7->_padding_;
    if ((iVar6 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar6 * 8)
        == &pUVar7->_padding_)) goto LAB_1468a60b8;
  }
  this_00 = (UMovieSceneParameterSection *)(**(code **)(this->_padding_ + 0x358))(this);
  if (this_00 == (UMovieSceneParameterSection *)0x0) {
LAB_1468a5f84:
    this_00 = (UMovieSceneParameterSection *)0x0;
  }
  else {
    pUVar7 = Z_Construct_UClass_UMovieSceneParameterSection_NoRegister();
    iVar6 = (int)pUVar7->_padding_;
    if ((*(int *)(this_00->_padding_ + 0x38) < iVar6) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar6 * 8)
        != &pUVar7->_padding_)) goto LAB_1468a5f84;
  }
  pUVar7 = Z_Construct_UClass_UMovieScene_NoRegister();
  pUVar8 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar7);
  if (pUVar8 == (UObject *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("MovieScene",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Tracks\\MovieSceneParticleParameterTrack.cpp"
                       ,0x79,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_38 = *(undefined4 *)&pUVar8[7].field_0x10;
  uStack_34 = *(undefined4 *)&pUVar8[7].field_0x14;
  uStack_30 = *(undefined4 *)&pUVar8[7].field_0x18;
  uStack_2c = *(undefined4 *)&pUVar8[7].field_0x1c;
  (**(code **)(this_00->_padding_ + 0x2c8))(this_00,&local_38);
  local_68[0] = this_00;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)local_68) &&
     ((FScriptContainerElement *)local_68 < pFVar3 + (longlong)(this->Sections).ArrayMax * 8)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->Sections).ArrayNum;
  piVar1 = &(this->Sections).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->Sections).ArrayNum = iVar6 + 1;
  *(UMovieSceneParameterSection **)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 8) =
       local_68[0];
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_68[0] != (UMovieSceneParameterSection *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_68[0]);
  }
LAB_1468a60b8:
  local_28._0_8_ = *(undefined8 *)&param_3->field0_0x0;
  local_28._8_8_ = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8);
  UMovieSceneParameterSection::AddColorParameterKey
            (this_00,param_1,param_2,(FLinearColor *)&local_28._s_0,param_4);
  return;
}

// AddScalarParameterKey @ 1468a81b0

void __thiscall
UMovieSceneParticleParameterTrack::AddScalarParameterKey
          (UMovieSceneParticleParameterTrack *this,FName param_1,FFrameNumber param_2,float param_3,
          EMovieSceneKeyInterpolation param_4)

{
  int *piVar1;
  TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UMovieSceneParameterSection *this_00;
  UClass *pUVar7;
  UObject *pUVar8;
  UMovieSceneParameterSection *local_68 [2];
  FScriptContainerElement *local_58;
  int iStack_50;
  undefined4 uStack_4c;
  TArrayView<UMovieSceneSection_*_const,int> local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pTVar2 = &this->Sections;
  local_58 = (pTVar2->AllocatorInstance).Data;
  iVar6 = (this->Sections).ArrayNum;
  if (iVar6 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_48._12_4_ = uStack_4c;
  local_48.ArrayNum = iVar6;
  local_48.DataPtr = (UMovieSceneSection **)local_58;
  iStack_50 = iVar6;
  this_00 = (UMovieSceneParameterSection *)
            MovieSceneHelpers::FindNearestSectionAtTime(&local_48,param_2,-1);
  if (this_00 != (UMovieSceneParameterSection *)0x0) {
    pUVar7 = Z_Construct_UClass_UMovieSceneParameterSection_NoRegister();
    iVar6 = (int)pUVar7->_padding_;
    if ((iVar6 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar6 * 8)
        == &pUVar7->_padding_)) goto LAB_1468a83da;
  }
  this_00 = (UMovieSceneParameterSection *)(**(code **)(this->_padding_ + 0x358))(this);
  if (this_00 == (UMovieSceneParameterSection *)0x0) {
LAB_1468a82a6:
    this_00 = (UMovieSceneParameterSection *)0x0;
  }
  else {
    pUVar7 = Z_Construct_UClass_UMovieSceneParameterSection_NoRegister();
    iVar6 = (int)pUVar7->_padding_;
    if ((*(int *)(this_00->_padding_ + 0x38) < iVar6) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar6 * 8)
        != &pUVar7->_padding_)) goto LAB_1468a82a6;
  }
  pUVar7 = Z_Construct_UClass_UMovieScene_NoRegister();
  pUVar8 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar7);
  if (pUVar8 == (UObject *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("MovieScene",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Tracks\\MovieSceneParticleParameterTrack.cpp"
                       ,0x57,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_38 = *(undefined4 *)&pUVar8[7].field_0x10;
  uStack_34 = *(undefined4 *)&pUVar8[7].field_0x14;
  uStack_30 = *(undefined4 *)&pUVar8[7].field_0x18;
  uStack_2c = *(undefined4 *)&pUVar8[7].field_0x1c;
  (**(code **)(this_00->_padding_ + 0x2c8))(this_00,&local_38);
  local_68[0] = this_00;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)local_68) &&
     ((FScriptContainerElement *)local_68 < pFVar3 + (longlong)(this->Sections).ArrayMax * 8)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->Sections).ArrayNum;
  piVar1 = &(this->Sections).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->Sections).ArrayNum = iVar6 + 1;
  *(UMovieSceneParameterSection **)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 8) =
       local_68[0];
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_68[0] != (UMovieSceneParameterSection *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_68[0]);
  }
LAB_1468a83da:
  UMovieSceneParameterSection::AddScalarParameterKey(this_00,param_1,param_2,param_3,param_4);
  return;
}

// AddSection @ 1468a9260

void __thiscall
UMovieSceneParticleParameterTrack::AddSection
          (UMovieSceneParticleParameterTrack *this,UMovieSceneSection *param_1)

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

// AddVectorParameterKey @ 1468aa210

void __thiscall
UMovieSceneParticleParameterTrack::AddVectorParameterKey
          (UMovieSceneParticleParameterTrack *this,FName param_1,FFrameNumber param_2,
          TVector<double> *param_3,EMovieSceneKeyInterpolation param_4)

{
  int *piVar1;
  TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UMovieSceneParameterSection *this_00;
  UClass *pUVar7;
  UObject *pUVar8;
  UMovieSceneParameterSection *local_78 [2];
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TArrayView<UMovieSceneSection_*_const,int> local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  TVector<double>_u_0 local_38;
  
  pTVar2 = &this->Sections;
  local_68 = (pTVar2->AllocatorInstance).Data;
  iVar6 = (this->Sections).ArrayNum;
  if (iVar6 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_58._12_4_ = uStack_5c;
  local_58.ArrayNum = iVar6;
  local_58.DataPtr = (UMovieSceneSection **)local_68;
  iStack_60 = iVar6;
  this_00 = (UMovieSceneParameterSection *)
            MovieSceneHelpers::FindNearestSectionAtTime(&local_58,param_2,-1);
  if (this_00 != (UMovieSceneParameterSection *)0x0) {
    pUVar7 = Z_Construct_UClass_UMovieSceneParameterSection_NoRegister();
    iVar6 = (int)pUVar7->_padding_;
    if ((iVar6 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar6 * 8)
        == &pUVar7->_padding_)) goto LAB_1468aa438;
  }
  this_00 = (UMovieSceneParameterSection *)(**(code **)(this->_padding_ + 0x358))(this);
  if (this_00 == (UMovieSceneParameterSection *)0x0) {
LAB_1468aa304:
    this_00 = (UMovieSceneParameterSection *)0x0;
  }
  else {
    pUVar7 = Z_Construct_UClass_UMovieSceneParameterSection_NoRegister();
    iVar6 = (int)pUVar7->_padding_;
    if ((*(int *)(this_00->_padding_ + 0x38) < iVar6) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar6 * 8)
        != &pUVar7->_padding_)) goto LAB_1468aa304;
  }
  pUVar7 = Z_Construct_UClass_UMovieScene_NoRegister();
  pUVar8 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar7);
  if (pUVar8 == (UObject *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("MovieScene",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Tracks\\MovieSceneParticleParameterTrack.cpp"
                       ,0x68,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_48 = *(undefined4 *)&pUVar8[7].field_0x10;
  uStack_44 = *(undefined4 *)&pUVar8[7].field_0x14;
  uStack_40 = *(undefined4 *)&pUVar8[7].field_0x18;
  uStack_3c = *(undefined4 *)&pUVar8[7].field_0x1c;
  (**(code **)(this_00->_padding_ + 0x2c8))(this_00,&local_48);
  local_78[0] = this_00;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)local_78) &&
     ((FScriptContainerElement *)local_78 < pFVar3 + (longlong)(this->Sections).ArrayMax * 8)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->Sections).ArrayNum;
  piVar1 = &(this->Sections).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->Sections).ArrayNum = iVar6 + 1;
  *(UMovieSceneParameterSection **)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 8) =
       local_78[0];
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_78[0] != (UMovieSceneParameterSection *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_78[0]);
  }
LAB_1468aa438:
  local_38._s_0.X = (param_3->field0_0x0)._s_0.X;
  local_38._s_0.Y = (param_3->field0_0x0)._s_0.Y;
  local_38._s_0.Z = (param_3->field0_0x0)._s_0.Z;
  UMovieSceneParameterSection::AddVectorParameterKey
            (this_00,param_1,param_2,(TVector<double> *)&local_38._s_0,param_4);
  return;
}

// CreateNewSection @ 1468aefd0

UMovieSceneSection * __thiscall
UMovieSceneParticleParameterTrack::CreateNewSection(UMovieSceneParticleParameterTrack *this)

{
  UMovieSceneParameterSection *pUVar1;
  
  pUVar1 = NewObject<UMovieSceneParameterSection>
                     ((UObject *)this,(FName)0x0,RF_Transactional,(UObject *)0x0,false,
                      (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
  return (UMovieSceneSection *)pUVar1;
}

// CreateTemplateForSection @ 1468afb00

FMovieSceneEvalTemplatePtr * __thiscall
UMovieSceneParticleParameterTrack::CreateTemplateForSection
          (UMovieSceneParticleParameterTrack *this,
          FMovieSceneEvalTemplatePtr *__return_storage_ptr__,UMovieSceneSection *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FMovieSceneParticleParameterSectionTemplate *pFVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_a8;
  FString local_98;
  FMovieSceneParameterSectionTemplate local_88;
  
  if (param_1 == (UMovieSceneSection *)0x0) {
    pFVar4 = GetTypeName<UMovieSceneParameterSection>(&local_a8);
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar5);
  }
  pUVar2 = Z_Construct_UClass_UMovieSceneParameterSection_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    pFVar3 = FMovieSceneParticleParameterSectionTemplate::
             FMovieSceneParticleParameterSectionTemplate
                       ((FMovieSceneParticleParameterSectionTemplate *)&local_88,
                        (UMovieSceneParameterSection *)param_1,
                        (UMovieSceneParticleParameterTrack *)&this[-1]._padding_);
    __return_storage_ptr__->field_0x80 = __return_storage_ptr__->field_0x80 & 0xfe;
    TInlineValue<FMovieSceneEvalTemplate,128,8>::
    InitializeFrom<FMovieSceneParticleParameterSectionTemplate,FMovieSceneParticleParameterSectionTemplate>
              ((TInlineValue<FMovieSceneEvalTemplate,128,8> *)__return_storage_ptr__,pFVar3);
    FMovieSceneParameterSectionTemplate::~FMovieSceneParameterSectionTemplate(&local_88);
    return __return_storage_ptr__;
  }
  pFVar4 = GetTypeName<UMovieSceneParameterSection>(&local_a8);
  pwVar5 = L"";
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  pFVar4 = GetFullNameForCastLogError<UMovieSceneSection_const_>(&local_98,param_1);
  if ((pFVar4->Data).ArrayNum != 0) {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar5,pwVar6);
}

// GetAllSections @ 1468b5780

TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> * __thiscall
UMovieSceneParticleParameterTrack::GetAllSections(UMovieSceneParticleParameterTrack *this)

{
  return (TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> *)&this->Sections;
}

// GetPrivateStaticClass @ 1468b7f70

UClass * __cdecl UMovieSceneParticleParameterTrack::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneParticleParameterTrack.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneParticleParameterTrack",
               &Z_Registration_Info_UClass_UMovieSceneParticleParameterTrack.InnerSingleton,
               StaticRegisterNativesUMovieSceneParticleParameterTrack,0x130,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneParticleParameterTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneParticleParameterTrack>,local_res8,
               UMovieSceneNameableTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneParticleParameterTrack.InnerSingleton;
}

// HasSection @ 1468ba9f0

bool __thiscall
UMovieSceneParticleParameterTrack::HasSection
          (UMovieSceneParticleParameterTrack *this,UMovieSceneSection *param_1)

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

// IsEmpty @ 1468bc870

bool __thiscall UMovieSceneParticleParameterTrack::IsEmpty(UMovieSceneParticleParameterTrack *this)

{
  return (this->Sections).ArrayNum == 0;
}

// RemoveAllAnimationData @ 1468c8fe0

void __thiscall
UMovieSceneParticleParameterTrack::RemoveAllAnimationData(UMovieSceneParticleParameterTrack *this)

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

// RemoveSection @ 1468c9f80

void __thiscall
UMovieSceneParticleParameterTrack::RemoveSection
          (UMovieSceneParticleParameterTrack *this,UMovieSceneSection *param_1)

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

// RemoveSectionAt @ 1468ca860

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UMovieSceneParticleParameterTrack::RemoveSectionAt
          (UMovieSceneParticleParameterTrack *this,int param_1)

{
  TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_>::RemoveAt
            ((TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_> *)&this->_padding_,
             param_1,Default);
  return;
}

// StaticRegisterNativesUMovieSceneParticleParameterTrack @ 1468d01b0

void __cdecl
UMovieSceneParticleParameterTrack::StaticRegisterNativesUMovieSceneParticleParameterTrack(void)

{
  return;
}

// SupportsType @ 1468d1ad0

bool __thiscall
UMovieSceneParticleParameterTrack::SupportsType
          (UMovieSceneParticleParameterTrack *this,TSubclassOf<UMovieSceneSection> param_1)

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
        goto LAB_1468d1b1a;
      }
    }
  }
  pUVar4 = (UClass *)0x0;
LAB_1468d1b1a:
  pUVar5 = Z_Construct_UClass_UMovieSceneParameterSection_NoRegister();
  return pUVar4 == pUVar5;
}

// _getUObject @ 1468d55f0

UObject * __thiscall
UMovieSceneParticleParameterTrack::_getUObject(UMovieSceneParticleParameterTrack *this)

{
  return (UObject *)&this[-1]._padding_;
}

