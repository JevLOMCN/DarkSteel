// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 16

// StaticClass @ 14dee62a0

UClass * __cdecl UIKRetargetPinBoneController::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRetargetPinBoneController.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRetargetPinBoneController",
               &Z_Registration_Info_UClass_UIKRetargetPinBoneController.InnerSingleton,
               StaticRegisterNativesUIKRetargetPinBoneController,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UIKRetargetPinBoneController>,
               InternalVTableHelperCtorCaller<UIKRetargetPinBoneController>,local_res8,
               UIKRetargetOpControllerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRetargetPinBoneController.InnerSingleton;
}

// UIKRetargetPinBoneController @ 14df193e0

UIKRetargetPinBoneController * __thiscall
UIKRetargetPinBoneController::UIKRetargetPinBoneController
          (UIKRetargetPinBoneController *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined ***)this = &___7UIKRetargetPinBoneController__6B_;
  return this;
}

// UIKRetargetPinBoneController @ 14df19410

UIKRetargetPinBoneController * __thiscall
UIKRetargetPinBoneController::UIKRetargetPinBoneController
          (UIKRetargetPinBoneController *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined ***)this = &___7UIKRetargetPinBoneController__6B_;
  return this;
}

// ~UIKRetargetPinBoneController @ 14df1c340

void __thiscall
UIKRetargetPinBoneController::~UIKRetargetPinBoneController(UIKRetargetPinBoneController *this)

{
  *(undefined ***)this = &___7UIKRetargetOpControllerBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// ClearAllBonePairs @ 14df2a8c0

void __thiscall UIKRetargetPinBoneController::ClearAllBonePairs(UIKRetargetPinBoneController *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&this->field_0x28;
  *(undefined4 *)(lVar1 + 0x20) = 0;
  if (*(int *)(lVar1 + 0x24) < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x170,0x10,0,(ForAnyElementType *)(lVar1 + 0x18),0,(int *)(lVar1 + 0x24));
  }
  return;
}

