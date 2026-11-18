// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PhysicsControl
// Functions: 29

// StaticClass @ 14d9b0070

UClass * __cdecl UPhysicsControlBPLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPhysicsControlBPLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PhysicsControl",L"PhysicsControlBPLibrary",
               &Z_Registration_Info_UClass_UPhysicsControlBPLibrary.InnerSingleton,
               StaticRegisterNativesUPhysicsControlBPLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPhysicsControlBPLibrary>,
               InternalVTableHelperCtorCaller<UPhysicsControlBPLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPhysicsControlBPLibrary.InnerSingleton;
}

// UPhysicsControlBPLibrary @ 14d9bfca0

UPhysicsControlBPLibrary * __thiscall
UPhysicsControlBPLibrary::UPhysicsControlBPLibrary
          (UPhysicsControlBPLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UPhysicsControlBPLibrary__6B_;
  return this;
}

// UPhysicsControlBPLibrary @ 14d9bfcd0

UPhysicsControlBPLibrary * __thiscall
UPhysicsControlBPLibrary::UPhysicsControlBPLibrary
          (UPhysicsControlBPLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UPhysicsControlBPLibrary__6B_;
  return this;
}

// ~UPhysicsControlBPLibrary @ 14d9c1480

void __thiscall UPhysicsControlBPLibrary::~UPhysicsControlBPLibrary(UPhysicsControlBPLibrary *this)

{
  *(undefined ***)this = &___7UPhysicsControlBPLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// AddControlParameters @ 14d9c60c0

void __cdecl
UPhysicsControlBPLibrary::AddControlParameters
          (FPhysicsControlControlAndModifierParameters *param_1,
          FPhysicsControlControlAndModifierParameters *param_2,FName param_3,
          FPhysicsControlSparseData *param_4)

{
  FPhysicsControlNamedControlParameters local_58;
  
  TArray<FPhysicsControlNamedControlParameters,TSizedDefaultAllocator<32>_>::operator=
            (&param_2->ControlParameters,&param_1->ControlParameters);
  TArray<FPhysicsControlNamedControlMultiplierParameters,TSizedDefaultAllocator<32>_>::operator=
            (&param_2->ControlMultiplierParameters,&param_1->ControlMultiplierParameters);
  TArray<FPhysicsControlNamedModifierParameters,TSizedDefaultAllocator<32>_>::operator=
            (&param_2->ModifierParameters,&param_1->ModifierParameters);
  local_58.Data.LinearStrength = param_4->LinearStrength;
  local_58.Data.LinearDampingRatio = param_4->LinearDampingRatio;
  local_58.Data.LinearExtraDamping = param_4->LinearExtraDamping;
  local_58.Data.MaxForce = param_4->MaxForce;
  local_58.Data.AngularStrength = param_4->AngularStrength;
  local_58.Data.AngularDampingRatio = param_4->AngularDampingRatio;
  local_58.Data.AngularExtraDamping = param_4->AngularExtraDamping;
  local_58.Data.MaxTorque = param_4->MaxTorque;
  local_58.Data.LinearTargetVelocityMultiplier = param_4->LinearTargetVelocityMultiplier;
  local_58.Data.AngularTargetVelocityMultiplier = param_4->AngularTargetVelocityMultiplier;
  local_58.Data.CustomControlPoint.field0_0x0._s_0.X =
       (param_4->CustomControlPoint).field0_0x0._s_0.X;
  local_58.Data.CustomControlPoint.field0_0x0._s_0.Y =
       (param_4->CustomControlPoint).field0_0x0._s_0.Y;
  local_58.Data.CustomControlPoint.field0_0x0._s_0.Z =
       (param_4->CustomControlPoint).field0_0x0._s_0.Z;
  local_58.Data._64_8_ = *(undefined8 *)&param_4->field_0x40;
  local_58.Name = param_3;
  FPhysicsControlControlAndModifierParameters::Add(param_2,&local_58);
  return;
}

// AddModifierParameters @ 14d9c63d0

void __cdecl
UPhysicsControlBPLibrary::AddModifierParameters
          (FPhysicsControlControlAndModifierParameters *param_1,
          FPhysicsControlControlAndModifierParameters *param_2,FName param_3,
          FPhysicsControlModifierSparseData *param_4)

{
  FPhysicsControlNamedModifierParameters local_28;
  
  TArray<FPhysicsControlNamedControlParameters,TSizedDefaultAllocator<32>_>::operator=
            (&param_2->ControlParameters,&param_1->ControlParameters);
  TArray<FPhysicsControlNamedControlMultiplierParameters,TSizedDefaultAllocator<32>_>::operator=
            (&param_2->ControlMultiplierParameters,&param_1->ControlMultiplierParameters);
  TArray<FPhysicsControlNamedModifierParameters,TSizedDefaultAllocator<32>_>::operator=
            (&param_2->ModifierParameters,&param_1->ModifierParameters);
  local_28.Data.MovementType = param_4->MovementType;
  local_28.Data.CollisionType.Value = (param_4->CollisionType).Value;
  local_28.Data._2_2_ = *(undefined2 *)&param_4->field_0x2;
  local_28.Data.GravityMultiplier = param_4->GravityMultiplier;
  local_28.Data.PhysicsBlendWeight = param_4->PhysicsBlendWeight;
  local_28.Data.KinematicTargetSpace = param_4->KinematicTargetSpace;
  local_28.Data._13_3_ = *(undefined3 *)&param_4->field_0xd;
  local_28.Name = param_3;
  FPhysicsControlControlAndModifierParameters::Add(param_2,&local_28);
  return;
}

// AddMultipleControlParameters @ 14d9c6450

void __cdecl
UPhysicsControlBPLibrary::AddMultipleControlParameters
          (FPhysicsControlControlAndModifierParameters *param_1,
          FPhysicsControlControlAndModifierParameters *param_2,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_3,FPhysicsControlSparseData *param_4)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  undefined1 local_res8 [8];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  double dStack_48;
  double local_40;
  double dStack_38;
  undefined8 local_30;
  
  TArray<FPhysicsControlNamedControlParameters,TSizedDefaultAllocator<32>_>::operator=
            (&param_2->ControlParameters,&param_1->ControlParameters);
  TArray<FPhysicsControlNamedControlMultiplierParameters,TSizedDefaultAllocator<32>_>::operator=
            (&param_2->ControlMultiplierParameters,&param_1->ControlMultiplierParameters);
  TArray<FPhysicsControlNamedModifierParameters,TSizedDefaultAllocator<32>_>::operator=
            (&param_2->ModifierParameters,&param_1->ModifierParameters);
  iVar3 = (param_2->ControlParameters).ArrayNum;
  uVar10 = param_3->ArrayNum + iVar3;
  if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
  }
  piVar1 = &(param_2->ControlParameters).ArrayMax;
  if (*piVar1 < (int)uVar10) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,uVar10,(ForAnyElementType *)param_2,iVar3,piVar1);
  }
  pFVar9 = (param_3->AllocatorInstance).Data;
  iVar3 = param_3->ArrayNum;
  pFVar2 = pFVar9 + (longlong)iVar3 * 8;
  while( true ) {
    if (param_3->ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar9 == pFVar2) break;
    uStack_70._0_4_ = param_4->LinearStrength;
    uStack_70._4_4_ = param_4->LinearDampingRatio;
    uStack_68._0_4_ = param_4->LinearExtraDamping;
    uStack_68._4_4_ = param_4->MaxForce;
    local_78 = *(undefined8 *)pFVar9;
    uStack_60._0_4_ = param_4->AngularStrength;
    uStack_60._4_4_ = param_4->AngularDampingRatio;
    uStack_58._0_4_ = param_4->AngularExtraDamping;
    uStack_58._4_4_ = param_4->MaxTorque;
    pFVar4 = (param_2->ControlParameters).AllocatorInstance.Data;
    local_50._0_4_ = param_4->LinearTargetVelocityMultiplier;
    local_50._4_4_ = param_4->AngularTargetVelocityMultiplier;
    dStack_48 = (param_4->CustomControlPoint).field0_0x0._s_0.X;
    local_40 = (param_4->CustomControlPoint).field0_0x0._s_0.Y;
    dStack_38 = (param_4->CustomControlPoint).field0_0x0._s_0.Z;
    local_30 = *(undefined8 *)&param_4->field_0x40;
    if ((pFVar4 <= (FScriptContainerElement *)&local_78) &&
       ((FScriptContainerElement *)&local_78 < pFVar4 + (longlong)*piVar1 * 0x50)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar7 = (param_2->ControlParameters).ArrayNum;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x850,(ForAnyElementType *)param_2,piVar1);
    }
    lVar8 = (longlong)iVar7;
    (param_2->ControlParameters).ArrayNum = iVar7 + 1;
    pFVar4 = (param_2->ControlParameters).AllocatorInstance.Data;
    pFVar9 = pFVar9 + 8;
    *(undefined8 *)(pFVar4 + lVar8 * 0x50) = local_78;
    *(undefined8 *)(pFVar4 + lVar8 * 0x50 + 8) = uStack_70;
    *(undefined8 *)(pFVar4 + lVar8 * 0x50 + 0x10) = uStack_68;
    *(undefined8 *)(pFVar4 + lVar8 * 0x50 + 0x10 + 8) = uStack_60;
    *(undefined8 *)(pFVar4 + lVar8 * 0x50 + 0x20) = uStack_58;
    *(undefined8 *)(pFVar4 + lVar8 * 0x50 + 0x20 + 8) = local_50;
    *(double *)(pFVar4 + lVar8 * 0x50 + 0x30) = dStack_48;
    *(double *)(pFVar4 + lVar8 * 0x50 + 0x30 + 8) = local_40;
    *(double *)(pFVar4 + lVar8 * 0x50 + 0x40) = dStack_38;
    *(undefined8 *)(pFVar4 + lVar8 * 0x50 + 0x40 + 8) = local_30;
  }
  return;
}

// AddMultipleModifierParameters @ 14d9c6660

void __cdecl
UPhysicsControlBPLibrary::AddMultipleModifierParameters
          (FPhysicsControlControlAndModifierParameters *param_1,
          FPhysicsControlControlAndModifierParameters *param_2,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_3,
          FPhysicsControlModifierSparseData *param_4)

