// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Constraints
// Functions: 28

// StaticClass @ 14648eaf0

UClass * __cdecl UTransformableHandle::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTransformableHandle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Constraints",L"TransformableHandle",
               &Z_Registration_Info_UClass_UTransformableHandle.InnerSingleton,
               StaticRegisterNativesUTransformableHandle,0x68,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UTransformableHandle>,
               InternalVTableHelperCtorCaller<UTransformableHandle>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTransformableHandle.InnerSingleton;
}

// UTransformableHandle @ 14649ef30

UTransformableHandle * __thiscall
UTransformableHandle::UTransformableHandle(UTransformableHandle *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bNotifying = false;
  this->_padding_ = (longlong)&___7UTransformableHandle__6B_;
  (this->ConstraintBindingID).Guid.A = 0;
  (this->ConstraintBindingID).Guid.B = 0;
  (this->ConstraintBindingID).Guid.C = 0;
  (this->ConstraintBindingID).Guid.D = 0;
  (this->ConstraintBindingID).SequenceID = 0;
  *(undefined8 *)&this->OnHandleModified = 0;
  *(undefined8 *)&(this->OnHandleModified).field_0x8 = 0;
  *(undefined8 *)&(this->OnHandleModified).field_0x10 = 0;
  (this->ConstraintBindingID).ResolveParentIndex = -1;
  *(undefined8 *)&(this->OnHandleModified).field_0x18 = 2;
  return this;
}

// UTransformableHandle @ 14649ef90

UTransformableHandle * __thiscall
UTransformableHandle::UTransformableHandle(UTransformableHandle *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bNotifying = false;
  this->_padding_ = (longlong)&___7UTransformableHandle__6B_;
  (this->ConstraintBindingID).Guid.A = 0;
  (this->ConstraintBindingID).Guid.B = 0;
  (this->ConstraintBindingID).Guid.C = 0;
  (this->ConstraintBindingID).Guid.D = 0;
  (this->ConstraintBindingID).SequenceID = 0;
  *(undefined8 *)&this->OnHandleModified = 0;
  *(undefined8 *)&(this->OnHandleModified).field_0x8 = 0;
  *(undefined8 *)&(this->OnHandleModified).field_0x10 = 0;
  (this->ConstraintBindingID).ResolveParentIndex = -1;
  *(undefined8 *)&(this->OnHandleModified).field_0x18 = 2;
  return this;
}

// ~UTransformableHandle @ 14649fd90

void __thiscall UTransformableHandle::~UTransformableHandle(UTransformableHandle *this)

{
  void *pvVar1;
  FDestructionSentinel local_28;
  
  this->_padding_ = (longlong)&___7UTransformableHandle__6B_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnHandleModified,
             (FWriteAccessScope *)&local_28);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::ClearUnchecked
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->OnHandleModified);
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnHandleModified).field_0x8,*(int *)&(this->OnHandleModified).field_0x10);
  pvVar1 = *(void **)&(this->OnHandleModified).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnHandleModified);
  UObject::~UObject((UObject *)this);
  return;
}

// AddTransformKeys @ 1464a4500

bool __thiscall
UTransformableHandle::AddTransformKeys
          (UTransformableHandle *this,TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_2,
          EMovieSceneTransformChannel *param_3,FFrameRate *param_4,UMovieSceneSection *param_5,
          bool param_6)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Animation\\Constraints\\Public\\Transform\\TransformableHandle.h"
             ,0x67,L"Pure virtual not implemented (%s)");
  return false;
}

// Duplicate @ 1464adfc0

UTransformableHandle * __thiscall
UTransformableHandle::Duplicate(UTransformableHandle *this,UObject *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Animation\\Constraints\\Public\\Transform\\TransformableHandle.h"
             ,0x4e,L"Pure virtual not implemented (%s)");
  return (UTransformableHandle *)0x0;
}

// GetDoubleChannels @ 1464b2cd0

