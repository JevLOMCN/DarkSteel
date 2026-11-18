// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 7

// StaticClass @ 14dee86c0

UClass * __cdecl UIKRig_BodyMover::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRig_BodyMover.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRig_BodyMover",
               &Z_Registration_Info_UClass_UIKRig_BodyMover.InnerSingleton,
               StaticRegisterNativesUIKRig_BodyMover,0x78,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UIKRig_BodyMover>,
               InternalVTableHelperCtorCaller<UIKRig_BodyMover>,local_res8,UIKRigSolver::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRig_BodyMover.InnerSingleton;
}

// UIKRig_BodyMover @ 14df1a590

UIKRig_BodyMover * __thiscall
UIKRig_BodyMover::UIKRig_BodyMover(UIKRig_BodyMover *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7UIKRig_BodyMover__6B_;
  (this->RootBone).ComparisonIndex = 0;
  (this->RootBone).Number = 0;
  (this->Effectors_DEPRECATED).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Effectors_DEPRECATED).ArrayNum = 0;
  (this->Effectors_DEPRECATED).ArrayMax = 0;
  this->PositionAlpha = 1.0;
  this->PositionPositiveX = 1.0;
  this->PositionNegativeX = 1.0;
  this->PositionPositiveY = 1.0;
  this->PositionNegativeY = 1.0;
  this->PositionPositiveZ = 1.0;
  this->PositionNegativeZ = 1.0;
  this->RotationAlpha = 1.0;
  this->RotateXAlpha = 1.0;
  this->RotateYAlpha = 1.0;
  this->RotateZAlpha = 1.0;
  return this;
}

// UIKRig_BodyMover @ 14df1a620

UIKRig_BodyMover * __thiscall
UIKRig_BodyMover::UIKRig_BodyMover(UIKRig_BodyMover *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7UIKRig_BodyMover__6B_;
  (this->RootBone).ComparisonIndex = 0;
  (this->RootBone).Number = 0;
  (this->Effectors_DEPRECATED).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Effectors_DEPRECATED).ArrayNum = 0;
  (this->Effectors_DEPRECATED).ArrayMax = 0;
  this->PositionAlpha = 1.0;
  this->PositionPositiveX = 1.0;
  this->PositionNegativeX = 1.0;
  this->PositionPositiveY = 1.0;
  this->PositionNegativeY = 1.0;
  this->PositionPositiveZ = 1.0;
  this->PositionNegativeZ = 1.0;
  this->RotationAlpha = 1.0;
  this->RotateXAlpha = 1.0;
  this->RotateYAlpha = 1.0;
  this->RotateZAlpha = 1.0;
  return this;
}

// ~UIKRig_BodyMover @ 14df1c820

