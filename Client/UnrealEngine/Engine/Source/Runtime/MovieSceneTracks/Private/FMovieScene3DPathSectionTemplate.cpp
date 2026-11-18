// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 5

// StaticStruct @ 146592fc0

UScriptStruct * __cdecl FMovieScene3DPathSectionTemplate::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieScene3DPathSectionTemplate.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieSceneTracks();
    Z_Registration_Info_UScriptStruct_FMovieScene3DPathSectionTemplate.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate,
                         (UObject *)pUVar1,L"MovieScene3DPathSectionTemplate");
  }
  return Z_Registration_Info_UScriptStruct_FMovieScene3DPathSectionTemplate.OuterSingleton;
}

// GetScriptStructImpl @ 146593000

UScriptStruct * __thiscall
FMovieScene3DPathSectionTemplate::GetScriptStructImpl(FMovieScene3DPathSectionTemplate *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieScene3DPathSectionTemplate.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieSceneTracks();
    Z_Registration_Info_UScriptStruct_FMovieScene3DPathSectionTemplate.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate,
                         (UObject *)pUVar1,L"MovieScene3DPathSectionTemplate");
  }
  return Z_Registration_Info_UScriptStruct_FMovieScene3DPathSectionTemplate.OuterSingleton;
}

// Evaluate @ 146593040

void __thiscall
FMovieScene3DPathSectionTemplate::Evaluate
          (FMovieScene3DPathSectionTemplate *this,FMovieSceneEvaluationOperand *param_1,
          FMovieSceneContext *param_2,FPersistentEvaluationData *param_3,
          FMovieSceneExecutionTokens *param_4)

