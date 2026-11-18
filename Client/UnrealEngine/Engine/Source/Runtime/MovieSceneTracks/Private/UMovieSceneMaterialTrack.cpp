// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 27

// StaticClass @ 146876170

UClass * __cdecl UMovieSceneMaterialTrack::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneMaterialTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneMaterialTrack",
               &Z_Registration_Info_UClass_UMovieSceneMaterialTrack.InnerSingleton,
               StaticRegisterNativesUMovieSceneMaterialTrack,0x130,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieSceneMaterialTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneMaterialTrack>,local_res8,
               UMovieSceneNameableTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneMaterialTrack.InnerSingleton;
}

// UMovieSceneMaterialTrack @ 14689e840

UMovieSceneMaterialTrack * __thiscall
UMovieSceneMaterialTrack::UMovieSceneMaterialTrack
          (UMovieSceneMaterialTrack *this,FVTableHelper *param_1)

{
  UMovieSceneNameableTrack::UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  (this->Sections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Sections).ArrayNum = 0;
  (this->Sections).ArrayMax = 0;
  (this->SectionToKey).field0_0x0.DebugPtr = (UMovieSceneSection *)0x0;
  return this;
}

// UMovieSceneMaterialTrack @ 14689e890

UMovieSceneMaterialTrack * __thiscall
UMovieSceneMaterialTrack::UMovieSceneMaterialTrack
          (UMovieSceneMaterialTrack *this,FObjectInitializer *param_1)

{
  UMovieSceneNameableTrack::UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  (this->Sections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Sections).ArrayNum = 0;
  (this->Sections).ArrayMax = 0;
  (this->SectionToKey).field0_0x0.DebugPtr = (UMovieSceneSection *)0x0;
  FMovieSceneBlendTypeField::Add((FMovieSceneBlendTypeField *)&this->_padding_,Absolute);
  FMovieSceneBlendTypeField::Add((FMovieSceneBlendTypeField *)&this->_padding_,Additive);
  FMovieSceneBlendTypeField::Add((FMovieSceneBlendTypeField *)&this->_padding_,AdditiveFromBase);
  return this;
}

// ~UMovieSceneMaterialTrack @ 1468a0d00

void __thiscall UMovieSceneMaterialTrack::~UMovieSceneMaterialTrack(UMovieSceneMaterialTrack *this)

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

// AddColorParameterKey @ 1468a58b0

void __thiscall
UMovieSceneMaterialTrack::AddColorParameterKey
          (UMovieSceneMaterialTrack *this,FMaterialParameterInfo *param_1,FFrameNumber param_2,
          int param_3,FLinearColor *param_4,FString *param_5,FString *param_6,
          FParameterChannelNames *param_7,EMovieSceneKeyInterpolation param_8)

