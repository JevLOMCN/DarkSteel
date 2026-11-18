// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 20

// StaticClass @ 14dee6160

UClass * __cdecl UIKRetargetCopyBasePoseController::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRetargetCopyBasePoseController.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRetargetCopyBasePoseController",
               &Z_Registration_Info_UClass_UIKRetargetCopyBasePoseController.InnerSingleton,
               StaticRegisterNativesUIKRetargetCopyBasePoseController,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UIKRetargetCopyBasePoseController>,
               InternalVTableHelperCtorCaller<UIKRetargetCopyBasePoseController>,local_res8,
               UIKRetargetOpControllerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRetargetCopyBasePoseController.InnerSingleton;
}

// UIKRetargetCopyBasePoseController @ 14df19020

UIKRetargetCopyBasePoseController * __thiscall
UIKRetargetCopyBasePoseController::UIKRetargetCopyBasePoseController
          (UIKRetargetCopyBasePoseController *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined ***)this = &___7UIKRetargetCopyBasePoseController__6B_;
  return this;
}

// UIKRetargetCopyBasePoseController @ 14df19050

UIKRetargetCopyBasePoseController * __thiscall
UIKRetargetCopyBasePoseController::UIKRetargetCopyBasePoseController
          (UIKRetargetCopyBasePoseController *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined ***)this = &___7UIKRetargetCopyBasePoseController__6B_;
  return this;
}

// ~UIKRetargetCopyBasePoseController @ 14df1c220

void __thiscall
UIKRetargetCopyBasePoseController::~UIKRetargetCopyBasePoseController
          (UIKRetargetCopyBasePoseController *this)

{
  *(undefined ***)this = &___7UIKRetargetOpControllerBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// AddBoneToExclude @ 14df22f90

void __thiscall
UIKRetargetCopyBasePoseController::AddBoneToExclude
          (UIKRetargetCopyBasePoseController *this,FName param_1)

{
  FName *pFVar1;
  longlong lVar2;
  code *pcVar3;
  FName FVar4;
  bool bVar5;
  int iVar6;
  FName local_18;
  FNameEntryId FStack_10;
  uint uStack_c;
  
  lVar2 = *(longlong *)&this->field_0x28;
  if (lVar2 != 0) {
    FStack_10.Value = 0x7fffffff;
    uStack_c = 0xffffffff;
    local_18 = param_1;
    if ((*(FName **)(lVar2 + 0x30) <= &local_18) &&
       (&local_18 < *(FName **)(lVar2 + 0x30) + (longlong)*(int *)(lVar2 + 0x3c) * 2)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar6 = *(int *)(lVar2 + 0x38);
    if (iVar6 == *(int *)(lVar2 + 0x3c)) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x410,(ForAnyElementType *)(lVar2 + 0x30),(int *)(lVar2 + 0x3c));
    }
    FVar4.Number = uStack_c;
    FVar4.ComparisonIndex.Value = FStack_10.Value;
    *(int *)(lVar2 + 0x38) = iVar6 + 1;
    pFVar1 = (FName *)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar6 * 0x10);
    *pFVar1 = local_18;
    pFVar1[1] = FVar4;
  }
  return;
}

// GetBonesToExclude @ 14df35550

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
UIKRetargetCopyBasePoseController::GetBonesToExclude
          (UIKRetargetCopyBasePoseController *this,
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
  if (lVar2 == 0) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20 = 0;
  pFVar9 = *(FScriptContainerElement **)(lVar2 + 0x30);
  iVar1 = *(int *)(lVar2 + 0x38);
  pFVar10 = pFVar9 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (*(int *)(lVar2 + 0x38) != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FBoneReference,int,0>::operator!='::__l2::<lambda_1>::operator()
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
    pFVar9 = pFVar9 + 0x10;
    *(undefined8 *)(local_28.Data + (longlong)iVar6 * 8) = uVar3;
  }
  (__return_storage_ptr__->AllocatorInstance).Data = local_28.Data;
  __return_storage_ptr__->ArrayNum = iVar8;
  __return_storage_ptr__->ArrayMax = local_20._4_4_;
  return __return_storage_ptr__;
}

