// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 7

// StaticClass @ 14cc902d0

UClass * __cdecl UProjectToTargetTool::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UProjectToTargetTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"ProjectToTargetTool",
               &Z_Registration_Info_UClass_UProjectToTargetTool.InnerSingleton,
               StaticRegisterNativesUProjectToTargetTool,0x140,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UProjectToTargetTool>,
               InternalVTableHelperCtorCaller<UProjectToTargetTool>,local_res8,
               URemeshMeshTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UProjectToTargetTool.InnerSingleton;
}

// UProjectToTargetTool @ 14ccbf3a0

UProjectToTargetTool * __thiscall
UProjectToTargetTool::UProjectToTargetTool(UProjectToTargetTool *this,FVTableHelper *param_1)

{
  URemeshMeshTool::URemeshMeshTool((URemeshMeshTool *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&_vftable__for__UMultiSelectionMeshEditingTool__;
  this->_padding_ = (longlong)&_vftable__for__UE__Geometry__IDynamicMeshOperatorFactory__;
  (this->ProjectionTarget).Ptr = (FDynamicMesh3 *)0x0;
  (this->ProjectionTargetSpatial).Ptr = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0;
  return this;
}

// ~UProjectToTargetTool @ 14ccc4a90

void __thiscall UProjectToTargetTool::~UProjectToTargetTool(UProjectToTargetTool *this)

{
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *pTVar1;
  FDynamicMesh3 *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&_vftable__for__UMultiSelectionMeshEditingTool__;
  this->_padding_ = (longlong)&_vftable__for__UE__Geometry__IDynamicMeshOperatorFactory__;
  pTVar1 = (this->ProjectionTargetSpatial).Ptr;
  if (pTVar1 != (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0) {
    (**(code **)pTVar1->_padding_)(pTVar1,1);
  }
  pFVar2 = (this->ProjectionTarget).Ptr;
  if (pFVar2 != (FDynamicMesh3 *)0x0) {
    (**(code **)pFVar2->_padding_)(pFVar2,1);
  }
  URemeshMeshTool::~URemeshMeshTool((URemeshMeshTool *)this);
  return;
}

// GetPrivateStaticClass @ 14cd010f0

UClass * __cdecl UProjectToTargetTool::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UProjectToTargetTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"ProjectToTargetTool",
               &Z_Registration_Info_UClass_UProjectToTargetTool.InnerSingleton,
               StaticRegisterNativesUProjectToTargetTool,0x140,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UProjectToTargetTool>,
               InternalVTableHelperCtorCaller<UProjectToTargetTool>,local_res8,
               URemeshMeshTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UProjectToTargetTool.InnerSingleton;
}

// MakeNewOperator @ 14cd09f30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
__thiscall UProjectToTargetTool::MakeNewOperator(UProjectToTargetTool *this)

{
  longlong lVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  UClass *pUVar13;
  TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
  TVar14;
  TTransform<double> *pTVar15;
  FDynamicMeshOperator *in_RDX;
  undefined1 auStackY_238 [32];
  longlong local_208;
  TTransform<double> local_f8;
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_238;
  if (this->_padding_ != 0) {
    pUVar13 = UProjectToTargetToolProperties::StaticClass();
    bVar12 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar13);
    if ((bVar12) && (lVar1 = this->_padding_, lVar1 != 0)) {
      URemeshMeshTool::MakeNewOperator((URemeshMeshTool *)this);
      if ((local_208 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("RemeshOp",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\ProjectToTargetTool.cpp"
                              ,0x3c,L""), bVar12)) {
        pcVar2 = (code *)swi(3);
        TVar14.Ptr = (FDynamicMeshOperator *)(*pcVar2)();
        return (TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
                )TVar14.Ptr;
      }
      *(longlong *)(local_208 + 0x100) = this->_padding_;
      *(longlong *)(local_208 + 0x108) = this->_padding_;
      if ((*(int *)&this[-1].ProjectionTarget.Ptr < 1) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar2 = (code *)swi(3);
        TVar14.Ptr = (FDynamicMeshOperator *)(*pcVar2)();
        return (TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
                )TVar14.Ptr;
      }
      pTVar15 = UE::ToolTarget::GetLocalToWorldTransform
                          (&local_f8,*(UToolTarget **)this[-1]._padding_);
      dVar5 = (pTVar15->Rotation).XY.m128d_f64[1];
      dVar6 = (pTVar15->Rotation).ZW.m128d_f64[0];
      dVar7 = (pTVar15->Rotation).ZW.m128d_f64[1];
      dVar3 = (pTVar15->Translation).ZW.m128d_f64[0];
      dVar8 = (pTVar15->Translation).XY.m128d_f64[0];
      dVar9 = (pTVar15->Translation).XY.m128d_f64[1];
      dVar10 = (pTVar15->Scale3D).XY.m128d_f64[0];
      dVar11 = (pTVar15->Scale3D).XY.m128d_f64[1];
      dVar4 = (pTVar15->Scale3D).ZW.m128d_f64[0];
      *(double *)(local_208 + 0x160) = (pTVar15->Rotation).XY.m128d_f64[0];
      *(double *)(local_208 + 0x168) = dVar5;
      *(double *)(local_208 + 0x170) = dVar6;
      *(double *)(local_208 + 0x178) = dVar7;
      *(double *)(local_208 + 0x180) = dVar8;
      *(double *)(local_208 + 0x188) = dVar9;
      *(double *)(local_208 + 400) = dVar3;
      *(double *)(local_208 + 0x198) = dVar10;
      *(double *)(local_208 + 0x1a0) = dVar11;
      *(double *)(local_208 + 0x1a8) = dVar4;
      if ((*(int *)&this[-1].ProjectionTarget.Ptr < 2) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar2 = (code *)swi(3);
        TVar14.Ptr = (FDynamicMeshOperator *)(*pcVar2)();
        return (TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
                )TVar14.Ptr;
      }
      pTVar15 = UE::ToolTarget::GetLocalToWorldTransform
                          (&local_98,*(UToolTarget **)(this[-1]._padding_ + 8));
      dVar5 = (pTVar15->Rotation).ZW.m128d_f64[0];
      dVar6 = (pTVar15->Rotation).ZW.m128d_f64[1];
      dVar7 = (pTVar15->Rotation).XY.m128d_f64[1];
      dVar3 = (pTVar15->Translation).ZW.m128d_f64[0];
      dVar8 = (pTVar15->Translation).XY.m128d_f64[0];
      dVar9 = (pTVar15->Translation).XY.m128d_f64[1];
      dVar10 = (pTVar15->Scale3D).XY.m128d_f64[0];
      dVar11 = (pTVar15->Scale3D).XY.m128d_f64[1];
      dVar4 = (pTVar15->Scale3D).ZW.m128d_f64[0];
      *(double *)(local_208 + 0x110) = (pTVar15->Rotation).XY.m128d_f64[0];
      *(double *)(local_208 + 0x118) = dVar7;
      *(double *)(local_208 + 0x120) = dVar5;
      *(double *)(local_208 + 0x128) = dVar6;
      *(double *)(local_208 + 0x130) = dVar8;
      *(double *)(local_208 + 0x138) = dVar9;
      *(double *)(local_208 + 0x140) = dVar3;
      *(double *)(local_208 + 0x148) = dVar10;
      *(double *)(local_208 + 0x150) = dVar11;
      *(double *)(local_208 + 0x158) = dVar4;
      *(undefined1 *)(local_208 + 0x1b0) = *(undefined1 *)(lVar1 + 0xe8);
      *(undefined1 *)(local_208 + 0x1b1) = *(undefined1 *)(lVar1 + 0xe9);
      if (*(char *)(lVar1 + 199) == '\x02') {
        *(undefined4 *)(local_208 + 0x1f0) = *(undefined4 *)(lVar1 + 0xec);
        *(double *)(local_208 + 0x1f8) = (double)*(float *)(lVar1 + 0xf0);
        *(double *)(local_208 + 0x200) = (double)*(float *)(lVar1 + 0xf4);
        *(undefined1 *)(local_208 + 0x208) = *(undefined1 *)(lVar1 + 0xf8);
        *(undefined4 *)(local_208 + 0x20c) = *(undefined4 *)(lVar1 + 0xfc);
        *(undefined4 *)(local_208 + 0x210) = *(undefined4 *)(lVar1 + 0x100);
        *(undefined8 *)(local_208 + 0xb8) = 0;
      }
      in_RDX->_padding_ = local_208;
      return (TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
              )in_RDX;
    }
  }
  bVar12 = UE::Assert::Private::ExecCheckImplInternal
                     (&bGEnsureHasExecuted<4869655433695985715>,false,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\ProjectToTargetTool.cpp"
                      ,0x33,"ProjectProperties");
  if (!bVar12) {
    in_RDX->_padding_ = 0;
    return (TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
            )in_RDX;
  }
  pcVar2 = (code *)swi(3);
  TVar14.Ptr = (FDynamicMeshOperator *)(*pcVar2)();
  return (TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
          )TVar14.Ptr;
}

// Setup @ 14cd291e0

void __thiscall UProjectToTargetTool::Setup(UProjectToTargetTool *this)

{
  TUniquePtr<UE::Geometry::FDynamicMesh3,TDefaultDelete<UE::Geometry::FDynamicMesh3>_> *pTVar1;
  TUniquePtr<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>_>_>
  *pTVar2;
  code *pcVar3;
  bool bVar4;
  FDynamicMesh3 *pFVar5;
  FDynamicMesh3 *pFVar6;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *this_00;
  FDynamicMesh3 *pFVar7;
  undefined8 *puVar8;
  FText *pFVar9;
  longlong *plVar10;
  FGetMeshParameters local_278;
  longlong local_268;
  undefined8 local_260;
  FText local_258;
  FText local_248;
  FDynamicMesh3 local_238;
  
  if (((int)this->_padding_ != 2) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Targets.Num() == 2",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\ProjectToTargetTool.cpp"
                         ,0x21,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar5 = ::operator_new(0x230);
  pFVar7 = (FDynamicMesh3 *)0x0;
  pFVar6 = pFVar7;
  if (pFVar5 != (FDynamicMesh3 *)0x0) {
    pFVar6 = UE::Geometry::FDynamicMesh3::FDynamicMesh3(pFVar5);
  }
  pTVar1 = &this->ProjectionTarget;
  if (pTVar1 == (TUniquePtr<UE::Geometry::FDynamicMesh3,TDefaultDelete<UE::Geometry::FDynamicMesh3>_>
                 *)&local_268) {
    if (pFVar6 != (FDynamicMesh3 *)0x0) {
      puVar8 = (undefined8 *)pFVar6->_padding_;
      goto LAB_14cd29271;
    }
  }
  else {
    pFVar5 = pTVar1->Ptr;
    pTVar1->Ptr = pFVar6;
    if (pFVar5 != (FDynamicMesh3 *)0x0) {
      puVar8 = (undefined8 *)pFVar5->_padding_;
      pFVar6 = pFVar5;
LAB_14cd29271:
      (*(code *)*puVar8)(pFVar6,1);
    }
  }
  local_278.bHaveRequestLOD = false;
  local_278._1_3_ = 0;
  local_278.RequestLOD = Default;
  local_278.bWantMeshTangents = false;
  local_278._9_3_ = 0;
  if (((int)this->_padding_ < 2) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar6 = UE::ToolTarget::GetDynamicMeshCopy
                     (&local_238,*(UToolTarget **)(this->_padding_ + 8),&local_278);
  UE::Geometry::FDynamicMesh3::operator=(pTVar1->Ptr,pFVar6);
  UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_238);
  pFVar6 = pTVar1->Ptr;
  this_00 = ::operator_new(0xc0);
  if (this_00 != (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0) {
    pFVar7 = (FDynamicMesh3 *)
             UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
             TMeshAABBTree3<UE::Geometry::FDynamicMesh3>(this_00,pFVar6,true);
  }
  pTVar2 = &this->ProjectionTargetSpatial;
  if (pTVar2 == (TUniquePtr<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>_>_>
                 *)&local_260) {
    if (pFVar7 == (FDynamicMesh3 *)0x0) goto LAB_14cd29351;
    puVar8 = (undefined8 *)pFVar7->_padding_;
  }
  else {
    pFVar6 = (FDynamicMesh3 *)pTVar2->Ptr;
    pTVar2->Ptr = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)pFVar7;
    if (pFVar6 == (FDynamicMesh3 *)0x0) goto LAB_14cd29351;
    puVar8 = (undefined8 *)pFVar6->_padding_;
    pFVar7 = pFVar6;
  }
  (*(code *)*puVar8)(pFVar7,1);
LAB_14cd29351:
  URemeshMeshTool::Setup((URemeshMeshTool *)this);
  pcVar3 = *(code **)(this->_padding_ + 0x380);
  pFVar9 = FText::AsLocalizable_Advanced_LocText
                     (&local_258,L"UProjectToTargetTool",L"ProjectToTargetToolName",
                      L"Project To Target");
  (*pcVar3)(this,pFVar9);
  if (local_258.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_258.TextData.Reference + 0x10))();
  }
  plVar10 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this);
  pcVar3 = *(code **)(*plVar10 + 0x360);
  pFVar9 = FText::AsLocalizable_Advanced_LocText
                     (&local_248,L"UProjectToTargetTool",L"ProjectToTargetToolDescription",
                      L"Incrementally deform the first selected mesh towards the second, while applying Remeshing. This can be used to improve the accuracy of shrink-wrapping strategies."
                     );
  (*pcVar3)(plVar10,pFVar9,2);
  if (local_248.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_248.TextData.Reference + 0x10))();
  }
  return;
}

// StaticRegisterNativesUProjectToTargetTool @ 14cd2f270

void __cdecl UProjectToTargetTool::StaticRegisterNativesUProjectToTargetTool(void)

{
  return;
}