{
  int *piVar1;
  TObjectPtr<UMovieSceneSection>_u_0 *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TObjectPtr<UMovieSceneSection>_u_0 this_00;
  UClass *pUVar6;
  UObject *pUVar7;
  TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_> *pTVar8;
  TObjectPtr<UMovieSceneSection>_u_0 local_68 [2];
  FScriptContainerElement *local_58;
  int iStack_50;
  undefined4 uStack_4c;
  TArrayView<UMovieSceneSection_*_const,int> local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  FLinearColor_u_0 local_28;
  FLinearColor_u_0 local_18;
  
  this_00 = (TObjectPtr<UMovieSceneSection>_u_0)(this->SectionToKey).field0_0x0.DebugPtr;
  if (((UMovieSceneParameterSection *)this_00.DebugPtr == (UMovieSceneParameterSection *)0x0) ||
     ((param_3 != -1 && ((int)*(longlong *)&(this_00.DebugPtr)->RowIndex != param_3)))) {
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
    if ((UMovieSceneParameterSection *)this_00.DebugPtr == (UMovieSceneParameterSection *)0x0) {
      this_00.DebugPtr = (UMovieSceneSection *)(**(code **)(this->_padding_ + 0x358))(this);
      pUVar6 = Z_Construct_UClass_UMovieScene_NoRegister();
      pUVar7 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar6);
      if (pUVar7 == (UObject *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("MovieScene",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Tracks\\MovieSceneMaterialTrack.cpp"
                           ,0xd3,L"");
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
      pTVar8 = &this->Sections;
      local_68[0].DebugPtr = this_00.DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_00.DebugPtr);
      }
      pTVar2 = (TObjectPtr<UMovieSceneSection>_u_0 *)(pTVar8->AllocatorInstance).Data;
      if ((pTVar2 <= local_68) && (local_68 < pTVar2 + (this->Sections).ArrayMax)) {
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
                          (0x808,&pTVar8->AllocatorInstance,piVar1);
      }
      (this->Sections).ArrayNum = iVar5 + 1;
      ((TObjectPtr<UMovieSceneSection>_u_0 *)
      ((pTVar8->AllocatorInstance).Data + (longlong)iVar5 * 8))->DebugPtr =
           (UMovieSceneSection *)local_68[0];
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         ((UMovieSceneParameterSection *)local_68[0].DebugPtr != (UMovieSceneParameterSection *)0x0)
         ) {
        UE::GC::MarkAsReachable((UObject *)local_68[0].DebugPtr);
      }
    }
  }
  bVar4 = UMovieSceneSection::TryModify(this_00.DebugPtr,true);
  if ((bVar4) &&
     ((UMovieSceneParameterSection *)this_00.DebugPtr != (UMovieSceneParameterSection *)0x0)) {
    pUVar6 = Z_Construct_UClass_UMovieSceneParameterSection_NoRegister();
    iVar5 = (int)pUVar6->_padding_;
    if ((*(int *)((this_00.DebugPtr)->_padding_ + 0x38) < iVar5) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)((this_00.DebugPtr)->_padding_ + 0x30) + (longlong)iVar5 * 8)
        != &pUVar6->_padding_)) {
      if ((UMovieSceneParameterSection *)this_00.DebugPtr != (UMovieSceneParameterSection *)0x0) {
        pUVar6 = Z_Construct_UClass_UMovieSceneComponentMaterialParameterSection_NoRegister();
        iVar5 = (int)pUVar6->_padding_;
        if ((iVar5 <= *(int *)((this_00.DebugPtr)->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)((this_00.DebugPtr)->_padding_ + 0x30) + (longlong)iVar5 * 8) ==
            &pUVar6->_padding_)) {
          local_18._0_8_ = *(undefined8 *)&param_4->field0_0x0;
          local_18._8_8_ = *(undefined8 *)((longlong)&param_4->field0_0x0 + 8);
          UMovieSceneComponentMaterialParameterSection::AddColorParameterKey
                    ((UMovieSceneComponentMaterialParameterSection *)this_00.DebugPtr,param_1,
                     param_2,(FLinearColor *)&local_18._s_0,param_5,param_6,param_7,param_8);
        }
      }
    }
    else {
      local_28._0_8_ = *(undefined8 *)&param_4->field0_0x0;
      local_28._8_8_ = *(undefined8 *)((longlong)&param_4->field0_0x0 + 8);
      UMovieSceneParameterSection::AddColorParameterKey
                ((UMovieSceneParameterSection *)this_00.DebugPtr,param_1->Name,param_2,
                 (FLinearColor *)&local_28._s_0,param_8);
    }
  }
  return;
}

// AddColorParameterKey @ 1468a5bc0

void __thiscall
UMovieSceneMaterialTrack::AddColorParameterKey
          (UMovieSceneMaterialTrack *this,FMaterialParameterInfo *param_1,FFrameNumber param_2,
          int param_3,FLinearColor *param_4,FString *param_5,FString *param_6,
          EMovieSceneKeyInterpolation param_7)

