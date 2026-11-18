// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 24

// StaticClass @ 14a381670

UClass * __cdecl UControlRigPoseAsset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UControlRigPoseAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ControlRig",L"ControlRigPoseAsset",
               &Z_Registration_Info_UClass_UControlRigPoseAsset.InnerSingleton,
               StaticRegisterNativesUControlRigPoseAsset,0x90,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UControlRigPoseAsset>,
               InternalVTableHelperCtorCaller<UControlRigPoseAsset>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UControlRigPoseAsset.InnerSingleton;
}

// UControlRigPoseAsset @ 14a3b8c80

UControlRigPoseAsset * __thiscall
UControlRigPoseAsset::UControlRigPoseAsset(UControlRigPoseAsset *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UControlRigPoseAsset__6B_;
  (this->Pose).CopyOfControls.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Pose).CopyOfControls.ArrayNum = 0;
  (this->Pose).CopyOfControls.ArrayMax = 0;
  *(undefined8 *)&(this->Pose).CopyOfControlsNameToIndex = 0;
  *(undefined8 *)&(this->Pose).CopyOfControlsNameToIndex.field_0x8 = 0;
  *(undefined8 *)&(this->Pose).CopyOfControlsNameToIndex.field_0x20 = 0;
  *(undefined4 *)&(this->Pose).CopyOfControlsNameToIndex.field_0x28 = 0;
  *(undefined4 *)&(this->Pose).CopyOfControlsNameToIndex.field_0x2c = 0x80;
  *(undefined4 *)&(this->Pose).CopyOfControlsNameToIndex.field_0x34 = 0;
  *(undefined4 *)&(this->Pose).CopyOfControlsNameToIndex.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->Pose).CopyOfControlsNameToIndex.field_0x40 = 0;
  *(undefined4 *)&(this->Pose).CopyOfControlsNameToIndex.field_0x48 = 0;
  return this;
}

// UControlRigPoseAsset @ 14a3b8ce0

UControlRigPoseAsset * __thiscall
UControlRigPoseAsset::UControlRigPoseAsset(UControlRigPoseAsset *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UControlRigPoseAsset__6B_;
  (this->Pose).CopyOfControls.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Pose).CopyOfControls.ArrayNum = 0;
  (this->Pose).CopyOfControls.ArrayMax = 0;
  *(undefined8 *)&(this->Pose).CopyOfControlsNameToIndex = 0;
  *(undefined8 *)&(this->Pose).CopyOfControlsNameToIndex.field_0x8 = 0;
  *(undefined8 *)&(this->Pose).CopyOfControlsNameToIndex.field_0x20 = 0;
  *(undefined4 *)&(this->Pose).CopyOfControlsNameToIndex.field_0x28 = 0;
  *(undefined4 *)&(this->Pose).CopyOfControlsNameToIndex.field_0x2c = 0x80;
  *(undefined4 *)&(this->Pose).CopyOfControlsNameToIndex.field_0x34 = 0;
  *(undefined4 *)&(this->Pose).CopyOfControlsNameToIndex.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->Pose).CopyOfControlsNameToIndex.field_0x40 = 0;
  *(undefined4 *)&(this->Pose).CopyOfControlsNameToIndex.field_0x48 = 0;
  return this;
}

// ~UControlRigPoseAsset @ 14a3bd010

void __thiscall UControlRigPoseAsset::~UControlRigPoseAsset(UControlRigPoseAsset *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UControlRigPoseAsset__6B_;
  *(undefined4 *)&(this->Pose).CopyOfControlsNameToIndex.field_0x48 = 0;
  pvVar1 = *(void **)&(this->Pose).CopyOfControlsNameToIndex.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->Pose).CopyOfControlsNameToIndex);
  pFVar2 = (this->Pose).CopyOfControls.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// BlendWithInitialPoses @ 14a3eca20

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UControlRigPoseAsset::BlendWithInitialPoses
          (UControlRigPoseAsset *this,FControlRigControlPose *param_1,UControlRig *param_2,
          bool param_3,bool param_4,float param_5,bool param_6)

{
  FControlRigControlPose::BlendWithInitialPoses
            (&this->Pose,param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}

// DoesMirrorMatch @ 14a403950

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
UControlRigPoseAsset::DoesMirrorMatch
          (UControlRigPoseAsset *this,UControlRig *param_1,FName *param_2)

{
  FMatchedControls *this_00;
  FName *pFVar1;
  
  FControlRigPoseMirrorTable::SetUpMirrorTable(&this->MirrorMatchTable,param_1);
  this_00 = TMapBase<UControlRig_const_*,FControlRigPoseMirrorTable::FMatchedControls,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UControlRig_const_*,FControlRigPoseMirrorTable::FMatchedControls,0>_>
            ::Find((TMapBase<UControlRig_const_*,FControlRigPoseMirrorTable::FMatchedControls,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UControlRig_const_*,FControlRigPoseMirrorTable::FMatchedControls,0>_>
                    *)&FControlRigPoseMirrorTable::MatchedControls,param_1);
  if ((this_00 != (FMatchedControls *)0x0) &&
     (0 < *(int *)&(this_00->Match).field_0x8 - *(int *)&(this_00->Match).field_0x34)) {
    pFVar1 = TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
             ::Find((TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                     *)this_00,*param_2);
    if (pFVar1 != (FName *)0x0) {
      return true;
    }
  }
  return false;
}

// GetControlNames @ 14a412890

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
UControlRigPoseAsset::GetControlNames
          (UControlRigPoseAsset *this,
          TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FControlRigControlPose::GetControlNames(&this->Pose,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetCurrentPose @ 14a4135a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TArray<FRigControlCopy,TSizedDefaultAllocator<32>_> * __thiscall
UControlRigPoseAsset::GetCurrentPose
          (UControlRigPoseAsset *this,
          TArray<FRigControlCopy,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          UControlRig *param_1)

{
  ulonglong uVar1;
  undefined8 _Src;
  int iVar2;
  undefined1 auStackY_c8 [32];
  undefined1 local_88 [16];
  ForAnyElementType local_78;
  undefined8 local_70;
  TBitArray<FDefaultBitArrayAllocator> local_68;
  undefined4 local_48;
  undefined4 local_44;
  void *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  local_68.MaxBits = 0x80;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_38 = (void *)0x0;
  local_88._8_4_ = 0;
  local_88._12_4_ = 0;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70 = 0;
  local_68.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_68.NumBits = 0;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_30 = 0;
  iVar2 = 0;
  if (param_1 != (UControlRig *)0x0) {
    FControlRigControlPose::SavePose((FControlRigControlPose *)local_88,param_1,true);
    iVar2 = local_88._8_4_;
  }
  _Src = local_88._0_8_;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = iVar2;
  if (iVar2 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x220,0x10,iVar2,0,&__return_storage_ptr__->AllocatorInstance,iVar2,
               &__return_storage_ptr__->ArrayMax);
    memcpy((__return_storage_ptr__->AllocatorInstance).Data,(void *)_Src,(longlong)iVar2 * 0x220);
  }
  local_30 = 0;
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  uVar1 = local_70 >> 0x20;
  local_70 = local_70 & 0xffffffff00000000;
  if ((int)uVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,&local_78,0,(int *)((longlong)&local_70 + 4));
  }
  local_48 = 0xffffffff;
  local_44 = 0;
  local_68.NumBits = 0;
  if (0x80 < (uint)local_68.MaxBits) {
    local_68.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_68,0);
  }
  if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_68.AllocatorInstance.SecondaryData);
  }
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_88._0_8_);
  }
  return __return_storage_ptr__;
}

// GetCurrentPose @ 14a413740

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UControlRigPoseAsset::GetCurrentPose
          (UControlRigPoseAsset *this,UControlRig *param_1,FControlRigControlPose *param_2)

{
  if (param_1 != (UControlRig *)0x0) {
    FControlRigControlPose::SavePose(param_2,param_1,true);
    return;
  }
  return;
}

// GetPrivateStaticClass @ 14a416da0

UClass * __cdecl UControlRigPoseAsset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UControlRigPoseAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ControlRig",L"ControlRigPoseAsset",
               &Z_Registration_Info_UClass_UControlRigPoseAsset.InnerSingleton,
               StaticRegisterNativesUControlRigPoseAsset,0x90,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UControlRigPoseAsset>,
               InternalVTableHelperCtorCaller<UControlRigPoseAsset>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UControlRigPoseAsset.InnerSingleton;
}

// PastePose @ 14a432210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UControlRigPoseAsset::PastePose
          (UControlRigPoseAsset *this,UControlRig *param_1,bool param_2,bool param_3,bool param_4)

{
  FControlRigControlPose *this_00;
  ulonglong uVar1;
  float fVar2;
  undefined1 auStackY_f8 [32];
  undefined1 local_b8 [16];
  ForAnyElementType local_a8;
  undefined8 local_a0;
  TBitArray<FDefaultBitArrayAllocator> local_98;
  undefined4 local_78;
  undefined4 local_74;
  void *local_68;
  undefined4 local_60;
  ulonglong local_58;
  
  if (param_1 != (UControlRig *)0x0) {
    local_58 = __security_cookie.value ^ (ulonglong)auStackY_f8;
    this_00 = &this->Pose;
    if (param_4) {
      local_b8._0_8_ = (FScriptContainerElement *)0x0;
      local_b8._8_4_ = 0;
      local_b8._12_4_ = 0;
      local_a8.Data = (FScriptContainerElement *)0x0;
      local_a0 = 0;
      local_98.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_98.NumBits = 0;
      local_74 = 0;
      local_68 = (void *)0x0;
      local_60 = 0;
      local_98.MaxBits = 0x80;
      local_78 = 0xffffffff;
      FControlRigControlPose::SavePose((FControlRigControlPose *)local_b8,param_1,true);
      fVar2 = __real_3f800000;
      FControlRigControlPose::BlendWithInitialPoses
                (this_00,(FControlRigControlPose *)local_b8,param_1,param_2,param_3,__real_3f800000,
                 true);
      (**(code **)(param_1->_padding_ + 0x2d0))(param_1);
      FControlRigControlPose::BlendWithInitialPoses
                (this_00,(FControlRigControlPose *)local_b8,param_1,param_2,param_3,fVar2,true);
      local_60 = 0;
      if (local_68 != (void *)0x0) {
        FMemory::Free(local_68);
      }
      uVar1 = local_a0 >> 0x20;
      local_a0 = local_a0 & 0xffffffff00000000;
      if ((int)uVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x14,4,0,&local_a8,0,(int *)((longlong)&local_a0 + 4));
      }
      local_74 = 0;
      local_98.NumBits = 0;
      local_78 = 0xffffffff;
      if (0x80 < (uint)local_98.MaxBits) {
        local_98.MaxBits = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_98,0);
      }
      if (local_98.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_98.AllocatorInstance.SecondaryData);
      }
      if (local_a8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data);
      }
      if ((FScriptContainerElement *)local_b8._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_b8._0_8_);
      }
    }
    else {
      FControlRigControlPose::PastePoseInternal
                (this_00,param_1,param_2,param_3,&this_00->CopyOfControls);
      (**(code **)(param_1->_padding_ + 0x2d0))(param_1);
      FControlRigControlPose::PastePoseInternal
                (this_00,param_1,param_2,param_3,&this_00->CopyOfControls);
    }
  }
  return;
}

// PostLoad @ 14a434210

void __thiscall UControlRigPoseAsset::PostLoad(UControlRigPoseAsset *this)

{
  UObject::PostLoad((UObject *)this);
  FControlRigControlPose::SetUpControlMap(&this->Pose);
  return;
}

// ReplaceControlName @ 14a44dfd0

void __thiscall
UControlRigPoseAsset::ReplaceControlName(UControlRigPoseAsset *this,FName *param_1,FName *param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TTuple<FName,int> *pTVar5;
  uint *puVar6;
  uint uVar7;
  FName *pFVar8;
  TPairInitializer<FName_const_&,int_const_&> local_res8;
  FName *local_38;
  uint *local_30;
  
  pTVar5 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
           Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                 *)&(this->Pose).CopyOfControlsNameToIndex,*param_1);
  puVar6 = (uint *)&pTVar5->field_0x8;
  if (pTVar5 == (TTuple<FName,int> *)0x0) {
    puVar6 = (uint *)0x0;
  }
  if (puVar6 != (uint *)0x0) {
    uVar4 = *puVar6;
    if (-1 < (int)uVar4) {
      uVar7 = 0;
      if ((int)uVar4 < (this->Pose).CopyOfControls.ArrayNum) {
        uVar7 = ~uVar4 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar8 = (FName *)((this->Pose).CopyOfControls.AllocatorInstance.Data +
                        (longlong)(int)uVar4 * 0x220);
      *pFVar8 = *param_2;
      FVar1 = *param_1;
      local_res8.Value = (int *)FVar1;
      if (*(int *)&(this->Pose).CopyOfControlsNameToIndex.field_0x8 !=
          *(int *)&(this->Pose).CopyOfControlsNameToIndex.field_0x34) {
        uVar4 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
        TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
        RemoveImpl<FName>((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                           *)&(this->Pose).CopyOfControlsNameToIndex,FVar1.Number + uVar4,
                          (FName *)&local_res8.Value);
      }
      local_38 = pFVar8;
      local_30 = puVar6;
      TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<FName_const_&,int_const_&>_>
                ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                  *)&(this->Pose).CopyOfControlsNameToIndex,&local_res8,(bool *)&local_38);
    }
  }
  return;
}

// SavePose @ 14a4558a0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UControlRigPoseAsset::SavePose(UControlRigPoseAsset *this,UControlRig *param_1,bool param_2)

{
  if (param_1 != (UControlRig *)0x0) {
    FControlRigControlPose::SavePose(&this->Pose,param_1,param_2);
    return;
  }
  return;
}

// SelectControls @ 14a455ab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UControlRigPoseAsset::SelectControls
          (UControlRigPoseAsset *this,UControlRig *param_1,bool param_2,bool param_3)

