// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 28

// StaticClass @ 149664900

UClass * __cdecl UGizmoElementGroupBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoElementGroupBase.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoElementGroupBase",
               &Z_Registration_Info_UClass_UGizmoElementGroupBase.InnerSingleton,
               StaticRegisterNativesUGizmoElementGroupBase,0x1e8,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UGizmoElementGroupBase>,
               InternalVTableHelperCtorCaller<UGizmoElementGroupBase>,aFStackX_8,
               UGizmoElementLineBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoElementGroupBase.InnerSingleton;
}

// UGizmoElementGroupBase @ 149684c90

UGizmoElementGroupBase * __thiscall
UGizmoElementGroupBase::UGizmoElementGroupBase(UGizmoElementGroupBase *this,FVTableHelper *param_1)

{
  UGizmoElementLineBase::UGizmoElementLineBase((UGizmoElementLineBase *)this,param_1);
  this->bConstantScale = false;
  this->bHitOwner = false;
  this->_padding_ = (longlong)&___7UGizmoElementGroupBase__6B_;
  (this->Elements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Elements).ArrayNum = 0;
  (this->Elements).ArrayMax = 0;
  return this;
}

// UGizmoElementGroupBase @ 149684cd0

UGizmoElementGroupBase * __thiscall
UGizmoElementGroupBase::UGizmoElementGroupBase
          (UGizmoElementGroupBase *this,FObjectInitializer *param_1)

{
  UGizmoElementLineBase::UGizmoElementLineBase((UGizmoElementLineBase *)this,param_1);
  this->bConstantScale = false;
  this->bHitOwner = false;
  this->_padding_ = (longlong)&___7UGizmoElementGroupBase__6B_;
  (this->Elements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Elements).ArrayNum = 0;
  (this->Elements).ArrayMax = 0;
  return this;
}

// ~UGizmoElementGroupBase @ 149689ad0