{
  TArray<FPhysicsControlNamedModifierParameters,TSizedDefaultAllocator<32>_> *this;
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  undefined1 local_res8 [8];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  TArray<FPhysicsControlNamedControlParameters,TSizedDefaultAllocator<32>_>::operator=
            (&param_2->ControlParameters,&param_1->ControlParameters);
  TArray<FPhysicsControlNamedControlMultiplierParameters,TSizedDefaultAllocator<32>_>::operator=
            (&param_2->ControlMultiplierParameters,&param_1->ControlMultiplierParameters);
  this = &param_2->ModifierParameters;
  TArray<FPhysicsControlNamedModifierParameters,TSizedDefaultAllocator<32>_>::operator=
            (this,&param_1->ModifierParameters);
  iVar3 = (param_2->ModifierParameters).ArrayNum;
  uVar10 = param_3->ArrayNum + iVar3;
  if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
  }
  piVar1 = &(param_2->ModifierParameters).ArrayMax;
  if (*piVar1 < (int)uVar10) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,uVar10,&this->AllocatorInstance,iVar3,piVar1);
  }
  pFVar9 = (param_3->AllocatorInstance).Data;
  iVar3 = param_3->ArrayNum;
  pFVar2 = pFVar9 + (longlong)iVar3 * 8;
  while( true ) {
    if (param_3->ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar9 == pFVar2) break;
    local_48 = *(undefined8 *)pFVar9;
    uStack_40._0_1_ = param_4->MovementType;
    uStack_40._1_1_ = param_4->CollisionType;
    uStack_40._2_2_ = *(undefined2 *)&param_4->field_0x2;
    uStack_40._4_4_ = param_4->GravityMultiplier;
    uStack_38._0_4_ = param_4->PhysicsBlendWeight;
    uStack_38._4_1_ = param_4->KinematicTargetSpace;
    uStack_38._5_3_ = *(undefined3 *)&param_4->field_0xd;
    pFVar4 = (this->AllocatorInstance).Data;
    if ((pFVar4 <= (FScriptContainerElement *)&local_48) &&
       ((FScriptContainerElement *)&local_48 < pFVar4 + (longlong)*piVar1 * 0x18)) {
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
    iVar8 = (param_2->ModifierParameters).ArrayNum;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x418,&this->AllocatorInstance,piVar1);
      (param_2->ModifierParameters).ArrayNum = iVar8;
    }
    pFVar9 = pFVar9 + 8;
    (param_2->ModifierParameters).ArrayNum = iVar8 + 1;
    pFVar5 = (this->AllocatorInstance).Data;
    pFVar4 = pFVar5 + (longlong)iVar8 * 0x18;
    *(undefined8 *)pFVar4 = local_48;
    *(undefined8 *)(pFVar4 + 8) = uStack_40;
    *(undefined8 *)(pFVar5 + (longlong)iVar8 * 0x18 + 0x10) = uStack_38;
  }
  return;
}

// BlendControlParametersThroughSet @ 14d9cc180

void __cdecl
UPhysicsControlBPLibrary::BlendControlParametersThroughSet
          (FPhysicsControlControlAndModifierParameters *param_1,
          FPhysicsControlNamedControlParameters *param_2,
          FPhysicsControlNamedControlParameters *param_3,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_4,
          FPhysicsControlControlAndModifierParameters *param_5)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  FPhysicsControlControlAndModifierParameters *pFVar5;
  bool bVar6;
  int iVar7;
  FPhysicsControlSparseData *pFVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  float fVar11;
  float fVar12;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  double dStack_b8;
  double dStack_b0;
  double dStack_a8;
  double dStack_a0;
  FPhysicsControlSparseData FStack_98;
  
  pFVar5 = param_5;
  TArray<FPhysicsControlNamedControlParameters,TSizedDefaultAllocator<32>_>::operator=
            (&param_5->ControlParameters,&param_1->ControlParameters);
  TArray<FPhysicsControlNamedControlMultiplierParameters,TSizedDefaultAllocator<32>_>::operator=
            (&pFVar5->ControlMultiplierParameters,&param_1->ControlMultiplierParameters);
  TArray<FPhysicsControlNamedModifierParameters,TSizedDefaultAllocator<32>_>::operator=
            (&pFVar5->ModifierParameters,&param_1->ModifierParameters);
  iVar2 = param_4->ArrayNum;
  fVar11 = 0.0;
  pFVar10 = (param_4->AllocatorInstance).Data;
  pFVar1 = pFVar10 + (longlong)iVar2 * 8;
  fVar12 = __real_3f800000 / (float)(iVar2 + -1);
  while( true ) {
    if (param_4->ArrayNum != iVar2) {
      param_5._0_1_ = 0;
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&param_5);
    }
    if (pFVar10 == pFVar1) break;
    pFVar8 = ::Interpolate(&FStack_98,&param_2->Data,&param_3->Data,fVar11);
    uStack_e8 = *(undefined8 *)pFVar10;
    pFVar3 = (pFVar5->ControlParameters).AllocatorInstance.Data;
    uStack_e0._0_4_ = pFVar8->LinearStrength;
    uStack_e0._4_4_ = pFVar8->LinearDampingRatio;
    uStack_d8._0_4_ = pFVar8->LinearExtraDamping;
    uStack_d8._4_4_ = pFVar8->MaxForce;
    uStack_d0._0_4_ = pFVar8->AngularStrength;
    uStack_d0._4_4_ = pFVar8->AngularDampingRatio;
    uStack_c8._0_4_ = pFVar8->AngularExtraDamping;
    uStack_c8._4_4_ = pFVar8->MaxTorque;
    uStack_c0._0_4_ = pFVar8->LinearTargetVelocityMultiplier;
    uStack_c0._4_4_ = pFVar8->AngularTargetVelocityMultiplier;
    dStack_b8 = (pFVar8->CustomControlPoint).field0_0x0._s_0.X;
    dStack_b0 = (pFVar8->CustomControlPoint).field0_0x0._s_0.Y;
    dStack_a8 = (pFVar8->CustomControlPoint).field0_0x0._s_0.Z;
    dStack_a0 = *(double *)&pFVar8->field_0x40;
    if ((pFVar3 <= (FScriptContainerElement *)&uStack_e8) &&
       ((FScriptContainerElement *)&uStack_e8 <
        pFVar3 + (longlong)(pFVar5->ControlParameters).ArrayMax * 0x50)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar7 = (pFVar5->ControlParameters).ArrayNum;
    if (iVar7 == (pFVar5->ControlParameters).ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x850,(ForAnyElementType *)pFVar5,&(pFVar5->ControlParameters).ArrayMax);
      (pFVar5->ControlParameters).ArrayNum = iVar7;
    }
    lVar9 = (longlong)iVar7;
    (pFVar5->ControlParameters).ArrayNum = iVar7 + 1;
    fVar11 = fVar11 + fVar12;
    pFVar3 = (pFVar5->ControlParameters).AllocatorInstance.Data;
    pFVar10 = pFVar10 + 8;
    *(undefined8 *)(pFVar3 + lVar9 * 0x50) = uStack_e8;
    *(undefined8 *)(pFVar3 + lVar9 * 0x50 + 8) = uStack_e0;
    *(undefined8 *)(pFVar3 + lVar9 * 0x50 + 0x10) = uStack_d8;
    *(undefined8 *)(pFVar3 + lVar9 * 0x50 + 0x10 + 8) = uStack_d0;
    *(undefined8 *)(pFVar3 + lVar9 * 0x50 + 0x20) = uStack_c8;
    *(undefined8 *)(pFVar3 + lVar9 * 0x50 + 0x20 + 8) = uStack_c0;
    *(double *)(pFVar3 + lVar9 * 0x50 + 0x30) = dStack_b8;
    *(double *)(pFVar3 + lVar9 * 0x50 + 0x30 + 8) = dStack_b0;
    *(double *)(pFVar3 + lVar9 * 0x50 + 0x40) = dStack_a8;
    *(double *)(pFVar3 + lVar9 * 0x50 + 0x40 + 8) = dStack_a0;
  }
  return;
}

// BlendModifierParametersThroughSet @ 14d9cc190

void __cdecl
UPhysicsControlBPLibrary::BlendModifierParametersThroughSet
          (FPhysicsControlControlAndModifierParameters *param_1,
          FPhysicsControlNamedModifierParameters *param_2,
          FPhysicsControlNamedModifierParameters *param_3,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_4,
          FPhysicsControlControlAndModifierParameters *param_5)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  FPhysicsControlControlAndModifierParameters *pFVar7;
  bool bVar8;
  int iVar9;
  FPhysicsControlModifierSparseData *pFVar10;
  FScriptContainerElement *pFVar11;
  float fVar12;
  float fVar13;
  FPhysicsControlModifierSparseData local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  pFVar7 = param_5;
  TArray<FPhysicsControlNamedControlParameters,TSizedDefaultAllocator<32>_>::operator=
            (&param_5->ControlParameters,&param_1->ControlParameters);
  TArray<FPhysicsControlNamedControlMultiplierParameters,TSizedDefaultAllocator<32>_>::operator=
            (&pFVar7->ControlMultiplierParameters,&param_1->ControlMultiplierParameters);
  TArray<FPhysicsControlNamedModifierParameters,TSizedDefaultAllocator<32>_>::operator=
            (&pFVar7->ModifierParameters,&param_1->ModifierParameters);
  iVar3 = param_4->ArrayNum;
  fVar12 = 0.0;
  pFVar11 = (param_4->AllocatorInstance).Data;
  pFVar2 = pFVar11 + (longlong)iVar3 * 8;
  fVar13 = __real_3f800000 / (float)(iVar3 + -1);
  while( true ) {
    if (param_4->ArrayNum != iVar3) {
      param_5._0_1_ = 0;
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&param_5);
    }
    if (pFVar11 == pFVar2) break;
    pFVar10 = ::Interpolate(&local_68,&param_2->Data,&param_3->Data,fVar12);
    local_58 = *(undefined8 *)pFVar11;
    pFVar4 = (pFVar7->ModifierParameters).AllocatorInstance.Data;
    uStack_50._0_1_ = pFVar10->MovementType;
    uStack_50._1_1_ = pFVar10->CollisionType;
    uStack_50._2_2_ = *(undefined2 *)&pFVar10->field_0x2;
    uStack_50._4_4_ = pFVar10->GravityMultiplier;
    uStack_48._0_4_ = pFVar10->PhysicsBlendWeight;
    uStack_48._4_1_ = pFVar10->KinematicTargetSpace;
    uStack_48._5_3_ = *(undefined3 *)&pFVar10->field_0xd;
    if ((pFVar4 <= (FScriptContainerElement *)&local_58) &&
       ((FScriptContainerElement *)&local_58 <
        pFVar4 + (longlong)(pFVar7->ModifierParameters).ArrayMax * 0x18)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar9 = (pFVar7->ModifierParameters).ArrayNum;
    piVar1 = &(pFVar7->ModifierParameters).ArrayMax;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x418,&(pFVar7->ModifierParameters).AllocatorInstance,piVar1);
    }
    pFVar11 = pFVar11 + 8;
    (pFVar7->ModifierParameters).ArrayNum = iVar9 + 1;
    fVar12 = fVar12 + fVar13;
    pFVar5 = (pFVar7->ModifierParameters).AllocatorInstance.Data;
    pFVar4 = pFVar5 + (longlong)iVar9 * 0x18;
    *(undefined8 *)pFVar4 = local_58;
    *(undefined8 *)(pFVar4 + 8) = uStack_50;
    *(undefined8 *)(pFVar5 + (longlong)iVar9 * 0x18 + 0x10) = uStack_48;
  }
  return;
}

