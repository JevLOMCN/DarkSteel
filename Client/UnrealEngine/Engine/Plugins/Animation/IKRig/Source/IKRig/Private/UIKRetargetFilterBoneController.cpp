// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 16

// StaticClass @ 14df08850

UClass * __cdecl UIKRetargetFilterBoneController::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRetargetFilterBoneController.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRetargetFilterBoneController",
               &Z_Registration_Info_UClass_UIKRetargetFilterBoneController.InnerSingleton,
               StaticRegisterNativesUIKRetargetFilterBoneController,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UIKRetargetFilterBoneController>,
               InternalVTableHelperCtorCaller<UIKRetargetFilterBoneController>,local_res8,
               UIKRetargetOpControllerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRetargetFilterBoneController.InnerSingleton;
}

// UIKRetargetFilterBoneController @ 14df19140

UIKRetargetFilterBoneController * __thiscall
UIKRetargetFilterBoneController::UIKRetargetFilterBoneController
          (UIKRetargetFilterBoneController *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined ***)this = &___7UIKRetargetFilterBoneController__6B_;
  return this;
}

// UIKRetargetFilterBoneController @ 14df19170

UIKRetargetFilterBoneController * __thiscall
UIKRetargetFilterBoneController::UIKRetargetFilterBoneController
          (UIKRetargetFilterBoneController *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined ***)this = &___7UIKRetargetFilterBoneController__6B_;
  return this;
}

// ~UIKRetargetFilterBoneController @ 14df1c280

void __thiscall
UIKRetargetFilterBoneController::~UIKRetargetFilterBoneController
          (UIKRetargetFilterBoneController *this)

{
  *(undefined ***)this = &___7UIKRetargetOpControllerBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// AddBoneToFilter @ 14df23070

void __thiscall
UIKRetargetFilterBoneController::AddBoneToFilter
          (UIKRetargetFilterBoneController *this,FName param_1)

{
  undefined8 *puVar1;
  double *pdVar2;
  longlong lVar3;
  code *pcVar4;
  FName FVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  FName *pFVar9;
  FName *pFVar10;
  undefined1 local_res8 [8];
  FName local_98;
  FNameEntryId FStack_90;
  uint uStack_8c;
  undefined1 local_88;
  undefined7 uStack_87;
  undefined8 uStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  double dStack_38;
  double dStack_30;
  undefined1 local_28;
  undefined7 uStack_27;
  undefined8 uStack_20;
  
  lVar3 = *(longlong *)&this->field_0x28;
  iVar7 = *(int *)(lVar3 + 0x20);
  pFVar9 = *(FName **)(lVar3 + 0x18);
  pFVar10 = pFVar9 + (longlong)iVar7 * 0x10;
  while( true ) {
    if (*(int *)(lVar3 + 0x20) != iVar7) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FFilterBoneData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar9 == pFVar10) break;
    if (*pFVar9 == param_1) {
      return;
    }
    pFVar9 = pFVar9 + 0x10;
  }
  FStack_90.Value = 0x7fffffff;
  local_78 = UE::Math::TQuat<double>::Identity.X;
  dStack_70 = UE::Math::TQuat<double>::Identity.Y;
  local_48 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dStack_30 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uStack_8c = 0xffffffff;
  local_88 = 0;
  local_68 = UE::Math::TQuat<double>::Identity.Z;
  dStack_60 = UE::Math::TQuat<double>::Identity.W;
  local_58 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_50 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  dStack_40 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_38 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_28 = 1;
  local_98 = param_1;
  if (((*(FName **)(lVar3 + 0x18) <= &local_98) &&
      (&local_98 < *(FName **)(lVar3 + 0x18) + (longlong)*(int *)(lVar3 + 0x24) * 0x10)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar7 = *(int *)(lVar3 + 0x20);
  if (iVar7 == *(int *)(lVar3 + 0x24)) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1080,(ForAnyElementType *)(lVar3 + 0x18),(int *)(lVar3 + 0x24));
  }
  *(int *)(lVar3 + 0x20) = iVar7 + 1;
  FVar5.Number = uStack_8c;
  FVar5.ComparisonIndex.Value = FStack_90.Value;
  lVar3 = *(longlong *)(lVar3 + 0x18);
  lVar8 = (longlong)iVar7 * 0x80;
  *(FName *)(lVar8 + lVar3) = local_98;
  ((FName *)(lVar8 + lVar3))[1] = FVar5;
  puVar1 = (undefined8 *)(lVar8 + 0x10 + lVar3);
  *puVar1 = CONCAT71(uStack_87,local_88);
  puVar1[1] = uStack_80;
  pdVar2 = (double *)(lVar8 + 0x20 + lVar3);
  *pdVar2 = local_78;
  pdVar2[1] = dStack_70;
  pdVar2 = (double *)(lVar8 + 0x30 + lVar3);
  *pdVar2 = local_68;
  pdVar2[1] = dStack_60;
  pdVar2 = (double *)(lVar8 + 0x40 + lVar3);
  *pdVar2 = local_58;
  pdVar2[1] = dStack_50;
  pdVar2 = (double *)(lVar8 + 0x50 + lVar3);
  *pdVar2 = local_48;
  pdVar2[1] = dStack_40;
  pdVar2 = (double *)(lVar8 + 0x60 + lVar3);
  *pdVar2 = dStack_38;
  pdVar2[1] = dStack_30;
  puVar1 = (undefined8 *)(lVar8 + 0x70 + lVar3);
  *puVar1 = CONCAT71(uStack_27,local_28);
  puVar1[1] = uStack_20;
  return;
}