{
  FName *pFVar1;
  code *pcVar2;
  FRigControlCopy *pFVar3;
  int iVar4;
  ForAnyElementType FVar5;
  undefined1 auStack_f8 [32];
  FControlRigPoseMirrorTable local_c8 [8];
  TArray<FName,TSizedDefaultAllocator<32>_> local_c0;
  undefined1 local_a8 [16];
  undefined1 local_98 [64];
  void *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  if (param_1 != (UControlRig *)0x0) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_f8;
    if (param_3) {
      (**(code **)(param_1->_padding_ + 0x430))(param_1,0);
    }
    FControlRigControlPose::GetControlNames(&this->Pose,&local_c0);
    local_98._44_4_ = 0x80;
    local_a8._0_8_ = (FScriptContainerElement *)0x0;
    local_a8._8_4_ = 0;
    local_a8._12_4_ = 0;
    local_98._0_8_ = 0;
    local_98._8_8_ = 0;
    local_98._32_8_ = 0;
    local_98._40_4_ = 0;
    local_98._48_4_ = 0xffffffff;
    local_98._52_4_ = 0;
    local_58 = (void *)0x0;
    local_50 = 0;
    if (param_2) {
      FControlRigControlPose::SavePose((FControlRigControlPose *)local_a8,param_1,true);
    }
    iVar4 = local_c0.ArrayNum;
    pFVar1 = (FName *)(local_c0.AllocatorInstance.Data + (longlong)iVar4 * 8);
    FVar5.Data = local_c0.AllocatorInstance.Data;
    while( true ) {
      if (local_c0.ArrayNum != iVar4) {
        `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(local_c8);
      }
      if ((FName *)FVar5.Data == pFVar1) break;
      if (param_2) {
        pFVar3 = FControlRigPoseMirrorTable::GetControl
                           (local_c8,param_1,(FControlRigControlPose *)local_a8,*(FName *)FVar5.Data
                            ,param_2);
        pcVar2 = *(code **)(param_1->_padding_ + 0x428);
        if (pFVar3 == (FRigControlCopy *)0x0) {
          (*pcVar2)(param_1,FVar5.Data,1);
          FVar5.Data = FVar5.Data + 8;
        }
        else {
          (*pcVar2)(param_1,pFVar3);
          FVar5.Data = FVar5.Data + 8;
        }
      }
      else {
        (**(code **)(param_1->_padding_ + 0x428))(param_1,FVar5.Data,1,0);
        FVar5.Data = FVar5.Data + 8;
      }
    }
    local_50 = 0;
    if (local_58 != (void *)0x0) {
      FMemory::Free(local_58);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_98);
    if ((FScriptContainerElement *)local_a8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_a8._0_8_);
    }
    if ((FName *)local_c0.AllocatorInstance.Data != (FName *)0x0) {
      FMemory::Free(local_c0.AllocatorInstance.Data);
    }
  }
  return;
}

// StaticRegisterNativesUControlRigPoseAsset @ 14a45c370

void __cdecl UControlRigPoseAsset::StaticRegisterNativesUControlRigPoseAsset(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 8;
  local_18.DataPtr = Z_Construct_UClass_UControlRigPoseAsset_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execDoesMirrorMatch @ 14a468ef0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UControlRigPoseAsset::execDoesMirrorMatch(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UControlRig *pUVar2;
  FMatchedControls *this;
  FName *pFVar3;
  FName local_res8;
  UControlRig *local_res10;
  
  local_res10 = (UControlRig *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pUVar2 = local_res10;
  pFVar3 = &local_res8;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    pFVar3 = (FName *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FControlRigPoseMirrorTable::SetUpMirrorTable
            ((FControlRigPoseMirrorTable *)&param_1[3].field_0x10,local_res10);
  this = TMapBase<UControlRig_const_*,FControlRigPoseMirrorTable::FMatchedControls,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UControlRig_const_*,FControlRigPoseMirrorTable::FMatchedControls,0>_>
         ::Find((TMapBase<UControlRig_const_*,FControlRigPoseMirrorTable::FMatchedControls,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UControlRig_const_*,FControlRigPoseMirrorTable::FMatchedControls,0>_>
                 *)&FControlRigPoseMirrorTable::MatchedControls,pUVar2);
  if (((this != (FMatchedControls *)0x0) &&
      (0 < *(int *)&(this->Match).field_0x8 - *(int *)&(this->Match).field_0x34)) &&
     (pFVar3 = TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
               ::Find((TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                       *)this,*pFVar3), pFVar3 != (FName *)0x0)) {
    *(undefined1 *)param_3 = 1;
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execGetControlNames @ 14a469020

void __cdecl
UControlRigPoseAsset::execGetControlNames(UObject *param_1,FFrame *param_2,void *param_3)

{
  TArray<FName,TSizedDefaultAllocator<32>_> local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FControlRigControlPose::GetControlNames((FControlRigControlPose *)(param_1 + 1),&local_18);
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_18.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_18.ArrayMax;
    local_18.ArrayNum = 0;
    local_18.ArrayMax = 0;
    local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execGetCurrentPose @ 14a4690b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UControlRigPoseAsset::execGetCurrentPose(UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  int *piVar2;
  FProperty *pFVar3;
  FRigControlElement *pFVar4;
  URigHierarchy *pUVar5;
  FRigControlCopy *pFVar6;
  code *pcVar7;
  double dVar8;
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
  FName FVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  longlong *plVar24;
  FName *pFVar25;
  bool bVar26;
  bool bVar27;
  int iVar28;
  int iVar29;
  FRigElementKey *pFVar30;
  FRigControlCopy *pFVar31;
  ulonglong uVar32;
  longlong lVar33;
  FName *pFVar34;
  ulonglong uVar35;
  undefined8 *puVar36;
  FControlRigControlPose *this;
  undefined8 *puVar37;
  undefined1 auStackY_5a8 [32];
  undefined1 local_558 [4];
  uint local_554;
  longlong *local_550;
  undefined8 *local_548;
  ulonglong local_540;
  FRigElementKey local_538;
  undefined8 *local_528;
  FRigElementKey local_518;
  FRigElementKey local_508;
  FRigElementKey local_4f8;
  FRigElementKey local_4e8;
  FRigElementKey local_4d8;
  FRigElementKey local_4c8;
  IRigDependenciesProvider local_4b8;
  undefined1 local_4a8 [16];
  undefined1 local_498 [16];
  undefined1 local_488 [16];
  undefined1 local_478 [16];
  undefined1 local_468 [16];
  undefined1 local_458 [16];
  FRigElementKey local_448;
  TTransform<double> local_438;
  TTransform<double> local_3d8;
  undefined1 local_378 [16];
  ForAnyElementType local_368;
  undefined8 local_360;
  TBitArray<FDefaultBitArrayAllocator> local_358;
  undefined4 local_338;
  undefined4 local_334;
  void *local_328;
  undefined4 local_320;
  TTransform<double> local_318;
  FRigControlCopy local_2b8;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_5a8;
  local_550 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_550,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_550);
  }
  local_378._0_8_ = (FScriptContainerElement *)0x0;
  local_378._8_4_ = 0;
  local_378._12_4_ = 0;
  local_368.Data = (FScriptContainerElement *)0x0;
  local_360 = 0;
  local_358.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_358.NumBits = 0;
  local_358.MaxBits = 0x80;
  local_338 = 0xffffffff;
  local_334 = 0;
  local_328 = (void *)0x0;
  local_320 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_378,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_378);
  }
  plVar24 = local_550;
  this = (FControlRigControlPose *)local_378;
  if ((FControlRigControlPose *)param_2->MostRecentPropertyAddress != (FControlRigControlPose *)0x0)
  {
    this = (FControlRigControlPose *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_550 != (longlong *)0x0) {
    local_548 = (undefined8 *)0x0;
    local_540 = 0;
    (**(code **)(*local_550 + 0x420))(local_550,&local_548);
    iVar29 = (this->CopyOfControls).ArrayNum;
    piVar1 = &(this->CopyOfControls).ArrayNum;
    if (iVar29 < 0) {
      iVar28 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x220,0x10,-iVar29,(ForAnyElementType *)this,piVar1,
                          &(this->CopyOfControls).ArrayMax);
      DefaultConstructItems<FRigControlCopy,int>
                ((this->CopyOfControls).AllocatorInstance.Data + (longlong)iVar28 * 0x220,-iVar29);
    }
    else if (0 < iVar29) {
      *piVar1 = *piVar1 - iVar29;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x220,0x10,(ForAnyElementType *)this,*piVar1,&(this->CopyOfControls).ArrayMax);
    }
    uVar32 = (ulonglong)(int)(uint)local_540;
    puVar36 = local_548 + uVar32;
    local_554 = (uint)local_540;
    uVar35 = uVar32;
    puVar37 = local_548;
    local_528 = puVar36;
    while( true ) {
      if ((int)uVar32 != (int)uVar35) {
        local_558[0] = 0;
        `TCheckedPointerIterator<FRigControlElement_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_558);
      }
      if (puVar37 == puVar36) break;
      pFVar4 = (FRigControlElement *)*puVar37;
      bVar26 = URigHierarchy::IsAnimatable((URigHierarchy *)plVar24[0x67],pFVar4);
      if (bVar26) {
        dVar8 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        dVar9 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
        bVar26 = false;
        dVar10 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        dVar11 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        dVar12 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
        dVar13 = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
        dVar14 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
        dVar15 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
        dVar16 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        dVar17 = (double)GlobalVectorConstants::Float1110.m128_f32[1];
        dVar18 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        dVar19 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        local_4a8._8_4_ = SUB84(dVar9,0);
        local_4a8._0_8_ = dVar8;
        local_4a8._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
        local_458._8_4_ = SUB84(dVar19,0);
        local_458._0_8_ = dVar18;
        local_458._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
        local_498._8_4_ = SUB84(dVar11,0);
        local_498._0_8_ = dVar10;
        local_498._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
        local_488._8_4_ = SUB84(dVar13,0);
        local_488._0_8_ = dVar12;
        local_488._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
        local_478._8_4_ = SUB84(dVar15,0);
        local_478._0_8_ = dVar14;
        local_478._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
        local_468._8_4_ = SUB84(dVar17,0);
        local_468._0_8_ = dVar16;
        local_468._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
        URigHierarchy::GetActiveParent
                  ((URigHierarchy *)plVar24[0x67],&local_538,(FRigElementKey *)&pFVar4->field_0x10,
                   true);
        pFVar30 = URigHierarchy::GetDefaultParentKey(&local_448);
        FVar20.Number = local_538.Name.Number;
        FVar20.ComparisonIndex.Value = local_538.Name.ComparisonIndex.Value;
        if ((FVar20 != pFVar30->Name) || (local_538.Type != pFVar30->Type)) {
          pUVar5 = (URigHierarchy *)plVar24[0x67];
          local_518.Type = pFVar4->field_0x10;
          local_518._1_3_ = *(undefined3 *)&pFVar4->field_0x11;
          local_518.Name.ComparisonIndex.Value = *(uint *)&pFVar4->field_0x14;
          local_518.Name.Number = *(uint *)&pFVar4->field_0x18;
          iVar29 = URigHierarchy::GetIndex(pUVar5,&local_518,true);
          URigHierarchy::GetGlobalTransformByIndex(pUVar5,&local_318,iVar29,false);
          dVar19 = local_318.Scale3D.ZW.m128d_f64[1];
          dVar18 = local_318.Scale3D.ZW.m128d_f64[0];
          dVar17 = local_318.Scale3D.XY.m128d_f64[1];
          dVar16 = local_318.Scale3D.XY.m128d_f64[0];
          dVar15 = local_318.Translation.ZW.m128d_f64[1];
          dVar14 = local_318.Translation.ZW.m128d_f64[0];
          dVar13 = local_318.Translation.XY.m128d_f64[1];
          dVar12 = local_318.Translation.XY.m128d_f64[0];
          dVar11 = local_318.Rotation.ZW.m128d_f64[1];
          dVar10 = local_318.Rotation.ZW.m128d_f64[0];
          dVar9 = local_318.Rotation.XY.m128d_f64[1];
          dVar8 = local_318.Rotation.XY.m128d_f64[0];
          local_508.Type = pFVar4->field_0x10;
          local_508._1_3_ = *(undefined3 *)&pFVar4->field_0x11;
          local_508.Name.ComparisonIndex.Value = *(uint *)&pFVar4->field_0x14;
          local_508.Name.Number = *(uint *)&pFVar4->field_0x18;
          local_4a8._8_8_ = local_318.Rotation.XY.m128d_f64[1];
          local_4a8._0_8_ = local_318.Rotation.XY.m128d_f64[0];
          local_498._8_8_ = local_318.Rotation.ZW.m128d_f64[1];
          local_498._0_8_ = local_318.Rotation.ZW.m128d_f64[0];
          local_488._8_8_ = local_318.Translation.XY.m128d_f64[1];
          local_488._0_8_ = local_318.Translation.XY.m128d_f64[0];
          local_478._8_8_ = local_318.Translation.ZW.m128d_f64[1];
          local_478._0_8_ = local_318.Translation.ZW.m128d_f64[0];
          local_468._8_8_ = local_318.Scale3D.XY.m128d_f64[1];
          local_468._0_8_ = local_318.Scale3D.XY.m128d_f64[0];
          local_458._8_8_ = local_318.Scale3D.ZW.m128d_f64[1];
          local_458._0_8_ = local_318.Scale3D.ZW.m128d_f64[0];
          URigHierarchy::SwitchToDefaultParent((URigHierarchy *)plVar24[0x67],&local_508,false,true)
          ;
          pUVar5 = (URigHierarchy *)plVar24[0x67];
          local_4f8.Type = pFVar4->field_0x10;
          local_4f8._1_3_ = *(undefined3 *)&pFVar4->field_0x11;
          local_4f8.Name.ComparisonIndex.Value = *(uint *)&pFVar4->field_0x14;
          local_4f8.Name.Number = *(uint *)&pFVar4->field_0x18;
          iVar29 = URigHierarchy::GetIndex(pUVar5,&local_4f8,true);
          local_438.Rotation.XY.m128d_f64[0] = dVar8;
          local_438.Rotation.XY.m128d_f64[1] = dVar9;
          local_438.Rotation.ZW.m128d_f64[0] = dVar10;
          local_438.Rotation.ZW.m128d_f64[1] = dVar11;
          local_438.Translation.XY.m128d_f64[0] = dVar12;
          local_438.Translation.XY.m128d_f64[1] = dVar13;
          local_438.Translation.ZW.m128d_f64[0] = dVar14;
          local_438.Translation.ZW.m128d_f64[1] = dVar15;
          local_438.Scale3D.XY.m128d_f64[0] = dVar16;
          local_438.Scale3D.XY.m128d_f64[1] = dVar17;
          local_438.Scale3D.ZW.m128d_f64[0] = dVar18;
          local_438.Scale3D.ZW.m128d_f64[1] = dVar19;
          URigHierarchy::SetGlobalTransformByIndex(pUVar5,iVar29,&local_438,false,true,false,false);
          (**(code **)(*plVar24 + 0x2d0))(plVar24);
          bVar26 = true;
        }
        FRigControlCopy::FRigControlCopy(&local_2b8,pFVar4,(URigHierarchy *)plVar24[0x67]);
        pFVar6 = (FRigControlCopy *)(this->CopyOfControls).AllocatorInstance.Data;
        if (((pFVar6 <= &local_2b8) && (&local_2b8 < pFVar6 + (this->CopyOfControls).ArrayMax)) &&
           (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar27)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar29 = *piVar1;
        piVar2 = &(this->CopyOfControls).ArrayMax;
        if (iVar29 == *piVar2) {
          iVar29 = UE::Core::Private::
                   ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x220,0x10,(ForAnyElementType *)this,piVar2);
        }
        *piVar1 = iVar29 + 1;
        lVar33 = 4;
        pFVar6 = &local_2b8;
        pFVar25 = (FName *)((this->CopyOfControls).AllocatorInstance.Data + (longlong)iVar29 * 0x220
                           );
        do {
          pFVar34 = pFVar25;
          pFVar31 = pFVar6;
          pFVar25 = pFVar34 + 0x10;
          FVar20 = *(FName *)&pFVar31->ControlType;
          *pFVar34 = pFVar31->Name;
          pFVar34[1] = FVar20;
          fVar21 = (pFVar31->Value).FloatStorage.Float00;
          fVar22 = (pFVar31->Value).FloatStorage.Float01;
          pFVar34[2] = (pFVar31->ParentKey).Name;
          pFVar34[3].ComparisonIndex = (FNameEntryId)fVar21;
          pFVar34[3].Number = (uint)fVar22;
          fVar21 = (pFVar31->Value).FloatStorage.Float03;
          fVar22 = (pFVar31->Value).FloatStorage.Float10;
          fVar23 = (pFVar31->Value).FloatStorage.Float11;
          pFVar34[4].ComparisonIndex = (FNameEntryId)(pFVar31->Value).FloatStorage.Float02;
          pFVar34[4].Number = (uint)fVar21;
          pFVar34[5].ComparisonIndex = (FNameEntryId)fVar22;
          pFVar34[5].Number = (uint)fVar23;
          fVar21 = (pFVar31->Value).FloatStorage.Float13;
          fVar22 = (pFVar31->Value).FloatStorage.Float20;
          fVar23 = (pFVar31->Value).FloatStorage.Float21;
          pFVar34[6].ComparisonIndex = (FNameEntryId)(pFVar31->Value).FloatStorage.Float12;
          pFVar34[6].Number = (uint)fVar21;
          pFVar34[7].ComparisonIndex = (FNameEntryId)fVar22;
          pFVar34[7].Number = (uint)fVar23;
          fVar21 = (pFVar31->Value).FloatStorage.Float23;
          fVar22 = (pFVar31->Value).FloatStorage.Float30;
          fVar23 = (pFVar31->Value).FloatStorage.Float31;
          pFVar34[8].ComparisonIndex = (FNameEntryId)(pFVar31->Value).FloatStorage.Float22;
          pFVar34[8].Number = (uint)fVar21;
          pFVar34[9].ComparisonIndex = (FNameEntryId)fVar22;
          pFVar34[9].Number = (uint)fVar23;
          fVar21 = (pFVar31->Value).FloatStorage.Float33;
          fVar22 = (pFVar31->Value).FloatStorage.Float00_2;
          fVar23 = (pFVar31->Value).FloatStorage.Float01_2;
          pFVar34[10].ComparisonIndex = (FNameEntryId)(pFVar31->Value).FloatStorage.Float32;
          pFVar34[10].Number = (uint)fVar21;
          pFVar34[0xb].ComparisonIndex = (FNameEntryId)fVar22;
          pFVar34[0xb].Number = (uint)fVar23;
          fVar21 = (pFVar31->Value).FloatStorage.Float03_2;
          fVar22 = (pFVar31->Value).FloatStorage.Float10_2;
          fVar23 = (pFVar31->Value).FloatStorage.Float11_2;
          pFVar34[0xc].ComparisonIndex = (FNameEntryId)(pFVar31->Value).FloatStorage.Float02_2;
          pFVar34[0xc].Number = (uint)fVar21;
          pFVar34[0xd].ComparisonIndex = (FNameEntryId)fVar22;
          pFVar34[0xd].Number = (uint)fVar23;
          fVar21 = (pFVar31->Value).FloatStorage.Float13_2;
          fVar22 = (pFVar31->Value).FloatStorage.Float20_2;
          fVar23 = (pFVar31->Value).FloatStorage.Float21_2;
          pFVar34[0xe].ComparisonIndex = (FNameEntryId)(pFVar31->Value).FloatStorage.Float12_2;
          pFVar34[0xe].Number = (uint)fVar21;
          pFVar34[0xf].ComparisonIndex = (FNameEntryId)fVar22;
          pFVar34[0xf].Number = (uint)fVar23;
          lVar33 = lVar33 + -1;
          pFVar6 = (FRigControlCopy *)&(pFVar31->Value).FloatStorage.Float22_2;
        } while (lVar33 != 0);
        fVar21 = (pFVar31->Value).FloatStorage.Float23_2;
        fVar22 = (pFVar31->Value).FloatStorage.Float30_2;
        fVar23 = (pFVar31->Value).FloatStorage.Float31_2;
        pFVar25->ComparisonIndex = (FNameEntryId)(pFVar31->Value).FloatStorage.Float22_2;
        pFVar25->Number = (uint)fVar21;
        pFVar34[0x11].ComparisonIndex = (FNameEntryId)fVar22;
        pFVar34[0x11].Number = (uint)fVar23;
        fVar21 = (pFVar31->Value).FloatStorage.Float33_2;
        FVar20 = *(FName *)&(pFVar31->Value).FloatStorage.bValid;
        pFVar34[0x12].ComparisonIndex = (FNameEntryId)(pFVar31->Value).FloatStorage.Float32_2;
        pFVar34[0x12].Number = (uint)fVar21;
        pFVar34[0x13] = FVar20;
        puVar36 = local_528;
        if (bVar26) {
          local_4b8.bInteractiveDialogEnabled = false;
          local_4b8._9_7_ = 0;
          local_4b8._padding_ = (longlong)&___7FEmptyRigDependenciesProvider__6B_;
          local_4d8.Type = pFVar4->field_0x10;
          local_4d8._1_3_ = *(undefined3 *)&pFVar4->field_0x11;
          local_4d8.Name.ComparisonIndex.Value = *(uint *)&pFVar4->field_0x14;
          local_4e8.Name.Number = local_538.Name.Number;
          local_4d8.Name.Number = *(uint *)&pFVar4->field_0x18;
          URigHierarchy::SwitchToParent
                    ((URigHierarchy *)plVar24[0x67],&local_4d8,&local_4e8,false,true,&local_4b8,
                     (FString *)0x0);
          pUVar5 = (URigHierarchy *)plVar24[0x67];
          local_4c8.Type = pFVar4->field_0x10;
          local_4c8._1_3_ = *(undefined3 *)&pFVar4->field_0x11;
          local_4c8.Name.ComparisonIndex.Value = *(uint *)&pFVar4->field_0x14;
          local_4c8.Name.Number = *(uint *)&pFVar4->field_0x18;
          iVar29 = URigHierarchy::GetIndex(pUVar5,&local_4c8,true);
          local_3d8.Rotation.XY.m128d_f64[1]._0_4_ = SUB84(dVar9,0);
          local_3d8.Rotation.XY.m128d_f64[0] = dVar8;
          local_3d8.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar9 >> 0x20);
          local_3d8.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar11,0);
          local_3d8.Rotation.ZW.m128d_f64[0] = dVar10;
          local_3d8.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar11 >> 0x20);
          local_3d8.Translation.XY.m128d_f64[1]._0_4_ = SUB84(dVar13,0);
          local_3d8.Translation.XY.m128d_f64[0] = dVar12;
          local_3d8.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar13 >> 0x20);
          local_3d8.Translation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar15,0);
          local_3d8.Translation.ZW.m128d_f64[0] = dVar14;
          local_3d8.Translation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar15 >> 0x20);
          local_3d8.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84(dVar17,0);
          local_3d8.Scale3D.XY.m128d_f64[0] = dVar16;
          local_3d8.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar17 >> 0x20);
          local_3d8.Scale3D.ZW.m128d_f64[1]._0_4_ = SUB84(dVar19,0);
          local_3d8.Scale3D.ZW.m128d_f64[0] = dVar18;
          local_3d8.Scale3D.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar19 >> 0x20);
          URigHierarchy::SetGlobalTransformByIndex(pUVar5,iVar29,&local_3d8,false,true,false,false);
          puVar36 = local_528;
        }
      }
      uVar32 = local_540 & 0xffffffff;
      puVar37 = puVar37 + 1;
      uVar35 = (ulonglong)local_554;
    }
    FControlRigControlPose::SetUpControlMap(this);
    if (local_548 != (undefined8 *)0x0) {
      FMemory::Free(local_548);
    }
  }
  local_320 = 0;
  if (local_328 != (void *)0x0) {
    FMemory::Free(local_328);
  }
  bVar26 = local_360._4_4_ != 0;
  local_360 = (ulonglong)local_360._4_4_ << 0x20;
  if (bVar26) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,&local_368,0,(int *)((longlong)&local_360 + 4));
  }
  local_334 = 0;
  local_358.NumBits = 0;
  local_338 = 0xffffffff;
  if (0x80 < (uint)local_358.MaxBits) {
    local_358.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_358,0);
  }
  if (local_358.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_358.AllocatorInstance.SecondaryData);
  }
  if (local_368.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_368.Data);
  }
  if ((FScriptContainerElement *)local_378._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_378._0_8_);
  }
  return;
}

