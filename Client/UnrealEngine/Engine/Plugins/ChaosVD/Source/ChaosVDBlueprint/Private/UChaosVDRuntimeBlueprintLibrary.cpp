// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosVDBlueprint
// Functions: 16

// StaticClass @ 14e291190

UClass * __cdecl UChaosVDRuntimeBlueprintLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UChaosVDRuntimeBlueprintLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ChaosVDBlueprint",L"ChaosVDRuntimeBlueprintLibrary",
               &Z_Registration_Info_UClass_UChaosVDRuntimeBlueprintLibrary.InnerSingleton,
               StaticRegisterNativesUChaosVDRuntimeBlueprintLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UChaosVDRuntimeBlueprintLibrary>,
               InternalVTableHelperCtorCaller<UChaosVDRuntimeBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UChaosVDRuntimeBlueprintLibrary.InnerSingleton;
}

// UChaosVDRuntimeBlueprintLibrary @ 14e2914b0

UChaosVDRuntimeBlueprintLibrary * __thiscall
UChaosVDRuntimeBlueprintLibrary::UChaosVDRuntimeBlueprintLibrary
          (UChaosVDRuntimeBlueprintLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UChaosVDRuntimeBlueprintLibrary__6B_;
  return this;
}

// UChaosVDRuntimeBlueprintLibrary @ 14e2914e0

UChaosVDRuntimeBlueprintLibrary * __thiscall
UChaosVDRuntimeBlueprintLibrary::UChaosVDRuntimeBlueprintLibrary
          (UChaosVDRuntimeBlueprintLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UChaosVDRuntimeBlueprintLibrary__6B_;
  return this;
}

// ~UChaosVDRuntimeBlueprintLibrary @ 14e291510

void __thiscall
UChaosVDRuntimeBlueprintLibrary::~UChaosVDRuntimeBlueprintLibrary
          (UChaosVDRuntimeBlueprintLibrary *this)

{
  *(undefined ***)this = &___7UChaosVDRuntimeBlueprintLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// GetPrivateStaticClass @ 14e2915b0

UClass * __cdecl UChaosVDRuntimeBlueprintLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UChaosVDRuntimeBlueprintLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ChaosVDBlueprint",L"ChaosVDRuntimeBlueprintLibrary",
               &Z_Registration_Info_UClass_UChaosVDRuntimeBlueprintLibrary.InnerSingleton,
               StaticRegisterNativesUChaosVDRuntimeBlueprintLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UChaosVDRuntimeBlueprintLibrary>,
               InternalVTableHelperCtorCaller<UChaosVDRuntimeBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UChaosVDRuntimeBlueprintLibrary.InnerSingleton;
}

// RecordDebugDrawBox @ 14e291670

void __cdecl
UChaosVDRuntimeBlueprintLibrary::RecordDebugDrawBox
          (UObject *param_1,TBox<double> *param_2,FName param_3,FLinearColor *param_4)

{
  FPhysicsSolverBase *pFVar1;
  int iVar2;
  FColor FVar3;
  longlong lVar4;
  undefined4 extraout_var;
  
  if (param_1 == (UObject *)0x0) {
    iVar2 = -1;
  }
  else {
    lVar4 = (**(code **)(*(longlong *)param_1 + 0x180))();
    iVar2 = -1;
    if (((lVar4 != 0) && (*(longlong *)(lVar4 + 0x2a0) != 0)) &&
       (pFVar1 = *(FPhysicsSolverBase **)(*(longlong *)(lVar4 + 0x2a0) + 0x40),
       pFVar1 != (FPhysicsSolverBase *)0x0)) {
      iVar2 = FChaosVisualDebuggerTrace::GetSolverID(pFVar1);
    }
  }
  FVar3 = FLinearColor::ToFColorSRGB(param_4);
  FChaosVisualDebuggerTrace::TraceDebugDrawBox
            (param_2,param_3,(FColor)((FColor_u_0 *)CONCAT44(extraout_var,FVar3.field0_0x0))->_s_0,
             iVar2);
  return;
}

// RecordDebugDrawLine @ 14e291710

void __cdecl
UChaosVDRuntimeBlueprintLibrary::RecordDebugDrawLine
          (UObject *param_1,TVector<double> *param_2,TVector<double> *param_3,FName param_4,
          FLinearColor *param_5)