TArrayView<FMovieSceneDoubleChannel_*,int> * __thiscall
UTransformableHandle::GetDoubleChannels
          (UTransformableHandle *this,
          TArrayView<FMovieSceneDoubleChannel_*,int> *__return_storage_ptr__,
          UMovieSceneSection *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Animation\\Constraints\\Public\\Transform\\TransformableHandle.h"
             ,0x60,L"Pure virtual not implemented (%s)");
  __return_storage_ptr__->DataPtr = (FMovieSceneDoubleChannel **)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetFloatChannels @ 1464b33f0

TArrayView<FMovieSceneFloatChannel_*,int> * __thiscall
UTransformableHandle::GetFloatChannels
          (UTransformableHandle *this,
          TArrayView<FMovieSceneFloatChannel_*,int> *__return_storage_ptr__,
          UMovieSceneSection *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Animation\\Constraints\\Public\\Transform\\TransformableHandle.h"
             ,0x5e,L"Pure virtual not implemented (%s)");
  __return_storage_ptr__->DataPtr = (FMovieSceneFloatChannel **)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetGlobalTransform @ 1464b3d80

TTransform<double> * __thiscall
UTransformableHandle::GetGlobalTransform
          (UTransformableHandle *this,TTransform<double> *__return_storage_ptr__)

{
  __m128d _Var1;
  __m128d _Var2;
  
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Animation\\Constraints\\Public\\Transform\\TransformableHandle.h"
             ,0x43,L"Pure virtual not implemented (%s)");
  _Var1 = UE::Math::TTransform<double>::Identity.Rotation.ZW;
  *&(__return_storage_ptr__->Rotation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  _Var2 = UE::Math::TTransform<double>::Identity.Translation.XY;
  *&(__return_storage_ptr__->Rotation).ZW.m128d_f64 = _Var1.m128d_f64;
  _Var1 = UE::Math::TTransform<double>::Identity.Translation.ZW;
  *&(__return_storage_ptr__->Translation).XY.m128d_f64 = _Var2.m128d_f64;
  _Var2 = UE::Math::TTransform<double>::Identity.Scale3D.XY;
  *&(__return_storage_ptr__->Translation).ZW.m128d_f64 = _Var1.m128d_f64;
  _Var1 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
  *&(__return_storage_ptr__->Scale3D).XY.m128d_f64 = _Var2.m128d_f64;
  *&(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = _Var1.m128d_f64;
  return __return_storage_ptr__;
}

// GetHash @ 1464b4300

uint __thiscall UTransformableHandle::GetHash(UTransformableHandle *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Animation\\Constraints\\Public\\Transform\\TransformableHandle.h"
             ,0x75,L"Pure virtual not implemented (%s)");
  return 0;
}

// GetLocalTransform @ 1464b4510

TTransform<double> * __thiscall
UTransformableHandle::GetLocalTransform
          (UTransformableHandle *this,TTransform<double> *__return_storage_ptr__)

{
  __m128d _Var1;
  __m128d _Var2;
  
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Animation\\Constraints\\Public\\Transform\\TransformableHandle.h"
             ,0x45,L"Pure virtual not implemented (%s)");
  _Var1 = UE::Math::TTransform<double>::Identity.Rotation.ZW;
  *&(__return_storage_ptr__->Rotation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  _Var2 = UE::Math::TTransform<double>::Identity.Translation.XY;
  *&(__return_storage_ptr__->Rotation).ZW.m128d_f64 = _Var1.m128d_f64;
  _Var1 = UE::Math::TTransform<double>::Identity.Translation.ZW;
  *&(__return_storage_ptr__->Translation).XY.m128d_f64 = _Var2.m128d_f64;
  _Var2 = UE::Math::TTransform<double>::Identity.Scale3D.XY;
  *&(__return_storage_ptr__->Translation).ZW.m128d_f64 = _Var1.m128d_f64;
  _Var1 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
  *&(__return_storage_ptr__->Scale3D).XY.m128d_f64 = _Var2.m128d_f64;
  *&(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = _Var1.m128d_f64;
  return __return_storage_ptr__;
}

// GetPrerequisiteObject @ 1464b58c0

UObject * __thiscall UTransformableHandle::GetPrerequisiteObject(UTransformableHandle *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Animation\\Constraints\\Public\\Transform\\TransformableHandle.h"
             ,0x6d,L"Pure virtual not implemented (%s)");
  return (UObject *)0x0;
}

