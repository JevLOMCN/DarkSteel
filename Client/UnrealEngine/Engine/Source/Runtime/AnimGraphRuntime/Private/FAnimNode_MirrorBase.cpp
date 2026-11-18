// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 26

// StaticStruct @ 1463d5120

UScriptStruct * __cdecl FAnimNode_MirrorBase::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_MirrorBase.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_MirrorBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_MirrorBase,(UObject *)pUVar1,
                         L"AnimNode_MirrorBase");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_MirrorBase.OuterSingleton;
}

// FAnimNode_MirrorBase @ 1464043d0

FAnimNode_MirrorBase * __thiscall
FAnimNode_MirrorBase::FAnimNode_MirrorBase(FAnimNode_MirrorBase *this,FAnimNode_MirrorBase *param_1)

{
  TTypedIndexRange<FCompactPoseBoneIndex,TArray<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  undefined1 *puVar2;
  TTypedIndexRange<FCompactPoseBoneIndex,TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>_>
  *pTVar3;
  int iVar4;
  void *pvVar5;
  undefined8 uVar6;
  
  pTVar1 = &this->CompactPoseMirrorBones;
  this->_padding_ = (longlong)&___7FAnimNode_Base__6B_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = (longlong)&___7FAnimNode_MirrorBase__6B_;
  uVar6 = *(undefined8 *)&(param_1->Source).field_0x8;
  *(undefined8 *)&this->Source = *(undefined8 *)&param_1->Source;
  *(undefined8 *)&(this->Source).field_0x8 = uVar6;
  this->bMirrorState = param_1->bMirrorState;
  this->bMirrorStateIsValid = param_1->bMirrorStateIsValid;
  puVar2 = &(this->CompactPoseMirrorBones).field_0xc;
  *(undefined8 *)pTVar1 = 0;
  iVar4 = *(int *)&(param_1->CompactPoseMirrorBones).field_0x8;
  pvVar5 = *(void **)&param_1->CompactPoseMirrorBones;
  *(int *)&(this->CompactPoseMirrorBones).field_0x8 = iVar4;
  if (iVar4 == 0) {
    *(undefined4 *)puVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar4,0,(ForAnyElementType *)pTVar1,iVar4,(int *)puVar2);
    memcpy(*(void **)pTVar1,pvVar5,(longlong)iVar4 << 2);
  }
  pTVar3 = &this->ComponentSpaceRefRotations;
  *(undefined8 *)pTVar3 = 0;
  puVar2 = &(this->ComponentSpaceRefRotations).field_0xc;
  iVar4 = *(int *)&(param_1->ComponentSpaceRefRotations).field_0x8;
  pvVar5 = *(void **)&param_1->ComponentSpaceRefRotations;
  *(int *)&(this->ComponentSpaceRefRotations).field_0x8 = iVar4;
  if (iVar4 == 0) {
    *(undefined4 *)puVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,0x10,iVar4,0,(ForAnyElementType *)pTVar3,iVar4,(int *)puVar2);
    memcpy(*(void **)pTVar3,pvVar5,(longlong)iVar4 << 5);
  }
  return this;
}

// FAnimNode_MirrorBase @ 1464044f0

FAnimNode_MirrorBase * __thiscall
FAnimNode_MirrorBase::FAnimNode_MirrorBase(FAnimNode_MirrorBase *this)

{
  *(undefined4 *)&(this->Source).field_0x8 = 0xffffffff;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FAnimNode_MirrorBase__6B_;
  *(undefined8 *)&this->Source = 0;
  (this->Source).field_0xc = 0;
  this->bMirrorState = false;
  this->bMirrorStateIsValid = false;
  *(undefined8 *)&this->CompactPoseMirrorBones = 0;
  *(undefined8 *)&(this->CompactPoseMirrorBones).field_0x8 = 0;
  *(undefined8 *)&this->ComponentSpaceRefRotations = 0;
  *(undefined8 *)&(this->ComponentSpaceRefRotations).field_0x8 = 0;
  return this;
}