void __thiscall UIKRig_BodyMover::~UIKRig_BodyMover(UIKRig_BodyMover *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UIKRig_BodyMover__6B_;
  pFVar1 = (this->Effectors_DEPRECATED).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UIKRigSolver__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// ConvertToInstancedStruct @ 14df2b860

void __thiscall
UIKRig_BodyMover::ConvertToInstancedStruct(UIKRig_BodyMover *this,FInstancedStruct *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  uchar *puVar3;
  UScriptStruct *pUVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  UPackage *pUVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  undefined **local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  
  if (Z_Registration_Info_UScriptStruct_FIKRigBodyMoverSolver.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar9 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRigBodyMoverSolver.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRigBodyMoverSolver,(UObject *)pUVar9,
                         L"IKRigBodyMoverSolver");
  }
  FInstancedStruct::InitializeAs
            (param_1,Z_Registration_Info_UScriptStruct_FIKRigBodyMoverSolver.OuterSingleton,
             (uchar *)0x0);
  puVar3 = param_1->StructMemory;
  pUVar4 = (param_1->ScriptStruct).field0_0x0.DebugPtr;
  if (puVar3 == (uchar *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Memory != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                       ,0xd1,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if (pUVar4 == (UScriptStruct *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Struct != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                       ,0xd2,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if (Z_Registration_Info_UScriptStruct_FIKRigBodyMoverSolver.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar9 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRigBodyMoverSolver.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRigBodyMoverSolver,(UObject *)pUVar9,
                         L"IKRigBodyMoverSolver");
    if (Z_Registration_Info_UScriptStruct_FIKRigBodyMoverSolver.OuterSingleton !=
        (UScriptStruct *)0x0) goto LAB_14df2b94e;
  }
  else {
LAB_14df2b94e:
    iVar2 = (int)(Z_Registration_Info_UScriptStruct_FIKRigBodyMoverSolver.OuterSingleton)->_padding_
    ;
    if (((int)pUVar4->_padding_ < iVar2) ||
       ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar2 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FIKRigBodyMoverSolver.OuterSingleton)->_padding_)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (bVar7) goto LAB_14df2b998;
  }
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("Struct->IsChildOf(TBaseStructure<T>::Get())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                     ,0xd3,L"");
  if (bVar7) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
LAB_14df2b998:
  puVar3[8] = (uchar)this->_padding_;
  *(FName *)(puVar3 + 0x18) = this->RootBone;
  *(float *)(puVar3 + 0x20) = this->PositionAlpha;
  *(float *)(puVar3 + 0x24) = this->PositionPositiveX;
  *(float *)(puVar3 + 0x28) = this->PositionNegativeX;
  *(float *)(puVar3 + 0x2c) = this->PositionPositiveY;
  *(float *)(puVar3 + 0x30) = this->PositionNegativeY;
  *(float *)(puVar3 + 0x34) = this->PositionPositiveZ;
  *(float *)(puVar3 + 0x38) = this->PositionNegativeZ;
  *(float *)(puVar3 + 0x3c) = this->RotationAlpha;
  *(float *)(puVar3 + 0x40) = this->RotateXAlpha;
  *(float *)(puVar3 + 0x44) = this->RotateYAlpha;
  *(float *)(puVar3 + 0x48) = this->RotateZAlpha;
  pFVar11 = (this->Effectors_DEPRECATED).AllocatorInstance.Data;
  iVar2 = (this->Effectors_DEPRECATED).ArrayNum;
  pFVar1 = pFVar11 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Effectors_DEPRECATED).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UIKRig_BodyMoverEffector>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar11 == pFVar1) break;
    lVar5 = *(longlong *)pFVar11;
    local_48 = &___7FIKRigBodyMoverGoalSettings__6B_;
    local_38 = *(undefined8 *)(lVar5 + 0x30);
    local_40 = *(undefined8 *)(lVar5 + 0x28);
    local_30 = *(undefined4 *)(lVar5 + 0x38);
    if ((*(undefined ****)(puVar3 + 0x50) <= &local_48) &&
       (&local_48 < *(undefined ****)(puVar3 + 0x50) + (longlong)*(int *)(puVar3 + 0x5c) * 4)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar8 = *(int *)(puVar3 + 0x58);
    if (iVar8 == *(int *)(puVar3 + 0x5c)) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,(ForAnyElementType *)(puVar3 + 0x50),(int *)(puVar3 + 0x5c));
    }
    *(int *)(puVar3 + 0x58) = iVar8 + 1;
    lVar5 = *(longlong *)(puVar3 + 0x50);
    lVar10 = (longlong)iVar8 * 0x20;
    pFVar11 = pFVar11 + 8;
    *(undefined ***)(lVar10 + lVar5) = &___7FIKRigGoalSettingsBase__6B_;
    *(undefined8 *)(lVar10 + 8 + lVar5) = local_40;
    *(undefined ***)(lVar10 + lVar5) = &___7FIKRigBodyMoverGoalSettings__6B_;
    *(undefined8 *)(lVar10 + 0x10 + lVar5) = local_38;
    *(undefined4 *)(lVar10 + 0x18 + lVar5) = local_30;
  }
  return;
}

// GetPrivateStaticClass @ 14df3d7b0

UClass * __cdecl UIKRig_BodyMover::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRig_BodyMover.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRig_BodyMover",
               &Z_Registration_Info_UClass_UIKRig_BodyMover.InnerSingleton,
               StaticRegisterNativesUIKRig_BodyMover,0x78,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UIKRig_BodyMover>,
               InternalVTableHelperCtorCaller<UIKRig_BodyMover>,local_res8,UIKRigSolver::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRig_BodyMover.InnerSingleton;
}

// StaticRegisterNativesUIKRig_BodyMover @ 14df5a2c0

void __cdecl UIKRig_BodyMover::StaticRegisterNativesUIKRig_BodyMover(void)

{
  return;
}