void __thiscall UGizmoElementGroupBase::~UGizmoElementGroupBase(UGizmoElementGroupBase *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UGizmoElementGroupBase__6B_;
  pFVar1 = (this->Elements).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UGizmoElementBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// operator() @ 14968b720

void __thiscall
`UGizmoElementGroupBase::LineTrace'::__l13::<lambda_1>::operator()
          (void *this,UGizmoElementBase *param_1)

{
  undefined4 local_res8;
  undefined1 local_resc;
  char local_48 [64];
  
  local_res8 = 0;
  local_resc = 0;
  (**(code **)(param_1->_padding_ + 0x2c8))
            (param_1,local_48,*(undefined8 *)((longlong)this + 8),
             *(undefined8 *)((longlong)this + 0x10),*(undefined8 *)((longlong)this + 0x18),
             *(undefined8 *)((longlong)this + 0x20),&local_res8);
  if (local_48[0] != '\0') {
    (*(code *)**(undefined8 **)this)
              (*(undefined1 *)(*(longlong *)((longlong)this + 0x10) + 0x69),
               *(undefined8 *)((longlong)this + 0x28),*(undefined8 *)((longlong)this + 0x30),
               local_48,&local_res8);
  }
  return;
}

// Add @ 1496907c0

void __thiscall UGizmoElementGroupBase::Add(UGizmoElementGroupBase *this,UGizmoElementBase *param_1)

{
  int *piVar1;
  TArray<TObjectPtr<UGizmoElementBase>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  bool bVar7;
  UGizmoElementBase *local_18 [2];
  
  pTVar2 = &this->Elements;
  pFVar6 = (pTVar2->AllocatorInstance).Data;
  pFVar3 = pFVar6 + (longlong)(this->Elements).ArrayNum * 8;
  for (; pFVar6 != pFVar3; pFVar6 = pFVar6 + 8) {
    if (*(UGizmoElementBase **)pFVar6 == (UGizmoElementBase *)0x0) {
      bVar7 = param_1 == (UGizmoElementBase *)0x0;
    }
    else {
      bVar7 = *(UGizmoElementBase **)pFVar6 == param_1;
    }
    if (bVar7) {
      return;
    }
  }
  local_18[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UGizmoElementBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if (((pFVar3 <= (FScriptContainerElement *)local_18) &&
      ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)(this->Elements).ArrayMax * 8)) &&
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
  iVar5 = (this->Elements).ArrayNum;
  piVar1 = &(this->Elements).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->Elements).ArrayNum = iVar5 + 1;
  *(UGizmoElementBase **)((pTVar2->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_18[0];
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_18[0] != (UGizmoElementBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_18[0]);
  }
  return;
}

// ApplyUniformConstantScaleToTransform @ 149692110

void __thiscall
UGizmoElementGroupBase::ApplyUniformConstantScaleToTransform
          (UGizmoElementGroupBase *this,double param_1,TTransform<double> *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000149692116. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x818))();
  return;
}

// ApplyUniformConstantScaleToTransform @ 149692130

void __thiscall
UGizmoElementGroupBase::ApplyUniformConstantScaleToTransform
          (UGizmoElementGroupBase *this,double param_1,TTransform<double> *param_2,bool param_3)

{
  undefined1 auVar1 [16];
  double dVar2;
  
  dVar2 = (param_2->Scale3D).XY.m128d_f64[0];
  if ((param_3) || (this->bConstantScale != false)) {
    dVar2 = dVar2 * param_1;
  }
  auVar1._8_4_ = SUB84(dVar2,0);
  auVar1._0_8_ = dVar2;
  auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  *(undefined1 (*) [16])(param_2->Scale3D).XY.m128d_f64 = auVar1;
  (param_2->Scale3D).ZW.m128d_f64[0] = dVar2;
  (param_2->Scale3D).ZW.m128d_f64[1] = 0.0;
  return;
}

// DrawHUD @ 14969d530

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UGizmoElementGroupBase::DrawHUD
          (UGizmoElementGroupBase *this,FCanvas *param_1,IToolsContextRenderAPI *param_2,
          FRenderTraversalState *param_3)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  FWeakObjectPtr FVar14;
  double *pdVar15;
  char cVar16;
  double *pdVar17;
  longlong lVar18;
  longlong *plVar19;
  FRenderTraversalState *pFVar20;
  undefined1 auStack_1f8 [32];
  longlong *local_1d8;
  int local_1d0;
  double local_1a8 [12];
  undefined4 local_148;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  lVar18 = 2;
  pdVar15 = local_1a8;
  do {
    pFVar20 = param_3;
    pdVar17 = pdVar15;
    dVar10 = (pFVar20->LocalToWorldTransform).Rotation.XY.m128d_f64[1];
    dVar11 = (pFVar20->LocalToWorldTransform).Rotation.ZW.m128d_f64[0];
    dVar12 = (pFVar20->LocalToWorldTransform).Rotation.ZW.m128d_f64[1];
    param_3 = (FRenderTraversalState *)
              &(pFVar20->MeshRenderState).HoverMaterial.bOverridesChildState;
    *pdVar17 = (pFVar20->LocalToWorldTransform).Rotation.XY.m128d_f64[0];
    pdVar17[1] = dVar10;
    dVar10 = (pFVar20->LocalToWorldTransform).Translation.XY.m128d_f64[0];
    dVar13 = (pFVar20->LocalToWorldTransform).Translation.XY.m128d_f64[1];
    pdVar17[2] = dVar11;
    pdVar17[3] = dVar12;
    dVar11 = (pFVar20->LocalToWorldTransform).Translation.ZW.m128d_f64[0];
    dVar12 = (pFVar20->LocalToWorldTransform).Translation.ZW.m128d_f64[1];
    pdVar17[4] = dVar10;
    pdVar17[5] = dVar13;
    dVar10 = (pFVar20->LocalToWorldTransform).Scale3D.XY.m128d_f64[0];
    dVar13 = (pFVar20->LocalToWorldTransform).Scale3D.XY.m128d_f64[1];
    pdVar17[6] = dVar11;
    pdVar17[7] = dVar12;
    dVar11 = (pFVar20->LocalToWorldTransform).Scale3D.ZW.m128d_f64[0];
    dVar12 = (pFVar20->LocalToWorldTransform).Scale3D.ZW.m128d_f64[1];
    pdVar17[8] = dVar10;
    pdVar17[9] = dVar13;
    dVar10 = pFVar20->PixelToWorldScale;
    dVar13 = *(double *)&pFVar20->InteractionState;
    pdVar17[10] = dVar11;
    pdVar17[0xb] = dVar12;
    dVar11 = *(double *)&(pFVar20->MeshRenderState).Material.Value.WeakPtr.ObjectSerialNumber;
    FVar14 = (pFVar20->MeshRenderState).HoverMaterial.Value.WeakPtr;
    pdVar17[0xc] = dVar10;
    pdVar17[0xd] = dVar13;
    pdVar17[0xe] = dVar11;
    *(FWeakObjectPtr *)(pdVar17 + 0xf) = FVar14;
    lVar18 = lVar18 + -1;
    pdVar15 = pdVar17 + 0x10;
  } while (lVar18 != 0);
  dVar10 = *(double *)&(pFVar20->MeshRenderState).InteractMaterial.Value.WeakPtr.ObjectSerialNumber;
  FVar14 = (pFVar20->MeshRenderState).SelectMaterial.Value.WeakPtr;
  dVar11 = *(double *)&(pFVar20->MeshRenderState).SelectMaterial.bOverridesChildState;
  pdVar17[0x10] = *(double *)param_3;
  pdVar17[0x11] = dVar10;
  dVar10 = *(double *)&(pFVar20->MeshRenderState).SubdueMaterial.Value.WeakPtr.ObjectSerialNumber;
  dVar12 = *(double *)&(pFVar20->MeshRenderState).VertexColor.Value.field0_0x0;
  *(FWeakObjectPtr *)(pdVar17 + 0x12) = FVar14;
  pdVar17[0x13] = dVar11;
  dVar11 = *(double *)((longlong)&(pFVar20->MeshRenderState).VertexColor.Value.field0_0x0 + 8);
  dVar13 = *(double *)&(pFVar20->MeshRenderState).VertexColor.bHasValue;
  pdVar17[0x14] = dVar10;
  pdVar17[0x15] = dVar12;
  dVar10 = *(double *)((longlong)&(pFVar20->MeshRenderState).HoverVertexColor.Value.field0_0x0 + 4);
  dVar12 = *(double *)
            ((longlong)&(pFVar20->MeshRenderState).HoverVertexColor.Value.field0_0x0 + 0xc);
  pdVar17[0x16] = dVar11;
  pdVar17[0x17] = dVar13;
  fVar2 = (pFVar20->MeshRenderState).InteractVertexColor.Value.field0_0x0._s_0.R;
  fVar3 = (pFVar20->MeshRenderState).InteractVertexColor.Value.field0_0x0._s_0.G;
  fVar4 = (pFVar20->MeshRenderState).InteractVertexColor.Value.field0_0x0._s_0.B;
  fVar5 = (pFVar20->MeshRenderState).InteractVertexColor.Value.field0_0x0._s_0.A;
  pdVar17[0x18] = dVar10;
  pdVar17[0x19] = dVar12;
  uVar6 = *(undefined4 *)&(pFVar20->MeshRenderState).InteractVertexColor.bHasValue;
  fVar7 = (pFVar20->MeshRenderState).SelectVertexColor.Value.field0_0x0._s_0.R;
  fVar8 = (pFVar20->MeshRenderState).SelectVertexColor.Value.field0_0x0._s_0.G;
  fVar9 = (pFVar20->MeshRenderState).SelectVertexColor.Value.field0_0x0._s_0.B;
  *(float *)(pdVar17 + 0x1a) = fVar2;
  *(float *)((longlong)pdVar17 + 0xd4) = fVar3;
  *(float *)(pdVar17 + 0x1b) = fVar4;
  *(float *)((longlong)pdVar17 + 0xdc) = fVar5;
  *(undefined4 *)(pdVar17 + 0x1c) = uVar6;
  *(float *)((longlong)pdVar17 + 0xe4) = fVar7;
  *(float *)(pdVar17 + 0x1d) = fVar8;
  *(float *)((longlong)pdVar17 + 0xec) = fVar9;
  cVar16 = (**(code **)(this->_padding_ + 0x698))
                     (this,param_2,&UE::Math::TVector<double>::ZeroVector,local_1a8);
  if (cVar16 != '\0') {
    (**(code **)(this->_padding_ + 0x820))(this,local_148,local_1a8);
    (**(code **)(this->_padding_ + 0x3b0))(this,&local_1d8);
    for (plVar19 = local_1d8; plVar19 != local_1d8 + local_1d0; plVar19 = plVar19 + 1) {
      plVar1 = (longlong *)*plVar19;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x2b8))(plVar1,param_1,param_2,local_1a8);
      }
    }
  }
  return;
}

// FindPartElement @ 14969f0c0

UGizmoElementBase * __thiscall
UGizmoElementGroupBase::FindPartElement(UGizmoElementGroupBase *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UGizmoElementBase *pUVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  pFVar5 = (this->Elements).AllocatorInstance.Data;
  iVar2 = (this->Elements).ArrayNum;
  pFVar1 = pFVar5 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Elements).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UGizmoElementBase>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar5 == pFVar1) break;
    pUVar3 = *(UGizmoElementBase **)pFVar5;
    if ((pUVar3 != (UGizmoElementBase *)0x0) &&
       (uVar4 = (**(code **)(pUVar3->_padding_ + 0x398))(pUVar3), uVar4 == param_1)) {
      return pUVar3;
    }
    pFVar5 = pFVar5 + 8;
  }
  return (UGizmoElementBase *)0x0;
}

// FindPartElement @ 14969f150

UGizmoElementBase * __thiscall
UGizmoElementGroupBase::FindPartElement(UGizmoElementGroupBase *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UGizmoElementBase *pUVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  pFVar5 = (this->Elements).AllocatorInstance.Data;
  iVar2 = (this->Elements).ArrayNum;
  pFVar1 = pFVar5 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Elements).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UGizmoElementBase>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar1) break;
    pUVar3 = *(UGizmoElementBase **)pFVar5;
    if ((pUVar3 != (UGizmoElementBase *)0x0) &&
       (uVar4 = (**(code **)(pUVar3->_padding_ + 0x398))(pUVar3), uVar4 == param_1)) {
      return pUVar3;
    }
    pFVar5 = pFVar5 + 8;
  }
  return (UGizmoElementBase *)0x0;
}

// GetConstantScale @ 1496a07d0

bool __thiscall UGizmoElementGroupBase::GetConstantScale(UGizmoElementGroupBase *this)

{
  return this->bConstantScale;
}

// GetHitOwner @ 1496a2dd0

bool __thiscall UGizmoElementGroupBase::GetHitOwner(UGizmoElementGroupBase *this)

{
  return this->bHitOwner;
}

// GetPartHittableState @ 1496a3c10

TOptional<bool> __thiscall
UGizmoElementGroupBase::GetPartHittableState(UGizmoElementGroupBase *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  undefined1 uVar4;
  TOptional<bool> TVar5;
  undefined1 *puVar6;
  undefined4 in_register_00000014;
  undefined1 *puVar7;
  FScriptContainerElement *pFVar8;
  int in_R8D;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  undefined1 local_38 [16];
  
  puVar7 = (undefined1 *)CONCAT44(in_register_00000014,param_1);
  TVar5 = SUB42(param_1,0);
  if (in_R8D == (int)this->_padding_) {
    uVar4 = (**(code **)(this->_padding_ + 0x2e8))();
    puVar7[1] = 1;
    *puVar7 = uVar4;
    return TVar5;
  }
  pFVar8 = (this->Elements).AllocatorInstance.Data;
  iVar2 = (this->Elements).ArrayNum;
  pFVar1 = pFVar8 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Elements).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UGizmoElementBase>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (pFVar8 == pFVar1) break;
    plVar3 = *(longlong **)pFVar8;
    if (((plVar3 != (longlong *)0x0) &&
        (puVar6 = (undefined1 *)(**(code **)(*plVar3 + 0x400))(plVar3,local_res8,in_R8D),
        puVar6 != local_38)) && (puVar6[1] != '\0')) {
      uVar4 = *puVar6;
      puVar7[1] = 1;
      *puVar7 = uVar4;
      return TVar5;
    }
    pFVar8 = pFVar8 + 8;
  }
  puVar7[1] = 0;
  return TVar5;
}

// GetPartInteractionState @ 1496a3d40

TOptional<EGizmoElementInteractionState> __thiscall
UGizmoElementGroupBase::GetPartInteractionState(UGizmoElementGroupBase *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 in_register_00000014;
  TOptional<EGizmoElementInteractionState> TVar6;
  FScriptContainerElement *pFVar7;
  int in_R8D;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  undefined4 local_38 [4];
  
  TVar6._4_4_ = in_register_00000014;
  TVar6.TypedValue = param_1;
  if (in_R8D == (int)this->_padding_) {
    uVar4 = (**(code **)(this->_padding_ + 0x3d0))();
    *(undefined1 *)((longlong)TVar6 + 4) = 1;
    *(undefined4 *)TVar6 = uVar4;
    return TVar6;
  }
  pFVar7 = (this->Elements).AllocatorInstance.Data;
  iVar2 = (this->Elements).ArrayNum;
  pFVar1 = pFVar7 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Elements).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UGizmoElementBase>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (pFVar7 == pFVar1) break;
    plVar3 = *(longlong **)pFVar7;
    if (((plVar3 != (longlong *)0x0) &&
        (puVar5 = (undefined4 *)(**(code **)(*plVar3 + 0x418))(plVar3,local_res8,in_R8D),
        puVar5 != local_38)) && (*(char *)(puVar5 + 1) != '\0')) {
      uVar4 = *puVar5;
      *(undefined1 *)((longlong)TVar6 + 4) = 1;
      *(undefined4 *)TVar6 = uVar4;
      return TVar6;
    }
    pFVar7 = pFVar7 + 8;
  }
  *(undefined1 *)((longlong)TVar6 + 4) = 0;
  return TVar6;
}

// GetPartVisibleState @ 1496a3e50

TOptional<bool> __thiscall
UGizmoElementGroupBase::GetPartVisibleState(UGizmoElementGroupBase *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  undefined1 uVar4;
  TOptional<bool> TVar5;
  undefined1 *puVar6;
  undefined4 in_register_00000014;
  undefined1 *puVar7;
  FScriptContainerElement *pFVar8;
  int in_R8D;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  undefined1 local_38 [16];
  
  puVar7 = (undefined1 *)CONCAT44(in_register_00000014,param_1);
  TVar5 = SUB42(param_1,0);
  if (in_R8D == (int)this->_padding_) {
    uVar4 = (**(code **)(this->_padding_ + 0x2d8))();
    puVar7[1] = 1;
    *puVar7 = uVar4;
    return TVar5;
  }
  pFVar8 = (this->Elements).AllocatorInstance.Data;
  iVar2 = (this->Elements).ArrayNum;
  pFVar1 = pFVar8 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Elements).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UGizmoElementBase>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (pFVar8 == pFVar1) break;
    plVar3 = *(longlong **)pFVar8;
    if (((plVar3 != (longlong *)0x0) &&
        (puVar6 = (undefined1 *)(**(code **)(*plVar3 + 1000))(plVar3,local_res8,in_R8D),
        puVar6 != local_38)) && (puVar6[1] != '\0')) {
      uVar4 = *puVar6;
      puVar7[1] = 1;
      *puVar7 = uVar4;
      return TVar5;
    }
    pFVar8 = pFVar8 + 8;
  }
  puVar7[1] = 0;
  return TVar5;
}

// GetPrivateStaticClass @ 1496a52b0

UClass * __cdecl UGizmoElementGroupBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoElementGroupBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoElementGroupBase",
               &Z_Registration_Info_UClass_UGizmoElementGroupBase.InnerSingleton,
               StaticRegisterNativesUGizmoElementGroupBase,0x1e8,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UGizmoElementGroupBase>,
               InternalVTableHelperCtorCaller<UGizmoElementGroupBase>,local_res8,
               UGizmoElementLineBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoElementGroupBase.InnerSingleton;
}

// GetSubElements @ 1496a7ff0

TArrayView<TObjectPtr<UGizmoElementBase>_const_,int> * __thiscall
UGizmoElementGroupBase::GetSubElements
          (UGizmoElementGroupBase *this,
          TArrayView<TObjectPtr<UGizmoElementBase>_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<TObjectPtr<UGizmoElementBase>_const_,int> *pTVar4;
  
  iVar1 = (this->Elements).ArrayNum;
  __return_storage_ptr__->DataPtr =
       (TObjectPtr<UGizmoElementBase> *)(this->Elements).AllocatorInstance.Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<TObjectPtr<UGizmoElementBase>_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// LineTrace @ 1496afed0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FInputRayHit * __thiscall
UGizmoElementGroupBase::LineTrace
          (UGizmoElementGroupBase *this,FInputRayHit *__return_storage_ptr__,
          UGizmoViewContext *param_1,FLineTraceTraversalState *param_2,TVector<double> *param_3,
          TVector<double> *param_4,FLineTraceOutput *param_5)

{
  char cVar1;
  UGizmoElementGroupBase *pUVar2;
  undefined1 auStack_118 [32];
  UGizmoElementGroupBase *local_f8;
  int local_f0;
  code *local_e8;
  code **local_e0;
  UGizmoViewContext *local_d8;
  double *local_d0;
  TVector<double> *local_c8;
  TVector<double> *local_c0;
  FInputRayHit *local_b8;
  FLineTraceOutput *local_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_118;
  FInputRayHit::FInputRayHit(__return_storage_ptr__);
  local_a8 = (param_2->LocalToWorldTransform).Rotation.XY.m128d_f64[0];
  dStack_a0 = (param_2->LocalToWorldTransform).Rotation.XY.m128d_f64[1];
  local_98 = (param_2->LocalToWorldTransform).Rotation.ZW.m128d_f64[0];
  dStack_90 = (param_2->LocalToWorldTransform).Rotation.ZW.m128d_f64[1];
  local_88 = (param_2->LocalToWorldTransform).Translation.XY.m128d_f64[0];
  dStack_80 = (param_2->LocalToWorldTransform).Translation.XY.m128d_f64[1];
  local_68 = (param_2->LocalToWorldTransform).Scale3D.XY.m128d_f64[0];
  dStack_60 = (param_2->LocalToWorldTransform).Scale3D.XY.m128d_f64[1];
  local_78 = (param_2->LocalToWorldTransform).Translation.ZW.m128d_f64[0];
  dStack_70 = (param_2->LocalToWorldTransform).Translation.ZW.m128d_f64[1];
  local_48 = *(undefined4 *)&param_2->PixelToWorldScale;
  uStack_44 = *(undefined4 *)((longlong)&param_2->PixelToWorldScale + 4);
  uStack_40._0_1_ = param_2->bIsPerspectiveProjection;
  uStack_40._1_1_ = param_2->HitSortType;
  uStack_40._2_2_ = *(undefined2 *)&param_2->field_0x6a;
  uStack_3c = *(undefined4 *)&param_2->field_0x6c;
  local_58 = *(undefined4 *)(param_2->LocalToWorldTransform).Scale3D.ZW.m128d_f64;
  uStack_54 = *(undefined4 *)((longlong)(param_2->LocalToWorldTransform).Scale3D.ZW.m128d_f64 + 4);
  uStack_50 = *(undefined4 *)((param_2->LocalToWorldTransform).Scale3D.ZW.m128d_f64 + 1);
  uStack_4c = *(undefined4 *)((longlong)(param_2->LocalToWorldTransform).Scale3D.ZW.m128d_f64 + 0xc)
  ;
  cVar1 = (**(code **)(this->_padding_ + 0x6a8))
                    (this,param_1,&UE::Math::TVector<double>::ZeroVector,&local_a8);
  if (cVar1 != '\0') {
    (**(code **)(this->_padding_ + 0x820))(this,local_48,&local_a8);
    local_e8 = `UGizmoElementGroupBase::LineTrace'::__l5::FHitEvaluatorByPriority::UpdateHit;
    if (uStack_40._1_1_ == '\x01') {
      local_e8 = `UGizmoElementGroupBase::LineTrace'::__l5::FHitEvaluatorByDistance::UpdateHit;
    }
    local_e0 = &local_e8;
    local_d0 = &local_a8;
    local_c8 = param_3;
    local_c0 = param_4;
    local_b0 = param_5;
    local_d8 = param_1;
    local_b8 = __return_storage_ptr__;
    (**(code **)(this->_padding_ + 0x3b0))(this,&local_f8);
    for (pUVar2 = local_f8; pUVar2 != (UGizmoElementGroupBase *)(&local_f8->_padding_ + local_f0);
        pUVar2 = (UGizmoElementGroupBase *)&pUVar2->_padding_) {
      if ((UGizmoElementBase *)pUVar2->_padding_ != (UGizmoElementBase *)0x0) {
        `UGizmoElementGroupBase::LineTrace'::__l13::<lambda_1>::operator()
                  (&local_e0,(UGizmoElementBase *)pUVar2->_padding_);
      }
    }
    if ((this->bHitOwner != false) && (__return_storage_ptr__->bHit != false)) {
      local_f8 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=(&(__return_storage_ptr__->HitObject).WeakPtr,(FObjectPtr)&local_f8);
      __return_storage_ptr__->HitOwner = this;
      __return_storage_ptr__->HitIdentifier = (int)this->_padding_;
    }
  }
  return __return_storage_ptr__;
}