{
  FPhysicsSolverBase *pFVar1;
  int iVar2;
  FColor FVar3;
  longlong lVar4;
  undefined4 extraout_var;
  
  if (param_1 == (UObject *)0x0) {
    iVar2 = -1;
  }
  else {
    lVar4 = (**(code **)(*(longlong *)param_1 + 0x180))();
    iVar2 = -1;
    if (((lVar4 != 0) && (*(longlong *)(lVar4 + 0x2a0) != 0)) &&
       (pFVar1 = *(FPhysicsSolverBase **)(*(longlong *)(lVar4 + 0x2a0) + 0x40),
       pFVar1 != (FPhysicsSolverBase *)0x0)) {
      iVar2 = FChaosVisualDebuggerTrace::GetSolverID(pFVar1);
    }
  }
  FVar3 = FLinearColor::ToFColorSRGB(param_5);
  FChaosVisualDebuggerTrace::TraceDebugDrawLine
            (param_2,param_3,param_4,
             (FColor)((FColor_u_0 *)CONCAT44(extraout_var,FVar3.field0_0x0))->_s_0,iVar2);
  return;
}

// RecordDebugDrawSphere @ 14e2917b0

void __cdecl
UChaosVDRuntimeBlueprintLibrary::RecordDebugDrawSphere
          (UObject *param_1,TVector<double> *param_2,float param_3,FName param_4,
          FLinearColor *param_5)

{
  FPhysicsSolverBase *pFVar1;
  int iVar2;
  FColor FVar3;
  longlong lVar4;
  undefined4 extraout_var;
  
  if (param_1 == (UObject *)0x0) {
    iVar2 = -1;
  }
  else {
    lVar4 = (**(code **)(*(longlong *)param_1 + 0x180))();
    iVar2 = -1;
    if (((lVar4 != 0) && (*(longlong *)(lVar4 + 0x2a0) != 0)) &&
       (pFVar1 = *(FPhysicsSolverBase **)(*(longlong *)(lVar4 + 0x2a0) + 0x40),
       pFVar1 != (FPhysicsSolverBase *)0x0)) {
      iVar2 = FChaosVisualDebuggerTrace::GetSolverID(pFVar1);
    }
  }
  FVar3 = FLinearColor::ToFColorSRGB(param_5);
  FChaosVisualDebuggerTrace::TraceDebugDrawSphere
            (param_2,param_3,param_4,
             (FColor)((FColor_u_0 *)CONCAT44(extraout_var,FVar3.field0_0x0))->_s_0,iVar2);
  return;
}

// RecordDebugDrawVector @ 14e291850

void __cdecl
UChaosVDRuntimeBlueprintLibrary::RecordDebugDrawVector
          (UObject *param_1,TVector<double> *param_2,TVector<double> *param_3,FName param_4,
          FLinearColor *param_5)

{
  FPhysicsSolverBase *pFVar1;
  int iVar2;
  FColor FVar3;
  longlong lVar4;
  undefined4 extraout_var;
  
  if (param_1 == (UObject *)0x0) {
    iVar2 = -1;
  }
  else {
    lVar4 = (**(code **)(*(longlong *)param_1 + 0x180))();
    iVar2 = -1;
    if (((lVar4 != 0) && (*(longlong *)(lVar4 + 0x2a0) != 0)) &&
       (pFVar1 = *(FPhysicsSolverBase **)(*(longlong *)(lVar4 + 0x2a0) + 0x40),
       pFVar1 != (FPhysicsSolverBase *)0x0)) {
      iVar2 = FChaosVisualDebuggerTrace::GetSolverID(pFVar1);
    }
  }
  FVar3 = FLinearColor::ToFColorSRGB(param_5);
  FChaosVisualDebuggerTrace::TraceDebugDrawVector
            (param_2,param_3,param_4,
             (FColor)((FColor_u_0 *)CONCAT44(extraout_var,FVar3.field0_0x0))->_s_0,iVar2);
  return;
}

// SetTraceRelevancyVolume @ 14e2918f0

void __cdecl
UChaosVDRuntimeBlueprintLibrary::SetTraceRelevancyVolume(UObject *param_1,TBox<double> *param_2)

{
  FChaosVisualDebuggerTrace::SetTraceRelevancyVolume(param_2);
  return;
}

// StaticRegisterNativesUChaosVDRuntimeBlueprintLibrary @ 14e291900

