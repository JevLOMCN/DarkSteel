// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 9

// StaticClass @ 14df09db0

UClass * __cdecl UIKRigFBIKSolver::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRigFBIKSolver.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRigFBIKSolver",
               &Z_Registration_Info_UClass_UIKRigFBIKSolver.InnerSingleton,
               StaticRegisterNativesUIKRigFBIKSolver,0x98,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UIKRigFBIKSolver>,
               InternalVTableHelperCtorCaller<UIKRigFBIKSolver>,local_res8,UIKRigSolver::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRigFBIKSolver.InnerSingleton;
}

// UIKRigFBIKSolver @ 14df1a1b0

UIKRigFBIKSolver * __thiscall
UIKRigFBIKSolver::UIKRigFBIKSolver(UIKRigFBIKSolver *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7UIKRigFBIKSolver__6B_;
  (this->RootBone).ComparisonIndex = 0;
  (this->RootBone).Number = 0;
  this->bAllowStretch = false;
  this->RootBehavior = PrePull;
  (this->PrePullRootSettings).RotationAlpha = 0.0;
  (this->Effectors_DEPRECATED).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Effectors_DEPRECATED).ArrayNum = 0;
  (this->Effectors_DEPRECATED).ArrayMax = 0;
  (this->BoneSettings_DEPRECATED).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoneSettings_DEPRECATED).ArrayNum = 0;
  (this->BoneSettings_DEPRECATED).ArrayMax = 0;
  this->Iterations = 0x14;
  this->SubIterations = 0;
  this->MassMultiplier = 1.0;
  (this->PrePullRootSettings).RotationAlphaX = 1.0;
  (this->PrePullRootSettings).RotationAlphaY = 1.0;
  (this->PrePullRootSettings).RotationAlphaZ = 1.0;
  (this->PrePullRootSettings).PositionAlpha = 1.0;
  (this->PrePullRootSettings).PositionAlphaX = 1.0;
  (this->PrePullRootSettings).PositionAlphaY = 1.0;
  (this->PrePullRootSettings).PositionAlphaZ = 1.0;
  this->PullChainAlpha = 1.0;
  this->MaxAngle = 30.0;
  this->OverRelaxation = 1.3;
  return this;
}

// UIKRigFBIKSolver @ 14df1a260

UIKRigFBIKSolver * __thiscall
UIKRigFBIKSolver::UIKRigFBIKSolver(UIKRigFBIKSolver *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7UIKRigFBIKSolver__6B_;
  (this->RootBone).ComparisonIndex = 0;
  (this->RootBone).Number = 0;
  this->bAllowStretch = false;
  this->RootBehavior = PrePull;
  (this->PrePullRootSettings).RotationAlpha = 0.0;
  (this->Effectors_DEPRECATED).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Effectors_DEPRECATED).ArrayNum = 0;
  (this->Effectors_DEPRECATED).ArrayMax = 0;
  (this->BoneSettings_DEPRECATED).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoneSettings_DEPRECATED).ArrayNum = 0;
  (this->BoneSettings_DEPRECATED).ArrayMax = 0;
  this->Iterations = 0x14;
  this->SubIterations = 0;
  this->MassMultiplier = 1.0;
  (this->PrePullRootSettings).RotationAlphaX = 1.0;
  (this->PrePullRootSettings).RotationAlphaY = 1.0;
  (this->PrePullRootSettings).RotationAlphaZ = 1.0;
  (this->PrePullRootSettings).PositionAlpha = 1.0;
  (this->PrePullRootSettings).PositionAlphaX = 1.0;
  (this->PrePullRootSettings).PositionAlphaY = 1.0;
  (this->PrePullRootSettings).PositionAlphaZ = 1.0;
  this->PullChainAlpha = 1.0;
  this->MaxAngle = 30.0;
  this->OverRelaxation = 1.3;
  return this;
}

// ~UIKRigFBIKSolver @ 14df1c6f0

void __thiscall UIKRigFBIKSolver::~UIKRigFBIKSolver(UIKRigFBIKSolver *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UIKRigFBIKSolver__6B_;
  pFVar1 = (this->BoneSettings_DEPRECATED).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Effectors_DEPRECATED).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UIKRigSolver__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// ConvertToInstancedStruct @ 14df2b2f0

