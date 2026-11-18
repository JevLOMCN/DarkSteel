// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 20

// StaticClass @ 1460632d0

UClass * __cdecl UMovieSceneCondition::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneCondition.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneCondition",
               &Z_Registration_Info_UClass_UMovieSceneCondition.InnerSingleton,
               StaticRegisterNativesUMovieSceneCondition,0x68,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneCondition>,
               InternalVTableHelperCtorCaller<UMovieSceneCondition>,local_res8,
               UMovieSceneSignedObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneCondition.InnerSingleton;
}

// UMovieSceneCondition @ 146095510

UMovieSceneCondition * __thiscall
UMovieSceneCondition::UMovieSceneCondition(UMovieSceneCondition *this,FVTableHelper *param_1)

{
  UMovieSceneSignedObject::UMovieSceneSignedObject((UMovieSceneSignedObject *)this,param_1);
  this->bInvert = false;
  this->_padding_ = (longlong)&___7UMovieSceneCondition__6B_;
  return this;
}

// UMovieSceneCondition @ 146095540

UMovieSceneCondition * __thiscall
UMovieSceneCondition::UMovieSceneCondition(UMovieSceneCondition *this,FObjectInitializer *param_1)

{
  UMovieSceneSignedObject::UMovieSceneSignedObject((UMovieSceneSignedObject *)this,param_1);
  this->bInvert = false;
  this->_padding_ = (longlong)&___7UMovieSceneCondition__6B_;
  return this;
}

// ~UMovieSceneCondition @ 1460984b0

void __thiscall UMovieSceneCondition::~UMovieSceneCondition(UMovieSceneCondition *this)

{
  this->_padding_ = (longlong)&___7UMovieSceneCondition__6B_;
  UMovieSceneSignedObject::~UMovieSceneSignedObject((UMovieSceneSignedObject *)this);
  return;
}

// BP_EvaluateCondition @ 1460ae080

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

bool __thiscall
UMovieSceneCondition::BP_EvaluateCondition
          (UMovieSceneCondition *this,FMovieSceneConditionContext *param_1)

{
  UObject *pUVar1;
  UMovieSceneSequence *pUVar2;
  UFunction *pUVar3;
  bool bVar4;
  TObjectPtr<UObject>_u_0 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  TObjectPtr<UMovieSceneSequence>_u_0 local_30;
  TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> local_28;
  char local_18;
  
  local_40 = 0;
  uStack_38 = 0;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  local_18 = '\0';
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (pUVar1 = (param_1->WorldContext).field0_0x0.DebugPtr, pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  local_48 = (param_1->WorldContext).field0_0x0;
  local_40._0_4_ = (param_1->Binding).BindingID.A;
  local_40._4_4_ = (param_1->Binding).BindingID.B;
  uStack_38._0_4_ = (param_1->Binding).BindingID.C;
  uStack_38._4_4_ = (param_1->Binding).BindingID.D;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 = (param_1->Binding).Sequence.field0_0x0.DebugPtr, pUVar2 != (UMovieSceneSequence *)0x0
     )) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  local_30 = (param_1->Binding).Sequence.field0_0x0;
  TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>::operator=
            (&local_28,&param_1->BoundObjects);
  pUVar3 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UMovieSceneCondition_BP_EvaluateCondition);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar3,&local_48);
  bVar4 = local_18 != '\0';
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return bVar4;
}

// BP_GetCheckFrequency @ 1460ae160

EMovieSceneConditionCheckFrequency __thiscall
UMovieSceneCondition::BP_GetCheckFrequency(UMovieSceneCondition *this)

{
  UFunction *pUVar1;
  EMovieSceneConditionCheckFrequency local_res8 [32];
  
  local_res8[0] = Once;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UMovieSceneCondition_BP_GetCheckFrequency);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res8);
  return local_res8[0];
}

// BP_GetCheckFrequency_Implementation @ 1460ae1b0

EMovieSceneConditionCheckFrequency __thiscall
UMovieSceneCondition::BP_GetCheckFrequency_Implementation(UMovieSceneCondition *this)

{
  return Once;
}

// BP_GetScope @ 1460ae1c0

EMovieSceneConditionScope __thiscall UMovieSceneCondition::BP_GetScope(UMovieSceneCondition *this)

{
  UFunction *pUVar1;
  EMovieSceneConditionScope local_res8 [32];
  
  local_res8[0] = Global;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UMovieSceneCondition_BP_GetScope);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res8);
  return local_res8[0];
}

// BP_GetScope_Implementation @ 1460ae210

EMovieSceneConditionScope __thiscall
UMovieSceneCondition::BP_GetScope_Implementation(UMovieSceneCondition *this)