void __cdecl
UChaosVDRuntimeBlueprintLibrary::StaticRegisterNativesUChaosVDRuntimeBlueprintLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 5;
  local_18.DataPtr = Z_Construct_UClass_UChaosVDRuntimeBlueprintLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execRecordDebugDrawBox @ 14e291a00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UChaosVDRuntimeBlueprintLibrary::execRecordDebugDrawBox
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  FPhysicsSolverBase *pFVar3;
  FName FVar4;
  int iVar5;
  FColor FVar6;
  longlong lVar7;
  undefined4 extraout_var;
  TBox<double> *pTVar8;
  undefined1 auStack_b8 [32];
  FName local_98;
  longlong *local_90 [3];
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  FLinearColor_u_0 local_68;
  TBox<double> local_58;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_90[0] = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_90,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_90);
  }
  local_58.IsValid = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_98.ComparisonIndex.Value = 0;
  local_98.Number = 0;
  pTVar8 = &local_58;
  if ((TBox<double> *)param_2->MostRecentPropertyAddress != (TBox<double> *)0x0) {
    pTVar8 = (TBox<double> *)param_2->MostRecentPropertyAddress;
  }
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  FVar4 = local_98;
  local_68._s_0.R = local_78;
  local_68._s_0.G = fStack_74;
  local_68._s_0.B = fStack_70;
  local_68._s_0.A = fStack_6c;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_90[0] == (longlong *)0x0) {
    iVar5 = -1;
  }
  else {
    lVar7 = (**(code **)(*local_90[0] + 0x180))();
    iVar5 = -1;
    if (((lVar7 != 0) && (*(longlong *)(lVar7 + 0x2a0) != 0)) &&
       (pFVar3 = *(FPhysicsSolverBase **)(*(longlong *)(lVar7 + 0x2a0) + 0x40),
       pFVar3 != (FPhysicsSolverBase *)0x0)) {
      iVar5 = FChaosVisualDebuggerTrace::GetSolverID(pFVar3);
    }
  }
  FVar6 = FLinearColor::ToFColorSRGB((FLinearColor *)&local_68._s_0);
  FChaosVisualDebuggerTrace::TraceDebugDrawBox
            (pTVar8,FVar4,(FColor)((FColor_u_0 *)CONCAT44(extraout_var,FVar6.field0_0x0))->_s_0,
             iVar5);
  return;
}

// execRecordDebugDrawLine @ 14e291bd0

void __cdecl
UChaosVDRuntimeBlueprintLibrary::execRecordDebugDrawLine
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  FPhysicsSolverBase *pFVar3;
  FName FVar4;
  int iVar5;
  FColor FVar6;
  longlong lVar7;
  undefined4 extraout_var;
  TVector<double> *pTVar8;
  TVector<double> *pTVar9;
  FName local_res20;
  longlong *local_88 [2];
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  FLinearColor_u_0 local_68;
  TVector<double> local_58;
  TVector<double> local_40;
  
  local_88[0] = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_88,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_88);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  pTVar8 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  pTVar9 = &local_58;
  if (pTVar8 != (TVector<double> *)0x0) {
    pTVar9 = pTVar8;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_40,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_40);
  }
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  pTVar8 = &local_40;
  if ((TVector<double> *)param_2->MostRecentPropertyAddress != (TVector<double> *)0x0) {
    pTVar8 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  }
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  FVar4 = local_res20;
  local_68._s_0.R = local_78;
  local_68._s_0.G = fStack_74;
  local_68._s_0.B = fStack_70;
  local_68._s_0.A = fStack_6c;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_88[0] == (longlong *)0x0) {
    iVar5 = -1;
  }
  else {
    lVar7 = (**(code **)(*local_88[0] + 0x180))();
    iVar5 = -1;
    if (((lVar7 != 0) && (*(longlong *)(lVar7 + 0x2a0) != 0)) &&
       (pFVar3 = *(FPhysicsSolverBase **)(*(longlong *)(lVar7 + 0x2a0) + 0x40),
       pFVar3 != (FPhysicsSolverBase *)0x0)) {
      iVar5 = FChaosVisualDebuggerTrace::GetSolverID(pFVar3);
    }
  }
  FVar6 = FLinearColor::ToFColorSRGB((FLinearColor *)&local_68._s_0);
  FChaosVisualDebuggerTrace::TraceDebugDrawLine
            (pTVar9,pTVar8,FVar4,
             (FColor)((FColor_u_0 *)CONCAT44(extraout_var,FVar6.field0_0x0))->_s_0,iVar5);
  return;
}

// execRecordDebugDrawSphere @ 14e291dd0