{
  FLinearColor_u_0 local_58;
  FParameterChannelNames local_48;
  
  local_48.R.TextData.Reference = (ITextData *)0x0;
  local_48.R.Flags = 0;
  local_48.R._12_4_ = 0;
  local_48.G.TextData.Reference = (ITextData *)0x0;
  local_48.G.Flags = 0;
  local_48.G._12_4_ = 0;
  local_48.B.TextData.Reference = (ITextData *)0x0;
  local_48.B.Flags = 0;
  local_48.B._12_4_ = 0;
  local_48.A.TextData.Reference = (ITextData *)0x0;
  local_48.A.Flags = 0;
  local_48.A._12_4_ = 0;
  FText::FText(&local_48.R);
  FText::FText(&local_48.G);
  FText::FText(&local_48.B);
  FText::FText(&local_48.A);
  local_58._0_8_ = *(undefined8 *)&param_4->field0_0x0;
  local_58._8_8_ = *(undefined8 *)((longlong)&param_4->field0_0x0 + 8);
  AddColorParameterKey
            (this,param_1,param_2,param_3,(FLinearColor *)&local_58._s_0,param_5,param_6,&local_48,
             param_7);
  if (local_48.A.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.A.TextData.Reference + 0x10))();
  }
  if (local_48.B.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.B.TextData.Reference + 0x10))();
  }
  if (local_48.G.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.G.TextData.Reference + 0x10))();
  }
  if (local_48.R.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.R.TextData.Reference + 0x10))();
  }
  return;
}

// AddColorParameterKey @ 1468a5cf0

void __thiscall
UMovieSceneMaterialTrack::AddColorParameterKey
          (UMovieSceneMaterialTrack *this,FMaterialParameterInfo *param_1,FFrameNumber param_2,
          FLinearColor *param_3,FString *param_4,FString *param_5,
          EMovieSceneKeyInterpolation param_6)

{
  FLinearColor_u_0 local_18;
  
  local_18._0_8_ = *(undefined8 *)&param_3->field0_0x0;
  local_18._8_8_ = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8);
  AddColorParameterKey
            (this,param_1,param_2,-1,(FLinearColor *)&local_18._s_0,param_4,param_5,param_6);
  return;
}

// AddColorParameterKey @ 1468a5d50

void __thiscall
UMovieSceneMaterialTrack::AddColorParameterKey
          (UMovieSceneMaterialTrack *this,FName param_1,FFrameNumber param_2,int param_3,
          FLinearColor *param_4,EMovieSceneKeyInterpolation param_5)

