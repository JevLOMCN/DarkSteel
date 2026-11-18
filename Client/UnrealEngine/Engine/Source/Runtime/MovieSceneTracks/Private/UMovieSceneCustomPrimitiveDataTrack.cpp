// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 31

// StaticClass @ 1468812b0

UClass * __cdecl UMovieSceneCustomPrimitiveDataTrack::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneCustomPrimitiveDataTrack.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneCustomPrimitiveDataTrack",
               &Z_Registration_Info_UClass_UMovieSceneCustomPrimitiveDataTrack.InnerSingleton,
               StaticRegisterNativesUMovieSceneCustomPrimitiveDataTrack,0x140,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneCustomPrimitiveDataTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneCustomPrimitiveDataTrack>,local_res8,
               UMovieSceneNameableTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneCustomPrimitiveDataTrack.InnerSingleton;
}

// UMovieSceneCustomPrimitiveDataTrack @ 14689d750

UMovieSceneCustomPrimitiveDataTrack * __thiscall
UMovieSceneCustomPrimitiveDataTrack::UMovieSceneCustomPrimitiveDataTrack
          (UMovieSceneCustomPrimitiveDataTrack *this,FVTableHelper *param_1)

{
  UMovieSceneNameableTrack::UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneParameterSectionExtender__;
  (this->Sections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Sections).ArrayNum = 0;
  (this->Sections).ArrayMax = 0;
  (this->SectionToKey).field0_0x0.DebugPtr = (UMovieSceneSection *)0x0;
  return this;
}

// UMovieSceneCustomPrimitiveDataTrack @ 14689d7c0

UMovieSceneCustomPrimitiveDataTrack * __thiscall
UMovieSceneCustomPrimitiveDataTrack::UMovieSceneCustomPrimitiveDataTrack
          (UMovieSceneCustomPrimitiveDataTrack *this,FObjectInitializer *param_1)

{
  UMovieSceneNameableTrack::UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneParameterSectionExtender__;
  (this->Sections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Sections).ArrayNum = 0;
  (this->Sections).ArrayMax = 0;
  (this->SectionToKey).field0_0x0.DebugPtr = (UMovieSceneSection *)0x0;
  FMovieSceneBlendTypeField::Add((FMovieSceneBlendTypeField *)&this->_padding_,Absolute);
  FMovieSceneBlendTypeField::Add((FMovieSceneBlendTypeField *)&this->_padding_,Additive);
  FMovieSceneBlendTypeField::Add((FMovieSceneBlendTypeField *)&this->_padding_,AdditiveFromBase);
  return this;
}

// ~UMovieSceneCustomPrimitiveDataTrack @ 1468a0780

void __thiscall
UMovieSceneCustomPrimitiveDataTrack::~UMovieSceneCustomPrimitiveDataTrack
          (UMovieSceneCustomPrimitiveDataTrack *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneParameterSectionExtender__;
  pFVar1 = (this->Sections).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IMovieSceneParameterSectionExtender__6B_;
  this->_padding_ = (longlong)&___7IMovieSceneEntityProvider__6B_;
  UMovieSceneNameableTrack::~UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this);
  return;
}

// AddColorParameterKey @ 1468a5560

void __thiscall
UMovieSceneCustomPrimitiveDataTrack::AddColorParameterKey
          (UMovieSceneCustomPrimitiveDataTrack *this,uchar param_1,FFrameNumber param_2,int param_3,
          FLinearColor *param_4,EMovieSceneKeyInterpolation param_5)

{
  int *piVar1;
  TObjectPtr<UMovieSceneSection>_u_0 *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TObjectPtr<UMovieSceneSection>_u_0 this_00;
  UClass *pUVar6;
  UObject *pUVar7;
  FName *pFVar8;
  TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_> *pTVar9;
  ForAnyElementType FVar10;
  FName local_res8;
  TObjectPtr<UMovieSceneSection>_u_0 local_78;
  FString local_70;
  FScriptContainerElement *local_58;
  int iStack_50;
  undefined4 uStack_4c;
  TArrayView<UMovieSceneSection_*_const,int> local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  FLinearColor_u_0 local_28;
  
  this_00 = (TObjectPtr<UMovieSceneSection>_u_0)(this->SectionToKey).field0_0x0.DebugPtr;
  if (((UMovieSceneParameterSection *)this_00.DebugPtr != (UMovieSceneParameterSection *)0x0) &&
     ((param_3 == -1 || ((int)*(longlong *)&(this_00.DebugPtr)->RowIndex == param_3))))
  goto LAB_1468a577e;
  local_58 = (this->Sections).AllocatorInstance.Data;
  iVar5 = (this->Sections).ArrayNum;
  if (iVar5 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_48._12_4_ = uStack_4c;
  local_48.ArrayNum = iVar5;
  local_48.DataPtr = (UMovieSceneSection **)local_58;
  iStack_50 = iVar5;
  this_00.DebugPtr = MovieSceneHelpers::FindNearestSectionAtTime(&local_48,param_2,param_3);
  if ((UMovieSceneParameterSection *)this_00.DebugPtr != (UMovieSceneParameterSection *)0x0)
  goto LAB_1468a577e;
  this_00.DebugPtr = (UMovieSceneSection *)(**(code **)(this->_padding_ + 0x358))(this);
  if ((UMovieSceneParameterSection *)this_00.DebugPtr == (UMovieSceneParameterSection *)0x0) {
LAB_1468a5651:
    this_00.DebugPtr = (UMovieSceneSection *)0x0;
  }
  else {
    pUVar6 = Z_Construct_UClass_UMovieSceneCustomPrimitiveDataSection_NoRegister();
    iVar5 = (int)pUVar6->_padding_;
    if ((*(int *)((this_00.DebugPtr)->_padding_ + 0x38) < iVar5) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)((this_00.DebugPtr)->_padding_ + 0x30) + (longlong)iVar5 * 8)
        != &pUVar6->_padding_)) goto LAB_1468a5651;
  }
  pUVar6 = Z_Construct_UClass_UMovieScene_NoRegister();
  pUVar7 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar6);
  if (pUVar7 == (UObject *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("MovieScene",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Tracks\\MovieSceneCustomPrimitiveDataTrack.cpp"
                       ,0xf1,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_38 = *(undefined4 *)&pUVar7[7].field_0x10;
  uStack_34 = *(undefined4 *)&pUVar7[7].field_0x14;
  uStack_30 = *(undefined4 *)&pUVar7[7].field_0x18;
  uStack_2c = *(undefined4 *)&pUVar7[7].field_0x1c;
  (**(code **)((this_00.DebugPtr)->_padding_ + 0x2c8))(this_00.DebugPtr,&local_38);
  pTVar9 = &this->Sections;
  local_78 = this_00;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this_00.DebugPtr);
  }
  pTVar2 = (TObjectPtr<UMovieSceneSection>_u_0 *)(pTVar9->AllocatorInstance).Data;
  if ((pTVar2 <= &local_78) && (&local_78 < pTVar2 + (this->Sections).ArrayMax)) {
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
  iVar5 = (this->Sections).ArrayNum;
  piVar1 = &(this->Sections).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar9->AllocatorInstance,piVar1);
  }
  (this->Sections).ArrayNum = iVar5 + 1;
  ((TObjectPtr<UMovieSceneSection>_u_0 *)((pTVar9->AllocatorInstance).Data + (longlong)iVar5 * 8))->
  DebugPtr = (UMovieSceneSection *)local_78;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UMovieSceneParameterSection *)local_78.DebugPtr != (UMovieSceneParameterSection *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_78.DebugPtr);
  }
