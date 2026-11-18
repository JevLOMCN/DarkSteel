// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TemplateSequence
// Functions: 11

// StaticClass @ 14ac62ef0

UClass * __cdecl UTemplateSequencePropertyScalingEvaluatorSystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTemplateSequencePropertyScalingEvaluatorSystem.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TemplateSequence",L"TemplateSequencePropertyScalingEvaluatorSystem",
               &Z_Registration_Info_UClass_UTemplateSequencePropertyScalingEvaluatorSystem.
                InnerSingleton,StaticRegisterNativesUTemplateSequencePropertyScalingEvaluatorSystem,
               0x98,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UTemplateSequencePropertyScalingEvaluatorSystem>,
               InternalVTableHelperCtorCaller<UTemplateSequencePropertyScalingEvaluatorSystem>,
               local_res8,UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTemplateSequencePropertyScalingEvaluatorSystem.InnerSingleton;
}

// UTemplateSequencePropertyScalingEvaluatorSystem @ 14ac707a0

/* WARNING: Enum "Type": Some values do not have unique names */

UTemplateSequencePropertyScalingEvaluatorSystem * __thiscall
UTemplateSequencePropertyScalingEvaluatorSystem::UTemplateSequencePropertyScalingEvaluatorSystem
          (UTemplateSequencePropertyScalingEvaluatorSystem *this,FVTableHelper *param_1)

{
  UMovieSceneEntitySystem::UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this,param_1);
  this->_padding_ = (longlong)&___7UTemplateSequencePropertyScalingEvaluatorSystem__6B_;
  *(undefined8 *)&this->PropertyScales = 0;
  *(undefined8 *)&(this->PropertyScales).field_0x8 = 0;
  *(undefined8 *)&(this->PropertyScales).field_0x20 = 0;
  *(undefined4 *)&(this->PropertyScales).field_0x28 = 0;
  *(undefined4 *)&(this->PropertyScales).field_0x2c = 0x80;
  *(undefined4 *)&(this->PropertyScales).field_0x34 = 0;
  *(undefined4 *)&(this->PropertyScales).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->PropertyScales).field_0x40 = 0;
  *(undefined4 *)&(this->PropertyScales).field_0x48 = 0;
  return this;
}

// UTemplateSequencePropertyScalingEvaluatorSystem @ 14ac70800

/* WARNING: Enum "Type": Some values do not have unique names */

UTemplateSequencePropertyScalingEvaluatorSystem * __thiscall
UTemplateSequencePropertyScalingEvaluatorSystem::UTemplateSequencePropertyScalingEvaluatorSystem
          (UTemplateSequencePropertyScalingEvaluatorSystem *this,FObjectInitializer *param_1)

{
  FComponentTypeID FVar1;
  FBuiltInComponentTypes *pFVar2;
  FTemplateSequenceComponentTypes *pFVar3;
  UClass *local_res8;
  UClass *local_res18;
  
  UMovieSceneEntitySystem::UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this,param_1);
  this->_padding_ = (longlong)&___7UTemplateSequencePropertyScalingEvaluatorSystem__6B_;
  *(undefined8 *)&this->PropertyScales = 0;
  *(undefined8 *)&(this->PropertyScales).field_0x8 = 0;
  *(undefined8 *)&(this->PropertyScales).field_0x20 = 0;
  *(undefined4 *)&(this->PropertyScales).field_0x28 = 0;
  *(undefined4 *)&(this->PropertyScales).field_0x2c = 0x80;
  *(undefined4 *)&(this->PropertyScales).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PropertyScales).field_0x34 = 0;
  *(undefined8 *)&(this->PropertyScales).field_0x40 = 0;
  *(undefined4 *)&(this->PropertyScales).field_0x48 = 0;
  pFVar2 = UE::MovieScene::FBuiltInComponentTypes::Get();
  pFVar3 = UE::MovieScene::FTemplateSequenceComponentTypes::Get();
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 8;
  *(TComponentTypeID<UE::MovieScene::FTemplateSequencePropertyScaleComponentData> *)&this->_padding_
       = pFVar3->PropertyScale;
  if ((this->_padding_ & 0x10) != 0) {
    local_res8 = (UClass *)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    local_res18 = Z_Construct_UClass_UFloatChannelEvaluatorSystem_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res18);
    }
    UMovieSceneEntitySystem::DefineImplicitPrerequisite
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_res18,
               (TSubclassOf<UMovieSceneEntitySystem>)&local_res8);
    local_res8 = (UClass *)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    local_res18 = Z_Construct_UClass_UDoubleChannelEvaluatorSystem_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res18);
    }
    UMovieSceneEntitySystem::DefineImplicitPrerequisite
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_res18,
               (TSubclassOf<UMovieSceneEntitySystem>)&local_res8);
    local_res8 = (UClass *)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    local_res18 = Z_Construct_UClass_UMovieSceneBaseValueEvaluatorSystem_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res18);
    }
    UMovieSceneEntitySystem::DefineImplicitPrerequisite
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_res18,
               (TSubclassOf<UMovieSceneEntitySystem>)&local_res8);
    local_res8 = Z_Construct_UClass_UMovieScenePiecewiseDoubleBlenderSystem_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    local_res18 = (UClass *)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res18);
    }
    UMovieSceneEntitySystem::DefineImplicitPrerequisite
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_res18,
               (TSubclassOf<UMovieSceneEntitySystem>)&local_res8);
    local_res8 = Z_Construct_UClass_UMovieSceneFloatPropertySystem_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    local_res18 = (UClass *)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res18);
    }
    UMovieSceneEntitySystem::DefineImplicitPrerequisite
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_res18,
               (TSubclassOf<UMovieSceneEntitySystem>)&local_res8);
    local_res8 = Z_Construct_UClass_UMovieSceneComponentTransformSystem_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    local_res18 = (UClass *)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res18);
    }
    UMovieSceneEntitySystem::DefineImplicitPrerequisite
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_res18,
               (TSubclassOf<UMovieSceneEntitySystem>)&local_res8);
    local_res8 = Z_Construct_UClass_UMovieScene3DTransformPropertySystem_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    local_res18 = (UClass *)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res18);
    }
    UMovieSceneEntitySystem::DefineImplicitPrerequisite
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_res18,
               (TSubclassOf<UMovieSceneEntitySystem>)&local_res8);
    local_res8 = (UClass *)this->_padding_;
    FVar1.Value = *(ushort *)&pFVar2->BoundObject;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    UMovieSceneEntitySystem::DefineComponentConsumer
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_res8,FVar1);
  }
  return this;
}

