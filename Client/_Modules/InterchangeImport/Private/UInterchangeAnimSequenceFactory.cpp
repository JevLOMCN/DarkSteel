// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 23

// StaticClass @ 14e674910

UClass * __cdecl UInterchangeAnimSequenceFactory::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeAnimSequenceFactory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeAnimSequenceFactory",
               &Z_Registration_Info_UClass_UInterchangeAnimSequenceFactory.InnerSingleton,
               StaticRegisterNativesUInterchangeAnimSequenceFactory,0x1d8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeAnimSequenceFactory>,
               InternalVTableHelperCtorCaller<UInterchangeAnimSequenceFactory>,local_res8,
               UInterchangeFactoryBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeAnimSequenceFactory.InnerSingleton;
}

// <lambda_2> @ 14e67b5d0

<lambda_2> * __thiscall
`UInterchangeAnimSequenceFactory::CreatePayloadTasks'::__l24::<lambda_2>::<lambda_2>
          (void *this,<lambda_2> *param_1)

{
  *(UInterchangeAnimSequenceFactory **)this = param_1->__this;
  ::FString::FString((FString *)((longlong)this + 8),(FString *)&param_1->SceneNodeUidAndPayloadKey)
  ;
  ::FString::FString((FString *)((longlong)this + 0x18),
                     (FString *)&(param_1->SceneNodeUidAndPayloadKey).field_0x10);
  *(undefined1 *)((longlong)this + 0x28) = (param_1->SceneNodeUidAndPayloadKey).field_0x20;
  *(IInterchangeAnimationPayloadInterface **)((longlong)this + 0x30) =
       param_1->AnimSequenceTranslatorPayloadInterface;
  return this;
}

// UInterchangeAnimSequenceFactory @ 14e690100

UInterchangeAnimSequenceFactory * __thiscall
UInterchangeAnimSequenceFactory::UInterchangeAnimSequenceFactory
          (UInterchangeAnimSequenceFactory *this,FVTableHelper *param_1)

{
  UInterchangeFactoryBase::UInterchangeFactoryBase((UInterchangeFactoryBase *)this,param_1);
  this->_padding_ = (longlong)&___7UInterchangeAnimSequenceFactory__6B_;
  *(undefined8 *)&(this->BoneTrackData).PreProcessedAnimationPayloads.field_0x8 = 0;
  (this->AnimSequence).field0_0x0.DebugPtr = (UAnimSequence *)0x0;
  *(undefined8 *)&(this->BoneTrackData).PreProcessedAnimationPayloads = 0;
  *(undefined8 *)&(this->BoneTrackData).PreProcessedAnimationPayloads.field_0x20 = 0;
  *(undefined4 *)&(this->BoneTrackData).PreProcessedAnimationPayloads.field_0x28 = 0;
  *(undefined4 *)&(this->BoneTrackData).PreProcessedAnimationPayloads.field_0x2c = 0x80;
  *(undefined4 *)&(this->BoneTrackData).PreProcessedAnimationPayloads.field_0x34 = 0;
  *(undefined4 *)&(this->BoneTrackData).PreProcessedAnimationPayloads.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->BoneTrackData).PreProcessedAnimationPayloads.field_0x40 = 0;
  *(undefined4 *)&(this->BoneTrackData).PreProcessedAnimationPayloads.field_0x48 = 0;
  *(undefined8 *)&(this->MorphTargetData).CurvesPayloads = 0;
  *(undefined8 *)&(this->MorphTargetData).CurvesPayloads.field_0x20 = 0;
  (this->BoneTrackData).MergedRangeStart = 0.0;
  (this->BoneTrackData).MergedRangeEnd = 0.0;
  *(undefined8 *)&(this->MorphTargetData).CurvesPayloads.field_0x8 = 0;
  *(undefined4 *)&(this->MorphTargetData).CurvesPayloads.field_0x28 = 0;
  *(undefined4 *)&(this->MorphTargetData).CurvesPayloads.field_0x2c = 0x80;
  *(undefined4 *)&(this->MorphTargetData).CurvesPayloads.field_0x34 = 0;
  *(undefined4 *)&(this->MorphTargetData).CurvesPayloads.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->MorphTargetData).CurvesPayloads.field_0x40 = 0;
  *(undefined4 *)&(this->MorphTargetData).CurvesPayloads.field_0x48 = 0;
  *(undefined8 *)&(this->MorphTargetData).CurveNodeNamePerPayloadKey = 0;
  *(undefined8 *)&(this->MorphTargetData).CurveNodeNamePerPayloadKey.field_0x8 = 0;
  *(undefined8 *)&(this->MorphTargetData).CurveNodeNamePerPayloadKey.field_0x20 = 0;
  *(undefined4 *)&(this->MorphTargetData).CurveNodeNamePerPayloadKey.field_0x28 = 0;
  *(undefined4 *)&(this->MorphTargetData).CurveNodeNamePerPayloadKey.field_0x2c = 0x80;
  *(undefined4 *)&(this->MorphTargetData).CurveNodeNamePerPayloadKey.field_0x34 = 0;
  *(undefined4 *)&(this->MorphTargetData).CurveNodeNamePerPayloadKey.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->MorphTargetData).CurveNodeNamePerPayloadKey.field_0x40 = 0;
  *(undefined4 *)&(this->MorphTargetData).CurveNodeNamePerPayloadKey.field_0x48 = 0;
  *(undefined8 *)&this->BoneAnimationPayloadQueries = 0;
  *(undefined8 *)&(this->BoneAnimationPayloadQueries).field_0x8 = 0;
  *(undefined8 *)&(this->BoneAnimationPayloadQueries).field_0x20 = 0;
  *(undefined4 *)&(this->BoneAnimationPayloadQueries).field_0x28 = 0;
  *(undefined4 *)&(this->BoneAnimationPayloadQueries).field_0x2c = 0x80;
  *(undefined4 *)&(this->BoneAnimationPayloadQueries).field_0x34 = 0;
  *(undefined4 *)&(this->BoneAnimationPayloadQueries).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->BoneAnimationPayloadQueries).field_0x40 = 0;
  *(undefined4 *)&(this->BoneAnimationPayloadQueries).field_0x48 = 0;
  *(undefined8 *)&this->BoneAnimationPayloadResults = 0;
  *(undefined8 *)&(this->BoneAnimationPayloadResults).field_0x8 = 0;
  *(undefined8 *)&(this->BoneAnimationPayloadResults).field_0x20 = 0;
  *(undefined4 *)&(this->BoneAnimationPayloadResults).field_0x28 = 0;
  *(undefined4 *)&(this->BoneAnimationPayloadResults).field_0x2c = 0x80;
  *(undefined4 *)&(this->BoneAnimationPayloadResults).field_0x34 = 0;
  *(undefined4 *)&(this->BoneAnimationPayloadResults).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->BoneAnimationPayloadResults).field_0x40 = 0;
  *(undefined4 *)&(this->BoneAnimationPayloadResults).field_0x48 = 0;
  return this;
}

// UInterchangeAnimSequenceFactory @ 14e690270

UInterchangeAnimSequenceFactory * __thiscall
UInterchangeAnimSequenceFactory::UInterchangeAnimSequenceFactory
          (UInterchangeAnimSequenceFactory *this,FObjectInitializer *param_1)

{
  UInterchangeFactoryBase::UInterchangeFactoryBase((UInterchangeFactoryBase *)this,param_1);
  this->_padding_ = (longlong)&___7UInterchangeAnimSequenceFactory__6B_;
  *(undefined8 *)&(this->BoneTrackData).PreProcessedAnimationPayloads.field_0x8 = 0;
  (this->AnimSequence).field0_0x0.DebugPtr = (UAnimSequence *)0x0;
  *(undefined8 *)&(this->BoneTrackData).PreProcessedAnimationPayloads = 0;
  *(undefined8 *)&(this->BoneTrackData).PreProcessedAnimationPayloads.field_0x20 = 0;
  *(undefined4 *)&(this->BoneTrackData).PreProcessedAnimationPayloads.field_0x28 = 0;
  *(undefined4 *)&(this->BoneTrackData).PreProcessedAnimationPayloads.field_0x2c = 0x80;
  *(undefined4 *)&(this->BoneTrackData).PreProcessedAnimationPayloads.field_0x34 = 0;
  *(undefined4 *)&(this->BoneTrackData).PreProcessedAnimationPayloads.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->BoneTrackData).PreProcessedAnimationPayloads.field_0x40 = 0;
  *(undefined4 *)&(this->BoneTrackData).PreProcessedAnimationPayloads.field_0x48 = 0;
  *(undefined8 *)&(this->MorphTargetData).CurvesPayloads = 0;
  *(undefined8 *)&(this->MorphTargetData).CurvesPayloads.field_0x20 = 0;
  (this->BoneTrackData).MergedRangeStart = 0.0;
  (this->BoneTrackData).MergedRangeEnd = 0.0;
  *(undefined8 *)&(this->MorphTargetData).CurvesPayloads.field_0x8 = 0;
  *(undefined4 *)&(this->MorphTargetData).CurvesPayloads.field_0x28 = 0;
  *(undefined4 *)&(this->MorphTargetData).CurvesPayloads.field_0x2c = 0x80;
  *(undefined4 *)&(this->MorphTargetData).CurvesPayloads.field_0x34 = 0;
  *(undefined4 *)&(this->MorphTargetData).CurvesPayloads.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->MorphTargetData).CurvesPayloads.field_0x40 = 0;
  *(undefined4 *)&(this->MorphTargetData).CurvesPayloads.field_0x48 = 0;
  *(undefined8 *)&(this->MorphTargetData).CurveNodeNamePerPayloadKey = 0;
  *(undefined8 *)&(this->MorphTargetData).CurveNodeNamePerPayloadKey.field_0x8 = 0;
  *(undefined8 *)&(this->MorphTargetData).CurveNodeNamePerPayloadKey.field_0x20 = 0;
  *(undefined4 *)&(this->MorphTargetData).CurveNodeNamePerPayloadKey.field_0x28 = 0;
  *(undefined4 *)&(this->MorphTargetData).CurveNodeNamePerPayloadKey.field_0x2c = 0x80;
  *(undefined4 *)&(this->MorphTargetData).CurveNodeNamePerPayloadKey.field_0x34 = 0;
  *(undefined4 *)&(this->MorphTargetData).CurveNodeNamePerPayloadKey.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->MorphTargetData).CurveNodeNamePerPayloadKey.field_0x40 = 0;
  *(undefined4 *)&(this->MorphTargetData).CurveNodeNamePerPayloadKey.field_0x48 = 0;
  *(undefined8 *)&this->BoneAnimationPayloadQueries = 0;
  *(undefined8 *)&(this->BoneAnimationPayloadQueries).field_0x8 = 0;
  *(undefined8 *)&(this->BoneAnimationPayloadQueries).field_0x20 = 0;
  *(undefined4 *)&(this->BoneAnimationPayloadQueries).field_0x28 = 0;
  *(undefined4 *)&(this->BoneAnimationPayloadQueries).field_0x2c = 0x80;
  *(undefined4 *)&(this->BoneAnimationPayloadQueries).field_0x34 = 0;
  *(undefined4 *)&(this->BoneAnimationPayloadQueries).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->BoneAnimationPayloadQueries).field_0x40 = 0;
  *(undefined4 *)&(this->BoneAnimationPayloadQueries).field_0x48 = 0;
  *(undefined8 *)&this->BoneAnimationPayloadResults = 0;
  *(undefined8 *)&(this->BoneAnimationPayloadResults).field_0x8 = 0;
  *(undefined8 *)&(this->BoneAnimationPayloadResults).field_0x20 = 0;
  *(undefined4 *)&(this->BoneAnimationPayloadResults).field_0x28 = 0;
  *(undefined4 *)&(this->BoneAnimationPayloadResults).field_0x2c = 0x80;
  *(undefined4 *)&(this->BoneAnimationPayloadResults).field_0x34 = 0;
  *(undefined4 *)&(this->BoneAnimationPayloadResults).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->BoneAnimationPayloadResults).field_0x40 = 0;
  *(undefined4 *)&(this->BoneAnimationPayloadResults).field_0x48 = 0;
  return this;
}

// ~UInterchangeAnimSequenceFactory @ 14e691cd0

void __thiscall
UInterchangeAnimSequenceFactory::~UInterchangeAnimSequenceFactory
          (UInterchangeAnimSequenceFactory *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UInterchangeAnimSequenceFactory__6B_;
  *(undefined4 *)&(this->BoneAnimationPayloadResults).field_0x48 = 0;
  pvVar1 = *(void **)&(this->BoneAnimationPayloadResults).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->BoneAnimationPayloadResults);
  *(undefined4 *)&(this->BoneAnimationPayloadQueries).field_0x48 = 0;
  pvVar1 = *(void **)&(this->BoneAnimationPayloadQueries).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadQuery>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadQuery>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadQuery>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->BoneAnimationPayloadQueries);
  *(undefined4 *)&(this->MorphTargetData).CurveNodeNamePerPayloadKey.field_0x48 = 0;
  pvVar1 = *(void **)&(this->MorphTargetData).CurveNodeNamePerPayloadKey.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->MorphTargetData).CurveNodeNamePerPayloadKey);
  *(undefined4 *)&(this->MorphTargetData).CurvesPayloads.field_0x48 = 0;
  pvVar1 = *(void **)&(this->MorphTargetData).CurvesPayloads.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,UE::Interchange::FAnimationPayloadData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,UE::Interchange::FAnimationPayloadData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,UE::Interchange::FAnimationPayloadData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MorphTargetData);
  *(undefined4 *)&(this->BoneTrackData).PreProcessedAnimationPayloads.field_0x48 = 0;
  pvVar1 = *(void **)&(this->BoneTrackData).PreProcessedAnimationPayloads.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UInterchangeSceneNode_const_*,UE::Interchange::FAnimationPayloadData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UInterchangeSceneNode_const_*,UE::Interchange::FAnimationPayloadData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UInterchangeSceneNode_const_*,UE::Interchange::FAnimationPayloadData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->BoneTrackData);
  UInterchangeFactoryBase::~UInterchangeFactoryBase((UInterchangeFactoryBase *)this);
  return;
}

// operator() @ 14e6936e0

void __thiscall
`UInterchangeAnimSequenceFactory::CreatePayloadTasks'::__l14::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  FString *pFVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  wchar_t *pwVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  TTuple<FString,FInterchangeAnimationPayLoadKey> *pTVar13;
  bool bVar14;
  longlong local_res20;
  TArray<TTuple<FString,FInterchangeAnimationPayLoadKey>,TSizedDefaultAllocator<32>_> local_78;
  FAnimationPayloadData *local_68;
  int local_60;
  TArray<UE::Interchange::FAnimationPayloadQuery,TSizedDefaultAllocator<32>_> local_58;
  
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1063,
               "UInterchangeAnimSequenceFactory::GetAnimationPayloadMultipleQueries",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Animation\\InterchangeAnimSequenceFactory.cpp"
               ,0x427);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1063);
  }
  uVar10 = 0;
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  TMapBase<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadQuery,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadQuery,0>_>
  ::GenerateValueArray<TSizedDefaultAllocator<32>_>
            ((TMapBase<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadQuery,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadQuery,0>_>
              *)(*(longlong *)this + 0x138),&local_58);
  (**(code **)(**(longlong **)((longlong)this + 8) + 0x18))
            (*(longlong **)((longlong)this + 8),&local_68,&local_58);
  lVar9 = *(longlong *)this;
  if (local_60 == *(int *)(lVar9 + 0x140) - *(int *)(lVar9 + 0x16c)) {
    local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.ArrayNum = 0;
    local_78.ArrayMax = 0;
    TMapBase<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadQuery,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadQuery,0>_>
    ::GenerateKeyArray<TSizedDefaultAllocator<32>_>
              ((TMapBase<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadQuery,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadQuery,0>_>
                *)(lVar9 + 0x138),&local_78);
    if (0 < local_60) {
      local_res20 = 0;
      uVar12 = uVar10;
      do {
        uVar11 = (uint)uVar12;
        lVar9 = *(longlong *)this;
        uVar8 = ~uVar11 >> 0x1f;
        uVar4 = 0;
        if ((int)uVar11 < local_78.ArrayNum) {
          uVar4 = uVar8;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pTVar13 = (TTuple<FString,FInterchangeAnimationPayLoadKey> *)
                  (local_78.AllocatorInstance.Data + uVar10);
        iVar6 = *(int *)&pTVar13->field_0x8 + -1;
        if (*(int *)&pTVar13->field_0x8 == 0) {
          pwVar7 = L"";
          iVar6 = 0;
        }
        else {
          pwVar7 = *(wchar_t **)pTVar13;
        }
        uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar7);
        uVar5 = ::GetTypeHash((FInterchangeAnimationPayLoadKey *)&pTVar13->field_0x10);
        iVar6 = TSet<TTuple<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadData>,TDefaultMapHashableKeyFuncs<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadData,0>,FDefaultSetAllocator>
                ::FindIndexByHash<TTuple<FString,FInterchangeAnimationPayLoadKey>_>
                          ((TSet<TTuple<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadData>,TDefaultMapHashableKeyFuncs<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadData,0>,FDefaultSetAllocator>
                            *)(lVar9 + 0x188),
                           (uVar4 >> 2) + uVar4 * 0x40 + -0x61c88647 + uVar5 ^ uVar4,pTVar13);
        if (iVar6 == -1) {
          bVar3 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<5935353277871817777>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Animation\\InterchangeAnimSequenceFactory.cpp"
                             ,0x431,
                             "BoneAnimationPayloadResults.Contains(TmpPayloadKeys[AnimationIndex])")
          ;
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        else {
          uVar4 = 0;
          if ((int)uVar11 < local_60) {
            uVar4 = uVar8;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          pFVar2 = &local_68->SceneNodeUniqueID;
          lVar9 = *(longlong *)this;
          uVar4 = 0;
          if ((int)uVar11 < local_78.ArrayNum) {
            uVar4 = uVar8;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          pTVar13 = (TTuple<FString,FInterchangeAnimationPayLoadKey> *)
                    (local_78.AllocatorInstance.Data + uVar10);
          iVar6 = *(int *)&pTVar13->field_0x8 + -1;
          if (*(int *)&pTVar13->field_0x8 == 0) {
            pwVar7 = L"";
            iVar6 = 0;
          }
          else {
            pwVar7 = *(wchar_t **)pTVar13;
          }
          uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar7);
          uVar8 = ::GetTypeHash((FInterchangeAnimationPayLoadKey *)&pTVar13->field_0x10);
          iVar6 = TSet<TTuple<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadData>,TDefaultMapHashableKeyFuncs<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadData,0>,FDefaultSetAllocator>
                  ::FindIndexByHash<TTuple<FString,FInterchangeAnimationPayLoadKey>_>
                            ((TSet<TTuple<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadData>,TDefaultMapHashableKeyFuncs<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadData,0>,FDefaultSetAllocator>
                              *)(lVar9 + 0x188),
                             uVar4 * 0x40 + (uVar4 >> 2) + 0x9e3779b9 + uVar8 ^ uVar4,pTVar13);
          if (iVar6 == -1) {
            lVar9 = 0;
LAB_14e693a0a:
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Pair != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                               ,0x288,L"");
            if (bVar3) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
          }
          else {
            lVar9 = (longlong)iVar6 * 200 + *(longlong *)(lVar9 + 0x188);
            if (lVar9 == 0) goto LAB_14e693a0a;
          }
          UE::Interchange::FAnimationPayloadData::operator=
                    ((FAnimationPayloadData *)(lVar9 + 0x28),
                     (FAnimationPayloadData *)
                     ((longlong)&(pFVar2->Data).AllocatorInstance.Data + local_res20));
        }
        uVar12 = (ulonglong)(uVar11 + 1);
        local_res20 = local_res20 + 0x98;
        uVar10 = uVar10 + 0x28;
      } while ((int)(uVar11 + 1) < local_60);
    }
    DestructItems<TTuple<FString,FInterchangeAnimationPayLoadKey>,int>
              ((TTuple<FString,FInterchangeAnimationPayLoadKey> *)local_78.AllocatorInstance.Data,
               local_78.ArrayNum);
    if ((TTuple<FString,FInterchangeAnimationPayLoadKey> *)local_78.AllocatorInstance.Data !=
        (TTuple<FString,FInterchangeAnimationPayLoadKey> *)0x0) {
      FMemory::Free(local_78.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5935353277871817771>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Animation\\InterchangeAnimSequenceFactory.cpp"
                       ,0x42b,"AnimationPayloads.Num() == BoneAnimationPayloadQueries.Num()");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  DestructItems<UE::Interchange::FAnimationPayloadData,int>(local_68,local_60);
  if (local_68 != (FAnimationPayloadData *)0x0) {
    FMemory::Free(local_68);
  }
  DestructItems<UE::Interchange::FAnimationPayloadQuery,int>
            ((FAnimationPayloadQuery *)local_58.AllocatorInstance.Data,local_58.ArrayNum);
  if ((FAnimationPayloadQuery *)local_58.AllocatorInstance.Data != (FAnimationPayloadQuery *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// operator() @ 14e6944c0

void __thiscall
`UInterchangeAnimSequenceFactory::CreatePayloadTasks'::__l24::<lambda_2>::operator()(void *this)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  FAnimationPayloadData *pFVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  FAnimationPayloadData *this_00;
  int iVar9;
  wchar_t *pwVar10;
  longlong lVar11;
  wchar_t *pwVar12;
  bool bVar13;
  ForAnyElementType local_98;
  int local_90;
  int local_8c;
  FAnimationPayloadData *local_88;
  int local_80;
  FAnimationPayloadQuery local_78;
  
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1095,
               "UInterchangeAnimSequenceFactory::GetAnimationPayloadSingleQuery",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Animation\\InterchangeAnimSequenceFactory.cpp"
               ,0x447);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1095);
  }
  iVar8 = *(int *)((longlong)this + 0x10);
  pwVar12 = L"";
  lVar1 = *(longlong *)this;
  if (iVar8 == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = *(wchar_t **)((longlong)this + 8);
  }
  lVar11 = 0;
  iVar9 = iVar8 + -1;
  if (iVar8 == 0) {
    iVar9 = 0;
  }
  uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar10);
  uVar7 = ::GetTypeHash((FInterchangeAnimationPayLoadKey *)((longlong)this + 0x18));
  iVar8 = TSet<TTuple<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadQuery>,TDefaultMapHashableKeyFuncs<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadQuery,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TTuple<FString,FInterchangeAnimationPayLoadKey>_>
                    ((TSet<TTuple<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadQuery>,TDefaultMapHashableKeyFuncs<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadQuery,0>,FDefaultSetAllocator>
                      *)(lVar1 + 0x138),uVar6 * 0x40 + (uVar6 >> 2) + uVar7 + 0x9e3779b9 ^ uVar6,
                     (TTuple<FString,FInterchangeAnimationPayLoadKey> *)((longlong)this + 8));
  if (((iVar8 == -1) ||
      (lVar11 = (longlong)iVar8 * 0x80 + *(longlong *)(lVar1 + 0x138), lVar11 == 0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x288,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  plVar2 = *(longlong **)((longlong)this + 0x30);
  pcVar3 = *(code **)(*plVar2 + 0x18);
  ::FString::FString(&local_78.SceneNodeUniqueID,(FString *)(lVar11 + 0x28));
  ::FString::FString(&local_78.PayloadKey.UniqueId,(FString *)(lVar11 + 0x38));
  local_78.TimeDescription.BakeFrequency = *(double *)(lVar11 + 0x50);
  local_78.TimeDescription.RangeStartSecond = *(double *)(lVar11 + 0x58);
  local_78.PayloadKey.Type = *(EInterchangeAnimationPayLoadType *)(lVar11 + 0x48);
  local_78.TimeDescription.RangeStopSecond = *(double *)(lVar11 + 0x60);
  iVar8 = 0;
  local_78.HashStringCache.field0_0x0.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_78.HashStringCache.field0_0x0.TypedValue.Data.ArrayNum = 0;
  local_78.HashStringCache.field0_0x0.TypedValue.Data.ArrayMax = -1;
  if (*(int *)(lVar11 + 0x74) != -1) {
    ::FString::FString((FString *)&local_78.HashStringCache,(FString *)(lVar11 + 0x68));
  }
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90 = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x50,8,1,0,&local_98,1,&local_8c);
  ConstructItems<UE::Interchange::FAnimationPayloadQuery,UE::Interchange::FAnimationPayloadQuery,int>
            (local_98.Data,&local_78,1);
  (*pcVar3)(plVar2,&local_88,&local_98);
  DestructItems<UE::Interchange::FAnimationPayloadQuery,int>
            ((FAnimationPayloadQuery *)local_98.Data,local_90);
  if ((FAnimationPayloadQuery *)local_98.Data != (FAnimationPayloadQuery *)0x0) {
    FMemory::Free(local_98.Data);
  }
  if ((local_78.HashStringCache.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
     (local_78.HashStringCache.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_78.HashStringCache.field0_0x0.TypedValue.Data.AllocatorInstance.Data
                 );
  }
  if (local_78.PayloadKey.UniqueId.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.PayloadKey.UniqueId.Data.AllocatorInstance.Data);
  }
  if (local_78.SceneNodeUniqueID.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.SceneNodeUniqueID.Data.AllocatorInstance.Data);
  }
  if (0 < local_80) {
    lVar1 = *(longlong *)this;
    if (*(int *)((longlong)this + 0x10) != 0) {
      pwVar12 = *(wchar_t **)((longlong)this + 8);
      iVar8 = *(int *)((longlong)this + 0x10) + -1;
    }
    uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,pwVar12);
    uVar7 = ::GetTypeHash((FInterchangeAnimationPayLoadKey *)((longlong)this + 0x18));
    iVar8 = TSet<TTuple<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadData>,TDefaultMapHashableKeyFuncs<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadData,0>,FDefaultSetAllocator>
            ::FindIndexByHash<TTuple<FString,FInterchangeAnimationPayLoadKey>_>
                      ((TSet<TTuple<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadData>,TDefaultMapHashableKeyFuncs<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadData,0>,FDefaultSetAllocator>
                        *)(lVar1 + 0x188),(uVar6 >> 2) + uVar6 * 0x40 + uVar7 + 0x9e3779b9 ^ uVar6,
                       (TTuple<FString,FInterchangeAnimationPayLoadKey> *)((longlong)this + 8));
    if (iVar8 != -1) {
      if ((local_80 < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar4 = local_88;
      this_00 = TMapBase<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadData,0>_>
                ::FindChecked((TMapBase<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadData,0>_>
                               *)(*(longlong *)this + 0x188),
                              (TTuple<FString,FInterchangeAnimationPayLoadKey> *)
                              ((longlong)this + 8));
      UE::Interchange::FAnimationPayloadData::operator=(this_00,pFVar4);
      goto LAB_14e6947c2;
    }
  }
  bVar5 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<5935353277871817802>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Animation\\InterchangeAnimSequenceFactory.cpp"
                     ,0x44a,
                     "AnimationPayloads.IsValidIndex(0) && BoneAnimationPayloadResults.Contains(SceneNodeUidAndPayloadKey)"
                    );
  if (bVar5) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_14e6947c2:
  DestructItems<UE::Interchange::FAnimationPayloadData,int>(local_88,local_80);
  if (local_88 != (FAnimationPayloadData *)0x0) {
    FMemory::Free(local_88);
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// BackupSourceData @ 14e6979a0

void __thiscall
UInterchangeAnimSequenceFactory::BackupSourceData
          (UInterchangeAnimSequenceFactory *this,UObject *param_1)

{
  return;
}

// BeginImportAsset_GameThread @ 14e6979c0

FImportAssetResult * __thiscall
UInterchangeAnimSequenceFactory::BeginImportAsset_GameThread
          (UInterchangeAnimSequenceFactory *this,FImportAssetResult *__return_storage_ptr__,
          FImportAssetObjectParams *param_1)

{
  if (CpuChannel->Enabled < 0) {
    __return_storage_ptr__->bIsFactorySkipAsset = false;
    __return_storage_ptr__->ImportedObject = (UObject *)0x0;
    return __return_storage_ptr__;
  }
  FCpuProfilerTrace::GetOrCreateSpecId
            (&__CpuProfilerEventSpecId1111,
             "UInterchangeAnimSequenceFactory::BeginImportAsset_GameThread",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Animation\\InterchangeAnimSequenceFactory.cpp"
             ,0x457);
  FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1111);
  __return_storage_ptr__->bIsFactorySkipAsset = false;
  __return_storage_ptr__->ImportedObject = (UObject *)0x0;
  FCpuProfilerTrace::OutputEndEvent();
  return __return_storage_ptr__;
}

// BuildObject_GameThread @ 14e6982b0

void __thiscall
UInterchangeAnimSequenceFactory::BuildObject_GameThread
          (UInterchangeAnimSequenceFactory *this,FSetupObjectParams *param_1,bool *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Animation\\InterchangeAnimSequenceFactory.cpp"
                       ,0x62d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *param_2 = false;
  return;
}

// ClearBackupSourceData @ 14e698540

void __thiscall
UInterchangeAnimSequenceFactory::ClearBackupSourceData
          (UInterchangeAnimSequenceFactory *this,UObject *param_1)

{
  return;
}

// CreatePayloadTasks @ 14e6992b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UInterchangeAnimSequenceFactory::CreatePayloadTasks
          (UInterchangeAnimSequenceFactory *this,FImportAssetObjectParams *param_1,bool param_2,
          TArray<TSharedPtr<UE::Interchange::FInterchangeTaskBase,1>,TSizedDefaultAllocator<32>_>
          *param_3)

{
  ulonglong uVar1;
  UInterchangeTranslatorBase *this_00;
  UInterchangeAnimSequenceFactoryNode *this_01;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  code *pcVar4;
  TMap<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadData,0>_>
  *this_02;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  UInterchangeAnimSequenceFactory *pUVar9;
  double dVar10;
  double dVar11;
  longlong *plVar12;
  TArray<TSharedPtr<UE::Interchange::FInterchangeTaskBase,1>,TSizedDefaultAllocator<32>_> *pTVar13;
  char cVar14;
  uint uVar15;
  uint uVar16;
  UClass *pUVar17;
  longlong *plVar18;
  TReferenceControllerBase<1> *pTVar19;
  undefined8 *puVar20;
  byte bVar21;
  int iVar22;
  int iVar23;
  wchar_t *pwVar24;
  TTuple<FString,FInterchangeAnimationPayLoadKey> *pTVar25;
  TReferenceControllerBase<1> *pTVar26;
  uint *puVar27;
  TBitArray<FDefaultBitArrayAllocator> *pTVar28;
  uint uVar29;
  bool bVar30;
  undefined1 auStack_4f8 [32];
  TReferenceControllerBase<1> **local_4d8;
  FScriptContainerElement *local_4d0;
  longlong local_4c8;
  longlong local_4c0;
  undefined8 local_4b8;
  char local_4a8;
  bool local_4a7;
  EInterchangeTaskThread local_4a6;
  undefined1 local_4a5;
  undefined1 local_4a4 [4];
  TMap<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadData,0>_>
  *local_4a0;
  TReferenceControllerBase<1> *local_498;
  TReferenceControllerBase<1> *local_490;
  double local_488;
  UInterchangeAnimSequenceFactory *local_480;
  TReferenceControllerBase<1> *local_478;
  TReferenceControllerBase<1> *local_470;
  double local_468;
  double local_460;
  longlong *local_458;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_450;
  undefined8 local_430;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_428;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_408;
  longlong *local_3e8;
  uint uStack_3e0;
  uint uStack_3dc;
  TBitArray<FDefaultBitArrayAllocator> *local_3d8;
  undefined4 uStack_3d0;
  uint uStack_3cc;
  uint local_3c8;
  uint uStack_3c4;
  int iStack_3c0;
  undefined4 uStack_3bc;
  undefined1 local_3b8 [16];
  TArray<TSharedPtr<UE::Interchange::FInterchangeTaskBase,1>,TSizedDefaultAllocator<32>_> *local_3a8
  ;
  FAnimationPayloadData local_3a0;
  FAnimationPayloadData local_308;
  longlong *local_270;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_268;
  undefined8 uStack_248;
  UInterchangeAnimSequenceFactory *local_240;
  FString local_238;
  FString local_228;
  undefined1 local_218;
  longlong *local_210;
  TTuple<FString,FInterchangeAnimationPayLoadKey> *local_208;
  FString *local_200;
  TTuple<FString,FInterchangeAnimationPayLoadKey> *local_1f8;
  FString *local_1f0;
  FString local_1e8;
  FString local_1d8;
  undefined1 local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  void *local_1a8;
  undefined4 local_1a0;
  int local_19c;
  FString local_198;
  FString local_188;
  undefined1 local_178;
  double local_170;
  double local_168;
  double local_160;
  void *local_158;
  undefined4 local_150;
  int local_14c;
  code *local_148 [2];
  undefined **local_138;
  UInterchangeAnimSequenceFactory *local_130;
  longlong *local_128;
  undefined8 local_120;
  code *local_118 [5];
  undefined8 *local_f0;
  undefined1 local_e8 [32];
  uint *local_c8;
  uint local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  int local_b4;
  void *local_a8;
  undefined4 local_a0;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStack_4f8;
  bVar30 = CpuChannel->Enabled < 0;
  local_4a6 = param_2;
  local_480 = this;
  local_3a8 = param_3;
  if (bVar30) {
    local_4a8 = '\0';
  }
  else {
    local_4a8 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1016,"UInterchangeAnimSequenceFactory::CreatePayloadTasks",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Animation\\InterchangeAnimSequenceFactory.cpp"
               ,0x3f8);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1016);
  }
  cVar14 = !bVar30;
  this_00 = param_1->Translator;
  if (this_00 != (UInterchangeTranslatorBase *)0x0) {
    pUVar17 = Z_Construct_UClass_UInterchangeAnimationPayloadInterface_NoRegister();
    plVar18 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_00,pUVar17);
    if ((plVar18 != (longlong *)0x0) &&
       (this_01 = (UInterchangeAnimSequenceFactoryNode *)param_1->AssetNode,
       this_01 != (UInterchangeAnimSequenceFactoryNode *)0x0)) {
      pUVar17 = Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode_NoRegister();
      iVar22 = (int)pUVar17->_padding_;
      if ((iVar22 <= *(int *)(this_01->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar22 * 8) ==
          &pUVar17->_padding_)) {
        local_4a7 = false;
        UInterchangeAnimSequenceFactoryNode::GetCustomImportBoneTracks(this_01,&local_4a7);
        if (local_4a7 != false) {
          local_488 = __real_403e000000000000;
          UInterchangeAnimSequenceFactoryNode::GetCustomImportBoneTracksSampleRate
                    (this_01,&local_488);
          local_460 = 0.0;
          UInterchangeAnimSequenceFactoryNode::GetCustomImportBoneTracksRangeStart
                    (this_01,&local_460);
          local_468 = __real_3ff0000000000000 / local_488;
          UInterchangeAnimSequenceFactoryNode::GetCustomImportBoneTracksRangeStop
                    (this_01,&local_468);
          local_bc = 0x80;
          local_e8._0_8_ = 0;
          local_e8._8_8_ = 0;
          local_c8 = (uint *)0x0;
          uVar15 = 0;
          local_c0 = 0;
          local_b4 = 0;
          local_a8 = (void *)0x0;
          local_a0 = 0;
          local_b8 = 0xffffffff;
          UInterchangeAnimSequenceFactoryNode::GetSceneNodeAnimationPayloadKeys
                    (this_01,(TMap<FString,FInterchangeAnimationPayLoadKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FInterchangeAnimationPayLoadKey,0>_>
                              *)local_e8);
          TSet<TTuple<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadQuery>,TDefaultMapHashableKeyFuncs<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadQuery,0>,FDefaultSetAllocator>
          ::Empty((TSet<TTuple<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadQuery>,TDefaultMapHashableKeyFuncs<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadQuery,0>,FDefaultSetAllocator>
                   *)&this->BoneAnimationPayloadQueries,local_e8._8_4_ - local_b4);
          local_4a0 = &this->BoneAnimationPayloadResults;
          TSet<TTuple<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadData>,TDefaultMapHashableKeyFuncs<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadData,0>,FDefaultSetAllocator>
          ::Empty((TSet<TTuple<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadData>,TDefaultMapHashableKeyFuncs<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadData,0>,FDefaultSetAllocator>
                   *)local_4a0,local_e8._8_4_ - local_b4);
          cVar14 = (**(code **)(*plVar18 + 0x10))(plVar18);
          if (cVar14 == '\0') {
            local_3c8 = 0;
            uStack_3dc = 1;
            uStack_3cc = local_3c8;
            if (local_c0 != 0) {
              puVar27 = (uint *)(local_e8 + 0x10);
              if (local_c8 != (uint *)0x0) {
                puVar27 = local_c8;
              }
              uVar29 = *puVar27;
              uVar15 = 0;
              local_3c8 = 0;
              while (uVar29 == 0) {
                uVar15 = uVar15 + 1;
                local_3c8 = local_3c8 + 0x20;
                uStack_3cc = local_c0;
                if ((int)(((int)(local_c0 - 1) >> 0x1f & 0x1fU) + (local_c0 - 1)) >> 5 < (int)uVar15
                   ) goto LAB_14e699aff;
                uVar29 = puVar27[(int)uVar15];
              }
              uStack_3dc = -uVar29 & uVar29;
              uVar1 = (ulonglong)uStack_3dc * 2 + 1;
              lVar3 = 0x3f;
              if (uVar1 != 0) {
                for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
                }
              }
              local_3b8._4_4_ = (undefined4)lVar3;
              uStack_3cc = local_3b8._4_4_ + -1 + local_3c8;
              if ((int)local_c0 < (int)uStack_3cc) {
                uStack_3cc = local_c0;
              }
            }
LAB_14e699aff:
            local_458 = (longlong *)local_e8;
            uVar29 = local_c0 & 0xffffffe0;
            iStack_3c0 = local_e8._8_4_ - local_b4;
            TStack_450.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10);
            uStack_3d0 = 0xffffffff;
            TStack_450.CurrentBitIndex = uStack_3cc;
            TStack_450.UnvisitedBitMask = 0xffffffff;
            TStack_450._padding_ = CONCAT44(uStack_3dc,uVar15);
            iVar22 = (int)local_c0 >> 5;
            bVar21 = (byte)local_c0;
            local_4a0 = (TMap<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadData,0>_>
                         *)CONCAT44(local_4a0._4_4_,local_c0);
            TStack_450._28_4_ = uStack_3cc;
            TStack_450.BaseBitIndex = local_3c8;
            local_430 = CONCAT44(uStack_3bc,iStack_3c0);
            uVar16 = local_c0;
            local_3e8 = local_458;
            uStack_3e0 = uVar15;
            local_3d8 = TStack_450.Array;
            uStack_3c4 = uStack_3cc;
            if ((int)local_c0 < 0) {
              bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                 ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x7af,L"");
              if (bVar30) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              uVar16 = (uint)local_4a0;
            }
            dVar7 = _UNK_151444f58;
            dVar6 = ___xmm_0000000000000000403e000000000000;
            dVar5 = __real_3fa1111111111111;
            if (uVar16 != local_c0) {
              puVar27 = (uint *)(local_e8 + 0x10);
              if (local_c8 != (uint *)0x0) {
                puVar27 = local_c8;
              }
              uVar15 = -1 << (bVar21 & 0x1f) & puVar27[iVar22];
              while (uVar15 == 0) {
                iVar22 = iVar22 + 1;
                uVar29 = uVar29 + 0x20;
                if ((int)(((int)(local_c0 - 1) >> 0x1f & 0x1fU) + (local_c0 - 1)) >> 5 < iVar22) {
                  local_4a0 = (TMap<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadData,0>_>
                               *)CONCAT44(local_4a0._4_4_,local_c0);
                  goto LAB_14e699c22;
                }
                uVar15 = puVar27[iVar22];
              }
              uVar1 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
              lVar3 = 0x3f;
              if (uVar1 != 0) {
                for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
                }
              }
              local_3b8._8_4_ = (undefined4)lVar3;
              uVar29 = local_3b8._8_4_ + -1 + uVar29;
              if ((int)local_c0 < (int)uVar29) {
                uVar29 = local_c0;
              }
              local_4a0 = (TMap<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadData,0>_>
                           *)CONCAT44(local_4a0._4_4_,uVar29);
            }
LAB_14e699c22:
            iVar22 = (uint)local_4a0;
            while( true ) {
              plVar12 = local_458;
              if ((int)local_458[1] - *(int *)((longlong)local_458 + 0x34) != (int)local_430) {
                local_4a4[0] = 0;
                `TSparseArray<TSparseSetElement<TTuple<FString,FInterchangeAnimationPayLoadKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_4a4);
              }
              dVar11 = local_460;
              dVar10 = local_468;
              dVar8 = local_488;
              if (((TStack_450.CurrentBitIndex == iVar22) &&
                  (TStack_450.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10)))
                 && (cVar14 = local_4a8, plVar12 == (longlong *)local_e8)) break;
              pTVar25 = (TTuple<FString,FInterchangeAnimationPayLoadKey> *)
                        ((longlong)TStack_450.CurrentBitIndex * 0x30 + *plVar12);
              ::FString::FString(&local_198,(FString *)pTVar25);
              ::FString::FString(&local_188,(FString *)&pTVar25->field_0x10);
              local_178 = pTVar25->field_0x20;
              local_1f0 = &local_198;
              local_170 = dVar8;
              local_168 = dVar11;
              local_160 = dVar10;
              local_158 = (void *)0x0;
              iVar23 = 0;
              local_150 = 0;
              local_14c = -1;
              local_1f8 = pTVar25;
              TSet<TTuple<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadQuery>,TDefaultMapHashableKeyFuncs<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadQuery,0>,FDefaultSetAllocator>
              ::
              Emplace<TPairInitializer<TTuple<FString,FInterchangeAnimationPayLoadKey>_const_&,UE::Interchange::FAnimationPayloadQuery_const_&>_>
                        ((TSet<TTuple<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadQuery>,TDefaultMapHashableKeyFuncs<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadQuery,0>,FDefaultSetAllocator>
                          *)&local_480->BoneAnimationPayloadQueries,
                         (TPairInitializer<TTuple<FString,FInterchangeAnimationPayLoadKey>_const_&,UE::Interchange::FAnimationPayloadQuery_const_&>
                          *)(local_3b8 + 0xc),(bool *)&local_1f8);
              ::FString::FString(&local_308.SceneNodeUniqueID,(FString *)pTVar25);
              local_308.RangeEndTime = dVar5;
              local_308.Curves.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_308.Curves.ArrayNum = 0;
              local_308.Curves.ArrayMax = 0;
              local_308.InbetweenCurveNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_308.InbetweenCurveNames.ArrayNum = 0;
              local_308.InbetweenCurveNames.ArrayMax = 0;
              local_308.InbetweenFullWeights.AllocatorInstance.Data = (FScriptContainerElement *)0x0
              ;
              local_308.InbetweenFullWeights.ArrayNum = 0;
              local_308.InbetweenFullWeights.ArrayMax = 0;
              local_308.StepCurves.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_308.StepCurves.ArrayNum = 0;
              local_308.StepCurves.ArrayMax = 0;
              local_308.BakeFrequency = dVar6;
              local_308.RangeStartTime = dVar7;
              local_308.Transforms.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_308.Transforms.ArrayNum = 0;
              local_308.Transforms.ArrayMax = 0;
              ::FString::FString(&local_308.PayloadKey.UniqueId,(FString *)&pTVar25->field_0x10);
              local_308.PayloadKey.Type = pTVar25->field_0x20;
              local_308.AdditionalSupportedType = NONE;
              if (*(int *)&pTVar25->field_0x8 == 0) {
                pwVar24 = L"";
              }
              else {
                pwVar24 = *(wchar_t **)pTVar25;
                iVar23 = *(int *)&pTVar25->field_0x8 + -1;
              }
              uVar15 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar23,pwVar24);
              uVar29 = ::GetTypeHash((FInterchangeAnimationPayLoadKey *)&pTVar25->field_0x10);
              pUVar9 = local_480;
              TMapBase<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadData,0>_>
              ::
              FindOrAddImpl<TTuple<FString,FInterchangeAnimationPayLoadKey>_const_&,UE::Interchange::FAnimationPayloadData>
                        ((TMapBase<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadData,0>_>
                          *)&local_480->BoneAnimationPayloadResults,
                         uVar15 * 0x40 + (uVar15 >> 2) + uVar29 + 0x9e3779b9 ^ uVar15,pTVar25,
                         &local_308);
              if (local_308.PayloadKey.UniqueId.Data.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_308.PayloadKey.UniqueId.Data.AllocatorInstance.Data);
              }
              if (local_308.Transforms.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_308.Transforms.AllocatorInstance.Data);
              }
              DestructItems<FInterchangeStepCurve,int>
                        ((FInterchangeStepCurve *)local_308.StepCurves.AllocatorInstance.Data,
                         local_308.StepCurves.ArrayNum);
              if ((FInterchangeStepCurve *)local_308.StepCurves.AllocatorInstance.Data !=
                  (FInterchangeStepCurve *)0x0) {
                FMemory::Free(local_308.StepCurves.AllocatorInstance.Data);
              }
              if (local_308.InbetweenFullWeights.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_308.InbetweenFullWeights.AllocatorInstance.Data);
              }
              DestructItems<FString,int>
                        ((FString *)local_308.InbetweenCurveNames.AllocatorInstance.Data,
                         local_308.InbetweenCurveNames.ArrayNum);
              if (local_308.InbetweenCurveNames.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_308.InbetweenCurveNames.AllocatorInstance.Data);
              }
              DestructItems<FRichCurve,int>
                        ((FRichCurve *)local_308.Curves.AllocatorInstance.Data,
                         local_308.Curves.ArrayNum);
              if ((FRichCurve *)local_308.Curves.AllocatorInstance.Data != (FRichCurve *)0x0) {
                FMemory::Free(local_308.Curves.AllocatorInstance.Data);
              }
              if (local_308.SceneNodeUniqueID.Data.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_308.SceneNodeUniqueID.Data.AllocatorInstance.Data);
              }
              local_240 = pUVar9;
              ::FString::FString(&local_238,(FString *)pTVar25);
              ::FString::FString(&local_228,(FString *)&pTVar25->field_0x10);
              local_218 = pTVar25->field_0x20;
              local_210 = plVar18;
              pTVar19 = ::operator_new(0xb0);
              if (pTVar19 == (TReferenceControllerBase<1> *)0x0) {
                pTVar19 = (TReferenceControllerBase<1> *)0x0;
                pTVar26 = (TReferenceControllerBase<1> *)&DAT_00000010;
              }
              else {
                pTVar19->SharedReferenceCount = (atomic<int>)0x1;
                pTVar19->WeakReferenceCount = (atomic<int>)0x1;
                pTVar19->_padding_ =
                     (longlong)
                     &
                     ___7__TIntrusiveReferenceController_VFInterchangeTaskLambda_Interchange_UE___00_SharedPointerInternals__6B_
                ;
                local_118[0] = (code *)0x0;
                local_f0 = (undefined8 *)0x0;
                puVar20 = FMemory::Malloc(0x40,8);
                *puVar20 = &UE::Core::Private::Function::
                            TFunction_OwnedObject<`UInterchangeAnimSequenceFactory::CreatePayloadTasks'::`24'::<lambda_2>,0,1>
                            ::_vftable_;
                puVar20[1] = local_240;
                local_f0 = puVar20;
                ::FString::FString((FString *)(puVar20 + 2),&local_238);
                ::FString::FString((FString *)(puVar20 + 4),&local_228);
                *(undefined1 *)(puVar20 + 6) = local_218;
                puVar20[7] = local_210;
                if (puVar20 + 1 != (undefined8 *)0x0) {
                  local_118[0] = UE::Core::Private::Function::
                                 TFunctionRefCaller<`UInterchangeAnimSequenceFactory::CreatePayloadTasks'::__l24::<lambda_2>,void>
                                 ::Call;
                }
                UE::Interchange::FInterchangeTaskLambda::FInterchangeTaskLambda
                          ((FInterchangeTaskLambda *)(pTVar19 + 1),local_4a6,
                           (TFunction<void___cdecl(void)> *)local_118);
                pTVar26 = pTVar19 + 1;
                if ((pTVar26 == (TReferenceControllerBase<1> *)0x0) &&
                   (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                       ("InObject != nullptr",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x246,L""), bVar30)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                LOCK();
                pTVar19->SharedReferenceCount =
                     (atomic<int>)((int)pTVar19->SharedReferenceCount + 1);
                UNLOCK();
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar19);
              if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_228.Data.AllocatorInstance.Data);
              }
              if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_238.Data.AllocatorInstance.Data);
              }
              if (pTVar19 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar19->SharedReferenceCount =
                     (atomic<int>)((int)pTVar19->SharedReferenceCount + 1);
                UNLOCK();
              }
              pFVar2 = (param_3->AllocatorInstance).Data;
              local_478 = pTVar26;
              local_470 = pTVar19;
              if ((pFVar2 <= (FScriptContainerElement *)&local_478) &&
                 ((FScriptContainerElement *)&local_478 <
                  pFVar2 + (longlong)param_3->ArrayMax * 0x10)) {
                local_4c0 = (longlong)param_3->ArrayNum;
                local_4b8 = 0x10;
                local_4d8 = &local_478;
                local_4d0 = pFVar2;
                local_4c8 = (longlong)param_3->ArrayMax;
                bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   );
                if (bVar30) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
              }
              iVar23 = param_3->ArrayNum;
              if (iVar23 == param_3->ArrayMax) {
                iVar23 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x810,&param_3->AllocatorInstance,&param_3->ArrayMax);
              }
              param_3->ArrayNum = iVar23 + 1;
              pFVar2 = (param_3->AllocatorInstance).Data;
              *(TReferenceControllerBase<1> **)(pFVar2 + (longlong)iVar23 * 0x10) = local_478;
              *(TReferenceControllerBase<1> **)(pFVar2 + (longlong)iVar23 * 0x10 + 8) = local_470;
              local_470 = (TReferenceControllerBase<1> *)0x0;
              local_478 = (TReferenceControllerBase<1> *)0x0;
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)0x0);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar19);
              if ((local_14c != -1) && (local_158 != (void *)0x0)) {
                FMemory::Free(local_158);
              }
              if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_188.Data.AllocatorInstance.Data);
              }
              if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_198.Data.AllocatorInstance.Data);
              }
              TStack_450.UnvisitedBitMask =
                   TStack_450.UnvisitedBitMask & ~TStack_450._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_450);
            }
          }
          else {
            local_408.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10);
            local_408.UnvisitedBitMask = 0xffffffff;
            local_408._padding_._0_4_ = 0;
            local_408._padding_._4_4_ = 1;
            local_408.CurrentBitIndex = 0;
            local_408.BaseBitIndex = 0;
            if (local_c0 != 0) {
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_408);
            }
            uVar15 = local_c0;
            TStack_450._padding_ =
                 CONCAT44(local_408._padding_._4_4_,(undefined4)local_408._padding_);
            local_458 = (longlong *)local_e8;
            TStack_450.CurrentBitIndex = local_408.CurrentBitIndex;
            TStack_450.UnvisitedBitMask = local_408.UnvisitedBitMask;
            TStack_450._28_4_ = local_408._28_4_;
            TStack_450.BaseBitIndex = local_408.BaseBitIndex;
            pTVar28 = (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10);
            bVar21 = (byte)local_c0 & 0x1f;
            local_430 = CONCAT44(local_430._4_4_,local_e8._8_4_ - local_b4);
            local_428._padding_._0_4_ = (int)local_c0 >> 5;
            local_428._padding_._4_4_ = 1 << bVar21;
            TStack_450.Array = local_408.Array;
            local_428.BaseBitIndex = local_c0 & 0xffffffe0;
            local_428.UnvisitedBitMask = -1 << bVar21;
            local_428.CurrentBitIndex = local_c0;
            TStack_268.Array = local_408.Array;
            uStack_248 = local_430;
            local_428.Array = pTVar28;
            local_270 = local_458;
            TStack_268._padding_ = TStack_450._padding_;
            TStack_268._16_8_ = TStack_450._16_8_;
            TStack_268._24_8_ = TStack_450._24_8_;
            if (((int)local_c0 < 0) &&
               (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x7af,L""), bVar30)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            uVar29 = local_428.CurrentBitIndex;
            this_02 = local_4a0;
            dVar5 = _UNK_151444f58;
            dVar6 = ___xmm_0000000000000000403e000000000000;
            dVar7 = __real_3fa1111111111111;
            if (uVar15 != local_c0) {
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_428);
              uVar29 = local_428.CurrentBitIndex;
              this_02 = local_4a0;
              dVar5 = _UNK_151444f58;
              dVar6 = ___xmm_0000000000000000403e000000000000;
              dVar7 = __real_3fa1111111111111;
              pTVar28 = local_428.Array;
            }
            while( true ) {
              plVar12 = local_270;
              if ((int)local_270[1] - *(int *)((longlong)local_270 + 0x34) != (int)uStack_248) {
                local_4a5 = 0;
                `TSparseArray<TSparseSetElement<TTuple<FString,FInterchangeAnimationPayLoadKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_4a5);
              }
              dVar11 = local_460;
              dVar10 = local_468;
              dVar8 = local_488;
              if (((TStack_268.CurrentBitIndex == uVar29) && (TStack_268.Array == pTVar28)) &&
                 (plVar12 == (longlong *)local_e8)) break;
              pTVar25 = (TTuple<FString,FInterchangeAnimationPayLoadKey> *)
                        ((longlong)TStack_268.CurrentBitIndex * 0x30 + *plVar12);
              ::FString::FString(&local_1e8,(FString *)pTVar25);
              ::FString::FString(&local_1d8,(FString *)&pTVar25->field_0x10);
              local_1c8 = pTVar25->field_0x20;
              local_200 = &local_1e8;
              local_1c0 = dVar8;
              local_1b8 = dVar11;
              local_1b0 = dVar10;
              local_1a8 = (void *)0x0;
              iVar22 = 0;
              local_1a0 = 0;
              local_19c = -1;
              local_208 = pTVar25;
              TSet<TTuple<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadQuery>,TDefaultMapHashableKeyFuncs<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadQuery,0>,FDefaultSetAllocator>
              ::
              Emplace<TPairInitializer<TTuple<FString,FInterchangeAnimationPayLoadKey>_const_&,UE::Interchange::FAnimationPayloadQuery_const_&>_>
                        ((TSet<TTuple<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadQuery>,TDefaultMapHashableKeyFuncs<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadQuery,0>,FDefaultSetAllocator>
                          *)&this->BoneAnimationPayloadQueries,
                         (TPairInitializer<TTuple<FString,FInterchangeAnimationPayLoadKey>_const_&,UE::Interchange::FAnimationPayloadQuery_const_&>
                          *)local_3b8,(bool *)&local_208);
              ::FString::FString(&local_3a0.SceneNodeUniqueID,(FString *)pTVar25);
              local_3a0.Curves.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_3a0.Curves.ArrayNum = 0;
              local_3a0.Curves.ArrayMax = 0;
              local_3a0.InbetweenCurveNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_3a0.InbetweenCurveNames.ArrayNum = 0;
              local_3a0.InbetweenCurveNames.ArrayMax = 0;
              local_3a0.InbetweenFullWeights.AllocatorInstance.Data = (FScriptContainerElement *)0x0
              ;
              local_3a0.InbetweenFullWeights.ArrayNum = 0;
              local_3a0.InbetweenFullWeights.ArrayMax = 0;
              local_3a0.StepCurves.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_3a0.StepCurves.ArrayNum = 0;
              local_3a0.StepCurves.ArrayMax = 0;
              local_3a0.Transforms.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_3a0.Transforms.ArrayNum = 0;
              local_3a0.Transforms.ArrayMax = 0;
              local_3a0.BakeFrequency = dVar6;
              local_3a0.RangeStartTime = dVar5;
              local_3a0.RangeEndTime = dVar7;
              ::FString::FString(&local_3a0.PayloadKey.UniqueId,(FString *)&pTVar25->field_0x10);
              local_3a0.PayloadKey.Type = pTVar25->field_0x20;
              local_3a0.AdditionalSupportedType = NONE;
              if (*(int *)&pTVar25->field_0x8 == 0) {
                pwVar24 = L"";
              }
              else {
                pwVar24 = *(wchar_t **)pTVar25;
                iVar22 = *(int *)&pTVar25->field_0x8 + -1;
              }
              uVar15 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar22,pwVar24);
              uVar16 = ::GetTypeHash((FInterchangeAnimationPayLoadKey *)&pTVar25->field_0x10);
              TMapBase<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadData,0>_>
              ::
              FindOrAddImpl<TTuple<FString,FInterchangeAnimationPayLoadKey>_const_&,UE::Interchange::FAnimationPayloadData>
                        ((TMapBase<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadData,0>_>
                          *)this_02,uVar15 * 0x40 + (uVar15 >> 2) + uVar16 + 0x9e3779b9 ^ uVar15,
                         pTVar25,&local_3a0);
              if (local_3a0.PayloadKey.UniqueId.Data.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_3a0.PayloadKey.UniqueId.Data.AllocatorInstance.Data);
              }
              if (local_3a0.Transforms.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_3a0.Transforms.AllocatorInstance.Data);
              }
              DestructItems<FInterchangeStepCurve,int>
                        ((FInterchangeStepCurve *)local_3a0.StepCurves.AllocatorInstance.Data,
                         local_3a0.StepCurves.ArrayNum);
              if ((FInterchangeStepCurve *)local_3a0.StepCurves.AllocatorInstance.Data !=
                  (FInterchangeStepCurve *)0x0) {
                FMemory::Free(local_3a0.StepCurves.AllocatorInstance.Data);
              }
              if (local_3a0.InbetweenFullWeights.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_3a0.InbetweenFullWeights.AllocatorInstance.Data);
              }
              DestructItems<FString,int>
                        ((FString *)local_3a0.InbetweenCurveNames.AllocatorInstance.Data,
                         local_3a0.InbetweenCurveNames.ArrayNum);
              if (local_3a0.InbetweenCurveNames.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_3a0.InbetweenCurveNames.AllocatorInstance.Data);
              }
              DestructItems<FRichCurve,int>
                        ((FRichCurve *)local_3a0.Curves.AllocatorInstance.Data,
                         local_3a0.Curves.ArrayNum);
              if ((FRichCurve *)local_3a0.Curves.AllocatorInstance.Data != (FRichCurve *)0x0) {
                FMemory::Free(local_3a0.Curves.AllocatorInstance.Data);
              }
              if (local_3a0.SceneNodeUniqueID.Data.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_3a0.SceneNodeUniqueID.Data.AllocatorInstance.Data);
              }
              if ((local_19c != -1) && (local_1a8 != (void *)0x0)) {
                FMemory::Free(local_1a8);
              }
              if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
              }
              if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
              }
              TStack_268.UnvisitedBitMask =
                   TStack_268.UnvisitedBitMask & ~TStack_268._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_268);
            }
            pTVar19 = ::operator_new(0xb0);
            if (pTVar19 == (TReferenceControllerBase<1> *)0x0) {
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)0x0);
              local_498 = (TReferenceControllerBase<1> *)&DAT_00000010;
              local_490 = (TReferenceControllerBase<1> *)0x0;
            }
            else {
              pTVar19->SharedReferenceCount = (atomic<int>)0x1;
              pTVar19->WeakReferenceCount = (atomic<int>)0x1;
              pTVar19->_padding_ =
                   (longlong)
                   &
                   ___7__TIntrusiveReferenceController_VFInterchangeTaskLambda_Interchange_UE___00_SharedPointerInternals__6B_
              ;
              local_120 = 0;
              local_138 = &UE::Core::Private::Function::
                           TFunction_OwnedObject<`UInterchangeAnimSequenceFactory::CreatePayloadTasks'::`14'::<lambda_1>,0,0>
                           ::_vftable_;
              local_148[0] = UE::Core::Private::Function::
                             TFunctionRefCaller<`UInterchangeAnimSequenceFactory::CreatePayloadTasks'::__l14::<lambda_1>,void>
                             ::Call;
              local_130 = this;
              local_128 = plVar18;
              UE::Interchange::FInterchangeTaskLambda::FInterchangeTaskLambda
                        ((FInterchangeTaskLambda *)(pTVar19 + 1),local_4a6,
                         (TFunction<void___cdecl(void)> *)local_148);
              if ((pTVar19 + 1 == (TReferenceControllerBase<1> *)0x0) &&
                 (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                     ("InObject != nullptr",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x246,L""), bVar30)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              LOCK();
              pTVar19->SharedReferenceCount = (atomic<int>)((int)pTVar19->SharedReferenceCount + 1);
              UNLOCK();
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar19);
              LOCK();
              pTVar19->SharedReferenceCount = (atomic<int>)((int)pTVar19->SharedReferenceCount + 1);
              UNLOCK();
              local_498 = pTVar19 + 1;
              local_490 = pTVar19;
            }
            pTVar13 = local_3a8;
            pTVar19 = local_490;
            cVar14 = local_4a8;
            pFVar2 = (local_3a8->AllocatorInstance).Data;
            if ((pFVar2 <= (FScriptContainerElement *)&local_498) &&
               ((FScriptContainerElement *)&local_498 <
                pFVar2 + (longlong)local_3a8->ArrayMax * 0x10)) {
              local_4c0 = (longlong)local_3a8->ArrayNum;
              local_4b8 = 0x10;
              local_4d8 = &local_498;
              local_4d0 = pFVar2;
              local_4c8 = (longlong)local_3a8->ArrayMax;
              bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 );
              if (bVar30) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
            iVar22 = pTVar13->ArrayNum;
            if (iVar22 == pTVar13->ArrayMax) {
              iVar22 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&pTVar13->AllocatorInstance,&pTVar13->ArrayMax);
            }
            pTVar13->ArrayNum = iVar22 + 1;
            pFVar2 = (pTVar13->AllocatorInstance).Data;
            *(TReferenceControllerBase<1> **)(pFVar2 + (longlong)iVar22 * 0x10) = local_498;
            *(TReferenceControllerBase<1> **)(pFVar2 + (longlong)iVar22 * 0x10 + 8) = local_490;
            local_490 = (TReferenceControllerBase<1> *)0x0;
            local_498 = (TReferenceControllerBase<1> *)0x0;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)0x0);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar19);
          }
          local_a0 = 0;
          if (local_a8 != (void *)0x0) {
            FMemory::Free(local_a8);
          }
          TSparseArray<TSparseSetElement<TTuple<FString,FInterchangeAnimationPayLoadKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<FString,FInterchangeAnimationPayLoadKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<TTuple<FString,FInterchangeAnimationPayLoadKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_e8);
        }
      }
    }
  }
  if (cVar14 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// EndImportAsset_GameThread @ 14e69b030

FImportAssetResult * __thiscall
UInterchangeAnimSequenceFactory::EndImportAsset_GameThread
          (UInterchangeAnimSequenceFactory *this,FImportAssetResult *__return_storage_ptr__,
          FImportAssetObjectParams *param_1)

{
  if (CpuChannel->Enabled < 0) {
    __return_storage_ptr__->bIsFactorySkipAsset = false;
    __return_storage_ptr__->ImportedObject = (UObject *)0x0;
    return __return_storage_ptr__;
  }
  FCpuProfilerTrace::GetOrCreateSpecId
            (&__CpuProfilerEventSpecId1406,"UInterchangeAnimSequenceFactory::ImportAsset_Async",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Animation\\InterchangeAnimSequenceFactory.cpp"
             ,0x57e);
  FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1406);
  __return_storage_ptr__->bIsFactorySkipAsset = false;
  __return_storage_ptr__->ImportedObject = (UObject *)0x0;
  FCpuProfilerTrace::OutputEndEvent();
  return __return_storage_ptr__;
}

// GetFactoryAssetType @ 14e69e410

EInterchangeFactoryAssetType __thiscall
UInterchangeAnimSequenceFactory::GetFactoryAssetType(UInterchangeAnimSequenceFactory *this)

{
  return Animations;
}

// GetFactoryClass @ 14e69e440

UClass * __thiscall
UInterchangeAnimSequenceFactory::GetFactoryClass(UInterchangeAnimSequenceFactory *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UAnimSequence.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UAnimSequence::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimSequence",
               &Z_Registration_Info_UClass_UAnimSequence.InnerSingleton,
               UAnimSequence::StaticRegisterNativesUAnimSequence,0x1f0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimSequence>,
               InternalVTableHelperCtorCaller<UAnimSequence>,aFStackX_8,
               UAnimSequenceBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimSequence.InnerSingleton;
}

// GetPrivateStaticClass @ 14e69fb80

UClass * __cdecl UInterchangeAnimSequenceFactory::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeAnimSequenceFactory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeAnimSequenceFactory",
               &Z_Registration_Info_UClass_UInterchangeAnimSequenceFactory.InnerSingleton,
               StaticRegisterNativesUInterchangeAnimSequenceFactory,0x1d8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeAnimSequenceFactory>,
               InternalVTableHelperCtorCaller<UInterchangeAnimSequenceFactory>,local_res8,
               UInterchangeFactoryBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeAnimSequenceFactory.InnerSingleton;
}

// GetSourceFilenames @ 14e6a13a0

bool __thiscall
UInterchangeAnimSequenceFactory::GetSourceFilenames
          (UInterchangeAnimSequenceFactory *this,UObject *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  return false;
}

// ImportAsset_Async @ 14e6a2ad0

FImportAssetResult * __thiscall
UInterchangeAnimSequenceFactory::ImportAsset_Async
          (UInterchangeAnimSequenceFactory *this,FImportAssetResult *__return_storage_ptr__,
          FImportAssetObjectParams *param_1)

{
  if (CpuChannel->Enabled < 0) {
    __return_storage_ptr__->bIsFactorySkipAsset = false;
    __return_storage_ptr__->ImportedObject = (UObject *)0x0;
    return __return_storage_ptr__;
  }
  FCpuProfilerTrace::GetOrCreateSpecId
            (&__CpuProfilerEventSpecId1239,"UInterchangeAnimSequenceFactory::ImportAsset_Async",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Animation\\InterchangeAnimSequenceFactory.cpp"
             ,0x4d7);
  FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1239);
  __return_storage_ptr__->bIsFactorySkipAsset = false;
  __return_storage_ptr__->ImportedObject = (UObject *)0x0;
  FCpuProfilerTrace::OutputEndEvent();
  return __return_storage_ptr__;
}

// IsBoneTrackAnimationValid @ 14e6a3490

/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
UInterchangeAnimSequenceFactory::IsBoneTrackAnimationValid
          (UInterchangeAnimSequenceFactory *this,UInterchangeAnimSequenceFactoryNode *param_1,
          FImportAssetObjectParams *param_2)

{
  longlong *plVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  double dVar3;
  bool bVar4;
  UInterchangeResultError_Generic *pUVar5;
  UClass *pUVar6;
  FText *pFVar7;
  FText *pFVar8;
  FText *pFVar9;
  FText *pFVar10;
  FTextFormat *pFVar11;
  double extraout_XMM0_Qa;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  float fVar15;
  bool local_res20 [8];
  ForAnyElementType local_e8;
  undefined8 local_e0;
  FFrameRate local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  TSharedPtr<FCulture,1> local_b8;
  TSharedPtr<FCulture,1> local_a8;
  FText local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FTextFormat local_48 [3];
  
  local_d0 = __real_403e000000000000;
  local_d8.Numerator = 0x1e;
  local_d8.Denominator = 1;
  local_res20[0] = false;
  bVar4 = UInterchangeAnimSequenceFactoryNode::GetCustomImportBoneTracks(param_1,local_res20);
  if ((bVar4) && (local_res20[0] != false)) {
    bVar4 = UInterchangeAnimSequenceFactoryNode::GetCustomImportBoneTracksSampleRate
                      (param_1,&local_d0);
    if (bVar4) {
      local_d8 = UE::Interchange::Animation::ConvertSampleRatetoFrameRate(extraout_XMM0_Qa);
      local_d8 = *(FFrameRate *)local_d8;
    }
    local_c0 = 0.0;
    UInterchangeAnimSequenceFactoryNode::GetCustomImportBoneTracksRangeStart(param_1,&local_c0);
    local_c8 = __real_3ff0000000000000 / local_d0;
    UInterchangeAnimSequenceFactoryNode::GetCustomImportBoneTracksRangeStop(param_1,&local_c8);
    dVar3 = local_c8 - local_c0;
    if (local_c8 - local_c0 <= __real_3fa1111120000000) {
      dVar3 = __real_3fa1111120000000;
    }
    auVar12._0_8_ = (double)local_d8.Denominator;
    auVar12._8_8_ = 0;
    dVar14 = ((double)local_d8.Numerator * dVar3) / auVar12._0_8_;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = dVar14;
    auVar12 = roundpd(auVar12,auVar13,1);
    dVar14 = dVar14 - auVar12._0_8_;
    fVar15 = (float)dVar14 - (float)(int)dVar14;
    if ((0.0 < fVar15) && (::FFrameTime::MaxSubframe <= fVar15)) {
      fVar15 = ::FFrameTime::MaxSubframe;
    }
    if (::FFrameTime::MaxSubframe <= fVar15) {
      fVar15 = ::FFrameTime::MaxSubframe;
    }
    if (fVar15 <= 0.0) {
      fVar15 = 0.0;
    }
    if (((float)((uint)fVar15 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717) ||
       ((float)((uint)(fVar15 - __real_3f800000) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
        __real_38d1b717)) {
      bVar4 = true;
    }
    else {
      pUVar5 = UInterchangeFactoryBase::AddMessage<UInterchangeResultError_Generic>
                         ((UInterchangeFactoryBase *)this);
      local_e8.Data = (FScriptContainerElement *)0x0;
      iVar2 = (param_2->SourceData->Filename).Data.ArrayNum;
      _Src = (param_2->SourceData->Filename).Data.AllocatorInstance.Data;
      local_e0 = CONCAT44(local_e0._4_4_,iVar2);
      if (iVar2 == 0) {
        local_e0 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar2,0,&local_e8,iVar2,(int *)((longlong)&local_e0 + 4));
        memcpy(local_e8.Data,_Src,(longlong)iVar2 * 2);
      }
      plVar1 = &pUVar5->_padding_;
      if ((ForAnyElementType *)plVar1 != &local_e8) {
        if ((void *)*plVar1 != (void *)0x0) {
          FMemory::Free((void *)*plVar1);
        }
        *plVar1 = (longlong)local_e8.Data;
        *(undefined4 *)&pUVar5->_padding_ = (undefined4)local_e0;
        local_e8.Data = (FScriptContainerElement *)0x0;
        *(undefined4 *)((longlong)&pUVar5->_padding_ + 4) = local_e0._4_4_;
        local_e0 = 0;
      }
      if (local_e8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data);
      }
      ::FString::operator=((FString *)&pUVar5->_padding_,&param_2->AssetName);
      pUVar6 = Z_Construct_UClass_UAnimSequence_NoRegister();
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar6);
      }
      pUVar5->_padding_ = (longlong)pUVar6;
      local_a8.Object = (FCulture *)0x0;
      local_a8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pFVar7 = FText::AsNumber(&local_78,fVar15,(FNumberFormattingOptions *)0x0,&local_a8);
      pFVar8 = FFrameRate::ToPrettyText(&local_d8,&local_68);
      local_b8.Object = (FCulture *)0x0;
      local_b8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pFVar9 = FText::AsNumber(&local_58,dVar3,(FNumberFormattingOptions *)0x0,&local_b8);
      pFVar10 = FText::AsLocalizable_Advanced_LocText
                          (&local_88,L"UInterchangeAnimSequenceFactory",L"WrongSequenceLength",
                           L"Animation length {0} is not compatible with import frame-rate {1} (sub frame {2}). The animation must be frame-border aligned."
                          );
      pFVar11 = FTextFormat::FTextFormat(local_48,pFVar10,Default);
      pFVar7 = FText::Format<FText,FText,FText>(&local_98,pFVar11,pFVar9,pFVar8,pFVar7);
      FText::operator=(&pUVar5->Text,pFVar7);
      if (local_98.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
      }
      if (local_88.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_b8.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_a8.SharedReferenceCount.ReferenceController);
      bVar4 = false;
    }
  }
  else {
    bVar4 = true;
  }
  return bVar4;
}

// ReinstateSourceData @ 14e6a70b0

void __thiscall
UInterchangeAnimSequenceFactory::ReinstateSourceData
          (UInterchangeAnimSequenceFactory *this,UObject *param_1)

{
  return;
}

// SetSourceFilename @ 14e6a72b0

bool __thiscall
UInterchangeAnimSequenceFactory::SetSourceFilename
          (UInterchangeAnimSequenceFactory *this,UObject *param_1,FString *param_2,int param_3)

{
  return false;
}

// SetupObject_GameThread @ 14e6a7ec0

void __thiscall
UInterchangeAnimSequenceFactory::SetupObject_GameThread
          (UInterchangeAnimSequenceFactory *this,FSetupObjectParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1559,
               "UInterchangeAnimSequenceFactory::SetupObject_GameThread",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Animation\\InterchangeAnimSequenceFactory.cpp"
               ,0x617);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1559);
  }
  bVar2 = IsInGameThread();
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Animation\\InterchangeAnimSequenceFactory.cpp"
                         ,0x619,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = IsInGameThread();
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\InterchangeFactoryBase.h"
                         ,0x125,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (!bVar3) {
    return;
  }
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

// StaticRegisterNativesUInterchangeAnimSequenceFactory @ 14e6a80f0

void __cdecl
UInterchangeAnimSequenceFactory::StaticRegisterNativesUInterchangeAnimSequenceFactory(void)

{
  return;
}