LAB_1468a577e:
  bVar4 = UMovieSceneSection::TryModify(this_00.DebugPtr,true);
  if ((bVar4) &&
     ((UMovieSceneParameterSection *)this_00.DebugPtr != (UMovieSceneParameterSection *)0x0)) {
    pUVar6 = Z_Construct_UClass_UMovieSceneCustomPrimitiveDataSection_NoRegister();
    iVar5 = (int)pUVar6->_padding_;
    if ((iVar5 <= *(int *)((this_00.DebugPtr)->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)((this_00.DebugPtr)->_padding_ + 0x30) + (longlong)iVar5 * 8)
        == &pUVar6->_padding_)) {
      local_70.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_70.Data.ArrayNum = 0;
      local_70.Data.ArrayMax = 0;
      ::FString::AppendInt(&local_70,(uint)param_1);
      FVar10.Data = (FScriptContainerElement *)L"";
      if (local_70.Data.ArrayNum != 0) {
        FVar10.Data = local_70.Data.AllocatorInstance.Data;
      }
      pFVar8 = ::FName::FName(&local_res8,(wchar_t *)FVar10.Data);
      local_28._0_8_ = *(undefined8 *)&param_4->field0_0x0;
      local_28._8_8_ = *(undefined8 *)((longlong)&param_4->field0_0x0 + 8);
      UMovieSceneParameterSection::AddColorParameterKey
                ((UMovieSceneParameterSection *)this_00.DebugPtr,*pFVar8,param_2,
                 (FLinearColor *)&local_28._s_0,param_5);
      if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// AddColorParameterKey @ 1468a5870

void __thiscall
UMovieSceneCustomPrimitiveDataTrack::AddColorParameterKey
          (UMovieSceneCustomPrimitiveDataTrack *this,uchar param_1,FFrameNumber param_2,
          FLinearColor *param_3,EMovieSceneKeyInterpolation param_4)

{
  FLinearColor_u_0 local_18;
  
  local_18._0_8_ = *(undefined8 *)&param_3->field0_0x0;
  local_18._8_8_ = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8);
  AddColorParameterKey(this,param_1,param_2,-1,(FLinearColor *)&local_18._s_0,param_4);
  return;
}

// AddScalarParameterKey @ 1468a7a50

void __thiscall
UMovieSceneCustomPrimitiveDataTrack::AddScalarParameterKey
          (UMovieSceneCustomPrimitiveDataTrack *this,uchar param_1,FFrameNumber param_2,int param_3,
          float param_4,EMovieSceneKeyInterpolation param_5)