// ClearBonesToFilter @ 14df2a910

void __thiscall
UIKRetargetFilterBoneController::ClearBonesToFilter(UIKRetargetFilterBoneController *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&this->field_0x28;
  *(undefined4 *)(lVar1 + 0x20) = 0;
  if (*(int *)(lVar1 + 0x24) < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x80,0x10,0,(ForAnyElementType *)(lVar1 + 0x18),0,(int *)(lVar1 + 0x24));
  }
  return;
}

// GetAllBonesToFilter @ 14df34d00

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
UIKRetargetFilterBoneController::GetAllBonesToFilter
          (UIKRetargetFilterBoneController *this,
          TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  ForAnyElementType local_28;
  undefined8 local_20;
  
  lVar2 = *(longlong *)&this->field_0x28;
  iVar8 = 0;
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20 = 0;
  iVar1 = *(int *)(lVar2 + 0x20);
  pFVar9 = *(FScriptContainerElement **)(lVar2 + 0x18);
  pFVar10 = pFVar9 + (longlong)iVar1 * 0x80;
  while( true ) {
    if (*(int *)(lVar2 + 0x20) != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FFilterBoneData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
      iVar8 = (int)local_20;
    }
    if (pFVar9 == pFVar10) break;
    iVar6 = iVar8;
    if ((local_28.Data <= pFVar9) && (pFVar9 < local_28.Data + (longlong)local_20._4_4_ * 8)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar7;
      }
      iVar6 = (int)local_20;
    }
    if (iVar6 == local_20._4_4_) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&local_28,(int *)((longlong)&local_20 + 4));
    }
    iVar8 = iVar6 + 1;
    local_20 = CONCAT44(local_20._4_4_,iVar8);
    uVar3 = *(undefined8 *)pFVar9;
    pFVar9 = pFVar9 + 0x80;
    *(undefined8 *)(local_28.Data + (longlong)iVar6 * 8) = uVar3;
  }
  (__return_storage_ptr__->AllocatorInstance).Data = local_28.Data;
  __return_storage_ptr__->ArrayNum = iVar8;
  __return_storage_ptr__->ArrayMax = local_20._4_4_;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14df3c400

UClass * __cdecl UIKRetargetFilterBoneController::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRetargetFilterBoneController.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRetargetFilterBoneController",
               &Z_Registration_Info_UClass_UIKRetargetFilterBoneController.InnerSingleton,
               StaticRegisterNativesUIKRetargetFilterBoneController,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UIKRetargetFilterBoneController>,
               InternalVTableHelperCtorCaller<UIKRetargetFilterBoneController>,local_res8,
               UIKRetargetOpControllerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRetargetFilterBoneController.InnerSingleton;
}