// Remove @ 1496b8000

void __thiscall
UGizmoElementGroupBase::Remove(UGizmoElementGroupBase *this,UGizmoElementBase *param_1)

{
  int *piVar1;
  TArray<TObjectPtr<UGizmoElementBase>,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  
  if (param_1 != (UGizmoElementBase *)0x0) {
    pTVar2 = &this->Elements;
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    pFVar4 = (pTVar2->AllocatorInstance).Data;
    iVar8 = (this->Elements).ArrayNum;
    pFVar10 = pFVar4;
    if (pFVar4 != pFVar4 + (longlong)iVar8 * 8) {
      while (*(UGizmoElementBase **)pFVar10 != param_1) {
        pFVar10 = pFVar10 + 8;
        if (pFVar10 == pFVar4 + (longlong)iVar8 * 8) {
          return;
        }
      }
      uVar9 = (uint)((longlong)pFVar10 - (longlong)pFVar4 >> 3);
      if (uVar9 != 0xffffffff) {
        uVar7 = 0;
        if ((int)uVar9 < iVar8) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar3 = (this->Elements).ArrayNum;
        pFVar4 = (pTVar2->AllocatorInstance).Data;
        iVar8 = iVar3 + ~uVar9;
        if (1 < iVar8) {
          iVar8 = 1;
        }
        if (iVar8 != 0) {
          memmove(pFVar4 + (longlong)(int)uVar9 * 8,pFVar4 + (longlong)(iVar3 - iVar8) * 8,
                  (longlong)iVar8 << 3);
        }
        piVar1 = &(this->Elements).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&pTVar2->AllocatorInstance,(this->Elements).ArrayNum,
                   &(this->Elements).ArrayMax);
      }
    }
  }
  return;
}