// ~FAnimNode_MirrorBase @ 146408b00

void __thiscall FAnimNode_MirrorBase::~FAnimNode_MirrorBase(FAnimNode_MirrorBase *this)

{
  this->_padding_ = (longlong)&___7FAnimNode_MirrorBase__6B_;
  if (*(void **)&this->ComponentSpaceRefRotations != (void *)0x0) {
    FMemory::Free(*(void **)&this->ComponentSpaceRefRotations);
  }
  if (*(void **)&this->CompactPoseMirrorBones != (void *)0x0) {
    FMemory::Free(*(void **)&this->CompactPoseMirrorBones);
  }
  this->_padding_ = (longlong)&___7FAnimNode_Base__6B_;
  return;
}

// CacheBones_AnyThread @ 1464198b0

void __thiscall
FAnimNode_MirrorBase::CacheBones_AnyThread
          (FAnimNode_MirrorBase *this,FAnimationCacheBonesContext *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  
  FPoseLinkBase::CacheBones((FPoseLinkBase *)&this->Source,param_1);
  FStatsHierarchical::BeginMeasurement("FAnimNode_MirrorBase::CacheBones_AnyThread");
  FAnimNode_Base::CacheBones_AnyThread((FAnimNode_Base *)this,param_1);
  lVar1 = *(longlong *)param_1;
  if (*(longlong *)(lVar1 + 0x660) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FillCompactPoseAndComponentRefRotations(this,*(FBoneContainer **)(lVar1 + 0x660));
  FStatsHierarchical::EndMeasurement();
  return;
}

// Evaluate_AnyThread @ 14643a110

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
FAnimNode_MirrorBase::Evaluate_AnyThread(FAnimNode_MirrorBase *this,FPoseContext *param_1)

{
  ITextData *pIVar1;
  FBoneContainer *pFVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  UMirrorDataTable *pUVar6;
  FText *pFVar7;
  FText *pFVar8;
  FTextFormat *pFVar9;
  TSharedRef<FTokenizedMessage,1> *pTVar10;
  FName *pFVar11;
  undefined1 local_res8 [8];
  FName local_res18 [2];
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_d8;
  FText local_c8;
  FText local_b8;
  FTextFormat local_a8;
  FString local_98;
  FFormatArgumentValue local_88;
  FText local_68;
  TSharedRef<FTokenizedMessage,1> local_58;
  FText local_48;
  FTextFormat local_38;
  
  FPoseLink::Evaluate(&this->Source,param_1);
  pUVar6 = (UMirrorDataTable *)(**(code **)(this->_padding_ + 0xa0))(this);
  if ((this->bMirrorState != false) && (pUVar6 != (UMirrorDataTable *)0x0)) {
    cVar4 = (**(code **)(this->_padding_ + 0xc0))(this);
    if (cVar4 != '\0') {
      if (param_1->bExpectsAdditivePose == false) {
        pFVar2 = *(FBoneContainer **)&(param_1->Pose).field_0x10;
        if (*(int *)&(this->CompactPoseMirrorBones).field_0x8 != (pFVar2->BoneIndicesArray).ArrayNum
           ) {
          FillCompactPoseAndComponentRefRotations(this,pFVar2);
        }
        FAnimationRuntime::MirrorPose
                  (&param_1->Pose,(uint)(pUVar6->MirrorAxis).Value,
                   (TArray<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_> *)
                   &this->CompactPoseMirrorBones,&this->ComponentSpaceRefRotations);
      }
      else {
        UObjectBaseUtility::GetFullName
                  (*(UObjectBaseUtility **)(param_1->_padding_ + 0x140),&local_98,(UObject *)0x0,
                   None);
        pFVar7 = FText::FromString(&local_48,&local_98);
        pFVar8 = FText::AsLocalizable_Advanced_LocText
                           (&local_68,L"AnimNode_Mirror",L"AdditiveMirrorWarning",
                            L"Trying to mirror an additive animation pose is not supported in anim instance \'{0}\'"
                           );
        pFVar9 = FTextFormat::FTextFormat(&local_38,pFVar8,Default);
        local_88.Type = Text;
        FText::FText((FText *)&local_88.TextValue,pFVar7);
        if ((local_88.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0xbd,
                               L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_d8.ArrayNum = 1;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,1,0,&local_d8.AllocatorInstance,1,&local_d8.ArrayMax);
        ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                  (local_d8.AllocatorInstance.Data,&local_88,1);
        local_a8.TextFormatData.Object = (pFVar9->TextFormatData).Object;
        local_a8.TextFormatData.SharedReferenceCount.ReferenceController =
             (pFVar9->TextFormatData).SharedReferenceCount.ReferenceController;
        if (local_a8.TextFormatData.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_a8.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_a8.TextFormatData.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        FText::Format(&local_b8,&local_a8,&local_d8);
        DestructItems<FFormatArgumentValue,int>
                  ((FFormatArgumentValue *)local_d8.AllocatorInstance.Data,local_d8.ArrayNum);
        if ((FFormatArgumentValue *)local_d8.AllocatorInstance.Data != (FFormatArgumentValue *)0x0)
        {
          FMemory::Free(local_d8.AllocatorInstance.Data);
        }
        if (local_88.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)
                       *(ITextData *)local_88.TextValue.field0_0x0.TypedValue.TextData.Reference +
                      0x10))();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((pFVar9->TextFormatData).SharedReferenceCount.ReferenceController);
        pIVar1 = (pFVar7->TextData).Reference;
        if (pIVar1 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar1 + 0x10))();
        }
        if (local_68.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
        }
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
        local_c8.TextData.Reference = local_b8.TextData.Reference;
        if (local_b8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_b8.TextData.Reference + 8))
                    (local_b8.TextData.Reference,local_res8);
        }
        local_c8.Flags = local_b8.Flags;
        pTVar10 = FTokenizedMessage::Create(&local_58,Warning,&local_c8);
        pFVar11 = ::FName::FName(local_res18,"Evaluate");
        FAnimationBaseContext::LogMessageInternal((FAnimationBaseContext *)param_1,*pFVar11,pTVar10)
        ;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_58.SharedReferenceCount.ReferenceController);
        if (local_c8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
        }
        FCompactPose::ResetToAdditiveIdentity(&param_1->Pose);
        if (local_b8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
        }
      }
    }
    cVar4 = (**(code **)(this->_padding_ + 200))(this);
    if (cVar4 != '\0') {
      FAnimationRuntime::MirrorCurves(&param_1->Curve,pUVar6);
    }
    cVar4 = (**(code **)(this->_padding_ + 0xd0))(this);
    if (cVar4 != '\0') {
      UE::Anim::Attributes::MirrorAttributes
                (&param_1->CustomAttributes,pUVar6,
                 (TArray<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_> *)
                 &this->CompactPoseMirrorBones);
    }
  }
  return;
}