// BlendParameters @ 14d9cc350

void __cdecl
UPhysicsControlBPLibrary::BlendParameters
          (FPhysicsControlControlAndModifierParameters *param_1,
          FPhysicsControlControlAndModifierParameters *param_2,float param_3,
          FPhysicsControlControlAndModifierParameters *param_4)

{
  TArray<FPhysicsControlNamedModifierParameters,TSizedDefaultAllocator<32>_> *this;
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  longlong lVar5;
  double dVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  FPhysicsControlSparseData *pFVar10;
  FPhysicsControlModifierSparseData *pFVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  FPhysicsControlModifierSparseData local_98;
  FPhysicsControlSparseData local_88;
  
  TArray<FPhysicsControlNamedControlParameters,TSizedDefaultAllocator<32>_>::operator=
            (&param_4->ControlParameters,&param_1->ControlParameters);
  TArray<FPhysicsControlNamedControlMultiplierParameters,TSizedDefaultAllocator<32>_>::operator=
            (&param_4->ControlMultiplierParameters,&param_1->ControlMultiplierParameters);
  this = &param_4->ModifierParameters;
  TArray<FPhysicsControlNamedModifierParameters,TSizedDefaultAllocator<32>_>::operator=
            (this,&param_1->ModifierParameters);
  iVar2 = (param_2->ControlParameters).ArrayNum;
  pFVar13 = (param_2->ControlParameters).AllocatorInstance.Data;
  pFVar14 = pFVar13 + (longlong)iVar2 * 0x50;
LAB_14d9cc3c0:
  do {
    if ((param_2->ControlParameters).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FPhysicsControlNamedControlParameters_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar13 == pFVar14) {
      iVar2 = (param_2->ModifierParameters).ArrayNum;
      pFVar14 = (param_2->ModifierParameters).AllocatorInstance.Data;
      pFVar13 = pFVar14 + (longlong)iVar2 * 0x18;
LAB_14d9cc528:
      do {
        if ((param_2->ModifierParameters).ArrayNum != iVar2) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<FPhysicsControlNamedModifierParameters_const_,int,0>::operator!='
          ::__l2::<lambda_1>::operator()(local_res10);
        }
        if (pFVar14 == pFVar13) {
          return;
        }
        pFVar3 = (this->AllocatorInstance).Data;
        for (pFVar12 = pFVar3;
            pFVar12 != pFVar3 + (longlong)(param_4->ModifierParameters).ArrayNum * 0x18;
            pFVar12 = pFVar12 + 0x18) {
          if (*(longlong *)pFVar12 == *(longlong *)pFVar14) {
            pFVar11 = ::Interpolate(&local_98,(FPhysicsControlModifierSparseData *)(pFVar12 + 8),
                                    (FPhysicsControlModifierSparseData *)(pFVar14 + 8),param_3);
            pFVar14 = pFVar14 + 0x18;
            lVar5 = *(longlong *)&pFVar11->PhysicsBlendWeight;
            *(longlong *)(pFVar12 + 8) = *(longlong *)pFVar11;
            *(longlong *)(pFVar12 + 0x10) = lVar5;
            goto LAB_14d9cc528;
          }
        }
        if (((pFVar3 <= pFVar14) &&
            (pFVar14 < pFVar3 + (longlong)(param_4->ModifierParameters).ArrayMax * 0x18)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar8 = (param_4->ModifierParameters).ArrayNum;
        piVar1 = &(param_4->ModifierParameters).ArrayMax;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x418,&this->AllocatorInstance,piVar1);
        }
        (param_4->ModifierParameters).ArrayNum = iVar8 + 1;
        lVar5 = *(longlong *)(pFVar14 + 8);
        pFVar12 = (this->AllocatorInstance).Data;
        pFVar3 = pFVar12 + (longlong)iVar8 * 0x18;
        *(longlong *)pFVar3 = *(longlong *)pFVar14;
        *(longlong *)(pFVar3 + 8) = lVar5;
        pFVar3 = pFVar14 + 0x10;
        pFVar14 = pFVar14 + 0x18;
        *(longlong *)(pFVar12 + (longlong)iVar8 * 0x18 + 0x10) = *(longlong *)pFVar3;
      } while( true );
    }
    pFVar3 = (param_4->ControlParameters).AllocatorInstance.Data;
    for (pFVar12 = pFVar3;
        pFVar12 != pFVar3 + (longlong)(param_4->ControlParameters).ArrayNum * 0x50;
        pFVar12 = pFVar12 + 0x50) {
      if (*(longlong *)pFVar12 == *(longlong *)pFVar13) {
        pFVar10 = ::Interpolate(&local_88,(FPhysicsControlSparseData *)(pFVar12 + 8),
                                (FPhysicsControlSparseData *)(pFVar13 + 8),param_3);
        pFVar13 = pFVar13 + 0x50;
        lVar5 = *(longlong *)&pFVar10->LinearExtraDamping;
        *(longlong *)(pFVar12 + 8) = *(longlong *)pFVar10;
        *(longlong *)(pFVar12 + 0x10) = lVar5;
        lVar5 = *(longlong *)&pFVar10->AngularExtraDamping;
        *(longlong *)(pFVar12 + 0x18) = *(longlong *)&pFVar10->AngularStrength;
        *(longlong *)(pFVar12 + 0x20) = lVar5;
        dVar6 = (pFVar10->CustomControlPoint).field0_0x0._s_0.X;
        *(longlong *)(pFVar12 + 0x28) = *(longlong *)&pFVar10->LinearTargetVelocityMultiplier;
        *(double *)(pFVar12 + 0x30) = dVar6;
        dVar6 = (pFVar10->CustomControlPoint).field0_0x0._s_0.Z;
        *(double *)(pFVar12 + 0x38) = (pFVar10->CustomControlPoint).field0_0x0._s_0.Y;
        *(double *)(pFVar12 + 0x40) = dVar6;
        *(longlong *)(pFVar12 + 0x48) = *(longlong *)&pFVar10->field_0x40;
        goto LAB_14d9cc3c0;
      }
    }
    if (((pFVar3 <= pFVar13) &&
        (pFVar13 < pFVar3 + (longlong)(param_4->ControlParameters).ArrayMax * 0x50)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar8 = (param_4->ControlParameters).ArrayNum;
    piVar1 = &(param_4->ControlParameters).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x850,(ForAnyElementType *)param_4,piVar1);
    }
    lVar9 = (longlong)iVar8;
    (param_4->ControlParameters).ArrayNum = iVar8 + 1;
    lVar5 = *(longlong *)(pFVar13 + 8);
    pFVar12 = (param_4->ControlParameters).AllocatorInstance.Data;
    *(longlong *)(pFVar12 + lVar9 * 0x50) = *(longlong *)pFVar13;
    *(longlong *)(pFVar12 + lVar9 * 0x50 + 8) = lVar5;
    lVar5 = *(longlong *)(pFVar13 + 0x18);
    *(longlong *)(pFVar12 + lVar9 * 0x50 + 0x10) = *(longlong *)(pFVar13 + 0x10);
    *(longlong *)(pFVar12 + lVar9 * 0x50 + 0x10 + 8) = lVar5;
    lVar5 = *(longlong *)(pFVar13 + 0x28);
    *(longlong *)(pFVar12 + lVar9 * 0x50 + 0x20) = *(longlong *)(pFVar13 + 0x20);
    *(longlong *)(pFVar12 + lVar9 * 0x50 + 0x20 + 8) = lVar5;
    lVar5 = *(longlong *)(pFVar13 + 0x38);
    *(longlong *)(pFVar12 + lVar9 * 0x50 + 0x30) = *(longlong *)(pFVar13 + 0x30);
    *(longlong *)(pFVar12 + lVar9 * 0x50 + 0x30 + 8) = lVar5;
    pFVar3 = pFVar13 + 0x40;
    lVar5 = *(longlong *)(pFVar13 + 0x48);
    pFVar13 = pFVar13 + 0x50;
    *(longlong *)(pFVar12 + lVar9 * 0x50 + 0x40) = *(longlong *)pFVar3;
    *(longlong *)(pFVar12 + lVar9 * 0x50 + 0x40 + 8) = lVar5;
  } while( true );
}

// ConvertToRigidBodyWithControl @ 14d9cf3c0

FRigidBodyWithControlReference * __cdecl
UPhysicsControlBPLibrary::ConvertToRigidBodyWithControl
          (FRigidBodyWithControlReference *__return_storage_ptr__,FAnimNodeReference *param_1,
          EAnimNodeReferenceConversionResult *param_2)