{
  FString local_48;
  FString local_38;
  FMaterialParameterInfo local_28;
  FLinearColor_u_0 local_18;
  
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  local_28.Association.Value = '\x02';
  local_28.Index = -1;
  local_18._0_8_ = *(undefined8 *)&param_4->field0_0x0;
  local_18._8_8_ = *(undefined8 *)((longlong)&param_4->field0_0x0 + 8);
  local_28.Name = param_1;
  AddColorParameterKey
            (this,&local_28,param_2,param_3,(FLinearColor *)&local_18._s_0,&local_48,&local_38,
             param_5);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// AddColorParameterKey @ 1468a5df0

void __thiscall
UMovieSceneMaterialTrack::AddColorParameterKey
          (UMovieSceneMaterialTrack *this,FName param_1,FFrameNumber param_2,FLinearColor *param_3,
          EMovieSceneKeyInterpolation param_4)

{
  FString local_48;
  FString local_38;
  FMaterialParameterInfo local_28;
  FLinearColor_u_0 local_18;
  
  local_18._0_8_ = *(undefined8 *)&param_3->field0_0x0;
  local_18._8_8_ = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8);
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  local_28.Association.Value = '\x02';
  local_28.Index = -1;
  local_28.Name = param_1;
  AddColorParameterKey
            (this,&local_28,param_2,-1,(FLinearColor *)&local_18._s_0,&local_48,&local_38,param_4);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// AddScalarParameterKey @ 1468a7d70

void __thiscall
UMovieSceneMaterialTrack::AddScalarParameterKey
          (UMovieSceneMaterialTrack *this,FMaterialParameterInfo *param_1,FFrameNumber param_2,
          int param_3,float param_4,FString *param_5,FString *param_6,
          EMovieSceneKeyInterpolation param_7)

{
  int *piVar1;
  TObjectPtr<UMovieSceneSection>_u_0 *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TObjectPtr<UMovieSceneSection>_u_0 this_00;
  UClass *pUVar6;
  UObject *pUVar7;
  TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_> *pTVar8;
  TObjectPtr<UMovieSceneSection>_u_0 local_48 [2];
  FScriptContainerElement *local_38;
  int iStack_30;
  undefined4 uStack_2c;
  TArrayView<UMovieSceneSection_*_const,int> local_28;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  this_00 = (TObjectPtr<UMovieSceneSection>_u_0)(this->SectionToKey).field0_0x0.DebugPtr;
  if (((UMovieSceneParameterSection *)this_00.DebugPtr == (UMovieSceneParameterSection *)0x0) ||
     ((param_3 != -1 && ((int)*(longlong *)&(this_00.DebugPtr)->RowIndex != param_3)))) {
    local_38 = (this->Sections).AllocatorInstance.Data;
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
    local_28._12_4_ = uStack_2c;
    local_28.ArrayNum = iVar5;
    local_28.DataPtr = (UMovieSceneSection **)local_38;
    iStack_30 = iVar5;
    this_00.DebugPtr = MovieSceneHelpers::FindNearestSectionAtTime(&local_28,param_2,param_3);
    if ((UMovieSceneParameterSection *)this_00.DebugPtr == (UMovieSceneParameterSection *)0x0) {
      this_00.DebugPtr = (UMovieSceneSection *)(**(code **)(this->_padding_ + 0x358))(this);
      pUVar6 = Z_Construct_UClass_UMovieScene_NoRegister();
      pUVar7 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar6);
      if (pUVar7 == (UObject *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("MovieScene",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Tracks\\MovieSceneMaterialTrack.cpp"
                           ,0x9d,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      local_18 = *(undefined4 *)&pUVar7[7].field_0x10;
      uStack_14 = *(undefined4 *)&pUVar7[7].field_0x14;
      uStack_10 = *(undefined4 *)&pUVar7[7].field_0x18;
      uStack_c = *(undefined4 *)&pUVar7[7].field_0x1c;
      (**(code **)((this_00.DebugPtr)->_padding_ + 0x2c8))(this_00.DebugPtr,&local_18);
      pTVar8 = &this->Sections;
      local_48[0].DebugPtr = this_00.DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_00.DebugPtr);
      }
      pTVar2 = (TObjectPtr<UMovieSceneSection>_u_0 *)(pTVar8->AllocatorInstance).Data;
      if ((pTVar2 <= local_48) && (local_48 < pTVar2 + (this->Sections).ArrayMax)) {
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
                          (0x808,&pTVar8->AllocatorInstance,piVar1);
      }
      (this->Sections).ArrayNum = iVar5 + 1;
      ((TObjectPtr<UMovieSceneSection>_u_0 *)
      ((pTVar8->AllocatorInstance).Data + (longlong)iVar5 * 8))->DebugPtr =
           (UMovieSceneSection *)local_48[0];
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         ((UMovieSceneParameterSection *)local_48[0].DebugPtr != (UMovieSceneParameterSection *)0x0)
         ) {
        UE::GC::MarkAsReachable((UObject *)local_48[0].DebugPtr);
      }
    }
  }
  bVar4 = UMovieSceneSection::TryModify(this_00.DebugPtr,true);
  if ((bVar4) &&
     ((UMovieSceneParameterSection *)this_00.DebugPtr != (UMovieSceneParameterSection *)0x0)) {
    pUVar6 = Z_Construct_UClass_UMovieSceneParameterSection_NoRegister();
    iVar5 = (int)pUVar6->_padding_;
    if ((*(int *)((this_00.DebugPtr)->_padding_ + 0x38) < iVar5) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)((this_00.DebugPtr)->_padding_ + 0x30) + (longlong)iVar5 * 8)
        != &pUVar6->_padding_)) {
      if ((UMovieSceneParameterSection *)this_00.DebugPtr != (UMovieSceneParameterSection *)0x0) {
        pUVar6 = Z_Construct_UClass_UMovieSceneComponentMaterialParameterSection_NoRegister();
        iVar5 = (int)pUVar6->_padding_;
        if ((iVar5 <= *(int *)((this_00.DebugPtr)->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)((this_00.DebugPtr)->_padding_ + 0x30) + (longlong)iVar5 * 8) ==
            &pUVar6->_padding_)) {
          UMovieSceneComponentMaterialParameterSection::AddScalarParameterKey
                    ((UMovieSceneComponentMaterialParameterSection *)this_00.DebugPtr,param_1,
                     param_2,param_4,param_5,param_6,param_7);
        }
      }
    }
    else {
      UMovieSceneParameterSection::AddScalarParameterKey
                ((UMovieSceneParameterSection *)this_00.DebugPtr,param_1->Name,param_2,param_4,
                 param_7);
    }
  }
  return;
}