// Render @ 1496b9e00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UGizmoElementGroupBase::Render
          (UGizmoElementGroupBase *this,IToolsContextRenderAPI *param_1,
          FRenderTraversalState *param_2)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  FWeakObjectPtr FVar14;
  double *pdVar15;
  char cVar16;
  double *pdVar17;
  longlong lVar18;
  longlong *plVar19;
  FRenderTraversalState *pFVar20;
  undefined1 auStack_1d8 [32];
  longlong *local_1b8;
  int local_1b0;
  double local_198 [12];
  undefined4 local_138;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  lVar18 = 2;
  pdVar15 = local_198;
  do {
    pFVar20 = param_2;
    pdVar17 = pdVar15;
    dVar10 = (pFVar20->LocalToWorldTransform).Rotation.XY.m128d_f64[1];
    dVar11 = (pFVar20->LocalToWorldTransform).Rotation.ZW.m128d_f64[0];
    dVar12 = (pFVar20->LocalToWorldTransform).Rotation.ZW.m128d_f64[1];
    param_2 = (FRenderTraversalState *)
              &(pFVar20->MeshRenderState).HoverMaterial.bOverridesChildState;
    *pdVar17 = (pFVar20->LocalToWorldTransform).Rotation.XY.m128d_f64[0];
    pdVar17[1] = dVar10;
    dVar10 = (pFVar20->LocalToWorldTransform).Translation.XY.m128d_f64[0];
    dVar13 = (pFVar20->LocalToWorldTransform).Translation.XY.m128d_f64[1];
    pdVar17[2] = dVar11;
    pdVar17[3] = dVar12;
    dVar11 = (pFVar20->LocalToWorldTransform).Translation.ZW.m128d_f64[0];
    dVar12 = (pFVar20->LocalToWorldTransform).Translation.ZW.m128d_f64[1];
    pdVar17[4] = dVar10;
    pdVar17[5] = dVar13;
    dVar10 = (pFVar20->LocalToWorldTransform).Scale3D.XY.m128d_f64[0];
    dVar13 = (pFVar20->LocalToWorldTransform).Scale3D.XY.m128d_f64[1];
    pdVar17[6] = dVar11;
    pdVar17[7] = dVar12;
    dVar11 = (pFVar20->LocalToWorldTransform).Scale3D.ZW.m128d_f64[0];
    dVar12 = (pFVar20->LocalToWorldTransform).Scale3D.ZW.m128d_f64[1];
    pdVar17[8] = dVar10;
    pdVar17[9] = dVar13;
    dVar10 = pFVar20->PixelToWorldScale;
    dVar13 = *(double *)&pFVar20->InteractionState;
    pdVar17[10] = dVar11;
    pdVar17[0xb] = dVar12;
    dVar11 = *(double *)&(pFVar20->MeshRenderState).Material.Value.WeakPtr.ObjectSerialNumber;
    FVar14 = (pFVar20->MeshRenderState).HoverMaterial.Value.WeakPtr;
    pdVar17[0xc] = dVar10;
    pdVar17[0xd] = dVar13;
    pdVar17[0xe] = dVar11;
    *(FWeakObjectPtr *)(pdVar17 + 0xf) = FVar14;
    lVar18 = lVar18 + -1;
    pdVar15 = pdVar17 + 0x10;
  } while (lVar18 != 0);
  dVar10 = *(double *)&(pFVar20->MeshRenderState).InteractMaterial.Value.WeakPtr.ObjectSerialNumber;
  FVar14 = (pFVar20->MeshRenderState).SelectMaterial.Value.WeakPtr;
  dVar11 = *(double *)&(pFVar20->MeshRenderState).SelectMaterial.bOverridesChildState;
  pdVar17[0x10] = *(double *)param_2;
  pdVar17[0x11] = dVar10;
  dVar10 = *(double *)&(pFVar20->MeshRenderState).SubdueMaterial.Value.WeakPtr.ObjectSerialNumber;
  dVar12 = *(double *)&(pFVar20->MeshRenderState).VertexColor.Value.field0_0x0;
  *(FWeakObjectPtr *)(pdVar17 + 0x12) = FVar14;
  pdVar17[0x13] = dVar11;
  dVar11 = *(double *)((longlong)&(pFVar20->MeshRenderState).VertexColor.Value.field0_0x0 + 8);
  dVar13 = *(double *)&(pFVar20->MeshRenderState).VertexColor.bHasValue;
  pdVar17[0x14] = dVar10;
  pdVar17[0x15] = dVar12;
  dVar10 = *(double *)((longlong)&(pFVar20->MeshRenderState).HoverVertexColor.Value.field0_0x0 + 4);
  dVar12 = *(double *)
            ((longlong)&(pFVar20->MeshRenderState).HoverVertexColor.Value.field0_0x0 + 0xc);
  pdVar17[0x16] = dVar11;
  pdVar17[0x17] = dVar13;
  fVar2 = (pFVar20->MeshRenderState).InteractVertexColor.Value.field0_0x0._s_0.R;
  fVar3 = (pFVar20->MeshRenderState).InteractVertexColor.Value.field0_0x0._s_0.G;
  fVar4 = (pFVar20->MeshRenderState).InteractVertexColor.Value.field0_0x0._s_0.B;
  fVar5 = (pFVar20->MeshRenderState).InteractVertexColor.Value.field0_0x0._s_0.A;
  pdVar17[0x18] = dVar10;
  pdVar17[0x19] = dVar12;
  uVar6 = *(undefined4 *)&(pFVar20->MeshRenderState).InteractVertexColor.bHasValue;
  fVar7 = (pFVar20->MeshRenderState).SelectVertexColor.Value.field0_0x0._s_0.R;
  fVar8 = (pFVar20->MeshRenderState).SelectVertexColor.Value.field0_0x0._s_0.G;
  fVar9 = (pFVar20->MeshRenderState).SelectVertexColor.Value.field0_0x0._s_0.B;
  *(float *)(pdVar17 + 0x1a) = fVar2;
  *(float *)((longlong)pdVar17 + 0xd4) = fVar3;
  *(float *)(pdVar17 + 0x1b) = fVar4;
  *(float *)((longlong)pdVar17 + 0xdc) = fVar5;
  *(undefined4 *)(pdVar17 + 0x1c) = uVar6;
  *(float *)((longlong)pdVar17 + 0xe4) = fVar7;
  *(float *)(pdVar17 + 0x1d) = fVar8;
  *(float *)((longlong)pdVar17 + 0xec) = fVar9;
  cVar16 = (**(code **)(this->_padding_ + 0x698))
                     (this,fVar2,&UE::Math::TVector<double>::ZeroVector,local_198);
  if (cVar16 != '\0') {
    (**(code **)(this->_padding_ + 0x820))(this,local_138,local_198);
    (**(code **)(this->_padding_ + 0x3b0))(this,&local_1b8);
    for (plVar19 = local_1b8; plVar19 != local_1b8 + local_1b0; plVar19 = plVar19 + 1) {
      plVar1 = (longlong *)*plVar19;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x2b0))(plVar1,param_1,local_198);
      }
    }
  }
  return;
}

