// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 8

// ApplyAfter<void_(__cdecl_UDS_HitProcessAbility::*const_&)(FDS_EffectSpawnCompleteInfo,int,unsigned___int64,unsigned___int64,FDS_StruckInfo,FWN_EndOfRefs),UDS_HitProcessAbility_*_&,FDS_EffectSpawnCompleteInfo> @ 14b7d0d70

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
UE::Core::Private::Tuple::
TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4>,int,unsigned___int64,unsigned___int64,FDS_StruckInfo,FWN_EndOfRefs>
::
ApplyAfter<void_(__cdecl_UDS_HitProcessAbility::*const_&)(FDS_EffectSpawnCompleteInfo,int,unsigned___int64,unsigned___int64,FDS_StruckInfo,FWN_EndOfRefs),UDS_HitProcessAbility_*_&,FDS_EffectSpawnCompleteInfo>
          (TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4>,int,unsigned___int64,unsigned___int64,FDS_StruckInfo,FWN_EndOfRefs>
           *this,pmf_83135fd8 *param_1,UDS_HitProcessAbility **param_2,
          FDS_EffectSpawnCompleteInfo *param_3)

{
  code *pcVar1;
  int iVar2;
  UDS_HitProcessAbility *pUVar3;
  code *local_88;
  longlong lStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_88 = *(code **)param_1;
  lStack_80 = *(longlong *)&param_1->field_0x8;
  pUVar3 = DereferenceIfNecessary<UDS_HitProcessAbility,UDS_HitProcessAbility_*_&>(param_2);
  pcVar1 = local_88;
  iVar2 = (int)lStack_80;
  local_88 = *(code **)&this->field_0x88;
  lStack_80 = *(longlong *)&this->field_0x90;
  if (lStack_80 != 0) {
    LOCK();
    *(int *)(lStack_80 + 8) = *(int *)(lStack_80 + 8) + 1;
    UNLOCK();
  }
  local_78 = *(undefined8 *)&this->field_0x18;
  uStack_70 = *(undefined8 *)&this->field_0x20;
  local_68 = *(undefined8 *)&this->field_0x28;
  uStack_60 = *(undefined8 *)&this->field_0x30;
  local_58 = *(undefined8 *)&this->field_0x38;
  uStack_50 = *(undefined8 *)&this->field_0x40;
  local_38 = *(undefined8 *)&this->field_0x58;
  uStack_30 = *(undefined8 *)&this->field_0x60;
  local_48 = *(undefined8 *)&this->field_0x48;
  uStack_40 = *(undefined8 *)&this->field_0x50;
  local_18 = *(undefined8 *)&this->field_0x78;
  uStack_10 = *(undefined8 *)&this->field_0x80;
  local_28 = *(undefined4 *)&this->field_0x68;
  uStack_24 = *(undefined4 *)&this->field_0x6c;
  uStack_20 = *(undefined4 *)&this->field_0x70;
  uStack_1c = *(undefined4 *)&this->field_0x74;
  (*pcVar1)((longlong)&pUVar3->_padding_ + (longlong)iVar2,param_3->NiagaraComponent,
            *(undefined4 *)this,*(undefined8 *)&this->field_0x8,*(undefined8 *)&this->field_0x10,
            &local_78,&local_88);
  return;
}

// ApplyAfter<void_(__cdecl_UDS_GameInstance::*const_&)(TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>),UDS_GameInstance_*_&> @ 14b98df30

void __thiscall
UE::Core::Private::Tuple::
TTupleBase<TIntegerSequence<unsigned_int,0>,TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>_>::
ApplyAfter<void_(__cdecl_UDS_GameInstance::*const_&)(TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>),UDS_GameInstance_*_&>
          (TTupleBase<TIntegerSequence<unsigned_int,0>,TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>_>
           *this,pmf_96cc398b *param_1,UDS_GameInstance **param_2)

{
  int iVar1;
  FSoftObjectPath *pFVar2;
  int iVar3;
  UDS_GameInstance *pUVar4;
  ForAnyElementType local_28;
  int local_20;
  int local_1c;
  code *local_18;
  undefined8 uStack_10;
  
  local_18 = *(code **)param_1;
  uStack_10 = *(undefined8 *)&param_1->field_0x8;
  pUVar4 = DereferenceIfNecessary<UDS_GameInstance,UDS_GameInstance_*_&>(param_2);
  iVar1 = *(int *)&this->field_0x8;
  pFVar2 = *(FSoftObjectPath **)this;
  iVar3 = (int)uStack_10;
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20 = iVar1;
  if (iVar1 == 0) {
    local_1c = 0;
  }
  else {
    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar1,0,&local_28,iVar1,&local_1c);
    ConstructItems<FSoftObjectPath,FSoftObjectPath,int>(local_28.Data,pFVar2,iVar1);
  }
  (*local_18)((longlong)&pUVar4->_padding_ + (longlong)iVar3,&local_28);
  return;
}