// GetCopyFromStart @ 14df37e50

FName __thiscall
UIKRetargetCopyBasePoseController::GetCopyFromStart(UIKRetargetCopyBasePoseController *this)

{
  FName in_RDX;
  
  if (*(longlong *)&this->field_0x28 == 0) {
    *(undefined8 *)in_RDX = 0;
    return in_RDX;
  }
  *(undefined8 *)in_RDX = *(undefined8 *)(*(longlong *)&this->field_0x28 + 0x1c);
  return in_RDX;
}

// GetPrivateStaticClass @ 14df3c1c0

UClass * __cdecl UIKRetargetCopyBasePoseController::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRetargetCopyBasePoseController.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRetargetCopyBasePoseController",
               &Z_Registration_Info_UClass_UIKRetargetCopyBasePoseController.InnerSingleton,
               StaticRegisterNativesUIKRetargetCopyBasePoseController,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UIKRetargetCopyBasePoseController>,
               InternalVTableHelperCtorCaller<UIKRetargetCopyBasePoseController>,local_res8,
               UIKRetargetOpControllerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRetargetCopyBasePoseController.InnerSingleton;
}

// GetSettings @ 14df3fe00

FIKRetargetCopyBasePoseOpSettings * __thiscall
UIKRetargetCopyBasePoseController::GetSettings
          (UIKRetargetCopyBasePoseController *this,
          FIKRetargetCopyBasePoseOpSettings *__return_storage_ptr__)

{
  FIKRetargetCopyBasePoseOpSettings::FIKRetargetCopyBasePoseOpSettings
            (__return_storage_ptr__,*(FIKRetargetCopyBasePoseOpSettings **)&this->field_0x28);
  return __return_storage_ptr__;
}

// ResetBonesToExclude @ 14df4f000

void __thiscall
UIKRetargetCopyBasePoseController::ResetBonesToExclude(UIKRetargetCopyBasePoseController *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&this->field_0x28;
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x38) = 0;
    if (*(int *)(lVar1 + 0x3c) < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,(ForAnyElementType *)(lVar1 + 0x30),0,(int *)(lVar1 + 0x3c));
    }
  }
  return;
}

// SetCopyFromStart @ 14df54590

void __thiscall
UIKRetargetCopyBasePoseController::SetCopyFromStart
          (UIKRetargetCopyBasePoseController *this,FName param_1)

{
  if (*(longlong *)&this->field_0x28 != 0) {
    *(FName *)(*(longlong *)&this->field_0x28 + 0x1c) = param_1;
  }
  return;
}

// SetSettings @ 14df55c50

void __thiscall
UIKRetargetCopyBasePoseController::SetSettings
          (UIKRetargetCopyBasePoseController *this,FIKRetargetCopyBasePoseOpSettings *param_1)

{
  FScriptContainerElement *pFVar1;
  
  (**(code **)(**(longlong **)&this->field_0x28 + 8))();
  pFVar1 = (param_1->BonesToExclude).AllocatorInstance.Data;
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

// StaticRegisterNativesUIKRetargetCopyBasePoseController @ 14df59c90

void __cdecl
UIKRetargetCopyBasePoseController::StaticRegisterNativesUIKRetargetCopyBasePoseController(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 7;
  local_18.DataPtr = Z_Construct_UClass_UIKRetargetCopyBasePoseController_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAddBoneToExclude @ 14df62d80

void __cdecl
UIKRetargetCopyBasePoseController::execAddBoneToExclude
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 *puVar1;
  FProperty *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined8 local_res8;
  undefined8 local_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_res8 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar3 = *(longlong *)(param_1 + 1);
  if (lVar3 != 0) {
    local_18 = local_res8;
    uStack_10 = 0x7fffffff;
    uStack_c = 0xffffffff;
    if ((*(undefined8 **)(lVar3 + 0x30) <= &local_18) &&
       (&local_18 < *(undefined8 **)(lVar3 + 0x30) + (longlong)*(int *)(lVar3 + 0x3c) * 2)) {
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
    }
    iVar6 = *(int *)(lVar3 + 0x38);
    if (iVar6 == *(int *)(lVar3 + 0x3c)) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x410,(ForAnyElementType *)(lVar3 + 0x30),(int *)(lVar3 + 0x3c));
    }
    *(int *)(lVar3 + 0x38) = iVar6 + 1;
    puVar1 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar6 * 0x10);
    *puVar1 = local_18;
    puVar1[1] = CONCAT44(uStack_c,uStack_10);
  }
  return;
}