// GetAllBonePairs @ 14df34b60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_> * __thiscall
UIKRetargetPinBoneController::GetAllBonePairs
          (UIKRetargetPinBoneController *this,
          TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
          *__return_storage_ptr__)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStackY_d8 [32];
  undefined1 local_a8 [4];
  undefined1 local_a4 [4];
  longlong local_a0;
  longlong local_98;
  undefined1 local_88 [32];
  void *local_68;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  lVar2 = *(longlong *)&this->field_0x28;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_68 = (void *)0x0;
  local_60 = 0;
  local_5c = 0x80;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = (ForElementType<FSetElementId>)0x0;
  local_40 = 0;
  iVar1 = *(int *)(lVar2 + 0x20);
  lVar3 = *(longlong *)(lVar2 + 0x18);
  lVar4 = (longlong)iVar1 * 0x170 + lVar3;
  while( true ) {
    if (*(int *)(lVar2 + 0x20) != iVar1) {
      `TCheckedPointerIterator<FPinBoneData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_a8);
    }
    if (lVar3 == lVar4) break;
    local_a0 = lVar3 + 0x10;
    local_98 = lVar3;
    TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<FName_const_&,FName_const_&>_>
              ((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
                *)local_88,(TPairInitializer<FName_const_&,FName_const_&> *)local_a4,
               (bool *)&local_a0);
    lVar3 = lVar3 + 0x170;
  }
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::
  Move<TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>_>
            ((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
              *)__return_storage_ptr__,
             (TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
              *)local_88);
  local_40 = 0;
  if (local_48 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_48);
  }
  iVar1 = SUB84(local_88._8_8_,4);
  local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
  }
  local_58 = 0xffffffff;
  local_54 = 0;
  local_60 = 0;
  if (0x80 < local_5c) {
    local_5c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_88._0_8_);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14df3c860

UClass * __cdecl UIKRetargetPinBoneController::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRetargetPinBoneController.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRetargetPinBoneController",
               &Z_Registration_Info_UClass_UIKRetargetPinBoneController.InnerSingleton,
               StaticRegisterNativesUIKRetargetPinBoneController,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UIKRetargetPinBoneController>,
               InternalVTableHelperCtorCaller<UIKRetargetPinBoneController>,local_res8,
               UIKRetargetOpControllerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRetargetPinBoneController.InnerSingleton;
}

// GetSettings @ 14df3ff50

FIKRetargetPinBoneOpSettings * __thiscall
UIKRetargetPinBoneController::GetSettings
          (UIKRetargetPinBoneController *this,FIKRetargetPinBoneOpSettings *__return_storage_ptr__)

{
  FIKRetargetPinBoneOpSettings::FIKRetargetPinBoneOpSettings
            (__return_storage_ptr__,*(FIKRetargetPinBoneOpSettings **)&this->field_0x28);
  return __return_storage_ptr__;
}

// SetBonePair @ 14df53ef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __thiscall
UIKRetargetPinBoneController::SetBonePair
          (UIKRetargetPinBoneController *this,FName param_1,FName param_2)

{
  longlong lVar1;
  FPinBoneData *pFVar2;
  code *pcVar3;
  FName FVar4;
  undefined4 uVar5;
  FCompactPoseBoneIndex FVar6;
  bool bVar7;
  int iVar8;
  FPinBoneData *pFVar9;
  longlong lVar10;
  FName *pFVar11;
  FName *pFVar12;
  undefined1 auStack_1f8 [32];
  FPinBoneData *local_1d8;
  FPinBoneData *local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined1 local_1a8 [16];
  FPinBoneData local_198;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  lVar1 = *(longlong *)&this->field_0x28;
  iVar8 = *(int *)(lVar1 + 0x20);
  pFVar12 = *(FName **)(lVar1 + 0x18);
  pFVar11 = pFVar12 + (longlong)iVar8 * 0x2e;
  while( true ) {
    if (*(int *)(lVar1 + 0x20) != iVar8) {
      local_1a8[0] = 0;
      `TCheckedPointerIterator<FPinBoneData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_1a8);
    }
    if (pFVar12 == pFVar11) break;
    if (pFVar12[2] == param_2) {
      *pFVar12 = param_1;
      pFVar12[1].Number = 0xffffffff;
      pFVar12[1].ComparisonIndex.Value = 0x7fffffff;
      return;
    }
    pFVar12 = pFVar12 + 0x2e;
  }
  FPinBoneData::FPinBoneData(&local_198);
  local_198.BoneToCopyFrom.BoneName = param_1;
  local_198.BoneToCopyTo.BoneName = param_2;
  pFVar2 = *(FPinBoneData **)(lVar1 + 0x18);
  if ((pFVar2 <= &local_198) && (&local_198 < pFVar2 + *(int *)(lVar1 + 0x24))) {
    local_1c0 = (longlong)*(int *)(lVar1 + 0x20);
    local_1b8 = 0x170;
    local_1d8 = &local_198;
    local_1d0 = pFVar2;
    local_1c8 = (longlong)*(int *)(lVar1 + 0x24);
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar8 = *(int *)(lVar1 + 0x20);
  if (iVar8 == *(int *)(lVar1 + 0x24)) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x170,0x10,(ForAnyElementType *)(lVar1 + 0x18),(int *)(lVar1 + 0x24));
  }
  *(int *)(lVar1 + 0x20) = iVar8 + 1;
  lVar10 = 2;
  pFVar2 = &local_198;
  pFVar12 = (FName *)((longlong)iVar8 * 0x170 + *(longlong *)(lVar1 + 0x18));
  do {
    pFVar11 = pFVar12;
    pFVar9 = pFVar2;
    uVar5 = *(undefined4 *)&(pFVar9->BoneToCopyFrom).field_0x8;
    FVar6 = (pFVar9->BoneToCopyFrom).CachedCompactPoseIndex;
    pFVar2 = (FPinBoneData *)&(pFVar9->LocalRefPoseBoneToCopyTo).Scale3D;
    *pFVar11 = (pFVar9->BoneToCopyFrom).BoneName;
    pFVar11[1].ComparisonIndex = (FNameEntryId)uVar5;
    pFVar11[1].Number = (uint)FVar6;
    uVar5 = *(undefined4 *)&(pFVar9->BoneToCopyTo).field_0x8;
    FVar6 = (pFVar9->BoneToCopyTo).CachedCompactPoseIndex;
    pFVar11[2] = (pFVar9->BoneToCopyTo).BoneName;
    pFVar11[3].ComparisonIndex = (FNameEntryId)uVar5;
    pFVar11[3].Number = (uint)FVar6;
    FVar4 = (FName)(pFVar9->LastUsedSourceScale).Pivot.field0_0x0._s_0.X;
    pFVar11[4] = (FName)(pFVar9->LastUsedSourceScale).Factor;
    pFVar11[5] = FVar4;
    FVar4 = (FName)(pFVar9->LastUsedSourceScale).Pivot.field0_0x0._s_0.Z;
    pFVar11[6] = (FName)(pFVar9->LastUsedSourceScale).Pivot.field0_0x0._s_0.Y;
    pFVar11[7] = FVar4;
    FVar4 = *(FName *)((pFVar9->LocalRefPoseBoneToCopyTo).Rotation.XY.m128d_f64 + 1);
    pFVar11[8] = (FName)(pFVar9->LocalRefPoseBoneToCopyTo).Rotation.XY.m128d_f64[0];
    pFVar11[9] = FVar4;
    FVar4 = *(FName *)((pFVar9->LocalRefPoseBoneToCopyTo).Rotation.ZW.m128d_f64 + 1);
    pFVar11[10] = (FName)(pFVar9->LocalRefPoseBoneToCopyTo).Rotation.ZW.m128d_f64[0];
    pFVar11[0xb] = FVar4;
    FVar4 = *(FName *)((pFVar9->LocalRefPoseBoneToCopyTo).Translation.XY.m128d_f64 + 1);
    pFVar11[0xc] = (FName)(pFVar9->LocalRefPoseBoneToCopyTo).Translation.XY.m128d_f64[0];
    pFVar11[0xd] = FVar4;
    FVar4 = *(FName *)((pFVar9->LocalRefPoseBoneToCopyTo).Translation.ZW.m128d_f64 + 1);
    pFVar11[0xe] = (FName)(pFVar9->LocalRefPoseBoneToCopyTo).Translation.ZW.m128d_f64[0];
    pFVar11[0xf] = FVar4;
    lVar10 = lVar10 + -1;
    pFVar12 = pFVar11 + 0x10;
  } while (lVar10 != 0);
  FVar4 = *(FName *)((pFVar9->LocalRefPoseBoneToCopyTo).Scale3D.XY.m128d_f64 + 1);
  pFVar11[0x10] = (FName)(((VectorRegister4Double *)pFVar2)->XY).m128d_f64[0];
  pFVar11[0x11] = FVar4;
  FVar4 = *(FName *)((pFVar9->LocalRefPoseBoneToCopyTo).Scale3D.ZW.m128d_f64 + 1);
  pFVar11[0x12] = (FName)(pFVar9->LocalRefPoseBoneToCopyTo).Scale3D.ZW.m128d_f64[0];
  pFVar11[0x13] = FVar4;
  FVar4 = *(FName *)((pFVar9->LocalRefPoseBoneToCopyFrom).Rotation.XY.m128d_f64 + 1);
  pFVar11[0x14] = (FName)(pFVar9->LocalRefPoseBoneToCopyFrom).Rotation.XY.m128d_f64[0];
  pFVar11[0x15] = FVar4;
  FVar4 = *(FName *)((pFVar9->LocalRefPoseBoneToCopyFrom).Rotation.ZW.m128d_f64 + 1);
  pFVar11[0x16] = (FName)(pFVar9->LocalRefPoseBoneToCopyFrom).Rotation.ZW.m128d_f64[0];
  pFVar11[0x17] = FVar4;
  FVar4 = *(FName *)((pFVar9->LocalRefPoseBoneToCopyFrom).Translation.XY.m128d_f64 + 1);
  pFVar11[0x18] = (FName)(pFVar9->LocalRefPoseBoneToCopyFrom).Translation.XY.m128d_f64[0];
  pFVar11[0x19] = FVar4;
  FVar4 = *(FName *)((pFVar9->LocalRefPoseBoneToCopyFrom).Translation.ZW.m128d_f64 + 1);
  pFVar11[0x1a] = (FName)(pFVar9->LocalRefPoseBoneToCopyFrom).Translation.ZW.m128d_f64[0];
  pFVar11[0x1b] = FVar4;
  FVar4 = *(FName *)((pFVar9->LocalRefPoseBoneToCopyFrom).Scale3D.XY.m128d_f64 + 1);
  pFVar11[0x1c] = (FName)(pFVar9->LocalRefPoseBoneToCopyFrom).Scale3D.XY.m128d_f64[0];
  pFVar11[0x1d] = FVar4;
  return;
}