// execPastePose @ 14a469870

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl UControlRigPoseAsset::execPastePose(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  URigHierarchy *pUVar3;
  FName FVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  FName FVar18;
  FName FVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  uint uVar23;
  int *piVar24;
  UControlRig *this;
  UObject *pUVar25;
  char cVar26;
  bool bVar27;
  int iVar28;
  uint uVar29;
  FRigControlCopy *pFVar30;
  FRigElementKey *pFVar31;
  FMatchedControls *pFVar32;
  FName *pFVar33;
  FRigControlCopy *pFVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  longlong lVar37;
  FName *pFVar38;
  FControlRigControlPose *pFVar39;
  int iVar40;
  ulonglong *puVar41;
  FRigControlCopy *pFVar42;
  longlong *plVar43;
  bool bVar44;
  bool bVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined1 auStackY_d88 [32];
  FControlRigPoseMirrorTable local_d37;
  FControlRigPoseMirrorTable local_d36;
  bool local_d35;
  undefined1 local_d34;
  bool local_d33;
  uint local_d30;
  undefined1 local_d2c;
  undefined1 local_d2b [3];
  int local_d28;
  int local_d24;
  int local_d20 [2];
  TPairInitializer<FName_const_&,int_const_&> local_d18;
  FRigControlModifiedContext local_d08;
  FRigControlModifiedContext local_cf0;
  UControlRig *local_cd8;
  longlong *local_cd0;
  ulonglong local_cc8;
  FRigControlCopy *local_cc0;
  ulonglong local_cb8;
  FRigControlCopy *local_cb0;
  ulonglong local_ca8;
  FRigElementKey local_ca0;
  FRigElementKey local_c90;
  FRigElementKey local_c80 [2];
  FRigElementKey local_c68;
  FRigElementKey local_c58;
  FRigElementKey local_c48;
  FRigElementKey local_c38;
  FRigElementKey local_c28;
  FRigElementKey local_c18;
  FRigElementKey local_c08;
  FRigElementKey local_bf8;
  FRigElementKey local_be8;
  FRigElementKey local_bd8;
  UObject *local_bc8;
  FRigElementKey local_bb8;
  FRigElementKey local_ba8;
  FRigElementKey local_b98;
  FRigElementKey local_b88;
  IRigDependenciesProvider local_b78;
  IRigDependenciesProvider local_b68;
  IRigDependenciesProvider local_b58;
  FScriptContainerElement *local_b48;
  uint *local_b40;
  undefined1 local_b38 [16];
  undefined1 local_b28 [16];
  undefined1 local_b18 [16];
  undefined1 local_b08 [16];
  undefined1 local_af8 [16];
  undefined1 local_ae8 [16];
  ulonglong local_ad8;
  ulonglong uStack_ad0;
  undefined8 local_ac8;
  undefined8 uStack_ac0;
  undefined8 local_ab8;
  undefined8 uStack_ab0;
  undefined8 local_aa8;
  undefined8 uStack_aa0;
  undefined8 local_a98;
  undefined8 uStack_a90;
  undefined8 local_a88;
  undefined8 uStack_a80;
  undefined8 local_a78;
  undefined8 uStack_a70;
  undefined8 local_a68;
  undefined8 uStack_a60;
  undefined4 local_a58;
  ulonglong local_a54;
  ulonglong uStack_a4c;
  undefined8 local_a44;
  undefined8 uStack_a3c;
  undefined8 local_a34;
  undefined8 uStack_a2c;
  undefined8 local_a24;
  undefined8 uStack_a1c;
  undefined8 local_a14;
  undefined8 uStack_a0c;
  undefined8 local_a04;
  undefined8 uStack_9fc;
  undefined8 local_9f4;
  undefined8 uStack_9ec;
  undefined8 local_9e4;
  undefined8 uStack_9dc;
  undefined4 local_9d4;
  ulonglong local_9d0 [16];
  undefined4 local_950;
  ulonglong local_94c [16];
  undefined4 local_8cc;
  ulonglong local_8c8 [16];
  undefined4 local_848;
  ulonglong local_844 [16];
  undefined4 local_7c4;
  ulonglong local_7c0 [16];
  undefined4 local_740;
  ulonglong local_73c [16];
  undefined4 local_6bc;
  FRigElementKey local_6b8;
  FRigElementKey local_6ac;
  FRigElementKey local_6a0 [2];
  TTransform<double> local_688;
  TTransform<double> local_628;
  undefined1 local_5c8 [16];
  undefined1 local_5b8 [32];
  void *local_598;
  undefined4 local_590;
  uint local_58c;
  undefined4 local_588;
  int local_584;
  ForElementType<FSetElementId> local_578;
  int local_570;
  TTransform<double> local_568;
  TTransform<double> local_508;
  TTransform<double> local_4a8;
  TTransform<double> local_448;
  TTransform<double> local_3e8;
  TTransform<double> local_388;
  TTransform<double> local_328;
  FRigControlCopy local_2c8;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_d88;
  local_cd8 = (UControlRig *)0x0;
  local_bc8 = param_1;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_cd8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_cd8);
  }
  local_d28 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d28,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d28);
  }
  bVar44 = local_d28 != 0;
  local_d24 = 0;
  local_d35 = bVar44;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d24,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d24);
  }
  bVar45 = local_d24 != 0;
  local_d20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_d20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_d20);
  }
  this = local_cd8;
  local_d33 = local_d20[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_cd8 == (UControlRig *)0x0) {
    return;
  }
  if (!local_d33) {
    pFVar39 = (FControlRigControlPose *)(param_1 + 1);
    local_d08.KeyMask = 0x1ff;
    local_d08.LocalTime = 3.4028235e+38;
    local_d08.EventName.ComparisonIndex.Value = 0;
    local_d08.EventName.Number = 0;
    local_d08.bConstraintUpdate = false;
    local_cd0 = (longlong *)0x0;
    local_cc8 = 0;
    local_d18.Key = (FName *)pFVar39;
    local_d08.SetKey = bVar44;
    (**(code **)(local_cd8->_padding_ + 0x420))(local_cd8,&local_cd0);
    uVar35 = (ulonglong)(int)(uint)local_cc8;
    local_d30 = (uint)local_cc8;
    local_d18.Value = (int *)(local_cd0 + uVar35);
    uVar36 = uVar35;
    plVar43 = local_cd0;
    while( true ) {
      piVar24 = local_d18.Value;
      if ((int)uVar35 != (int)uVar36) {
        `TCheckedPointerIterator<FRigControlElement_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_d2c);
      }
      if (plVar43 == (longlong *)piVar24) break;
      lVar37 = *plVar43;
      cVar26 = (**(code **)(this->_padding_ + 0x440))(this,lVar37 + 0x14);
      if ((cVar26 == '\0') ||
         (pFVar30 = FControlRigPoseMirrorTable::GetControl
                              (&local_d37,this,pFVar39,*(FName *)(lVar37 + 0x14),bVar45),
         pFVar39 = (FControlRigControlPose *)local_d18.Key, pFVar30 == (FRigControlCopy *)0x0))
      goto LAB_14a469f41;
      bVar44 = false;
      URigHierarchy::GetActiveParent
                ((this->DynamicHierarchy).field0_0x0.DebugPtr,&local_c90,
                 (FRigElementKey *)(lVar37 + 0x10),true);
      pFVar31 = URigHierarchy::GetDefaultParentKey(&local_6ac);
      FVar4.Number = local_c90.Name.Number;
      FVar4.ComparisonIndex.Value = local_c90.Name.ComparisonIndex.Value;
      if ((FVar4 != pFVar31->Name) || (local_c90.Type != pFVar31->Type)) {
        local_bb8._0_8_ = *(undefined8 *)(lVar37 + 0x10);
        local_bb8.Name.Number = *(uint *)(lVar37 + 0x18);
        bVar44 = true;
        URigHierarchy::SwitchToDefaultParent
                  ((this->DynamicHierarchy).field0_0x0.DebugPtr,&local_bb8,false,true);
        (**(code **)(this->_padding_ + 0x2d0))(this);
      }
      switch(*(undefined1 *)(lVar37 + 0x231)) {
      case 0:
        puVar41 = local_94c;
        local_94c[1] = 0;
        local_94c[0] = (ulonglong)*(byte *)&(pFVar30->Value).FloatStorage.Float00;
        local_94c[2] = 0;
        local_94c[3] = 0;
        local_8cc = 1;
        local_94c[4] = 0;
        local_94c[5] = 0;
        local_94c[6] = 0;
        local_94c[7] = 0;
        local_94c[8] = 0;
        local_94c[9] = 0;
        local_94c[10] = 0;
        local_94c[0xb] = 0;
        local_94c[0xc] = 0;
        local_94c[0xd] = 0;
        local_94c[0xe] = 0;
        local_94c[0xf] = 0;
        break;
      case 1:
      case 10:
        puVar41 = local_9d0;
        local_9d0[1] = 0;
        local_9d0[2] = 0;
        local_9d0[3] = 0;
        local_9d0[4] = 0;
        local_9d0[5] = 0;
        local_950 = 1;
        local_9d0[6] = 0;
        local_9d0[7] = 0;
        local_9d0[8] = 0;
        local_9d0[9] = 0;
        local_9d0[10] = 0;
        local_9d0[0xb] = 0;
        local_9d0[0xc] = 0;
        local_9d0[0xd] = 0;
        local_9d0[0xe] = 0;
        local_9d0[0xf] = 0;
        local_9d0[0] = (ulonglong)(uint)(pFVar30->Value).FloatStorage.Float00;
        break;
      case 2:
        puVar41 = local_8c8;
        local_8c8[1] = 0;
        local_8c8[0] = (ulonglong)(uint)(pFVar30->Value).FloatStorage.Float00;
        local_8c8[2] = 0;
        local_8c8[3] = 0;
        local_848 = 1;
        local_8c8[4] = 0;
        local_8c8[5] = 0;
        local_8c8[6] = 0;
        local_8c8[7] = 0;
        local_8c8[8] = 0;
        local_8c8[9] = 0;
        local_8c8[10] = 0;
        local_8c8[0xb] = 0;
        local_8c8[0xc] = 0;
        local_8c8[0xd] = 0;
        local_8c8[0xe] = 0;
        local_8c8[0xf] = 0;
        break;
      case 3:
        puVar41 = &local_ad8;
        local_ac8 = 0;
        uStack_ac0 = 0;
        local_a58 = 1;
        local_ab8 = 0;
        uStack_ab0 = 0;
        uStack_ad0 = (ulonglong)(uint)(pFVar30->Value).FloatStorage.Float02;
        local_aa8 = 0;
        uStack_aa0 = 0;
        local_a98 = 0;
        uStack_a90 = 0;
        local_a88 = 0;
        uStack_a80 = 0;
        local_a78 = 0;
        uStack_a70 = 0;
        local_a68 = 0;
        uStack_a60 = 0;
        local_ad8._0_4_ = (pFVar30->Value).FloatStorage.Float00;
        local_ad8._4_4_ = (pFVar30->Value).FloatStorage.Float01;
        break;
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
        if (bVar45) {
          uVar48 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          uVar49 = (undefined4)
                   ((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
          local_568.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_568.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
          local_568.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_568.Translation.XY.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[1];
          local_568.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_568.Translation.ZW.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[3];
          local_568.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_568.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
          uVar46 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
          uVar47 = (undefined4)
                   ((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
          local_4a8.Rotation.XY.m128d_f64[1]._0_4_ = uVar48;
          local_4a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_4a8.Rotation.XY.m128d_f64[1]._4_4_ = uVar49;
          local_4a8.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar46;
          local_4a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_4a8.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar47;
          local_568.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar46;
          local_568.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_568.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar47;
          local_568.Rotation.XY.m128d_f64[1]._0_4_ = uVar48;
          local_568.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_568.Rotation.XY.m128d_f64[1]._4_4_ = uVar49;
          local_4a8.Rotation.ZW.m128d_f64[0] = local_568.Rotation.ZW.m128d_f64[0];
          local_4a8.Rotation.ZW.m128d_f64[1] = local_568.Rotation.ZW.m128d_f64[1];
          local_4a8.Translation.XY.m128d_f64[0] = local_568.Translation.XY.m128d_f64[0];
          local_4a8.Translation.XY.m128d_f64[1] = local_568.Translation.XY.m128d_f64[1];
          local_4a8.Translation.ZW.m128d_f64[0] = local_568.Translation.ZW.m128d_f64[0];
          local_4a8.Translation.ZW.m128d_f64[1] = local_568.Translation.ZW.m128d_f64[1];
          local_4a8.Scale3D.XY.m128d_f64[0] = local_568.Scale3D.XY.m128d_f64[0];
          local_4a8.Scale3D.XY.m128d_f64[1] = local_568.Scale3D.XY.m128d_f64[1];
          FControlRigPoseMirrorTable::SetUpMirrorTable(&local_d37,this);
          pFVar32 = TMapBase<UControlRig_const_*,FControlRigPoseMirrorTable::FMatchedControls,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UControlRig_const_*,FControlRigPoseMirrorTable::FMatchedControls,0>_>
                    ::Find((TMapBase<UControlRig_const_*,FControlRigPoseMirrorTable::FMatchedControls,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UControlRig_const_*,FControlRigPoseMirrorTable::FMatchedControls,0>_>
                            *)&FControlRigPoseMirrorTable::MatchedControls,this);
          if (((pFVar32 == (FMatchedControls *)0x0) ||
              (*(int *)&(pFVar32->Match).field_0x8 - *(int *)&(pFVar32->Match).field_0x34 < 1)) ||
             (pFVar33 = TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                        ::Find((TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                                *)pFVar32,pFVar30->Name), pFVar33 == (FName *)0x0)) {
            bVar27 = false;
          }
          else {
            bVar27 = true;
          }
          FControlRigPoseMirrorTable::GetMirrorTransform
                    (&local_d37,pFVar30,true,bVar27,&local_4a8,&local_568);
          (**(code **)(this->_padding_ + 0x400))(this,lVar37 + 0x14,&local_568);
        }
        else {
          (**(code **)(this->_padding_ + 0x400))(this,lVar37 + 0x14,&pFVar30->LocalTransform);
        }
      default:
        goto switchD_14a469b30_default;
      }
      (**(code **)(this->_padding_ + 0x3f0))(this,lVar37 + 0x14,puVar41);
switchD_14a469b30_default:
      pFVar39 = (FControlRigControlPose *)local_d18.Key;
      if (bVar44) {
        pUVar3 = (this->DynamicHierarchy).field0_0x0.DebugPtr;
        local_ba8._0_8_ = *(undefined8 *)(lVar37 + 0x10);
        local_ba8.Name.Number = *(uint *)(lVar37 + 0x18);
        iVar28 = URigHierarchy::GetIndex(pUVar3,&local_ba8,true);
        URigHierarchy::GetGlobalTransformByIndex(pUVar3,&local_388,iVar28,false);
        local_b78.bInteractiveDialogEnabled = false;
        local_b78._9_7_ = 0;
        local_b78._padding_ = (longlong)&___7FEmptyRigDependenciesProvider__6B_;
        local_b88._0_8_ = *(undefined8 *)(lVar37 + 0x10);
        local_b98.Name.Number = local_c90.Name.Number;
        local_b88.Name.Number = *(uint *)(lVar37 + 0x18);
        URigHierarchy::SwitchToParent
                  ((this->DynamicHierarchy).field0_0x0.DebugPtr,&local_b88,&local_b98,false,true,
                   &local_b78,(FString *)0x0);
        UControlRig::SetControlGlobalTransform
                  (this,(FName *)(lVar37 + 0x14),&local_388,true,&local_d08,false,false,true);
        pFVar39 = (FControlRigControlPose *)local_d18.Key;
      }
LAB_14a469f41:
      uVar35 = local_cc8 & 0xffffffff;
      plVar43 = plVar43 + 1;
      uVar36 = (ulonglong)local_d30;
    }
    if (local_cd0 != (longlong *)0x0) {
      FMemory::Free(local_cd0);
    }
    (**(code **)(this->_padding_ + 0x2d0))(this);
    local_cf0.KeyMask = 0x1ff;
    local_cf0.EventName.Number = 0;
    local_cf0.bConstraintUpdate = false;
    local_cc0 = (FRigControlCopy *)0x0;
    local_cb8 = 0;
    local_cf0.LocalTime = 3.4028235e+38;
    local_cf0.EventName.ComparisonIndex.Value = 0;
    local_cf0.SetKey = local_d35;
    (**(code **)(this->_padding_ + 0x420))(this,&local_cc0);
    uVar35 = (ulonglong)(int)(uint)local_cb8;
    local_d30 = (uint)local_cb8;
    local_d18.Value = (int *)(&local_cc0->Name + uVar35);
    uVar36 = uVar35;
    pFVar42 = local_cc0;
    while( true ) {
      piVar24 = local_d18.Value;
      if ((int)uVar35 != (int)uVar36) {
        `TCheckedPointerIterator<FRigControlElement_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_d2b);
      }
      pFVar30 = local_cc0;
      if (pFVar42 == (FRigControlCopy *)piVar24) break;
      FVar4 = pFVar42->Name;
      cVar26 = (**(code **)(this->_padding_ + 0x440))(this,(longlong)FVar4 + 0x14);
      if ((cVar26 == '\0') ||
         (pFVar30 = FControlRigPoseMirrorTable::GetControl
                              (&local_d36,this,pFVar39,*(FName *)((longlong)FVar4 + 0x14),bVar45),
         pFVar39 = (FControlRigControlPose *)local_d18.Key, pFVar30 == (FRigControlCopy *)0x0))
      goto LAB_14a46a49d;
      bVar44 = false;
      URigHierarchy::GetActiveParent
                ((this->DynamicHierarchy).field0_0x0.DebugPtr,local_c80,
                 (FRigElementKey *)((longlong)FVar4 + 0x10),true);
      pFVar31 = URigHierarchy::GetDefaultParentKey(local_6a0);
      FVar19.Number = local_c80[0].Name.Number;
      FVar19.ComparisonIndex.Value = local_c80[0].Name.ComparisonIndex.Value;
      if ((FVar19 != pFVar31->Name) || (local_c80[0].Type != pFVar31->Type)) {
        local_c68._0_8_ = *(undefined8 *)((longlong)FVar4 + 0x10);
        local_c68.Name.Number = *(uint *)((longlong)FVar4 + 0x18);
        bVar44 = true;
        URigHierarchy::SwitchToDefaultParent
                  ((this->DynamicHierarchy).field0_0x0.DebugPtr,&local_c68,false,true);
        (**(code **)(this->_padding_ + 0x2d0))(this);
      }
      switch(*(undefined1 *)((longlong)FVar4 + 0x231)) {
      case 0:
        puVar41 = local_7c0;
        local_7c0[1] = 0;
        local_7c0[0] = (ulonglong)*(byte *)&(pFVar30->Value).FloatStorage.Float00;
        local_7c0[2] = 0;
        local_7c0[3] = 0;
        local_740 = 1;
        local_7c0[4] = 0;
        local_7c0[5] = 0;
        local_7c0[6] = 0;
        local_7c0[7] = 0;
        local_7c0[8] = 0;
        local_7c0[9] = 0;
        local_7c0[10] = 0;
        local_7c0[0xb] = 0;
        local_7c0[0xc] = 0;
        local_7c0[0xd] = 0;
        local_7c0[0xe] = 0;
        local_7c0[0xf] = 0;
        break;
      case 1:
      case 10:
        puVar41 = local_844;
        local_844[1] = 0;
        local_844[2] = 0;
        local_844[3] = 0;
        local_844[4] = 0;
        local_844[5] = 0;
        local_7c4 = 1;
        local_844[6] = 0;
        local_844[7] = 0;
        local_844[8] = 0;
        local_844[9] = 0;
        local_844[10] = 0;
        local_844[0xb] = 0;
        local_844[0xc] = 0;
        local_844[0xd] = 0;
        local_844[0xe] = 0;
        local_844[0xf] = 0;
        local_844[0] = (ulonglong)(uint)(pFVar30->Value).FloatStorage.Float00;
        break;
      case 2:
        puVar41 = local_73c;
        local_73c[1] = 0;
        local_73c[0] = (ulonglong)(uint)(pFVar30->Value).FloatStorage.Float00;
        local_73c[2] = 0;
        local_73c[3] = 0;
        local_6bc = 1;
        local_73c[4] = 0;
        local_73c[5] = 0;
        local_73c[6] = 0;
        local_73c[7] = 0;
        local_73c[8] = 0;
        local_73c[9] = 0;
        local_73c[10] = 0;
        local_73c[0xb] = 0;
        local_73c[0xc] = 0;
        local_73c[0xd] = 0;
        local_73c[0xe] = 0;
        local_73c[0xf] = 0;
        break;
      case 3:
        puVar41 = &local_a54;
        local_a44 = 0;
        uStack_a3c = 0;
        local_9d4 = 1;
        local_a34 = 0;
        uStack_a2c = 0;
        uStack_a4c = (ulonglong)(uint)(pFVar30->Value).FloatStorage.Float02;
        local_a24 = 0;
        uStack_a1c = 0;
        local_a14 = 0;
        uStack_a0c = 0;
        local_a04 = 0;
        uStack_9fc = 0;
        local_9f4 = 0;
        uStack_9ec = 0;
        local_9e4 = 0;
        uStack_9dc = 0;
        local_a54._0_4_ = (pFVar30->Value).FloatStorage.Float00;
        local_a54._4_4_ = (pFVar30->Value).FloatStorage.Float01;
        break;
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
        if (bVar45) {
          uVar48 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          uVar49 = (undefined4)
                   ((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
          local_508.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_508.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
          local_508.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_508.Translation.XY.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[1];
          local_508.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_508.Translation.ZW.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[3];
          local_508.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_508.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
          uVar46 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
          uVar47 = (undefined4)
                   ((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
          local_448.Rotation.XY.m128d_f64[1]._0_4_ = uVar48;
          local_448.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_448.Rotation.XY.m128d_f64[1]._4_4_ = uVar49;
          local_448.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar46;
          local_448.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_448.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar47;
          local_508.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar46;
          local_508.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_508.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar47;
          local_508.Rotation.XY.m128d_f64[1]._0_4_ = uVar48;
          local_508.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_508.Rotation.XY.m128d_f64[1]._4_4_ = uVar49;
          local_448.Rotation.ZW.m128d_f64[0] = local_508.Rotation.ZW.m128d_f64[0];
          local_448.Rotation.ZW.m128d_f64[1] = local_508.Rotation.ZW.m128d_f64[1];
          local_448.Translation.XY.m128d_f64[0] = local_508.Translation.XY.m128d_f64[0];
          local_448.Translation.XY.m128d_f64[1] = local_508.Translation.XY.m128d_f64[1];
          local_448.Translation.ZW.m128d_f64[0] = local_508.Translation.ZW.m128d_f64[0];
          local_448.Translation.ZW.m128d_f64[1] = local_508.Translation.ZW.m128d_f64[1];
          local_448.Scale3D.XY.m128d_f64[0] = local_508.Scale3D.XY.m128d_f64[0];
          local_448.Scale3D.XY.m128d_f64[1] = local_508.Scale3D.XY.m128d_f64[1];
          FControlRigPoseMirrorTable::SetUpMirrorTable(&local_d36,this);
          pFVar32 = TMapBase<UControlRig_const_*,FControlRigPoseMirrorTable::FMatchedControls,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UControlRig_const_*,FControlRigPoseMirrorTable::FMatchedControls,0>_>
                    ::Find((TMapBase<UControlRig_const_*,FControlRigPoseMirrorTable::FMatchedControls,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UControlRig_const_*,FControlRigPoseMirrorTable::FMatchedControls,0>_>
                            *)&FControlRigPoseMirrorTable::MatchedControls,this);
          if (((pFVar32 == (FMatchedControls *)0x0) ||
              (*(int *)&(pFVar32->Match).field_0x8 - *(int *)&(pFVar32->Match).field_0x34 < 1)) ||
             (pFVar33 = TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                        ::Find((TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                                *)pFVar32,pFVar30->Name), pFVar33 == (FName *)0x0)) {
            bVar27 = false;
          }
          else {
            bVar27 = true;
          }
          FControlRigPoseMirrorTable::GetMirrorTransform
                    (&local_d36,pFVar30,true,bVar27,&local_448,&local_508);
          (**(code **)(this->_padding_ + 0x400))(this,(longlong)FVar4 + 0x14,&local_508);
        }
        else {
          (**(code **)(this->_padding_ + 0x400))
                    (this,(longlong)FVar4 + 0x14,&pFVar30->LocalTransform);
        }
      default:
        goto switchD_14a46a0a7_default;
      }
      (**(code **)(this->_padding_ + 0x3f0))(this,(longlong)FVar4 + 0x14,puVar41);
switchD_14a46a0a7_default:
      pFVar39 = (FControlRigControlPose *)local_d18.Key;
      if (bVar44) {
        pUVar3 = (this->DynamicHierarchy).field0_0x0.DebugPtr;
        local_c58._0_8_ = *(undefined8 *)((longlong)FVar4 + 0x10);
        local_c58.Name.Number = *(uint *)((longlong)FVar4 + 0x18);
        iVar28 = URigHierarchy::GetIndex(pUVar3,&local_c58,true);
        URigHierarchy::GetGlobalTransformByIndex(pUVar3,&local_328,iVar28,false);
        local_b68.bInteractiveDialogEnabled = false;
        local_b68._9_7_ = 0;
        local_b68._padding_ = (longlong)&___7FEmptyRigDependenciesProvider__6B_;
        local_c38._0_8_ = *(undefined8 *)((longlong)FVar4 + 0x10);
        local_c48.Name.Number = local_c80[0].Name.Number;
        local_c38.Name.Number = *(uint *)((longlong)FVar4 + 0x18);
        URigHierarchy::SwitchToParent
                  ((this->DynamicHierarchy).field0_0x0.DebugPtr,&local_c38,&local_c48,false,true,
                   &local_b68,(FString *)0x0);
        UControlRig::SetControlGlobalTransform
                  (this,(FName *)((longlong)FVar4 + 0x14),&local_328,true,&local_cf0,false,false,
                   true);
        pFVar39 = (FControlRigControlPose *)local_d18.Key;
      }
LAB_14a46a49d:
      uVar35 = local_cb8 & 0xffffffff;
      pFVar42 = (FRigControlCopy *)&pFVar42->ControlType;
      uVar36 = (ulonglong)local_d30;
    }
    goto LAB_14a46ad4d;
  }
  local_58c = 0x80;
  local_5c8._0_8_ = (FRigControlCopy *)0x0;
  local_5c8._8_4_ = 0;
  local_5c8._12_4_ = 0;
  local_5b8._0_8_ = (FScriptContainerElement *)0x0;
  local_5b8._8_8_ = 0;
  local_598 = (void *)0x0;
  local_590 = 0;
  local_584 = 0;
  local_578 = (ForElementType<FSetElementId>)0x0;
  local_570 = 0;
  local_cb0 = (FRigControlCopy *)0x0;
  local_ca8 = 0;
  local_588 = 0xffffffff;
  (**(code **)(local_cd8->_padding_ + 0x420))(local_cd8,&local_cb0);
  if ((int)local_5c8._8_4_ < 0) {
    iVar40 = -local_5c8._8_4_;
    iVar28 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x220,0x10,iVar40,(ForAnyElementType *)local_5c8,(int *)(local_5c8 + 8),
                        (int *)(local_5c8 + 0xc));
    DefaultConstructItems<FRigControlCopy,int>
              ((FScriptContainerElement *)(local_5c8._0_8_ + (longlong)iVar28 * 0x220),iVar40);
LAB_14a46a5a4:
  }
  else if (0 < (int)local_5c8._8_4_) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x220,0x10,(ForAnyElementType *)local_5c8,0,(int *)(local_5c8 + 0xc));
    goto LAB_14a46a5a4;
  }
  iVar28 = (int)local_ca8;
  uVar36 = (ulonglong)(int)local_ca8;
  pFVar30 = (FRigControlCopy *)(&local_cb0->Name + uVar36);
  pFVar42 = local_cb0;
  iVar40 = local_5c8._8_4_;
  local_d18.Value = (int *)pFVar30;
  while( true ) {
    if ((int)uVar36 != iVar28) {
      local_d34 = 0;
      `TCheckedPointerIterator<FRigControlElement_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_d34);
      iVar40 = local_5c8._8_4_;
    }
    if (pFVar42 == pFVar30) break;
    FVar4 = pFVar42->Name;
    bVar44 = URigHierarchy::IsAnimatable
                       ((this->DynamicHierarchy).field0_0x0.DebugPtr,(FRigControlElement *)FVar4);
    if (bVar44) {
      dVar6 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      dVar7 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      bVar44 = false;
      dVar8 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      dVar9 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      dVar10 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      dVar11 = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
      dVar12 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      dVar13 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      dVar14 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      dVar15 = (double)GlobalVectorConstants::Float1110.m128_f32[1];
      dVar16 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      dVar17 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      local_b38._8_4_ = SUB84(dVar7,0);
      local_b38._0_8_ = dVar6;
      local_b38._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
      local_ae8._8_4_ = SUB84(dVar17,0);
      local_ae8._0_8_ = dVar16;
      local_ae8._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
      local_b28._8_4_ = SUB84(dVar9,0);
      local_b28._0_8_ = dVar8;
      local_b28._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
      local_b18._8_4_ = SUB84(dVar11,0);
      local_b18._0_8_ = dVar10;
      local_b18._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
      local_b08._8_4_ = SUB84(dVar13,0);
      local_b08._0_8_ = dVar12;
      local_b08._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
      local_af8._8_4_ = SUB84(dVar15,0);
      local_af8._0_8_ = dVar14;
      local_af8._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
      URigHierarchy::GetActiveParent
                ((this->DynamicHierarchy).field0_0x0.DebugPtr,&local_ca0,
                 (FRigElementKey *)((longlong)FVar4 + 0x10),true);
      pFVar31 = URigHierarchy::GetDefaultParentKey(&local_6b8);
      FVar18.Number = local_ca0.Name.Number;
      FVar18.ComparisonIndex.Value = local_ca0.Name.ComparisonIndex.Value;
      if ((FVar18 != pFVar31->Name) || (local_ca0.Type != pFVar31->Type)) {
        pUVar3 = (this->DynamicHierarchy).field0_0x0.DebugPtr;
        local_c28._0_8_ = *(undefined8 *)((longlong)FVar4 + 0x10);
        bVar44 = true;
        local_c28.Name.Number = *(uint *)((longlong)FVar4 + 0x18);
        iVar40 = URigHierarchy::GetIndex(pUVar3,&local_c28,true);
        URigHierarchy::GetGlobalTransformByIndex(pUVar3,&local_3e8,iVar40,false);
        dVar17 = local_3e8.Scale3D.ZW.m128d_f64[1];
        dVar16 = local_3e8.Scale3D.ZW.m128d_f64[0];
        dVar15 = local_3e8.Scale3D.XY.m128d_f64[1];
        dVar14 = local_3e8.Scale3D.XY.m128d_f64[0];
        dVar13 = local_3e8.Translation.ZW.m128d_f64[1];
        dVar12 = local_3e8.Translation.ZW.m128d_f64[0];
        dVar11 = local_3e8.Translation.XY.m128d_f64[1];
        dVar10 = local_3e8.Translation.XY.m128d_f64[0];
        dVar9 = local_3e8.Rotation.ZW.m128d_f64[1];
        dVar8 = local_3e8.Rotation.ZW.m128d_f64[0];
        dVar7 = local_3e8.Rotation.XY.m128d_f64[1];
        dVar6 = local_3e8.Rotation.XY.m128d_f64[0];
        local_c18._0_8_ = *(undefined8 *)((longlong)FVar4 + 0x10);
        local_c18.Name.Number = *(uint *)((longlong)FVar4 + 0x18);
        local_b38._8_8_ = local_3e8.Rotation.XY.m128d_f64[1];
        local_b38._0_8_ = local_3e8.Rotation.XY.m128d_f64[0];
        local_b28._8_8_ = local_3e8.Rotation.ZW.m128d_f64[1];
        local_b28._0_8_ = local_3e8.Rotation.ZW.m128d_f64[0];
        local_b18._8_8_ = local_3e8.Translation.XY.m128d_f64[1];
        local_b18._0_8_ = local_3e8.Translation.XY.m128d_f64[0];
        local_b08._8_8_ = local_3e8.Translation.ZW.m128d_f64[1];
        local_b08._0_8_ = local_3e8.Translation.ZW.m128d_f64[0];
        local_af8._8_8_ = local_3e8.Scale3D.XY.m128d_f64[1];
        local_af8._0_8_ = local_3e8.Scale3D.XY.m128d_f64[0];
        local_ae8._8_8_ = local_3e8.Scale3D.ZW.m128d_f64[1];
        local_ae8._0_8_ = local_3e8.Scale3D.ZW.m128d_f64[0];
        URigHierarchy::SwitchToDefaultParent
                  ((this->DynamicHierarchy).field0_0x0.DebugPtr,&local_c18,false,true);
        pUVar3 = (this->DynamicHierarchy).field0_0x0.DebugPtr;
        local_c08._0_8_ = *(undefined8 *)((longlong)FVar4 + 0x10);
        local_c08.Name.Number = *(uint *)((longlong)FVar4 + 0x18);
        iVar40 = URigHierarchy::GetIndex(pUVar3,&local_c08,true);
        local_688.Rotation.XY.m128d_f64[0] = dVar6;
        local_688.Rotation.XY.m128d_f64[1] = dVar7;
        local_688.Rotation.ZW.m128d_f64[0] = dVar8;
        local_688.Rotation.ZW.m128d_f64[1] = dVar9;
        local_688.Translation.XY.m128d_f64[0] = dVar10;
        local_688.Translation.XY.m128d_f64[1] = dVar11;
        local_688.Translation.ZW.m128d_f64[0] = dVar12;
        local_688.Translation.ZW.m128d_f64[1] = dVar13;
        local_688.Scale3D.XY.m128d_f64[0] = dVar14;
        local_688.Scale3D.XY.m128d_f64[1] = dVar15;
        local_688.Scale3D.ZW.m128d_f64[0] = dVar16;
        local_688.Scale3D.ZW.m128d_f64[1] = dVar17;
        URigHierarchy::SetGlobalTransformByIndex(pUVar3,iVar40,&local_688,false,true,false,false);
        (**(code **)(this->_padding_ + 0x2d0))(this);
      }
      FRigControlCopy::FRigControlCopy
                (&local_2c8,(FRigControlElement *)FVar4,(this->DynamicHierarchy).field0_0x0.DebugPtr
                );
      if ((((ulonglong)local_5c8._0_8_ <= &local_2c8) &&
          (&local_2c8 <
           (FRigControlCopy *)(local_5c8._0_8_ + (longlong)(int)local_5c8._12_4_ * 0x220))) &&
         (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar27)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar40 = local_5c8._8_4_;
      if (local_5c8._8_4_ == local_5c8._12_4_) {
        iVar40 = UE::Core::Private::
                 ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x220,0x10,(ForAnyElementType *)local_5c8,(int *)(local_5c8 + 0xc));
      }
      local_5c8._8_4_ = iVar40 + 1;
      lVar37 = 4;
      pFVar30 = &local_2c8;
      pFVar33 = (FName *)(local_5c8._0_8_ + (longlong)iVar40 * 0x220);
      do {
        pFVar38 = pFVar33;
        pFVar34 = pFVar30;
        pFVar33 = pFVar38 + 0x10;
        FVar18 = *(FName *)&pFVar34->ControlType;
        *pFVar38 = pFVar34->Name;
        pFVar38[1] = FVar18;
        fVar20 = (pFVar34->Value).FloatStorage.Float00;
        fVar21 = (pFVar34->Value).FloatStorage.Float01;
        pFVar38[2] = (pFVar34->ParentKey).Name;
        pFVar38[3].ComparisonIndex = (FNameEntryId)fVar20;
        pFVar38[3].Number = (uint)fVar21;
        fVar20 = (pFVar34->Value).FloatStorage.Float03;
        fVar21 = (pFVar34->Value).FloatStorage.Float10;
        fVar22 = (pFVar34->Value).FloatStorage.Float11;
        pFVar38[4].ComparisonIndex = (FNameEntryId)(pFVar34->Value).FloatStorage.Float02;
        pFVar38[4].Number = (uint)fVar20;
        pFVar38[5].ComparisonIndex = (FNameEntryId)fVar21;
        pFVar38[5].Number = (uint)fVar22;
        fVar20 = (pFVar34->Value).FloatStorage.Float13;
        fVar21 = (pFVar34->Value).FloatStorage.Float20;
        fVar22 = (pFVar34->Value).FloatStorage.Float21;
        pFVar38[6].ComparisonIndex = (FNameEntryId)(pFVar34->Value).FloatStorage.Float12;
        pFVar38[6].Number = (uint)fVar20;
        pFVar38[7].ComparisonIndex = (FNameEntryId)fVar21;
        pFVar38[7].Number = (uint)fVar22;
        fVar20 = (pFVar34->Value).FloatStorage.Float23;
        fVar21 = (pFVar34->Value).FloatStorage.Float30;
        fVar22 = (pFVar34->Value).FloatStorage.Float31;
        pFVar38[8].ComparisonIndex = (FNameEntryId)(pFVar34->Value).FloatStorage.Float22;
        pFVar38[8].Number = (uint)fVar20;
        pFVar38[9].ComparisonIndex = (FNameEntryId)fVar21;
        pFVar38[9].Number = (uint)fVar22;
        fVar20 = (pFVar34->Value).FloatStorage.Float33;
        fVar21 = (pFVar34->Value).FloatStorage.Float00_2;
        fVar22 = (pFVar34->Value).FloatStorage.Float01_2;
        pFVar38[10].ComparisonIndex = (FNameEntryId)(pFVar34->Value).FloatStorage.Float32;
        pFVar38[10].Number = (uint)fVar20;
        pFVar38[0xb].ComparisonIndex = (FNameEntryId)fVar21;
        pFVar38[0xb].Number = (uint)fVar22;
        fVar20 = (pFVar34->Value).FloatStorage.Float03_2;
        fVar21 = (pFVar34->Value).FloatStorage.Float10_2;
        fVar22 = (pFVar34->Value).FloatStorage.Float11_2;
        pFVar38[0xc].ComparisonIndex = (FNameEntryId)(pFVar34->Value).FloatStorage.Float02_2;
        pFVar38[0xc].Number = (uint)fVar20;
        pFVar38[0xd].ComparisonIndex = (FNameEntryId)fVar21;
        pFVar38[0xd].Number = (uint)fVar22;
        fVar20 = (pFVar34->Value).FloatStorage.Float13_2;
        fVar21 = (pFVar34->Value).FloatStorage.Float20_2;
        fVar22 = (pFVar34->Value).FloatStorage.Float21_2;
        pFVar38[0xe].ComparisonIndex = (FNameEntryId)(pFVar34->Value).FloatStorage.Float12_2;
        pFVar38[0xe].Number = (uint)fVar20;
        pFVar38[0xf].ComparisonIndex = (FNameEntryId)fVar21;
        pFVar38[0xf].Number = (uint)fVar22;
        lVar37 = lVar37 + -1;
        pFVar30 = (FRigControlCopy *)&(pFVar34->Value).FloatStorage.Float22_2;
      } while (lVar37 != 0);
      fVar20 = (pFVar34->Value).FloatStorage.Float23_2;
      fVar21 = (pFVar34->Value).FloatStorage.Float30_2;
      fVar22 = (pFVar34->Value).FloatStorage.Float31_2;
      pFVar33->ComparisonIndex = (FNameEntryId)(pFVar34->Value).FloatStorage.Float22_2;
      pFVar33->Number = (uint)fVar20;
      pFVar38[0x11].ComparisonIndex = (FNameEntryId)fVar21;
      pFVar38[0x11].Number = (uint)fVar22;
      fVar20 = (pFVar34->Value).FloatStorage.Float33_2;
      FVar18 = *(FName *)&(pFVar34->Value).FloatStorage.bValid;
      pFVar38[0x12].ComparisonIndex = (FNameEntryId)(pFVar34->Value).FloatStorage.Float32_2;
      pFVar38[0x12].Number = (uint)fVar20;
      pFVar38[0x13] = FVar18;
      pFVar30 = (FRigControlCopy *)local_d18.Value;
      if (bVar44) {
        local_bf8.Name.Number = local_ca0.Name.Number;
        local_be8.Name.Number = *(uint *)((longlong)FVar4 + 0x18);
        local_b58.bInteractiveDialogEnabled = false;
        local_b58._9_7_ = 0;
        local_be8._0_8_ = *(undefined8 *)((longlong)FVar4 + 0x10);
        local_b58._padding_ = (longlong)&___7FEmptyRigDependenciesProvider__6B_;
        URigHierarchy::SwitchToParent
                  ((this->DynamicHierarchy).field0_0x0.DebugPtr,&local_be8,&local_bf8,false,true,
                   &local_b58,(FString *)0x0);
        pUVar3 = (this->DynamicHierarchy).field0_0x0.DebugPtr;
        local_bd8._0_8_ = *(undefined8 *)((longlong)FVar4 + 0x10);
        local_bd8.Name.Number = *(uint *)((longlong)FVar4 + 0x18);
        iVar40 = URigHierarchy::GetIndex(pUVar3,&local_bd8,true);
        local_628.Rotation.XY.m128d_f64[1]._0_4_ = SUB84(dVar7,0);
        local_628.Rotation.XY.m128d_f64[0] = dVar6;
        local_628.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar7 >> 0x20);
        local_628.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar9,0);
        local_628.Rotation.ZW.m128d_f64[0] = dVar8;
        local_628.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar9 >> 0x20);
        local_628.Translation.XY.m128d_f64[1]._0_4_ = SUB84(dVar11,0);
        local_628.Translation.XY.m128d_f64[0] = dVar10;
        local_628.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar11 >> 0x20);
        local_628.Translation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar13,0);
        local_628.Translation.ZW.m128d_f64[0] = dVar12;
        local_628.Translation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar13 >> 0x20);
        local_628.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84(dVar15,0);
        local_628.Scale3D.XY.m128d_f64[0] = dVar14;
        local_628.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar15 >> 0x20);
        local_628.Scale3D.ZW.m128d_f64[1]._0_4_ = SUB84(dVar17,0);
        local_628.Scale3D.ZW.m128d_f64[0] = dVar16;
        local_628.Scale3D.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar17 >> 0x20);
        URigHierarchy::SetGlobalTransformByIndex(pUVar3,iVar40,&local_628,false,true,false,false);
        pFVar30 = (FRigControlCopy *)local_d18.Value;
      }
    }
    pFVar42 = (FRigControlCopy *)&pFVar42->ControlType;
    uVar36 = local_ca8 & 0xffffffff;
    iVar40 = local_5c8._8_4_;
  }
  if (local_5b8._8_4_ != local_584) {
    TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
    UnhashElements((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                    *)local_5b8);
    bVar44 = (longlong)local_5b8._8_8_ < 0;
    local_5b8._8_8_ = local_5b8._8_8_ & 0xffffffff00000000;
    if (bVar44) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x14,4,0,(ForAnyElementType *)local_5b8,0,(int *)(local_5b8 + 0xc));
    }
    local_588 = 0xffffffff;
    local_584 = 0;
    local_590 = 0;
    iVar40 = local_5c8._8_4_;
  }
  local_d30 = 0;
  if (0 < iVar40) {
    do {
      uVar23 = local_d30;
      uVar29 = 0;
      if ((int)local_d30 < iVar40) {
        uVar29 = ~local_d30 >> 0x1f;
      }
      if ((uVar29 == 0) &&
         (bVar44 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar44)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_b40 = &local_d30;
      local_b48 = (FScriptContainerElement *)(local_5c8._0_8_ + (longlong)(int)uVar23 * 0x220);
      TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<FName_const_&,int_const_&>_>
                ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                  *)local_5b8,&local_d18,(bool *)&local_b48);
      local_d30 = local_d30 + 1;
      iVar40 = local_5c8._8_4_;
    } while ((int)local_d30 < (int)local_5c8._8_4_);
  }
  if (local_cb0 != (FRigControlCopy *)0x0) {
    FMemory::Free(local_cb0);
  }
  pUVar25 = local_bc8;
  bVar44 = local_d33;
  fVar20 = __real_3f800000;
  FControlRigControlPose::BlendWithInitialPoses
            ((FControlRigControlPose *)(local_bc8 + 1),(FControlRigControlPose *)local_5c8,this,
             local_d35,bVar45,__real_3f800000,local_d33);
  (**(code **)(this->_padding_ + 0x2d0))(this);
  FControlRigControlPose::BlendWithInitialPoses
            ((FControlRigControlPose *)(pUVar25 + 1),(FControlRigControlPose *)local_5c8,this,
             local_d35,bVar45,fVar20,bVar44);
  local_570 = 0;
  if (local_578 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_578);
  }
  bVar44 = local_5b8._12_4_ != 0;
  local_5b8._8_8_ = (ulonglong)(uint)local_5b8._12_4_ << 0x20;
  if (bVar44) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,(ForAnyElementType *)local_5b8,0,(int *)(local_5b8 + 0xc));
  }
  local_588 = 0xffffffff;
  local_584 = 0;
  local_590 = 0;
  if (0x80 < local_58c) {
    local_58c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_5b8 + 0x10),0);
  }
  if (local_598 != (void *)0x0) {
    FMemory::Free(local_598);
  }
  pFVar30 = (FRigControlCopy *)local_5c8._0_8_;
  if ((FScriptContainerElement *)local_5b8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_5b8._0_8_);
    pFVar30 = (FRigControlCopy *)local_5c8._0_8_;
  }
LAB_14a46ad4d:
  if (pFVar30 != (FRigControlCopy *)0x0) {
    FMemory::Free(pFVar30);
  }
  return;
}

// execReplaceControlName @ 14a46adf0

void __cdecl
UControlRigPoseAsset::execReplaceControlName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FName *pFVar1;
  FProperty *pFVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TTuple<FName,int> *pTVar7;
  uint uVar8;
  undefined8 *puVar9;
  uchar *puVar10;
  FName *pFVar11;
  uint *puVar12;
  TPairInitializer<FName_const_&,int_const_&> local_res8;
  uchar local_res20 [8];
  FName local_58;
  undefined8 *local_50;
  uint *local_48;
  
  local_res8.Value = (int *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8.Value,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8.Value);
  }
  pFVar1 = (FName *)param_2->MostRecentPropertyAddress;
  local_res20[0] = '\0';
  local_res20[1] = '\0';
  local_res20[2] = '\0';
  local_res20[3] = '\0';
  local_res20[4] = '\0';
  local_res20[5] = '\0';
  local_res20[6] = '\0';
  local_res20[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pFVar11 = (FName *)&local_res8.Value;
  if (pFVar1 != (FName *)0x0) {
    pFVar11 = pFVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  puVar10 = local_res20;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar10 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar7 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
           Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                 *)&param_1[1].field_0x10,*pFVar11);
  puVar12 = (uint *)&pTVar7->field_0x8;
  if (pTVar7 == (TTuple<FName,int> *)0x0) {
    puVar12 = (uint *)0x0;
  }
  if (puVar12 != (uint *)0x0) {
    uVar6 = *puVar12;
    if (-1 < (int)uVar6) {
      uVar8 = 0;
      if ((int)uVar6 < *(int *)&param_1[1].field_0x8) {
        uVar8 = ~uVar6 >> 0x1f;
      }
      if (uVar8 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      puVar9 = (undefined8 *)((longlong)(int)uVar6 * 0x220 + *(longlong *)(param_1 + 1));
      *puVar9 = *(undefined8 *)puVar10;
      FVar3 = *pFVar11;
      local_58 = FVar3;
      if (*(int *)&param_1[1].field_0x18 != *(int *)&param_1[2].field_0x1c) {
        uVar6 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
        TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
        RemoveImpl<FName>((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                           *)&param_1[1].field_0x10,FVar3.Number + uVar6,&local_58);
      }
      local_50 = puVar9;
      local_48 = puVar12;
      TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<FName_const_&,int_const_&>_>
                ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                  *)&param_1[1].field_0x10,&local_res8,(bool *)&local_50);
    }
  }
  return;
}

// execSavePose @ 14a46afc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl UControlRigPoseAsset::execSavePose(UObject *param_1,FFrame *param_2,void *param_3)

{
  FControlRigControlPose *this;
  undefined1 *puVar1;
  FProperty *pFVar2;
  FRigControlElement *pFVar3;
  URigHierarchy *pUVar4;
  FRigControlCopy *pFVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
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
  FName FVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  longlong *plVar23;
  FName *pFVar24;
  bool bVar25;
  char cVar26;
  bool bVar27;
  int iVar28;
  int iVar29;
  FRigElementKey *pFVar30;
  FRigControlCopy *pFVar31;
  ulonglong uVar32;
  longlong lVar33;
  FName *pFVar34;
  ulonglong uVar35;
  undefined8 *puVar36;
  undefined8 *puVar37;
  bool bVar38;
  undefined1 auStackY_558 [32];
  undefined1 local_507 [3];
  int local_504;
  uint local_500;
  longlong *local_4f8;
  undefined8 *local_4f0;
  ulonglong local_4e8;
  FRigElementKey local_4e0;
  undefined8 *local_4d0;
  FRigElementKey local_4c8;
  FRigElementKey local_4b8;
  FRigElementKey local_4a8;
  FRigElementKey local_498;
  FRigElementKey local_488;
  FRigElementKey local_478;
  IRigDependenciesProvider local_468;
  undefined1 local_458 [16];
  undefined1 local_448 [16];
  undefined1 local_438 [16];
  undefined1 local_428 [16];
  undefined1 local_418 [16];
  undefined1 local_408 [16];
  FRigElementKey local_3f8;
  TTransform<double> local_3e8;
  TTransform<double> local_388;
  TTransform<double> local_328;
  FRigControlCopy local_2c8;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_558;
  local_4f8 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_4f8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_4f8);
  }
  local_504 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_504,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_504);
  }
  plVar23 = local_4f8;
  bVar38 = local_504 != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_4f8 != (longlong *)0x0) {
    this = (FControlRigControlPose *)(param_1 + 1);
    local_4f0 = (undefined8 *)0x0;
    local_4e8 = 0;
    (**(code **)(*local_4f8 + 0x420))(local_4f8,&local_4f0);
    iVar29 = *(int *)&param_1[1].field_0x8;
    puVar1 = &param_1[1].field_0x8;
    if (iVar29 < 0) {
      iVar28 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x220,0x10,-iVar29,(ForAnyElementType *)this,(int *)puVar1,
                          (int *)&param_1[1].field_0xc);
      DefaultConstructItems<FRigControlCopy,int>
                ((this->CopyOfControls).AllocatorInstance.Data + (longlong)iVar28 * 0x220,-iVar29);
    }
    else if (0 < iVar29) {
      *(int *)puVar1 = *(int *)puVar1 - iVar29;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x220,0x10,(ForAnyElementType *)this,*(int *)puVar1,(int *)&param_1[1].field_0xc);
    }
    uVar32 = (ulonglong)(int)(uint)local_4e8;
    puVar36 = local_4f0 + uVar32;
    local_500 = (uint)local_4e8;
    uVar35 = uVar32;
    puVar37 = local_4f0;
    local_4d0 = puVar36;
    while( true ) {
      if ((int)uVar32 != (int)uVar35) {
        local_507[0] = 0;
        `TCheckedPointerIterator<FRigControlElement_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_507);
      }
      if (puVar37 == puVar36) break;
      pFVar3 = (FRigControlElement *)*puVar37;
      bVar25 = URigHierarchy::IsAnimatable((URigHierarchy *)plVar23[0x67],pFVar3);
      if ((bVar25) &&
         ((bVar38 ||
          (cVar26 = (**(code **)(*plVar23 + 0x440))(plVar23,&pFVar3->field_0x14), cVar26 != '\0'))))
      {
        dVar7 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        dVar8 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
        bVar25 = false;
        dVar9 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        dVar10 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        dVar11 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
        dVar12 = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
        dVar13 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
        dVar14 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
        dVar15 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        dVar16 = (double)GlobalVectorConstants::Float1110.m128_f32[1];
        dVar17 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        dVar18 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        local_458._8_4_ = SUB84(dVar8,0);
        local_458._0_8_ = dVar7;
        local_458._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
        local_408._8_4_ = SUB84(dVar18,0);
        local_408._0_8_ = dVar17;
        local_408._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
        local_448._8_4_ = SUB84(dVar10,0);
        local_448._0_8_ = dVar9;
        local_448._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
        local_438._8_4_ = SUB84(dVar12,0);
        local_438._0_8_ = dVar11;
        local_438._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
        local_428._8_4_ = SUB84(dVar14,0);
        local_428._0_8_ = dVar13;
        local_428._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
        local_418._8_4_ = SUB84(dVar16,0);
        local_418._0_8_ = dVar15;
        local_418._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
        URigHierarchy::GetActiveParent
                  ((URigHierarchy *)plVar23[0x67],&local_4e0,(FRigElementKey *)&pFVar3->field_0x10,
                   true);
        pFVar30 = URigHierarchy::GetDefaultParentKey(&local_3f8);
        FVar19.Number = local_4e0.Name.Number;
        FVar19.ComparisonIndex.Value = local_4e0.Name.ComparisonIndex.Value;
        if ((FVar19 != pFVar30->Name) || (local_4e0.Type != pFVar30->Type)) {
          pUVar4 = (URigHierarchy *)plVar23[0x67];
          local_4c8.Type = pFVar3->field_0x10;
          local_4c8._1_3_ = *(undefined3 *)&pFVar3->field_0x11;
          local_4c8.Name.ComparisonIndex.Value = *(uint *)&pFVar3->field_0x14;
          local_4c8.Name.Number = *(uint *)&pFVar3->field_0x18;
          iVar29 = URigHierarchy::GetIndex(pUVar4,&local_4c8,true);
          URigHierarchy::GetGlobalTransformByIndex(pUVar4,&local_328,iVar29,false);
          dVar18 = local_328.Scale3D.ZW.m128d_f64[1];
          dVar17 = local_328.Scale3D.ZW.m128d_f64[0];
          dVar16 = local_328.Scale3D.XY.m128d_f64[1];
          dVar15 = local_328.Scale3D.XY.m128d_f64[0];
          dVar14 = local_328.Translation.ZW.m128d_f64[1];
          dVar13 = local_328.Translation.ZW.m128d_f64[0];
          dVar12 = local_328.Translation.XY.m128d_f64[1];
          dVar11 = local_328.Translation.XY.m128d_f64[0];
          dVar10 = local_328.Rotation.ZW.m128d_f64[1];
          dVar9 = local_328.Rotation.ZW.m128d_f64[0];
          dVar8 = local_328.Rotation.XY.m128d_f64[1];
          dVar7 = local_328.Rotation.XY.m128d_f64[0];
          local_4b8.Type = pFVar3->field_0x10;
          local_4b8._1_3_ = *(undefined3 *)&pFVar3->field_0x11;
          local_4b8.Name.ComparisonIndex.Value = *(uint *)&pFVar3->field_0x14;
          local_4b8.Name.Number = *(uint *)&pFVar3->field_0x18;
          local_458._8_8_ = local_328.Rotation.XY.m128d_f64[1];
          local_458._0_8_ = local_328.Rotation.XY.m128d_f64[0];
          local_448._8_8_ = local_328.Rotation.ZW.m128d_f64[1];
          local_448._0_8_ = local_328.Rotation.ZW.m128d_f64[0];
          local_438._8_8_ = local_328.Translation.XY.m128d_f64[1];
          local_438._0_8_ = local_328.Translation.XY.m128d_f64[0];
          local_428._8_8_ = local_328.Translation.ZW.m128d_f64[1];
          local_428._0_8_ = local_328.Translation.ZW.m128d_f64[0];
          local_418._8_8_ = local_328.Scale3D.XY.m128d_f64[1];
          local_418._0_8_ = local_328.Scale3D.XY.m128d_f64[0];
          local_408._8_8_ = local_328.Scale3D.ZW.m128d_f64[1];
          local_408._0_8_ = local_328.Scale3D.ZW.m128d_f64[0];
          URigHierarchy::SwitchToDefaultParent((URigHierarchy *)plVar23[0x67],&local_4b8,false,true)
          ;
          pUVar4 = (URigHierarchy *)plVar23[0x67];
          local_4a8.Type = pFVar3->field_0x10;
          local_4a8._1_3_ = *(undefined3 *)&pFVar3->field_0x11;
          local_4a8.Name.ComparisonIndex.Value = *(uint *)&pFVar3->field_0x14;
          local_4a8.Name.Number = *(uint *)&pFVar3->field_0x18;
          iVar29 = URigHierarchy::GetIndex(pUVar4,&local_4a8,true);
          local_3e8.Rotation.XY.m128d_f64[0] = dVar7;
          local_3e8.Rotation.XY.m128d_f64[1] = dVar8;
          local_3e8.Rotation.ZW.m128d_f64[0] = dVar9;
          local_3e8.Rotation.ZW.m128d_f64[1] = dVar10;
          local_3e8.Translation.XY.m128d_f64[0] = dVar11;
          local_3e8.Translation.XY.m128d_f64[1] = dVar12;
          local_3e8.Translation.ZW.m128d_f64[0] = dVar13;
          local_3e8.Translation.ZW.m128d_f64[1] = dVar14;
          local_3e8.Scale3D.XY.m128d_f64[0] = dVar15;
          local_3e8.Scale3D.XY.m128d_f64[1] = dVar16;
          local_3e8.Scale3D.ZW.m128d_f64[0] = dVar17;
          local_3e8.Scale3D.ZW.m128d_f64[1] = dVar18;
          URigHierarchy::SetGlobalTransformByIndex(pUVar4,iVar29,&local_3e8,false,true,false,false);
          (**(code **)(*plVar23 + 0x2d0))(plVar23);
          bVar25 = true;
        }
        FRigControlCopy::FRigControlCopy(&local_2c8,pFVar3,(URigHierarchy *)plVar23[0x67]);
        pFVar5 = (FRigControlCopy *)(this->CopyOfControls).AllocatorInstance.Data;
        if (((pFVar5 <= &local_2c8) && (&local_2c8 < pFVar5 + *(int *)&param_1[1].field_0xc)) &&
           (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar27)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar29 = *(int *)puVar1;
        if (iVar29 == *(int *)&param_1[1].field_0xc) {
          iVar29 = UE::Core::Private::
                   ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x220,0x10,(ForAnyElementType *)this,(int *)&param_1[1].field_0xc);
        }
        *(int *)puVar1 = iVar29 + 1;
        lVar33 = 4;
        pFVar5 = &local_2c8;
        pFVar24 = (FName *)((this->CopyOfControls).AllocatorInstance.Data + (longlong)iVar29 * 0x220
                           );
        do {
          pFVar34 = pFVar24;
          pFVar31 = pFVar5;
          pFVar24 = pFVar34 + 0x10;
          FVar19 = *(FName *)&pFVar31->ControlType;
          *pFVar34 = pFVar31->Name;
          pFVar34[1] = FVar19;
          fVar20 = (pFVar31->Value).FloatStorage.Float00;
          fVar21 = (pFVar31->Value).FloatStorage.Float01;
          pFVar34[2] = (pFVar31->ParentKey).Name;
          pFVar34[3].ComparisonIndex = (FNameEntryId)fVar20;
          pFVar34[3].Number = (uint)fVar21;
          fVar20 = (pFVar31->Value).FloatStorage.Float03;
          fVar21 = (pFVar31->Value).FloatStorage.Float10;
          fVar22 = (pFVar31->Value).FloatStorage.Float11;
          pFVar34[4].ComparisonIndex = (FNameEntryId)(pFVar31->Value).FloatStorage.Float02;
          pFVar34[4].Number = (uint)fVar20;
          pFVar34[5].ComparisonIndex = (FNameEntryId)fVar21;
          pFVar34[5].Number = (uint)fVar22;
          fVar20 = (pFVar31->Value).FloatStorage.Float13;
          fVar21 = (pFVar31->Value).FloatStorage.Float20;
          fVar22 = (pFVar31->Value).FloatStorage.Float21;
          pFVar34[6].ComparisonIndex = (FNameEntryId)(pFVar31->Value).FloatStorage.Float12;
          pFVar34[6].Number = (uint)fVar20;
          pFVar34[7].ComparisonIndex = (FNameEntryId)fVar21;
          pFVar34[7].Number = (uint)fVar22;
          fVar20 = (pFVar31->Value).FloatStorage.Float23;
          fVar21 = (pFVar31->Value).FloatStorage.Float30;
          fVar22 = (pFVar31->Value).FloatStorage.Float31;
          pFVar34[8].ComparisonIndex = (FNameEntryId)(pFVar31->Value).FloatStorage.Float22;
          pFVar34[8].Number = (uint)fVar20;
          pFVar34[9].ComparisonIndex = (FNameEntryId)fVar21;
          pFVar34[9].Number = (uint)fVar22;
          fVar20 = (pFVar31->Value).FloatStorage.Float33;
          fVar21 = (pFVar31->Value).FloatStorage.Float00_2;
          fVar22 = (pFVar31->Value).FloatStorage.Float01_2;
          pFVar34[10].ComparisonIndex = (FNameEntryId)(pFVar31->Value).FloatStorage.Float32;
          pFVar34[10].Number = (uint)fVar20;
          pFVar34[0xb].ComparisonIndex = (FNameEntryId)fVar21;
          pFVar34[0xb].Number = (uint)fVar22;
          fVar20 = (pFVar31->Value).FloatStorage.Float03_2;
          fVar21 = (pFVar31->Value).FloatStorage.Float10_2;
          fVar22 = (pFVar31->Value).FloatStorage.Float11_2;
          pFVar34[0xc].ComparisonIndex = (FNameEntryId)(pFVar31->Value).FloatStorage.Float02_2;
          pFVar34[0xc].Number = (uint)fVar20;
          pFVar34[0xd].ComparisonIndex = (FNameEntryId)fVar21;
          pFVar34[0xd].Number = (uint)fVar22;
          fVar20 = (pFVar31->Value).FloatStorage.Float13_2;
          fVar21 = (pFVar31->Value).FloatStorage.Float20_2;
          fVar22 = (pFVar31->Value).FloatStorage.Float21_2;
          pFVar34[0xe].ComparisonIndex = (FNameEntryId)(pFVar31->Value).FloatStorage.Float12_2;
          pFVar34[0xe].Number = (uint)fVar20;
          pFVar34[0xf].ComparisonIndex = (FNameEntryId)fVar21;
          pFVar34[0xf].Number = (uint)fVar22;
          lVar33 = lVar33 + -1;
          pFVar5 = (FRigControlCopy *)&(pFVar31->Value).FloatStorage.Float22_2;
        } while (lVar33 != 0);
        fVar20 = (pFVar31->Value).FloatStorage.Float23_2;
        fVar21 = (pFVar31->Value).FloatStorage.Float30_2;
        fVar22 = (pFVar31->Value).FloatStorage.Float31_2;
        pFVar24->ComparisonIndex = (FNameEntryId)(pFVar31->Value).FloatStorage.Float22_2;
        pFVar24->Number = (uint)fVar20;
        pFVar34[0x11].ComparisonIndex = (FNameEntryId)fVar21;
        pFVar34[0x11].Number = (uint)fVar22;
        fVar20 = (pFVar31->Value).FloatStorage.Float33_2;
        FVar19 = *(FName *)&(pFVar31->Value).FloatStorage.bValid;
        pFVar34[0x12].ComparisonIndex = (FNameEntryId)(pFVar31->Value).FloatStorage.Float32_2;
        pFVar34[0x12].Number = (uint)fVar20;
        pFVar34[0x13] = FVar19;
        puVar36 = local_4d0;
        if (bVar25) {
          local_468.bInteractiveDialogEnabled = false;
          local_468._9_7_ = 0;
          local_468._padding_ = (longlong)&___7FEmptyRigDependenciesProvider__6B_;
          local_488.Type = pFVar3->field_0x10;
          local_488._1_3_ = *(undefined3 *)&pFVar3->field_0x11;
          local_488.Name.ComparisonIndex.Value = *(uint *)&pFVar3->field_0x14;
          local_498.Name.Number = local_4e0.Name.Number;
          local_488.Name.Number = *(uint *)&pFVar3->field_0x18;
          URigHierarchy::SwitchToParent
                    ((URigHierarchy *)plVar23[0x67],&local_488,&local_498,false,true,&local_468,
                     (FString *)0x0);
          pUVar4 = (URigHierarchy *)plVar23[0x67];
          local_478.Type = pFVar3->field_0x10;
          local_478._1_3_ = *(undefined3 *)&pFVar3->field_0x11;
          local_478.Name.ComparisonIndex.Value = *(uint *)&pFVar3->field_0x14;
          local_478.Name.Number = *(uint *)&pFVar3->field_0x18;
          iVar29 = URigHierarchy::GetIndex(pUVar4,&local_478,true);
          local_388.Rotation.XY.m128d_f64[1]._0_4_ = SUB84(dVar8,0);
          local_388.Rotation.XY.m128d_f64[0] = dVar7;
          local_388.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar8 >> 0x20);
          local_388.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar10,0);
          local_388.Rotation.ZW.m128d_f64[0] = dVar9;
          local_388.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar10 >> 0x20);
          local_388.Translation.XY.m128d_f64[1]._0_4_ = SUB84(dVar12,0);
          local_388.Translation.XY.m128d_f64[0] = dVar11;
          local_388.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar12 >> 0x20);
          local_388.Translation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar14,0);
          local_388.Translation.ZW.m128d_f64[0] = dVar13;
          local_388.Translation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar14 >> 0x20);
          local_388.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84(dVar16,0);
          local_388.Scale3D.XY.m128d_f64[0] = dVar15;
          local_388.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar16 >> 0x20);
          local_388.Scale3D.ZW.m128d_f64[1]._0_4_ = SUB84(dVar18,0);
          local_388.Scale3D.ZW.m128d_f64[0] = dVar17;
          local_388.Scale3D.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar18 >> 0x20);
          URigHierarchy::SetGlobalTransformByIndex(pUVar4,iVar29,&local_388,false,true,false,false);
          puVar36 = local_4d0;
        }
      }
      uVar32 = local_4e8 & 0xffffffff;
      puVar37 = puVar37 + 1;
      uVar35 = (ulonglong)local_500;
    }
    FControlRigControlPose::SetUpControlMap(this);
    if (local_4f0 != (undefined8 *)0x0) {
      FMemory::Free(local_4f0);
    }
  }
  return;
}