// FillCompactPoseAndComponentRefRotations @ 146440910

void __thiscall
FAnimNode_MirrorBase::FillCompactPoseAndComponentRefRotations
          (FAnimNode_MirrorBase *this,FBoneContainer *param_1)

{
  UMirrorDataTable *this_00;
  
  this_00 = (UMirrorDataTable *)(**(code **)(this->_padding_ + 0xa0))();
  if (this_00 != (UMirrorDataTable *)0x0) {
    UMirrorDataTable::FillCompactPoseAndComponentRefRotations
              (this_00,param_1,&this->CompactPoseMirrorBones,&this->ComponentSpaceRefRotations);
    return;
  }
  *(undefined4 *)&(this->CompactPoseMirrorBones).field_0x8 = 0;
  if (*(int *)&(this->CompactPoseMirrorBones).field_0xc < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)&this->CompactPoseMirrorBones,0,
               (int *)&(this->CompactPoseMirrorBones).field_0xc);
  }
  *(undefined4 *)&(this->ComponentSpaceRefRotations).field_0x8 = 0;
  if (*(int *)&(this->ComponentSpaceRefRotations).field_0xc < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,0x10,0,(ForAnyElementType *)&this->ComponentSpaceRefRotations,0,
               (int *)&(this->ComponentSpaceRefRotations).field_0xc);
  }
  return;
}