{
  int *piVar1;
  TObjectPtr<UMovieSceneSection>_u_0 *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TObjectPtr<UMovieSceneSection>_u_0 this_00;
  UClass *pUVar6;
  UObject *pUVar7;
  FName *pFVar8;
  TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_> *pTVar9;
  ForAnyElementType FVar10;
  FName local_res8;
  TObjectPtr<UMovieSceneSection>_u_0 local_68;
  FString local_60;
  FScriptContainerElement *local_48;
  int iStack_40;
  undefined4 uStack_3c;
  TArrayView<UMovieSceneSection_*_const,int> local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  this_00 = (TObjectPtr<UMovieSceneSection>_u_0)(this->SectionToKey).field0_0x0.DebugPtr;
  if (((UMovieSceneParameterSection *)this_00.DebugPtr != (UMovieSceneParameterSection *)0x0) &&
     ((param_3 == -1 || ((int)*(longlong *)&(this_00.DebugPtr)->RowIndex == param_3))))
  goto LAB_1468a7c6e;
  local_48 = (this->Sections).AllocatorInstance.Data;
  iVar5 = (this->Sections).ArrayNum;
  if (iVar5 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_38._12_4_ = uStack_3c;
  local_38.ArrayNum = iVar5;
  local_38.DataPtr = (UMovieSceneSection **)local_48;
  iStack_40 = iVar5;
  this_00.DebugPtr = MovieSceneHelpers::FindNearestSectionAtTime(&local_38,param_2,param_3);
  if ((UMovieSceneParameterSection *)this_00.DebugPtr != (UMovieSceneParameterSection *)0x0)
  goto LAB_1468a7c6e;
  this_00.DebugPtr = (UMovieSceneSection *)(**(code **)(this->_padding_ + 0x358))(this);
  if ((UMovieSceneParameterSection *)this_00.DebugPtr == (UMovieSceneParameterSection *)0x0) {
LAB_1468a7b41:
    this_00.DebugPtr = (UMovieSceneSection *)0x0;
  }
  else {
    pUVar6 = Z_Construct_UClass_UMovieSceneCustomPrimitiveDataSection_NoRegister();
    iVar5 = (int)pUVar6->_padding_;
    if ((*(int *)((this_00.DebugPtr)->_padding_ + 0x38) < iVar5) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)((this_00.DebugPtr)->_padding_ + 0x30) + (longlong)iVar5 * 8)
        != &pUVar6->_padding_)) goto LAB_1468a7b41;
  }
  pUVar6 = Z_Construct_UClass_UMovieScene_NoRegister();
  pUVar7 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar6);
  if (pUVar7 == (UObject *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("MovieScene",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Tracks\\MovieSceneCustomPrimitiveDataTrack.cpp"
                       ,0x94,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_28 = *(undefined4 *)&pUVar7[7].field_0x10;
  uStack_24 = *(undefined4 *)&pUVar7[7].field_0x14;
  uStack_20 = *(undefined4 *)&pUVar7[7].field_0x18;
  uStack_1c = *(undefined4 *)&pUVar7[7].field_0x1c;
  (**(code **)((this_00.DebugPtr)->_padding_ + 0x2c8))(this_00.DebugPtr,&local_28);
  pTVar9 = &this->Sections;
  local_68 = this_00;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this_00.DebugPtr);
  }
  pTVar2 = (TObjectPtr<UMovieSceneSection>_u_0 *)(pTVar9->AllocatorInstance).Data;
  if ((pTVar2 <= &local_68) && (&local_68 < pTVar2 + (this->Sections).ArrayMax)) {
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
  iVar5 = (this->Sections).ArrayNum;
  piVar1 = &(this->Sections).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar9->AllocatorInstance,piVar1);
  }
  (this->Sections).ArrayNum = iVar5 + 1;
  ((TObjectPtr<UMovieSceneSection>_u_0 *)((pTVar9->AllocatorInstance).Data + (longlong)iVar5 * 8))->
  DebugPtr = (UMovieSceneSection *)local_68;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UMovieSceneParameterSection *)local_68.DebugPtr != (UMovieSceneParameterSection *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_68.DebugPtr);
  }
