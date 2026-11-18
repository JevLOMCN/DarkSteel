// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 12

// StaticClass @ 14f0a9c80

UClass * __cdecl USynthComponentToneGenerator::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USynthComponentToneGenerator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SynthComponentToneGenerator",
               &Z_Registration_Info_UClass_USynthComponentToneGenerator.InnerSingleton,
               StaticRegisterNativesUSynthComponentToneGenerator,0x9b0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<USynthComponentToneGenerator>,
               InternalVTableHelperCtorCaller<USynthComponentToneGenerator>,local_res8,
               USynthComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USynthComponentToneGenerator.InnerSingleton;
}

// USynthComponentToneGenerator @ 14f0bbed0

USynthComponentToneGenerator * __thiscall
USynthComponentToneGenerator::USynthComponentToneGenerator
          (USynthComponentToneGenerator *this,FObjectInitializer *param_1)

{
  USynthComponent::USynthComponent((USynthComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  FRuntimeFloatCurve::FRuntimeFloatCurve(&this->DistanceAttenuationCurve);
  this->field_0x42 = this->field_0x42 | 6;
  (this->DistanceRange).field0_0x0._s_0.Y = 4000.0;
  (this->DistanceAttenuationSettings).DistanceRange.field0_0x0._s_0.Y = 4000.0;
  (this->DistanceAttenuationSettings).AttenuationCurve._padding_ =
       (longlong)&___7FLinearCurve_Audio__6B_;
  (this->DistanceAttenuationSettings).AttenuationCurve.Points.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DistanceAttenuationSettings).AttenuationCurve.Points.ArrayNum = 0;
  (this->DistanceAttenuationSettings).AttenuationCurve.Points.ArrayMax = 0;
  (this->ToneGenerator).Object = (ISoundGenerator *)0x0;
  (this->ToneGenerator).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->DistanceRange).field0_0x0._s_0.X = 400.0;
  (this->DistanceAttenuationSettings).DistanceRange.field0_0x0._s_0.X = 400.0;
  (this->DistanceAttenuationSettings).AttenuationDbAtMaxRange = -60.0;
  this->field_0x99 = this->field_0x99 | 0x80;
  this->field_0x40 = 2;
  this->AttenuationDbAtMaxRange = -60.0;
  this->Frequency = 440.0;
  this->Volume = 0.5;
  *(undefined4 *)&this->field_0x880 = 1;
  return this;
}

// USynthComponentToneGenerator @ 14f0bbfc0

USynthComponentToneGenerator * __thiscall
USynthComponentToneGenerator::USynthComponentToneGenerator
          (USynthComponentToneGenerator *this,FVTableHelper *param_1)

{
  USynthComponent::USynthComponent((USynthComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  FRuntimeFloatCurve::FRuntimeFloatCurve(&this->DistanceAttenuationCurve);
  this->AttenuationDbAtMaxRange = -60.0;
  (this->DistanceRange).field0_0x0._s_0.Y = 4000.0;
  (this->DistanceAttenuationSettings).DistanceRange.field0_0x0._s_0.Y = 4000.0;
  (this->DistanceAttenuationSettings).AttenuationCurve._padding_ =
       (longlong)&___7FLinearCurve_Audio__6B_;
  (this->DistanceAttenuationSettings).AttenuationCurve.Points.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DistanceAttenuationSettings).AttenuationCurve.Points.ArrayNum = 0;
  (this->DistanceAttenuationSettings).AttenuationCurve.Points.ArrayMax = 0;
  (this->ToneGenerator).Object = (ISoundGenerator *)0x0;
  (this->ToneGenerator).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->DistanceRange).field0_0x0._s_0.X = 400.0;
  (this->DistanceAttenuationSettings).DistanceRange.field0_0x0._s_0.X = 400.0;
  (this->DistanceAttenuationSettings).AttenuationDbAtMaxRange = -60.0;
  return this;
}

// ~USynthComponentToneGenerator @ 14f0c09c0

void __thiscall
USynthComponentToneGenerator::~USynthComponentToneGenerator(USynthComponentToneGenerator *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ToneGenerator).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->DistanceAttenuationSettings).AttenuationCurve.Points.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DistanceAttenuationCurve).EditorCurveData.Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->DistanceAttenuationCurve).EditorCurveData._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)(this->DistanceAttenuationCurve).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->DistanceAttenuationCurve).EditorCurveData._padding_ = 0;
  pvVar2 = (void *)(this->DistanceAttenuationCurve).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->DistanceAttenuationCurve).EditorCurveData._padding_);
  USynthComponent::~USynthComponent((USynthComponent *)this);
  return;
}