// ~UTemplateSequencePropertyScalingEvaluatorSystem @ 14ac71720

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UTemplateSequencePropertyScalingEvaluatorSystem::~UTemplateSequencePropertyScalingEvaluatorSystem
          (UTemplateSequencePropertyScalingEvaluatorSystem *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UTemplateSequencePropertyScalingEvaluatorSystem__6B_;
  *(undefined4 *)&(this->PropertyScales).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PropertyScales).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName>,UTemplateSequencePropertyScalingEvaluatorSystem::FMultiPropertyScaleValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName>,UTemplateSequencePropertyScalingEvaluatorSystem::FMultiPropertyScaleValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName>,UTemplateSequencePropertyScalingEvaluatorSystem::FMultiPropertyScaleValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PropertyScales);
  UMovieSceneEntitySystem::~UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this);
  return;
}

// AddPropertyScale @ 14ac732b0

void __thiscall
UTemplateSequencePropertyScalingEvaluatorSystem::AddPropertyScale
          (UTemplateSequencePropertyScalingEvaluatorSystem *this,
          TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName> *param_1,
          TTuple<ETemplateSectionPropertyScaleType,float> *param_2)

{
  ushort uVar1;
  undefined8 uVar2;
  ForElementType<TTuple<ETemplateSectionPropertyScaleType,float>_> FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  ulong64 uVar8;
  ForElementType<TTuple<ETemplateSectionPropertyScaleType,float>_> FVar9;
  ForElementType<TTuple<ETemplateSectionPropertyScaleType,float>_> FVar10;
  uint uVar11;
  
  uVar1 = *(ushort *)param_1;
  uVar11 = *(int *)&param_1->field_0x4 + -0x61c88647 + (uint)uVar1 * 0x40 + (uint)(uVar1 >> 2) ^
           (uint)uVar1;
  uVar8 = CityHash64(&param_1->field_0x8,0x10);
  uVar11 = uVar11 * 0x40 + (uVar11 >> 2) + (int)uVar8 + -0x61c88647 ^ uVar11;
  uVar2 = *(undefined8 *)&param_1->field_0x18;
  uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
  FVar9 = (ForElementType<TTuple<ETemplateSectionPropertyScaleType,float>_>)
          TMapBase<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName>,UTemplateSequencePropertyScalingEvaluatorSystem::FMultiPropertyScaleValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName>,UTemplateSequencePropertyScalingEvaluatorSystem::FMultiPropertyScaleValue,0>_>
          ::
          FindOrAddImpl<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName>_const_&>
                    ((TMapBase<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName>,UTemplateSequencePropertyScalingEvaluatorSystem::FMultiPropertyScaleValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName>,UTemplateSequencePropertyScalingEvaluatorSystem::FMultiPropertyScaleValue,0>_>
                      *)&this->PropertyScales,
                     uVar11 * 0x40 + (int)((ulonglong)uVar2 >> 0x20) + (uVar11 >> 2) +
                     uVar6 + 0x9e3779b9 ^ uVar11,param_1);
  if (*(int *)((ForElementType<TTuple<ETemplateSectionPropertyScaleType,float>_> *)
              ((longlong)FVar9 + 0x18))->InlineData < 2) {
    FVar3 = *(ForElementType<TTuple<ETemplateSectionPropertyScaleType,float>_> *)
             ((longlong)FVar9 + 0x10);
    FVar10 = FVar9;
    if (FVar3 != (ForElementType<TTuple<ETemplateSectionPropertyScaleType,float>_>)0x0) {
      FVar10 = FVar3;
    }
    if ((ulonglong)FVar10 <= param_2) {
      FVar10 = FVar9;
      if (FVar3 != (ForElementType<TTuple<ETemplateSectionPropertyScaleType,float>_>)0x0) {
        FVar10 = FVar3;
      }
      if ((param_2 < (TTuple<ETemplateSectionPropertyScaleType,float> *)
                     ((longlong)FVar10 + (longlong)*(int *)((longlong)FVar9 + 0x1c) * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar7 = *(int *)((longlong)FVar9 + 0x18);
    if (iVar7 == *(int *)((longlong)FVar9 + 0x1c)) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<enum_ETemplateSectionPropertyScaleType,float>_>_>
                        (0x408,(ForElementType<TTuple<ETemplateSectionPropertyScaleType,float>_> *)
                               FVar9,(int *)((longlong)FVar9 + 0x1c));
    }
    *(int *)((longlong)FVar9 + 0x18) = iVar7 + 1;
    if (*(ForElementType<TTuple<ETemplateSectionPropertyScaleType,float>_> *)
         ((longlong)FVar9 + 0x10) !=
        (ForElementType<TTuple<ETemplateSectionPropertyScaleType,float>_>)0x0) {
      FVar9 = *(ForElementType<TTuple<ETemplateSectionPropertyScaleType,float>_> *)
               ((longlong)FVar9 + 0x10);
    }
    *(TTuple<ETemplateSectionPropertyScaleType,float> *)((longlong)FVar9 + (longlong)iVar7 * 8) =
         *param_2;
  }
  else {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_313004018097979100>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\TemplateSequence\\Source\\TemplateSequence\\Private\\Systems\\TemplateSequenceSystem.cpp"
                       ,0x124,"MultiValue.Values.Num() < 2");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}

// FindPropertyScales @ 14ac75fe0

void __thiscall
UTemplateSequencePropertyScalingEvaluatorSystem::FindPropertyScales
          (UTemplateSequencePropertyScalingEvaluatorSystem *this,
          TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName> *param_1,
          TArray<TTuple<ETemplateSectionPropertyScaleType,float>,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  int iVar1;
  ForElementType<TTuple<ETemplateSectionPropertyScaleType,float>_> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<TTuple<ETemplateSectionPropertyScaleType,float>_> _Src;
  
  _Src = (ForElementType<TTuple<ETemplateSectionPropertyScaleType,float>_>)
         TMapBase<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName>,UTemplateSequencePropertyScalingEvaluatorSystem::FMultiPropertyScaleValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName>,UTemplateSequencePropertyScalingEvaluatorSystem::FMultiPropertyScaleValue,0>_>
         ::Find((TMapBase<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName>,UTemplateSequencePropertyScalingEvaluatorSystem::FMultiPropertyScaleValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName>,UTemplateSequencePropertyScalingEvaluatorSystem::FMultiPropertyScaleValue,0>_>
                 *)&this->PropertyScales,param_1);
  if (_Src != (ForElementType<TTuple<ETemplateSectionPropertyScaleType,float>_>)0x0) {
    if ((2 < *(int *)((longlong)_Src + 0x18)) &&
       (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_313004018097979090>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\TemplateSequence\\Source\\TemplateSequence\\Private\\Systems\\TemplateSequenceSystem.cpp"
                           ,0x12e,"MultiValue->Values.Num() <= 2"), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (((ForElementType<TTuple<ETemplateSectionPropertyScaleType,float>_>)param_2 == _Src) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar1 = *(int *)((longlong)_Src + 0x18);
    if (iVar1 != 0) {
      iVar5 = UE::Core::Private::
              ReallocGrow<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<enum_ETemplateSectionPropertyScaleType,float>_>_>
                        (8,4,iVar1,&param_2->AllocatorInstance,&param_2->ArrayNum,&param_2->ArrayMax
                        );
      if (*(ForElementType<TTuple<ETemplateSectionPropertyScaleType,float>_> *)
           ((longlong)_Src + 0x10) !=
          (ForElementType<TTuple<ETemplateSectionPropertyScaleType,float>_>)0x0) {
        _Src = *(ForElementType<TTuple<ETemplateSectionPropertyScaleType,float>_> *)
                ((longlong)_Src + 0x10);
      }
      FVar2 = (param_2->AllocatorInstance).SecondaryData;
      if (FVar2 != (ForElementType<TTuple<ETemplateSectionPropertyScaleType,float>_>)0x0) {
        param_2 = (TArray<TTuple<ETemplateSectionPropertyScaleType,float>,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
                   *)FVar2;
      }
      memcpy((void *)((longlong)param_2 + (longlong)iVar5 * 8),(void *)_Src,(longlong)iVar1 << 3);
    }
  }
  return;
}

// GetPrivateStaticClass @ 14ac77fb0

UClass * __cdecl UTemplateSequencePropertyScalingEvaluatorSystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTemplateSequencePropertyScalingEvaluatorSystem.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TemplateSequence",L"TemplateSequencePropertyScalingEvaluatorSystem",
               &Z_Registration_Info_UClass_UTemplateSequencePropertyScalingEvaluatorSystem.
                InnerSingleton,StaticRegisterNativesUTemplateSequencePropertyScalingEvaluatorSystem,
               0x98,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UTemplateSequencePropertyScalingEvaluatorSystem>,
               InternalVTableHelperCtorCaller<UTemplateSequencePropertyScalingEvaluatorSystem>,
               local_res8,UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTemplateSequencePropertyScalingEvaluatorSystem.InnerSingleton;
}

// OnRun @ 14ac7b260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UTemplateSequencePropertyScalingEvaluatorSystem::OnRun
          (UTemplateSequencePropertyScalingEvaluatorSystem *this,FSystemTaskPrerequisites *param_1,
          FSystemSubsequentTasks *param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  ulonglong uVar4;
  code *pcVar5;
  undefined1 auVar6 [14];
  undefined1 auVar7 [14];
  undefined1 auVar8 [14];
  undefined1 auVar9 [14];
  uint uVar10;
  bool bVar11;
  FBuiltInComponentTypes *pFVar12;
  FTemplateSequenceComponentTypes *pFVar13;
  UTemplateSequencePropertyScalingInstantiatorSystem *pUVar14;
  TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
  *this_00;
  undefined1 auStackY_498 [32];
  FComponentTypeID local_468;
  FComponentTypeID local_466;
  FComponentTypeID local_464;
  ushort local_462;
  FComponentTypeID local_460;
  undefined2 uStack_45e;
  TComponentTypeID<double> local_45c;
  undefined2 uStack_45a;
  TComponentTypeID<double> local_458;
  undefined2 uStack_456;
  undefined1 local_450 [16];
  UTemplateSequencePropertyScalingEvaluatorSystem *local_440;
  UTemplateSequencePropertyScalingEvaluatorSystem *local_438;
  undefined1 local_430 [16];
  undefined1 local_420 [32];
  byte local_400;
  undefined7 uStack_3ff;
  int iStack_3f8;
  uint uStack_3f4;
  undefined8 local_3e8;
  TStatIdData *pTStack_3e0;
  byte local_3d8;
  uchar auStack_3d7 [7];
  undefined1 auStack_3d0 [24];
  TStatIdData *pTStack_3b8;
  byte local_3b0;
  undefined7 uStack_3af;
  undefined4 uStack_3a8;
  TTypeCompatibleBytes<unsigned_int> TStack_3a4;
  initializer_list<UE::MovieScene::FComponentTypeID> local_398;
  initializer_list<UE::MovieScene::FComponentTypeID> local_388;
  TComponentTypeID<UE::MovieScene::FRootInstanceHandle> local_378;
  uint local_376;
  TComponentTypeID<FMovieScenePropertyBinding> local_372;
  TComponentTypeID<FGuid> local_370;
  undefined1 local_36e [16];
  uint local_35e;
  uint local_35a;
  uint local_356;
  uint local_352;
  uint local_34e;
  uint local_34a;
  undefined4 local_346;
  undefined4 local_342;
  undefined8 local_338;
  TStatIdData *pTStack_330;
  ulonglong local_328;
  undefined8 uStack_320;
  TComponentTypeID<UE::MovieScene::FRootInstanceHandle> local_318;
  TComponentTypeID<UE::MovieScene::FTemplateSequencePropertyScaleComponentData> local_316;
  TComponentTypeID<double> local_314;
  undefined1 local_310 [16];
  ulonglong local_300;
  undefined1 auStack_2f8 [10];
  uint uStack_2ee;
  TComponentTypeID<FMovieScenePropertyBinding> TStack_2ea;
  TComponentTypeID<FGuid> TStack_2e8;
  undefined4 uStack_2e6;
  TComponentTypeID<double> TStack_2e2;
  undefined1 local_2b8 [8];
  FComponentAccess aFStack_2b0 [3];
  FComponentAccess FStack_2aa;
  undefined8 local_2a8;
  TStatIdData *pTStack_2a0;
  ulonglong local_298;
  TTypeCompatibleBytes<unsigned_int> aTStack_290 [2];
  FEntityComponentFilter local_288;
  int local_1d8;
  int local_1d4;
  uint local_1a0;
  uint local_19c;
  TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
  local_198;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_498;
  pFVar12 = UE::MovieScene::FBuiltInComponentTypes::Get();
  local_450._8_8_ = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  pFVar13 = UE::MovieScene::FTemplateSequenceComponentTypes::Get();
  if ((*(longlong *)(this->_padding_ + 0x580) == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InstanceRegistry.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemLinker.h"
                          ,0x96,L""), bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pUVar14 = UMovieSceneEntitySystemLinker::
            FindSystem<UTemplateSequencePropertyScalingInstantiatorSystem>
                      ((UMovieSceneEntitySystemLinker *)this->_padding_);
  TSet<TTuple<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName>,UTemplateSequencePropertyScalingEvaluatorSystem::FMultiPropertyScaleValue>,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName>,UTemplateSequencePropertyScalingEvaluatorSystem::FMultiPropertyScaleValue,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName>,UTemplateSequencePropertyScalingEvaluatorSystem::FMultiPropertyScaleValue>,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName>,UTemplateSequencePropertyScalingEvaluatorSystem::FMultiPropertyScaleValue,0>,FDefaultSetAllocator>
           *)&this->PropertyScales);
  local_420._24_8_ = &TStatId::TStatId_NAME_None;
  local_318 = pFVar12->RootInstanceHandle;
  local_316 = pFVar13->PropertyScale;
  local_314 = pFVar12->DoubleResult[0];
  local_420[0x10] = '\0';
  local_420[0x11] = '\0';
  local_420[0x12] = '\0';
  local_420[0x13] = '\0';
  local_420[0x14] = '\0';
  local_420[0x15] = '\0';
  local_420[0x16] = '\0';
  local_420[0x17] = '\0';
  iStack_3f8 = 0x6ff;
  uStack_3f4 = uStack_3f4 & 0xffffff00;
  local_300 = CONCAT71(uStack_3ff,local_400) & 0xffffffffffffffe0;
  auStack_2f8._4_4_ = uStack_3f4;
  auStack_2f8._0_4_ = 0x6ff;
  local_310._0_8_ = 0;
  local_310._8_8_ = &TStatId::TStatId_NAME_None;
  local_440 = this;
  local_400 = local_400 & 0xe0;
  UE::MovieScene::
  TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>,UE::MovieScene::TReadAccess<double>_>
  ::
  Dispatch_PerEntity<UE::MovieScene::FGatherPropertyScales,UTemplateSequencePropertyScalingEvaluatorSystem_*>
            ((TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>,UE::MovieScene::TReadAccess<double>_>
              *)&local_318,(FEntityManager *)local_450,
             (FSystemTaskPrerequisites *)(this->_padding_ + 0x28),(FSystemSubsequentTasks *)param_1,
             (UTemplateSequencePropertyScalingEvaluatorSystem **)param_2);
  if ((FBaseGraphTask *)local_450._0_8_ != (FBaseGraphTask *)0x0) {
    UE::MovieScene::FSystemTaskPrerequisites::AddComponentTask
              (param_1,(FComponentTypeID)0xffff,(TRefCountPtr<FBaseGraphTask> *)local_450);
  }
  if (pUVar14 == (UTemplateSequencePropertyScalingInstantiatorSystem *)0x0) {
    bVar11 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_313004018097978813>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\TemplateSequence\\Source\\TemplateSequence\\Private\\Systems\\TemplateSequenceSystem.cpp"
                        ,0x243,"InstantiatorSystem");
    if (bVar11) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    bVar11 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_313004018097978789>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\TemplateSequence\\Source\\TemplateSequence\\Private\\Systems\\TemplateSequenceSystem.cpp"
                        ,0x25b,"InstantiatorSystem");
    if (bVar11) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    if (0 < pUVar14->TransformScaleUseCount) {
      uVar4 = *(ulonglong *)pFVar12->BaseDouble;
      pTStack_3e0 = &TStatId::TStatId_NAME_None;
      local_378 = pFVar12->RootInstanceHandle;
      local_376 = (ushort)pFVar12->SequenceID | 0x7fff0000;
      auVar6._8_4_ = 0;
      auVar6._0_8_ = uVar4;
      auVar6._12_2_ = (short)(uVar4 >> 0x30);
      auVar7._8_2_ = (short)(uVar4 >> 0x20);
      auVar7._0_8_ = uVar4;
      auVar7._10_4_ = auVar6._10_4_;
      auVar9._6_8_ = 0;
      auVar9._0_6_ = auVar7._8_6_;
      auVar8._4_2_ = (short)(uVar4 >> 0x10);
      auVar8._0_4_ = (uint)uVar4;
      auVar8._6_8_ = SUB148(auVar9 << 0x40,6);
      local_36e._0_4_ = (uint)uVar4 & 0xffff;
      local_36e._4_10_ = auVar8._4_10_;
      local_36e._14_2_ = 0;
      local_36e = local_36e | ___xmm_7fff00007fff00007fff00007fff0000;
      local_372 = pFVar12->PropertyBinding;
      local_370 = pFVar13->PropertyScaleReverseBindingLookup;
      local_35e = (ushort)pFVar12->BaseDouble[4] | 0x7fff0000;
      uStack_45e = 0x7fff;
      local_460.Value = (ushort)pFVar12->DoubleResult[4];
      local_35a = (ushort)pFVar12->BaseDouble[5] | 0x7fff0000;
      uStack_45a = 0x7fff;
      local_45c = pFVar12->DoubleResult[5];
      local_356 = (ushort)pFVar12->DoubleResult[0] | 0x7fff0000;
      local_3e8 = 0;
      local_352 = (ushort)pFVar12->DoubleResult[1] | 0x7fff0000;
      auStack_3d0._0_4_ = 0x6ff;
      local_34e = (ushort)pFVar12->DoubleResult[2] | 0x7fff0000;
      auStack_3d0._4_4_ = auStack_3d0._4_4_ & 0xffffff00;
      local_34a = (ushort)pFVar12->DoubleResult[3] | 0x7fff0000;
      local_346 = _local_460;
      local_342 = _local_45c;
      local_464.Value =
           (((TPropertyComponents<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
              *)(local_450._8_8_ + 0x168))->PropertyTag).Value;
      local_462 = (((TPropertyComponents<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>_>
                     *)(local_450._8_8_ + 0x128))->PropertyTag).Value;
      local_398._First = &local_464;
      local_398._Last = &local_460;
      local_328 = CONCAT71(auStack_3d7,local_3d8) & 0xffffffffffffffe0;
      uStack_320._4_4_ = auStack_3d0._4_4_;
      uStack_320._0_4_ = 0x6ff;
      local_338 = 0;
      pTStack_330 = &TStatId::TStatId_NAME_None;
      local_3d8 = local_3d8 & 0xe0;
      this_00 = UE::MovieScene::
                TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
                ::FilterAny((TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
                             *)&local_378,&local_198,&local_398);
      local_438 = this;
      UE::MovieScene::
      TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
      ::
      Dispatch_PerAllocation<UE::MovieScene::FScaleTransformProperties,UTemplateSequencePropertyScalingEvaluatorSystem_*>
                (this_00,(FEntityManager *)local_430,
                 (FSystemTaskPrerequisites *)(this->_padding_ + 0x28),
                 (FSystemSubsequentTasks *)param_1,
                 (UTemplateSequencePropertyScalingEvaluatorSystem **)param_2);
      if ((undefined8 *)local_430._0_8_ != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_430._0_8_ + 0x30);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (*(code *)**(undefined8 **)local_430._0_8_)(local_430._0_8_,1);
        }
      }
      if (local_198.Filter.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_198.Filter.ComplexMasks.AllocatorInstance.Data);
      }
    }
    if (0 < pUVar14->FloatScaleUseCount) {
      pTStack_3b8 = &TStatId::TStatId_NAME_None;
      auStack_2f8._8_2_ = pFVar12->RootInstanceHandle;
      uVar10._0_2_ = pFVar12->RootInstanceHandle;
      uVar10._2_2_ = pFVar12->SequenceID;
      uStack_2ee = (ushort)pFVar12->SequenceID | 0x7fff0000;
      uStack_456 = 0x7fff;
      local_458 = pFVar12->BaseDouble[0];
      TStack_2ea = pFVar12->PropertyBinding;
      TStack_2e8 = pFVar13->PropertyScaleReverseBindingLookup;
      uStack_2e6 = _local_458;
      TStack_2e2 = pFVar12->DoubleResult[0];
      local_2b8 = (undefined1  [8])(CONCAT26(TStack_2ea,(uint6)uVar10) | 0x7fff00000000);
      aFStack_2b0._2_4_ = _local_458;
      aFStack_2b0[0].ComponentType.Value = TStack_2e8;
      unique0x100004ab = TStack_2e2;
      auStack_3d0._16_8_ = 0;
      local_468.Value =
           (((TPropertyComponents<UE::MovieScene::FFloatPropertyTraits> *)(local_450._8_8_ + 0x70))
           ->PropertyTag).Value;
      TStack_3a4.Pad = TStack_3a4.Pad & 0xffffff00;
      local_288.AllMask.Bits.NumBits._0_1_ = '\0';
      local_288.AllMask.Bits.NumBits._1_1_ = '\0';
      local_288.AllMask.Bits.NumBits._2_1_ = '\0';
      local_288.AllMask.Bits.NumBits._3_1_ = '\0';
      local_288.NoneMask.Bits.NumBits._0_1_ = '\0';
      local_288.NoneMask.Bits.NumBits._1_1_ = '\0';
      local_288.NoneMask.Bits.NumBits._2_1_ = '\0';
      local_288.NoneMask.Bits.NumBits._3_1_ = '\0';
      local_288.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_288.ComplexMasks.ArrayNum = 0;
      local_288.ComplexMasks.ArrayMax = 0;
      local_1d8 = 0;
      local_1a0 = 0;
      uStack_3a8 = 0x6ff;
      local_298 = CONCAT71(uStack_3af,local_3b0) & 0xffffffffffffffe0;
      aTStack_290[1].Pad[0] = TStack_3a4.Pad[0];
      aTStack_290[1].Pad[1] = TStack_3a4.Pad[1];
      aTStack_290[1].Pad[2] = TStack_3a4.Pad[2];
      aTStack_290[1].Pad[3] = TStack_3a4.Pad[3];
      aTStack_290[0].Pad[0] = 0xff;
      aTStack_290[0].Pad[1] = '\x06';
      aTStack_290[0].Pad[2] = '\0';
      aTStack_290[0].Pad[3] = '\0';
      local_2a8._0_1_ = '\0';
      local_2a8._1_1_ = '\0';
      local_2a8._2_1_ = '\0';
      local_2a8._3_1_ = '\0';
      local_2a8._4_1_ = '\0';
      local_2a8._5_1_ = '\0';
      local_2a8._6_1_ = '\0';
      local_2a8._7_1_ = '\0';
      pTStack_2a0 = &TStatId::TStatId_NAME_None;
      local_288.AllMask.Bits.MaxBits._0_1_ = 0x80;
      local_288.AllMask.Bits.MaxBits._1_1_ = '\x01';
      local_288.AllMask.Bits.MaxBits._2_1_ = '\0';
      local_288.AllMask.Bits.MaxBits._3_1_ = '\0';
      local_288.NoneMask.Bits.MaxBits._0_1_ = 0x80;
      local_288.NoneMask.Bits.MaxBits._1_1_ = '\x01';
      local_288.NoneMask.Bits.MaxBits._2_1_ = '\0';
      local_288.NoneMask.Bits.MaxBits._3_1_ = '\0';
      local_1d4 = 0x180;
      local_19c = 0x180;
      local_3b0 = local_3b0 & 0xe0;
      UE::MovieScene::AddAccessorToFilter((FComponentAccess *)local_2b8,&local_288);
      UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_2b8 + 6),&local_288);
      UE::MovieScene::AddAccessorToFilter(aFStack_2b0,&local_288);
      UE::MovieScene::AddAccessorToFilter(aFStack_2b0 + 3,&local_288);
      local_388._First = &local_468;
      local_388._Last = &local_466;
      UE::MovieScene::FComponentMask::SetAll(&local_288.AllMask,&local_388);
      local_430._8_8_ = this;
      UE::MovieScene::
      TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TWriteAccess<double>_>
      ::
      Dispatch_PerAllocation<UE::MovieScene::FScaleFloatProperties,UTemplateSequencePropertyScalingEvaluatorSystem_*>
                ((TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TWriteAccess<double>_>
                  *)local_2b8,(FEntityManager *)local_420,
                 (FSystemTaskPrerequisites *)(this->_padding_ + 0x28),
                 (FSystemSubsequentTasks *)param_1,
                 (UTemplateSequencePropertyScalingEvaluatorSystem **)param_2);
      if ((undefined8 *)local_420._0_8_ != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_420._0_8_ + 0x30);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (*(code *)**(undefined8 **)local_420._0_8_)(local_420._0_8_,1);
        }
      }
      if (local_288.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_288.ComplexMasks.AllocatorInstance.Data);
      }
    }
  }
  if ((FBaseGraphTask *)local_450._0_8_ != (FBaseGraphTask *)0x0) {
    LOCK();
    puVar2 = (undefined1 *)(local_450._0_8_ + 0x30);
    iVar3 = *(int *)puVar2;
    *(int *)puVar2 = *(int *)puVar2 + -1;
    UNLOCK();
    if ((iVar3 == 1) && ((FBaseGraphTask *)local_450._0_8_ != (FBaseGraphTask *)0x0)) {
      (*(code *)**(undefined8 **)local_450._0_8_)(local_450._0_8_,1);
    }
  }
  return;
}