// execSelectControls @ 14a46b660

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UControlRigPoseAsset::execSelectControls(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FName *pFVar2;
  FProperty *pFVar3;
  FRigControlElement *pFVar4;
  URigHierarchy *pUVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
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
  FName FVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  uint uVar23;
  UControlRig *pUVar24;
  int *piVar25;
  bool bVar26;
  bool bVar27;
  int iVar28;
  uint uVar29;
  FRigElementKey *pFVar30;
  FRigControlCopy *pFVar31;
  FRigControlCopy *pFVar32;
  ulonglong uVar33;
  longlong lVar34;
  FName *pFVar35;
  ForAnyElementType FVar36;
  int iVar37;
  int *piVar38;
  undefined1 uVar39;
  undefined1 auStackY_5e8 [32];
  undefined1 local_598;
  undefined1 local_597;
  undefined1 local_596;
  FControlRigPoseMirrorTable local_595;
  int local_594;
  int local_590;
  uint local_58c;
  UControlRig *local_588;
  int *local_580;
  ulonglong local_578;
  FRigElementKey local_570;
  TArray<FName,TSizedDefaultAllocator<32>_> local_560;
  TPairInitializer<FName_const_&,int_const_&> local_550;
  FRigElementKey local_538;
  FRigElementKey local_528;
  FRigElementKey local_518;
  FRigElementKey local_508;
  FRigElementKey local_4f8;
  FRigElementKey local_4e8;
  IRigDependenciesProvider local_4d8;
  FScriptContainerElement *local_4c8;
  uint *local_4c0;
  undefined1 local_4b8 [16];
  undefined1 local_4a8 [16];
  undefined1 local_498 [16];
  undefined1 local_488 [16];
  undefined1 local_478 [16];
  undefined1 local_468 [16];
  FRigElementKey local_458;
  TTransform<double> local_448;
  TTransform<double> local_3e8;
  undefined1 local_388 [16];
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator> local_378;
  TTransform<double> local_328;
  FRigControlCopy local_2c8;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_5e8;
  local_588 = (UControlRig *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_588,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_588);
  }
  local_594 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_594,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_594);
  }
  uVar39 = local_594 != 0;
  local_590 = 0;
  local_597 = uVar39;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_590,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_590);
  }
  pUVar24 = local_588;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_588 == (UControlRig *)0x0) {
    return;
  }
  if (local_590 != 0) {
    (**(code **)(local_588->_padding_ + 0x430))(local_588,0);
  }
  FControlRigControlPose::GetControlNames((FControlRigControlPose *)(param_1 + 1),&local_560);
  local_388._0_8_ = (FRigControlCopy *)0x0;
  local_388._8_4_ = 0;
  local_388._12_4_ = 0;
  local_378.Elements._0_8_ = 0;
  local_378.Elements._8_8_ = 0;
  local_378.Elements._32_8_ = 0;
  local_378.Elements._40_4_ = 0;
  local_378.Elements._44_4_ = 0x80;
  local_378.Elements._48_4_ = 0xffffffff;
  local_378.Elements._52_4_ = 0;
  local_378.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_378.HashSize = 0;
  if (!(bool)uVar39) goto LAB_14a46beb5;
  local_580 = (int *)0x0;
  local_578 = 0;
  (**(code **)(pUVar24->_padding_ + 0x420))(pUVar24,&local_580);
  if ((int)local_388._8_4_ < 0) {
    iVar37 = -local_388._8_4_;
    iVar28 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x220,0x10,iVar37,(ForAnyElementType *)local_388,(int *)(local_388 + 8),
                        (int *)(local_388 + 0xc));
    DefaultConstructItems<FRigControlCopy,int>
              ((FScriptContainerElement *)(local_388._0_8_ + (longlong)iVar28 * 0x220),iVar37);