// SetSettings @ 14df55e80

void __thiscall
UIKRetargetPinBoneController::SetSettings
          (UIKRetargetPinBoneController *this,FIKRetargetPinBoneOpSettings *param_1)

{
  FScriptContainerElement *pFVar1;
  
  (**(code **)(**(longlong **)&this->field_0x28 + 8))();
  pFVar1 = (param_1->BonesToPin).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  param_1->_padding_ = (longlong)&___7FIKRetargetOpSettingsBase__6B_;
  if ((UObject *)param_1->_padding_ != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject((UObject *)param_1->_padding_);
    param_1->_padding_ = 0;
  }
  return;
}

// StaticRegisterNativesUIKRetargetPinBoneController @ 14df59e70

void __cdecl UIKRetargetPinBoneController::StaticRegisterNativesUIKRetargetPinBoneController(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 5;
  local_18.DataPtr = Z_Construct_UClass_UIKRetargetPinBoneController_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execClearAllBonePairs @ 14df63230

void __cdecl
UIKRetargetPinBoneController::execClearAllBonePairs(UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong lVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar1 = *(longlong *)(param_1 + 1);
  *(undefined4 *)(lVar1 + 0x20) = 0;
  if (*(int *)(lVar1 + 0x24) < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x170,0x10,0,(ForAnyElementType *)(lVar1 + 0x18),0,(int *)(lVar1 + 0x24));
  }
  return;
}