LAB_1468a7c6e:
  bVar4 = UMovieSceneSection::TryModify(this_00.DebugPtr,true);
  if ((bVar4) &&
     ((UMovieSceneParameterSection *)this_00.DebugPtr != (UMovieSceneParameterSection *)0x0)) {
    pUVar6 = Z_Construct_UClass_UMovieSceneCustomPrimitiveDataSection_NoRegister();
    iVar5 = (int)pUVar6->_padding_;
    if ((iVar5 <= *(int *)((this_00.DebugPtr)->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)((this_00.DebugPtr)->_padding_ + 0x30) + (longlong)iVar5 * 8)
        == &pUVar6->_padding_)) {
      local_60.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_60.Data.ArrayNum = 0;
      local_60.Data.ArrayMax = 0;
      ::FString::AppendInt(&local_60,(uint)param_1);
      FVar10.Data = (FScriptContainerElement *)L"";
      if (local_60.Data.ArrayNum != 0) {
        FVar10.Data = local_60.Data.AllocatorInstance.Data;
      }
      pFVar8 = ::FName::FName(&local_res8,(wchar_t *)FVar10.Data);
      UMovieSceneParameterSection::AddScalarParameterKey
                ((UMovieSceneParameterSection *)this_00.DebugPtr,*pFVar8,param_2,param_4,param_5);
      if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// AddScalarParameterKey @ 1468a7d40

void __thiscall
UMovieSceneCustomPrimitiveDataTrack::AddScalarParameterKey
          (UMovieSceneCustomPrimitiveDataTrack *this,uchar param_1,FFrameNumber param_2,
          float param_3,EMovieSceneKeyInterpolation param_4)

{
  AddScalarParameterKey(this,param_1,param_2,-1,param_3,param_4);
  return;
}

// AddSection @ 1468a8d50

void __thiscall
UMovieSceneCustomPrimitiveDataTrack::AddSection
          (UMovieSceneCustomPrimitiveDataTrack *this,UMovieSceneSection *param_1)

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

// AddVector2DParameterKey @ 1468a9b50

void __thiscall
UMovieSceneCustomPrimitiveDataTrack::AddVector2DParameterKey
          (UMovieSceneCustomPrimitiveDataTrack *this,uchar param_1,FFrameNumber param_2,int param_3,
          TVector2<double> *param_4,EMovieSceneKeyInterpolation param_5)

{
  int *piVar1;
  TObjectPtr<UMovieSceneSection>_u_0 *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TObjectPtr<UMovieSceneSection>_u_0 this_00;
  UClass *pUVar6;
  UObject *pUVar7;
  FName *pFVar8;
  TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_> *pTVar9;
  ForAnyElementType FVar10;
  FName local_res8;
  TObjectPtr<UMovieSceneSection>_u_0 local_78;
  FString local_70;
  FScriptContainerElement *local_58;
  int iStack_50;
  undefined4 uStack_4c;
  TArrayView<UMovieSceneSection_*_const,int> local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  TVector2<double>_u_0 local_28;
  
  this_00 = (TObjectPtr<UMovieSceneSection>_u_0)(this->SectionToKey).field0_0x0.DebugPtr;
  if (((UMovieSceneParameterSection *)this_00.DebugPtr != (UMovieSceneParameterSection *)0x0) &&
     ((param_3 == -1 || ((int)*(longlong *)&(this_00.DebugPtr)->RowIndex == param_3))))
  goto LAB_1468a9d6e;
  local_58 = (this->Sections).AllocatorInstance.Data;
  iVar5 = (this->Sections).ArrayNum;
  if (iVar5 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_48._12_4_ = uStack_4c;
  local_48.ArrayNum = iVar5;
  local_48.DataPtr = (UMovieSceneSection **)local_58;
  iStack_50 = iVar5;
  this_00.DebugPtr = MovieSceneHelpers::FindNearestSectionAtTime(&local_48,param_2,param_3);
  if ((UMovieSceneParameterSection *)this_00.DebugPtr != (UMovieSceneParameterSection *)0x0)
  goto LAB_1468a9d6e;
  this_00.DebugPtr = (UMovieSceneSection *)(**(code **)(this->_padding_ + 0x358))(this);
  if ((UMovieSceneParameterSection *)this_00.DebugPtr == (UMovieSceneParameterSection *)0x0) {
LAB_1468a9c41:
    this_00.DebugPtr = (UMovieSceneSection *)0x0;
  }
  else {
    pUVar6 = Z_Construct_UClass_UMovieSceneCustomPrimitiveDataSection_NoRegister();
    iVar5 = (int)pUVar6->_padding_;
    if ((*(int *)((this_00.DebugPtr)->_padding_ + 0x38) < iVar5) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)((this_00.DebugPtr)->_padding_ + 0x30) + (longlong)iVar5 * 8)
        != &pUVar6->_padding_)) goto LAB_1468a9c41;
  }
  pUVar6 = Z_Construct_UClass_UMovieScene_NoRegister();
  pUVar7 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar6);
  if (pUVar7 == (UObject *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("MovieScene",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Tracks\\MovieSceneCustomPrimitiveDataTrack.cpp"
                       ,0xb3,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_38 = *(undefined4 *)&pUVar7[7].field_0x10;
  uStack_34 = *(undefined4 *)&pUVar7[7].field_0x14;
  uStack_30 = *(undefined4 *)&pUVar7[7].field_0x18;
  uStack_2c = *(undefined4 *)&pUVar7[7].field_0x1c;
  (**(code **)((this_00.DebugPtr)->_padding_ + 0x2c8))(this_00.DebugPtr,&local_38);
  pTVar9 = &this->Sections;
  local_78 = this_00;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this_00.DebugPtr);
  }
  pTVar2 = (TObjectPtr<UMovieSceneSection>_u_0 *)(pTVar9->AllocatorInstance).Data;
  if ((pTVar2 <= &local_78) && (&local_78 < pTVar2 + (this->Sections).ArrayMax)) {
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
  iVar5 = (this->Sections).ArrayNum;
  piVar1 = &(this->Sections).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar9->AllocatorInstance,piVar1);
  }
  (this->Sections).ArrayNum = iVar5 + 1;
  ((TObjectPtr<UMovieSceneSection>_u_0 *)((pTVar9->AllocatorInstance).Data + (longlong)iVar5 * 8))->
  DebugPtr = (UMovieSceneSection *)local_78;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UMovieSceneParameterSection *)local_78.DebugPtr != (UMovieSceneParameterSection *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_78.DebugPtr);
  }