// GetPrimaryPrerequisite @ 1464b5970

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FTickPrerequisite * __thiscall
UTransformableHandle::GetPrimaryPrerequisite
          (UTransformableHandle *this,FTickPrerequisite *__return_storage_ptr__,bool param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Animation\\Constraints\\Public\\Transform\\TransformableHandle.h"
             ,0x7e,L"Pure virtual not implemented (%s)");
  (__return_storage_ptr__->PrerequisiteObject).WeakPtr = (FWeakObjectPtr)0x0;
  __return_storage_ptr__->PrerequisiteTickFunction = (FTickFunction *)0x0;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1464b6290

UClass * __cdecl UTransformableHandle::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTransformableHandle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Constraints",L"TransformableHandle",
               &Z_Registration_Info_UClass_UTransformableHandle.InnerSingleton,
               StaticRegisterNativesUTransformableHandle,0x68,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UTransformableHandle>,
               InternalVTableHelperCtorCaller<UTransformableHandle>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTransformableHandle.InnerSingleton;
}

// GetTarget @ 1464b6dd0

TWeakObjectPtr<UObject,FWeakObjectPtr> __thiscall
UTransformableHandle::GetTarget(UTransformableHandle *this)

{
  FWeakObjectPtr in_RDX;
  undefined8 local_res10 [3];
  
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Animation\\Constraints\\Public\\Transform\\TransformableHandle.h"
             ,0x78,L"Pure virtual not implemented (%s)");
  *(undefined8 *)in_RDX = 0;
  local_res10[0] = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RDX,(FObjectPtr)local_res10);
  return (TWeakObjectPtr<UObject,FWeakObjectPtr>)in_RDX;
}

// GetTickFunction @ 1464b7000

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FTickFunction * __thiscall UTransformableHandle::GetTickFunction(UTransformableHandle *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Animation\\Constraints\\Public\\Transform\\TransformableHandle.h"
             ,0x72,L"Pure virtual not implemented (%s)");
  return (FTickFunction *)0x0;
}

// HandleModified @ 1464b70b0

FHandleModifiedEvent * __thiscall UTransformableHandle::HandleModified(UTransformableHandle *this)

{
  return &this->OnHandleModified;
}

// HasBoundObjects @ 1464b79a0

bool __thiscall UTransformableHandle::HasBoundObjects(UTransformableHandle *this)

{
  return (((this->ConstraintBindingID).Guid.D != 0 || (this->ConstraintBindingID).Guid.C != 0) ||
         (this->ConstraintBindingID).Guid.B != 0) || (this->ConstraintBindingID).Guid.A != 0;
}

// HasDirectDependencyWith @ 1464b81c0

bool __thiscall
UTransformableHandle::HasDirectDependencyWith
          (UTransformableHandle *this,UTransformableHandle *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Animation\\Constraints\\Public\\Transform\\TransformableHandle.h"
             ,0x7b,L"Pure virtual not implemented (%s)");
  return false;
}

// IsValid @ 1464b9650

bool __thiscall UTransformableHandle::IsValid(UTransformableHandle *this,bool param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Animation\\Constraints\\Public\\Transform\\TransformableHandle.h"
             ,0x3c,L"Pure virtual not implemented (%s)");
  return false;
}

// Notify @ 1464ba260