void __cdecl
UChaosVDRuntimeBlueprintLibrary::execRecordDebugDrawSphere
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  FPhysicsSolverBase *pFVar3;
  float fVar4;
  FName FVar5;
  int iVar6;
  FColor FVar7;
  longlong lVar8;
  undefined4 extraout_var;
  TVector<double> *pTVar9;
  float local_res10 [2];
  FName local_78;
  longlong *local_70;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  FLinearColor_u_0 local_58;
  TVector<double> local_48 [2];
  
  local_70 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_70,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_70);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_48,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_48);
  }
  local_res10[0] = 0.0;
  pTVar9 = local_48;
  if ((TVector<double> *)param_2->MostRecentPropertyAddress != (TVector<double> *)0x0) {
    pTVar9 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_78.ComparisonIndex.Value = 0;
  local_78.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  FVar5 = local_78;
  fVar4 = local_res10[0];
  local_58._s_0.R = local_68;
  local_58._s_0.G = fStack_64;
  local_58._s_0.B = fStack_60;
  local_58._s_0.A = fStack_5c;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_70 == (longlong *)0x0) {
    iVar6 = -1;
  }
  else {
    lVar8 = (**(code **)(*local_70 + 0x180))();
    iVar6 = -1;
    if (((lVar8 != 0) && (*(longlong *)(lVar8 + 0x2a0) != 0)) &&
       (pFVar3 = *(FPhysicsSolverBase **)(*(longlong *)(lVar8 + 0x2a0) + 0x40),
       pFVar3 != (FPhysicsSolverBase *)0x0)) {
      iVar6 = FChaosVisualDebuggerTrace::GetSolverID(pFVar3);
    }
  }
  FVar7 = FLinearColor::ToFColorSRGB((FLinearColor *)&local_58._s_0);
  FChaosVisualDebuggerTrace::TraceDebugDrawSphere
            (pTVar9,fVar4,FVar5,
             (FColor)((FColor_u_0 *)CONCAT44(extraout_var,FVar7.field0_0x0))->_s_0,iVar6);
  return;
}

// execRecordDebugDrawVector @ 14e291fd0

void __cdecl
UChaosVDRuntimeBlueprintLibrary::execRecordDebugDrawVector
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  FPhysicsSolverBase *pFVar3;
  FName FVar4;
  int iVar5;
  FColor FVar6;
  longlong lVar7;
  undefined4 extraout_var;
  TVector<double> *pTVar8;
  TVector<double> *pTVar9;
  FName local_res20;
  longlong *local_88 [2];
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  FLinearColor_u_0 local_68;
  TVector<double> local_58;
  TVector<double> local_40;
  
  local_88[0] = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_88,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_88);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  pTVar8 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  pTVar9 = &local_58;
  if (pTVar8 != (TVector<double> *)0x0) {
    pTVar9 = pTVar8;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_40,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_40);
  }
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  pTVar8 = &local_40;
  if ((TVector<double> *)param_2->MostRecentPropertyAddress != (TVector<double> *)0x0) {
    pTVar8 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  }
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  FVar4 = local_res20;
  local_68._s_0.R = local_78;
  local_68._s_0.G = fStack_74;
  local_68._s_0.B = fStack_70;
  local_68._s_0.A = fStack_6c;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_88[0] == (longlong *)0x0) {
    iVar5 = -1;
  }
  else {
    lVar7 = (**(code **)(*local_88[0] + 0x180))();
    iVar5 = -1;
    if (((lVar7 != 0) && (*(longlong *)(lVar7 + 0x2a0) != 0)) &&
       (pFVar3 = *(FPhysicsSolverBase **)(*(longlong *)(lVar7 + 0x2a0) + 0x40),
       pFVar3 != (FPhysicsSolverBase *)0x0)) {
      iVar5 = FChaosVisualDebuggerTrace::GetSolverID(pFVar3);
    }
  }
  FVar6 = FLinearColor::ToFColorSRGB((FLinearColor *)&local_68._s_0);
  FChaosVisualDebuggerTrace::TraceDebugDrawVector
            (pTVar9,pTVar8,FVar4,
             (FColor)((FColor_u_0 *)CONCAT44(extraout_var,FVar6.field0_0x0))->_s_0,iVar5);
  return;
}

// execSetTraceRelevancyVolume @ 14e2921d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UChaosVDRuntimeBlueprintLibrary::execSetTraceRelevancyVolume
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TBox<double> *pTVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  TBox<double> local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_58 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_50.IsValid = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_50,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_50);
  }
  pTVar2 = &local_50;
  if ((TBox<double> *)param_2->MostRecentPropertyAddress != (TBox<double> *)0x0) {
    pTVar2 = (TBox<double> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FChaosVisualDebuggerTrace::SetTraceRelevancyVolume(pTVar2);
  return;
}