// AddScalarParameterKey @ 1468a8050

void __thiscall
UMovieSceneMaterialTrack::AddScalarParameterKey
          (UMovieSceneMaterialTrack *this,FMaterialParameterInfo *param_1,FFrameNumber param_2,
          float param_3,FString *param_4,FString *param_5,EMovieSceneKeyInterpolation param_6)

{
  AddScalarParameterKey(this,param_1,param_2,-1,param_3,param_4,param_5,param_6);
  return;
}

// AddScalarParameterKey @ 1468a8090

void __thiscall
UMovieSceneMaterialTrack::AddScalarParameterKey
          (UMovieSceneMaterialTrack *this,FName param_1,FFrameNumber param_2,int param_3,
          float param_4,EMovieSceneKeyInterpolation param_5)

{
  FString local_38;
  FString local_28;
  FMaterialParameterInfo local_18;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  local_18.Association.Value = '\x02';
  local_18.Index = -1;
  local_18.Name = param_1;
  AddScalarParameterKey(this,&local_18,param_2,param_3,param_4,&local_38,&local_28,param_5);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// AddScalarParameterKey @ 1468a8120

void __thiscall
UMovieSceneMaterialTrack::AddScalarParameterKey
          (UMovieSceneMaterialTrack *this,FName param_1,FFrameNumber param_2,float param_3,
          EMovieSceneKeyInterpolation param_4)

{
  FString local_38;
  FString local_28;
  FMaterialParameterInfo local_18;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  local_18.Association.Value = '\x02';
  local_18.Index = -1;
  local_18.Name = param_1;
  AddScalarParameterKey(this,&local_18,param_2,-1,param_3,&local_38,&local_28,param_4);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// AddSection @ 1468a9140

void __thiscall
UMovieSceneMaterialTrack::AddSection(UMovieSceneMaterialTrack *this,UMovieSceneSection *param_1)

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

// CreateNewSection @ 1468aede0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneSection * __thiscall
UMovieSceneMaterialTrack::CreateNewSection(UMovieSceneMaterialTrack *this)

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
  pUVar1 = Z_Construct_UClass_UMovieSceneComponentMaterialParameterSection_NoRegister();
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

// GetAllSections @ 1468b5770

TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> * __thiscall
UMovieSceneMaterialTrack::GetAllSections(UMovieSceneMaterialTrack *this)

{
  return (TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> *)&this->Sections;
}

// GetPrivateStaticClass @ 1468b7d40

UClass * __cdecl UMovieSceneMaterialTrack::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneMaterialTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneMaterialTrack",
               &Z_Registration_Info_UClass_UMovieSceneMaterialTrack.InnerSingleton,
               StaticRegisterNativesUMovieSceneMaterialTrack,0x130,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieSceneMaterialTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneMaterialTrack>,local_res8,
               UMovieSceneNameableTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneMaterialTrack.InnerSingleton;
}

// GetSectionToKey @ 1468b9830

UMovieSceneSection * __thiscall
UMovieSceneMaterialTrack::GetSectionToKey(UMovieSceneMaterialTrack *this)

{
  return (this->SectionToKey).field0_0x0.DebugPtr;
}

// HasSection @ 1468ba9a0

bool __thiscall
UMovieSceneMaterialTrack::HasSection(UMovieSceneMaterialTrack *this,UMovieSceneSection *param_1)

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

// IsEmpty @ 1468bc850

bool __thiscall UMovieSceneMaterialTrack::IsEmpty(UMovieSceneMaterialTrack *this)

{
  return (this->Sections).ArrayNum == 0;
}

// RemoveAllAnimationData @ 1468c8f70

void __thiscall UMovieSceneMaterialTrack::RemoveAllAnimationData(UMovieSceneMaterialTrack *this)

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

// RemoveSection @ 1468c9e80

void __thiscall
UMovieSceneMaterialTrack::RemoveSection(UMovieSceneMaterialTrack *this,UMovieSceneSection *param_1)

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

// RemoveSectionAt @ 1468ca720

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UMovieSceneMaterialTrack::RemoveSectionAt(UMovieSceneMaterialTrack *this,int param_1)

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
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_1468ca831;
    if (pUVar6 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar6);
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
LAB_1468ca831:
  this->_padding_ = (longlong)pUVar6;
  return;
}