// GatherDebugData @ 146444590

void __thiscall
FAnimNode_MirrorBase::GatherDebugData(FAnimNode_MirrorBase *this,FNodeDebugData *param_1)

{
  ForAnyElementType _Src;
  UPackage *pUVar1;
  int iVar2;
  FName local_res8;
  FString local_48;
  FString local_38 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_MirrorBase.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_MirrorBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_MirrorBase,(UObject *)pUVar1,
                         L"AnimNode_MirrorBase");
  }
  local_res8 = (FName)(Z_Registration_Info_UScriptStruct_FAnimNode_MirrorBase.OuterSingleton)->
                      _padding_;
  ::FName::ToString(&local_res8,&local_48);
  ::FString::PrintfImpl(local_38,L"%s<W:%.1f%%> %s");
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  ::FString::Empty(&param_1->NodeDescription);
  ::FString::PrintfImpl(&local_48,L"(Mirrored: %s)");
  iVar2 = local_48.Data.ArrayNum + -1;
  if (local_48.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars(local_38,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar2);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  _Src.Data = local_38[0].Data.AllocatorInstance.Data;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_38[0].Data.ArrayNum == 0) {
    local_48.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_38[0].Data.ArrayNum,0,(ForAnyElementType *)&local_48,
               local_38[0].Data.ArrayNum,&local_48.Data.ArrayMax);
    memcpy(local_48.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_38[0].Data.ArrayNum * 2);
  }
  FNodeDebugData::AddDebugItem(param_1,&local_48,false);
  FPoseLinkBase::GatherDebugData((FPoseLinkBase *)&this->Source,param_1);
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  return;
}

// GetAttributeMirroring @ 146447b30

bool __thiscall FAnimNode_MirrorBase::GetAttributeMirroring(FAnimNode_MirrorBase *this)

{
  return false;
}

// GetBlendTimeOnMirrorStateChange @ 146447f00

float __thiscall FAnimNode_MirrorBase::GetBlendTimeOnMirrorStateChange(FAnimNode_MirrorBase *this)

{
  return 0.0;
}

// GetBoneMirroring @ 146448550

bool __thiscall FAnimNode_MirrorBase::GetBoneMirroring(FAnimNode_MirrorBase *this)

{
  return false;
}

// GetCurveMirroring @ 1464497d0

bool __thiscall FAnimNode_MirrorBase::GetCurveMirroring(FAnimNode_MirrorBase *this)

{
  return false;
}

// GetMirror @ 14644baa0

bool __thiscall FAnimNode_MirrorBase::GetMirror(FAnimNode_MirrorBase *this)

{
  return false;
}

// GetMirrorDataTable @ 14644bc60

UMirrorDataTable * __thiscall FAnimNode_MirrorBase::GetMirrorDataTable(FAnimNode_MirrorBase *this)

{
  return (UMirrorDataTable *)0x0;
}

// GetResetChildOnMirrorStateChange @ 14644ebf0

bool __thiscall FAnimNode_MirrorBase::GetResetChildOnMirrorStateChange(FAnimNode_MirrorBase *this)

{
  return false;
}

// GetSourceLinkNode @ 14644f470

FAnimNode_Base * __thiscall FAnimNode_MirrorBase::GetSourceLinkNode(FAnimNode_MirrorBase *this)

{
  FAnimNode_Base *pFVar1;
  
  pFVar1 = FPoseLinkBase::GetLinkNode((FPoseLinkBase *)&this->Source);
  return pFVar1;
}

// Initialize_AnyThread @ 146459b70

void __thiscall
FAnimNode_MirrorBase::Initialize_AnyThread
          (FAnimNode_MirrorBase *this,FAnimationInitializeContext *param_1)

