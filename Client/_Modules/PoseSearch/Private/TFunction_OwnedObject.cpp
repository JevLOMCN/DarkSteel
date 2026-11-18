// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 73

// CloneToEmptyStorage @ 14a8b1ea0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::PoseSearch::FAnimationAssetSampler::ExtractPoseSearchNotifyStates'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::PoseSearch::FAnimationAssetSampler::ExtractPoseSearchNotifyStates'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14a8b1ec0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPoseSearchDatabase::SearchContinuingPose'::__l21::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UPoseSearchDatabase::SearchContinuingPose'::`21'::<lambda_1>,0,0>::
        _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14a8b1ee0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPoseSearchDatabase::SearchEvent'::__l49::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x50,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`UPoseSearchDatabase::SearchEvent'::`49'::<lambda_1>,0,1>::
             _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x20);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  puVar2[4] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x30);
  puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
  puVar2[6] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x40);
  puVar2[7] = *(undefined8 *)((longlong)this + 0x38);
  puVar2[8] = uVar1;
  puVar2[9] = *(undefined8 *)((longlong)this + 0x48);
  return puVar2 + 1;
}

// Destroy @ 14a8b2440

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::PoseSearch::FAnimationAssetSampler::ExtractPoseSearchNotifyStates'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014a8b2445. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14a8b2450

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPoseSearchDatabase::SearchContinuingPose'::__l21::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014a8b2455. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14a8b2460

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPoseSearchDatabase::SearchEvent'::__l49::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// GetAddress @ 14a8b9150

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::PoseSearch::FAnimationAssetSampler::ExtractPoseSearchNotifyStates'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a8b9160

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPoseSearchDatabase::SearchContinuingPose'::__l21::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a8b9170

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPoseSearchDatabase::SearchEvent'::__l49::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// CloneToEmptyStorage @ 14a8ee090

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::PoseSearch::FInteractionIsland::LogTickDependencies'::__l7::<lambda_1>,1,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// Destroy @ 14a8f2ca0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::PoseSearch::FInteractionIsland::LogTickDependencies'::__l7::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// GetAddress @ 14a8f92b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::PoseSearch::FInteractionIsland::LogTickDependencies'::__l7::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// ~TFunction_OwnedObject<UE::PoseSearch::FSearchResult_(__cdecl*)(void),0,0> @ 14a91a510

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<UE::PoseSearch::FSearchResult_(__cdecl*)(void),0,0>::
~TFunction_OwnedObject<UE::PoseSearch::FSearchResult_(__cdecl*)(void),0,0>
          (TFunction_OwnedObject<UE::PoseSearch::FSearchResult_(__cdecl*)(void),0,0> *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_AUFSearchResult_PoseSearch_UE__XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<void_(__cdecl*)(UE::PoseSearch::FSearchResult_const_&),0,0> @ 14a91a530

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(UE::PoseSearch::FSearchResult_const_&),0,0>::
~TFunction_OwnedObject<void_(__cdecl*)(UE::PoseSearch::FSearchResult_const_&),0,0>
          (TFunction_OwnedObject<void_(__cdecl*)(UE::PoseSearch::FSearchResult_const_&),0,0> *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6AXAEBUFSearchResult_PoseSearch_UE___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<bool_(__cdecl*)(float),0,0> @ 14a91a550

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<bool_(__cdecl*)(float),0,0>::
~TFunction_OwnedObject<bool_(__cdecl*)(float),0,0>
          (TFunction_OwnedObject<bool_(__cdecl*)(float),0,0> *this)

{
  this->_padding_ =
       (longlong)&___7__TFunction_OwnedObject_P6A_NM_Z_0A__0A__Function_Private_Core_UE__6B_;
  return;
}

// ~TFunction_OwnedObject<bool_(__cdecl*)(TFunctionRef<bool___cdecl(UE::PoseSearch::FSearchResult_const_&)>),0,0> @ 14a91a570

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(TFunctionRef<bool___cdecl(UE::PoseSearch::FSearchResult_const_&)>),0,0>
::
~TFunction_OwnedObject<bool_(__cdecl*)(TFunctionRef<bool___cdecl(UE::PoseSearch::FSearchResult_const_&)>),0,0>
          (TFunction_OwnedObject<bool_(__cdecl*)(TFunctionRef<bool___cdecl(UE::PoseSearch::FSearchResult_const_&)>),0,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_NV__TFunctionRef___A6A_NAEBUFSearchResult_PoseSearch_UE___Z___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// CloneToEmptyStorage @ 14a9250a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<UE::PoseSearch::FSearchResult_(__cdecl*)(void),0,0>::CloneToEmptyStorage
          (TFunction_OwnedObject<UE::PoseSearch::FSearchResult_(__cdecl*)(void),0,0> *this,
          FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6A_AUFSearchResult_PoseSearch_UE__XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_FSearchResult **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14a9250c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(UE::PoseSearch::FSearchResult_const_&),0,0>::
CloneToEmptyStorage(TFunction_OwnedObject<void_(__cdecl*)(UE::PoseSearch::FSearchResult_const_&),0,0>
                    *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6AXAEBUFSearchResult_PoseSearch_UE___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_void_FSearchResult_ptr **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14a9250e0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<bool_(__cdecl*)(float),0,0>::CloneToEmptyStorage
          (TFunction_OwnedObject<bool_(__cdecl*)(float),0,0> *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &___7__TFunction_OwnedObject_P6A_NM_Z_0A__0A__Function_Private_Core_UE__6B_;
  *(_func___cdecl_bool_float **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14a925100

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(TFunctionRef<bool___cdecl(UE::PoseSearch::FSearchResult_const_&)>),0,0>
::CloneToEmptyStorage
          (TFunction_OwnedObject<bool_(__cdecl*)(TFunctionRef<bool___cdecl(UE::PoseSearch::FSearchResult_const_&)>),0,0>
           *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6A_NV__TFunctionRef___A6A_NAEBUFSearchResult_PoseSearch_UE___Z___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_bool_TFunctionRef<bool___cdecl(UE::PoseSearch::FSearchResult_const_&)> **)
   (param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14a925120

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_AssetBests::FSearchResults_AssetBests'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_AssetBests::FSearchResults_AssetBests'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14a925140

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_Multi::FSearchResults_Multi'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_Multi::FSearchResults_Multi'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14a925160

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_Single::FSearchResults_Single'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_Single::FSearchResults_Single'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14a925180

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_AssetBests::FSearchResults_AssetBests'::__l2::<lambda_2>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_AssetBests::FSearchResults_AssetBests'::`2'::<lambda_2>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14a9251a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_Multi::FSearchResults_Multi'::__l2::<lambda_2>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_Multi::FSearchResults_Multi'::`2'::<lambda_2>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14a9251c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_Single::FSearchResults_Single'::__l2::<lambda_2>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_Single::FSearchResults_Single'::`2'::<lambda_2>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14a9251e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_AssetBests::FSearchResults_AssetBests'::__l2::<lambda_3>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_AssetBests::FSearchResults_AssetBests'::`2'::<lambda_3>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14a925200

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_Multi::FSearchResults_Multi'::__l2::<lambda_3>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_Multi::FSearchResults_Multi'::`2'::<lambda_3>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14a925220

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_Single::FSearchResults_Single'::__l2::<lambda_3>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_Single::FSearchResults_Single'::`2'::<lambda_3>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14a925240

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_AssetBests::FSearchResults_AssetBests'::__l2::<lambda_4>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_AssetBests::FSearchResults_AssetBests'::`2'::<lambda_4>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14a925260

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_Multi::FSearchResults_Multi'::__l2::<lambda_4>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_Multi::FSearchResults_Multi'::`2'::<lambda_4>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14a925280

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_Single::FSearchResults_Single'::__l2::<lambda_4>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_Single::FSearchResults_Single'::`2'::<lambda_4>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14a9252a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_AssetBests::FSearchResults_AssetBests'::__l2::<lambda_5>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_AssetBests::FSearchResults_AssetBests'::`2'::<lambda_5>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14a9252c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_Multi::FSearchResults_Multi'::__l2::<lambda_5>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_Multi::FSearchResults_Multi'::`2'::<lambda_5>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14a9252e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_Single::FSearchResults_Single'::__l2::<lambda_5>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_Single::FSearchResults_Single'::`2'::<lambda_5>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// Destroy @ 14a9279b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<UE::PoseSearch::FSearchResult_(__cdecl*)(void),0,0>::Destroy
          (TFunction_OwnedObject<UE::PoseSearch::FSearchResult_(__cdecl*)(void),0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014a9279b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 14a9279c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(UE::PoseSearch::FSearchResult_const_&),0,0>::Destroy
          (TFunction_OwnedObject<void_(__cdecl*)(UE::PoseSearch::FSearchResult_const_&),0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014a9279c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 14a9279d0

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<bool_(__cdecl*)(float),0,0>::Destroy
          (TFunction_OwnedObject<bool_(__cdecl*)(float),0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014a9279d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 14a9279e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(TFunctionRef<bool___cdecl(UE::PoseSearch::FSearchResult_const_&)>),0,0>
::Destroy(TFunction_OwnedObject<bool_(__cdecl*)(TFunctionRef<bool___cdecl(UE::PoseSearch::FSearchResult_const_&)>),0,0>
          *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014a9279e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 14a9279f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_AssetBests::FSearchResults_AssetBests'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014a9279f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14a927a00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_Multi::FSearchResults_Multi'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014a927a05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14a927a10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_Single::FSearchResults_Single'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014a927a15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14a927a20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_AssetBests::FSearchResults_AssetBests'::__l2::<lambda_2>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014a927a25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14a927a30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_Multi::FSearchResults_Multi'::__l2::<lambda_2>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014a927a35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14a927a40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_Single::FSearchResults_Single'::__l2::<lambda_2>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014a927a45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14a927a50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_AssetBests::FSearchResults_AssetBests'::__l2::<lambda_3>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014a927a55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14a927a60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_Multi::FSearchResults_Multi'::__l2::<lambda_3>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014a927a65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14a927a70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_Single::FSearchResults_Single'::__l2::<lambda_3>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014a927a75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14a927a80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_AssetBests::FSearchResults_AssetBests'::__l2::<lambda_4>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014a927a85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14a927a90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_Multi::FSearchResults_Multi'::__l2::<lambda_4>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014a927a95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14a927aa0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_Single::FSearchResults_Single'::__l2::<lambda_4>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014a927aa5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14a927ab0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_AssetBests::FSearchResults_AssetBests'::__l2::<lambda_5>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014a927ab5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14a927ac0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_Multi::FSearchResults_Multi'::__l2::<lambda_5>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014a927ac5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14a927ad0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_Single::FSearchResults_Single'::__l2::<lambda_5>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014a927ad5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 14a92ac20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<UE::PoseSearch::FSearchResult_(__cdecl*)(void),0,0>::GetAddress
          (TFunction_OwnedObject<UE::PoseSearch::FSearchResult_(__cdecl*)(void),0,0> *this)

{
  return &this->Obj;
}

// GetAddress @ 14a92ac30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(UE::PoseSearch::FSearchResult_const_&),0,0>::GetAddress
          (TFunction_OwnedObject<void_(__cdecl*)(UE::PoseSearch::FSearchResult_const_&),0,0> *this)

{
  return &this->Obj;
}

// GetAddress @ 14a92ac40

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<bool_(__cdecl*)(float),0,0>::GetAddress
          (TFunction_OwnedObject<bool_(__cdecl*)(float),0,0> *this)

{
  return &this->Obj;
}

// GetAddress @ 14a92ac50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(TFunctionRef<bool___cdecl(UE::PoseSearch::FSearchResult_const_&)>),0,0>
::GetAddress(TFunction_OwnedObject<bool_(__cdecl*)(TFunctionRef<bool___cdecl(UE::PoseSearch::FSearchResult_const_&)>),0,0>
             *this)

{
  return &this->Obj;
}

// GetAddress @ 14a92ac60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_AssetBests::FSearchResults_AssetBests'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a92ac70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_Multi::FSearchResults_Multi'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a92ac80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_Single::FSearchResults_Single'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a92ac90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_AssetBests::FSearchResults_AssetBests'::__l2::<lambda_2>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a92aca0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_Multi::FSearchResults_Multi'::__l2::<lambda_2>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a92acb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_Single::FSearchResults_Single'::__l2::<lambda_2>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a92acc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_AssetBests::FSearchResults_AssetBests'::__l2::<lambda_3>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a92acd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_Multi::FSearchResults_Multi'::__l2::<lambda_3>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a92ace0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_Single::FSearchResults_Single'::__l2::<lambda_3>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a92acf0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_AssetBests::FSearchResults_AssetBests'::__l2::<lambda_4>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a92ad00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_Multi::FSearchResults_Multi'::__l2::<lambda_4>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a92ad10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_Single::FSearchResults_Single'::__l2::<lambda_4>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a92ad20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_AssetBests::FSearchResults_AssetBests'::__l2::<lambda_5>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a92ad30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_Multi::FSearchResults_Multi'::__l2::<lambda_5>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a92ad40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::PoseSearch::FSearchResults_Single::FSearchResults_Single'::__l2::<lambda_5>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