LAB_1468a9d6e:
  bVar4 = UMovieSceneSection::TryModify(this_00.DebugPtr,true);
  if ((bVar4) &&
     ((UMovieSceneParameterSection *)this_00.DebugPtr != (UMovieSceneParameterSection *)0x0)) {
    pUVar6 = Z_Construct_UClass_UMovieSceneCustomPrimitiveDataSection_NoRegister();
    iVar5 = (int)pUVar6->_padding_;
    if ((iVar5 <= *(int *)((this_00.DebugPtr)->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)((this_00.DebugPtr)->_padding_ + 0x30) + (longlong)iVar5 * 8)
        == &pUVar6->_padding_)) {
      local_70.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_70.Data.ArrayNum = 0;
      local_70.Data.ArrayMax = 0;
      ::FString::AppendInt(&local_70,(uint)param_1);
      FVar10.Data = (FScriptContainerElement *)L"";
      if (local_70.Data.ArrayNum != 0) {
        FVar10.Data = local_70.Data.AllocatorInstance.Data;
      }
      pFVar8 = ::FName::FName(&local_res8,(wchar_t *)FVar10.Data);
      local_28._s_0.X = (param_4->field0_0x0)._s_0.X;
      local_28._s_0.Y = (param_4->field0_0x0)._s_0.Y;
      UMovieSceneParameterSection::AddVector2DParameterKey
                ((UMovieSceneParameterSection *)this_00.DebugPtr,*pFVar8,param_2,
                 (TVector2<double> *)&local_28._s_0,param_5);
      if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// AddVector2DParameterKey @ 1468a9e60

void __thiscall
UMovieSceneCustomPrimitiveDataTrack::AddVector2DParameterKey
          (UMovieSceneCustomPrimitiveDataTrack *this,uchar param_1,FFrameNumber param_2,
          TVector2<double> *param_3,EMovieSceneKeyInterpolation param_4)

{
  TVector2<double>_u_0 local_18;
  
  local_18._s_0.X = (param_3->field0_0x0)._s_0.X;
  local_18._s_0.Y = (param_3->field0_0x0)._s_0.Y;
  AddVector2DParameterKey(this,param_1,param_2,-1,(TVector2<double> *)&local_18._s_0,param_4);
  return;
}

// AddVectorParameterKey @ 1468a9ea0

void __thiscall
UMovieSceneCustomPrimitiveDataTrack::AddVectorParameterKey
          (UMovieSceneCustomPrimitiveDataTrack *this,uchar param_1,FFrameNumber param_2,int param_3,
          TVector<double> *param_4,EMovieSceneKeyInterpolation param_5)

{
  int *piVar1;
  TObjectPtr<UMovieSceneSection>_u_0 *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TObjectPtr<UMovieSceneSection>_u_0 this_00;
  UClass *pUVar6;
  UObject *pUVar7;
  FName *pFVar8;
  TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_> *pTVar9;
  ForAnyElementType FVar10;
  FName local_res8;
  TObjectPtr<UMovieSceneSection>_u_0 local_88;
  FString local_80;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TArrayView<UMovieSceneSection_*_const,int> local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  TVector<double>_u_0 local_38;
  
  this_00 = (TObjectPtr<UMovieSceneSection>_u_0)(this->SectionToKey).field0_0x0.DebugPtr;
  if (((UMovieSceneParameterSection *)this_00.DebugPtr == (UMovieSceneParameterSection *)0x0) ||
     ((param_3 != -1 && ((int)*(longlong *)&(this_00.DebugPtr)->RowIndex != param_3)))) {
    local_68 = (this->Sections).AllocatorInstance.Data;
    iVar5 = (this->Sections).ArrayNum;
    if ((iVar5 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_58._12_4_ = uStack_5c;
    local_58.ArrayNum = iVar5;
    local_58.DataPtr = (UMovieSceneSection **)local_68;
    iStack_60 = iVar5;
    this_00.DebugPtr = MovieSceneHelpers::FindNearestSectionAtTime(&local_58,param_2,param_3);
    if ((UMovieSceneParameterSection *)this_00.DebugPtr == (UMovieSceneParameterSection *)0x0) {
      this_00.DebugPtr = (UMovieSceneSection *)(**(code **)(this->_padding_ + 0x358))(this);
      if ((UMovieSceneParameterSection *)this_00.DebugPtr == (UMovieSceneParameterSection *)0x0) {
LAB_1468a9f91:
        this_00.DebugPtr = (UMovieSceneSection *)0x0;
      }
      else {
        pUVar6 = Z_Construct_UClass_UMovieSceneCustomPrimitiveDataSection_NoRegister();
        iVar5 = (int)pUVar6->_padding_;
        if ((*(int *)((this_00.DebugPtr)->_padding_ + 0x38) < iVar5) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)((this_00.DebugPtr)->_padding_ + 0x30) + (longlong)iVar5 * 8) !=
            &pUVar6->_padding_)) goto LAB_1468a9f91;
      }
      pUVar6 = Z_Construct_UClass_UMovieScene_NoRegister();
      pUVar7 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar6);
      if ((pUVar7 == (UObject *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("MovieScene",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Tracks\\MovieSceneCustomPrimitiveDataTrack.cpp"
                             ,0xd2,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_48 = *(undefined4 *)&pUVar7[7].field_0x10;
      uStack_44 = *(undefined4 *)&pUVar7[7].field_0x14;
      uStack_40 = *(undefined4 *)&pUVar7[7].field_0x18;
      uStack_3c = *(undefined4 *)&pUVar7[7].field_0x1c;
      (**(code **)((this_00.DebugPtr)->_padding_ + 0x2c8))(this_00.DebugPtr,&local_48);
      pTVar9 = &this->Sections;
      local_88 = this_00;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_00.DebugPtr);
      }
      pTVar2 = (TObjectPtr<UMovieSceneSection>_u_0 *)(pTVar9->AllocatorInstance).Data;
      if (((pTVar2 <= &local_88) && (&local_88 < pTVar2 + (this->Sections).ArrayMax)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar5 = (this->Sections).ArrayNum;
      piVar1 = &(this->Sections).ArrayMax;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&pTVar9->AllocatorInstance,piVar1);
      }
      (this->Sections).ArrayNum = iVar5 + 1;
      ((TObjectPtr<UMovieSceneSection>_u_0 *)
      ((pTVar9->AllocatorInstance).Data + (longlong)iVar5 * 8))->DebugPtr =
           (UMovieSceneSection *)local_88;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         ((UMovieSceneParameterSection *)local_88.DebugPtr != (UMovieSceneParameterSection *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_88.DebugPtr);
      }
    }
  }
  bVar4 = UMovieSceneSection::TryModify(this_00.DebugPtr,true);
  if (!bVar4) {
    return;
  }
  if ((UMovieSceneParameterSection *)this_00.DebugPtr != (UMovieSceneParameterSection *)0x0) {
    pUVar6 = Z_Construct_UClass_UMovieSceneCustomPrimitiveDataSection_NoRegister();
    iVar5 = (int)pUVar6->_padding_;
    if ((iVar5 <= *(int *)((this_00.DebugPtr)->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)((this_00.DebugPtr)->_padding_ + 0x30) + (longlong)iVar5 * 8)
        == &pUVar6->_padding_)) goto LAB_1468aa0fa;
  }
  this_00.DebugPtr = (UMovieSceneSection *)0x0;
LAB_1468aa0fa:
  if ((UMovieSceneParameterSection *)this_00.DebugPtr != (UMovieSceneParameterSection *)0x0) {
    local_80.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_80.Data.ArrayNum = 0;
    local_80.Data.ArrayMax = 0;
    ::FString::AppendInt(&local_80,(uint)param_1);
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_80.Data.ArrayNum != 0) {
      FVar10.Data = local_80.Data.AllocatorInstance.Data;
    }
    pFVar8 = ::FName::FName(&local_res8,(wchar_t *)FVar10.Data);
    local_38._s_0.X = (param_4->field0_0x0)._s_0.X;
    local_38._s_0.Y = (param_4->field0_0x0)._s_0.Y;
    local_38._s_0.Z = (param_4->field0_0x0)._s_0.Z;
    UMovieSceneParameterSection::AddVectorParameterKey
              ((UMovieSceneParameterSection *)this_00.DebugPtr,*pFVar8,param_2,
               (TVector<double> *)&local_38._s_0,param_5);
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// AddVectorParameterKey @ 1468aa1c0

void __thiscall
UMovieSceneCustomPrimitiveDataTrack::AddVectorParameterKey
          (UMovieSceneCustomPrimitiveDataTrack *this,uchar param_1,FFrameNumber param_2,
          TVector<double> *param_3,EMovieSceneKeyInterpolation param_4)

{
  TVector<double>_u_0 local_28;
  
  local_28._s_0.X = (param_3->field0_0x0)._s_0.X;
  local_28._s_0.Y = (param_3->field0_0x0)._s_0.Y;
  local_28._s_0.Z = (param_3->field0_0x0)._s_0.Z;
  AddVectorParameterKey(this,param_1,param_2,-1,(TVector<double> *)&local_28._s_0,param_4);
  return;
}

// CreateNewSection @ 1468ae2b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneSection * __thiscall
UMovieSceneCustomPrimitiveDataTrack::CreateNewSection(UMovieSceneCustomPrimitiveDataTrack *this)

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
  pUVar1 = Z_Construct_UClass_UMovieSceneCustomPrimitiveDataSection_NoRegister();
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
  (**(code **)(pUVar2->_padding_ + 0x2e8))(pUVar2,1);
  return pUVar2;
}