LAB_14a46b88a:
  }
  else if (0 < (int)local_388._8_4_) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x220,0x10,(ForAnyElementType *)local_388,0,(int *)(local_388 + 0xc));
    goto LAB_14a46b88a;
  }
  iVar28 = (int)local_578;
  uVar33 = (ulonglong)(int)local_578;
  local_550.Value = local_580 + uVar33 * 2;
  piVar38 = local_580;
  iVar37 = local_388._8_4_;
  while( true ) {
    piVar25 = local_550.Value;
    if ((int)uVar33 != iVar28) {
      local_598 = 0;
      `TCheckedPointerIterator<FRigControlElement_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_598);
      iVar37 = local_388._8_4_;
    }
    uVar39 = local_597;
    if (piVar38 == piVar25) break;
    pFVar4 = *(FRigControlElement **)piVar38;
    bVar26 = URigHierarchy::IsAnimatable((pUVar24->DynamicHierarchy).field0_0x0.DebugPtr,pFVar4);
    if (bVar26) {
      dVar7 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      dVar8 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      bVar26 = false;
      dVar9 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      dVar10 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      dVar11 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      dVar12 = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
      dVar13 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      dVar14 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      dVar15 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      dVar16 = (double)GlobalVectorConstants::Float1110.m128_f32[1];
      dVar17 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      dVar18 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      local_4b8._8_4_ = SUB84(dVar8,0);
      local_4b8._0_8_ = dVar7;
      local_4b8._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
      local_468._8_4_ = SUB84(dVar18,0);
      local_468._0_8_ = dVar17;
      local_468._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
      local_4a8._8_4_ = SUB84(dVar10,0);
      local_4a8._0_8_ = dVar9;
      local_4a8._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
      local_498._8_4_ = SUB84(dVar12,0);
      local_498._0_8_ = dVar11;
      local_498._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
      local_488._8_4_ = SUB84(dVar14,0);
      local_488._0_8_ = dVar13;
      local_488._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
      local_478._8_4_ = SUB84(dVar16,0);
      local_478._0_8_ = dVar15;
      local_478._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
      URigHierarchy::GetActiveParent
                ((pUVar24->DynamicHierarchy).field0_0x0.DebugPtr,&local_570,
                 (FRigElementKey *)&pFVar4->field_0x10,true);
      pFVar30 = URigHierarchy::GetDefaultParentKey(&local_458);
      FVar19.Number = local_570.Name.Number;
      FVar19.ComparisonIndex.Value = local_570.Name.ComparisonIndex.Value;
      if ((FVar19 != pFVar30->Name) || (local_570.Type != pFVar30->Type)) {
        pUVar5 = (pUVar24->DynamicHierarchy).field0_0x0.DebugPtr;
        local_538.Type = pFVar4->field_0x10;
        local_538._1_3_ = *(undefined3 *)&pFVar4->field_0x11;
        local_538.Name.ComparisonIndex.Value = *(uint *)&pFVar4->field_0x14;
        bVar26 = true;
        local_538.Name.Number = *(uint *)&pFVar4->field_0x18;
        iVar37 = URigHierarchy::GetIndex(pUVar5,&local_538,true);
        URigHierarchy::GetGlobalTransformByIndex(pUVar5,&local_328,iVar37,false);
        dVar18 = local_328.Scale3D.ZW.m128d_f64[1];
        dVar17 = local_328.Scale3D.ZW.m128d_f64[0];
        dVar16 = local_328.Scale3D.XY.m128d_f64[1];
        dVar15 = local_328.Scale3D.XY.m128d_f64[0];
        dVar14 = local_328.Translation.ZW.m128d_f64[1];
        dVar13 = local_328.Translation.ZW.m128d_f64[0];
        dVar12 = local_328.Translation.XY.m128d_f64[1];
        dVar11 = local_328.Translation.XY.m128d_f64[0];
        dVar10 = local_328.Rotation.ZW.m128d_f64[1];
        dVar9 = local_328.Rotation.ZW.m128d_f64[0];
        dVar8 = local_328.Rotation.XY.m128d_f64[1];
        dVar7 = local_328.Rotation.XY.m128d_f64[0];
        local_528.Type = pFVar4->field_0x10;
        local_528._1_3_ = *(undefined3 *)&pFVar4->field_0x11;
        local_528.Name.ComparisonIndex.Value = *(uint *)&pFVar4->field_0x14;
        local_528.Name.Number = *(uint *)&pFVar4->field_0x18;
        local_4b8._8_8_ = local_328.Rotation.XY.m128d_f64[1];
        local_4b8._0_8_ = local_328.Rotation.XY.m128d_f64[0];
        local_4a8._8_8_ = local_328.Rotation.ZW.m128d_f64[1];
        local_4a8._0_8_ = local_328.Rotation.ZW.m128d_f64[0];
        local_498._8_8_ = local_328.Translation.XY.m128d_f64[1];
        local_498._0_8_ = local_328.Translation.XY.m128d_f64[0];
        local_488._8_8_ = local_328.Translation.ZW.m128d_f64[1];
        local_488._0_8_ = local_328.Translation.ZW.m128d_f64[0];
        local_478._8_8_ = local_328.Scale3D.XY.m128d_f64[1];
        local_478._0_8_ = local_328.Scale3D.XY.m128d_f64[0];
        local_468._8_8_ = local_328.Scale3D.ZW.m128d_f64[1];
        local_468._0_8_ = local_328.Scale3D.ZW.m128d_f64[0];
        URigHierarchy::SwitchToDefaultParent
                  ((pUVar24->DynamicHierarchy).field0_0x0.DebugPtr,&local_528,false,true);
        pUVar5 = (pUVar24->DynamicHierarchy).field0_0x0.DebugPtr;
        local_518.Type = pFVar4->field_0x10;
        local_518._1_3_ = *(undefined3 *)&pFVar4->field_0x11;
        local_518.Name.ComparisonIndex.Value = *(uint *)&pFVar4->field_0x14;
        local_518.Name.Number = *(uint *)&pFVar4->field_0x18;
        iVar37 = URigHierarchy::GetIndex(pUVar5,&local_518,true);
        local_448.Rotation.XY.m128d_f64[0] = dVar7;
        local_448.Rotation.XY.m128d_f64[1] = dVar8;
        local_448.Rotation.ZW.m128d_f64[0] = dVar9;
        local_448.Rotation.ZW.m128d_f64[1] = dVar10;
        local_448.Translation.XY.m128d_f64[0] = dVar11;
        local_448.Translation.XY.m128d_f64[1] = dVar12;
        local_448.Translation.ZW.m128d_f64[0] = dVar13;
        local_448.Translation.ZW.m128d_f64[1] = dVar14;
        local_448.Scale3D.XY.m128d_f64[0] = dVar15;
        local_448.Scale3D.XY.m128d_f64[1] = dVar16;
        local_448.Scale3D.ZW.m128d_f64[0] = dVar17;
        local_448.Scale3D.ZW.m128d_f64[1] = dVar18;
        URigHierarchy::SetGlobalTransformByIndex(pUVar5,iVar37,&local_448,false,true,false,false);
        (**(code **)(pUVar24->_padding_ + 0x2d0))(pUVar24);
      }
      FRigControlCopy::FRigControlCopy
                (&local_2c8,pFVar4,(pUVar24->DynamicHierarchy).field0_0x0.DebugPtr);
      if ((((ulonglong)local_388._0_8_ <= &local_2c8) &&
          (&local_2c8 <
           (FRigControlCopy *)(local_388._0_8_ + (longlong)(int)local_388._12_4_ * 0x220))) &&
         (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar27)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar37 = local_388._8_4_;
      if (local_388._8_4_ == local_388._12_4_) {
        iVar37 = UE::Core::Private::
                 ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x220,0x10,(ForAnyElementType *)local_388,(int *)(local_388 + 0xc));
      }
      local_388._8_4_ = iVar37 + 1;
      lVar34 = 4;
      pFVar32 = &local_2c8;
      pFVar2 = (FName *)(local_388._0_8_ + (longlong)iVar37 * 0x220);
      do {
        pFVar35 = pFVar2;
        pFVar31 = pFVar32;
        pFVar2 = pFVar35 + 0x10;
        FVar19 = *(FName *)&pFVar31->ControlType;
        *pFVar35 = pFVar31->Name;
        pFVar35[1] = FVar19;
        fVar20 = (pFVar31->Value).FloatStorage.Float00;
        fVar21 = (pFVar31->Value).FloatStorage.Float01;
        pFVar35[2] = (pFVar31->ParentKey).Name;
        pFVar35[3].ComparisonIndex = (FNameEntryId)fVar20;
        pFVar35[3].Number = (uint)fVar21;
        fVar20 = (pFVar31->Value).FloatStorage.Float03;
        fVar21 = (pFVar31->Value).FloatStorage.Float10;
        fVar22 = (pFVar31->Value).FloatStorage.Float11;
        pFVar35[4].ComparisonIndex = (FNameEntryId)(pFVar31->Value).FloatStorage.Float02;
        pFVar35[4].Number = (uint)fVar20;
        pFVar35[5].ComparisonIndex = (FNameEntryId)fVar21;
        pFVar35[5].Number = (uint)fVar22;
        fVar20 = (pFVar31->Value).FloatStorage.Float13;
        fVar21 = (pFVar31->Value).FloatStorage.Float20;
        fVar22 = (pFVar31->Value).FloatStorage.Float21;
        pFVar35[6].ComparisonIndex = (FNameEntryId)(pFVar31->Value).FloatStorage.Float12;
        pFVar35[6].Number = (uint)fVar20;
        pFVar35[7].ComparisonIndex = (FNameEntryId)fVar21;
        pFVar35[7].Number = (uint)fVar22;
        fVar20 = (pFVar31->Value).FloatStorage.Float23;
        fVar21 = (pFVar31->Value).FloatStorage.Float30;
        fVar22 = (pFVar31->Value).FloatStorage.Float31;
        pFVar35[8].ComparisonIndex = (FNameEntryId)(pFVar31->Value).FloatStorage.Float22;
        pFVar35[8].Number = (uint)fVar20;
        pFVar35[9].ComparisonIndex = (FNameEntryId)fVar21;
        pFVar35[9].Number = (uint)fVar22;
        fVar20 = (pFVar31->Value).FloatStorage.Float33;
        fVar21 = (pFVar31->Value).FloatStorage.Float00_2;
        fVar22 = (pFVar31->Value).FloatStorage.Float01_2;
        pFVar35[10].ComparisonIndex = (FNameEntryId)(pFVar31->Value).FloatStorage.Float32;
        pFVar35[10].Number = (uint)fVar20;
        pFVar35[0xb].ComparisonIndex = (FNameEntryId)fVar21;
        pFVar35[0xb].Number = (uint)fVar22;
        fVar20 = (pFVar31->Value).FloatStorage.Float03_2;
        fVar21 = (pFVar31->Value).FloatStorage.Float10_2;
        fVar22 = (pFVar31->Value).FloatStorage.Float11_2;
        pFVar35[0xc].ComparisonIndex = (FNameEntryId)(pFVar31->Value).FloatStorage.Float02_2;
        pFVar35[0xc].Number = (uint)fVar20;
        pFVar35[0xd].ComparisonIndex = (FNameEntryId)fVar21;
        pFVar35[0xd].Number = (uint)fVar22;
        fVar20 = (pFVar31->Value).FloatStorage.Float13_2;
        fVar21 = (pFVar31->Value).FloatStorage.Float20_2;
        fVar22 = (pFVar31->Value).FloatStorage.Float21_2;
        pFVar35[0xe].ComparisonIndex = (FNameEntryId)(pFVar31->Value).FloatStorage.Float12_2;
        pFVar35[0xe].Number = (uint)fVar20;
        pFVar35[0xf].ComparisonIndex = (FNameEntryId)fVar21;
        pFVar35[0xf].Number = (uint)fVar22;
        lVar34 = lVar34 + -1;
        pFVar32 = (FRigControlCopy *)&(pFVar31->Value).FloatStorage.Float22_2;
      } while (lVar34 != 0);
      fVar20 = (pFVar31->Value).FloatStorage.Float23_2;
      fVar21 = (pFVar31->Value).FloatStorage.Float30_2;
      fVar22 = (pFVar31->Value).FloatStorage.Float31_2;
      pFVar2->ComparisonIndex = (FNameEntryId)(pFVar31->Value).FloatStorage.Float22_2;
      pFVar2->Number = (uint)fVar20;
      pFVar35[0x11].ComparisonIndex = (FNameEntryId)fVar21;
      pFVar35[0x11].Number = (uint)fVar22;
      fVar20 = (pFVar31->Value).FloatStorage.Float33_2;
      FVar19 = *(FName *)&(pFVar31->Value).FloatStorage.bValid;
      pFVar35[0x12].ComparisonIndex = (FNameEntryId)(pFVar31->Value).FloatStorage.Float32_2;
      pFVar35[0x12].Number = (uint)fVar20;
      pFVar35[0x13] = FVar19;
      if (bVar26) {
        local_4d8.bInteractiveDialogEnabled = false;
        local_4d8._9_7_ = 0;
        local_4d8._padding_ = (longlong)&___7FEmptyRigDependenciesProvider__6B_;
        local_4f8.Type = pFVar4->field_0x10;
        local_4f8._1_3_ = *(undefined3 *)&pFVar4->field_0x11;
        local_4f8.Name.ComparisonIndex.Value = *(uint *)&pFVar4->field_0x14;
        local_508.Name.Number = local_570.Name.Number;
        local_4f8.Name.Number = *(uint *)&pFVar4->field_0x18;
        URigHierarchy::SwitchToParent
                  ((pUVar24->DynamicHierarchy).field0_0x0.DebugPtr,&local_4f8,&local_508,false,true,
                   &local_4d8,(FString *)0x0);
        pUVar5 = (pUVar24->DynamicHierarchy).field0_0x0.DebugPtr;
        local_4e8.Type = pFVar4->field_0x10;
        local_4e8._1_3_ = *(undefined3 *)&pFVar4->field_0x11;
        local_4e8.Name.ComparisonIndex.Value = *(uint *)&pFVar4->field_0x14;
        local_4e8.Name.Number = *(uint *)&pFVar4->field_0x18;
        iVar37 = URigHierarchy::GetIndex(pUVar5,&local_4e8,true);
        local_3e8.Rotation.XY.m128d_f64[1]._0_4_ = SUB84(dVar8,0);
        local_3e8.Rotation.XY.m128d_f64[0] = dVar7;
        local_3e8.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar8 >> 0x20);
        local_3e8.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar10,0);
        local_3e8.Rotation.ZW.m128d_f64[0] = dVar9;
        local_3e8.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar10 >> 0x20);
        local_3e8.Translation.XY.m128d_f64[1]._0_4_ = SUB84(dVar12,0);
        local_3e8.Translation.XY.m128d_f64[0] = dVar11;
        local_3e8.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar12 >> 0x20);
        local_3e8.Translation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar14,0);
        local_3e8.Translation.ZW.m128d_f64[0] = dVar13;
        local_3e8.Translation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar14 >> 0x20);
        local_3e8.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84(dVar16,0);
        local_3e8.Scale3D.XY.m128d_f64[0] = dVar15;
        local_3e8.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar16 >> 0x20);
        local_3e8.Scale3D.ZW.m128d_f64[1]._0_4_ = SUB84(dVar18,0);
        local_3e8.Scale3D.ZW.m128d_f64[0] = dVar17;
        local_3e8.Scale3D.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar18 >> 0x20);
        URigHierarchy::SetGlobalTransformByIndex(pUVar5,iVar37,&local_3e8,false,true,false,false);
      }
    }
    piVar38 = piVar38 + 2;
    uVar33 = local_578 & 0xffffffff;
    iVar37 = local_388._8_4_;
  }
  if (local_378.Elements._8_4_ != local_378.Elements._52_4_) {
    TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
    UnhashElements((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                    *)(local_388 + 0x10));
    bVar26 = (longlong)local_378.Elements._8_8_ < 0;
    local_378.Elements._8_8_ = local_378.Elements._8_8_ & 0xffffffff00000000;
    if (bVar26) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x14,4,0,(ForAnyElementType *)(local_388 + 0x10),0,(int *)(local_388 + 0x1c));
    }
    local_378.Elements._48_4_ = 0xffffffff;
    local_378.Elements._52_4_ = 0;
    local_378.Elements._40_4_ = 0;
    iVar37 = local_388._8_4_;
  }
  local_58c = 0;
  if (0 < iVar37) {
    do {
      uVar23 = local_58c;
      uVar29 = 0;
      if ((int)local_58c < iVar37) {
        uVar29 = ~local_58c >> 0x1f;
      }
      if ((uVar29 == 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar26)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_4c0 = &local_58c;
      local_4c8 = (FScriptContainerElement *)(local_388._0_8_ + (longlong)(int)uVar23 * 0x220);
      TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<FName_const_&,int_const_&>_>
                ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                  *)(local_388 + 0x10),&local_550,(bool *)&local_4c8);
      local_58c = local_58c + 1;
      iVar37 = local_388._8_4_;
    } while ((int)local_58c < (int)local_388._8_4_);
  }
  if (local_580 != (int *)0x0) {
    FMemory::Free(local_580);
  }
LAB_14a46beb5:
  iVar28 = local_560.ArrayNum;
  pFVar2 = (FName *)(local_560.AllocatorInstance.Data + (longlong)iVar28 * 8);
  FVar36.Data = local_560.AllocatorInstance.Data;
  while( true ) {
    if (local_560.ArrayNum != iVar28) {
      `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_596);
    }
    if ((FName *)FVar36.Data == pFVar2) break;
    if ((bool)uVar39 == false) {
      (**(code **)(pUVar24->_padding_ + 0x428))(pUVar24,FVar36.Data,1,0);
      FVar36.Data = FVar36.Data + 8;
    }
    else {
      pFVar32 = FControlRigPoseMirrorTable::GetControl
                          (&local_595,pUVar24,(FControlRigControlPose *)local_388,
                           *(FName *)FVar36.Data,(bool)uVar39);
      pcVar6 = *(code **)(pUVar24->_padding_ + 0x428);
      if (pFVar32 == (FRigControlCopy *)0x0) {
        (*pcVar6)(pUVar24,FVar36.Data,1);
        FVar36.Data = FVar36.Data + 8;
      }
      else {
        (*pcVar6)(pUVar24,pFVar32);
        FVar36.Data = FVar36.Data + 8;
      }
    }
  }
  local_378.HashSize = 0;
  if (local_378.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_378.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_388 + 0x10));
  if ((FRigControlCopy *)local_388._0_8_ != (FRigControlCopy *)0x0) {
    FMemory::Free((void *)local_388._0_8_);
  }
  if ((FName *)local_560.AllocatorInstance.Data != (FName *)0x0) {
    FMemory::Free(local_560.AllocatorInstance.Data);
  }
  return;
}

// execSetUpMirrorMatchTable @ 14a46bfc0

void __cdecl
UControlRigPoseAsset::execSetUpMirrorMatchTable(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  return;
}