void __thiscall
UTransformableHandle::Notify(UTransformableHandle *this,EHandleEvent param_1,bool param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  FDestructionSentinel local_48;
  
  if ((this->bNotifying == false) &&
     (bVar6 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                         &this->OnHandleModified), bVar6)) {
    bVar6 = this->bNotifying;
    this->bNotifying = true;
    if (param_2) {
      (**(code **)(this->_padding_ + 0x2f0))(this);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnHandleModified,
               (FWriteAccessScope *)&local_48);
    puVar1 = &(this->OnHandleModified).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + 1;
    bVar5 = false;
    uVar10 = *(int *)&(this->OnHandleModified).field_0x10 - 1;
    if (-1 < (int)uVar10) {
      lVar11 = (longlong)(int)uVar10 << 4;
      bVar5 = false;
      do {
        uVar9 = 0;
        if ((int)uVar10 < *(int *)&(this->OnHandleModified).field_0x10) {
          uVar9 = ~uVar10 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar2 = *(longlong *)&(this->OnHandleModified).field_0x8;
        if (((*(int *)(lVar2 + 8 + lVar11) == 0) ||
            (plVar3 = *(longlong **)(lVar2 + lVar11), plVar3 == (longlong *)0x0)) ||
           (cVar8 = (**(code **)(*plVar3 + 0x68))(plVar3,this,param_1), cVar8 == '\0')) {
          bVar5 = true;
        }
        lVar11 = lVar11 + -0x10;
        uVar10 = uVar10 - 1;
      } while (-1 < (int)uVar10);
    }
    puVar1 = &(this->OnHandleModified).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    if (bVar5) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->OnHandleModified,false
                );
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    this->bNotifying = bVar6;
  }
  return;
}

// OnBindingIDsUpdated @ 1464ba890

void __thiscall
UTransformableHandle::OnBindingIDsUpdated
          (UTransformableHandle *this,
          TMap<UE::MovieScene::FFixedObjectBindingID,UE::MovieScene::FFixedObjectBindingID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FFixedObjectBindingID,UE::MovieScene::FFixedObjectBindingID,0>_>
          *param_1,FMovieSceneSequenceID param_2,
          TSharedRef<UE::MovieScene::FSharedPlaybackState,1> *param_3)