// ExtendEntityImpl @ 1468b25e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieSceneCustomPrimitiveDataTrack::ExtendEntityImpl
          (UMovieSceneCustomPrimitiveDataTrack *this,UMovieSceneParameterSection *param_1,
          UMovieSceneEntitySystemLinker *param_2,FEntityImportParams *param_3,
          FImportedEntity *param_4)

{
  FBuiltInComponentTypes *pFVar1;
  FMovieSceneTracksComponentTypes *pFVar2;
  ushort local_res10;
  bool bStackX_12;
  undefined1 uStackX_13;
  undefined **local_18;
  ushort local_10;
  undefined4 local_e;
  undefined1 local_a;
  
  pFVar1 = UE::MovieScene::FBuiltInComponentTypes::Get();
  pFVar2 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  local_10 = (pFVar2->Tags).CustomPrimitiveData.Value;
  bStackX_12 = (param_1->_padding_ & 0xff0000) == 0;
  local_res10 = (pFVar1->Tags).AbsoluteBlend.Value;
  local_e = _local_res10;
  local_18 = &___7__TEntityBuilder_UFAdd_MovieScene_UE__UFAddConditional_23__MovieScene_UE__6B_;
  local_a = 0;
  UE::MovieScene::FImportedEntity::
  AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::FAddConditional>_>
            (param_4,(TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::FAddConditional> *)
                     &local_18);
  return;
}

// GetAllSections @ 1468b5730

TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> * __thiscall
UMovieSceneCustomPrimitiveDataTrack::GetAllSections(UMovieSceneCustomPrimitiveDataTrack *this)

{
  return (TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> *)&this->Sections;
}

// GetPrivateStaticClass @ 1468b6f10

UClass * __cdecl UMovieSceneCustomPrimitiveDataTrack::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneCustomPrimitiveDataTrack.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneCustomPrimitiveDataTrack",
               &Z_Registration_Info_UClass_UMovieSceneCustomPrimitiveDataTrack.InnerSingleton,
               StaticRegisterNativesUMovieSceneCustomPrimitiveDataTrack,0x140,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneCustomPrimitiveDataTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneCustomPrimitiveDataTrack>,local_res8,
               UMovieSceneNameableTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneCustomPrimitiveDataTrack.InnerSingleton;
}

// GetSectionToKey @ 1468b9820

UMovieSceneSection * __thiscall
UMovieSceneCustomPrimitiveDataTrack::GetSectionToKey(UMovieSceneCustomPrimitiveDataTrack *this)

{
  return (this->SectionToKey).field0_0x0.DebugPtr;
}

// HasSection @ 1468ba860

bool __thiscall
UMovieSceneCustomPrimitiveDataTrack::HasSection
          (UMovieSceneCustomPrimitiveDataTrack *this,UMovieSceneSection *param_1)

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

// ImportEntityImpl @ 1468bb280

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieSceneCustomPrimitiveDataTrack::ImportEntityImpl
          (UMovieSceneCustomPrimitiveDataTrack *this,UMovieSceneEntitySystemLinker *param_1,
          FEntityImportParams *param_2,FImportedEntity *param_3)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Tracks\\MovieSceneCustomPrimitiveDataTrack.cpp"
                     ,0x103,
                     L"This track should never have created entities for itself - this assertion indicates an error in the entity-component field"
                    );
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// IsEmpty @ 1468bc7d0

bool __thiscall
UMovieSceneCustomPrimitiveDataTrack::IsEmpty(UMovieSceneCustomPrimitiveDataTrack *this)

{
  return (this->Sections).ArrayNum == 0;
}

// PopulateEvaluationFieldImpl @ 1468c4eb0