// CreateSoundGenerator @ 14f0d3c20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TSharedPtr<ISoundGenerator,1> * __thiscall
USynthComponentToneGenerator::CreateSoundGenerator
          (USynthComponentToneGenerator *this,TSharedPtr<ISoundGenerator,1> *__return_storage_ptr__,
          FSoundGeneratorInitParams *param_1)

{
  int *piVar1;
  TMpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory> *pTVar2;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  float fVar4;
  int iVar5;
  FScriptContainerElement *_Src;
  code *pcVar6;
  double dVar7;
  double dVar8;
  atomic<TMpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*> aVar9;
  bool bVar10;
  int iVar11;
  FRichCurve *this_00;
  TSharedPtr<ISoundGenerator,1> *pTVar12;
  ISoundGenerator *this_01;
  TReferenceControllerBase<1> *pTVar13;
  TReferenceControllerBase<1> *pTVar14;
  ulonglong uVar15;
  uint uVar16;
  float fVar18;
  float fVar19;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_98;
  ISoundGenerator *local_88;
  FSharedReferencer<1> local_80 [11];
  ulonglong uVar17;
  
  dVar7 = (this->DistanceRange).field0_0x0._s_0.X;
  dVar8 = (this->DistanceRange).field0_0x0._s_0.Y;
  (this->DistanceAttenuationSettings).AttenuationDbAtMaxRange = this->AttenuationDbAtMaxRange;
  (this->DistanceAttenuationSettings).DistanceRange.field0_0x0._s_0.X = dVar7;
  (this->DistanceAttenuationSettings).DistanceRange.field0_0x0._s_0.Y = dVar8;
  this_00 = FRuntimeFloatCurve::GetRichCurve(&this->DistanceAttenuationCurve);
  uVar15 = 0;
  if ((__real_7f7fffff != *(float *)&this_00->_padding_) ||
     (iVar11 = (**(code **)(this_00->_padding_ + 8))(this_00), iVar11 != 0)) {
    local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    fVar19 = 0.0;
    local_98.ArrayNum = 0;
    local_98.ArrayMax = 0;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0xb,&local_98.AllocatorInstance,&local_98.ArrayNum,&local_98.ArrayMax);
    fVar4 = __real_3dcccccd;
    uVar17 = uVar15;
    do {
      fVar18 = FRichCurve::Eval(this_00,fVar19,0.0);
      fVar19 = fVar19 + fVar4;
      if ((local_98.ArrayNum <= (int)uVar17) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        pTVar12 = (TSharedPtr<ISoundGenerator,1> *)(*pcVar6)();
        return pTVar12;
      }
      uVar16 = (int)uVar17 + 1;
      uVar17 = (ulonglong)uVar16;
      *(double *)(local_98.AllocatorInstance.Data + uVar15) = (double)fVar19;
      *(double *)(local_98.AllocatorInstance.Data + uVar15 + 8) = (double)fVar18;
      uVar15 = uVar15 + 0x10;
    } while ((int)uVar16 < 0xb);
    Audio::FLinearCurve::SetCurvePoints
              (&(this->DistanceAttenuationSettings).AttenuationCurve,&local_98);
    if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.AllocatorInstance.Data);
    }
  }
  this->field_0x42 = this->field_0x42 | 2;
  (**(code **)(*(longlong *)this + 0x420))(this,1);
  UActorComponent::RegisterComponent((UActorComponent *)this);
  (**(code **)(*(longlong *)this + 0x2b8))(this,0);
  this_01 = ::operator_new(0x90);
  if (this_01 == (ISoundGenerator *)0x0) {
    this_01 = (ISoundGenerator *)0x0;
  }
  else {
    fVar4 = this->Volume;
    fVar19 = this->Frequency;
    iVar11 = param_1->NumChannels;
    fVar18 = param_1->SampleRate;
    ISoundGenerator::ISoundGenerator(this_01);
    *(int *)&this_01[1]._padding_ = iVar11;
    this_01->_padding_ = (longlong)&___7FToneGenerator__6B_;
    Audio::FSineOsc::FSineOsc((FSineOsc *)&this_01[1].CommandQueue);
    this_01[3]._padding_ = 0;
    this_01[4]._padding_ = 0x4079000000000000;
    this_01[3].CommandQueue.Head =
         (atomic<TMpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*>)0x0;
    this_01[4].CommandQueue.Head =
         (atomic<TMpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*>)
         0x40af400000000000;
    *(undefined4 *)&this_01[3].CommandQueue.Tail = 0;
    this_01[5].CommandQueue.Head =
         (atomic<TMpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*>)0x0;
    *(undefined4 *)&this_01[5].CommandQueue.Tail = 0;
    piVar1 = (int *)((longlong)&this_01[5].CommandQueue.Tail + 4);
    this_01[5]._padding_ = (longlong)&___7FLinearCurve_Audio__6B_;
    *(undefined4 *)((longlong)&this_01[3].CommandQueue.Tail + 4) = 0x3f800000;
    *(undefined4 *)&this_01[4].CommandQueue.Tail = 0xc2700000;
    *piVar1 = 0;
    Audio::FSineOsc::Init
              ((FSineOsc *)&this_01[1].CommandQueue,(int)fVar18,(float)(int)fVar19,fVar4,0.0);
    aVar9 = (atomic<TMpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*>)
            (this->DistanceAttenuationSettings).DistanceRange.field0_0x0._s_0.Y;
    pTVar2 = &this_01[5].CommandQueue;
    this_01[4]._padding_ =
         (longlong)(this->DistanceAttenuationSettings).DistanceRange.field0_0x0._s_0.X;
    this_01[4].CommandQueue.Head = aVar9;
    *(float *)&this_01[4].CommandQueue.Tail =
         (this->DistanceAttenuationSettings).AttenuationDbAtMaxRange;
    pTVar3 = &(this->DistanceAttenuationSettings).AttenuationCurve.Points;
    if ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)pTVar2 != pTVar3) {
      iVar11 = (this->DistanceAttenuationSettings).AttenuationCurve.Points.ArrayNum;
      _Src = (pTVar3->AllocatorInstance).Data;
      iVar5 = *(int *)((longlong)&this_01[5].CommandQueue.Tail + 4);
      *(int *)&this_01[5].CommandQueue.Tail = iVar11;
      if ((iVar11 == 0) && (iVar5 == 0)) {
        *(undefined4 *)((longlong)&this_01[5].CommandQueue.Tail + 4) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar11,iVar5,(ForAnyElementType *)pTVar2,iVar11,piVar1);
        if (iVar11 != 0) {
          memcpy((void *)pTVar2->Head,_Src,(longlong)iVar11 << 4);
        }
      }
    }
  }
  pTVar14 = (TReferenceControllerBase<1> *)0x0;
  local_88 = this_01;
  pTVar13 = ::operator_new(0x18);
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    pTVar13->SharedReferenceCount = (atomic<int>)0x1;
    pTVar13->WeakReferenceCount = (atomic<int>)0x1;
    pTVar13->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFToneGenerator__U__DefaultDeleter_VFToneGenerator___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar13[1]._padding_ = (longlong)this_01;
    pTVar14 = pTVar13;
  }
  pTVar12 = &this->ToneGenerator;
  local_80[0].ReferenceController = pTVar14;
  if (pTVar12 != (TSharedPtr<ISoundGenerator,1> *)&local_88) {
    pTVar12->Object = this_01;
    local_88 = (ISoundGenerator *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ToneGenerator).SharedReferenceCount,local_80);
  }
  __return_storage_ptr__->Object = pTVar12->Object;
  pTVar14 = (this->ToneGenerator).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar14;
  if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_80[0].ReferenceController);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14f0dd680