{
  FAnimNode_Base::Initialize_AnyThread((FAnimNode_Base *)this,param_1);
  FPoseLinkBase::Initialize((FPoseLinkBase *)&this->Source,param_1);
  return;
}

// SetAttributeMirroring @ 146467d80

bool __thiscall FAnimNode_MirrorBase::SetAttributeMirroring(FAnimNode_MirrorBase *this,bool param_1)

{
  return false;
}

// SetBlendTimeOnMirrorStateChange @ 146468230

bool __thiscall
FAnimNode_MirrorBase::SetBlendTimeOnMirrorStateChange(FAnimNode_MirrorBase *this,float param_1)

{
  return false;
}

// SetBoneMirroring @ 1464684b0

bool __thiscall FAnimNode_MirrorBase::SetBoneMirroring(FAnimNode_MirrorBase *this,bool param_1)

{
  return false;
}

// SetCurveMirroring @ 146468b90

bool __thiscall FAnimNode_MirrorBase::SetCurveMirroring(FAnimNode_MirrorBase *this,bool param_1)

{
  return false;
}

// SetMirror @ 146469960

bool __thiscall FAnimNode_MirrorBase::SetMirror(FAnimNode_MirrorBase *this,bool param_1)

{
  return false;
}

// SetMirrorDataTable @ 146469b70

bool __thiscall
FAnimNode_MirrorBase::SetMirrorDataTable(FAnimNode_MirrorBase *this,UMirrorDataTable *param_1)

{
  return false;
}

// SetResetChildOnMirrorStateChange @ 14646ab30

bool __thiscall
FAnimNode_MirrorBase::SetResetChildOnMirrorStateChange(FAnimNode_MirrorBase *this,bool param_1)

{
  return false;
}

// SetSourceLinkNode @ 14646b200

void __thiscall
FAnimNode_MirrorBase::SetSourceLinkNode(FAnimNode_MirrorBase *this,FAnimNode_Base *param_1)

{
  FPoseLinkBase::SetLinkNode((FPoseLinkBase *)&this->Source,param_1);
  return;
}