// GetSettings @ 14df3fe90

FIKRetargetFilterBoneOpSettings * __thiscall
UIKRetargetFilterBoneController::GetSettings
          (UIKRetargetFilterBoneController *this,
          FIKRetargetFilterBoneOpSettings *__return_storage_ptr__)

{
  FIKRetargetFilterBoneOpSettings::FIKRetargetFilterBoneOpSettings
            (__return_storage_ptr__,*(FIKRetargetFilterBoneOpSettings **)&this->field_0x28);
  return __return_storage_ptr__;
}

// SetSettings @ 14df55d50

void __thiscall
UIKRetargetFilterBoneController::SetSettings
          (UIKRetargetFilterBoneController *this,FIKRetargetFilterBoneOpSettings *param_1)

{
  FScriptContainerElement *pFVar1;
  
  (**(code **)(**(longlong **)&this->field_0x28 + 8))();
  pFVar1 = (param_1->BonesToFilter).AllocatorInstance.Data;
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

// StaticRegisterNativesUIKRetargetFilterBoneController @ 14df59d50

void __cdecl
UIKRetargetFilterBoneController::StaticRegisterNativesUIKRetargetFilterBoneController(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 5;
  local_18.DataPtr = Z_Construct_UClass_UIKRetargetFilterBoneController_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAddBoneToFilter @ 14df62ed0

void __cdecl
UIKRetargetFilterBoneController::execAddBoneToFilter(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 *puVar1;
  double *pdVar2;
  FProperty *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 local_res8 [8];
  longlong local_res10;
  longlong local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 local_98;
  undefined7 uStack_97;
  undefined8 uStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double dStack_48;
  double dStack_40;
  undefined1 local_38;
  undefined7 uStack_37;
  undefined8 uStack_30;
  
  local_res10 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  lVar8 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar4 = *(longlong *)(param_1 + 1);
  iVar7 = *(int *)(lVar4 + 0x20);
  plVar9 = *(longlong **)(lVar4 + 0x18);
  plVar10 = plVar9 + (longlong)iVar7 * 0x10;
  while( true ) {
    if (*(int *)(lVar4 + 0x20) != iVar7) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FFilterBoneData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (plVar9 == plVar10) break;
    if (*plVar9 == lVar8) {
      return;
    }
    plVar9 = plVar9 + 0x10;
  }
  uStack_a0 = 0x7fffffff;
  local_88 = UE::Math::TQuat<double>::Identity.X;
  dStack_80 = UE::Math::TQuat<double>::Identity.Y;
  local_58 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dStack_40 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uStack_9c = 0xffffffff;
  local_98 = 0;
  local_78 = UE::Math::TQuat<double>::Identity.Z;
  dStack_70 = UE::Math::TQuat<double>::Identity.W;
  local_68 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_60 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  dStack_50 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_48 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_38 = 1;
  local_a8 = lVar8;
  if (((*(longlong **)(lVar4 + 0x18) <= &local_a8) &&
      (&local_a8 < *(longlong **)(lVar4 + 0x18) + (longlong)*(int *)(lVar4 + 0x24) * 0x10)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar7 = *(int *)(lVar4 + 0x20);
  if (iVar7 == *(int *)(lVar4 + 0x24)) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1080,(ForAnyElementType *)(lVar4 + 0x18),(int *)(lVar4 + 0x24));
  }
  *(int *)(lVar4 + 0x20) = iVar7 + 1;
  lVar4 = *(longlong *)(lVar4 + 0x18);
  lVar8 = (longlong)iVar7 * 0x80;
  *(longlong *)(lVar8 + lVar4) = local_a8;
  ((longlong *)(lVar8 + lVar4))[1] = CONCAT44(uStack_9c,uStack_a0);
  puVar1 = (undefined8 *)(lVar8 + 0x10 + lVar4);
  *puVar1 = CONCAT71(uStack_97,local_98);
  puVar1[1] = uStack_90;
  pdVar2 = (double *)(lVar8 + 0x20 + lVar4);
  *pdVar2 = local_88;
  pdVar2[1] = dStack_80;
  pdVar2 = (double *)(lVar8 + 0x30 + lVar4);
  *pdVar2 = local_78;
  pdVar2[1] = dStack_70;
  pdVar2 = (double *)(lVar8 + 0x40 + lVar4);
  *pdVar2 = local_68;
  pdVar2[1] = dStack_60;
  pdVar2 = (double *)(lVar8 + 0x50 + lVar4);
  *pdVar2 = local_58;
  pdVar2[1] = dStack_50;
  pdVar2 = (double *)(lVar8 + 0x60 + lVar4);
  *pdVar2 = dStack_48;
  pdVar2[1] = dStack_40;
  puVar1 = (undefined8 *)(lVar8 + 0x70 + lVar4);
  *puVar1 = CONCAT71(uStack_37,local_38);
  puVar1[1] = uStack_30;
  return;
}

// execClearBonesToFilter @ 14df632f0

void __cdecl
UIKRetargetFilterBoneController::execClearBonesToFilter
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong lVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar1 = *(longlong *)(param_1 + 1);
  *(undefined4 *)(lVar1 + 0x20) = 0;
  if (*(int *)(lVar1 + 0x24) < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x80,0x10,0,(ForAnyElementType *)(lVar1 + 0x18),0,(int *)(lVar1 + 0x24));
  }
  return;
}