{
  return Global;
}

// CanCacheResult @ 1460b1320

bool __thiscall
UMovieSceneCondition::CanCacheResult
          (UMovieSceneCondition *this,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(this->_padding_ + 0x2e0))();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return cVar1 != '\x01';
}

// ComputeCacheKey @ 1460b53a0

uint __thiscall
UMovieSceneCondition::ComputeCacheKey
          (UMovieSceneCondition *this,FGuid *param_1,FMovieSceneSequenceID param_2,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_3,UObject *param_4)

{
  char cVar1;
  ulong64 uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = ((uint)((ulonglong)this >> 0x14) & 0xffff ^ (uint)((ulonglong)this >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar1 = (**(code **)(this->_padding_ + 0x2d8))();
  if (cVar1 == '\x01') {
    uVar2 = CityHash64((char *)param_1,0x10);
    uVar4 = (int)uVar2 + (uVar4 >> 2) + uVar4 * 0x40 + -0x61c88647 ^ uVar4;
    uVar4 = uVar4 * 0x40 + -0x61c88647 + param_2.Value + (uVar4 >> 2) ^ uVar4;
  }
  else if ((cVar1 == '\x02') && (param_4 != (UObject *)0x0)) {
    uVar3 = ((uint)((ulonglong)param_4 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_4 >> 4)) *
            -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    uVar4 = uVar4 ^ (uVar4 >> 2) + 0x9e3779b9 + (uVar3 >> 0x10 ^ uVar3) + uVar4 * 0x40;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return uVar4;
}

// EvaluateCondition @ 1460c32d0

bool __thiscall
UMovieSceneCondition::EvaluateCondition
          (UMovieSceneCondition *this,FGuid *param_1,FMovieSceneSequenceID param_2,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_3)

{
  code *pcVar1;
  char cVar2;
  FSharedPlaybackState *local_28;
  TReferenceControllerBase<1> *local_20;
  uint local_18;
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  
  pcVar1 = *(code **)(this->_padding_ + 0x2d0);
  local_28 = param_3->Object;
  local_20 = (param_3->SharedReferenceCount).ReferenceController;
  if (local_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_20->SharedReferenceCount = (atomic<int>)((int)local_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18 = param_1->A;
  uStack_14 = param_1->B;
  uStack_10 = param_1->C;
  uStack_c = param_1->D;
  cVar2 = (*pcVar1)(local_18,&local_18,param_2.Value,&local_28);
  if (this->bInvert != false) {
    cVar2 = cVar2 == '\0';
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return (bool)cVar2;
}

// EvaluateConditionInternal @ 1460c3350

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

bool __thiscall
UMovieSceneCondition::EvaluateConditionInternal
          (UMovieSceneCondition *this,FGuid *param_1,FMovieSceneSequenceID param_2,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_3)

{
  FWeakObjectPtr *pFVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int> *pTVar7;
  UFunction *pUVar8;
  FWeakObjectPtr *pFVar9;
  FWeakObjectPtr local_res8;
  FMovieSceneSequenceID local_res18 [2];
  ForAnyElementType local_b8;
  undefined8 local_b0;
  TObjectPtr<UObject>_u_0 local_a8;
  UObject *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  UMovieSceneSequence *local_88;
  TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> local_80;
  UObject *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  UMovieSceneSequence *local_58;
  TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> local_50;
  char local_40;
  TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int> local_38;
  
  local_b8.Data = (FScriptContainerElement *)0x0;
  local_b0 = 0;
  local_res18[0].Value = param_2.Value;
  pTVar7 = UE::MovieScene::FSharedPlaybackState::FindBoundObjects
                     (param_3->Object,&local_38,param_1,local_res18);
  pFVar9 = &pTVar7->DataPtr->WeakPtr;
  pFVar1 = pFVar9 + pTVar7->ArrayNum;
  while( true ) {
    if (pFVar9 == pFVar1) {
      local_a0 = FWeakObjectPtr::Get(&(param_3->Object->WeakPlaybackContext).WeakPtr);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_a0 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_a0);
      }
      local_88 = UE::MovieScene::FSharedPlaybackState::GetSequence(param_3->Object,local_res18);
      local_98._0_4_ = param_1->A;
      local_98._4_4_ = param_1->B;
      uStack_90._0_4_ = param_1->C;
      uStack_90._4_4_ = param_1->D;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_88 != (UMovieSceneSequence *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_88);
      }
      FVar3.Data = local_b8.Data;
      iVar6 = (int)local_b0;
      local_80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_80.ArrayNum = (int)local_b0;
      if ((int)local_b0 == 0) {
        local_80.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,(int)local_b0,0,&local_80.AllocatorInstance,(int)local_b0,&local_80.ArrayMax)
        ;
        ConstructItems<TObjectPtr<UObject>,TObjectPtr<UObject>,int>
                  (local_80.AllocatorInstance.Data,(TObjectPtr<UObject> *)FVar3.Data,iVar6);
      }
      local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_50.ArrayNum = 0;
      local_50.ArrayMax = 0;
      local_40 = '\0';
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_a0 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_a0);
      }
      local_68 = local_98;
      uStack_60 = uStack_90;
      local_70 = local_a0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_88 != (UMovieSceneSequence *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_88);
      }
      local_58 = local_88;
      TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>::operator=(&local_50,&local_80);
      pUVar8 = UObject::FindFunctionChecked
                         ((UObject *)this,NAME_UMovieSceneCondition_BP_EvaluateCondition);
      (**(code **)(this->_padding_ + 0x260))(this,pUVar8,&local_70);
      bVar4 = local_40 != '\0';
      if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.AllocatorInstance.Data);
      }
      if (local_80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80.AllocatorInstance.Data);
      }
      if ((TObjectPtr<UObject>_u_0 *)local_b8.Data != (TObjectPtr<UObject>_u_0 *)0x0) {
        FMemory::Free(local_b8.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_3->SharedReferenceCount).ReferenceController);
      return bVar4;
    }
    local_res8 = *pFVar9;
    local_a8.DebugPtr = FWeakObjectPtr::Get(&local_res8);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_a8.DebugPtr != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_a8.DebugPtr);
    }
    if (((local_b8.Data <= &local_a8) &&
        (&local_a8 < (TObjectPtr<UObject>_u_0 *)(local_b8.Data + (longlong)local_b0._4_4_ * 8))) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) break;
    iVar6 = (int)local_b0;
    if ((int)local_b0 == local_b0._4_4_) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&local_b8,(int *)((longlong)&local_b0 + 4));
    }
    local_b0 = CONCAT44(local_b0._4_4_,iVar6 + 1);
    ((TObjectPtr<UObject>_u_0 *)(local_b8.Data + (longlong)iVar6 * 8))->DebugPtr =
         (UObject *)local_a8;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_a8.DebugPtr != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_a8.DebugPtr);
    }
    pFVar9 = pFVar9 + 1;
  }
  pcVar2 = (code *)swi(3);
  uVar5 = (*pcVar2)();
  return (bool)uVar5;
}

