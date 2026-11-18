// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 11

// StaticClass @ 1467cd820

UClass * __cdecl UMovieSceneTransformOriginSystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneTransformOriginSystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneTransformOriginSystem",
               &Z_Registration_Info_UClass_UMovieSceneTransformOriginSystem.InnerSingleton,
               StaticRegisterNativesUMovieSceneTransformOriginSystem,0x160,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneTransformOriginSystem>,
               InternalVTableHelperCtorCaller<UMovieSceneTransformOriginSystem>,local_res8,
               UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneTransformOriginSystem.InnerSingleton;
}

// UMovieSceneTransformOriginSystem @ 14680c4d0

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneTransformOriginSystem * __thiscall
UMovieSceneTransformOriginSystem::UMovieSceneTransformOriginSystem
          (UMovieSceneTransformOriginSystem *this,FVTableHelper *param_1)

{
  UMovieSceneEntitySystem::UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneTransformOriginSystem__6B_;
  *(undefined8 *)&this->TransformOriginsByInstanceID = 0;
  *(undefined8 *)&(this->TransformOriginsByInstanceID).field_0x8 = 0;
  *(undefined8 *)&(this->TransformOriginsByInstanceID).field_0x20 = 0;
  *(undefined4 *)&(this->TransformOriginsByInstanceID).field_0x28 = 0;
  *(undefined4 *)&(this->TransformOriginsByInstanceID).field_0x2c = 0x80;
  *(undefined4 *)&(this->TransformOriginsByInstanceID).field_0x34 = 0;
  *(undefined4 *)&(this->TransformOriginsByInstanceID).field_0x30 = 0xffffffff;
  (this->InstanceHandleToParentHandle).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstanceHandleToParentHandle).ArrayNum = 0;
  (this->InstanceHandleToParentHandle).ArrayMax = 0;
  (this->LocationAndRotationFilterResults).AllMask.Bits.NumBits = 0;
  (this->LocationAndRotationFilterResults).NoneMask.Bits.NumBits = 0;
  (this->LocationAndRotationFilterResults).ComplexMasks.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->LocationAndRotationFilterResults).ComplexMasks.ArrayNum = 0;
  (this->LocationAndRotationFilterResults).ComplexMasks.ArrayMax = 0;
  *(undefined8 *)&this->SequenceIDToInstanceHandle = 0;
  *(undefined8 *)&(this->SequenceIDToInstanceHandle).field_0x8 = 0;
  *(undefined8 *)&(this->SequenceIDToInstanceHandle).field_0x20 = 0;
  (this->LocationAndRotationFilterResults).AllMask.Bits.MaxBits = 0x180;
  (this->LocationAndRotationFilterResults).NoneMask.Bits.MaxBits = 0x180;
  *(undefined4 *)&(this->SequenceIDToInstanceHandle).field_0x28 = 0;
  *(undefined4 *)&(this->SequenceIDToInstanceHandle).field_0x2c = 0x80;
  *(undefined4 *)&(this->SequenceIDToInstanceHandle).field_0x34 = 0;
  *(undefined4 *)&(this->SequenceIDToInstanceHandle).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SequenceIDToInstanceHandle).field_0x40 = 0;
  *(undefined4 *)&(this->SequenceIDToInstanceHandle).field_0x48 = 0;
  return this;
}

// UMovieSceneTransformOriginSystem @ 14680c5a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneTransformOriginSystem * __thiscall
UMovieSceneTransformOriginSystem::UMovieSceneTransformOriginSystem
          (UMovieSceneTransformOriginSystem *this,FObjectInitializer *param_1)

{
  TArray<UE::MovieScene::FEntityComponentFilter::FComplexMask,TSizedDefaultAllocator<32>_> *pTVar1;
  FComponentTypeID FVar2;
  int iVar3;
  FBuiltInComponentTypes *pFVar4;
  FScriptContainerElement *this_00;
  undefined1 auStack_68 [32];
  initializer_list<UE::MovieScene::FComponentTypeID> local_48;
  UClass *local_38;
  TComponentTypeID<double> local_30;
  TComponentTypeID<double> local_2e;
  FComponentTypeID local_2c [2];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_68;
  UMovieSceneEntitySystem::UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneTransformOriginSystem__6B_;
  pTVar1 = &(this->LocationAndRotationFilterResults).ComplexMasks;
  *(undefined8 *)&this->TransformOriginsByInstanceID = 0;
  *(undefined8 *)&(this->TransformOriginsByInstanceID).field_0x8 = 0;
  *(undefined8 *)&(this->TransformOriginsByInstanceID).field_0x20 = 0;
  *(undefined4 *)&(this->TransformOriginsByInstanceID).field_0x28 = 0;
  *(undefined4 *)&(this->TransformOriginsByInstanceID).field_0x2c = 0x80;
  *(undefined4 *)&(this->TransformOriginsByInstanceID).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TransformOriginsByInstanceID).field_0x34 = 0;
  (this->InstanceHandleToParentHandle).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstanceHandleToParentHandle).ArrayNum = 0;
  (this->InstanceHandleToParentHandle).ArrayMax = 0;
  (this->LocationAndRotationFilterResults).AllMask.Bits.NumBits = 0;
  (this->LocationAndRotationFilterResults).AllMask.Bits.MaxBits = 0x180;
  (this->LocationAndRotationFilterResults).NoneMask.Bits.NumBits = 0;
  (this->LocationAndRotationFilterResults).NoneMask.Bits.MaxBits = 0x180;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->LocationAndRotationFilterResults).ComplexMasks.ArrayNum = 0;
  (this->LocationAndRotationFilterResults).ComplexMasks.ArrayMax = 0;
  *(undefined8 *)&this->SequenceIDToInstanceHandle = 0;
  *(undefined8 *)&(this->SequenceIDToInstanceHandle).field_0x8 = 0;
  *(undefined8 *)&(this->SequenceIDToInstanceHandle).field_0x20 = 0;
  *(undefined4 *)&(this->SequenceIDToInstanceHandle).field_0x28 = 0;
  *(undefined4 *)&(this->SequenceIDToInstanceHandle).field_0x2c = 0x80;
  *(undefined4 *)&(this->SequenceIDToInstanceHandle).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SequenceIDToInstanceHandle).field_0x34 = 0;
  *(undefined8 *)&(this->SequenceIDToInstanceHandle).field_0x40 = 0;
  *(undefined4 *)&(this->SequenceIDToInstanceHandle).field_0x48 = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 8;
  pFVar4 = UE::MovieScene::FBuiltInComponentTypes::Get();
  local_38 = *(UClass **)pFVar4->DoubleResult;
  local_30 = pFVar4->DoubleResult[4];
  local_2e = pFVar4->DoubleResult[5];
  iVar3 = (this->LocationAndRotationFilterResults).ComplexMasks.ArrayNum;
  if (iVar3 == (this->LocationAndRotationFilterResults).ComplexMasks.ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x43c,&pTVar1->AllocatorInstance,
                       &(this->LocationAndRotationFilterResults).ComplexMasks.ArrayMax);
  }
  (this->LocationAndRotationFilterResults).ComplexMasks.ArrayNum = iVar3 + 1;
  local_48._First = (FComponentTypeID *)&local_38;
  this_00 = (pTVar1->AllocatorInstance).Data + (longlong)iVar3 * 0x3c;
  local_48._Last = local_2c;
  *(undefined4 *)(this_00 + 0x30) = 0;
  *(undefined4 *)(this_00 + 0x34) = 0x180;
  this_00[0x38] = (FScriptContainerElement)0x2;
  UE::MovieScene::FComponentMask::SetAll((FComponentMask *)this_00,&local_48);
  if ((this->_padding_ & 0x10) != 0) {
    local_48._First = (FComponentTypeID *)UMovieScenePiecewiseDoubleBlenderSystem::StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UClass *)local_48._First != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_48._First);
    }
    local_38 = (UClass *)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_38 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_38);
    }
    UMovieSceneEntitySystem::DefineImplicitPrerequisite
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_38,
               (TSubclassOf<UMovieSceneEntitySystem>)&local_48);
    local_38 = UMovieSceneQuaternionBlenderSystem::StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_38 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_38);
    }
    local_48._First = (FComponentTypeID *)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UObject *)local_48._First != (UObject *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_48._First);
    }
    UMovieSceneEntitySystem::DefineImplicitPrerequisite
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_48,
               (TSubclassOf<UMovieSceneEntitySystem>)&local_38);
    local_38 = Z_Construct_UClass_UMovieSceneComponentTransformSystem_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_38 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_38);
    }
    local_48._First = (FComponentTypeID *)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UObject *)local_48._First != (UObject *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_48._First);
    }
    UMovieSceneEntitySystem::DefineImplicitPrerequisite
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_48,
               (TSubclassOf<UMovieSceneEntitySystem>)&local_38);
    local_38 = (UClass *)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_38 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_38);
    }
    local_48._First =
         (FComponentTypeID *)Z_Construct_UClass_UDoubleChannelEvaluatorSystem_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UClass *)local_48._First != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_48._First);
    }
    UMovieSceneEntitySystem::DefineImplicitPrerequisite
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_48,
               (TSubclassOf<UMovieSceneEntitySystem>)&local_38);
    pFVar4 = UE::MovieScene::FBuiltInComponentTypes::Get();
    local_38 = (UClass *)this->_padding_;
    FVar2.Value = *(ushort *)pFVar4->DoubleResult;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_38 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_38);
    }
    UMovieSceneEntitySystem::DefineComponentConsumer
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_38,FVar2);
    pFVar4 = UE::MovieScene::FBuiltInComponentTypes::Get();
    local_38 = (UClass *)this->_padding_;
    FVar2.Value = *(ushort *)(pFVar4->DoubleResult + 1);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_38 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_38);
    }
    UMovieSceneEntitySystem::DefineComponentConsumer
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_38,FVar2);
    pFVar4 = UE::MovieScene::FBuiltInComponentTypes::Get();
    local_38 = (UClass *)this->_padding_;
    FVar2.Value = *(ushort *)(pFVar4->DoubleResult + 2);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_38 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_38);
    }
    UMovieSceneEntitySystem::DefineComponentConsumer
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_38,FVar2);
    pFVar4 = UE::MovieScene::FBuiltInComponentTypes::Get();
    local_38 = (UClass *)this->_padding_;
    FVar2.Value = *(ushort *)(pFVar4->DoubleResult + 3);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_38 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_38);
    }
    UMovieSceneEntitySystem::DefineComponentConsumer
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_38,FVar2);
    pFVar4 = UE::MovieScene::FBuiltInComponentTypes::Get();
    local_38 = (UClass *)this->_padding_;
    FVar2.Value = *(ushort *)(pFVar4->DoubleResult + 4);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_38 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_38);
    }
    UMovieSceneEntitySystem::DefineComponentConsumer
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_38,FVar2);
    pFVar4 = UE::MovieScene::FBuiltInComponentTypes::Get();
    local_38 = (UClass *)this->_padding_;
    FVar2.Value = *(ushort *)(pFVar4->DoubleResult + 5);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_38 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_38);
    }
    UMovieSceneEntitySystem::DefineComponentConsumer
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_38,FVar2);
  }
  return this;
}