// execGetBonesToExclude @ 14df63f50

void __cdecl
UIKRetargetCopyBasePoseController::execGetBonesToExclude
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ForAnyElementType FVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  ForAnyElementType local_38;
  undefined8 local_30;
  undefined1 local_28 [16];
  
  iVar8 = 0;
  iVar6 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = *(longlong *)(param_1 + 1);
  if (lVar2 == 0) {
    FVar7.Data = (FScriptContainerElement *)0x0;
    iVar8 = 0;
  }
  else {
    local_38.Data = (FScriptContainerElement *)0x0;
    local_30 = 0;
    pFVar10 = *(FScriptContainerElement **)(lVar2 + 0x30);
    iVar1 = *(int *)(lVar2 + 0x38);
    pFVar9 = pFVar10 + (longlong)iVar1 * 0x10;
    while( true ) {
      iVar6 = iVar8;
      if (*(int *)(lVar2 + 0x38) != iVar1) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FBoneReference,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
        iVar6 = (int)local_30;
      }
      FVar7.Data = local_38.Data;
      iVar8 = local_30._4_4_;
      if (pFVar10 == pFVar9) break;
      if ((local_38.Data <= pFVar10) && (pFVar10 < local_38.Data + (longlong)local_30._4_4_ * 8)) {
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
      iVar8 = iVar6 + 1;
      local_30 = CONCAT44(local_30._4_4_,iVar8);
      uVar3 = *(undefined8 *)pFVar10;
      pFVar10 = pFVar10 + 0x10;
      *(undefined8 *)(local_38.Data + (longlong)iVar6 * 8) = uVar3;
    }
  }
  if (param_3 != local_28) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = FVar7.Data;
    FVar7.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = iVar6;
    *(int *)((longlong)param_3 + 0xc) = iVar8;
  }
  if (FVar7.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar7.Data);
  }
  return;
}

// execGetCopyFromStart @ 14df64b60

void __cdecl
UIKRetargetCopyBasePoseController::execGetCopyFromStart
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)(param_1 + 1) == 0) {
    *(undefined8 *)param_3 = 0;
    return;
  }
  *(undefined8 *)param_3 = *(undefined8 *)(*(longlong *)(param_1 + 1) + 0x1c);
  return;
}

// execGetSettings @ 14df659f0