// GetCheckFrequencyInternal @ 1460c9530

EMovieSceneConditionCheckFrequency __thiscall
UMovieSceneCondition::GetCheckFrequencyInternal(UMovieSceneCondition *this)

{
  UFunction *pUVar1;
  EMovieSceneConditionCheckFrequency local_res8 [32];
  
  local_res8[0] = Once;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UMovieSceneCondition_BP_GetCheckFrequency);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res8);
  return local_res8[0];
}

// GetConditionScope @ 1460c9660

EMovieSceneConditionScope __thiscall
UMovieSceneCondition::GetConditionScope(UMovieSceneCondition *this)

{
  EMovieSceneConditionScope EVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001460c9663. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar1 = (**(code **)(this->_padding_ + 0x2d8))();
  return EVar1;
}

// GetPrivateStaticClass @ 1460cf5f0

UClass * __cdecl UMovieSceneCondition::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneCondition.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneCondition",
               &Z_Registration_Info_UClass_UMovieSceneCondition.InnerSingleton,
               StaticRegisterNativesUMovieSceneCondition,0x68,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneCondition>,
               InternalVTableHelperCtorCaller<UMovieSceneCondition>,local_res8,
               UMovieSceneSignedObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneCondition.InnerSingleton;
}

// GetScopeInternal @ 1460d01c0

EMovieSceneConditionScope __thiscall
UMovieSceneCondition::GetScopeInternal(UMovieSceneCondition *this)

{
  UFunction *pUVar1;
  EMovieSceneConditionScope local_res8 [32];
  
  local_res8[0] = Global;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UMovieSceneCondition_BP_GetScope);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res8);
  return local_res8[0];
}

// StaticRegisterNativesUMovieSceneCondition @ 1460fa210

void __cdecl UMovieSceneCondition::StaticRegisterNativesUMovieSceneCondition(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UMovieSceneCondition_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execBP_GetCheckFrequency @ 146100900

void __cdecl
UMovieSceneCondition::execBP_GetCheckFrequency(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x2b0))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execBP_GetScope @ 146100940

void __cdecl UMovieSceneCondition::execBP_GetScope(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x2b8))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