{
  FMovieSceneObjectBindingID *this_00;
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  ulong64 uVar7;
  FMovieSceneSequenceHierarchy *pFVar8;
  FRelativeObjectBindingID *pFVar9;
  longlong lVar10;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_58;
  FFixedObjectBindingID local_48;
  FRelativeObjectBindingID local_30;
  
  this_00 = &this->ConstraintBindingID;
  if ((((this->ConstraintBindingID).Guid.D == 0 && (this->ConstraintBindingID).Guid.C == 0) &&
      (this->ConstraintBindingID).Guid.B == 0) && (this_00->Guid).A == 0) goto LAB_1464ba9c4;
  local_58.Object = param_3->Object;
  local_58.SharedReferenceCount.ReferenceController =
       (param_3->SharedReferenceCount).ReferenceController;
  if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FMovieSceneObjectBindingID::ResolveToFixed(this_00,&local_48,param_2,&local_58);
  uVar7 = CityHash64((char *)&local_48,0x10);
  iVar6 = TSet<TTuple<UE::MovieScene::FFixedObjectBindingID,UE::MovieScene::FFixedObjectBindingID>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FFixedObjectBindingID,UE::MovieScene::FFixedObjectBindingID,0>,FDefaultSetAllocator>
          ::FindIndexByHash<UE::MovieScene::FFixedObjectBindingID>
                    ((TSet<TTuple<UE::MovieScene::FFixedObjectBindingID,UE::MovieScene::FFixedObjectBindingID>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FFixedObjectBindingID,UE::MovieScene::FFixedObjectBindingID,0>,FDefaultSetAllocator>
                      *)param_1,(uint)uVar7 ^ local_48.SequenceID.Value,&local_48);
  if (iVar6 == -1) goto LAB_1464ba9c4;
  pFVar8 = UE::MovieScene::FSharedPlaybackState::GetHierarchy(param_3->Object);
  uVar7 = CityHash64((char *)&local_48,0x10);
  iVar6 = TSet<TTuple<UE::MovieScene::FFixedObjectBindingID,UE::MovieScene::FFixedObjectBindingID>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FFixedObjectBindingID,UE::MovieScene::FFixedObjectBindingID,0>,FDefaultSetAllocator>
          ::FindIndexByHash<UE::MovieScene::FFixedObjectBindingID>
                    ((TSet<TTuple<UE::MovieScene::FFixedObjectBindingID,UE::MovieScene::FFixedObjectBindingID>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FFixedObjectBindingID,UE::MovieScene::FFixedObjectBindingID,0>,FDefaultSetAllocator>
                      *)param_1,(uint)uVar7 ^ local_48.SequenceID.Value,&local_48);
  if (iVar6 == -1) {
    lVar10 = 0;
LAB_1464ba968:
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x27b,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    lVar10 = (longlong)iVar6 * 0x30 + *(longlong *)param_1;
    if (lVar10 == 0) goto LAB_1464ba968;
  }
  pFVar9 = UE::MovieScene::FFixedObjectBindingID::ConvertToRelative
                     ((FFixedObjectBindingID *)(lVar10 + 0x14),&local_30,param_2,pFVar8);
  uVar2 = (pFVar9->Guid).B;
  uVar3 = (pFVar9->Guid).C;
  uVar4 = (pFVar9->Guid).D;
  (this_00->Guid).A = (pFVar9->Guid).A;
  (this_00->Guid).B = uVar2;
  (this->ConstraintBindingID).Guid.C = uVar3;
  (this->ConstraintBindingID).Guid.D = uVar4;
  (this->ConstraintBindingID).SequenceID = (pFVar9->SequenceID).Value;
  (this->ConstraintBindingID).ResolveParentIndex = pFVar9->ResolveParentIndex;
LAB_1464ba9c4:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return;
}

// PreEvaluate @ 1464bbab0

void __thiscall UTransformableHandle::PreEvaluate(UTransformableHandle *this,bool param_1)

{
  if (param_1) {
                    /* WARNING: Could not recover jumptable at 0x0001464bbab7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x2f0))();
    return;
  }
  return;
}

// ResolveBoundObjects @ 1464bfe60

void __thiscall
UTransformableHandle::ResolveBoundObjects
          (UTransformableHandle *this,FMovieSceneSequenceID param_1,
          TSharedRef<UE::MovieScene::FSharedPlaybackState,1> *param_2,UObject *param_3)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Animation\\Constraints\\Public\\Transform\\TransformableHandle.h"
             ,0x4b,L"Pure virtual not implemented (%s)");
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// SetGlobalTransform @ 1464c0b30

void __thiscall
UTransformableHandle::SetGlobalTransform(UTransformableHandle *this,TTransform<double> *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Animation\\Constraints\\Public\\Transform\\TransformableHandle.h"
             ,0x3f,L"Pure virtual not implemented (%s)");
  return;
}

// SetLocalTransform @ 1464c0bf0

void __thiscall
UTransformableHandle::SetLocalTransform(UTransformableHandle *this,TTransform<double> *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Animation\\Constraints\\Public\\Transform\\TransformableHandle.h"
             ,0x41,L"Pure virtual not implemented (%s)");
  return;
}

// StaticRegisterNativesUTransformableHandle @ 1464c2060

void __cdecl UTransformableHandle::StaticRegisterNativesUTransformableHandle(void)

{
  return;
}

// TickTarget @ 1464c2720

void __thiscall UTransformableHandle::TickTarget(UTransformableHandle *this)

{
  return;
}