// execGetAllBonesToFilter @ 14df63b30

void __cdecl
UIKRetargetFilterBoneController::execGetAllBonesToFilter
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  ForAnyElementType FVar10;
  undefined1 local_res8 [8];
  ForAnyElementType local_38;
  undefined8 local_30;
  undefined1 local_28 [16];
  
  local_38.Data = (FScriptContainerElement *)0x0;
  iVar7 = 0;
  local_30 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = *(longlong *)(param_1 + 1);
  iVar1 = *(int *)(lVar2 + 0x20);
  pFVar9 = *(FScriptContainerElement **)(lVar2 + 0x18);
  pFVar8 = pFVar9 + (longlong)iVar1 * 0x80;
  while( true ) {
    if (*(int *)(lVar2 + 0x20) != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FFilterBoneData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
      iVar7 = (int)local_30;
    }
    FVar10.Data = local_38.Data;
    iVar6 = local_30._4_4_;
    if (pFVar9 == pFVar8) break;
    iVar6 = iVar7;
    if ((local_38.Data <= pFVar9) && (pFVar9 < local_38.Data + (longlong)local_30._4_4_ * 8)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar6 = (int)local_30;
    }
    if (iVar6 == local_30._4_4_) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&local_38,(int *)((longlong)&local_30 + 4));
    }
    iVar7 = iVar6 + 1;
    local_30 = CONCAT44(local_30._4_4_,iVar7);
    uVar3 = *(undefined8 *)pFVar9;
    pFVar9 = pFVar9 + 0x80;
    *(undefined8 *)(local_38.Data + (longlong)iVar6 * 8) = uVar3;
  }
  if (param_3 != local_28) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = FVar10.Data;
    FVar10.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = iVar7;
    *(int *)((longlong)param_3 + 0xc) = iVar6;
  }
  if (FVar10.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar10.Data);
  }
  return;
}

// execGetSettings @ 14df65df0