// ApplyAfter<void_(__cdecl*const_&)(UDS_UserWidget_*,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>),UDS_UserWidget_*> @ 14ba85ac0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::Core::Private::Tuple::
TTupleBase<TIntegerSequence<unsigned_int,0,1>,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::
ApplyAfter<void_(__cdecl*const_&)(UDS_UserWidget_*,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>),UDS_UserWidget_*>
          (TTupleBase<TIntegerSequence<unsigned_int,0,1>,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
           *this,_func___cdecl_void_UDS_UserWidget_ptr_TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>_TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
                 **param_1,UDS_UserWidget **param_2)

{
  _func___cdecl_void_UDS_UserWidget_ptr_TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>_TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
  *p_Var1;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_78;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> local_60;
  
  p_Var1 = *param_1;
  local_78._0_8_ = 0;
  local_78._8_8_ = 0;
  local_78._16_4_ = 0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&local_78,(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->field_0x50
            );
  local_60.Elements._0_8_ = 0;
  local_60.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_60.Elements._48_8_ = _UNK_150631d98;
  local_60.Elements._8_8_ = 0;
  local_60.Elements._32_8_ = 0;
  local_60.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_60.HashSize = 0;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::operator=
            (&local_60,
             (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             this);
  (*p_Var1)(*param_2,(TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
                     &local_60,&local_78);
  return;
}

// ApplyAfter<void_(__cdecl*const_&)(UDS_UserWidget_*,int,int,int,int,bool,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>),UDS_UserWidget_*> @ 14bb9c5a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::Core::Private::Tuple::
TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5>,int,int,int,int,bool,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>_>
::
ApplyAfter<void_(__cdecl*const_&)(UDS_UserWidget_*,int,int,int,int,bool,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>),UDS_UserWidget_*>
          (TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5>,int,int,int,int,bool,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>_>
           *this,_func___cdecl_void_UDS_UserWidget_ptr_int_int_int_int_bool_TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                 **param_1,UDS_UserWidget **param_2)

{
  _func___cdecl_void_UDS_UserWidget_ptr_int_int_int_int_bool_TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
  *p_Var1;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> local_58;
  
  p_Var1 = *param_1;
  local_58.Elements._0_8_ = 0;
  local_58.Elements._8_8_ = 0;
  local_58.Elements._32_8_ = 0;
  local_58.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_58.Elements._48_8_ = _UNK_150631d98;
  local_58.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_58.HashSize = 0;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::operator=
            (&local_58,
             (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             &this->field_0x18);
  (*p_Var1)(*param_2,*(int *)this,*(int *)&this->field_0x4,*(int *)&this->field_0x8,
            *(int *)&this->field_0xc,(bool)this->field_0x10,
            (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)&local_58)
  ;
  return;
}

// ApplyAfter<void_(__cdecl_UDS_SoundManager::*const_&)(FSoftObjectPath,FDS_PlaySoundParam),UDS_SoundManager_*_&> @ 14bb9c630

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::Core::Private::Tuple::
TTupleBase<TIntegerSequence<unsigned_int,0,1>,FSoftObjectPath,FDS_PlaySoundParam>::
ApplyAfter<void_(__cdecl_UDS_SoundManager::*const_&)(FSoftObjectPath,FDS_PlaySoundParam),UDS_SoundManager_*_&>
          (TTupleBase<TIntegerSequence<unsigned_int,0,1>,FSoftObjectPath,FDS_PlaySoundParam> *this,
          pmf_7b7c3358 *param_1,UDS_SoundManager **param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  UDS_SoundManager *pUVar7;
  FSoftObjectPath *pFVar8;
  int iStack_80;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  FSoftObjectPath local_58;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  pcVar2 = *(code **)param_1;
  uVar1 = *(undefined8 *)&param_1->field_0x8;
  pUVar7 = DereferenceIfNecessary<UDS_SoundManager,UDS_SoundManager_*_&>(param_2);
  iStack_80 = (int)uVar1;
  uVar3 = *(undefined8 *)&this->field_0x20;
  uVar4 = *(undefined8 *)&this->field_0x28;
  uVar5 = *(undefined8 *)&this->field_0x30;
  uVar6 = *(undefined8 *)&this->field_0x38;
  uVar1 = *(undefined8 *)&this->field_0x40;
  pFVar8 = FSoftObjectPath::FSoftObjectPath(&local_58,(FSoftObjectPath *)this);
  local_68 = (undefined4)uVar5;
  uStack_64 = (undefined4)((ulonglong)uVar5 >> 0x20);
  uStack_60 = (undefined4)uVar6;
  uStack_5c = (undefined4)((ulonglong)uVar6 >> 0x20);
  local_28 = local_68;
  uStack_24 = uStack_64;
  uStack_20 = uStack_60;
  uStack_1c = uStack_5c;
  local_38 = uVar3;
  uStack_30 = uVar4;
  local_18 = uVar1;
  (*pcVar2)((longlong)&pUVar7->_padding_ + (longlong)iStack_80,pFVar8,&local_38);
  return;
}

// ApplyAfter<void_(__cdecl_UDS_SoundManager::*const_&)(FWN_AmbientSoundInfo),UDS_SoundManager_*_&> @ 14bb9c6f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::Core::Private::Tuple::TTupleBase<TIntegerSequence<unsigned_int,0>,FWN_AmbientSoundInfo>::
ApplyAfter<void_(__cdecl_UDS_SoundManager::*const_&)(FWN_AmbientSoundInfo),UDS_SoundManager_*_&>
          (TTupleBase<TIntegerSequence<unsigned_int,0>,FWN_AmbientSoundInfo> *this,
          pmf_aed183c5 *param_1,UDS_SoundManager **param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  UDS_SoundManager *pUVar3;
  undefined **local_68;
  undefined8 local_60;
  FSoftObjectPath local_58;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  
  pcVar1 = *(code **)param_1;
  uVar2 = *(undefined8 *)&param_1->field_0x8;
  pUVar3 = DereferenceIfNecessary<UDS_SoundManager,UDS_SoundManager_*_&>(param_2);
  local_68 = &___7FWN_AmbientSoundInfo__6B_;
  local_60 = *(undefined8 *)&this->field_0x8;
  FSoftObjectPath::FSoftObjectPath(&local_58,(FSoftObjectPath *)&this->field_0x10);
  local_38 = *(undefined4 *)&this->field_0x30;
  local_2c = *(undefined4 *)&this->field_0x3c;
  local_34 = *(undefined4 *)&this->field_0x34;
  local_30 = *(undefined4 *)&this->field_0x38;
  local_28 = *(undefined8 *)&this->field_0x40;
  uStack_20 = *(undefined8 *)&this->field_0x48;
  (*pcVar1)((longlong)&pUVar3->_padding_ + (longlong)(int)uVar2,&local_68);
  return;
}

// ApplyAfter<void_(__cdecl_UDS_PostProcessEffectBase::*const_&)(UCurveFloat_*,TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>,FName,float,float,double),UDS_PostProcessEffectBase_*_&> @ 14bbe6490

void __thiscall
UE::Core::Private::Tuple::
TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5>,UCurveFloat_*,TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>,FName,float,float,double>
::
ApplyAfter<void_(__cdecl_UDS_PostProcessEffectBase::*const_&)(UCurveFloat_*,TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>,FName,float,float,double),UDS_PostProcessEffectBase_*_&>
          (TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5>,UCurveFloat_*,TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>,FName,float,float,double>
           *this,pmf_d2d3c704 *param_1,UDS_PostProcessEffectBase **param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  pmf_d2d3c704 pVar4;
  undefined8 uVar5;
  UDS_PostProcessEffectBase *pUVar6;
  TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy> *pTVar7;
  TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy> local_58 [3];
  
  pVar4 = *param_1;
  pUVar6 = DereferenceIfNecessary<UDS_PostProcessEffectBase,UDS_PostProcessEffectBase_*_&>(param_2);
  uVar3 = *(undefined8 *)&this->field_0x30;
  uVar1 = *(undefined4 *)&this->field_0x2c;
  uVar2 = *(undefined4 *)&this->field_0x28;
  uVar5 = *(undefined8 *)&this->field_0x20;
  pTVar7 = TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::
           TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>
                     (local_58,(TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy> *)
                               &this->field_0x8);
  (*(code *)pVar4)(pUVar6,*(undefined8 *)this,pTVar7,uVar5,uVar2,uVar1,uVar3);
  return;
}

// ApplyAfter<void_(__cdecl_UDS_PartsSystemControl::*const_&)(TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>,FWN_EndOfRefs),UDS_PartsSystemControl_*_&> @ 14bc25200

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
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
UE::Core::Private::Tuple::
TTupleBase<TIntegerSequence<unsigned_int,0,1>,TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>,FWN_EndOfRefs>
::
ApplyAfter<void_(__cdecl_UDS_PartsSystemControl::*const_&)(TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>,FWN_EndOfRefs),UDS_PartsSystemControl_*_&>
          (TTupleBase<TIntegerSequence<unsigned_int,0,1>,TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>,FWN_EndOfRefs>
           *this,pmf_3265d091 *param_1,UDS_PartsSystemControl **param_2)

{
  int iVar1;
  pmf_3265d091 pVar2;
  FSoftObjectPath *pFVar3;
  UDS_PartsSystemControl *pUVar4;
  ForAnyElementType local_28;
  int local_20;
  int local_1c;
  undefined8 local_18;
  longlong local_10;
  
  pVar2 = *param_1;
  pUVar4 = DereferenceIfNecessary<UDS_PartsSystemControl,UDS_PartsSystemControl_*_&>(param_2);
  local_18 = *(undefined8 *)&this->field_0x10;
  local_10 = *(longlong *)&this->field_0x18;
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  iVar1 = *(int *)&this->field_0x8;
  pFVar3 = *(FSoftObjectPath **)this;
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20 = iVar1;
  if (iVar1 == 0) {
    local_1c = 0;
  }
  else {
    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar1,0,&local_28,iVar1,&local_1c);
    ConstructItems<FSoftObjectPath,FSoftObjectPath,int>(local_28.Data,pFVar3,iVar1);
  }
  (*(code *)pVar2)(pUVar4,&local_28,&local_18);
  return;
}