{
  int iVar1;
  bool bVar2;
  UPackage *pUVar3;
  UScriptStruct *pUVar4;
  UScriptStruct *pUVar5;
  
  pUVar4 = param_1->AnimNodeStruct;
  if (pUVar4 != (UScriptStruct *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FAnimNode_RigidBodyWithControl.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar3 = Z_Construct_UPackage__Script_PhysicsControl();
      Z_Registration_Info_UScriptStruct_FAnimNode_RigidBodyWithControl.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_RigidBodyWithControl,
                           (UObject *)pUVar3,L"AnimNode_RigidBodyWithControl");
      if (Z_Registration_Info_UScriptStruct_FAnimNode_RigidBodyWithControl.OuterSingleton ==
          (UScriptStruct *)0x0) goto LAB_14d9cf44b;
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FAnimNode_RigidBodyWithControl.OuterSingleton)->
                 _padding_;
    if (((int)pUVar4->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FAnimNode_RigidBodyWithControl.OuterSingleton)->
         _padding_)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      *param_2 = Succeeded;
      pUVar4 = param_1->AnimNodeStruct;
      pUVar5 = (UScriptStruct *)param_1->AnimNode;
      goto LAB_14d9cf453;
    }
  }
LAB_14d9cf44b:
  pUVar4 = (UScriptStruct *)0x0;
  *param_2 = Failed;
  pUVar5 = pUVar4;
LAB_14d9cf453:
  *(UScriptStruct **)__return_storage_ptr__ = pUVar5;
  *(UScriptStruct **)&__return_storage_ptr__->field_0x8 = pUVar4;
  return __return_storage_ptr__;
}

// GetBodyModifierNamesInSet @ 14d9dc430

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<FName,TSizedDefaultAllocator<32>_> * __cdecl
UPhysicsControlBPLibrary::GetBodyModifierNamesInSet
          (TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FRigidBodyWithControlReference *param_1,FName param_2)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *local_28;
  FName local_20;
  code *local_18;
  TArray<FName,TSizedDefaultAllocator<32>_> **local_10;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_10 = &local_28;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`GetNamesInSet<FPhysicsBodyModifier>'::__l2::<lambda_1>,void,FAnimNode_RigidBodyWithControl_&>
             ::Call;
  local_28 = __return_storage_ptr__;
  local_20 = param_2;
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_RigidBodyWithControl>
            ((FAnimNodeReference *)param_1,L"GetControlNamesInSet",
             (TFunctionRef<void___cdecl(FAnimNode_RigidBodyWithControl_&)> *)&local_18);
  return __return_storage_ptr__;
}

// GetControlNamesInSet @ 14d9dd910

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<FName,TSizedDefaultAllocator<32>_> * __cdecl
UPhysicsControlBPLibrary::GetControlNamesInSet
          (TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FRigidBodyWithControlReference *param_1,FName param_2)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *local_28;
  FName local_20;
  code *local_18;
  TArray<FName,TSizedDefaultAllocator<32>_> **local_10;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_10 = &local_28;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`GetNamesInSet<FPhysicsControl>'::__l2::<lambda_1>,void,FAnimNode_RigidBodyWithControl_&>
             ::Call;
  local_28 = __return_storage_ptr__;
  local_20 = param_2;
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_RigidBodyWithControl>
            ((FAnimNodeReference *)param_1,L"GetControlNamesInSet",
             (TFunctionRef<void___cdecl(FAnimNode_RigidBodyWithControl_&)> *)&local_18);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14d9de9e0

UClass * __cdecl UPhysicsControlBPLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPhysicsControlBPLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PhysicsControl",L"PhysicsControlBPLibrary",
               &Z_Registration_Info_UClass_UPhysicsControlBPLibrary.InnerSingleton,
               StaticRegisterNativesUPhysicsControlBPLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPhysicsControlBPLibrary>,
               InternalVTableHelperCtorCaller<UPhysicsControlBPLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPhysicsControlBPLibrary.InnerSingleton;
}

// SetOverridePhysicsAsset @ 14d9ed240

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FRigidBodyWithControlReference * __cdecl
UPhysicsControlBPLibrary::SetOverridePhysicsAsset
          (FRigidBodyWithControlReference *__return_storage_ptr__,
          FRigidBodyWithControlReference *param_1,UPhysicsAsset *param_2)

{
  undefined8 uVar1;
  UPhysicsAsset *local_res8;
  code *local_18;
  UPhysicsAsset **local_10;
  
  local_10 = &local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UPhysicsControlBPLibrary::SetOverridePhysicsAsset'::__l2::<lambda_1>,void,FAnimNode_RigidBodyWithControl_&>
             ::Call;
  local_res8 = param_2;
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_RigidBodyWithControl>
            ((FAnimNodeReference *)param_1,L"SetOverridePhysicsAsset",
             (TFunctionRef<void___cdecl(FAnimNode_RigidBodyWithControl_&)> *)&local_18);
  uVar1 = *(undefined8 *)&param_1->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)param_1;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar1;
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPhysicsControlBPLibrary @ 14d9edbc0

void __cdecl UPhysicsControlBPLibrary::StaticRegisterNativesUPhysicsControlBPLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xc;
  local_18.DataPtr = Z_Construct_UClass_UPhysicsControlBPLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAddControlParameters @ 14d9f4fa0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UPhysicsControlBPLibrary::execAddControlParameters(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  uchar *puVar3;
  FPhysicsControlControlAndModifierParameters *this;
  TArray<FPhysicsControlNamedControlParameters,TSizedDefaultAllocator<32>_> *pTVar4;
  undefined8 local_res10 [2];
  undefined8 local_res20;
  FPhysicsControlControlAndModifierParameters local_128;
  TArray<FPhysicsControlNamedControlParameters,TSizedDefaultAllocator<32>_> local_f8;
  void *local_e8;
  undefined8 local_e0;
  void *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  double local_a0;
  double dStack_98;
  double local_90;
  undefined2 local_88;
  byte local_86;
  FPhysicsControlNamedControlParameters local_78;
  
  local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.ArrayNum = 0;
  local_f8.ArrayMax = 0;
  local_e8 = (void *)0x0;
  local_e0 = 0;
  local_d8 = (void *)0x0;
  local_d0 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f8);
  }
  local_128.ControlParameters.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.ControlParameters.ArrayNum = 0;
  local_128.ControlParameters.ArrayMax = 0;
  pTVar4 = &local_f8;
  if ((TArray<FPhysicsControlNamedControlParameters,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<FPhysicsControlNamedControlParameters,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar4 = (TArray<FPhysicsControlNamedControlParameters,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  local_128.ControlMultiplierParameters.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.ControlMultiplierParameters.ArrayNum = 0;
  local_128.ControlMultiplierParameters.ArrayMax = 0;
  local_128.ModifierParameters.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.ModifierParameters.ArrayNum = 0;
  local_128.ModifierParameters.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_128,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_128);
  }
  local_res10[0] = 0;
  this = &local_128;
  if ((FPhysicsControlControlAndModifierParameters *)param_2->MostRecentPropertyAddress !=
      (FPhysicsControlControlAndModifierParameters *)0x0) {
    this = (FPhysicsControlControlAndModifierParameters *)param_2->MostRecentPropertyAddress;
  }
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_86 = local_86 | 0x1f;
  local_c8 = ___xmm_00000000000000003f80000000000000;
  uStack_c0 = _UNK_150689508;
  local_b8 = ___xmm_00000000000000003f80000000000000;
  uStack_b0 = _UNK_150689508;
  local_90 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_a8 = 0x3f800000;
  local_a4 = 0x3f800000;
  local_a0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_98 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_88 = 0xffe5;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  uVar2 = local_res10[0];
  puVar3 = (uchar *)&local_c8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res20 = local_res10[0];
  TArray<FPhysicsControlNamedControlParameters,TSizedDefaultAllocator<32>_>::operator=
            (&this->ControlParameters,pTVar4);
  TArray<FPhysicsControlNamedControlMultiplierParameters,TSizedDefaultAllocator<32>_>::operator=
            (&this->ControlMultiplierParameters,
             (TArray<FPhysicsControlNamedControlMultiplierParameters,TSizedDefaultAllocator<32>_> *)
             (pTVar4 + 1));
  TArray<FPhysicsControlNamedModifierParameters,TSizedDefaultAllocator<32>_>::operator=
            (&this->ModifierParameters,
             (TArray<FPhysicsControlNamedModifierParameters,TSizedDefaultAllocator<32>_> *)
             (pTVar4 + 2));
  local_78.Name.ComparisonIndex.Value = (uint)uVar2;
  local_78.Data._0_8_ = *(undefined8 *)puVar3;
  local_78.Data._8_8_ = *(undefined8 *)(puVar3 + 8);
  local_78.Name.Number = local_res20._4_4_;
  local_78.Data._16_8_ = *(undefined8 *)(puVar3 + 0x10);
  local_78.Data._24_8_ = *(undefined8 *)(puVar3 + 0x18);
  local_78.Data.CustomControlPoint.field0_0x0._s_0.Y = (double)*(undefined8 *)(puVar3 + 0x30);
  local_78.Data.CustomControlPoint.field0_0x0._s_0.Z = (double)*(undefined8 *)(puVar3 + 0x38);
  local_78.Data._32_8_ = *(undefined8 *)(puVar3 + 0x20);
  local_78.Data.CustomControlPoint.field0_0x0._s_0.X = *(double *)(puVar3 + 0x28);
  local_78.Data._64_1_ = puVar3[0x40];
  local_78.Data._65_1_ = puVar3[0x41];
  local_78.Data._66_1_ = puVar3[0x42];
  local_78.Data._67_1_ = puVar3[0x43];
  local_78.Data._68_1_ = puVar3[0x44];
  local_78.Data._69_1_ = puVar3[0x45];
  local_78.Data._70_1_ = puVar3[0x46];
  local_78.Data._71_1_ = puVar3[0x47];
  FPhysicsControlControlAndModifierParameters::Add(this,&local_78);
  if (local_128.ModifierParameters.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.ModifierParameters.AllocatorInstance.Data);
  }
  if (local_128.ControlMultiplierParameters.AllocatorInstance.Data != (FScriptContainerElement *)0x0
     ) {
    FMemory::Free(local_128.ControlMultiplierParameters.AllocatorInstance.Data);
  }
  if (local_128.ControlParameters.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.ControlParameters.AllocatorInstance.Data);
  }
  if (local_d8 != (void *)0x0) {
    FMemory::Free(local_d8);
  }
  if (local_e8 != (void *)0x0) {
    FMemory::Free(local_e8);
  }
  if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.AllocatorInstance.Data);
  }
  return;
}

// execAddModifierParameters @ 14d9f5550