void __thiscall
UIKRigFBIKSolver::ConvertToInstancedStruct(UIKRigFBIKSolver *this,FInstancedStruct *param_1)

{
  FScriptContainerElement *pFVar1;
  undefined8 *puVar2;
  int iVar3;
  uchar *puVar4;
  UScriptStruct *pUVar5;
  longlong lVar6;
  code *pcVar7;
  undefined8 uVar8;
  bool bVar9;
  int iVar10;
  UPackage *pUVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined **local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined **local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined1 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined1 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined1 local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  if (Z_Registration_Info_UScriptStruct_FIKRigFullBodyIKSolver.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar11 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRigFullBodyIKSolver.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRigFullBodyIKSolver,(UObject *)pUVar11,
                         L"IKRigFullBodyIKSolver");
  }
  FInstancedStruct::InitializeAs
            (param_1,Z_Registration_Info_UScriptStruct_FIKRigFullBodyIKSolver.OuterSingleton,
             (uchar *)0x0);
  puVar4 = param_1->StructMemory;
  pUVar5 = (param_1->ScriptStruct).field0_0x0.DebugPtr;
  if (puVar4 == (uchar *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Memory != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                       ,0xd1,L"");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  if (pUVar5 == (UScriptStruct *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Struct != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                       ,0xd2,L"");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  if (Z_Registration_Info_UScriptStruct_FIKRigFullBodyIKSolver.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar11 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRigFullBodyIKSolver.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRigFullBodyIKSolver,(UObject *)pUVar11,
                         L"IKRigFullBodyIKSolver");
    if (Z_Registration_Info_UScriptStruct_FIKRigFullBodyIKSolver.OuterSingleton !=
        (UScriptStruct *)0x0) goto LAB_14df2b3de;
  }
  else {
LAB_14df2b3de:
    iVar3 = (int)(Z_Registration_Info_UScriptStruct_FIKRigFullBodyIKSolver.OuterSingleton)->
                 _padding_;
    if (((int)pUVar5->_padding_ < iVar3) ||
       ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar3 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FIKRigFullBodyIKSolver.OuterSingleton)->_padding_)) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    if (bVar9) goto LAB_14df2b428;
  }
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("Struct->IsChildOf(TBaseStructure<T>::Get())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                     ,0xd3,L"");
  if (bVar9) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
LAB_14df2b428:
  puVar4[8] = (uchar)this->_padding_;
  *(FName *)(puVar4 + 0x18) = this->RootBone;
  *(int *)(puVar4 + 0x20) = this->Iterations;
  *(int *)(puVar4 + 0x24) = this->SubIterations;
  *(float *)(puVar4 + 0x28) = this->MassMultiplier;
  puVar4[0x2c] = this->bAllowStretch;
  puVar4[0x2d] = this->RootBehavior;
  uVar8 = *(undefined8 *)&(this->PrePullRootSettings).RotationAlphaY;
  *(undefined8 *)(puVar4 + 0x30) = *(undefined8 *)&this->PrePullRootSettings;
  *(undefined8 *)(puVar4 + 0x38) = uVar8;
  uVar8 = *(undefined8 *)&(this->PrePullRootSettings).PositionAlphaY;
  *(undefined8 *)(puVar4 + 0x40) = *(undefined8 *)&(this->PrePullRootSettings).PositionAlpha;
  *(undefined8 *)(puVar4 + 0x48) = uVar8;
  *(float *)(puVar4 + 0x50) = this->PullChainAlpha;
  *(float *)(puVar4 + 0x54) = this->MaxAngle;
  *(float *)(puVar4 + 0x58) = this->OverRelaxation;
  pFVar13 = (this->Effectors_DEPRECATED).AllocatorInstance.Data;
  iVar3 = (this->Effectors_DEPRECATED).ArrayNum;
  pFVar1 = pFVar13 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->Effectors_DEPRECATED).ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UIKRig_FBIKEffector>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar13 == pFVar1) break;
    lVar6 = *(longlong *)pFVar13;
    if (lVar6 != 0) {
      local_c0 = *(undefined8 *)(lVar6 + 0x28);
      local_ac = *(undefined4 *)(lVar6 + 0x3c);
      local_a8 = *(undefined4 *)(lVar6 + 0x40);
      local_b8 = *(undefined8 *)(lVar6 + 0x30);
      local_b0 = *(undefined4 *)(lVar6 + 0x38);
      local_a4 = *(undefined4 *)(lVar6 + 0x44);
      local_c8 = &___7FIKRigFBIKGoalSettings__6B_;
      local_a0 = 0xffffffff;
      if ((*(undefined ****)(puVar4 + 0x60) <= &local_c8) &&
         (&local_c8 < *(undefined ****)(puVar4 + 0x60) + (longlong)*(int *)(puVar4 + 0x6c) * 6)) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar9) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      iVar10 = *(int *)(puVar4 + 0x68);
      if (iVar10 == *(int *)(puVar4 + 0x6c)) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x830,(ForAnyElementType *)(puVar4 + 0x60),(int *)(puVar4 + 0x6c));
      }
      lVar12 = (longlong)iVar10;
      *(int *)(puVar4 + 0x68) = iVar10 + 1;
      lVar6 = *(longlong *)(puVar4 + 0x60);
      *(undefined ***)(lVar6 + lVar12 * 0x30) = &___7FIKRigGoalSettingsBase__6B_;
      *(undefined8 *)(lVar6 + 8 + lVar12 * 0x30) = local_c0;
      *(undefined ***)(lVar6 + lVar12 * 0x30) = &___7FIKRigFBIKGoalSettings__6B_;
      *(undefined8 *)(lVar6 + 0x10 + lVar12 * 0x30) = local_b8;
      *(undefined4 *)(lVar6 + 0x18 + lVar12 * 0x30) = local_b0;
      *(undefined4 *)(lVar6 + 0x1c + lVar12 * 0x30) = local_ac;
      *(undefined4 *)(lVar6 + 0x20 + lVar12 * 0x30) = local_a8;
      *(undefined4 *)(lVar6 + 0x24 + lVar12 * 0x30) = local_a4;
      *(undefined4 *)(lVar6 + 0x28 + lVar12 * 0x30) = local_a0;
      local_c8 = &___7FIKRigSettingsBase__6B_;
    }
    pFVar13 = pFVar13 + 8;
  }
  pFVar13 = (this->BoneSettings_DEPRECATED).AllocatorInstance.Data;
  iVar3 = (this->BoneSettings_DEPRECATED).ArrayNum;
  pFVar1 = pFVar13 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->BoneSettings_DEPRECATED).ArrayNum != iVar3) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UIKRig_FBIKBoneSettings>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar13 == pFVar1) break;
    lVar6 = *(longlong *)pFVar13;
    if (lVar6 != 0) {
      local_90 = *(undefined8 *)(lVar6 + 0x28);
      local_88 = *(undefined4 *)(lVar6 + 0x30);
      local_84 = *(undefined4 *)(lVar6 + 0x34);
      local_80 = *(undefined1 *)(lVar6 + 0x38);
      local_7c = *(undefined4 *)(lVar6 + 0x3c);
      local_74 = *(undefined1 *)(lVar6 + 0x44);
      local_78 = *(undefined4 *)(lVar6 + 0x40);
      local_70 = *(undefined4 *)(lVar6 + 0x48);
      local_68 = *(undefined1 *)(lVar6 + 0x50);
      local_6c = *(undefined4 *)(lVar6 + 0x4c);
      local_64 = *(undefined4 *)(lVar6 + 0x54);
      local_5c = *(undefined1 *)(lVar6 + 0x5c);
      local_60 = *(undefined4 *)(lVar6 + 0x58);
      local_58 = *(undefined8 *)(lVar6 + 0x60);
      uStack_50 = *(undefined8 *)(lVar6 + 0x68);
      local_48 = *(undefined8 *)(lVar6 + 0x70);
      local_98 = &___7FIKRigFBIKBoneSettings__6B_;
      if ((*(undefined ****)(puVar4 + 0x70) <= &local_98) &&
         (&local_98 < *(undefined ****)(puVar4 + 0x70) + (longlong)*(int *)(puVar4 + 0x7c) * 0xb)) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar9) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      iVar10 = *(int *)(puVar4 + 0x78);
      if (iVar10 == *(int *)(puVar4 + 0x7c)) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x858,(ForAnyElementType *)(puVar4 + 0x70),(int *)(puVar4 + 0x7c));
      }
      lVar12 = (longlong)iVar10 * 0x58;
      *(int *)(puVar4 + 0x78) = iVar10 + 1;
      lVar6 = *(longlong *)(puVar4 + 0x70);
      *(undefined ***)(lVar12 + lVar6) = &___7FIKRigBoneSettingsBase__6B_;
      *(undefined8 *)(lVar12 + 8 + lVar6) = local_90;
      *(undefined ***)(lVar12 + lVar6) = &___7FIKRigFBIKBoneSettings__6B_;
      *(undefined4 *)(lVar12 + 0x10 + lVar6) = local_88;
      *(undefined4 *)(lVar12 + 0x14 + lVar6) = local_84;
      *(undefined1 *)(lVar12 + 0x18 + lVar6) = local_80;
      *(undefined4 *)(lVar12 + 0x1c + lVar6) = local_7c;
      *(undefined4 *)(lVar12 + 0x20 + lVar6) = local_78;
      *(undefined1 *)(lVar12 + 0x24 + lVar6) = local_74;
      *(undefined4 *)(lVar12 + 0x28 + lVar6) = local_70;
      *(undefined4 *)(lVar12 + 0x2c + lVar6) = local_6c;
      *(undefined1 *)(lVar12 + 0x30 + lVar6) = local_68;
      *(undefined4 *)(lVar12 + 0x34 + lVar6) = local_64;
      *(undefined4 *)(lVar12 + 0x38 + lVar6) = local_60;
      *(undefined1 *)(lVar12 + 0x3c + lVar6) = local_5c;
      puVar2 = (undefined8 *)(lVar12 + 0x40 + lVar6);
      *puVar2 = local_58;
      puVar2[1] = uStack_50;
      *(undefined8 *)(lVar12 + 0x50 + lVar6) = local_48;
    }
    pFVar13 = pFVar13 + 8;
  }
  return;
}