bool __thiscall
UMovieSceneCustomPrimitiveDataTrack::PopulateEvaluationFieldImpl
          (UMovieSceneCustomPrimitiveDataTrack *this,TRange<FFrameNumber> *param_1,
          FMovieSceneEvaluationFieldEntityMetaData *param_2,
          FMovieSceneEntityComponentFieldBuilder *param_3)

{
  FObjectPtr_u_0 *this_00;
  TRangeBound<FFrameNumber> *pTVar1;
  longlong *this_01;
  uchar uVar2;
  int iVar3;
  int iVar4;
  UMovieSceneCustomPrimitiveDataSection *this_02;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  UClass *pUVar8;
  FObjectPtr_u_0 FVar9;
  FFrameNumber *pFVar10;
  ulonglong uVar11;
  FObjectPtr_u_0 *pFVar12;
  FScriptContainerElement *pFVar13;
  FObjectPtr_u_0 *pFVar14;
  FScriptContainerElement *this_03;
  FObjectPtr_u_0 *pFVar15;
  undefined1 local_res8 [8];
  undefined8 local_d0;
  FObjectPtr_u_0 local_c8;
  uint local_c0;
  uint local_bc;
  undefined4 uStack_b8;
  uint local_b4;
  undefined4 uStack_b0;
  uint local_ac;
  undefined4 uStack_a8;
  uint local_a4;
  undefined4 uStack_a0;
  UMovieSceneCondition *local_98;
  FMovieSceneTrackEvaluationField *local_90;
  undefined1 local_88 [24];
  void *local_70;
  FString local_60;
  FName local_50;
  FFrameNumber local_48;
  ESectionEvaluationFlags local_44;
  byte local_43;
  
  this_01 = &this[-1]._padding_;
  local_90 = UMovieSceneTrack::GetEvaluationField((UMovieSceneTrack *)this_01);
  local_c0 = (local_90->Entries).ArrayNum;
  uVar11 = (ulonglong)(int)local_c0;
  this_03 = (local_90->Entries).AllocatorInstance.Data;
  pFVar13 = this_03 + uVar11 * 0x20;
  pFVar15 = (FObjectPtr_u_0 *)(this_03 + 0x10);
  do {
    if ((local_90->Entries).ArrayNum != (int)uVar11) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FMovieSceneTrackEvaluationFieldEntry_const_,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res8);
    }
    if (this_03 == pFVar13) {
      return true;
    }
    if (*(longlong *)this_03 != 0) {
      pUVar8 = Z_Construct_UClass_UMovieSceneCustomPrimitiveDataSection_NoRegister();
      bVar6 = FObjectPtr::IsA((FObjectPtr *)this_03,pUVar8);
      if (((bVar6) &&
          (this_02 = *(UMovieSceneCustomPrimitiveDataSection **)this_03,
          this_02 != (UMovieSceneCustomPrimitiveDataSection *)0x0)) &&
         (bVar6 = UMovieSceneTrack::IsRowEvalDisabled
                            ((UMovieSceneTrack *)this_01,*(int *)&this_02->field_0xd0,true), !bVar6)
         ) {
        bVar6 = TRange<FFrameNumber>::IsEmpty(param_1);
        if (bVar6) {
          local_b4 = local_b4 & 0xffffff00;
          uStack_b0 = 0;
          FVar9._4_4_ = 0;
          FVar9._0_4_ = local_b4;
          local_bc = local_bc & 0xffffff00;
          uStack_b8 = 0;
          local_d0._4_4_ = 0;
          local_d0._0_4_ = local_bc;
        }
        else {
          this_00 = pFVar15 + -1;
          bVar6 = TRange<FFrameNumber>::IsEmpty((TRange<FFrameNumber> *)this_00);
          if (bVar6) {
            local_a4 = local_a4 & 0xffffff00;
            local_ac = local_ac & 0xffffff00;
            uStack_a8 = 0;
            local_d0._4_4_ = 0;
            local_d0._0_4_ = local_ac;
            uStack_a0 = 0;
            FVar9._4_4_ = 0;
            FVar9._0_4_ = local_a4;
          }
          else {
            uVar2 = (param_1->UpperBound).Type.Value;
            pTVar1 = &param_1->UpperBound;
            pFVar12 = pFVar15;
            if ((uVar2 != '\x02') &&
               (pFVar12 = (FObjectPtr_u_0 *)pTVar1,
               *(FScriptContainerElement *)pFVar15 != (FScriptContainerElement)0x2)) {
              iVar4 = *(int *)&((FScriptContainerElement *)((longlong)pFVar15 + 4))->field_0x0;
              iVar3 = (param_1->UpperBound).Value.Value;
              if ((iVar4 <= iVar3) && ((pFVar12 = pFVar15, iVar3 <= iVar4 && (uVar2 == '\0')))) {
                pFVar12 = (FObjectPtr_u_0 *)pTVar1;
              }
            }
            uVar2 = (param_1->LowerBound).Type.Value;
            pFVar14 = this_00;
            if ((uVar2 != '\x02') &&
               (pFVar14 = (FObjectPtr_u_0 *)param_1, *(char *)this_00 != '\x02')) {
              iVar4 = *(int *)&((FScriptContainerElement *)((longlong)pFVar15 + -4))->field_0x0;
              iVar3 = (param_1->LowerBound).Value.Value;
              if ((iVar3 <= iVar4) && ((pFVar14 = this_00, iVar4 <= iVar3 && (uVar2 == '\0')))) {
                pFVar14 = (FObjectPtr_u_0 *)param_1;
              }
            }
            local_d0 = *pFVar14;
            FVar9 = *pFVar12;
          }
        }
        local_c8 = FVar9;
        if (((char)local_d0 == '\x02') || (FVar9._0_1_ == '\x02')) {
LAB_1468c50a1:
          local_88._0_8_ = *(undefined8 *)&(param_2->Condition).SoftObjectPtr;
          FSoftObjectPath::FSoftObjectPath
                    ((FSoftObjectPath *)(local_88 + 8),
                     (FSoftObjectPath *)&(param_2->Condition).SoftObjectPtr.field_0x8);
          ::FString::FString(&local_60,&param_2->OverrideBoundPropertyPath);
          local_50 = param_2->NotifyFunctionName;
          local_48.Value = (param_2->ForcedTime).Value;
          local_43 = param_2->field_0x45 & 3 | local_43 & 0xfc;
          local_44 = ((FScriptContainerElement *)((longlong)pFVar15 + 0xc))->field_0x0;
          if (*(UMovieSceneSection **)this_03 != (UMovieSceneSection *)0x0) {
            local_98 = MovieSceneHelpers::GetSequenceCondition
                                 ((UMovieSceneTrack *)this_01,*(UMovieSceneSection **)this_03,true);
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (local_98 != (UMovieSceneCondition *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)local_98);
            }
            FSoftObjectPtr::operator=((FSoftObjectPtr *)local_88,(FObjectPtr)&local_98);
          }
          UMovieSceneCustomPrimitiveDataSection::ExternalPopulateEvaluationField
                    (this_02,(TRange<FFrameNumber> *)&local_d0,
                     (FMovieSceneEvaluationFieldEntityMetaData *)local_88,param_3);
          if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_60.Data.AllocatorInstance.Data);
          }
          if (local_70 != (void *)0x0) {
            FMemory::Free(local_70);
          }
        }
        else {
          if (((char)local_d0 == '\x02') &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Type != ERangeBoundTypes::Open",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                 ,99,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          if ((int)local_d0._4_4_ <= FVar9._4_4_) {
            pFVar10 = TRangeBound<FFrameNumber>::GetValue((TRangeBound<FFrameNumber> *)&local_c8);
            iVar4 = pFVar10->Value;
            pFVar10 = TRangeBound<FFrameNumber>::GetValue((TRangeBound<FFrameNumber> *)&local_d0);
            if ((pFVar10->Value != iVar4) || ((local_d0._0_1_ != '\0' && (local_c8._0_1_ != '\0'))))
            goto LAB_1468c50a1;
          }
        }
      }
    }
    this_03 = this_03 + 0x20;
    uVar11 = (ulonglong)local_c0;
    pFVar15 = pFVar15 + 4;
  } while( true );
}