// Update_AnyThread @ 146477fa0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FAnimNode_MirrorBase::Update_AnyThread(FAnimNode_MirrorBase *this,FAnimationUpdateContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  FExposedValueHandler *this_00;
  IInertializationRequester *pIVar5;
  UMirrorDataTable *pUVar6;
  TReferenceControllerBase<1> *pTVar7;
  FName FVar8;
  bool bVar9;
  float fVar10;
  TSharedRef<UE::Anim::IGraphMessage,1> local_d8;
  FScopedGraphMessage local_c8;
  char local_b8;
  TOptionalScopedGraphMessage<UE::Anim::FAnimInertializationSyncScope> local_b0;
  FInertializationRequest local_98;
  FAnimationBaseContext local_38;
  
  this_00 = FAnimNode_Base::GetEvaluateGraphExposedInputs((FAnimNode_Base *)this);
  FExposedValueHandler::Execute(this_00,(FAnimationBaseContext *)param_1);
  bVar2 = (bool)(**(code **)(this->_padding_ + 0xb0))(this);
  bVar9 = false;
  if ((this->bMirrorStateIsValid != false) && (this->bMirrorState != bVar2)) {
    fVar10 = (float)(**(code **)(this->_padding_ + 0xb8))(this);
    if (__real_322bcc77 < fVar10) {
      pIVar5 = FAnimationBaseContext::GetMessage<UE::Anim::IInertializationRequester>
                         ((FAnimationBaseContext *)param_1);
      if (pIVar5 == (IInertializationRequester *)0x0) {
        FAnimNode_Inertialization::LogRequestError(param_1,(FPoseLinkBase *)&this->Source);
      }
      else {
        FInertializationRequest::FInertializationRequest(&local_98);
        local_98.Duration = (float)(**(code **)(this->_padding_ + 0xb8))(this);
        local_98.NodeId = *(int *)((longlong)&param_1->_padding_ + 4);
        local_98.AnimInstance.field0_0x0 =
             (TObjectPtr<UObject>_u_0)
             ((TObjectPtr<UObject>_u_0 *)(param_1->_padding_ + 0x140))->DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_98.AnimInstance.field0_0x0.DebugPtr != (TObjectPtr<UObject>_u_0)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_98.AnimInstance.field0_0x0);
        }
        (**(code **)((longlong)*pIVar5 + 0x20))(pIVar5,&local_98);
        (**(code **)((longlong)*pIVar5 + 0x30))
                  (pIVar5,param_1->_padding_,*(undefined4 *)((longlong)&param_1->_padding_ + 4));
        bVar9 = true;
        if (local_98.DescriptionString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
           ) {
          FMemory::Free(local_98.DescriptionString.Data.AllocatorInstance.Data);
        }
        if (local_98.Description_DEPRECATED.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_98.Description_DEPRECATED.TextData.Reference + 0x10))();
        }
      }
    }
    cVar3 = (**(code **)(this->_padding_ + 0xd8))(this);
    if (cVar3 != '\0') {
      FAnimationBaseContext::FAnimationBaseContext
                (&local_38,(FAnimInstanceProxy *)param_1->_padding_,
                 (FAnimationUpdateSharedContext *)param_1->_padding_);
      FPoseLinkBase::Initialize
                ((FPoseLinkBase *)&this->Source,(FAnimationInitializeContext *)&local_38);
    }
  }
  pUVar6 = (UMirrorDataTable *)(**(code **)(this->_padding_ + 0xa0))(this);
  UE::Anim::FScopedGraphMessage::FScopedGraphMessage(&local_c8,(FAnimationBaseContext *)param_1);
  local_b8 = bVar2;
  if (bVar2 != false) {
    pTVar7 = ::operator_new(0x40);
    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
      pTVar7 = (TReferenceControllerBase<1> *)0x0;
      local_d8.Object = (IGraphMessage *)___xmm_00000000000000000000000000000010;
      local_d8.SharedReferenceCount.ReferenceController = _UNK_150651568;
      FVar8 = UE::Anim::FMirrorSyncScope::TypeName;
    }
    else {
      pTVar7->SharedReferenceCount = (atomic<int>)0x1;
      pTVar7->WeakReferenceCount = (atomic<int>)0x1;
      pTVar7->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFMirrorSyncScope_Anim_UE___00_SharedPointerInternals__6B_
      ;
      UE::Anim::FMirrorSyncScope::FMirrorSyncScope
                ((FMirrorSyncScope *)(pTVar7 + 1),(FAnimationBaseContext *)param_1,pUVar6);
      local_d8.Object = (IGraphMessage *)(pTVar7 + 1);
      if ((TReferenceControllerBase<1> *)local_d8.Object == (TReferenceControllerBase<1> *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar4) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      FVar8 = UE::Anim::FMirrorSyncScope::TypeName;
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
      local_d8.SharedReferenceCount.ReferenceController = pTVar7;
    }
    UE::Anim::FScopedGraphMessage::PushMessage
              (&local_c8,(FAnimationBaseContext *)param_1,&local_d8,FVar8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  }
  UE::Anim::TOptionalScopedGraphMessage<UE::Anim::FAnimInertializationSyncScope>::
  TOptionalScopedGraphMessage<UE::Anim::FAnimInertializationSyncScope><>
            (&local_b0,bVar9,(FAnimationBaseContext *)param_1);
  this->bMirrorState = bVar2;
  this->bMirrorStateIsValid = true;
  FPoseLinkBase::Update((FPoseLinkBase *)&this->Source,param_1);
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),
             L"Mirrored",this->bMirrorState);
  if (local_b0.bCondition != false) {
    UE::Anim::FScopedGraphMessage::PopMessage((FScopedGraphMessage *)&local_b0);
  }
  if (local_b8 != '\0') {
    UE::Anim::FScopedGraphMessage::PopMessage(&local_c8);
  }
  return;
}