void __cdecl
UPhysicsControlBPLibrary::execAddModifierParameters(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  uchar *puVar3;
  FPhysicsControlControlAndModifierParameters *this;
  TArray<FPhysicsControlNamedControlParameters,TSizedDefaultAllocator<32>_> *pTVar4;
  undefined8 local_res10 [2];
  undefined8 local_res20;
  uchar local_b8 [4];
  undefined4 local_b4;
  undefined4 local_b0;
  undefined1 local_ac;
  byte local_ab;
  FPhysicsControlControlAndModifierParameters local_a8;
  TArray<FPhysicsControlNamedControlParameters,TSizedDefaultAllocator<32>_> local_78;
  void *local_68;
  undefined8 local_60;
  void *local_58;
  undefined8 local_50;
  FPhysicsControlNamedModifierParameters local_48;
  
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  local_68 = (void *)0x0;
  local_60 = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_a8.ControlParameters.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ControlParameters.ArrayNum = 0;
  local_a8.ControlParameters.ArrayMax = 0;
  pTVar4 = &local_78;
  if ((TArray<FPhysicsControlNamedControlParameters,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<FPhysicsControlNamedControlParameters,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar4 = (TArray<FPhysicsControlNamedControlParameters,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  local_a8.ControlMultiplierParameters.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ControlMultiplierParameters.ArrayNum = 0;
  local_a8.ControlMultiplierParameters.ArrayMax = 0;
  local_a8.ModifierParameters.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ModifierParameters.ArrayNum = 0;
  local_a8.ModifierParameters.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  local_res10[0] = 0;
  this = &local_a8;
  if ((FPhysicsControlControlAndModifierParameters *)param_2->MostRecentPropertyAddress !=
      (FPhysicsControlControlAndModifierParameters *)0x0) {
    this = (FPhysicsControlControlAndModifierParameters *)param_2->MostRecentPropertyAddress;
  }
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_ab = local_ab | 0x7f;
  local_b8[0] = '\x02';
  local_b8[1] = '\x03';
  local_b4 = 0x3f800000;
  local_b0 = 0x3f800000;
  local_ac = 2;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_b8);
  }
  uVar2 = local_res10[0];
  puVar3 = local_b8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res20 = local_res10[0];
  TArray<FPhysicsControlNamedControlParameters,TSizedDefaultAllocator<32>_>::operator=
            (&this->ControlParameters,pTVar4);
  TArray<FPhysicsControlNamedControlMultiplierParameters,TSizedDefaultAllocator<32>_>::operator=
            (&this->ControlMultiplierParameters,
             (TArray<FPhysicsControlNamedControlMultiplierParameters,TSizedDefaultAllocator<32>_> *)
             (pTVar4 + 1));
  TArray<FPhysicsControlNamedModifierParameters,TSizedDefaultAllocator<32>_>::operator=
            (&this->ModifierParameters,
             (TArray<FPhysicsControlNamedModifierParameters,TSizedDefaultAllocator<32>_> *)
             (pTVar4 + 2));
  local_48.Data._0_8_ = *(undefined8 *)puVar3;
  local_48.Data._8_8_ = *(undefined8 *)(puVar3 + 8);
  local_48.Name.ComparisonIndex.Value = (uint)uVar2;
  local_48.Name.Number = local_res20._4_4_;
  FPhysicsControlControlAndModifierParameters::Add(this,&local_48);
  if (local_a8.ModifierParameters.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ModifierParameters.AllocatorInstance.Data);
  }
  if (local_a8.ControlMultiplierParameters.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(local_a8.ControlMultiplierParameters.AllocatorInstance.Data);
  }
  if (local_a8.ControlParameters.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ControlParameters.AllocatorInstance.Data);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  return;
}

// execAddMultipleControlParameters @ 14d9f57b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UPhysicsControlBPLibrary::execAddMultipleControlParameters
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FPhysicsControlControlAndModifierParameters *pFVar2;
  FPhysicsControlSparseData *pFVar3;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar4;
  FPhysicsControlControlAndModifierParameters *pFVar5;
  TArray<FName,TSizedDefaultAllocator<32>_> local_d8;
  FPhysicsControlControlAndModifierParameters local_c8;
  FPhysicsControlControlAndModifierParameters local_98;
  FPhysicsControlSparseData local_68;
  
  local_98.ControlParameters.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.ControlParameters.ArrayNum = 0;
  local_98.ControlParameters.ArrayMax = 0;
  local_98.ControlMultiplierParameters.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.ControlMultiplierParameters.ArrayNum = 0;
  local_98.ControlMultiplierParameters.ArrayMax = 0;
  local_98.ModifierParameters.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.ModifierParameters.ArrayNum = 0;
  local_98.ModifierParameters.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_c8.ControlParameters.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.ControlParameters.ArrayNum = 0;
  local_c8.ControlParameters.ArrayMax = 0;
  pFVar5 = &local_98;
  if ((FPhysicsControlControlAndModifierParameters *)param_2->MostRecentPropertyAddress !=
      (FPhysicsControlControlAndModifierParameters *)0x0) {
    pFVar5 = (FPhysicsControlControlAndModifierParameters *)param_2->MostRecentPropertyAddress;
  }
  local_c8.ControlMultiplierParameters.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.ControlMultiplierParameters.ArrayNum = 0;
  local_c8.ControlMultiplierParameters.ArrayMax = 0;
  local_c8.ModifierParameters.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.ModifierParameters.ArrayNum = 0;
  local_c8.ModifierParameters.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 0;
  local_d8.ArrayMax = 0;
  pFVar2 = &local_c8;
  if ((FPhysicsControlControlAndModifierParameters *)param_2->MostRecentPropertyAddress !=
      (FPhysicsControlControlAndModifierParameters *)0x0) {
    pFVar2 = (FPhysicsControlControlAndModifierParameters *)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d8);
  }
  pTVar4 = &local_d8;
  if ((TArray<FName,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar4 = (TArray<FName,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  local_68.bEnablebOnlyControlChildObject = '\x01';
  local_68.bEnablebDisableCollision = '\x01';
  local_68.bEnablebUseSkeletalAnimation = '\x01';
  local_68.bEnablebUseCustomControlPoint = '\x01';
  local_68.bEnablebEnabled = '\x01';
  local_68.LinearStrength = ___xmm_00000000000000003f80000000000000;
  local_68.LinearDampingRatio = _UNK_150689504;
  local_68.LinearExtraDamping = _UNK_150689508;
  local_68.MaxForce = _UNK_15068950c;
  local_68.AngularStrength = ___xmm_00000000000000003f80000000000000;
  local_68.AngularDampingRatio = _UNK_150689504;
  local_68.AngularExtraDamping = _UNK_150689508;
  local_68.MaxTorque = _UNK_15068950c;
  local_68.LinearTargetVelocityMultiplier = 1.0;
  local_68.AngularTargetVelocityMultiplier = 1.0;
  local_68.CustomControlPoint.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_68.CustomControlPoint.field0_0x0._s_0.Y =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_68.bEnableCustomControlPoint = '\x01';
  local_68.bEnableAngularTargetVelocityMultiplier = '\x01';
  local_68.bEnableLinearTargetVelocityMultiplier = '\x01';
  local_68.bEnableMaxTorque = '\x01';
  local_68.bEnableAngularExtraDamping = '\x01';
  local_68.bEnableAngularDampingRatio = '\x01';
  local_68.bEnableAngularStrength = '\x01';
  local_68.bEnableMaxForce = '\x01';
  local_68.bEnableLinearExtraDamping = '\x01';
  local_68.bEnableLinearDampingRatio = '\x01';
  local_68.bEnableLinearStrength = '\x01';
  local_68.bOnlyControlChildObject = '\0';
  local_68.bDisableCollision = '\0';
  local_68.bUseSkeletalAnimation = '\x01';
  local_68.bUseCustomControlPoint = '\0';
  local_68.bEnabled = '\x01';
  local_68.CustomControlPoint.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  pFVar3 = &local_68;
  if ((FPhysicsControlSparseData *)param_2->MostRecentPropertyAddress !=
      (FPhysicsControlSparseData *)0x0) {
    pFVar3 = (FPhysicsControlSparseData *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  AddMultipleControlParameters(pFVar5,pFVar2,pTVar4,pFVar3);
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  if (local_c8.ModifierParameters.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.ModifierParameters.AllocatorInstance.Data);
  }
  if (local_c8.ControlMultiplierParameters.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(local_c8.ControlMultiplierParameters.AllocatorInstance.Data);
  }
  if (local_c8.ControlParameters.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.ControlParameters.AllocatorInstance.Data);
  }
  if (local_98.ModifierParameters.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.ModifierParameters.AllocatorInstance.Data);
  }
  if (local_98.ControlMultiplierParameters.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(local_98.ControlMultiplierParameters.AllocatorInstance.Data);
  }
  if (local_98.ControlParameters.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.ControlParameters.AllocatorInstance.Data);
  }
  return;
}

// execAddMultipleModifierParameters @ 14d9f5a20