// execGetAllBonePairs @ 14df638e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UIKRetargetPinBoneController::execGetAllBonePairs(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStackY_128 [32];
  undefined1 local_f8 [4];
  undefined1 local_f4 [4];
  longlong local_f0;
  longlong local_e8;
  undefined1 local_d8 [32];
  void *local_b8;
  undefined4 local_b0;
  uint local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  ForElementType<FSetElementId> local_98;
  int local_90;
  undefined1 local_88 [32];
  void *local_68;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_128;
  local_5c = 0x80;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_68 = (void *)0x0;
  local_60 = 0;
  local_58 = 0xffffffff;
  local_54 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = *(longlong *)(param_1 + 1);
  local_48 = (ForElementType<FSetElementId>)0x0;
  local_40 = 0;
  iVar1 = *(int *)(lVar2 + 0x20);
  lVar3 = *(longlong *)(lVar2 + 0x18);
  lVar4 = (longlong)iVar1 * 0x170 + lVar3;
  while( true ) {
    if (*(int *)(lVar2 + 0x20) != iVar1) {
      `TCheckedPointerIterator<FPinBoneData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_f8);
    }
    if (lVar3 == lVar4) break;
    local_f0 = lVar3 + 0x10;
    local_e8 = lVar3;
    TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<FName_const_&,FName_const_&>_>
              ((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
                *)local_88,(TPairInitializer<FName_const_&,FName_const_&> *)local_f4,
               (bool *)&local_f0);
    lVar3 = lVar3 + 0x170;
  }
  local_d8._0_8_ = (FScriptContainerElement *)0x0;
  local_d8._8_8_ = 0;
  local_b8 = (void *)0x0;
  local_b0 = 0;
  local_ac = 0x80;
  local_a8 = 0xffffffff;
  local_a4 = 0;
  local_98 = (ForElementType<FSetElementId>)0x0;
  local_90 = 0;
  TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::
  Move<TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>_>
            ((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
              *)local_d8,
             (TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
              *)local_88);
  local_40 = 0;
  if (local_48 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_48);
  }
  iVar1 = SUB84(local_88._8_8_,4);
  local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
  }
  local_58 = 0xffffffff;
  local_54 = 0;
  local_60 = 0;
  if (0x80 < local_5c) {
    local_5c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_88._0_8_);
  }
  if (param_3 != local_d8) {
    TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::
    Move<TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>_>
              (param_3,(TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
                        *)local_d8);
  }
  local_90 = 0;
  if (local_98 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98);
  }
  iVar1 = SUB84(local_d8._8_8_,4);
  local_d8._8_8_ = local_d8._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,(ForAnyElementType *)local_d8,0,(int *)(local_d8 + 0xc));
  }
  local_a8 = 0xffffffff;
  local_a4 = 0;
  local_b0 = 0;
  if (0x80 < local_ac) {
    local_ac = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10),0);
  }
  if (local_b8 != (void *)0x0) {
    FMemory::Free(local_b8);
  }
  if ((FScriptContainerElement *)local_d8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_d8._0_8_);
  }
  return;
}

// execGetSettings @ 14df66310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UIKRetargetPinBoneController::execGetSettings(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 *puVar1;
  UObjectBase *pUVar2;
  longlong this;
  undefined1 auStack_138 [32];
  FIKRetargetPinBoneOpSettings local_118;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_138;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FIKRetargetPinBoneOpSettings::FIKRetargetPinBoneOpSettings
            (&local_118,*(FIKRetargetPinBoneOpSettings **)(param_1 + 1));
  this = local_118._padding_;
  *(undefined4 *)((longlong)param_3 + 8) = (undefined4)local_118._padding_;
  *(undefined1 *)((longlong)param_3 + 0xc) = local_118._padding_._4_1_;
  pUVar2 = *(UObjectBase **)((longlong)param_3 + 0x10);
  if ((UObjectBase *)local_118._padding_ == (UObjectBase *)0x0) {
    if (pUVar2 != (UObjectBase *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)pUVar2);
      *(undefined8 *)((longlong)param_3 + 0x10) = 0;
    }
  }
  else if (pUVar2 != (UObjectBase *)local_118._padding_) {
    if (pUVar2 != (UObjectBase *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)pUVar2);
    }
    UObjectBase::AddRef((UObjectBase *)this);
    *(longlong *)((longlong)param_3 + 0x10) = this;
  }
  puVar1 = (undefined8 *)((longlong)param_3 + 0x18);
  if ((TArray<FPinBoneData,TSizedDefaultAllocator<32>_> *)puVar1 != &local_118.BonesToPin) {
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
    *puVar1 = local_118.BonesToPin.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 0x20) = local_118.BonesToPin.ArrayNum;
    *(int *)((longlong)param_3 + 0x24) = local_118.BonesToPin.ArrayMax;
    local_118.BonesToPin.ArrayNum = 0;
    local_118.BonesToPin.ArrayMax = 0;
    local_118.BonesToPin.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  *(ERetargetSourceOrTarget *)((longlong)param_3 + 0x28) = local_118.SkeletonToCopyFrom;
  *(bool *)((longlong)param_3 + 0x29) = local_118.bCopyTranslation;
  *(EPinBoneTranslationMode *)((longlong)param_3 + 0x2a) = local_118.TranslationMode;
  *(bool *)((longlong)param_3 + 0x2b) = local_118.bCopyRotation;
  *(EPinBoneRotationMode *)((longlong)param_3 + 0x2c) = local_118.RotationMode;
  *(bool *)((longlong)param_3 + 0x2d) = local_118.bCopyScale;
  *(bool *)((longlong)param_3 + 0x2e) = local_118.bPropagateToChildren;
  *(double *)((longlong)param_3 + 0x30) = local_118.GlobalOffset.Rotation.XY.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x38) = local_118.GlobalOffset.Rotation.XY.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x40) = local_118.GlobalOffset.Rotation.ZW.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x48) = local_118.GlobalOffset.Rotation.ZW.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x50) = local_118.GlobalOffset.Translation.XY.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x58) = local_118.GlobalOffset.Translation.XY.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x60) = local_118.GlobalOffset.Translation.ZW.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x68) = local_118.GlobalOffset.Translation.ZW.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x70) = local_118.GlobalOffset.Scale3D.XY.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x78) = local_118.GlobalOffset.Scale3D.XY.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x90) = local_118.LocalOffset.Rotation.XY.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x98) = local_118.LocalOffset.Rotation.XY.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x80) = local_118.GlobalOffset.Scale3D.ZW.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x88) = local_118.GlobalOffset.Scale3D.ZW.m128d_f64[1];
  *(double *)((longlong)param_3 + 0xa0) = local_118.LocalOffset.Rotation.ZW.m128d_f64[0];
  *(double *)((longlong)param_3 + 0xa8) = local_118.LocalOffset.Rotation.ZW.m128d_f64[1];
  *(double *)((longlong)param_3 + 0xb0) = local_118.LocalOffset.Translation.XY.m128d_f64[0];
  *(double *)((longlong)param_3 + 0xb8) = local_118.LocalOffset.Translation.XY.m128d_f64[1];
  *(double *)((longlong)param_3 + 0xc0) = local_118.LocalOffset.Translation.ZW.m128d_f64[0];
  *(double *)((longlong)param_3 + 200) = local_118.LocalOffset.Translation.ZW.m128d_f64[1];
  *(double *)((longlong)param_3 + 0xd0) = local_118.LocalOffset.Scale3D.XY.m128d_f64[0];
  *(double *)((longlong)param_3 + 0xd8) = local_118.LocalOffset.Scale3D.XY.m128d_f64[1];
  *(double *)((longlong)param_3 + 0xe0) = local_118.LocalOffset.Scale3D.ZW.m128d_f64[0];
  *(double *)((longlong)param_3 + 0xe8) = local_118.LocalOffset.Scale3D.ZW.m128d_f64[1];
  if (local_118.BonesToPin.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.BonesToPin.AllocatorInstance.Data);
  }
  local_118._padding_ = (longlong)&___7FIKRetargetOpSettingsBase__6B_;
  if ((UObjectBase *)local_118._padding_ != (UObjectBase *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_118._padding_);
  }
  return;
}

// execSetBonePair @ 14df670e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __cdecl
UIKRetargetPinBoneController::execSetBonePair(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  FPinBoneData *pFVar3;
  code *pcVar4;
  FName FVar5;
  undefined4 uVar6;
  FCompactPoseBoneIndex FVar7;
  undefined8 uVar8;
  FName *pFVar9;
  bool bVar10;
  int iVar11;
  FPinBoneData *pFVar12;
  longlong lVar13;
  FName *pFVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined1 auStack_218 [32];
  FPinBoneData *local_1f8;
  FPinBoneData *local_1f0;
  longlong local_1e8;
  longlong local_1e0;
  undefined8 local_1d8;
  undefined1 local_1c8 [8];
  FName local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  FPinBoneData local_1a8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_218;
  local_1b8 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1b8);
  }
  local_1c0.ComparisonIndex.Value = 0;
  local_1c0.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1c0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1c0);
  }
  uVar8 = local_1b8;
  FVar5 = local_1c0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = *(longlong *)(param_1 + 1);
  local_1b0 = local_1b8;
  iVar11 = *(int *)(lVar2 + 0x20);
  puVar16 = *(undefined8 **)(lVar2 + 0x18);
  puVar15 = puVar16 + (longlong)iVar11 * 0x2e;
  while( true ) {
    if (*(int *)(lVar2 + 0x20) != iVar11) {
      local_1c8[0] = 0;
      `TCheckedPointerIterator<FPinBoneData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_1c8);
    }
    if (puVar16 == puVar15) break;
    if (*(FName *)(puVar16 + 2) == FVar5) {
      *puVar16 = uVar8;
      *(undefined4 *)((longlong)puVar16 + 0xc) = 0xffffffff;
      *(undefined4 *)(puVar16 + 1) = 0x7fffffff;
      return;
    }
    puVar16 = puVar16 + 0x2e;
  }
  FPinBoneData::FPinBoneData(&local_1a8);
  local_1a8.BoneToCopyFrom.BoneName.Number = local_1b0._4_4_;
  local_1a8.BoneToCopyFrom.BoneName.ComparisonIndex.Value = (uint)uVar8;
  local_1a8.BoneToCopyTo.BoneName = FVar5;
  pFVar3 = *(FPinBoneData **)(lVar2 + 0x18);
  if ((pFVar3 <= &local_1a8) && (&local_1a8 < pFVar3 + *(int *)(lVar2 + 0x24))) {
    local_1e0 = (longlong)*(int *)(lVar2 + 0x20);
    local_1d8 = 0x170;
    local_1f8 = &local_1a8;
    local_1f0 = pFVar3;
    local_1e8 = (longlong)*(int *)(lVar2 + 0x24);
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar11 = *(int *)(lVar2 + 0x20);
  if (iVar11 == *(int *)(lVar2 + 0x24)) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x170,0x10,(ForAnyElementType *)(lVar2 + 0x18),(int *)(lVar2 + 0x24));
  }
  *(int *)(lVar2 + 0x20) = iVar11 + 1;
  lVar13 = 2;
  pFVar3 = &local_1a8;
  pFVar9 = (FName *)((longlong)iVar11 * 0x170 + *(longlong *)(lVar2 + 0x18));
  do {
    pFVar14 = pFVar9;
    pFVar12 = pFVar3;
    uVar6 = *(undefined4 *)&(pFVar12->BoneToCopyFrom).field_0x8;
    FVar7 = (pFVar12->BoneToCopyFrom).CachedCompactPoseIndex;
    pFVar3 = (FPinBoneData *)&(pFVar12->LocalRefPoseBoneToCopyTo).Scale3D;
    *pFVar14 = (pFVar12->BoneToCopyFrom).BoneName;
    pFVar14[1].ComparisonIndex = (FNameEntryId)uVar6;
    pFVar14[1].Number = (uint)FVar7;
    uVar6 = *(undefined4 *)&(pFVar12->BoneToCopyTo).field_0x8;
    FVar7 = (pFVar12->BoneToCopyTo).CachedCompactPoseIndex;
    pFVar14[2] = (pFVar12->BoneToCopyTo).BoneName;
    pFVar14[3].ComparisonIndex = (FNameEntryId)uVar6;
    pFVar14[3].Number = (uint)FVar7;
    FVar5 = (FName)(pFVar12->LastUsedSourceScale).Pivot.field0_0x0._s_0.X;
    pFVar14[4] = (FName)(pFVar12->LastUsedSourceScale).Factor;
    pFVar14[5] = FVar5;
    FVar5 = (FName)(pFVar12->LastUsedSourceScale).Pivot.field0_0x0._s_0.Z;
    pFVar14[6] = (FName)(pFVar12->LastUsedSourceScale).Pivot.field0_0x0._s_0.Y;
    pFVar14[7] = FVar5;
    FVar5 = *(FName *)((pFVar12->LocalRefPoseBoneToCopyTo).Rotation.XY.m128d_f64 + 1);
    pFVar14[8] = (FName)(pFVar12->LocalRefPoseBoneToCopyTo).Rotation.XY.m128d_f64[0];
    pFVar14[9] = FVar5;
    FVar5 = *(FName *)((pFVar12->LocalRefPoseBoneToCopyTo).Rotation.ZW.m128d_f64 + 1);
    pFVar14[10] = (FName)(pFVar12->LocalRefPoseBoneToCopyTo).Rotation.ZW.m128d_f64[0];
    pFVar14[0xb] = FVar5;
    FVar5 = *(FName *)((pFVar12->LocalRefPoseBoneToCopyTo).Translation.XY.m128d_f64 + 1);
    pFVar14[0xc] = (FName)(pFVar12->LocalRefPoseBoneToCopyTo).Translation.XY.m128d_f64[0];
    pFVar14[0xd] = FVar5;
    FVar5 = *(FName *)((pFVar12->LocalRefPoseBoneToCopyTo).Translation.ZW.m128d_f64 + 1);
    pFVar14[0xe] = (FName)(pFVar12->LocalRefPoseBoneToCopyTo).Translation.ZW.m128d_f64[0];
    pFVar14[0xf] = FVar5;
    lVar13 = lVar13 + -1;
    pFVar9 = pFVar14 + 0x10;
  } while (lVar13 != 0);
  FVar5 = *(FName *)((pFVar12->LocalRefPoseBoneToCopyTo).Scale3D.XY.m128d_f64 + 1);
  pFVar14[0x10] = (FName)(((VectorRegister4Double *)pFVar3)->XY).m128d_f64[0];
  pFVar14[0x11] = FVar5;
  FVar5 = *(FName *)((pFVar12->LocalRefPoseBoneToCopyTo).Scale3D.ZW.m128d_f64 + 1);
  pFVar14[0x12] = (FName)(pFVar12->LocalRefPoseBoneToCopyTo).Scale3D.ZW.m128d_f64[0];
  pFVar14[0x13] = FVar5;
  FVar5 = *(FName *)((pFVar12->LocalRefPoseBoneToCopyFrom).Rotation.XY.m128d_f64 + 1);
  pFVar14[0x14] = (FName)(pFVar12->LocalRefPoseBoneToCopyFrom).Rotation.XY.m128d_f64[0];
  pFVar14[0x15] = FVar5;
  FVar5 = *(FName *)((pFVar12->LocalRefPoseBoneToCopyFrom).Rotation.ZW.m128d_f64 + 1);
  pFVar14[0x16] = (FName)(pFVar12->LocalRefPoseBoneToCopyFrom).Rotation.ZW.m128d_f64[0];
  pFVar14[0x17] = FVar5;
  FVar5 = *(FName *)((pFVar12->LocalRefPoseBoneToCopyFrom).Translation.XY.m128d_f64 + 1);
  pFVar14[0x18] = (FName)(pFVar12->LocalRefPoseBoneToCopyFrom).Translation.XY.m128d_f64[0];
  pFVar14[0x19] = FVar5;
  FVar5 = *(FName *)((pFVar12->LocalRefPoseBoneToCopyFrom).Translation.ZW.m128d_f64 + 1);
  pFVar14[0x1a] = (FName)(pFVar12->LocalRefPoseBoneToCopyFrom).Translation.ZW.m128d_f64[0];
  pFVar14[0x1b] = FVar5;
  FVar5 = *(FName *)((pFVar12->LocalRefPoseBoneToCopyFrom).Scale3D.XY.m128d_f64 + 1);
  pFVar14[0x1c] = (FName)(pFVar12->LocalRefPoseBoneToCopyFrom).Scale3D.XY.m128d_f64[0];
  pFVar14[0x1d] = FVar5;
  return;
}