UClass * __cdecl USynthComponentToneGenerator::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USynthComponentToneGenerator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SynthComponentToneGenerator",
               &Z_Registration_Info_UClass_USynthComponentToneGenerator.InnerSingleton,
               StaticRegisterNativesUSynthComponentToneGenerator,0x9b0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<USynthComponentToneGenerator>,
               InternalVTableHelperCtorCaller<USynthComponentToneGenerator>,local_res8,
               USynthComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USynthComponentToneGenerator.InnerSingleton;
}

// SetFrequency @ 14f0fc110

void __thiscall
USynthComponentToneGenerator::SetFrequency(USynthComponentToneGenerator *this,float param_1)

{
  code *local_38 [2];
  undefined **local_28;
  ISoundGenerator *local_20;
  float local_18;
  undefined8 local_10;
  
  this->Frequency = param_1;
  local_20 = (this->ToneGenerator).Object;
  if (local_20 != (ISoundGenerator *)0x0) {
    local_28 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FToneGenerator::SetFrequency'::`2'::<lambda_1>,0,0>::
                _vftable_;
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FToneGenerator::SetFrequency'::__l2::<lambda_1>,void>::Call;
    local_10 = 0;
    local_18 = param_1;
    ISoundGenerator::SynthCommand(local_20,(TFunction<void___cdecl(void)> *)local_38);
  }
  return;
}