void __cdecl
UPhysicsControlBPLibrary::execAddMultipleModifierParameters
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar2;
  FPhysicsControlModifierSparseData *pFVar3;
  FPhysicsControlControlAndModifierParameters *pFVar4;
  FPhysicsControlControlAndModifierParameters *pFVar5;
  FPhysicsControlModifierSparseData local_98;
  TArray<FName,TSizedDefaultAllocator<32>_> local_88;
  FPhysicsControlControlAndModifierParameters local_78;
  FPhysicsControlControlAndModifierParameters local_48;
  
  local_48.ControlParameters.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ControlParameters.ArrayNum = 0;
  local_48.ControlParameters.ArrayMax = 0;
  local_48.ControlMultiplierParameters.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ControlMultiplierParameters.ArrayNum = 0;
  local_48.ControlMultiplierParameters.ArrayMax = 0;
  local_48.ModifierParameters.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ModifierParameters.ArrayNum = 0;
  local_48.ModifierParameters.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_78.ControlParameters.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ControlParameters.ArrayNum = 0;
  local_78.ControlParameters.ArrayMax = 0;
  pFVar5 = &local_48;
  if ((FPhysicsControlControlAndModifierParameters *)param_2->MostRecentPropertyAddress !=
      (FPhysicsControlControlAndModifierParameters *)0x0) {
    pFVar5 = (FPhysicsControlControlAndModifierParameters *)param_2->MostRecentPropertyAddress;
  }
  local_78.ControlMultiplierParameters.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ControlMultiplierParameters.ArrayNum = 0;
  local_78.ControlMultiplierParameters.ArrayMax = 0;
  local_78.ModifierParameters.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ModifierParameters.ArrayNum = 0;
  local_78.ModifierParameters.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  pFVar4 = &local_78;
  if ((FPhysicsControlControlAndModifierParameters *)param_2->MostRecentPropertyAddress !=
      (FPhysicsControlControlAndModifierParameters *)0x0) {
    pFVar4 = (FPhysicsControlControlAndModifierParameters *)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_98.MovementType = Simulated;
  local_98.CollisionType.Value = '\x03';
  local_98.GravityMultiplier = 1.0;
  pTVar2 = &local_88;
  if ((TArray<FName,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<FName,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  local_98.PhysicsBlendWeight = 1.0;
  local_98.bEnablebUpdateKinematicFromSimulation = '\x01';
  local_98.bEnableKinematicTargetSpace = '\x01';
  local_98.bEnablePhysicsBlendWeight = '\x01';
  local_98.bEnableGravityMultiplier = '\x01';
  local_98.bEnableCollisionType = '\x01';
  local_98.bEnableMovementType = '\x01';
  local_98.bUpdateKinematicFromSimulation = '\x01';
  local_98.KinematicTargetSpace = OffsetInBoneSpace;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  pFVar3 = &local_98;
  if ((FPhysicsControlModifierSparseData *)param_2->MostRecentPropertyAddress !=
      (FPhysicsControlModifierSparseData *)0x0) {
    pFVar3 = (FPhysicsControlModifierSparseData *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  AddMultipleModifierParameters(pFVar5,pFVar4,pTVar2,pFVar3);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_78.ModifierParameters.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.ModifierParameters.AllocatorInstance.Data);
  }
  if (local_78.ControlMultiplierParameters.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(local_78.ControlMultiplierParameters.AllocatorInstance.Data);
  }
  if (local_78.ControlParameters.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.ControlParameters.AllocatorInstance.Data);
  }
  if (local_48.ModifierParameters.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.ModifierParameters.AllocatorInstance.Data);
  }
  if (local_48.ControlMultiplierParameters.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(local_48.ControlMultiplierParameters.AllocatorInstance.Data);
  }
  if (local_48.ControlParameters.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.ControlParameters.AllocatorInstance.Data);
  }
  return;
}

// execBlendControlParametersThroughSet @ 14d9f5c70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UPhysicsControlBPLibrary::execBlendControlParametersThroughSet
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar2;
  FPhysicsControlControlAndModifierParameters *pFVar3;
  FPhysicsControlControlAndModifierParameters *pFVar4;
  FPhysicsControlNamedControlParameters *pFVar5;
  FPhysicsControlNamedControlParameters *pFVar6;
  TArray<FName,TSizedDefaultAllocator<32>_> local_128;
  FPhysicsControlControlAndModifierParameters local_118;
  FPhysicsControlControlAndModifierParameters local_e8;
  FPhysicsControlNamedControlParameters local_b8;
  FPhysicsControlNamedControlParameters local_68;
  
  local_e8.ControlParameters.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.ControlParameters.ArrayNum = 0;
  local_e8.ControlParameters.ArrayMax = 0;
  local_e8.ControlMultiplierParameters.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.ControlMultiplierParameters.ArrayNum = 0;
  local_e8.ControlMultiplierParameters.ArrayMax = 0;
  local_e8.ModifierParameters.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.ModifierParameters.ArrayNum = 0;
  local_e8.ModifierParameters.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e8);
  }
  local_b8.Data.LinearExtraDamping = ___xmm_3f800000000000000000000000000000;
  local_b8.Data.MaxForce = _UNK_150689644;
  local_b8.Data.AngularStrength = _UNK_150689648;
  local_b8.Data.AngularDampingRatio = _UNK_15068964c;
  pFVar4 = &local_e8;
  if ((FPhysicsControlControlAndModifierParameters *)param_2->MostRecentPropertyAddress !=
      (FPhysicsControlControlAndModifierParameters *)0x0) {
    pFVar4 = (FPhysicsControlControlAndModifierParameters *)param_2->MostRecentPropertyAddress;
  }
  local_b8.Data.bEnablebOnlyControlChildObject = '\x01';
  local_b8.Data.bEnablebDisableCollision = '\x01';
  local_b8.Data.bEnablebUseSkeletalAnimation = '\x01';
  local_b8.Data.bEnablebUseCustomControlPoint = '\x01';
  local_b8.Data.bEnablebEnabled = '\x01';
  local_b8.Name.ComparisonIndex.Value = 0;
  local_b8.Name.Number = 0;
  local_b8.Data.CustomControlPoint.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_b8.Data.CustomControlPoint.field0_0x0._s_0.Y =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_b8.Data.CustomControlPoint.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_b8.Data.LinearStrength = 0.0;
  local_b8.Data.LinearDampingRatio = 1.0;
  local_b8.Data.AngularExtraDamping = ___xmm_3f8000003f8000000000000000000000;
  local_b8.Data.MaxTorque = _UNK_15076b1e4;
  local_b8.Data.LinearTargetVelocityMultiplier = _UNK_15076b1e8;
  local_b8.Data.AngularTargetVelocityMultiplier = _UNK_15076b1ec;
  local_b8.Data.bEnableCustomControlPoint = '\x01';
  local_b8.Data.bEnableAngularTargetVelocityMultiplier = '\x01';
  local_b8.Data.bEnableLinearTargetVelocityMultiplier = '\x01';
  local_b8.Data.bEnableMaxTorque = '\x01';
  local_b8.Data.bEnableAngularExtraDamping = '\x01';
  local_b8.Data.bEnableAngularDampingRatio = '\x01';
  local_b8.Data.bEnableAngularStrength = '\x01';
  local_b8.Data.bEnableMaxForce = '\x01';
  local_b8.Data.bEnableLinearExtraDamping = '\x01';
  local_b8.Data.bEnableLinearDampingRatio = '\x01';
  local_b8.Data.bEnableLinearStrength = '\x01';
  local_b8.Data.bOnlyControlChildObject = '\0';
  local_b8.Data.bDisableCollision = '\0';
  local_b8.Data.bUseSkeletalAnimation = '\x01';
  local_b8.Data.bUseCustomControlPoint = '\0';
  local_b8.Data.bEnabled = '\x01';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  local_68.Data.LinearExtraDamping = ___xmm_3f800000000000000000000000000000;
  local_68.Data.MaxForce = _UNK_150689644;
  local_68.Data.AngularStrength = _UNK_150689648;
  local_68.Data.AngularDampingRatio = _UNK_15068964c;
  pFVar6 = &local_b8;
  if ((FPhysicsControlNamedControlParameters *)param_2->MostRecentPropertyAddress !=
      (FPhysicsControlNamedControlParameters *)0x0) {
    pFVar6 = (FPhysicsControlNamedControlParameters *)param_2->MostRecentPropertyAddress;
  }
  local_68.Data.bEnablebOnlyControlChildObject = '\x01';
  local_68.Data.bEnablebDisableCollision = '\x01';
  local_68.Data.bEnablebUseSkeletalAnimation = '\x01';
  local_68.Data.bEnablebUseCustomControlPoint = '\x01';
  local_68.Data.bEnablebEnabled = '\x01';
  local_68.Name.ComparisonIndex.Value = 0;
  local_68.Name.Number = 0;
  local_68.Data.CustomControlPoint.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_68.Data.CustomControlPoint.field0_0x0._s_0.Y =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_68.Data.CustomControlPoint.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_68.Data.LinearStrength = 0.0;
  local_68.Data.LinearDampingRatio = 1.0;
  local_68.Data.AngularExtraDamping = ___xmm_3f8000003f8000000000000000000000;
  local_68.Data.MaxTorque = _UNK_15076b1e4;
  local_68.Data.LinearTargetVelocityMultiplier = _UNK_15076b1e8;
  local_68.Data.AngularTargetVelocityMultiplier = _UNK_15076b1ec;
  local_68.Data.bEnableCustomControlPoint = '\x01';
  local_68.Data.bEnableAngularTargetVelocityMultiplier = '\x01';
  local_68.Data.bEnableLinearTargetVelocityMultiplier = '\x01';
  local_68.Data.bEnableMaxTorque = '\x01';
  local_68.Data.bEnableAngularExtraDamping = '\x01';
  local_68.Data.bEnableAngularDampingRatio = '\x01';
  local_68.Data.bEnableAngularStrength = '\x01';
  local_68.Data.bEnableMaxForce = '\x01';
  local_68.Data.bEnableLinearExtraDamping = '\x01';
  local_68.Data.bEnableLinearDampingRatio = '\x01';
  local_68.Data.bEnableLinearStrength = '\x01';
  local_68.Data.bOnlyControlChildObject = '\0';
  local_68.Data.bDisableCollision = '\0';
  local_68.Data.bUseSkeletalAnimation = '\x01';
  local_68.Data.bUseCustomControlPoint = '\0';
  local_68.Data.bEnabled = '\x01';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_128.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.ArrayNum = 0;
  local_128.ArrayMax = 0;
  pFVar5 = &local_68;
  if ((FPhysicsControlNamedControlParameters *)param_2->MostRecentPropertyAddress !=
      (FPhysicsControlNamedControlParameters *)0x0) {
    pFVar5 = (FPhysicsControlNamedControlParameters *)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_128,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_128);
  }
  local_118.ControlParameters.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.ControlParameters.ArrayNum = 0;
  local_118.ControlParameters.ArrayMax = 0;
  pTVar2 = &local_128;
  if ((TArray<FName,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<FName,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  local_118.ControlMultiplierParameters.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.ControlMultiplierParameters.ArrayNum = 0;
  local_118.ControlMultiplierParameters.ArrayMax = 0;
  local_118.ModifierParameters.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.ModifierParameters.ArrayNum = 0;
  local_118.ModifierParameters.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_118,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_118);
  }
  pFVar3 = &local_118;
  if ((FPhysicsControlControlAndModifierParameters *)param_2->MostRecentPropertyAddress !=
      (FPhysicsControlControlAndModifierParameters *)0x0) {
    pFVar3 = (FPhysicsControlControlAndModifierParameters *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  BlendParametersThroughSet<FPhysicsControlNamedControlParameters>
            (pFVar4,pFVar6,pFVar5,pTVar2,pFVar3);
  if (local_118.ModifierParameters.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.ModifierParameters.AllocatorInstance.Data);
  }
  if (local_118.ControlMultiplierParameters.AllocatorInstance.Data != (FScriptContainerElement *)0x0
     ) {
    FMemory::Free(local_118.ControlMultiplierParameters.AllocatorInstance.Data);
  }
  if (local_118.ControlParameters.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.ControlParameters.AllocatorInstance.Data);
  }
  if (local_128.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.AllocatorInstance.Data);
  }
  if (local_e8.ModifierParameters.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.ModifierParameters.AllocatorInstance.Data);
  }
  if (local_e8.ControlMultiplierParameters.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(local_e8.ControlMultiplierParameters.AllocatorInstance.Data);
  }
  if (local_e8.ControlParameters.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.ControlParameters.AllocatorInstance.Data);
  }
  return;
}