// SetConstantScale @ 1496bd3e0

void __thiscall UGizmoElementGroupBase::SetConstantScale(UGizmoElementGroupBase *this,bool param_1)

{
  this->bConstantScale = param_1;
  return;
}

// SetHitOwner @ 1496bd9e0

void __thiscall UGizmoElementGroupBase::SetHitOwner(UGizmoElementGroupBase *this,bool param_1)

{
  this->bHitOwner = param_1;
  return;
}

// SetPartIdentifier @ 1496bf230

void __thiscall
UGizmoElementGroupBase::SetPartIdentifier
          (UGizmoElementGroupBase *this,uint param_1,bool param_2,bool param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong *local_18;
  int local_10;
  
  if (!param_2) {
    (**(code **)(this->_padding_ + 0x388))();
  }
  if ((param_3) || (iVar2 = (**(code **)(this->_padding_ + 0x398))(this), iVar2 == 0)) {
    *(uint *)&this->_padding_ = param_1;
  }
  (**(code **)(this->_padding_ + 0x3b0))(this,&local_18);
  for (plVar3 = local_18; plVar3 != local_18 + local_10; plVar3 = plVar3 + 1) {
    plVar1 = (longlong *)*plVar3;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x380))(plVar1,param_1,param_2,0);
    }
  }
  return;
}