// execSetSettings @ 14df69c90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UIKRetargetPinBoneController::execSetSettings(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObjectBase *pUVar2;
  void *_Src;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStackY_258 [32];
  undefined **local_218;
  undefined4 local_210;
  undefined1 local_20c;
  UObjectBase *local_208;
  ForAnyElementType local_200;
  int local_1f8;
  int local_1f4;
  undefined1 local_1f0;
  undefined1 local_1ef;
  undefined1 local_1ee;
  undefined1 local_1ed;
  undefined1 local_1ec;
  undefined1 local_1eb;
  undefined1 local_1ea;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double dStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined **local_128;
  undefined4 local_120;
  undefined1 local_11c;
  UObjectBase *local_118;
  void *local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined2 local_fc;
  undefined1 local_fa;
  undefined1 local_f8 [16];
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48 [16];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_258;
  uVar6 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  uVar7 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_120 = 0xffffffff;
  local_11c = 1;
  local_118 = (UObjectBase *)0x0;
  local_128 = &___7FIKRetargetPinBoneOpSettings__6B_;
  local_e8 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  dStack_e0 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_110 = (void *)0x0;
  local_108 = 0;
  local_100 = 0x1000101;
  local_fc = 0x100;
  local_fa = 0;
  local_d8 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  dStack_d0 = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_c8 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  dStack_c0 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_b8 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  dStack_b0 = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  uVar4 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  uVar5 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  local_f8._8_4_ = uVar6;
  local_f8._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_f8._12_4_ = uVar7;
  local_a8._8_4_ = uVar4;
  local_a8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_a8._12_4_ = uVar5;
  local_48._8_4_ = uVar4;
  local_48._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_48._12_4_ = uVar5;
  local_98._8_4_ = uVar6;
  local_98._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_98._12_4_ = uVar7;
  local_88 = local_e8;
  dStack_80 = dStack_e0;
  local_78 = local_d8;
  dStack_70 = dStack_d0;
  local_68 = local_c8;
  dStack_60 = dStack_c0;
  local_58 = local_b8;
  uStack_50 = dStack_b0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_128,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_128);
  }
  pUVar2 = local_118;
  local_208 = (UObjectBase *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_210 = local_120;
  local_20c = local_11c;
  if (local_118 != (UObjectBase *)0x0) {
    UObjectBase::AddRef(local_118);
    local_208 = pUVar2;
  }
  _Src = local_110;
  lVar3 = (longlong)(int)local_108;
  local_218 = &___7FIKRetargetPinBoneOpSettings__6B_;
  local_200.Data = (FScriptContainerElement *)0x0;
  local_1f8 = (int)local_108;
  if ((int)local_108 == 0) {
    local_1f4 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x170,0x10,(int)local_108,0,&local_200,(int)local_108,&local_1f4);
    memcpy(local_200.Data,_Src,lVar3 * 0x170);
  }
  local_1f0 = (undefined1)local_100;
  local_1ef = local_100._1_1_;
  local_1e8 = local_f8._0_8_;
  uStack_1e0 = local_f8._8_8_;
  local_1d8 = local_e8;
  dStack_1d0 = dStack_e0;
  local_1ee = local_100._2_1_;
  local_1c8 = local_d8;
  dStack_1c0 = dStack_d0;
  local_1b8 = local_c8;
  dStack_1b0 = dStack_c0;
  local_1ed = local_100._3_1_;
  local_1a8 = local_b8;
  dStack_1a0 = dStack_b0;
  local_198 = local_a8._0_8_;
  uStack_190 = local_a8._8_8_;
  local_1ec = (undefined1)local_fc;
  local_188 = local_98._0_8_;
  uStack_180 = local_98._8_8_;
  local_178 = local_88;
  dStack_170 = dStack_80;
  local_1eb = local_fc._1_1_;
  local_168 = local_78;
  dStack_160 = dStack_70;
  local_158 = local_68;
  dStack_150 = dStack_60;
  local_1ea = local_fa;
  local_148 = (undefined4)local_58;
  uStack_144 = local_58._4_4_;
  uStack_140 = (undefined4)uStack_50;
  uStack_13c = uStack_50._4_4_;
  local_138 = local_48._0_4_;
  uStack_134 = local_48._4_4_;
  uStack_130 = local_48._8_4_;
  uStack_12c = local_48._12_4_;
  (**(code **)(**(longlong **)(param_1 + 1) + 8))(*(longlong **)(param_1 + 1),&local_218);
  if (local_200.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_200.Data);
  }
  local_218 = &___7FIKRetargetOpSettingsBase__6B_;
  if (local_208 != (UObjectBase *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_208);
  }
  if (local_110 != (void *)0x0) {
    FMemory::Free(local_110);
  }
  local_128 = &___7FIKRetargetOpSettingsBase__6B_;
  if (local_118 != (UObjectBase *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_118);
  }
  return;
}