// OnSchedulePersistentTasks @ 14ac7c000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UTemplateSequencePropertyScalingEvaluatorSystem::OnSchedulePersistentTasks
          (UTemplateSequencePropertyScalingEvaluatorSystem *this,IEntitySystemScheduler *param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined1 auVar3 [14];
  undefined1 auVar4 [14];
  undefined1 auVar5 [14];
  undefined1 auVar6 [14];
  uint uVar7;
  undefined4 uVar8;
  bool bVar9;
  FBuiltInComponentTypes *pFVar10;
  FMovieSceneTracksComponentTypes *pFVar11;
  FTemplateSequenceComponentTypes *pFVar12;
  UTemplateSequencePropertyScalingInstantiatorSystem *pUVar13;
  TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
  *this_00;
  undefined1 auStackY_508 [32];
  FComponentTypeID local_4c8;
  FComponentTypeID local_4c6;
  FComponentTypeID local_4c4;
  ushort local_4c2;
  FComponentTypeID local_4c0;
  undefined2 uStack_4be;
  TComponentTypeID<double> local_4bc;
  undefined2 uStack_4ba;
  TComponentTypeID<double> local_4b8;
  undefined2 uStack_4b6;
  FTaskID local_4b4;
  FTaskID local_4b0;
  FTaskID local_4ac;
  UTemplateSequencePropertyScalingEvaluatorSystem *local_4a8;
  UTemplateSequencePropertyScalingEvaluatorSystem *local_4a0;
  UTemplateSequencePropertyScalingEvaluatorSystem *local_498;
  TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
  local_490;
  ulonglong local_480;
  undefined1 local_478 [16];
  undefined8 local_468;
  undefined1 local_460 [16];
  ulonglong local_450;
  undefined8 local_440;
  TStatIdData *pTStack_438;
  byte local_430;
  undefined7 uStack_42f;
  undefined4 uStack_428;
  TTypeCompatibleBytes<unsigned_int> TStack_424;
  undefined1 local_418 [16];
  byte local_408;
  undefined7 uStack_407;
  undefined4 uStack_400;
  uint uStack_3fc;
  undefined8 local_3f0;
  TStatIdData *pTStack_3e8;
  byte local_3e0;
  undefined7 uStack_3df;
  undefined4 uStack_3d8;
  TTypeCompatibleBytes<unsigned_int> TStack_3d4;
  UTemplateSequencePropertyScalingEvaluatorSystem *local_3d0;
  undefined1 local_3c8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_3b8;
  UTemplateSequencePropertyScalingEvaluatorSystem *local_3a8;
  undefined1 local_3a0;
  initializer_list<UE::MovieScene::FComponentTypeID> local_398;
  UTemplateSequencePropertyScalingEvaluatorSystem *local_388;
  undefined1 local_380;
  TComponentTypeID<UE::MovieScene::FRootInstanceHandle> local_378;
  uint local_376;
  TComponentTypeID<FMovieScenePropertyBinding> local_372;
  TComponentTypeID<FGuid> local_370;
  undefined1 local_36e [16];
  uint local_35e;
  uint local_35a;
  uint local_356;
  uint local_352;
  uint local_34e;
  uint local_34a;
  undefined4 local_346;
  undefined4 local_342;
  undefined8 local_338;
  TStatIdData *pTStack_330;
  ulonglong local_328;
  undefined8 uStack_320;
  TComponentTypeID<UE::MovieScene::FRootInstanceHandle> local_318;
  TComponentTypeID<UE::MovieScene::FTemplateSequencePropertyScaleComponentData> local_316;
  TComponentTypeID<double> local_314;
  undefined8 local_310;
  TStatIdData *pTStack_308;
  ulonglong local_300;
  TTypeCompatibleBytes<unsigned_int> aTStack_2f8 [2];
  TComponentTypeID<UE::MovieScene::FRootInstanceHandle> local_2f0;
  uint uStack_2ee;
  TComponentTypeID<FMovieScenePropertyBinding> TStack_2ea;
  TComponentTypeID<FGuid> TStack_2e8;
  TTypeCompatibleBytes<unsigned_int> TStack_2e6;
  TComponentTypeID<double> TStack_2e2;
  undefined1 local_2b8 [8];
  FComponentAccess aFStack_2b0 [3];
  FComponentAccess FStack_2aa;
  undefined8 local_2a8;
  TStatIdData *pTStack_2a0;
  ulonglong local_298;
  TTypeCompatibleBytes<unsigned_int> aTStack_290 [2];
  FEntityComponentFilter local_288;
  int local_1d8;
  int local_1d4;
  int local_1a0;
  int local_19c;
  TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
  local_198;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_508;
  pFVar10 = UE::MovieScene::FBuiltInComponentTypes::Get();
  pFVar11 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  pFVar12 = UE::MovieScene::FTemplateSequenceComponentTypes::Get();
  if (*(longlong *)(this->_padding_ + 0x580) == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstanceRegistry.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemLinker.h"
                       ,0x96,L"");
    if (bVar9) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pUVar13 = UMovieSceneEntitySystemLinker::
            FindSystem<UTemplateSequencePropertyScalingInstantiatorSystem>
                      ((UMovieSceneEntitySystemLinker *)this->_padding_);
  local_440 = 0;
  pTStack_438 = &TStatId::TStatId_NAME_None;
  local_318 = pFVar10->RootInstanceHandle;
  local_316 = pFVar12->PropertyScale;
  local_314 = pFVar10->DoubleResult[0];
  local_478._8_8_ = &TStatId::TStatId_NAME_None;
  local_478._0_8_ = L"struct UE::MovieScene::FGatherPropertyScales";
  local_3d0 = (UTemplateSequencePropertyScalingEvaluatorSystem *)
              UE::MovieScene::
              TScheduledEntityTask<UE::MovieScene::FGatherPropertyScales,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>,UE::MovieScene::TReadAccess<double>_>
              ::ScheduledRun_PerEntity;
  uStack_428 = 0x6ff;
  TStack_424.Pad = TStack_424.Pad & 0xffffff00;
  local_300 = CONCAT71(uStack_42f,local_430) & 0xffffffffffffffe0;
  aTStack_2f8[1].Pad[0] = TStack_424.Pad[0];
  aTStack_2f8[1].Pad[1] = TStack_424.Pad[1];
  aTStack_2f8[1].Pad[2] = TStack_424.Pad[2];
  aTStack_2f8[1].Pad[3] = TStack_424.Pad[3];
  aTStack_2f8[0].Pad[0] = 0xff;
  aTStack_2f8[0].Pad[1] = '\x06';
  aTStack_2f8[0].Pad[2] = '\0';
  aTStack_2f8[0].Pad[3] = '\0';
  local_310 = 0;
  pTStack_308 = &TStatId::TStatId_NAME_None;
  local_468._1_7_ = (undefined7)(local_300 >> 8);
  local_468 = CONCAT71(local_468._1_7_,local_430) & 0xffffffffffffffe0 | 2;
  local_3c8 = 3;
  local_4a8 = this;
  local_430 = local_430 & 0xe0;
  UE::MovieScene::
  TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>,UE::MovieScene::TReadAccess<double>_>
  ::
  ScheduleImpl<UE::MovieScene::FGatherPropertyScales,UTemplateSequencePropertyScalingEvaluatorSystem_*>
            ((TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>,UE::MovieScene::TReadAccess<double>_>
              *)&local_318,(FEntityManager *)&local_4b4,
             (IEntitySystemScheduler *)(this->_padding_ + 0x28),(FTaskParams *)param_1,
             (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
              *)local_478,&local_3d0);
  if (pUVar13 == (UTemplateSequencePropertyScalingInstantiatorSystem *)0x0) {
    bVar9 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_313004018097978886>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\TemplateSequence\\Source\\TemplateSequence\\Private\\Systems\\TemplateSequenceSystem.cpp"
                       ,0x1fa,"InstantiatorSystem");
    if (bVar9) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar9 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_313004018097978860>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\TemplateSequence\\Source\\TemplateSequence\\Private\\Systems\\TemplateSequenceSystem.cpp"
                       ,0x214,"InstantiatorSystem");
    if (bVar9) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    if (0 < pUVar13->TransformScaleUseCount) {
      uVar1 = *(ulonglong *)pFVar10->BaseDouble;
      local_418._8_8_ = &TStatId::TStatId_NAME_None;
      local_378 = pFVar10->RootInstanceHandle;
      local_376 = (ushort)pFVar10->SequenceID | 0x7fff0000;
      auVar3._8_4_ = 0;
      auVar3._0_8_ = uVar1;
      auVar3._12_2_ = (short)(uVar1 >> 0x30);
      auVar4._8_2_ = (short)(uVar1 >> 0x20);
      auVar4._0_8_ = uVar1;
      auVar4._10_4_ = auVar3._10_4_;
      auVar6._6_8_ = 0;
      auVar6._0_6_ = auVar4._8_6_;
      auVar5._4_2_ = (short)(uVar1 >> 0x10);
      auVar5._0_4_ = (uint)uVar1;
      auVar5._6_8_ = SUB148(auVar6 << 0x40,6);
      local_36e._0_4_ = (uint)uVar1 & 0xffff;
      local_36e._4_10_ = auVar5._4_10_;
      local_36e._14_2_ = 0;
      local_36e = local_36e | ___xmm_7fff00007fff00007fff00007fff0000;
      local_372 = pFVar10->PropertyBinding;
      local_370 = pFVar12->PropertyScaleReverseBindingLookup;
      local_35e = (ushort)pFVar10->BaseDouble[4] | 0x7fff0000;
      uStack_4be = 0x7fff;
      local_4c0.Value = (ushort)pFVar10->DoubleResult[4];
      local_35a = (ushort)pFVar10->BaseDouble[5] | 0x7fff0000;
      uStack_4ba = 0x7fff;
      local_4bc = pFVar10->DoubleResult[5];
      local_356 = (ushort)pFVar10->DoubleResult[0] | 0x7fff0000;
      local_418._0_8_ = 0;
      local_352 = (ushort)pFVar10->DoubleResult[1] | 0x7fff0000;
      uStack_400 = 0x6ff;
      local_34e = (ushort)pFVar10->DoubleResult[2] | 0x7fff0000;
      uStack_3fc = uStack_3fc & 0xffffff00;
      local_34a = (ushort)pFVar10->DoubleResult[3] | 0x7fff0000;
      local_346 = _local_4c0;
      local_342 = _local_4bc;
      local_4c4.Value = (pFVar11->ComponentTransform).PropertyTag.Value;
      local_4c2 = (pFVar11->Transform).PropertyTag.Value;
      local_3b8._First = &local_4c4;
      local_3b8._Last = &local_4c0;
      local_328 = CONCAT71(uStack_407,local_408) & 0xffffffffffffffe0;
      uStack_320._4_4_ = uStack_3fc;
      uStack_320._0_4_ = 0x6ff;
      local_338 = 0;
      pTStack_330 = &TStatId::TStatId_NAME_None;
      local_408 = local_408 & 0xe0;
      this_00 = UE::MovieScene::
                TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
                ::FilterAny((TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
                             *)&local_378,&local_198,&local_3b8);
      local_3a0 = 3;
      local_490.TypeIndex = (this_00->Components).field_0x48;
      local_490._9_7_ = *(undefined7 *)&(this_00->Components).field_0x49;
      local_490._padding_ = 0x1522d3ed0;
      local_3a8 = (UTemplateSequencePropertyScalingEvaluatorSystem *)
                  UE::MovieScene::
                  TScheduledEntityTask<UE::MovieScene::FScaleTransformProperties,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
                  ::ScheduledRun_PerAllocation;
      local_480 = *(ulonglong *)&(this_00->Components).field_0x50 & 0xfffffffffffffffd;
      local_4a0 = this;
      UE::MovieScene::
      TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
      ::
      ScheduleImpl<UE::MovieScene::FScaleTransformProperties,UTemplateSequencePropertyScalingEvaluatorSystem_*>
                (this_00,(FEntityManager *)&local_4b0,
                 (IEntitySystemScheduler *)(this->_padding_ + 0x28),(FTaskParams *)param_1,
                 &local_490,&local_3a8);
      if (local_198.Filter.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_198.Filter.ComplexMasks.AllocatorInstance.Data);
      }
      UE::MovieScene::IEntitySystemScheduler::AddPrerequisite(param_1,local_4b4,local_4b0);
    }
    if (0 < pUVar13->FloatScaleUseCount) {
      pTStack_3e8 = &TStatId::TStatId_NAME_None;
      local_4b8 = pFVar10->BaseDouble[0];
      local_2f0 = pFVar10->RootInstanceHandle;
      uVar7._0_2_ = pFVar10->RootInstanceHandle;
      uVar7._2_2_ = pFVar10->SequenceID;
      uStack_2ee = (ushort)pFVar10->SequenceID | 0x7fff0000;
      uStack_4b6._0_1_ = 0xff;
      uStack_4b6._1_1_ = '\x7f';
      uVar8 = _local_4b8;
      TStack_2ea = pFVar10->PropertyBinding;
      TStack_2e8 = pFVar12->PropertyScaleReverseBindingLookup;
      TStack_2e6.Pad[0] = local_4b8._0_1_;
      TStack_2e6.Pad[1] = local_4b8._1_1_;
      TStack_2e6.Pad[2] = 0xff;
      TStack_2e6.Pad[3] = '\x7f';
      TStack_2e2 = pFVar10->DoubleResult[0];
      local_2b8 = (undefined1  [8])(CONCAT26(TStack_2ea,(uint6)uVar7) | 0x7fff00000000);
      aFStack_2b0[1].ComponentType.Value._0_1_ = local_4b8._0_1_;
      aFStack_2b0[1].ComponentType.Value._1_1_ = local_4b8._1_1_;
      aFStack_2b0[2].ComponentType.Value._0_1_ = 0xff;
      aFStack_2b0[2].ComponentType.Value._1_1_ = '\x7f';
      aFStack_2b0[0].ComponentType.Value = TStack_2e8;
      unique0x1000055e = TStack_2e2;
      local_4c8.Value = (pFVar11->Float).PropertyTag.Value;
      local_3f0 = 0;
      TStack_3d4.Pad = TStack_3d4.Pad & 0xffffff00;
      local_288.AllMask.Bits.NumBits = 0;
      local_288.NoneMask.Bits.NumBits = 0;
      local_288.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_288.ComplexMasks.ArrayNum = 0;
      local_288.ComplexMasks.ArrayMax = 0;
      local_1d8 = 0;
      local_1a0 = 0;
      uStack_3d8 = 0x6ff;
      local_298 = CONCAT71(uStack_3df,local_3e0) & 0xffffffffffffffe0;
      aTStack_290[1].Pad[0] = TStack_3d4.Pad[0];
      aTStack_290[1].Pad[1] = TStack_3d4.Pad[1];
      aTStack_290[1].Pad[2] = TStack_3d4.Pad[2];
      aTStack_290[1].Pad[3] = TStack_3d4.Pad[3];
      aTStack_290[0].Pad[0] = 0xff;
      aTStack_290[0].Pad[1] = '\x06';
      aTStack_290[0].Pad[2] = '\0';
      aTStack_290[0].Pad[3] = '\0';
      local_2a8 = 0;
      pTStack_2a0 = &TStatId::TStatId_NAME_None;
      local_288.AllMask.Bits.MaxBits = 0x180;
      local_288.NoneMask.Bits.MaxBits = 0x180;
      local_1d4 = 0x180;
      local_19c = 0x180;
      _local_4b8 = uVar8;
      local_3e0 = local_3e0 & 0xe0;
      UE::MovieScene::AddAccessorToFilter((FComponentAccess *)local_2b8,&local_288);
      UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_2b8 + 6),&local_288);
      UE::MovieScene::AddAccessorToFilter(aFStack_2b0,&local_288);
      UE::MovieScene::AddAccessorToFilter(aFStack_2b0 + 3,&local_288);
      local_398._First = &local_4c8;
      local_398._Last = &local_4c6;
      UE::MovieScene::FComponentMask::SetAll(&local_288.AllMask,&local_398);
      local_450 = local_298 & 0xfffffffffffffffd;
      local_460._8_8_ = pTStack_2a0;
      local_460._0_8_ = L"struct UE::MovieScene::FScaleFloatProperties";
      local_388 = (UTemplateSequencePropertyScalingEvaluatorSystem *)
                  UE::MovieScene::
                  TScheduledEntityTask<UE::MovieScene::FScaleFloatProperties,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TWriteAccess<double>_>
                  ::ScheduledRun_PerAllocation;
      local_380 = 3;
      local_498 = this;
      UE::MovieScene::
      TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TWriteAccess<double>_>
      ::
      ScheduleImpl<UE::MovieScene::FScaleFloatProperties,UTemplateSequencePropertyScalingEvaluatorSystem_*>
                ((TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TWriteAccess<double>_>
                  *)local_2b8,(FEntityManager *)&local_4ac,
                 (IEntitySystemScheduler *)(this->_padding_ + 0x28),(FTaskParams *)param_1,
                 (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
                  *)local_460,&local_388);
      if (local_288.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_288.ComplexMasks.AllocatorInstance.Data);
      }
      UE::MovieScene::IEntitySystemScheduler::AddPrerequisite(param_1,local_4b4,local_4ac);
    }
  }
  return;
}

// ResetPropertyScales @ 14ac7ebf0

void __thiscall
UTemplateSequencePropertyScalingEvaluatorSystem::ResetPropertyScales
          (UTemplateSequencePropertyScalingEvaluatorSystem *this)

{
  TSet<TTuple<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName>,UTemplateSequencePropertyScalingEvaluatorSystem::FMultiPropertyScaleValue>,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName>,UTemplateSequencePropertyScalingEvaluatorSystem::FMultiPropertyScaleValue,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName>,UTemplateSequencePropertyScalingEvaluatorSystem::FMultiPropertyScaleValue>,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName>,UTemplateSequencePropertyScalingEvaluatorSystem::FMultiPropertyScaleValue,0>,FDefaultSetAllocator>
           *)&this->PropertyScales);
  return;
}

// StaticRegisterNativesUTemplateSequencePropertyScalingEvaluatorSystem @ 14ac80590

void __cdecl
UTemplateSequencePropertyScalingEvaluatorSystem::
StaticRegisterNativesUTemplateSequencePropertyScalingEvaluatorSystem(void)

{
  return;
}