// execBlendModifierParametersThroughSet @ 14d9f5fa0

void __cdecl
UPhysicsControlBPLibrary::execBlendModifierParametersThroughSet
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  FProperty *pFVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  int iVar11;
  FPhysicsControlModifierSparseData *pFVar12;
  TArray<FPhysicsControlNamedControlParameters,TSizedDefaultAllocator<32>_> *this;
  undefined8 *puVar13;
  uchar *puVar14;
  uchar *puVar15;
  void **ppvVar16;
  TArray<FPhysicsControlNamedControlParameters,TSizedDefaultAllocator<32>_> *pTVar17;
  float fVar18;
  undefined1 local_res10 [8];
  uchar local_118 [12];
  undefined4 local_10c;
  undefined4 local_108;
  undefined1 local_104;
  byte local_103;
  uchar local_100 [12];
  undefined4 local_f4;
  undefined4 local_f0;
  undefined1 local_ec;
  byte local_eb;
  void *local_e8;
  undefined8 local_e0;
  TArray<FPhysicsControlNamedControlParameters,TSizedDefaultAllocator<32>_> local_d8;
  void *local_c8;
  undefined8 local_c0;
  void *local_b8;
  undefined8 local_b0;
  TArray<FPhysicsControlNamedControlParameters,TSizedDefaultAllocator<32>_> local_a8;
  void *local_98;
  undefined8 local_90;
  void *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  FPhysicsControlModifierSparseData local_60 [3];
  
  local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayNum = 0;
  local_a8.ArrayMax = 0;
  local_98 = (void *)0x0;
  local_90 = 0;
  local_88 = (void *)0x0;
  local_80 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  fVar7 = __real_3f800000;
  local_118[0] = '\0';
  local_118[1] = '\0';
  local_118[2] = '\0';
  local_118[3] = '\0';
  local_118[4] = '\0';
  local_118[5] = '\0';
  local_118[6] = '\0';
  local_118[7] = '\0';
  pTVar17 = &local_a8;
  if ((TArray<FPhysicsControlNamedControlParameters,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<FPhysicsControlNamedControlParameters,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar17 = (TArray<FPhysicsControlNamedControlParameters,TSizedDefaultAllocator<32>_> *)
              param_2->MostRecentPropertyAddress;
  }
  local_118[8] = '\x02';
  local_118[9] = '\x03';
  local_103 = local_103 | 0x7f;
  local_10c = 0x3f800000;
  local_108 = 0x3f800000;
  local_104 = 2;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_118,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_118);
  }
  local_100[0] = '\0';
  local_100[1] = '\0';
  local_100[2] = '\0';
  local_100[3] = '\0';
  local_100[4] = '\0';
  local_100[5] = '\0';
  local_100[6] = '\0';
  local_100[7] = '\0';
  local_100[8] = '\x02';
  local_100[9] = '\x03';
  puVar14 = local_118;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar14 = param_2->MostRecentPropertyAddress;
  }
  local_f4 = 0x3f800000;
  local_eb = local_eb | 0x7f;
  local_f0 = 0x3f800000;
  local_ec = 2;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_100,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_100);
  }
  local_e8 = (void *)0x0;
  local_e0 = 0;
  puVar15 = local_100;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar15 = param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e8);
  }
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 0;
  local_d8.ArrayMax = 0;
  ppvVar16 = &local_e8;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar16 = (void **)param_2->MostRecentPropertyAddress;
  }
  local_c8 = (void *)0x0;
  local_c0 = 0;
  local_b8 = (void *)0x0;
  local_b0 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d8);
  }
  this = &local_d8;
  if ((TArray<FPhysicsControlNamedControlParameters,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<FPhysicsControlNamedControlParameters,TSizedDefaultAllocator<32>_> *)0x0) {
    this = (TArray<FPhysicsControlNamedControlParameters,TSizedDefaultAllocator<32>_> *)
           param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TArray<FPhysicsControlNamedControlParameters,TSizedDefaultAllocator<32>_>::operator=(this,pTVar17)
  ;
  TArray<FPhysicsControlNamedControlMultiplierParameters,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FPhysicsControlNamedControlMultiplierParameters,TSizedDefaultAllocator<32>_> *)
             (this + 1),
             (TArray<FPhysicsControlNamedControlMultiplierParameters,TSizedDefaultAllocator<32>_> *)
             (pTVar17 + 1));
  TArray<FPhysicsControlNamedModifierParameters,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FPhysicsControlNamedModifierParameters,TSizedDefaultAllocator<32>_> *)
             (this + 2),
             (TArray<FPhysicsControlNamedModifierParameters,TSizedDefaultAllocator<32>_> *)
             (pTVar17 + 2));
  iVar2 = *(int *)(ppvVar16 + 1);
  fVar18 = 0.0;
  puVar13 = *ppvVar16;
  puVar1 = puVar13 + iVar2;
  while( true ) {
    if (*(int *)(ppvVar16 + 1) != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (puVar13 == puVar1) break;
    pFVar12 = ::Interpolate(local_60,(FPhysicsControlModifierSparseData *)(puVar14 + 8),
                            (FPhysicsControlModifierSparseData *)(puVar15 + 8),fVar18);
    pFVar4 = this[2].AllocatorInstance.Data;
    local_78 = *puVar13;
    uStack_70._0_1_ = pFVar12->MovementType;
    uStack_70._1_1_ = pFVar12->CollisionType;
    uStack_70._2_2_ = *(undefined2 *)&pFVar12->field_0x2;
    uStack_70._4_4_ = pFVar12->GravityMultiplier;
    uStack_68._0_4_ = pFVar12->PhysicsBlendWeight;
    uStack_68._4_1_ = pFVar12->KinematicTargetSpace;
    uStack_68._5_3_ = *(undefined3 *)&pFVar12->field_0xd;
    if ((pFVar4 <= (FScriptContainerElement *)&local_78) &&
       ((FScriptContainerElement *)&local_78 < pFVar4 + (longlong)this[2].ArrayMax * 0x18)) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar10) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar11 = this[2].ArrayNum;
    if (iVar11 == this[2].ArrayMax) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x418,&this[2].AllocatorInstance,&this[2].ArrayMax);
    }
    uVar9 = uStack_70;
    uVar8 = local_78;
    puVar13 = puVar13 + 1;
    this[2].ArrayNum = iVar11 + 1;
    fVar18 = fVar18 + fVar7 / (float)(iVar2 + -1);
    pFVar5 = this[2].AllocatorInstance.Data;
    pFVar4 = pFVar5 + (longlong)iVar11 * 0x18;
    *(undefined8 *)pFVar4 = uVar8;
    *(undefined8 *)(pFVar4 + 8) = uVar9;
    *(undefined8 *)(pFVar5 + (longlong)iVar11 * 0x18 + 0x10) = uStack_68;
  }
  if (local_b8 != (void *)0x0) {
    FMemory::Free(local_b8);
  }
  if (local_c8 != (void *)0x0) {
    FMemory::Free(local_c8);
  }
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  if (local_e8 != (void *)0x0) {
    FMemory::Free(local_e8);
  }
  if (local_88 != (void *)0x0) {
    FMemory::Free(local_88);
  }
  if (local_98 != (void *)0x0) {
    FMemory::Free(local_98);
  }
  if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.AllocatorInstance.Data);
  }
  return;
}

// execBlendParameters @ 14d9f63b0

void __cdecl
UPhysicsControlBPLibrary::execBlendParameters(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FPhysicsControlControlAndModifierParameters *pFVar2;
  FPhysicsControlControlAndModifierParameters *pFVar3;
  FPhysicsControlControlAndModifierParameters *pFVar4;
  float local_res10 [2];
  FPhysicsControlControlAndModifierParameters local_a8;
  FPhysicsControlControlAndModifierParameters local_78;
  FPhysicsControlControlAndModifierParameters local_48;
  
  local_48.ControlParameters.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ControlParameters.ArrayNum = 0;
  local_48.ControlParameters.ArrayMax = 0;
  local_48.ControlMultiplierParameters.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ControlMultiplierParameters.ArrayNum = 0;
  local_48.ControlMultiplierParameters.ArrayMax = 0;
  local_48.ModifierParameters.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ModifierParameters.ArrayNum = 0;
  local_48.ModifierParameters.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_78.ControlParameters.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ControlParameters.ArrayNum = 0;
  local_78.ControlParameters.ArrayMax = 0;
  pFVar4 = &local_48;
  if ((FPhysicsControlControlAndModifierParameters *)param_2->MostRecentPropertyAddress !=
      (FPhysicsControlControlAndModifierParameters *)0x0) {
    pFVar4 = (FPhysicsControlControlAndModifierParameters *)param_2->MostRecentPropertyAddress;
  }
  local_78.ControlMultiplierParameters.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ControlMultiplierParameters.ArrayNum = 0;
  local_78.ControlMultiplierParameters.ArrayMax = 0;
  local_78.ModifierParameters.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ModifierParameters.ArrayNum = 0;
  local_78.ModifierParameters.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_res10[0] = 0.0;
  pFVar2 = &local_78;
  if ((FPhysicsControlControlAndModifierParameters *)param_2->MostRecentPropertyAddress !=
      (FPhysicsControlControlAndModifierParameters *)0x0) {
    pFVar2 = (FPhysicsControlControlAndModifierParameters *)param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_a8.ControlParameters.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ControlParameters.ArrayNum = 0;
  local_a8.ControlParameters.ArrayMax = 0;
  local_a8.ControlMultiplierParameters.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ControlMultiplierParameters.ArrayNum = 0;
  local_a8.ControlMultiplierParameters.ArrayMax = 0;
  local_a8.ModifierParameters.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ModifierParameters.ArrayNum = 0;
  local_a8.ModifierParameters.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  pFVar3 = &local_a8;
  if ((FPhysicsControlControlAndModifierParameters *)param_2->MostRecentPropertyAddress !=
      (FPhysicsControlControlAndModifierParameters *)0x0) {
    pFVar3 = (FPhysicsControlControlAndModifierParameters *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  BlendParameters(pFVar4,pFVar2,local_res10[0],pFVar3);
  if (local_a8.ModifierParameters.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ModifierParameters.AllocatorInstance.Data);
  }
  if (local_a8.ControlMultiplierParameters.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(local_a8.ControlMultiplierParameters.AllocatorInstance.Data);
  }
  if (local_a8.ControlParameters.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ControlParameters.AllocatorInstance.Data);
  }
  if (local_78.ModifierParameters.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.ModifierParameters.AllocatorInstance.Data);
  }
  if (local_78.ControlMultiplierParameters.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(local_78.ControlMultiplierParameters.AllocatorInstance.Data);
  }
  if (local_78.ControlParameters.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.ControlParameters.AllocatorInstance.Data);
  }
  if (local_48.ModifierParameters.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.ModifierParameters.AllocatorInstance.Data);
  }
  if (local_48.ControlMultiplierParameters.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(local_48.ControlMultiplierParameters.AllocatorInstance.Data);
  }
  if (local_48.ControlParameters.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.ControlParameters.AllocatorInstance.Data);
  }
  return;
}