// StaticRegisterNativesUGizmoElementGroupBase @ 1496c2970

void __cdecl UGizmoElementGroupBase::StaticRegisterNativesUGizmoElementGroupBase(void)

{
  return;
}

// UpdatePartHittableState @ 1496c4cd0

bool __thiscall
UGizmoElementGroupBase::UpdatePartHittableState
          (UGizmoElementGroupBase *this,bool param_1,uint param_2,bool param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  byte bVar4;
  undefined7 in_register_00000011;
  FScriptContainerElement *pFVar5;
  byte bVar6;
  undefined1 local_res18 [8];
  
  bVar6 = 0;
  if (param_2 == (uint)this->_padding_) {
    (**(code **)(this->_padding_ + 0x2e0))(this,CONCAT71(in_register_00000011,param_1));
    bVar6 = 1;
    if (!param_3) {
      return true;
    }
  }
  pFVar5 = (this->Elements).AllocatorInstance.Data;
  iVar2 = (this->Elements).ArrayNum;
  pFVar1 = pFVar5 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Elements).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UGizmoElementBase>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (pFVar5 == pFVar1) break;
    plVar3 = *(longlong **)pFVar5;
    if (plVar3 != (longlong *)0x0) {
      bVar4 = (**(code **)(*plVar3 + 0x3f0))(plVar3,param_1,param_2,param_3);
      bVar6 = bVar6 | bVar4;
      if ((bVar6 != 0) && (!param_3)) {
        return true;
      }
    }
    pFVar5 = pFVar5 + 8;
  }
  return (bool)bVar6;
}