// ~UMovieSceneTransformOriginSystem @ 14680fe90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneTransformOriginSystem::~UMovieSceneTransformOriginSystem
          (UMovieSceneTransformOriginSystem *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UMovieSceneTransformOriginSystem__6B_;
  *(undefined4 *)&(this->SequenceIDToInstanceHandle).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SequenceIDToInstanceHandle).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FMovieSceneSequenceID,UE::MovieScene::FInstanceHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FMovieSceneSequenceID,UE::MovieScene::FInstanceHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FMovieSceneSequenceID,UE::MovieScene::FInstanceHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SequenceIDToInstanceHandle);
  pFVar2 = (this->LocationAndRotationFilterResults).ComplexMasks.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->InstanceHandleToParentHandle).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  TSparseArray<UE::Math::TTransform<double>,FDefaultSparseArrayAllocator>::
  ~TSparseArray<UE::Math::TTransform<double>,FDefaultSparseArrayAllocator>
            (&this->TransformOriginsByInstanceID);
  UMovieSceneEntitySystem::~UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this);
  return;
}

// GetPrivateStaticClass @ 146837260

UClass * __cdecl UMovieSceneTransformOriginSystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneTransformOriginSystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneTransformOriginSystem",
               &Z_Registration_Info_UClass_UMovieSceneTransformOriginSystem.InnerSingleton,
               StaticRegisterNativesUMovieSceneTransformOriginSystem,0x160,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneTransformOriginSystem>,
               InternalVTableHelperCtorCaller<UMovieSceneTransformOriginSystem>,local_res8,
               UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneTransformOriginSystem.InnerSingleton;
}

// GetTransformOrigin @ 146837f50

bool __thiscall
UMovieSceneTransformOriginSystem::GetTransformOrigin
          (UMovieSceneTransformOriginSystem *this,FInstanceHandle param_1,
          TTransform<double> *param_2)

{
  double *pdVar1;
  longlong lVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  undefined1 uVar6;
  longlong lVar7;
  undefined1 *puVar8;
  
  if ((int)((uint)param_1 & 0xffff) < *(int *)&(this->TransformOriginsByInstanceID).field_0x28) {
    if ((*(int *)&(this->TransformOriginsByInstanceID).field_0x28 <= (int)((uint)param_1 & 0xffff))
       && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5c6,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    puVar8 = *(undefined1 **)&(this->TransformOriginsByInstanceID).field_0x20;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->TransformOriginsByInstanceID).field_0x10;
    }
    if ((*(uint *)(puVar8 + (ulonglong)(ushort)(param_1.InstanceID >> 5) * 4) >>
         ((uint)param_1 & 0x1f) & 1) != 0) {
      lVar2 = *(longlong *)&this->TransformOriginsByInstanceID;
      lVar7 = (ulonglong)((uint)param_1 & 0xffff) * 0x60;
      dVar4 = ((double *)(lVar7 + lVar2))[1];
      (param_2->Rotation).XY.m128d_f64[0] = *(double *)(lVar7 + lVar2);
      (param_2->Rotation).XY.m128d_f64[1] = dVar4;
      pdVar1 = (double *)(lVar7 + 0x10 + lVar2);
      dVar4 = pdVar1[1];
      (param_2->Rotation).ZW.m128d_f64[0] = *pdVar1;
      (param_2->Rotation).ZW.m128d_f64[1] = dVar4;
      pdVar1 = (double *)(lVar7 + 0x20 + lVar2);
      dVar4 = pdVar1[1];
      (param_2->Translation).XY.m128d_f64[0] = *pdVar1;
      (param_2->Translation).XY.m128d_f64[1] = dVar4;
      pdVar1 = (double *)(lVar7 + 0x30 + lVar2);
      dVar4 = pdVar1[1];
      (param_2->Translation).ZW.m128d_f64[0] = *pdVar1;
      (param_2->Translation).ZW.m128d_f64[1] = dVar4;
      pdVar1 = (double *)(lVar7 + 0x40 + lVar2);
      dVar4 = pdVar1[1];
      (param_2->Scale3D).XY.m128d_f64[0] = *pdVar1;
      (param_2->Scale3D).XY.m128d_f64[1] = dVar4;
      pdVar1 = (double *)(lVar7 + 0x50 + lVar2);
      dVar4 = pdVar1[1];
      (param_2->Scale3D).ZW.m128d_f64[0] = *pdVar1;
      (param_2->Scale3D).ZW.m128d_f64[1] = dVar4;
      return true;
    }
  }
  return false;
}