void __cdecl
UIKRetargetFilterBoneController::execGetSettings(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 *puVar1;
  UObjectBase *pUVar2;
  longlong this;
  FIKRetargetFilterBoneOpSettings local_58;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FIKRetargetFilterBoneOpSettings::FIKRetargetFilterBoneOpSettings
            (&local_58,*(FIKRetargetFilterBoneOpSettings **)(param_1 + 1));
  this = local_58._padding_;
  *(undefined4 *)((longlong)param_3 + 8) = (undefined4)local_58._padding_;
  *(undefined1 *)((longlong)param_3 + 0xc) = local_58._padding_._4_1_;
  pUVar2 = *(UObjectBase **)((longlong)param_3 + 0x10);
  if ((UObjectBase *)local_58._padding_ == (UObjectBase *)0x0) {
    if (pUVar2 != (UObjectBase *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)pUVar2);
      *(undefined8 *)((longlong)param_3 + 0x10) = 0;
    }
  }
  else if (pUVar2 != (UObjectBase *)local_58._padding_) {
    if (pUVar2 != (UObjectBase *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)pUVar2);
    }
    UObjectBase::AddRef((UObjectBase *)this);
    *(longlong *)((longlong)param_3 + 0x10) = this;
  }
  puVar1 = (undefined8 *)((longlong)param_3 + 0x18);
  if ((TArray<FFilterBoneData,TSizedDefaultAllocator<32>_> *)puVar1 != &local_58.BonesToFilter) {
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
    *puVar1 = local_58.BonesToFilter.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 0x20) = local_58.BonesToFilter.ArrayNum;
    *(int *)((longlong)param_3 + 0x24) = local_58.BonesToFilter.ArrayMax;
    local_58.BonesToFilter.ArrayNum = 0;
    local_58.BonesToFilter.ArrayMax = 0;
    local_58.BonesToFilter.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  *(bool *)((longlong)param_3 + 0x40) = local_58.bResetPlayback;
  *(double *)((longlong)param_3 + 0x28) = local_58.MinFrequency;
  *(double *)((longlong)param_3 + 0x30) = local_58.Responsiveness;
  *(double *)((longlong)param_3 + 0x38) = local_58.VelocityCutoffHz;
  if (local_58.BonesToFilter.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.BonesToFilter.AllocatorInstance.Data);
  }
  local_58._padding_ = (longlong)&___7FIKRetargetOpSettingsBase__6B_;
  if ((UObjectBase *)local_58._padding_ != (UObjectBase *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_58._padding_);
  }
  return;
}

// execSetSettings @ 14df69660

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UIKRetargetFilterBoneController::execSetSettings(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObjectBase *pUVar2;
  void *_Src;
  longlong lVar3;
  undefined **local_a8;
  undefined4 local_a0;
  undefined1 local_9c;
  UObjectBase *local_98;
  void *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined **local_58;
  undefined4 local_50;
  undefined1 local_4c;
  UObjectBase *local_48;
  ForAnyElementType local_40;
  int local_38;
  int local_34;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined1 local_18;
  
  local_80 = __real_3ff8000000000000;
  local_98 = (UObjectBase *)0x0;
  local_a8 = &___7FIKRetargetFilterBoneOpSettings__6B_;
  local_90 = (void *)0x0;
  local_88 = 0;
  uStack_78 = ___xmm_40340000000000003fe0000000000000;
  uStack_70 = _UNK_152d9e188;
  local_a0 = 0xffffffff;
  local_9c = 1;
  local_68 = 1;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  pUVar2 = local_98;
  local_48 = (UObjectBase *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_50 = local_a0;
  local_4c = local_9c;
  if (local_98 != (UObjectBase *)0x0) {
    UObjectBase::AddRef(local_98);
    local_48 = pUVar2;
  }
  _Src = local_90;
  lVar3 = (longlong)(int)local_88;
  local_58 = &___7FIKRetargetFilterBoneOpSettings__6B_;
  local_40.Data = (FScriptContainerElement *)0x0;
  local_38 = (int)local_88;
  if ((int)local_88 == 0) {
    local_34 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x80,0x10,(int)local_88,0,&local_40,(int)local_88,&local_34);
    memcpy(local_40.Data,_Src,lVar3 << 7);
  }
  local_30 = local_80;
  uStack_28 = uStack_78;
  local_18 = local_68;
  local_20 = uStack_70;
  (**(code **)(**(longlong **)(param_1 + 1) + 8))(*(longlong **)(param_1 + 1),&local_58);
  if (local_40.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data);
  }
  local_58 = &___7FIKRetargetOpSettingsBase__6B_;
  if (local_48 != (UObjectBase *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_48);
  }
  if (local_90 != (void *)0x0) {
    FMemory::Free(local_90);
  }
  local_a8 = &___7FIKRetargetOpSettingsBase__6B_;
  if (local_98 != (UObjectBase *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_98);
  }
  return;
}