// UpdatePartInteractionState @ 1496c4de0

bool __thiscall
UGizmoElementGroupBase::UpdatePartInteractionState
          (UGizmoElementGroupBase *this,EGizmoElementInteractionState param_1,uint param_2,
          bool param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  byte bVar4;
  FScriptContainerElement *pFVar5;
  byte bVar6;
  undefined1 local_res18 [8];
  
  bVar6 = 0;
  if (param_2 == (uint)this->_padding_) {
    *(EGizmoElementInteractionState *)&this->_padding_ = param_1;
    bVar6 = 1;
    if (!param_3) {
      return true;
    }
  }
  pFVar5 = (this->Elements).AllocatorInstance.Data;
  iVar2 = (this->Elements).ArrayNum;
  pFVar1 = pFVar5 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Elements).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UGizmoElementBase>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (pFVar5 == pFVar1) break;
    plVar3 = *(longlong **)pFVar5;
    if (plVar3 != (longlong *)0x0) {
      bVar4 = (**(code **)(*plVar3 + 0x408))(plVar3,param_1,param_2,param_3);
      bVar6 = bVar6 | bVar4;
      if ((bVar6 != 0) && (!param_3)) {
        return true;
      }
    }
    pFVar5 = pFVar5 + 8;
  }
  return (bool)bVar6;
}