// IsRelevantImpl @ 14683f430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UMovieSceneTransformOriginSystem::IsRelevantImpl
          (UMovieSceneTransformOriginSystem *this,UMovieSceneEntitySystemLinker *param_1)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  FInstanceRegistry *pFVar5;
  undefined1 *puVar6;
  TReferenceControllerBase<1> *pTVar7;
  code *pcVar8;
  bool bVar9;
  undefined1 uVar10;
  FBuiltInComponentTypes *pFVar11;
  UObjectBaseUtility *this_00;
  UClass *pUVar12;
  void *pvVar13;
  UClass *pUVar14;
  longlong *plVar15;
  longlong lVar16;
  TSparseArray<UE::MovieScene::FSequenceInstance,FDefaultSparseArrayAllocator> *pTVar17;
  int iVar18;
  uint uVar19;
  undefined1 *puVar20;
  uint *puVar21;
  TSparseArray<UE::MovieScene::FSequenceInstance,FDefaultSparseArrayAllocator> *pTVar22;
  uint uVar23;
  undefined1 auStack_178 [32];
  undefined1 local_158;
  undefined1 local_157 [3];
  FComponentTypeID local_154;
  FComponentTypeID local_152 [5];
  int local_148;
  uint uStack_144;
  undefined1 *puStack_140;
  undefined4 local_138;
  int iStack_134;
  int iStack_130;
  undefined4 uStack_12c;
  TSparseArray<UE::MovieScene::FSequenceInstance,FDefaultSparseArrayAllocator> *local_128;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_120;
  int local_100;
  int local_f8;
  int local_f4;
  initializer_list<UE::MovieScene::FComponentTypeID> local_e8;
  FPlaybackCapabilityPtr local_d8;
  FEntityComponentFilter local_c8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_178;
  pFVar11 = UE::MovieScene::FBuiltInComponentTypes::Get();
  local_c8.AllMask.Bits.MaxBits = 0x180;
  local_c8.AllMask.Bits.NumBits = 0;
  local_c8.NoneMask.Bits.NumBits = 0;
  local_c8.NoneMask.Bits.MaxBits = 0x180;
  local_c8.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.ComplexMasks.ArrayNum = 0;
  local_c8.ComplexMasks.ArrayMax = 0;
  local_154.Value = (pFVar11->Tags).SubInstance.Value;
  local_e8._First = &local_154;
  local_e8._Last = local_152;
  UE::MovieScene::FComponentMask::SetAll(&local_c8.AllMask,&local_e8);
  UE::MovieScene::FEntityComponentFilter::Combine(&local_c8,&this->LocationAndRotationFilterResults)
  ;
  bVar9 = UE::MovieScene::FEntityManager::Contains(&param_1->EntityManager,&local_c8);
  if (bVar9) {
    bVar9 = true;
LAB_14683f842:
    if (local_c8.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.ComplexMasks.AllocatorInstance.Data);
    }
    return bVar9;
  }
  if (((param_1->InstanceRegistry).Ptr == (FInstanceRegistry *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InstanceRegistry.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemLinker.h"
                         ,0x96,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    uVar10 = (*pcVar8)();
    return (bool)uVar10;
  }
  pFVar5 = (param_1->InstanceRegistry).Ptr;
  pTVar22 = &pFVar5->Instances;
  local_148 = 0;
  iVar3 = *(int *)&(pFVar5->Instances).field_0x28;
  puVar2 = &(pFVar5->Instances).field_0x10;
  uStack_144 = 1;
  iStack_134 = 0;
  iStack_130 = 0;
  if (iVar3 != 0) {
    puVar21 = *(uint **)&(pFVar5->Instances).field_0x20;
    if (puVar21 == (uint *)0x0) {
      puVar21 = (uint *)puVar2;
    }
    uVar19 = *puVar21;
    iStack_130 = 0;
    local_148 = 0;
    while (uVar19 == 0) {
      lVar16 = (longlong)local_148;
      iStack_130 = iStack_130 + 0x20;
      local_148 = local_148 + 1;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_148) goto LAB_14683f5ce;
      uVar19 = puVar21[lVar16 + 1];
    }
    uStack_144 = -uVar19 & uVar19;
    uVar1 = (ulonglong)uStack_144 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_f8 = (int)lVar16;
    iStack_134 = local_f8 + -1 + iStack_130;
    if (iVar3 < iStack_134) {
LAB_14683f5ce:
      iStack_134 = iVar3;
    }
  }
  local_138 = 0xffffffff;
  uVar19 = *(uint *)&(pFVar5->Instances).field_0x28;
  local_100 = *(int *)&(pFVar5->Instances).field_0x8 - *(int *)&(pFVar5->Instances).field_0x34;
  local_120._padding_ = CONCAT44(uStack_144,local_148);
  iVar18 = (int)uVar19 >> 5;
  local_120.CurrentBitIndex = iStack_134;
  local_120.UnvisitedBitMask = 0xffffffff;
  local_120._28_4_ = uStack_12c;
  local_120.BaseBitIndex = iStack_130;
  uVar23 = uVar19 & 0xffffffe0;
  puStack_140 = puVar2;
  local_128 = pTVar22;
  local_120.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar19 < 0) || (iVar3 < (int)uVar19)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    uVar10 = (*pcVar8)();
    return (bool)uVar10;
  }
  uVar4 = *(uint *)&(pFVar5->Instances).field_0x28;
  pTVar17 = pTVar22;
  if (uVar19 != uVar4) {
    puVar6 = *(undefined1 **)&(pFVar5->Instances).field_0x20;
    puVar20 = puVar2;
    if (puVar6 != (undefined1 *)0x0) {
      puVar20 = puVar6;
    }
    uVar19 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar18 * 4);
    while (uVar19 == 0) {
      lVar16 = (longlong)iVar18;
      uVar23 = uVar23 + 0x20;
      iVar18 = iVar18 + 1;
      uVar19 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_14683f6d0;
      uVar19 = *(uint *)(puVar20 + lVar16 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
    lVar16 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_f4 = (int)lVar16;
    uVar19 = local_f4 + -1 + uVar23;
    if ((int)uVar4 < (int)uVar19) {
      uVar19 = uVar4;
    }
  }
LAB_14683f6d0:
  do {
    if (*(int *)&pTVar17->field_0x8 - *(int *)&pTVar17->field_0x34 != local_100) {
      local_158 = 0;
      `TSparseArray<UE::MovieScene::FSequenceInstance,FDefaultSparseArrayAllocator>::
      TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_158);
    }
    if (((local_120.CurrentBitIndex == uVar19) &&
        (local_120.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pTVar17 == pTVar22)
       ) {
      bVar9 = false;
      goto LAB_14683f842;
    }
    pTVar7 = *(TReferenceControllerBase<1> **)
              ((longlong)local_120.CurrentBitIndex * 0x140 + 0x120 + *(longlong *)pTVar17);
    lVar16 = *(longlong *)
              ((longlong)local_120.CurrentBitIndex * 0x140 + 0x118 + *(longlong *)pTVar17);
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    bVar9 = IsInGameThread();
    if (!bVar9) {
      local_157[0] = bVar9;
      `UE::MovieScene::FSharedPlaybackState::FindCapability<IMovieScenePlaybackClient>'::__l2::
      <lambda_1>::operator()(local_157);
    }
    IMovieScenePlaybackClient::GetPlaybackCapabilityID();
    UE::MovieScene::FPlaybackCapabilitiesImpl::FindCapability
              ((FPlaybackCapabilitiesImpl *)(lVar16 + 0x38),&local_d8,
               1 << ((byte)local_152._2_4_ & 0x1f));
    if (local_d8.Ptr != (longlong *)0x0) {
      plVar15 = local_d8.Ptr;
      if (local_d8.StorageMode != Inline) {
        if ((local_d8.StorageMode != RawPointer) && (local_d8.StorageMode != SharedPointer)) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                             ,0x30,L"Unexpected playback capability storage mode");
          if (bVar9) {
            pcVar8 = (code *)swi(3);
            uVar10 = (*pcVar8)();
            return (bool)uVar10;
          }
          goto LAB_14683f7f6;
        }
        plVar15 = *(longlong **)local_d8.Ptr;
      }
      if ((plVar15 != (longlong *)0x0) &&
         (this_00 = (UObjectBaseUtility *)(**(code **)(*plVar15 + 0x18))(),
         this_00 != (UObjectBaseUtility *)0x0)) {
        pUVar12 = Z_Construct_UClass_UMovieSceneTransformOrigin_NoRegister();
        pvVar13 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar12);
        if (pvVar13 == (void *)0x0) {
          pUVar12 = *(UClass **)&this_00->field_0x10;
          pUVar14 = Z_Construct_UClass_UMovieSceneTransformOrigin_NoRegister();
          bVar9 = UClass::ImplementsInterface(pUVar12,pUVar14);
          if (!bVar9) goto LAB_14683f7f6;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
        bVar9 = true;
        goto LAB_14683f842;
      }
    }
LAB_14683f7f6:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    local_120.UnvisitedBitMask = local_120.UnvisitedBitMask & ~local_120._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_120);
    pTVar17 = local_128;
  } while( true );
}

// OnLink @ 146843340

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMovieSceneTransformOriginSystem::OnLink(UMovieSceneTransformOriginSystem *this)

{
  int *piVar1;
  int iVar2;
  UMovieSceneEntitySystemLinker *this_00;
  UMovieSceneEntitySystem *pUVar3;
  UClass *pUVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  UClass *local_res8;
  FString local_28;
  FString local_18;
  
  this_00 = (UMovieSceneEntitySystemLinker *)this->_padding_;
  local_res8 = UMovieSceneTransformOriginInstantiatorSystem::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  pUVar3 = UMovieSceneEntitySystemLinker::LinkSystem
                     (this_00,(TSubclassOf<UMovieSceneEntitySystem>)&local_res8);
  if (pUVar3 != (UMovieSceneEntitySystem *)0x0) {
    pUVar4 = UMovieSceneTransformOriginInstantiatorSystem::StaticClass();
    iVar2 = (int)pUVar4->_padding_;
    if ((iVar2 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar4->_padding_)) {
      FMovieSceneEntitySystemGraph::AddReference
                ((FMovieSceneEntitySystemGraph *)(this->_padding_ + 0x2d8),
                 (UMovieSceneEntitySystem *)this,pUVar3);
      piVar1 = &(this->InstanceHandleToParentHandle).ArrayMax;
      (this->InstanceHandleToParentHandle).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,0,&(this->InstanceHandleToParentHandle).AllocatorInstance,0,piVar1);
      }
      return;
    }
    pFVar5 = GetTypeName<UMovieSceneTransformOriginInstantiatorSystem>(&local_28);
    pwVar6 = L"";
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    pFVar5 = GetFullNameForCastLogError<UMovieSceneEntitySystem>(&local_18,pUVar3);
    if ((pFVar5->Data).ArrayNum != 0) {
      pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar6,pwVar7);
  }
  pFVar5 = GetTypeName<UMovieSceneTransformOriginInstantiatorSystem>(&local_28);
  if ((pFVar5->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar6);
}

// OnRun @ 14684c1c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneTransformOriginSystem::OnRun
          (UMovieSceneTransformOriginSystem *this,FSystemTaskPrerequisites *param_1,
          FSystemSubsequentTasks *param_2)