// execConvertToRigidBodyWithControl @ 14d9f65f0

void __cdecl
UPhysicsControlBPLibrary::execConvertToRigidBodyWithControl
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FAnimNodeReference *pFVar1;
  FProperty *pFVar2;
  undefined8 uVar3;
  FRigidBodyWithControlReference *pFVar4;
  FAnimNodeReference *pFVar5;
  EAnimNodeReferenceConversionResult *pEVar6;
  EAnimNodeReferenceConversionResult local_res10 [8];
  FAnimNodeReference local_28;
  FRigidBodyWithControlReference local_18;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_28.AnimNode = (FAnimNode_Base *)0x0;
  local_28.AnimNodeStruct = (UScriptStruct *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pFVar1 = (FAnimNodeReference *)param_2->MostRecentPropertyAddress;
  local_res10[0] = Failed;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pFVar5 = &local_28;
  if (pFVar1 != (FAnimNodeReference *)0x0) {
    pFVar5 = pFVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pEVar6 = local_res10;
  if (param_2->MostRecentPropertyAddress != (EAnimNodeReferenceConversionResult *)0x0) {
    pEVar6 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = ConvertToRigidBodyWithControl(&local_18,pFVar5,pEVar6);
  uVar3 = *(undefined8 *)&pFVar4->field_0x8;
  *(undefined8 *)param_3 = *(undefined8 *)pFVar4;
  *(undefined8 *)((longlong)param_3 + 8) = uVar3;
  return;
}

// execConvertToRigidBodyWithControlPure @ 14d9f6700

void __cdecl
UPhysicsControlBPLibrary::execConvertToRigidBodyWithControlPure
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  int iVar2;
  FProperty *pFVar3;
  longlong lVar4;
  bool bVar5;
  uchar uVar6;
  UPackage *pUVar7;
  undefined8 uVar8;
  uchar *puVar9;
  uchar *puVar10;
  undefined8 uVar11;
  uchar *puVar12;
  uchar local_res10 [8];
  uchar local_38 [16];
  undefined8 local_28;
  undefined8 uStack_20;
  
  uVar8 = 0;
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_38[0] = '\0';
  local_38[1] = '\0';
  local_38[2] = '\0';
  local_38[3] = '\0';
  local_38[4] = '\0';
  local_38[5] = '\0';
  local_38[6] = '\0';
  local_38[7] = '\0';
  local_38[8] = '\0';
  local_38[9] = '\0';
  local_38[10] = '\0';
  local_38[0xb] = '\0';
  local_38[0xc] = '\0';
  local_38[0xd] = '\0';
  local_38[0xe] = '\0';
  local_38[0xf] = '\0';
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  puVar10 = param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  puVar9 = local_38;
  if (puVar10 != (uchar *)0x0) {
    puVar9 = puVar10;
  }
  local_28 = 0;
  uStack_20 = 0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  puVar10 = param_2->MostRecentPropertyAddress;
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar12 = (uchar *)&local_28;
  if (puVar10 != (uchar *)0x0) {
    puVar12 = puVar10;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  puVar10 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar10 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar4 = *(longlong *)(puVar9 + 8);
  if (lVar4 != 0) {
    if (Z_Registration_Info_UScriptStruct_FAnimNode_RigidBodyWithControl.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar7 = Z_Construct_UPackage__Script_PhysicsControl();
      Z_Registration_Info_UScriptStruct_FAnimNode_RigidBodyWithControl.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_RigidBodyWithControl,
                           (UObject *)pUVar7,L"AnimNode_RigidBodyWithControl");
      if (Z_Registration_Info_UScriptStruct_FAnimNode_RigidBodyWithControl.OuterSingleton ==
          (UScriptStruct *)0x0) goto LAB_14d9f688a;
    }
    iVar2 = (int)(Z_Registration_Info_UScriptStruct_FAnimNode_RigidBodyWithControl.OuterSingleton)->
                 _padding_;
    if ((*(int *)(lVar4 + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar2 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FAnimNode_RigidBodyWithControl.OuterSingleton)->
         _padding_)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      uVar6 = '\x01';
      uVar8 = *(undefined8 *)puVar9;
      uVar11 = *(undefined8 *)(puVar9 + 8);
      goto LAB_14d9f688f;
    }
  }
LAB_14d9f688a:
  uVar6 = '\0';
  uVar11 = uVar8;
LAB_14d9f688f:
  *(undefined8 *)puVar12 = uVar8;
  *(undefined8 *)(puVar12 + 8) = uVar11;
  *puVar10 = uVar6;
  return;
}

// execGetBodyModifierNamesInSet @ 14d9fb390

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UPhysicsControlBPLibrary::execGetBodyModifierNamesInSet
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FAnimNodeReference *this;
  undefined8 local_res10;
  void *local_58;
  undefined8 local_50;
  FAnimNodeReference local_48;
  void **local_38;
  undefined8 local_30;
  code *local_28;
  void ***local_20;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_48.AnimNode = (FAnimNode_Base *)0x0;
  local_48.AnimNodeStruct = (UScriptStruct *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res10 = 0;
  this = &local_48;
  if ((FAnimNodeReference *)param_2->MostRecentPropertyAddress != (FAnimNodeReference *)0x0) {
    this = (FAnimNodeReference *)param_2->MostRecentPropertyAddress;
  }
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_58 = (void *)0x0;
  local_50 = 0;
  local_38 = &local_58;
  local_30 = local_res10;
  local_20 = &local_38;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`GetNamesInSet<FPhysicsBodyModifier>'::__l2::<lambda_1>,void,FAnimNode_RigidBodyWithControl_&>
             ::Call;
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_RigidBodyWithControl>
            (this,L"GetControlNamesInSet",
             (TFunctionRef<void___cdecl(FAnimNode_RigidBodyWithControl_&)> *)&local_28);
  if (param_3 != &local_58) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(void **)param_3 = local_58;
    *(undefined4 *)((longlong)param_3 + 8) = (undefined4)local_50;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_50._4_4_;
    local_50 = 0;
    local_58 = (void *)0x0;
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  return;
}

// execGetControlNamesInSet @ 14d9fca50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UPhysicsControlBPLibrary::execGetControlNamesInSet(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FAnimNodeReference *this;
  undefined8 local_res10;
  void *local_58;
  undefined8 local_50;
  FAnimNodeReference local_48;
  void **local_38;
  undefined8 local_30;
  code *local_28;
  void ***local_20;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_48.AnimNode = (FAnimNode_Base *)0x0;
  local_48.AnimNodeStruct = (UScriptStruct *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res10 = 0;
  this = &local_48;
  if ((FAnimNodeReference *)param_2->MostRecentPropertyAddress != (FAnimNodeReference *)0x0) {
    this = (FAnimNodeReference *)param_2->MostRecentPropertyAddress;
  }
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_58 = (void *)0x0;
  local_50 = 0;
  local_38 = &local_58;
  local_30 = local_res10;
  local_20 = &local_38;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`GetNamesInSet<FPhysicsControl>'::__l2::<lambda_1>,void,FAnimNode_RigidBodyWithControl_&>
             ::Call;
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_RigidBodyWithControl>
            (this,L"GetControlNamesInSet",
             (TFunctionRef<void___cdecl(FAnimNode_RigidBodyWithControl_&)> *)&local_28);
  if (param_3 != &local_58) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(void **)param_3 = local_58;
    *(undefined4 *)((longlong)param_3 + 8) = (undefined4)local_50;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_50._4_4_;
    local_50 = 0;
    local_58 = (void *)0x0;
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  return;
}

// execSetOverridePhysicsAsset @ 14da05f90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UPhysicsControlBPLibrary::execSetOverridePhysicsAsset
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UScriptStruct *pUVar2;
  FAnimNodeReference *this;
  undefined8 local_res10;
  undefined8 local_res18 [2];
  FAnimNodeReference local_38;
  code *local_28;
  undefined8 *local_20;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_38.AnimNode = (FAnimNode_Base *)0x0;
  local_38.AnimNodeStruct = (UScriptStruct *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res10 = 0;
  this = &local_38;
  if ((FAnimNodeReference *)param_2->MostRecentPropertyAddress != (FAnimNodeReference *)0x0) {
    this = (FAnimNodeReference *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res18[0] = local_res10;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`UPhysicsControlBPLibrary::SetOverridePhysicsAsset'::__l2::<lambda_1>,void,FAnimNode_RigidBodyWithControl_&>
             ::Call;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_RigidBodyWithControl>
            (this,L"SetOverridePhysicsAsset",
             (TFunctionRef<void___cdecl(FAnimNode_RigidBodyWithControl_&)> *)&local_28);
  pUVar2 = this->AnimNodeStruct;
  *(FAnimNode_Base **)param_3 = this->AnimNode;
  *(UScriptStruct **)((longlong)param_3 + 8) = pUVar2;
  return;
}