// RemoveAllAnimationData @ 1468c8ec0

void __thiscall
UMovieSceneCustomPrimitiveDataTrack::RemoveAllAnimationData
          (UMovieSceneCustomPrimitiveDataTrack *this)

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

// RemoveSection @ 1468c9c90

void __thiscall
UMovieSceneCustomPrimitiveDataTrack::RemoveSection
          (UMovieSceneCustomPrimitiveDataTrack *this,UMovieSceneSection *param_1)

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

// RemoveSectionAt @ 1468ca580

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UMovieSceneCustomPrimitiveDataTrack::RemoveSectionAt
          (UMovieSceneCustomPrimitiveDataTrack *this,int param_1)

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
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_1468ca691;
    if (pUVar6 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar6);
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
LAB_1468ca691:
  this->_padding_ = (longlong)pUVar6;
  return;
}

// SetSectionToKey @ 1468cecd0

void __thiscall
UMovieSceneCustomPrimitiveDataTrack::SetSectionToKey
          (UMovieSceneCustomPrimitiveDataTrack *this,UMovieSceneSection *param_1)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMovieSceneSection *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    (this->SectionToKey).field0_0x0.DebugPtr = param_1;
    return;
  }
  (this->SectionToKey).field0_0x0.DebugPtr = param_1;
  return;
}

// StaticRegisterNativesUMovieSceneCustomPrimitiveDataTrack @ 1468d0020

void __cdecl
UMovieSceneCustomPrimitiveDataTrack::StaticRegisterNativesUMovieSceneCustomPrimitiveDataTrack(void)

{
  return;
}

// SupportsMultipleRows @ 1468d0c30

bool __thiscall
UMovieSceneCustomPrimitiveDataTrack::SupportsMultipleRows(UMovieSceneCustomPrimitiveDataTrack *this)

{
  return true;
}

// SupportsType @ 1468d1380

bool __thiscall
UMovieSceneCustomPrimitiveDataTrack::SupportsType
          (UMovieSceneCustomPrimitiveDataTrack *this,TSubclassOf<UMovieSceneSection> param_1)

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
        goto LAB_1468d13ca;
      }
    }
  }
  pUVar4 = (UClass *)0x0;
LAB_1468d13ca:
  pUVar5 = Z_Construct_UClass_UMovieSceneCustomPrimitiveDataSection_NoRegister();
  return pUVar4 == pUVar5;
}

// _getUObject @ 1468d5590

UObject * __thiscall
UMovieSceneCustomPrimitiveDataTrack::_getUObject(UMovieSceneCustomPrimitiveDataTrack *this)

{
  return (UObject *)&this[-1]._padding_;
}

// _getUObject`adjustor{8}' @ 1468d55a0

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UMovieSceneCustomPrimitiveDataTrack::_getUObject`adjustor{8}' (void)const __ptr64 */

UObject * __thiscall
UMovieSceneCustomPrimitiveDataTrack::_getUObject_adjustor_8__
          (UMovieSceneCustomPrimitiveDataTrack *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UMovieSceneCustomPrimitiveDataTrack *)&this[-1].SectionToKey);
  return (UObject *)pUVar1;
}