void __cdecl
UIKRetargetCopyBasePoseController::execGetSettings(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 *puVar1;
  UObjectBase *pUVar2;
  longlong this;
  FIKRetargetCopyBasePoseOpSettings local_58;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FIKRetargetCopyBasePoseOpSettings::FIKRetargetCopyBasePoseOpSettings
            (&local_58,*(FIKRetargetCopyBasePoseOpSettings **)(param_1 + 1));
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
  puVar1 = (undefined8 *)((longlong)param_3 + 0x30);
  *(bool *)((longlong)param_3 + 0x18) = local_58.bCopyBasePose;
  *(FName *)((longlong)param_3 + 0x1c) = local_58.CopyFromStart.BoneName;
  *(undefined4 *)((longlong)param_3 + 0x24) = local_58.CopyFromStart._8_4_;
  *(FCompactPoseBoneIndex *)((longlong)param_3 + 0x28) =
       local_58.CopyFromStart.CachedCompactPoseIndex;
  if ((TArray<FBoneReference,TSizedDefaultAllocator<32>_> *)puVar1 != &local_58.BonesToExclude) {
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
    *puVar1 = local_58.BonesToExclude.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 0x38) = local_58.BonesToExclude.ArrayNum;
    *(int *)((longlong)param_3 + 0x3c) = local_58.BonesToExclude.ArrayMax;
    local_58.BonesToExclude.ArrayNum = 0;
    local_58.BonesToExclude.ArrayMax = 0;
    local_58.BonesToExclude.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  *(FName *)((longlong)param_3 + 0x40) = local_58.CopyBasePoseRoot_DEPRECATED;
  if (local_58.BonesToExclude.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.BonesToExclude.AllocatorInstance.Data);
  }
  local_58._padding_ = (longlong)&___7FIKRetargetOpSettingsBase__6B_;
  if ((UObjectBase *)local_58._padding_ != (UObjectBase *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_58._padding_);
  }
  return;
}

// execResetBonesToExclude @ 14df67080

void __cdecl
UIKRetargetCopyBasePoseController::execResetBonesToExclude
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong lVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar1 = *(longlong *)(param_1 + 1);
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x38) = 0;
    if (*(int *)(lVar1 + 0x3c) < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,(ForAnyElementType *)(lVar1 + 0x30),0,(int *)(lVar1 + 0x3c));
    }
  }
  return;
}

// execSetCopyFromStart @ 14df67f90

void __cdecl
UIKRetargetCopyBasePoseController::execSetCopyFromStart
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res8;
  
  local_res8 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)(param_1 + 1) != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 1) + 0x1c) = local_res8;
  }
  return;
}

// execSetSettings @ 14df69030

void __cdecl
UIKRetargetCopyBasePoseController::execSetSettings(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObjectBase *pUVar2;
  void *_Src;
  longlong lVar3;
  undefined **local_a8;
  undefined4 local_a0;
  undefined1 local_9c;
  UObjectBase *local_98;
  undefined1 local_90;
  undefined8 local_8c;
  undefined4 uStack_84;
  undefined4 uStack_80;
  void *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined **local_58;
  undefined4 local_50;
  undefined1 local_4c;
  UObjectBase *local_48;
  undefined1 local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  ForAnyElementType local_28;
  int local_20;
  int local_1c;
  undefined8 local_18;
  
  local_a0 = 0xffffffff;
  local_98 = (UObjectBase *)0x0;
  local_a8 = &___7FIKRetargetCopyBasePoseOpSettings__6B_;
  local_8c = 0;
  local_78 = (void *)0x0;
  local_70 = 0;
  local_68 = 0;
  local_9c = 1;
  local_90 = 1;
  uStack_84 = 0x7fffffff;
  uStack_80 = 0xffffffff;
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
  _Src = local_78;
  lVar3 = (longlong)(int)local_70;
  local_58 = &___7FIKRetargetCopyBasePoseOpSettings__6B_;
  local_40 = local_90;
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20 = (int)local_70;
  local_3c = (undefined4)local_8c;
  uStack_38 = local_8c._4_4_;
  uStack_34 = uStack_84;
  uStack_30 = uStack_80;
  if ((int)local_70 == 0) {
    local_1c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,(int)local_70,0,&local_28,(int)local_70,&local_1c);
    memcpy(local_28.Data,_Src,lVar3 << 4);
  }
  local_18 = local_68;
  (**(code **)(**(longlong **)(param_1 + 1) + 8))(*(longlong **)(param_1 + 1),&local_58);
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  local_58 = &___7FIKRetargetOpSettingsBase__6B_;
  if (local_48 != (UObjectBase *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_48);
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  local_a8 = &___7FIKRetargetOpSettingsBase__6B_;
  if (local_98 != (UObjectBase *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_98);
  }
  return;
}