// SetVolume @ 14f102fe0

void __thiscall
USynthComponentToneGenerator::SetVolume(USynthComponentToneGenerator *this,float param_1)

{
  code *local_38 [2];
  undefined **local_28;
  ISoundGenerator *local_20;
  float local_18;
  undefined8 local_10;
  
  this->Volume = param_1;
  local_20 = (this->ToneGenerator).Object;
  if (local_20 != (ISoundGenerator *)0x0) {
    local_28 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FToneGenerator::SetVolume'::`2'::<lambda_1>,0,0>::_vftable_;
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FToneGenerator::SetVolume'::__l2::<lambda_1>,void>::Call;
    local_10 = 0;
    local_18 = param_1;
    ISoundGenerator::SynthCommand(local_20,(TFunction<void___cdecl(void)> *)local_38);
  }
  return;
}

// StaticRegisterNativesUSynthComponentToneGenerator @ 14f103cc0

void __cdecl USynthComponentToneGenerator::StaticRegisterNativesUSynthComponentToneGenerator(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_USynthComponentToneGenerator_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TickComponent @ 14f1053c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
USynthComponentToneGenerator::TickComponent
          (USynthComponentToneGenerator *this,float param_1,ELevelTick param_2,
          FActorComponentTickFunction *param_3)

{
  ISoundGenerator *this_00;
  FAudioDevice *this_01;
  TVector<double>_u_0 local_58;
  code *local_38 [2];
  undefined **local_28;
  ISoundGenerator *local_20;
  float local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  this_00 = (this->ToneGenerator).Object;
  if (this_00 != (ISoundGenerator *)0x0) {
    local_58._s_0.X = (double)*(undefined8 *)&this->field_0x210;
    local_58._s_0.Y = (double)*(undefined8 *)&this->field_0x218;
    local_58._s_0.Z = (double)*(undefined8 *)&this->field_0x220;
    this_01 = USynthComponent::GetAudioDevice((USynthComponent *)this);
    if (this_01 != (FAudioDevice *)0x0) {
      local_18 = FAudioDevice::GetDistanceToNearestListener
                           (this_01,(TVector<double> *)&local_58._s_0);
      local_28 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`FToneGenerator::SetDistance'::`2'::<lambda_1>,0,0>::
                  _vftable_;
      local_14 = local_58._12_4_;
      local_38[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FToneGenerator::SetDistance'::__l2::<lambda_1>,void>::Call;
      local_10 = 0;
      local_20 = this_00;
      ISoundGenerator::SynthCommand(this_00,(TFunction<void___cdecl(void)> *)local_38);
    }
  }
  return;
}

// execSetFrequency @ 14f110e30

void __cdecl
USynthComponentToneGenerator::execSetFrequency(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  code *local_38 [2];
  undefined **local_28;
  ISoundGenerator *local_20;
  undefined4 local_18;
  undefined8 local_10;
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_20 = *(ISoundGenerator **)&param_1[0x3d].field_0x10;
  *(undefined4 *)(param_1 + 0x38) = local_res8[0];
  if (local_20 != (ISoundGenerator *)0x0) {
    local_18 = local_res8[0];
    local_28 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FToneGenerator::SetFrequency'::`2'::<lambda_1>,0,0>::
                _vftable_;
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FToneGenerator::SetFrequency'::__l2::<lambda_1>,void>::Call;
    local_10 = 0;
    ISoundGenerator::SynthCommand(local_20,(TFunction<void___cdecl(void)> *)local_38);
  }
  return;
}

// execSetVolume @ 14f118300

void __cdecl
USynthComponentToneGenerator::execSetVolume(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  code *local_38 [2];
  undefined **local_28;
  ISoundGenerator *local_20;
  undefined4 local_18;
  undefined8 local_10;
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_20 = *(ISoundGenerator **)&param_1[0x3d].field_0x10;
  *(undefined4 *)&param_1[0x38].field_0x4 = local_res8[0];
  if (local_20 != (ISoundGenerator *)0x0) {
    local_18 = local_res8[0];
    local_28 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FToneGenerator::SetVolume'::`2'::<lambda_1>,0,0>::_vftable_;
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FToneGenerator::SetVolume'::__l2::<lambda_1>,void>::Call;
    local_10 = 0;
    ISoundGenerator::SynthCommand(local_20,(TFunction<void___cdecl(void)> *)local_38);
  }
  return;
}