// UpdatePartVisibleState @ 1496c4ef0

bool __thiscall
UGizmoElementGroupBase::UpdatePartVisibleState
          (UGizmoElementGroupBase *this,bool param_1,uint param_2,bool param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  byte bVar4;
  undefined7 in_register_00000011;
  FScriptContainerElement *pFVar5;
  byte bVar6;
  undefined1 local_res18 [8];
  
  bVar6 = 0;
  if (param_2 == (uint)this->_padding_) {
    (**(code **)(this->_padding_ + 0x2d0))(this,CONCAT71(in_register_00000011,param_1));
    bVar6 = 1;
    if (!param_3) {
      return true;
    }
  }
  pFVar5 = (this->Elements).AllocatorInstance.Data;
  iVar2 = (this->Elements).ArrayNum;
  pFVar1 = pFVar5 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Elements).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UGizmoElementBase>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (pFVar5 == pFVar1) break;
    plVar3 = *(longlong **)pFVar5;
    if (plVar3 != (longlong *)0x0) {
      bVar4 = (**(code **)(*plVar3 + 0x3d8))(plVar3,param_1,param_2,param_3);
      bVar6 = bVar6 | bVar4;
      if ((bVar6 != 0) && (!param_3)) {
        return true;
      }
    }
    pFVar5 = pFVar5 + 8;
  }
  return (bool)bVar6;
}