// GetPrivateStaticClass @ 14df3d2a0

UClass * __cdecl UIKRigFBIKSolver::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRigFBIKSolver.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRigFBIKSolver",
               &Z_Registration_Info_UClass_UIKRigFBIKSolver.InnerSingleton,
               StaticRegisterNativesUIKRigFBIKSolver,0x98,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UIKRigFBIKSolver>,
               InternalVTableHelperCtorCaller<UIKRigFBIKSolver>,local_res8,UIKRigSolver::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRigFBIKSolver.InnerSingleton;
}

// StaticRegisterNativesUIKRigFBIKSolver @ 14df5a160

void __cdecl UIKRigFBIKSolver::StaticRegisterNativesUIKRigFBIKSolver(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UIKRigFBIKSolver_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetBoneSettings @ 14df63e60

void __cdecl UIKRigFBIKSolver::execGetBoneSettings(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  void *_Src;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = *(int *)&param_1[3].field_0x18;
  _Src = *(void **)&param_1[3].field_0x10;
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = CONCAT44(local_10._4_4_,iVar1);
  if (iVar1 == 0) {
    local_10 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,0,&local_18,iVar1,(int *)((longlong)&local_10 + 4));
    memcpy(local_18.Data,_Src,(longlong)iVar1 << 3);
  }
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data;
    *(undefined4 *)((longlong)param_3 + 8) = (undefined4)local_10;
    local_18.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_10._4_4_;
    local_10 = 0;
  }
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// execGetEffectors @ 14df64b90

void __cdecl UIKRigFBIKSolver::execGetEffectors(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  void *_Src;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = *(int *)&param_1[3].field_0x8;
  _Src = *(void **)(param_1 + 3);
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = CONCAT44(local_10._4_4_,iVar1);
  if (iVar1 == 0) {
    local_10 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,0,&local_18,iVar1,(int *)((longlong)&local_10 + 4));
    memcpy(local_18.Data,_Src,(longlong)iVar1 << 3);
  }
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data;
    *(undefined4 *)((longlong)param_3 + 8) = (undefined4)local_10;
    local_18.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_10._4_4_;
    local_10 = 0;
  }
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