// SetSectionToKey @ 1468ced20

void __thiscall
UMovieSceneMaterialTrack::SetSectionToKey
          (UMovieSceneMaterialTrack *this,UMovieSceneSection *param_1)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMovieSceneSection *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    (this->SectionToKey).field0_0x0.DebugPtr = param_1;
    return;
  }
  (this->SectionToKey).field0_0x0.DebugPtr = param_1;
  return;
}

// StaticRegisterNativesUMovieSceneMaterialTrack @ 1468d0180

void __cdecl UMovieSceneMaterialTrack::StaticRegisterNativesUMovieSceneMaterialTrack(void)

{
  return;
}

// SupportsMultipleRows @ 1468d0c70

bool __thiscall UMovieSceneMaterialTrack::SupportsMultipleRows(UMovieSceneMaterialTrack *this)

{
  return true;
}

// SupportsType @ 1468d1990

bool __thiscall
UMovieSceneMaterialTrack::SupportsType
          (UMovieSceneMaterialTrack *this,TSubclassOf<UMovieSceneSection> param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  pUVar6 = (UClass *)0x0;
  pUVar5 = pUVar6;
  if ((lVar2 != 0) &&
     (pUVar4 = Z_Construct_UClass_UMovieSceneSection_NoRegister(), pUVar4 != (UClass *)0x0)) {
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
      pUVar5 = *(UClass **)param_1.Class.field0_0x0;
    }
  }
  pUVar4 = Z_Construct_UClass_UMovieSceneComponentMaterialParameterSection_NoRegister();
  if (pUVar5 != pUVar4) {
    lVar2 = *(longlong *)param_1.Class.field0_0x0;
    if ((lVar2 != 0) &&
       (pUVar5 = Z_Construct_UClass_UMovieSceneSection_NoRegister(), pUVar5 != (UClass *)0x0)) {
      iVar1 = (int)pUVar5->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        pUVar6 = *(UClass **)param_1.Class.field0_0x0;
      }
    }
    pUVar5 = Z_Construct_UClass_UMovieSceneParameterSection_NoRegister();
    if (pUVar6 != pUVar5) {
      return false;
    }
  }
  return true;
}