{
  int *piVar1;
  longlong lVar2;
  TReferenceControllerBase<1> *pTVar3;
  double *pdVar4;
  code *pcVar5;
  undefined1 auVar6 [14];
  undefined1 auVar7 [14];
  undefined1 auVar8 [14];
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 auVar21 [14];
  bool bVar22;
  int iVar23;
  UObjectBaseUtility *this_00;
  UClass *pUVar24;
  longlong *plVar25;
  UClass *pUVar26;
  TTransform<double> *pTVar27;
  FSparseArrayAllocationInfo *pFVar28;
  FBuiltInComponentTypes *pFVar29;
  FMovieSceneTracksComponentTypes *pFVar30;
  FScriptContainerElement *this_01;
  longlong lVar31;
  int iVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  uint uVar35;
  undefined1 auVar36 [16];
  undefined1 auStackY_458 [32];
  undefined1 local_428 [4];
  FComponentTypeID local_424;
  FComponentTypeID local_422;
  FComponentTypeID local_420;
  ushort local_41e;
  FComponentTypeID local_41c;
  undefined2 uStack_41a;
  TComponentTypeID<double> local_418;
  undefined2 uStack_416;
  undefined4 local_414;
  TSparseArrayBase<96,16,FDefaultSparseArrayAllocator> *local_410;
  UMovieSceneTransformOriginSystem *local_408;
  FSystemTaskPrerequisites *local_400;
  FSystemSubsequentTasks *local_3f8;
  TSparseArray<UE::Math::TTransform<double>,FDefaultSparseArrayAllocator> *local_3f0;
  undefined1 local_3e8 [32];
  byte local_3c8;
  undefined7 uStack_3c7;
  undefined4 uStack_3c0;
  uint uStack_3bc;
  FPlaybackCapabilityPtr local_3b8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_3a8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_398;
  initializer_list<UE::MovieScene::FComponentTypeID> local_388;
  TComponentTypeID<UE::MovieScene::FInstanceHandle> local_378;
  TComponentTypeID<UObject_*> TStack_376;
  undefined4 uStack_374;
  undefined1 auStack_370 [72];
  FComponentTypeID local_328;
  TComponentTypeID<double> local_326;
  TComponentTypeID<double> local_324;
  TComponentTypeID<double> local_322;
  TComponentTypeID<double> local_320;
  TComponentTypeID<double> local_31e;
  FComponentTypeID local_31c [2];
  FEntityComponentFilter local_318;
  undefined1 local_298 [8];
  undefined1 auStack_290 [40];
  ulonglong local_268;
  undefined8 uStack_260;
  FEntityComponentFilter local_258;
  TTypeCompatibleBytes<unsigned_int> local_1a8;
  TTypeCompatibleBytes<unsigned_int> local_1a4;
  int local_170;
  int local_16c;
  TTransform<double> local_168;
  TTransform<double> local_108;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_458;
  lVar2 = this->_padding_;
  local_408 = this;
  local_400 = param_1;
  local_3f8 = param_2;
  if ((*(longlong *)(lVar2 + 0x580) == 0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("InstanceRegistry.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemLinker.h"
                          ,0x96,L""), bVar22)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar2 = *(longlong *)(lVar2 + 0x580);
  local_410 = (TSparseArrayBase<96,16,FDefaultSparseArrayAllocator> *)
              &this->TransformOriginsByInstanceID;
  TSparseArray<UE::Math::TTransform<double>,FDefaultSparseArrayAllocator>::Empty
            ((TSparseArray<UE::Math::TTransform<double>,FDefaultSparseArrayAllocator> *)local_410,
             *(int *)(lVar2 + 0x10) - *(int *)(lVar2 + 0x3c));
  uVar33 = 0;
  if (0 < *(int *)(lVar2 + 0x10)) {
    uVar35 = 1;
    uVar34 = uVar33;
    do {
      iVar32 = (int)uVar33;
      if ((-1 < iVar32) && (iVar32 < *(int *)(lVar2 + 0x30))) {
        if ((*(int *)(lVar2 + 0x30) <= iVar32) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5c6,L""), bVar22)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar31 = lVar2 + 0x18;
        if (*(longlong *)(lVar2 + 0x28) != 0) {
          lVar31 = *(longlong *)(lVar2 + 0x28);
        }
        iVar23 = iVar32;
        if (iVar32 < 0) {
          iVar23 = iVar32 + 0x1f;
        }
        if ((*(uint *)(lVar31 + (longlong)(iVar23 >> 5) * 4) & uVar35) != 0) {
          pTVar3 = *(TReferenceControllerBase<1> **)(uVar34 + 0x120 + *(longlong *)(lVar2 + 8));
          lVar31 = *(longlong *)(uVar34 + 0x118 + *(longlong *)(lVar2 + 8));
          if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
            UNLOCK();
            LOCK();
            pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar3);
          bVar22 = IsInGameThread();
          if (!bVar22) {
            local_428[0] = bVar22;
            `UE::MovieScene::FSharedPlaybackState::FindCapability<IMovieScenePlaybackClient>'::__l2
            ::<lambda_1>::operator()(local_428);
          }
          IMovieScenePlaybackClient::GetPlaybackCapabilityID();
          UE::MovieScene::FPlaybackCapabilitiesImpl::FindCapability
                    ((FPlaybackCapabilitiesImpl *)(lVar31 + 0x38),&local_3b8,
                     1 << ((byte)local_414 & 0x1f));
          if (local_3b8.Ptr != (longlong *)0x0) {
            plVar25 = local_3b8.Ptr;
            if (local_3b8.StorageMode != Inline) {
              if ((local_3b8.StorageMode != RawPointer) && (local_3b8.StorageMode != SharedPointer))
              {
                bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("false",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                                    ,0x30,L"Unexpected playback capability storage mode");
                if (bVar22) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                goto LAB_14684c48a;
              }
              plVar25 = *(longlong **)local_3b8.Ptr;
            }
            if ((plVar25 != (longlong *)0x0) &&
               (this_00 = (UObjectBaseUtility *)(**(code **)(*plVar25 + 0x18))(),
               this_00 != (UObjectBaseUtility *)0x0)) {
              pUVar24 = Z_Construct_UClass_UMovieSceneTransformOrigin_NoRegister();
              plVar25 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar24);
              if (plVar25 == (longlong *)0x0) {
                pUVar24 = *(UClass **)&this_00->field_0x10;
                pUVar26 = Z_Construct_UClass_UMovieSceneTransformOrigin_NoRegister();
                bVar22 = UClass::ImplementsInterface(pUVar24,pUVar26);
                if (!bVar22) goto LAB_14684c48a;
                pTVar27 = IMovieSceneTransformOrigin::Execute_BP_GetTransformOrigin
                                    (&local_108,(UObject *)this_00);
              }
              else {
                (**(code **)(*plVar25 + 0x10))(plVar25,&local_168);
                pTVar27 = &local_168;
              }
              dVar9 = (pTVar27->Rotation).XY.m128d_f64[0];
              dVar10 = (pTVar27->Rotation).XY.m128d_f64[1];
              dVar11 = (pTVar27->Rotation).ZW.m128d_f64[0];
              dVar12 = (pTVar27->Rotation).ZW.m128d_f64[1];
              dVar13 = (pTVar27->Translation).XY.m128d_f64[0];
              dVar14 = (pTVar27->Translation).XY.m128d_f64[1];
              dVar15 = (pTVar27->Translation).ZW.m128d_f64[0];
              dVar16 = (pTVar27->Translation).ZW.m128d_f64[1];
              dVar17 = (pTVar27->Scale3D).XY.m128d_f64[0];
              dVar18 = (pTVar27->Scale3D).XY.m128d_f64[1];
              dVar19 = (pTVar27->Scale3D).ZW.m128d_f64[0];
              dVar20 = (pTVar27->Scale3D).ZW.m128d_f64[1];
              pFVar28 = TSparseArrayBase<96,16,FDefaultSparseArrayAllocator>::InsertUninitialized
                                  (local_410,(FSparseArrayAllocationInfo *)(auStack_370 + 0x38),
                                   iVar32);
              pdVar4 = pFVar28->Pointer;
              if (pdVar4 != (double *)0x0) {
                *pdVar4 = dVar9;
                pdVar4[1] = dVar10;
                pdVar4[2] = dVar11;
                pdVar4[3] = dVar12;
                pdVar4[4] = dVar13;
                pdVar4[5] = dVar14;
                pdVar4[6] = dVar15;
                pdVar4[7] = dVar16;
                pdVar4[8] = dVar17;
                pdVar4[9] = dVar18;
                pdVar4[10] = dVar19;
                pdVar4[0xb] = dVar20;
              }
            }
          }
LAB_14684c48a:
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar3);
        }
      }
      uVar33 = (ulonglong)(iVar32 + 1U);
      uVar35 = uVar35 << 1 | (uint)((int)uVar35 < 0);
      uVar34 = uVar34 + 0x140;
      this = local_408;
      param_1 = local_400;
      param_2 = local_3f8;
    } while ((int)(iVar32 + 1U) < *(int *)(lVar2 + 0x10));
  }
  if (*(int *)&(this->TransformOriginsByInstanceID).field_0x8 !=
      *(int *)&(this->TransformOriginsByInstanceID).field_0x34) {
    pFVar29 = UE::MovieScene::FBuiltInComponentTypes::Get();
    pFVar30 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
    local_318.AllMask.Bits.NumBits = 0;
    local_318.AllMask.Bits.MaxBits = 0x180;
    local_318.NoneMask.Bits.NumBits = 0;
    local_420.Value = (pFVar30->ComponentTransform).PropertyTag.Value;
    local_3a8._First = &local_420;
    local_41e = (pFVar29->Tags).AbsoluteBlend.Value;
    local_3a8._Last = &local_41c;
    local_318.NoneMask.Bits.MaxBits = 0x180;
    local_318.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_318.ComplexMasks.ArrayNum = 0;
    local_318.ComplexMasks.ArrayMax = 0;
    UE::MovieScene::FComponentMask::SetAll(&local_318.AllMask,&local_3a8);
    local_424.Value = *(ushort *)&pFVar29->BlendChannelOutput;
    local_398._First = &local_424;
    local_398._Last = &local_422;
    UE::MovieScene::FComponentMask::SetAll(&local_318.NoneMask,&local_398);
    uVar33 = *(ulonglong *)pFVar29->DoubleResult;
    local_3e8._24_8_ = &TStatId::TStatId_NAME_None;
    local_378 = pFVar29->InstanceHandle;
    TStack_376 = pFVar29->BoundObject;
    auVar6._8_4_ = 0;
    auVar6._0_8_ = uVar33;
    auVar6._12_2_ = (short)(uVar33 >> 0x30);
    auVar7._8_2_ = (short)(uVar33 >> 0x20);
    auVar7._0_8_ = uVar33;
    auVar7._10_4_ = auVar6._10_4_;
    auVar21._6_8_ = 0;
    auVar21._0_6_ = auVar7._8_6_;
    auVar8._4_2_ = (short)(uVar33 >> 0x10);
    auVar8._0_4_ = (uint)uVar33;
    auVar8._6_8_ = SUB148(auVar21 << 0x40,6);
    auVar36._0_4_ = (uint)uVar33 & 0xffff;
    auVar36._4_10_ = auVar8._4_10_;
    auVar36._14_2_ = 0;
    auVar36 = auVar36 | ___xmm_7fff00007fff00007fff00007fff0000;
    uStack_41a = 0x7fff;
    local_41c.Value = (ushort)pFVar29->DoubleResult[4];
    uStack_416 = 0x7fff;
    local_418 = pFVar29->DoubleResult[5];
    auStack_370._12_4_ = _local_41c;
    uStack_374 = auVar36._0_4_;
    auStack_370._0_8_ = auVar36._4_8_;
    auStack_370._8_4_ = auVar36._12_4_;
    auStack_370._16_4_ = _local_418;
    auStack_290._12_4_ = _local_41c;
    auStack_290._8_4_ = auStack_370._8_4_;
    auStack_290._20_4_ = auStack_370._20_4_;
    auStack_290._16_4_ = _local_418;
    local_3e8._16_8_ = 0;
    uStack_3c0 = 0x6ff;
    local_298._2_2_ = TStack_376;
    local_298._0_2_ = local_378;
    local_298._4_4_ = uStack_374;
    uStack_3bc = uStack_3bc & 0xffffff00;
    local_268 = CONCAT71(uStack_3c7,local_3c8) & 0xffffffffffffffe0;
    uStack_260._4_4_ = uStack_3bc;
    uStack_260._0_4_ = 0x6ff;
    auStack_290._0_8_ = auStack_370._0_8_;
    auStack_290._24_8_ = 0;
    auStack_290._32_8_ = &TStatId::TStatId_NAME_None;
    local_3c8 = local_3c8 & 0xe0;
    UE::MovieScene::FEntityComponentFilter::FEntityComponentFilter(&local_258,&local_318);
    local_1a8.Pad[0] = '\0';
    local_1a8.Pad[1] = '\0';
    local_1a8.Pad[2] = '\0';
    local_1a8.Pad[3] = '\0';
    local_1a4.Pad[0] = 0x80;
    local_1a4.Pad[1] = '\x01';
    local_1a4.Pad[2] = '\0';
    local_1a4.Pad[3] = '\0';
    local_170 = 0;
    local_16c = 0x180;
    UE::MovieScene::AddAccessorToFilter((FComponentAccess *)local_298,&local_258);
    UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_298 + 2),&local_258);
    local_328.Value = *(ushort *)pFVar29->DoubleResult;
    local_326 = pFVar29->DoubleResult[1];
    local_324 = pFVar29->DoubleResult[2];
    local_322 = pFVar29->DoubleResult[3];
    local_320 = pFVar29->DoubleResult[4];
    local_31e = pFVar29->DoubleResult[5];
    if (local_258.ComplexMasks.ArrayNum == local_258.ComplexMasks.ArrayMax) {
      local_258.ComplexMasks.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x43c,&local_258.ComplexMasks.AllocatorInstance,
                      &local_258.ComplexMasks.ArrayMax);
    }
    local_388._First = &local_328;
    this_01 = local_258.ComplexMasks.AllocatorInstance.Data +
              (longlong)local_258.ComplexMasks.ArrayNum * 0x3c;
    local_388._Last = local_31c;
    *(int *)(this_01 + 0x30) = 0;
    *(int *)(this_01 + 0x34) = 0x180;
    this_01[0x38] = (FScriptContainerElement)0x2;
    local_258.ComplexMasks.ArrayNum = local_258.ComplexMasks.ArrayNum + 1;
    UE::MovieScene::FComponentMask::SetAll((FComponentMask *)this_01,&local_388);
    local_3f0 = &this->TransformOriginsByInstanceID;
    UE::MovieScene::
    TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
    ::
    Dispatch_PerAllocation<UE::MovieScene::FAssignTransformOrigin,TSparseArray<UE::Math::TTransform<double>,FDefaultSparseArrayAllocator>_*>
              ((TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
                *)local_298,(FEntityManager *)local_3e8,
               (FSystemTaskPrerequisites *)(this->_padding_ + 0x28),
               (FSystemSubsequentTasks *)param_1,
               (TSparseArray<UE::Math::TTransform<double>,FDefaultSparseArrayAllocator> **)param_2);
    if ((undefined8 *)local_3e8._0_8_ != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_3e8._0_8_ + 0x30);
      iVar32 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar32 == 1) {
        (*(code *)**(undefined8 **)local_3e8._0_8_)(local_3e8._0_8_,1);
      }
    }
    if (local_258.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.ComplexMasks.AllocatorInstance.Data);
    }
    if (local_318.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_318.ComplexMasks.AllocatorInstance.Data);
    }
  }
  return;
}

// OnSchedulePersistentTasks @ 146850f30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneTransformOriginSystem::OnSchedulePersistentTasks
          (UMovieSceneTransformOriginSystem *this,IEntitySystemScheduler *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  TArray<FInstanceToParentPair,TSizedDefaultAllocator<32>_> *pTVar3;
  TMap<FMovieSceneSequenceID,UE::MovieScene::FInstanceHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,UE::MovieScene::FInstanceHandle,0>_>
  *this_00;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  FInstanceRegistry *pFVar7;
  code *pcVar8;
  undefined1 auVar9 [14];
  undefined1 auVar10 [14];
  undefined1 auVar11 [14];
  undefined1 auVar12 [14];
  undefined1 auVar13 [14];
  undefined1 auVar14 [14];
  undefined2 uVar15;
  undefined2 uVar16;
  undefined1 auVar17 [16];
  uchar auVar18 [4];
  uchar auVar19 [4];
  TTypeCompatibleBytes<unsigned_int> aTVar20 [2];
  ForAnyElementType FVar21;
  bool bVar22;
  FBuiltInComponentTypes *pFVar23;
  FMovieSceneTracksComponentTypes *pFVar24;
  TReferenceControllerBase<1> *pTVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auStackY_738 [32];
  FIdentityFunctor local_6e8 [4];
  FComponentTypeID local_6e4;
  FComponentTypeID local_6e2;
  FComponentTypeID local_6e0;
  FComponentTypeID local_6de;
  FComponentTypeID local_6dc;
  FComponentTypeID local_6da;
  FComponentTypeID local_6d8;
  FComponentTypeID local_6d6;
  FComponentTypeID local_6d4;
  FComponentTypeID local_6d2;
  FComponentTypeID local_6d0;
  ushort local_6ce;
  undefined4 local_6cc;
  undefined4 local_6c8;
  undefined4 local_6c4;
  undefined4 local_6c0;
  FTaskID local_6bc;
  FTaskID local_6b8;
  FTaskID local_6b4;
  FInstanceRegistry *local_6b0;
  FInstanceRegistry *local_6a8;
  TSparseArray<UE::Math::TTransform<double>,FDefaultSparseArrayAllocator> *local_6a0;
  TSparseArray<UE::Math::TTransform<double>,FDefaultSparseArrayAllocator> *local_698;
  undefined1 local_690 [16];
  wchar_t *local_680;
  TStatIdData *pTStack_678;
  byte local_670;
  uchar auStack_66f [7];
  TSharedPtr<UE::MovieScene::ITaskContext,1> local_668;
  byte local_658;
  undefined1 local_650 [16];
  ulonglong local_640;
  undefined1 local_638 [16];
  ulonglong local_628;
  undefined8 local_618;
  TStatIdData *pTStack_610;
  byte local_608;
  undefined7 uStack_607;
  undefined4 uStack_600;
  uint uStack_5fc;
  undefined8 local_5f0;
  TStatIdData *pTStack_5e8;
  byte local_5e0;
  undefined7 uStack_5df;
  undefined4 uStack_5d8;
  uint uStack_5d4;
  undefined8 local_5c8;
  TStatIdData *pTStack_5c0;
  byte local_5b8;
  undefined7 uStack_5b7;
  undefined4 uStack_5b0;
  uint uStack_5ac;
  initializer_list<UE::MovieScene::FComponentTypeID> local_5a8;
  TArray<FInstanceToParentPair,TSizedDefaultAllocator<32>_> *local_598;
  undefined1 local_590;
  TSparseArray<UE::Math::TTransform<double>,FDefaultSparseArrayAllocator> *local_588;
  undefined1 local_580;
  initializer_list<UE::MovieScene::FComponentTypeID> local_578;
  initializer_list<UE::MovieScene::FComponentTypeID> local_568;
  initializer_list<UE::MovieScene::FComponentTypeID> local_558;
  initializer_list<UE::MovieScene::FComponentTypeID> local_548;
  <lambda_1> local_538;
  code *local_528;
  undefined1 local_520;
  initializer_list<UE::MovieScene::FComponentTypeID> local_518;
  TComponentTypeID<UE::MovieScene::FRootInstanceHandle> local_508;
  TComponentTypeID<UE::MovieScene::FInstanceHandle> TStack_506;
  TComponentTypeID<FMovieSceneSequenceID> TStack_504;
  uchar auStack_502 [2];
  undefined8 uStack_500;
  TStatIdData *pTStack_4f8;
  ulonglong uStack_4f0;
  undefined8 uStack_4e8;
  TComponentTypeID<UE::MovieScene::FRootInstanceHandle> local_4e0;
  TComponentTypeID<FMovieSceneSequenceID> TStack_4de;
  int iStack_4dc;
  TTypeCompatibleBytes<unsigned_int> aTStack_4d8 [2];
  TTypeCompatibleBytes<unsigned_int> TStack_4d0;
  TTypeCompatibleBytes<unsigned_int> local_4cc;
  TTypeCompatibleBytes<unsigned_int> local_4c8;
  TTypeCompatibleBytes<unsigned_int> TStack_4c4;
  TComponentTypeID<UE::MovieScene::FInstanceHandle> local_4a0;
  TComponentTypeID<UObject_*> TStack_49e;
  TTypeCompatibleBytes<unsigned_int> TStack_49c;
  TTypeCompatibleBytes<unsigned_int> aTStack_498 [2];
  TTypeCompatibleBytes<unsigned_int> TStack_490;
  TTypeCompatibleBytes<unsigned_int> local_48c;
  TTypeCompatibleBytes<unsigned_int> local_488;
  TTypeCompatibleBytes<unsigned_int> TStack_484;
  FEntityComponentFilter local_458;
  undefined1 local_3d8 [8];
  TTypeCompatibleBytes<unsigned_int> aTStack_3d0 [6];
  undefined8 local_3b8;
  TStatIdData *pTStack_3b0;
  ulonglong local_3a8;
  undefined8 uStack_3a0;
  FEntityComponentFilter local_398;
  int local_2e8;
  int local_2e4;
  int local_2b0;
  int local_2ac;
  undefined1 local_2a8 [4];
  FComponentAccess aFStack_2a4 [2];
  wchar_t *pwStack_2a0;
  TStatIdData *local_298;
  ulonglong uStack_290;
  undefined8 local_288;
  FEntityComponentFilter local_280;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_198;
  undefined4 local_194;
  undefined1 local_188 [8];
  TTypeCompatibleBytes<unsigned_int> aTStack_180 [6];
  wchar_t *local_168;
  TStatIdData *pTStack_160;
  ulonglong local_158;
  undefined8 uStack_150;
  FEntityComponentFilter local_148;
  int local_98;
  int local_94;
  int local_60;
  int local_5c;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_738;
  lVar6 = this->_padding_;
  if ((*(longlong *)(lVar6 + 0x580) == 0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("InstanceRegistry.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemLinker.h"
                          ,0x96,L""), bVar22)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pFVar7 = *(FInstanceRegistry **)(lVar6 + 0x580);
  local_6b0 = pFVar7;
  pFVar23 = UE::MovieScene::FBuiltInComponentTypes::Get();
  pFVar24 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  local_458.AllMask.Bits.MaxBits = 0x180;
  local_458.AllMask.Bits.NumBits = 0;
  local_458.NoneMask.Bits.NumBits = 0;
  local_458.NoneMask.Bits.MaxBits = 0x180;
  local_458.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_458.ComplexMasks.ArrayNum = 0;
  local_458.ComplexMasks.ArrayMax = 0;
  local_6d0.Value = (pFVar24->ComponentTransform).PropertyTag.Value;
  local_578._First = &local_6d0;
  local_6ce = (pFVar23->Tags).AbsoluteBlend.Value;
  local_578._Last = (FComponentTypeID *)&local_6cc;
  UE::MovieScene::FComponentMask::SetAll(&local_458.AllMask,&local_578);
  local_6e4.Value = *(ushort *)&pFVar23->BlendChannelOutput;
  local_568._First = &local_6e4;
  local_568._Last = &local_6e2;
  UE::MovieScene::FComponentMask::SetAll(&local_458.NoneMask,&local_568);
  UE::MovieScene::FEntityComponentFilter::Combine
            (&local_458,&this->LocationAndRotationFilterResults);
  pTVar3 = &this->InstanceHandleToParentHandle;
  piVar1 = &(this->InstanceHandleToParentHandle).ArrayMax;
  (this->InstanceHandleToParentHandle).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&pTVar3->AllocatorInstance,0,piVar1);
  }
  this_00 = &this->SequenceIDToInstanceHandle;
  bVar22 = 1 < *(int *)&(this->SequenceIDToInstanceHandle).field_0x48;
  if (!bVar22) {
    TSet<TTuple<FMovieSceneSequenceID,UE::MovieScene::FInstanceHandle>,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,UE::MovieScene::FInstanceHandle,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FMovieSceneSequenceID,UE::MovieScene::FInstanceHandle>,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,UE::MovieScene::FInstanceHandle,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  puVar2 = &(this->SequenceIDToInstanceHandle).field_0xc;
  *(undefined4 *)&(this->SequenceIDToInstanceHandle).field_0x8 = 0;
  if (*(int *)puVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)this_00,0,(int *)puVar2);
  }
  *(undefined4 *)&(this->SequenceIDToInstanceHandle).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SequenceIDToInstanceHandle).field_0x34 = 0;
  iVar5 = *(int *)&(this->SequenceIDToInstanceHandle).field_0x2c;
  *(undefined4 *)&(this->SequenceIDToInstanceHandle).field_0x28 = 0;
  if ((iVar5 < 0) || (0x80 < iVar5)) {
    *(undefined4 *)&(this->SequenceIDToInstanceHandle).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->SequenceIDToInstanceHandle).field_0x10,0);
  }
  if (bVar22) {
    *(undefined4 *)&(this->SequenceIDToInstanceHandle).field_0x48 = 1;
    TSet<TTuple<FMovieSceneSequenceID,UE::MovieScene::FInstanceHandle>,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,UE::MovieScene::FInstanceHandle,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FMovieSceneSequenceID,UE::MovieScene::FInstanceHandle>,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,UE::MovieScene::FInstanceHandle,0>,FDefaultSetAllocator>
              *)this_00);
  }
  local_508 = pFVar23->RootInstanceHandle;
  TStack_506 = pFVar23->InstanceHandle;
  TStack_504 = pFVar23->SequenceID;
  local_618 = 0;
  uStack_5fc = uStack_5fc & 0xffffff00;
  local_6e0.Value = (pFVar23->Tags).SubInstance.Value;
  local_280.AllMask.Bits.NumBits = 0;
  local_280.NoneMask.Bits.NumBits = 0;
  local_280.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_280.ComplexMasks.ArrayNum = 0;
  local_280.ComplexMasks.ArrayMax = 0;
  local_1d0 = 0;
  local_198 = 0;
  pTStack_610 = &TStatId::TStatId_NAME_None;
  uStack_600 = 0x6ff;
  uStack_4f0 = CONCAT71(uStack_607,local_608) & 0xffffffffffffffe0;
  uStack_4e8._4_4_ = uStack_5fc;
  uStack_4e8._0_4_ = AnyHiPriThreadHiPriTask;
  uStack_500._0_1_ = '\0';
  uStack_500._1_1_ = '\0';
  uStack_500._2_1_ = '\0';
  uStack_500._3_1_ = '\0';
  uStack_500._4_1_ = '\0';
  uStack_500._5_1_ = '\0';
  uStack_500._6_1_ = '\0';
  uStack_500._7_1_ = '\0';
  pTStack_4f8 = &TStatId::TStatId_NAME_None;
  local_280.AllMask.Bits.MaxBits = 0x180;
  local_2a8._2_2_ = TStack_506;
  local_2a8._0_2_ = local_508;
  unique0x1000086b = TStack_504;
  unique0x1000086d = auStack_502[0];
  unique0x1000086e = auStack_502[1];
  local_280.NoneMask.Bits.MaxBits = 0x180;
  local_1cc = 0x180;
  local_194 = 0x180;
  pwStack_2a0 = (wchar_t *)0x0;
  local_298 = &TStatId::TStatId_NAME_None;
  local_608 = local_608 & 0xe0;
  uStack_290 = uStack_4f0;
  local_288 = uStack_4e8;
  UE::MovieScene::AddAccessorToFilter((FComponentAccess *)local_2a8,&local_280);
  UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_2a8 + 2),&local_280);
  UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_2a8 + 4),&local_280);
  local_558._First = &local_6e0;
  local_558._Last = &local_6de;
  UE::MovieScene::FComponentMask::SetAll(&local_280.AllMask,&local_558);
  local_6dc.Value = (pFVar23->Tags).ImportedEntity.Value;
  local_548._First = &local_6dc;
  local_548._Last = &local_6da;
  UE::MovieScene::FComponentMask::SetAll(&local_280.NoneMask,&local_548);
  local_538.__this = this;
  local_538.InstanceRegistry = pFVar7;
  UE::MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneSequenceID>_>
  ::
  Iterate_PerEntityImpl<_UMovieSceneTransformOriginSystem::OnSchedulePersistentTasks_::__l2::<lambda_1>_>
            ((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneSequenceID>_>
              *)local_2a8,(FEntityManager *)(this->_padding_ + 0x28),&local_280,&local_538);
  if (local_280.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_280.ComplexMasks.AllocatorInstance.Data);
  }
  AlgoImpl::
  IntroSortInternal<FInstanceToParentPair,int,FIdentityFunctor,TDereferenceWrapper<FInstanceToParentPair,TLess<void>_>_>
            ((FInstanceToParentPair *)(pTVar3->AllocatorInstance).Data,
             (this->InstanceHandleToParentHandle).ArrayNum,local_6e8[0],(TLess<void> *)local_6e8);
  local_668.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)&TStatId::TStatId_NAME_None;
  local_668.Object = (ITaskContext *)0x15133fd30;
  local_520 = 0;
  local_658 = local_658 & 0xe1 | 1;
  local_528 = UE::MovieScene::TAnonTaskWrapper<UE::MovieScene::FGatherTransformOrigin>::Execute;
  pTVar25 = ::operator_new(0x28);
  if (pTVar25 == (TReferenceControllerBase<1> *)0x0) {
    pTVar25 = (TReferenceControllerBase<1> *)0x0;
    local_690._0_8_ = ___xmm_00000000000000000000000000000010;
    local_690._8_8_ = _UNK_150651568;
  }
  else {
    pTVar25->SharedReferenceCount = (atomic<int>)0x1;
    pTVar25->WeakReferenceCount = (atomic<int>)0x1;
    pTVar25[2]._padding_ = (longlong)pFVar7;
    pTVar25->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_U__TAnonTaskWrapper_UFGatherTransformOrigin_MovieScene_UE___MovieScene_UE___00_SharedPointerInternals__6B_
    ;
    *(TSparseArray<UE::Math::TTransform<double>,FDefaultSparseArrayAllocator> **)
     &pTVar25[1].SharedReferenceCount = &this->TransformOriginsByInstanceID;
    pTVar25[1]._padding_ =
         (longlong)
         &___7__TAnonTaskWrapper_UFGatherTransformOrigin_MovieScene_UE___MovieScene_UE__6B_;
    if ((pTVar25 + 1 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("InObject != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x246,L""), bVar22)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    LOCK();
    pTVar25->SharedReferenceCount = (atomic<int>)((int)pTVar25->SharedReferenceCount + 1);
    UNLOCK();
    local_690._0_8_ = pTVar25 + 1;
    local_690._8_8_ = pTVar25;
  }
  UE::MovieScene::IEntitySystemScheduler::AddTask
            (param_1,(FTaskParams *)&local_6bc,&local_668,
             (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
              *)local_690);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar25);
  auVar17 = ___xmm_7fff00007fff00007fff00007fff0000;
  local_6cc._0_2_ = pFVar23->DoubleResult[4];
  uVar4 = *(ulonglong *)pFVar23->DoubleResult;
  local_6c8._0_2_ = pFVar23->DoubleResult[5];
  local_4e0 = pFVar23->RootInstanceHandle;
  TStack_4de = pFVar23->SequenceID;
  uVar15 = pFVar23->RootInstanceHandle;
  uVar16 = pFVar23->SequenceID;
  local_188._2_2_ = uVar16;
  local_188._0_2_ = uVar15;
  auVar9._8_4_ = 0;
  auVar9._0_8_ = uVar4;
  auVar9._12_2_ = (short)(uVar4 >> 0x30);
  auVar11._8_2_ = (short)(uVar4 >> 0x20);
  auVar11._0_8_ = uVar4;
  auVar11._10_4_ = auVar9._10_4_;
  auVar13._6_8_ = 0;
  auVar13._0_6_ = auVar11._8_6_;
  auVar26._6_8_ = SUB148(auVar13 << 0x40,6);
  auVar26._4_2_ = (short)(uVar4 >> 0x10);
  auVar26._0_2_ = (ushort)uVar4;
  auVar26._2_2_ = 0;
  auVar26._14_2_ = 0;
  local_6cc._2_1_ = 0xff;
  local_6cc._3_1_ = '\x7f';
  auVar18 = local_6cc;
  auVar26 = auVar26 | ___xmm_7fff00007fff00007fff00007fff0000;
  local_4cc.Pad[0] = (uchar)local_6cc;
  local_4cc.Pad[1] = local_6cc._1_1_;
  local_4cc.Pad[2] = 0xff;
  local_4cc.Pad[3] = '\x7f';
  local_6c8._2_1_ = 0xff;
  local_6c8._3_1_ = '\x7f';
  auVar19 = local_6c8;
  local_4c8.Pad[0] = (uchar)local_6c8;
  local_4c8.Pad[1] = local_6c8._1_1_;
  local_4c8.Pad[2] = 0xff;
  local_4c8.Pad[3] = '\x7f';
  local_6d8.Value = (pFVar23->Tags).SubInstance.Value;
  iStack_4dc = auVar26._0_4_;
  aTStack_4d8 = auVar26._4_8_;
  aTVar20 = aTStack_4d8;
  TStack_4d0.Pad = auVar26._12_4_;
  local_5f0 = 0;
  aTStack_180[3].Pad[0] = (uchar)local_6cc;
  aTStack_180[3].Pad[1] = local_6cc._1_1_;
  aTStack_180[3].Pad[2] = 0xff;
  aTStack_180[3].Pad[3] = '\x7f';
  aTStack_180[2].Pad[0] = TStack_4d0.Pad[0];
  aTStack_180[2].Pad[1] = TStack_4d0.Pad[1];
  aTStack_180[2].Pad[2] = TStack_4d0.Pad[2];
  aTStack_180[2].Pad[3] = TStack_4d0.Pad[3];
  aTStack_180[5].Pad[0] = TStack_4c4.Pad[0];
  aTStack_180[5].Pad[1] = TStack_4c4.Pad[1];
  aTStack_180[5].Pad[2] = TStack_4c4.Pad[2];
  aTStack_180[5].Pad[3] = TStack_4c4.Pad[3];
  aTStack_180[4].Pad[0] = (uchar)local_6c8;
  aTStack_180[4].Pad[1] = local_6c8._1_1_;
  aTStack_180[4].Pad[2] = 0xff;
  aTStack_180[4].Pad[3] = '\x7f';
  pTStack_5e8 = &TStatId::TStatId_NAME_None;
  uStack_5d8 = 0x6ff;
  local_188._4_4_ = iStack_4dc;
  uStack_5d4 = uStack_5d4 & 0xffffff00;
  local_158 = CONCAT71(uStack_5df,local_5e0) & 0xffffffffffffffe0;
  uStack_150._4_4_ = uStack_5d4;
  uStack_150._0_4_ = 0x6ff;
  aTStack_180[0].Pad[0] = aTStack_4d8[0].Pad[0];
  aTStack_180[0].Pad[1] = aTStack_4d8[0].Pad[1];
  aTStack_180[0].Pad[2] = aTStack_4d8[0].Pad[2];
  aTStack_180[0].Pad[3] = aTStack_4d8[0].Pad[3];
  aTStack_180[1].Pad[0] = aTStack_4d8[1].Pad[0];
  aTStack_180[1].Pad[1] = aTStack_4d8[1].Pad[1];
  aTStack_180[1].Pad[2] = aTStack_4d8[1].Pad[2];
  aTStack_180[1].Pad[3] = aTStack_4d8[1].Pad[3];
  local_168 = (wchar_t *)0x0;
  pTStack_160 = &TStatId::TStatId_NAME_None;
  local_148.AllMask.Bits.NumBits = 0;
  local_148.AllMask.Bits.MaxBits = 0x180;
  local_148.NoneMask.Bits.NumBits = 0;
  local_148.NoneMask.Bits.MaxBits = 0x180;
  local_148.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.ComplexMasks.ArrayNum = 0;
  local_148.ComplexMasks.ArrayMax = 0;
  local_98 = 0;
  local_94 = 0x180;
  local_60 = 0;
  local_5c = 0x180;
  local_6cc = auVar18;
  local_6c8 = auVar19;
  local_5e0 = local_5e0 & 0xe0;
  aTStack_4d8 = aTVar20;
  UE::MovieScene::AddAccessorToFilter((FComponentAccess *)local_188,&local_148);
  UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_188 + 2),&local_148);
  local_518._First = &local_6d8;
  local_518._Last = &local_6d6;
  UE::MovieScene::FComponentMask::SetAll(&local_148.AllMask,&local_518);
  local_6d4.Value = (pFVar23->Tags).ImportedEntity.Value;
  local_5a8._First = &local_6d4;
  local_5a8._Last = &local_6d2;
  UE::MovieScene::FComponentMask::SetAll(&local_148.NoneMask,&local_5a8);
  UE::MovieScene::FEntityComponentFilter::Combine
            (&local_148,&this->LocationAndRotationFilterResults);
  local_680 = L"Gather Transform Origins From Subscenes";
  pTStack_678 = &TStatId::TStatId_NAME_None;
  uVar4 = CONCAT71(auStack_66f,local_670) & 0xffffffffffffffe4;
  local_158 = uVar4 | 4;
  local_640._1_7_ = (undefined7)(uVar4 >> 8);
  local_640 = CONCAT71(local_640._1_7_,local_670) & 0xffffffffffffffe4 | 4;
  local_650._8_8_ = &TStatId::TStatId_NAME_None;
  local_650._0_8_ = L"struct UE::MovieScene::FGatherTransformOriginsFromSubscenes";
  local_598 = (TArray<FInstanceToParentPair,TSizedDefaultAllocator<32>_> *)
              UE::MovieScene::
              TScheduledEntityTask<UE::MovieScene::FGatherTransformOriginsFromSubscenes,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
              ::ScheduledRun_PerAllocation;
  local_168 = L"Gather Transform Origins From Subscenes";
  pTStack_160 = &TStatId::TStatId_NAME_None;
  local_590 = 3;
  local_6a8 = (FInstanceRegistry *)&this->TransformOriginsByInstanceID;
  local_6a0 = (TSparseArray<UE::Math::TTransform<double>,FDefaultSparseArrayAllocator> *)pTVar3;
  local_670 = local_670 & 0xe4 | 4;
  UE::MovieScene::
  TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
  ::
  ScheduleImpl<UE::MovieScene::FGatherTransformOriginsFromSubscenes,TArray<FInstanceToParentPair,TSizedDefaultAllocator<32>_>_*,TSparseArray<UE::Math::TTransform<double>,FDefaultSparseArrayAllocator>_*,UE::MovieScene::FInstanceRegistry_*_&>
            ((TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
              *)local_188,(FEntityManager *)&local_6b4,
             (IEntitySystemScheduler *)(this->_padding_ + 0x28),(FTaskParams *)param_1,
             (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
              *)local_650,&local_598,&local_6a0,&local_6a8);
  if (local_148.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.ComplexMasks.AllocatorInstance.Data);
  }
  local_6c4._0_2_ = pFVar23->DoubleResult[4];
  uVar4 = *(ulonglong *)pFVar23->DoubleResult;
  local_6c0._0_2_ = pFVar23->DoubleResult[5];
  local_4a0 = pFVar23->InstanceHandle;
  TStack_49e = pFVar23->BoundObject;
  auVar10._8_4_ = 0;
  auVar10._0_8_ = uVar4;
  auVar10._12_2_ = (short)(uVar4 >> 0x30);
  auVar12._8_2_ = (short)(uVar4 >> 0x20);
  auVar12._0_8_ = uVar4;
  auVar12._10_4_ = auVar10._10_4_;
  auVar14._6_8_ = 0;
  auVar14._0_6_ = auVar12._8_6_;
  auVar27._6_8_ = SUB148(auVar14 << 0x40,6);
  auVar27._4_2_ = (short)(uVar4 >> 0x10);
  auVar27._0_2_ = (ushort)uVar4;
  auVar27._2_2_ = 0;
  auVar27._14_2_ = 0;
  local_6c4._2_1_ = 0xff;
  local_6c4._3_1_ = '\x7f';
  auVar18 = local_6c4;
  auVar27 = auVar27 | auVar17;
  local_6c0._2_1_ = 0xff;
  local_6c0._3_1_ = '\x7f';
  auVar19 = local_6c0;
  local_48c.Pad[0] = (uchar)local_6c4;
  local_48c.Pad[1] = local_6c4._1_1_;
  local_48c.Pad[2] = 0xff;
  local_48c.Pad[3] = '\x7f';
  TStack_49c.Pad = auVar27._0_4_;
  aTStack_498 = auVar27._4_8_;
  aTVar20 = aTStack_498;
  TStack_490.Pad = auVar27._12_4_;
  local_488.Pad[0] = (uchar)local_6c0;
  local_488.Pad[1] = local_6c0._1_1_;
  local_488.Pad[2] = 0xff;
  local_488.Pad[3] = '\x7f';
  aTStack_3d0[3].Pad[0] = (uchar)local_6c4;
  aTStack_3d0[3].Pad[1] = local_6c4._1_1_;
  aTStack_3d0[3].Pad[2] = 0xff;
  aTStack_3d0[3].Pad[3] = '\x7f';
  aTStack_3d0[2].Pad[0] = TStack_490.Pad[0];
  aTStack_3d0[2].Pad[1] = TStack_490.Pad[1];
  aTStack_3d0[2].Pad[2] = TStack_490.Pad[2];
  aTStack_3d0[2].Pad[3] = TStack_490.Pad[3];
  aTStack_3d0[5].Pad[0] = TStack_484.Pad[0];
  aTStack_3d0[5].Pad[1] = TStack_484.Pad[1];
  aTStack_3d0[5].Pad[2] = TStack_484.Pad[2];
  aTStack_3d0[5].Pad[3] = TStack_484.Pad[3];
  aTStack_3d0[4].Pad[0] = (uchar)local_6c0;
  aTStack_3d0[4].Pad[1] = local_6c0._1_1_;
  aTStack_3d0[4].Pad[2] = 0xff;
  aTStack_3d0[4].Pad[3] = '\x7f';
  local_5c8 = 0;
  local_3d8._2_2_ = TStack_49e;
  local_3d8._0_2_ = local_4a0;
  local_3d8[4] = TStack_49c.Pad[0];
  local_3d8[5] = TStack_49c.Pad[1];
  local_3d8[6] = TStack_49c.Pad[2];
  local_3d8[7] = TStack_49c.Pad[3];
  pTStack_5c0 = &TStatId::TStatId_NAME_None;
  uStack_5b0 = 0x6ff;
  uStack_5ac = uStack_5ac & 0xffffff00;
  local_3a8 = CONCAT71(uStack_5b7,local_5b8) & 0xffffffffffffffe0;
  uStack_3a0._4_4_ = uStack_5ac;
  uStack_3a0._0_4_ = 0x6ff;
  local_398.AllMask.Bits.NumBits = 0;
  local_398.AllMask.Bits.MaxBits = 0;
  aTStack_3d0[0].Pad[0] = aTStack_498[0].Pad[0];
  aTStack_3d0[0].Pad[1] = aTStack_498[0].Pad[1];
  aTStack_3d0[0].Pad[2] = aTStack_498[0].Pad[2];
  aTStack_3d0[0].Pad[3] = aTStack_498[0].Pad[3];
  aTStack_3d0[1].Pad[0] = aTStack_498[1].Pad[0];
  aTStack_3d0[1].Pad[1] = aTStack_498[1].Pad[1];
  aTStack_3d0[1].Pad[2] = aTStack_498[1].Pad[2];
  aTStack_3d0[1].Pad[3] = aTStack_498[1].Pad[3];
  local_3b8 = 0;
  pTStack_3b0 = &TStatId::TStatId_NAME_None;
  local_6c4 = auVar18;
  local_6c0 = auVar19;
  local_5b8 = local_5b8 & 0xe0;
  aTStack_498 = aTVar20;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            ((TBitArray<TFixedAllocator<12>_> *)&local_398,
             (TBitArray<TFixedAllocator<12>_> *)&local_458);
  local_398.NoneMask.Bits.NumBits = 0;
  local_398.NoneMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&local_398.NoneMask.Bits,&local_458.NoneMask.Bits);
  FVar21.Data = local_458.ComplexMasks.AllocatorInstance.Data;
  iVar5 = local_458.ComplexMasks.ArrayNum;
  local_398.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_398.ComplexMasks.ArrayNum = local_458.ComplexMasks.ArrayNum;
  if (local_458.ComplexMasks.ArrayNum == 0) {
    local_398.ComplexMasks.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x3c,4,local_458.ComplexMasks.ArrayNum,0,&local_398.ComplexMasks.AllocatorInstance,
               local_458.ComplexMasks.ArrayNum,&local_398.ComplexMasks.ArrayMax);
    ConstructItems<UE::MovieScene::FEntityComponentFilter::FComplexMask,UE::MovieScene::FEntityComponentFilter::FComplexMask,int>
              (local_398.ComplexMasks.AllocatorInstance.Data,(FComplexMask *)FVar21.Data,iVar5);
  }
  local_2e8 = 0;
  local_2e4 = 0x180;
  local_2b0 = 0;
  local_2ac = 0x180;
  UE::MovieScene::AddAccessorToFilter((FComponentAccess *)local_3d8,&local_398);
  UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_3d8 + 2),&local_398);
  local_628 = local_3a8 & 0xfffffffffffffffd;
  local_638._8_8_ = pTStack_3b0;
  local_638._0_8_ = L"struct UE::MovieScene::FAssignTransformOrigin";
  local_588 = (TSparseArray<UE::Math::TTransform<double>,FDefaultSparseArrayAllocator> *)
              UE::MovieScene::
              TScheduledEntityTask<UE::MovieScene::FAssignTransformOrigin,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
              ::ScheduledRun_PerAllocation;
  local_580 = 3;
  local_698 = &this->TransformOriginsByInstanceID;
  UE::MovieScene::
  TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
  ::
  ScheduleImpl<UE::MovieScene::FAssignTransformOrigin,TSparseArray<UE::Math::TTransform<double>,FDefaultSparseArrayAllocator>_*>
            ((TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
              *)local_3d8,(FEntityManager *)&local_6b8,
             (IEntitySystemScheduler *)(this->_padding_ + 0x28),(FTaskParams *)param_1,
             (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
              *)local_638,&local_588);
  if (local_398.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_398.ComplexMasks.AllocatorInstance.Data);
  }
  UE::MovieScene::IEntitySystemScheduler::AddPrerequisite(param_1,local_6bc,local_6b8);
  UE::MovieScene::IEntitySystemScheduler::AddPrerequisite(param_1,local_6bc,local_6b4);
  UE::MovieScene::IEntitySystemScheduler::AddPrerequisite(param_1,local_6b4,local_6b8);
  if ((FComplexMask *)local_458.ComplexMasks.AllocatorInstance.Data != (FComplexMask *)0x0) {
    FMemory::Free(local_458.ComplexMasks.AllocatorInstance.Data);
  }
  return;
}

// StaticRegisterNativesUMovieSceneTransformOriginSystem @ 14686cca0

void __cdecl
UMovieSceneTransformOriginSystem::StaticRegisterNativesUMovieSceneTransformOriginSystem(void)

{
  return;
}