{
  char cVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  FFrameTime FVar5;
  float local_res8 [2];
  F3DPathExecutionToken local_38;
  
  uVar2 = *(uint *)((longlong)&param_2->_padding_ + 4);
  local_res8[0] = 0.0;
  if (uVar2 == 0x80000000) {
    if ((int)param_2->_padding_ == 0) {
      param_2 = (FMovieSceneContext *)((longlong)&param_2->_padding_ + 4);
      cVar1 = (char)param_2->_padding_;
    }
    else {
      cVar1 = (char)param_2->_padding_;
    }
    if (cVar1 == '\x02') {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    FVar5 = *(FFrameTime *)((longlong)&param_2->_padding_ + 4);
  }
  else {
    FVar5.SubFrame = 0.0;
    FVar5.FrameNumber.Value = uVar2;
  }
  bVar4 = FMovieSceneFloatChannel::Evaluate(&this->TimingCurve,FVar5,local_res8);
  if (bVar4) {
    local_38.PathBindingID.Guid.A = (this->PathBindingID).Guid.A;
    local_38.PathBindingID.Guid.B = (this->PathBindingID).Guid.B;
    local_38.PathBindingID.Guid.C = (this->PathBindingID).Guid.C;
    local_38.PathBindingID.Guid.D = (this->PathBindingID).Guid.D;
    local_38._padding_ = (longlong)&___7F3DPathExecutionToken__6B_;
    local_38.PathBindingID.SequenceID = (this->PathBindingID).SequenceID;
    local_38.PathBindingID.ResolveParentIndex = (this->PathBindingID).ResolveParentIndex;
    local_38.FrontAxisEnum = this->FrontAxisEnum;
    local_38.UpAxisEnum = this->UpAxisEnum;
    local_38.bFollow = this->bFollow;
    local_38.bForceUpright = this->bForceUpright;
    local_38.bReverse = this->bReverse;
    local_38.Timing = local_res8[0];
    FMovieSceneExecutionTokens::Add<F3DPathExecutionToken>(param_4,&local_38);
  }
  return;
}

// FMovieScene3DPathSectionTemplate @ 14660f950

FMovieScene3DPathSectionTemplate * __thiscall
FMovieScene3DPathSectionTemplate::FMovieScene3DPathSectionTemplate
          (FMovieScene3DPathSectionTemplate *this,UMovieScene3DPathSection *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FMovieScene3DPathSectionTemplate__6B_;
  uVar1 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  uVar2 = *(undefined4 *)&param_1->_padding_;
  uVar3 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  (this->PathBindingID).Guid.A = *(undefined4 *)&param_1->_padding_;
  (this->PathBindingID).Guid.B = uVar1;
  (this->PathBindingID).Guid.C = uVar2;
  (this->PathBindingID).Guid.D = uVar3;
  uVar1 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  (this->PathBindingID).SequenceID = *(undefined4 *)&param_1->_padding_;
  (this->PathBindingID).ResolveParentIndex = uVar1;
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(&this->TimingCurve,&param_1->TimingCurve);
  this->FrontAxisEnum = param_1->FrontAxisEnum;
  this->UpAxisEnum = param_1->UpAxisEnum;
  uVar4 = (param_1->bFollow ^ ZPULL(*(undefined4 *)&this->field_0x164,0,1)) & 1 ^
          *(undefined4 *)&this->field_0x164;
  *(uint *)&this->field_0x164 = uVar4;
  uVar4 = ((*(uint *)&param_1->field_0x264 >> 1 & 0xff) * 2 ^ uVar4) & 2 ^ uVar4;
  *(uint *)&this->field_0x164 = uVar4;
  *(uint *)&this->field_0x164 =
       ((*(uint *)&param_1->field_0x264 >> 2 & 0xff) << 2 ^ uVar4) & 4 ^ uVar4;
  return this;
}

// FMovieScene3DPathSectionTemplate @ 14689c090

FMovieScene3DPathSectionTemplate * __thiscall
FMovieScene3DPathSectionTemplate::FMovieScene3DPathSectionTemplate
          (FMovieScene3DPathSectionTemplate *this,FMovieScene3DPathSectionTemplate *param_1)

{
  int *piVar1;
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  this->_padding_ = (longlong)&___7FMovieSceneEvalTemplateBase__6B_;
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  this->_padding_ = (longlong)&___7FMovieSceneEvalTemplate__6B_;
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  *(undefined8 *)((longlong)&this->_padding_ + 4) =
       *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  this->_padding_ = (longlong)&___7FMovieScene3DPathSectionTemplate__6B_;
  uVar8 = (param_1->PathBindingID).Guid.B;
  uVar6 = (param_1->PathBindingID).Guid.C;
  uVar7 = (param_1->PathBindingID).Guid.D;
  (this->PathBindingID).Guid.A = (param_1->PathBindingID).Guid.A;
  (this->PathBindingID).Guid.B = uVar8;
  (this->PathBindingID).Guid.C = uVar6;
  (this->PathBindingID).Guid.D = uVar7;
  iVar4 = (param_1->PathBindingID).ResolveParentIndex;
  (this->PathBindingID).SequenceID = (param_1->PathBindingID).SequenceID;
  (this->PathBindingID).ResolveParentIndex = iVar4;
  FMovieSceneChannel::FMovieSceneChannel
            ((FMovieSceneChannel *)&this->TimingCurve,(FMovieSceneChannel *)&param_1->TimingCurve);
  (this->TimingCurve)._padding_ = (longlong)&___7FMovieSceneFloatChannel__6B_;
  pTVar2 = &(this->TimingCurve).Times;
  (this->TimingCurve).PreInfinityExtrap.Value = (param_1->TimingCurve).PreInfinityExtrap.Value;
  (this->TimingCurve).PostInfinityExtrap.Value = (param_1->TimingCurve).PostInfinityExtrap.Value;
  piVar1 = &(this->TimingCurve).Times.ArrayMax;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar4 = (param_1->TimingCurve).Times.ArrayNum;
  pFVar5 = (param_1->TimingCurve).Times.AllocatorInstance.Data;
  (this->TimingCurve).Times.ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar4,0,&pTVar2->AllocatorInstance,iVar4,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar5,(longlong)iVar4 << 2);
  }
  pTVar3 = &(this->TimingCurve).Values;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->TimingCurve).Values.ArrayMax;
  iVar4 = (param_1->TimingCurve).Values.ArrayNum;
  pFVar5 = (param_1->TimingCurve).Values.AllocatorInstance.Data;
  (this->TimingCurve).Values.ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x1c,4,iVar4,0,&pTVar3->AllocatorInstance,iVar4,piVar1);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar5,(longlong)iVar4 * 0x1c);
  }
  (this->TimingCurve).DefaultValue = (param_1->TimingCurve).DefaultValue;
  (this->TimingCurve).bHasDefaultValue = (param_1->TimingCurve).bHasDefaultValue;
  *(undefined8 *)&(this->TimingCurve).KeyHandles = 0;
  *(undefined8 *)&(this->TimingCurve).KeyHandles.field_0x8 = 0;
  *(undefined8 *)&(this->TimingCurve).KeyHandles.field_0x20 = 0;
  *(undefined4 *)&(this->TimingCurve).KeyHandles.field_0x28 = 0;
  *(undefined4 *)&(this->TimingCurve).KeyHandles.field_0x2c = 0x80;
  *(undefined4 *)&(this->TimingCurve).KeyHandles.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TimingCurve).KeyHandles.field_0x34 = 0;
  *(undefined8 *)&(this->TimingCurve).KeyHandles.field_0x38 = 0;
  *(undefined8 *)&(this->TimingCurve).KeyHandles.field_0x40 = 0;
  *(undefined8 *)&(this->TimingCurve).KeyHandles.field_0x58 = 0;
  *(undefined4 *)&(this->TimingCurve).KeyHandles.field_0x60 = 0;
  *(undefined4 *)&(this->TimingCurve).KeyHandles.field_0x64 = 0x80;
  *(undefined4 *)&(this->TimingCurve).KeyHandles.field_0x68 = 0xffffffff;
  *(undefined4 *)&(this->TimingCurve).KeyHandles.field_0x6c = 0;
  *(undefined8 *)&(this->TimingCurve).KeyHandles.field_0x78 = 0;
  *(undefined4 *)&(this->TimingCurve).KeyHandles.field_0x80 = 0;
  (this->TimingCurve).TickResolution = (param_1->TimingCurve).TickResolution;
  this->FrontAxisEnum = param_1->FrontAxisEnum;
  this->UpAxisEnum = param_1->UpAxisEnum;
  uVar8 = (ZPULL(*(undefined4 *)&this->field_0x164,0,1) ^ param_1->bFollow) & 1 ^
          *(undefined4 *)&this->field_0x164;
  *(uint *)&this->field_0x164 = uVar8;
  uVar8 = (uVar8 ^ *(uint *)&param_1->field_0x164) & 2 ^ uVar8;
  *(uint *)&this->field_0x164 = uVar8;
  *(uint *)&this->field_0x164 = (uVar8 ^ *(uint *)&param_1->field_0x164) & 4 ^ uVar8;
  return this;
}

