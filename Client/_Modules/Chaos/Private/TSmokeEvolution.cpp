// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 15

// TSmokeEvolution<double,3> @ 143dfa410

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TSmokeEvolution<double,3> * __thiscall
Chaos::TSmokeEvolution<double,3>::TSmokeEvolution<double,3>
          (TSmokeEvolution<double,3> *this,TUniformGrid<double,3> *param_1,
          TKinematicGeometryParticlesImp<double,3,0> *param_2,
          TKinematicGeometryParticlesImp<double,3,0> *param_3)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  double local_res8;
  
  uVar4 = *(undefined8 *)&param_1->field_0x8;
  *(undefined8 *)&this->MGrid = *(undefined8 *)param_1;
  *(undefined8 *)&(this->MGrid).field_0x8 = uVar4;
  uVar4 = *(undefined8 *)&param_1->field_0x18;
  *(undefined8 *)&(this->MGrid).field_0x10 = *(undefined8 *)&param_1->field_0x10;
  *(undefined8 *)&(this->MGrid).field_0x18 = uVar4;
  uVar4 = *(undefined8 *)&param_1->field_0x28;
  *(undefined8 *)&(this->MGrid).field_0x20 = *(undefined8 *)&param_1->field_0x20;
  *(undefined8 *)&(this->MGrid).field_0x28 = uVar4;
  uVar4 = *(undefined8 *)&param_1->field_0x38;
  *(undefined8 *)&(this->MGrid).field_0x30 = *(undefined8 *)&param_1->field_0x30;
  *(undefined8 *)&(this->MGrid).field_0x38 = uVar4;
  uVar4 = *(undefined8 *)&param_1->field_0x48;
  *(undefined8 *)&(this->MGrid).field_0x40 = *(undefined8 *)&param_1->field_0x40;
  *(undefined8 *)&(this->MGrid).field_0x48 = uVar4;
  *(undefined8 *)&(this->MGrid).field_0x50 = *(undefined8 *)&param_1->field_0x50;
  TArrayFaceND<double,3>::TArrayFaceND<double,3>(&this->MVelocity,&this->MGrid);
  puVar1 = &(this->MDensity).field_0x10;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->MDensity).field_0x18 = 0;
  iVar3 = *(int *)&(this->MGrid).field_0x38;
  *(undefined8 *)&this->MDensity = *(undefined8 *)&(this->MGrid).field_0x30;
  *(int *)&(this->MDensity).field_0x8 = iVar3;
  TArray<double,TSizedDefaultAllocator<32>_>::SetNum
            ((TArray<double,TSizedDefaultAllocator<32>_> *)puVar1,
             iVar3 * *(int *)&(this->MDensity).field_0x4 * *(int *)&this->MDensity,Default);
  puVar1 = &(this->MDirichlet).field_0x10;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->MDirichlet).field_0x18 = 0;
  iVar3 = *(int *)&(this->MGrid).field_0x38;
  *(undefined8 *)&this->MDirichlet = *(undefined8 *)&(this->MGrid).field_0x30;
  *(int *)&(this->MDirichlet).field_0x8 = iVar3;
  TArray<bool,TSizedDefaultAllocator<32>_>::SetNum
            ((TArray<bool,TSizedDefaultAllocator<32>_> *)puVar1,
             iVar3 * *(int *)&(this->MDirichlet).field_0x4 * *(int *)&this->MDirichlet,Default);
  TArrayFaceND<bool,3>::TArrayFaceND<bool,3>(&this->MNeumann,&this->MGrid);
  TKinematicGeometryParticlesImp<double,3,0>::TKinematicGeometryParticlesImp<double,3,0>
            (&this->MCollisionParticles,param_2);
  TKinematicGeometryParticlesImp<double,3,0>::TKinematicGeometryParticlesImp<double,3,0>
            (&this->MSourceParticles,param_3);
  (this->MForceRules).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_res8 = 0.0;
  (this->MForceRules).ArrayNum = 0;
  (this->MForceRules).ArrayMax = 0;
  *(undefined8 *)&this->MAdvectionRule = 0;
  *(undefined8 *)&(this->MAdvectionRule).field_0x28 = 0;
  *(undefined8 *)&this->MConvectionRule = 0;
  *(undefined8 *)&(this->MConvectionRule).field_0x28 = 0;
  *(undefined8 *)&this->MProjectionRule = 0;
  *(undefined8 *)&(this->MProjectionRule).field_0x28 = 0;
  TArrayFaceND<double,3>::Fill(&this->MVelocity,&local_res8);
  puVar5 = *(undefined8 **)&(this->MDensity).field_0x10;
  iVar3 = *(int *)&(this->MDensity).field_0x18;
  puVar2 = puVar5 + iVar3;
  while( true ) {
    if (*(int *)&(this->MDensity).field_0x18 != iVar3) {
      `TCheckedPointerIterator<double,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_res8)
      ;
    }
    if (puVar5 == puVar2) break;
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  return this;
}

// ~TSmokeEvolution<double,3> @ 143dfd8b0

void __thiscall
Chaos::TSmokeEvolution<double,3>::~TSmokeEvolution<double,3>(TSmokeEvolution<double,3> *this)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  longlong *plVar4;
  
  if (*(longlong *)&this->MProjectionRule != 0) {
    plVar1 = *(longlong **)&(this->MProjectionRule).field_0x28;
    plVar4 = (longlong *)&(this->MProjectionRule).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar4 = plVar1;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (*(longlong *)&this->MConvectionRule != 0) {
    plVar1 = *(longlong **)&(this->MConvectionRule).field_0x28;
    plVar4 = (longlong *)&(this->MConvectionRule).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar4 = plVar1;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (*(longlong *)&this->MAdvectionRule != 0) {
    plVar1 = *(longlong **)&(this->MAdvectionRule).field_0x28;
    plVar4 = (longlong *)&(this->MAdvectionRule).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar4 = plVar1;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  DestructItems<TFunction<void___cdecl(Chaos::TUniformGrid<double,3>_const_&,Chaos::TArrayFaceND<double,3>_&,double,Chaos::Pair<int,Chaos::TVector<int,3>_>)>,int>
            ((TFunction<void___cdecl(Chaos::TUniformGrid<double,3>_const_&,Chaos::TArrayFaceND<double,3>_&,double,Chaos::Pair<int,Chaos::TVector<int,3>_>)>
              *)(this->MForceRules).AllocatorInstance.Data,(this->MForceRules).ArrayNum);
  pFVar2 = (this->MForceRules).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  TKinematicGeometryParticlesImp<double,3,0>::~TKinematicGeometryParticlesImp<double,3,0>
            (&this->MSourceParticles);
  TKinematicGeometryParticlesImp<double,3,0>::~TKinematicGeometryParticlesImp<double,3,0>
            (&this->MCollisionParticles);
  DestructItems<Chaos::TArrayND<bool,3>,int>
            ((TArrayND<bool,3> *)&this->MNeumann,(this->MNeumann).MArray.ArrayNum);
  pvVar3 = *(void **)&(this->MDirichlet).field_0x10;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  pvVar3 = *(void **)&(this->MDensity).field_0x10;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  DestructItems<Chaos::TArrayND<double,3>,int>
            ((TArrayND<double,3> *)&this->MVelocity,(this->MVelocity).MArray.ArrayNum);
  return;
}

// operator() @ 143e00c00

void __thiscall
`Chaos::TSmokeEvolution<double,3>::AdvanceOneTimeStep'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 local_res8;
  TVector<int,3>_u_0 local_28;
  undefined8 local_18;
  int local_10;
  
  Chaos::TUniformGrid<double,3>::GetIndex
            (*(TUniformGrid<double,3> **)this,(TVector<int,3> *)&local_28._s_0,param_1);
  lVar1 = *(longlong *)this;
  uVar2 = *(undefined8 *)((longlong)this + 0x10);
  local_10 = local_28._s_0.Z;
  uVar3 = *(undefined8 *)((longlong)this + 8);
  local_18 = local_28._0_8_;
  local_res8 = **(undefined8 **)((longlong)this + 0x18);
  UE::Core::Private::Function::CheckCallable(*(void **)(lVar1 + 0x720));
  pcVar4 = *(code **)(lVar1 + 0x720);
  plVar6 = (longlong *)(lVar1 + 0x730);
  if (*(longlong **)(lVar1 + 0x748) != (longlong *)0x0) {
    plVar6 = *(longlong **)(lVar1 + 0x748);
  }
  uVar5 = (**(code **)(*plVar6 + 8))();
  (*pcVar4)(uVar5,lVar1,lVar1 + 0xc0,uVar3,uVar2,&local_res8,&local_18);
  return;
}

// operator() @ 143e03740

void __thiscall
`Chaos::TSmokeEvolution<double,3>::AdvanceOneTimeStep'::__l4::<lambda_2>::operator()
          (void *this,int param_1)

{
  TArrayFaceND<double,3> *this_00;
  longlong lVar1;
  undefined8 uVar2;
  code *pcVar3;
  TArrayND<double,3> *pTVar4;
  TArrayND<double,3> *pTVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 local_res8;
  TVector<int,3>_u_0 local_48;
  undefined8 local_38;
  int local_30;
  
  Chaos::TUniformGrid<double,3>::GetIndex
            (*(TUniformGrid<double,3> **)this,(TVector<int,3> *)&local_48._s_0,param_1);
  this_00 = *(TArrayFaceND<double,3> **)((longlong)this + 0x18);
  lVar1 = *(longlong *)((longlong)this + 8);
  local_res8 = **(undefined8 **)((longlong)this + 0x20);
  pTVar4 = Chaos::TArrayFaceND<double,3>::GetComponent(this_00,**(int **)((longlong)this + 0x10));
  pTVar5 = Chaos::TArrayFaceND<double,3>::GetComponent
                     ((TArrayFaceND<double,3> *)(*(longlong *)((longlong)this + 8) + 0x58),
                      **(int **)((longlong)this + 0x10));
  uVar2 = *(undefined8 *)this;
  local_38 = local_48._0_8_;
  local_30 = local_48._s_0.Z;
  UE::Core::Private::Function::CheckCallable(*(void **)(lVar1 + 0x750));
  pcVar3 = *(code **)(lVar1 + 0x750);
  plVar7 = (longlong *)(lVar1 + 0x760);
  if (*(longlong **)(lVar1 + 0x778) != (longlong *)0x0) {
    plVar7 = *(longlong **)(lVar1 + 0x778);
  }
  uVar6 = (**(code **)(*plVar7 + 8))();
  (*pcVar3)(uVar6,uVar2,pTVar5,pTVar4,this_00,&local_res8,&local_38);
  return;
}

// operator() @ 143e06a20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`Chaos::TSmokeEvolution<double,3>::AdvanceOneTimeStep'::__l2::<lambda_3>::operator()
          (void *this,int param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  TUniformGrid<double,3> *pTVar4;
  code *pcVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 auStackY_d8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  Pair<int,Chaos::TVector<int,3>_> local_98;
  Pair<int,Chaos::TVector<int,3>_> local_88;
  code *local_78;
  longlong local_68 [3];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  Chaos::TUniformGrid<double,3>::GetFaceIndex(*(TUniformGrid<double,3> **)this,&local_98,param_1);
  lVar2 = *(longlong *)this;
  iVar1 = *(int *)(lVar2 + 0x710);
  plVar9 = *(longlong **)(lVar2 + 0x708);
  plVar8 = plVar9 + (longlong)iVar1 * 6;
  while( true ) {
    if (*(int *)(lVar2 + 0x710) != iVar1) {
      `TCheckedPointerIterator<TFunction<void___cdecl(Chaos::TUniformGrid<double,3>_const_&,Chaos::TArrayFaceND<double,3>_&,double,Chaos::Pair<int,Chaos::TVector<int,3>_>)>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_a8);
    }
    if (plVar9 == plVar8) break;
    local_78 = (code *)*plVar9;
    local_50 = (longlong *)0x0;
    if (local_78 != (code *)0x0) {
      plVar7 = plVar9 + 2;
      if ((longlong *)plVar9[5] != (longlong *)0x0) {
        plVar7 = (longlong *)plVar9[5];
      }
      (**(code **)*plVar7)(plVar7,local_68);
    }
    lVar3 = *(longlong *)this;
    local_88._0_8_ = local_98._0_8_;
    local_88.Second.field0_0x0._4_8_ = local_98.Second.field0_0x0._4_8_;
    local_a0 = **(undefined8 **)((longlong)this + 8);
    UE::Core::Private::Function::CheckCallable(local_78);
    pcVar5 = local_78;
    plVar7 = local_68;
    if (local_50 != (longlong *)0x0) {
      plVar7 = local_50;
    }
    uVar6 = (**(code **)(*plVar7 + 8))();
    (*pcVar5)(uVar6,lVar3,lVar3 + 0x58,&local_a0);
    if (local_78 != (code *)0x0) {
      plVar7 = local_68;
      if (local_50 != (longlong *)0x0) {
        plVar7 = local_50;
      }
      (**(code **)(*plVar7 + 0x10))();
    }
    plVar9 = plVar9 + 6;
  }
  pTVar4 = *(TUniformGrid<double,3> **)this;
  Chaos::TPerCellBoundaryConditions<double,3>::ApplyNeumann
            (*(TPerCellBoundaryConditions<double,3> **)((longlong)this + 0x10),pTVar4,
             (TArrayFaceND<bool,3> *)&pTVar4[2].field_0x50,(TArrayFaceND<double,3> *)(pTVar4 + 1),
             **(double **)((longlong)this + 8),&local_98);
  return;
}

// AddForceFunction @ 143e095c0

void __thiscall
Chaos::TSmokeEvolution<double,3>::AddForceFunction
          (TSmokeEvolution<double,3> *this,
          TFunction<void___cdecl(Chaos::TUniformGrid<double,3>_const_&,Chaos::TArrayFaceND<double,3>_&,double,Chaos::Pair<int,Chaos::TVector<int,3>_>)>
          *param_1)

{
  int *piVar1;
  TArray<TFunction<void___cdecl(Chaos::TUniformGrid<double,3>_const_&,Chaos::TArrayFaceND<double,3>_&,double,Chaos::Pair<int,Chaos::TVector<int,3>_>)>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  TFunction<void___cdecl(Chaos::TUniformGrid<double,3>_const_&,Chaos::TArrayFaceND<double,3>_&,double,Chaos::Pair<int,Chaos::TVector<int,3>_>)>
  *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  FScriptContainerElement *pFVar9;
  
  pTVar2 = &this->MForceRules;
  pTVar3 = (TFunction<void___cdecl(Chaos::TUniformGrid<double,3>_const_&,Chaos::TArrayFaceND<double,3>_&,double,Chaos::Pair<int,Chaos::TVector<int,3>_>)>
            *)(pTVar2->AllocatorInstance).Data;
  if ((pTVar3 <= param_1) && (param_1 < pTVar3 + (this->MForceRules).ArrayMax)) {
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
  iVar6 = (this->MForceRules).ArrayNum;
  piVar1 = &(this->MForceRules).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1030,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->MForceRules).ArrayNum = iVar6 + 1;
  pFVar9 = (pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 0x30;
  *(longlong *)pFVar9 = *(longlong *)param_1;
  *(longlong *)(pFVar9 + 0x28) = 0;
  if (*(longlong *)pFVar9 != 0) {
    puVar7 = (undefined8 *)&param_1->field_0x10;
    if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
      puVar7 = *(undefined8 **)&param_1->field_0x28;
    }
    (**(code **)*puVar7)();
  }
  if (*(longlong *)param_1 != 0) {
    plVar8 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar8 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  return;
}

// AdvanceOneTimeStep @ 143e0c320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::TSmokeEvolution<double,3>::AdvanceOneTimeStep(TSmokeEvolution<double,3> *this,double param_1)

{
  int iVar1;
  void *_Src;
  longlong *plVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  uint uVar10;
  bool bVar11;
  undefined8 uVar12;
  longlong *plVar13;
  longlong lVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auStackY_318 [32];
  uint local_2d8 [2];
  double local_2d0;
  int local_2c8 [3];
  TVector<int,3>_u_0 local_2bc;
  undefined8 local_2b0;
  undefined4 local_2a8;
  ForAnyElementType local_2a0;
  int local_298;
  int local_294;
  double local_290;
  double dStack_288;
  double local_280;
  double local_278;
  TKinematicGeometryParticlesImp<double,3,0> *local_270;
  TKinematicGeometryParticlesImp<double,3,0> *local_268;
  double local_260;
  double dStack_258;
  double local_250;
  code *local_248;
  TSmokeEvolution<double,3> **local_240;
  code *local_238;
  TUniformGridBase<double,3> **local_230;
  code *local_228;
  TSmokeEvolution<double,3> **local_220;
  code *local_218;
  TSmokeEvolution<double,3> **local_210;
  double local_208;
  double local_200;
  double local_1f8;
  double local_1f0;
  double local_1e8;
  double local_1e0;
  TSmokeEvolution<double,3> *local_1d8;
  double *local_1d0;
  TKinematicGeometryParticlesImp<double,3,0> **local_1c8;
  TSmokeEvolution<double,3> *local_1c0;
  TKinematicGeometryParticlesImp<double,3,0> **local_1b8;
  double *local_1b0;
  TSmokeEvolution<double,3> *local_1a8;
  undefined8 *local_1a0;
  TArrayFaceND<double,3> *local_198;
  double *local_190;
  TUniformGridBase<double,3> *local_188;
  TSmokeEvolution<double,3> *local_180;
  uint *local_178;
  TArrayFaceND<double,3> *local_170;
  double *local_168;
  double local_160;
  double dStack_158;
  undefined8 local_150;
  TUniformGridBase<double,3> local_148;
  TArrayFaceND<double,3> local_e8;
  ulonglong local_80;
  
  local_80 = __security_cookie.value ^ (ulonglong)auStackY_318;
  local_270 = &this->MCollisionParticles;
  local_268 = &this->MSourceParticles;
  local_2d0 = param_1;
  TArrayFaceND<double,3>::TArrayFaceND<double,3>(&local_e8,&(this->MVelocity).MArray);
  local_298 = *(int *)&(this->MDensity).field_0x18;
  lVar14 = (longlong)local_298;
  local_2b0 = *(undefined8 *)&this->MDensity;
  local_2a8 = *(undefined4 *)&(this->MDensity).field_0x8;
  _Src = *(void **)&(this->MDensity).field_0x10;
  local_2a0.Data = (FScriptContainerElement *)0x0;
  if (local_298 == 0) {
    local_294 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_298,0,&local_2a0,local_298,&local_294);
    memcpy(local_2a0.Data,_Src,lVar14 << 3);
  }
  if ((*(int *)&(this->MDensity).field_0x8 * *(int *)&(this->MDensity).field_0x4 *
       *(int *)&this->MDensity != *(int *)&(this->MDensity).field_0x18) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Counts.Product() == Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\ArrayND.h"
                          ,0x100,L""), bVar11)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_1a0 = &local_2b0;
  local_198 = &local_e8;
  local_190 = &local_2d0;
  local_240 = &local_1a8;
  local_248 = UE::Core::Private::Function::
              TFunctionRefCaller<`Chaos::TSmokeEvolution<double,3>::AdvanceOneTimeStep'::__l2::<lambda_1>,void,int>
              ::Call;
  local_1a8 = this;
  PhysicsParallelFor(*(int *)&(this->MGrid).field_0x30 * *(int *)&(this->MGrid).field_0x34 *
                     *(int *)&(this->MGrid).field_0x38,(TFunctionRef<void___cdecl(int)> *)&local_248
                     ,false);
  dVar9 = _UNK_150689518;
  dVar8 = ___xmm_00000000000000003ff0000000000000;
  dVar7 = _UNK_15061cbc8;
  dVar6 = ___xmm_3ff00000000000000000000000000000;
  dVar5 = __real_3fe0000000000000;
  dVar4 = __real_3ff0000000000000;
  local_2d8[0] = 0;
  do {
    uVar10 = local_2d8[0];
    if (local_2d8[0] == 0) {
      local_150 = 0;
      local_160 = dVar8;
      dStack_158 = dVar9;
      local_290 = dVar8;
      dStack_288 = dVar9;
      local_280 = 0.0;
    }
    else {
      if (local_2d8[0] == 1) {
        local_250 = 0.0;
        local_260 = dVar6;
        dStack_258 = dVar7;
      }
      else {
        local_250 = dVar4;
        local_260 = 0.0;
        dStack_258 = 0.0;
      }
      local_280 = local_250;
      local_290 = local_260;
      dStack_288 = dStack_258;
      if ((2 < local_2d8[0]) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValidIndex(Index)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                              ,0x7ab,L""), bVar11)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    local_2c8[0] = 0;
    local_2c8[1] = 0;
    local_2c8[2] = 0;
    dVar15 = *(double *)
              ((this->MVelocity).MArray.AllocatorInstance.InlineData[0].Pad +
              (longlong)(int)uVar10 * 8 + -0x18);
    dVar16 = dStack_288 * dVar15;
    iVar1 = *(int *)&(this->MGrid).field_0x30;
    dVar17 = local_290 * dVar15;
    dVar15 = local_280 * dVar15;
    local_2c8[(int)local_2d8[0]] = 1;
    local_2bc._s_0.X = iVar1 + local_2c8[0];
    local_2bc._s_0.Y = *(int *)&(this->MGrid).field_0x34 + local_2c8[1];
    local_2bc._s_0.Z = *(int *)&(this->MGrid).field_0x38 + local_2c8[2];
    dVar17 = dVar17 * dVar5;
    dVar16 = dVar16 * dVar5;
    dVar15 = dVar15 * dVar5;
    local_208 = dVar17 + *(double *)&(this->MGrid).field_0x18;
    local_200 = dVar16 + *(double *)&(this->MGrid).field_0x20;
    local_1f8 = dVar15 + *(double *)&(this->MGrid).field_0x28;
    local_1f0 = *(double *)&this->MGrid - dVar17;
    local_1e8 = *(double *)&(this->MGrid).field_0x8 - dVar16;
    local_1e0 = *(double *)&(this->MGrid).field_0x10 - dVar15;
    TUniformGridBase<double,3>::TUniformGridBase<double,3>
              (&local_148,(TVector<double,3> *)&local_1f0,(TVector<double,3> *)&local_208,
               (TVector<int,3> *)&local_2bc._s_0,0);
    local_188 = &local_148;
    local_178 = local_2d8;
    local_170 = &local_e8;
    local_168 = &local_2d0;
    local_230 = &local_188;
    local_238 = UE::Core::Private::Function::
                TFunctionRefCaller<`Chaos::TSmokeEvolution<double,3>::AdvanceOneTimeStep'::__l4::<lambda_2>,void,int>
                ::Call;
    local_180 = this;
    PhysicsParallelFor(local_148.MCells.field0_0x0._s_0.Z * local_148.MCells.field0_0x0._s_0.Y *
                       local_148.MCells.field0_0x0._s_0.X,
                       (TFunctionRef<void___cdecl(int)> *)&local_238,false);
    local_2d8[0] = local_2d8[0] + 1;
    if (2 < (int)local_2d8[0]) {
      iVar1 = *(int *)&(this->MGrid).field_0x34;
      local_1d0 = &local_2d0;
      local_1c8 = &local_270;
      local_220 = &local_1d8;
      local_228 = UE::Core::Private::Function::
                  TFunctionRefCaller<`Chaos::TSmokeEvolution<double,3>::AdvanceOneTimeStep'::__l2::<lambda_3>,void,int>
                  ::Call;
      local_1d8 = this;
      PhysicsParallelFor((*(int *)&(this->MGrid).field_0x38 * iVar1 * 3 +
                          *(int *)&(this->MGrid).field_0x3c + iVar1) *
                         *(int *)&(this->MGrid).field_0x30 +
                         iVar1 * *(int *)&(this->MGrid).field_0x38,
                         (TFunctionRef<void___cdecl(int)> *)&local_228,false);
      local_1b8 = &local_270;
      local_1b0 = &local_2d0;
      local_210 = &local_1c0;
      local_218 = UE::Core::Private::Function::
                  TFunctionRefCaller<`Chaos::TSmokeEvolution<double,3>::AdvanceOneTimeStep'::__l2::<lambda_4>,void,int>
                  ::Call;
      local_1c0 = this;
      PhysicsParallelFor(*(int *)&(this->MGrid).field_0x38 * *(int *)&(this->MGrid).field_0x30 *
                         *(int *)&(this->MGrid).field_0x34,
                         (TFunctionRef<void___cdecl(int)> *)&local_218,false);
      local_278 = local_2d0;
      UE::Core::Private::Function::CheckCallable(*(void **)&this->MProjectionRule);
      pcVar3 = *(code **)&this->MProjectionRule;
      plVar2 = *(longlong **)&(this->MProjectionRule).field_0x28;
      plVar13 = (longlong *)&(this->MProjectionRule).field_0x10;
      if (plVar2 != (longlong *)0x0) {
        plVar13 = plVar2;
      }
      uVar12 = (**(code **)(*plVar13 + 8))();
      (*pcVar3)(uVar12,this,&this->MVelocity,&this->MDirichlet);
      if (local_2a0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2a0.Data);
      }
      DestructItems<Chaos::TArrayND<double,3>,int>
                ((TArrayND<double,3> *)&local_e8,local_e8.MArray.ArrayNum);
      return;
    }
  } while( true );
}

// ComputeDivergence @ 143e153a0

/* WARNING: Type propagation algorithm not settling */

double __thiscall
Chaos::TSmokeEvolution<double,3>::ComputeDivergence(TSmokeEvolution<double,3> *this)

{
  double dVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  double dVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  bool bVar9;
  uint uVar10;
  TVector<int,3> *pTVar11;
  int iVar12;
  uchar *puVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  double *pdVar18;
  int *piVar19;
  double dVar20;
  int local_res8;
  int local_e8 [4];
  TVector<int,3>_u_0 local_d8;
  TVector<int,3>_u_0 local_c8;
  TVector<int,3> local_bc;
  int local_ac;
  int iStack_a8;
  int local_a4;
  undefined8 local_9c;
  int local_94;
  
  uVar7 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar6 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  iVar14 = *(int *)&(this->MGrid).field_0x38;
  iVar12 = *(int *)&(this->MGrid).field_0x34;
  dVar20 = 0.0;
  iVar17 = *(int *)&(this->MGrid).field_0x30;
  local_res8 = 0;
  dVar5 = 0.0;
  if (0 < iVar17 * iVar12 * iVar14) {
    do {
      pdVar18 = (double *)&(this->MGrid).field_0x40;
      puVar13 = (this->MVelocity).MArray.AllocatorInstance.InlineData[0].Pad + 0x10;
      iVar14 = 0;
      piVar19 = local_e8;
      dVar5 = 0.0;
      do {
        TUniformGrid<double,3>::GetIndex(&this->MGrid,(TVector<int,3> *)&local_d8._s_0,local_res8);
        uVar8 = local_d8._s_0.Z;
        local_ac = local_d8._s_0.X;
        iStack_a8 = local_d8._s_0.Y;
        dVar1 = *pdVar18;
        local_a4 = local_d8._s_0.Z;
        if (((this->MVelocity).MArray.ArrayNum <= iVar14) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          dVar20 = (double)(*pcVar4)();
          return dVar20;
        }
        uVar15 = uVar8 + (local_ac * *(int *)(puVar13 + -0xc) + iStack_a8) * *(int *)(puVar13 + -8);
        uVar10 = 0;
        if ((int)uVar15 < *(int *)(puVar13 + 8)) {
          uVar10 = ~uVar15 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          dVar20 = (double)(*pcVar4)();
          return dVar20;
        }
        lVar2 = *(longlong *)puVar13;
        local_e8[0] = 0;
        local_e8[1] = 0;
        local_e8[2] = 0;
        *piVar19 = 1;
        local_c8._s_0.X = local_e8[0] + local_d8._s_0.X;
        local_c8._s_0.Y = local_e8[1] + local_d8._s_0.Y;
        local_c8._s_0.Z = local_e8[2] + local_d8._s_0.Z;
        pTVar11 = TUniformGrid<double,3>::ClampIndex
                            (&this->MGrid,&local_bc,(TVector<int,3> *)&local_c8._s_0);
        local_9c = *(undefined8 *)&pTVar11->field0_0x0;
        iVar12 = (pTVar11->field0_0x0)._s_0.Z;
        local_94 = iVar12;
        if (((this->MVelocity).MArray.ArrayNum <= iVar14) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          dVar20 = (double)(*pcVar4)();
          return dVar20;
        }
        uVar16 = iVar12 + ((int)local_9c * *(int *)(puVar13 + -0xc) + local_9c._4_4_) *
                          *(int *)(puVar13 + -8);
        uVar10 = 0;
        if ((int)uVar16 < *(int *)(puVar13 + 8)) {
          uVar10 = ~uVar16 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          dVar20 = (double)(*pcVar4)();
          return dVar20;
        }
        lVar3 = *(longlong *)puVar13;
        iVar14 = iVar14 + 1;
        pdVar18 = pdVar18 + 1;
        piVar19 = piVar19 + 1;
        puVar13 = puVar13 + 0x20;
        dVar5 = dVar5 + (*(double *)(lVar3 + (longlong)(int)uVar16 * 8) -
                        *(double *)(lVar2 + (longlong)(int)uVar15 * 8)) / dVar1;
      } while (iVar14 < 3);
      iVar17 = *(int *)&(this->MGrid).field_0x30;
      iVar12 = *(int *)&(this->MGrid).field_0x34;
      iVar14 = *(int *)&(this->MGrid).field_0x38;
      local_res8 = local_res8 + 1;
      dVar20 = dVar20 + (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) & uVar7,
                                         SUB84(dVar5,0) & uVar6);
      dVar5 = dVar20;
    } while (local_res8 < iVar17 * iVar12 * iVar14);
  }
  return dVar5 / (double)(iVar12 * iVar17 * iVar14);
}

// Density @ 143e1aa50

TArrayND<double,3> * __thiscall
Chaos::TSmokeEvolution<double,3>::Density(TSmokeEvolution<double,3> *this)

{
  return &this->MDensity;
}

// Density @ 143e1aa60

TArrayND<double,3> * __thiscall
Chaos::TSmokeEvolution<double,3>::Density(TSmokeEvolution<double,3> *this)

{
  return &this->MDensity;
}

// Grid @ 143e31020

TUniformGrid<double,3> * __thiscall
Chaos::TSmokeEvolution<double,3>::Grid(TSmokeEvolution<double,3> *this)

{
  return &this->MGrid;
}

// SetAdvectionFunction @ 143e4cd00

void __thiscall
Chaos::TSmokeEvolution<double,3>::SetAdvectionFunction
          (TSmokeEvolution<double,3> *this,
          TFunction<void___cdecl(Chaos::TUniformGrid<double,3>_const_&,Chaos::TArrayND<double,3>_&,Chaos::TArrayND<double,3>_const_&,Chaos::TArrayFaceND<double,3>_const_&,double,Chaos::TVector<int,3>)>
          *param_1)

{
  longlong *plVar1;
  
  TFunction<void___cdecl(Chaos::TUniformGrid<double,3>_const_&,Chaos::TArrayND<double,3>_&,Chaos::TArrayND<double,3>_const_&,Chaos::TArrayFaceND<double,3>_const_&,double,Chaos::TVector<int,3>)>
  ::operator=(&this->MAdvectionRule,param_1);
  if (*(longlong *)param_1 != 0) {
    plVar1 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar1 = *(longlong **)&param_1->field_0x28;
    }
                    /* WARNING: Could not recover jumptable at 0x000143e4cd32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// SetConvectionFunction @ 143e4cff0

void __thiscall
Chaos::TSmokeEvolution<double,3>::SetConvectionFunction
          (TSmokeEvolution<double,3> *this,
          TFunction<void___cdecl(Chaos::TUniformGrid<double,3>_const_&,Chaos::TArrayND<double,3>_&,Chaos::TArrayND<double,3>_const_&,Chaos::TArrayFaceND<double,3>_const_&,double,Chaos::TVector<int,3>)>
          *param_1)

{
  longlong *plVar1;
  
  TFunction<void___cdecl(Chaos::TUniformGrid<double,3>_const_&,Chaos::TArrayND<double,3>_&,Chaos::TArrayND<double,3>_const_&,Chaos::TArrayFaceND<double,3>_const_&,double,Chaos::TVector<int,3>)>
  ::operator=(&this->MConvectionRule,param_1);
  if (*(longlong *)param_1 != 0) {
    plVar1 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar1 = *(longlong **)&param_1->field_0x28;
    }
                    /* WARNING: Could not recover jumptable at 0x000143e4d022. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// SetProjectionFunction @ 143e4d9a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::TSmokeEvolution<double,3>::SetProjectionFunction
          (TSmokeEvolution<double,3> *this,
          TFunction<void___cdecl(Chaos::TUniformGrid<double,3>_const_&,Chaos::TArrayFaceND<double,3>_&,Chaos::TArrayND<bool,3>_const_&,Chaos::TArrayFaceND<bool,3>_const_&,double)>
          *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_58 = *(longlong *)param_1;
  uStack_30 = (longlong *)0x0;
  if (local_58 != 0) {
    puVar8 = (undefined8 *)&param_1->field_0x10;
    if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
      puVar8 = *(undefined8 **)&param_1->field_0x28;
    }
    (**(code **)*puVar8)(puVar8,&local_48);
  }
  lVar6 = *(longlong *)&this->MProjectionRule;
  uVar7 = *(undefined8 *)&(this->MProjectionRule).field_0x8;
  uVar1 = *(undefined4 *)&(this->MProjectionRule).field_0x10;
  uVar2 = *(undefined4 *)&(this->MProjectionRule).field_0x14;
  uVar3 = *(undefined4 *)&(this->MProjectionRule).field_0x18;
  uVar4 = *(undefined4 *)&(this->MProjectionRule).field_0x1c;
  uVar5 = *(undefined8 *)&(this->MProjectionRule).field_0x20;
  plVar10 = *(longlong **)&(this->MProjectionRule).field_0x28;
  *(longlong *)&this->MProjectionRule = local_58;
  *(undefined8 *)&(this->MProjectionRule).field_0x8 = uStack_50;
  *(undefined4 *)&(this->MProjectionRule).field_0x10 = (undefined4)local_48;
  *(undefined4 *)&(this->MProjectionRule).field_0x14 = local_48._4_4_;
  *(undefined4 *)&(this->MProjectionRule).field_0x18 = uStack_40;
  *(undefined4 *)&(this->MProjectionRule).field_0x1c = uStack_3c;
  *(undefined4 *)&(this->MProjectionRule).field_0x20 = (undefined4)local_38;
  *(undefined4 *)&(this->MProjectionRule).field_0x24 = local_38._4_4_;
  *(undefined4 *)&(this->MProjectionRule).field_0x28 = (undefined4)uStack_30;
  *(undefined4 *)&(this->MProjectionRule).field_0x2c = uStack_30._4_4_;
  local_48._0_4_ = uVar1;
  local_48._4_4_ = uVar2;
  uStack_40 = uVar3;
  uStack_3c = uVar4;
  local_38 = uVar5;
  uStack_30 = plVar10;
  local_58 = lVar6;
  uStack_50 = uVar7;
  if (lVar6 != 0) {
    plVar9 = &local_48;
    if (plVar10 != (longlong *)0x0) {
      plVar9 = plVar10;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  if (*(longlong *)param_1 != 0) {
    plVar10 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar10 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar10 + 0x10))(plVar10);
  }
  return;
}

// Velocity @ 143e62390

TArrayFaceND<double,3> * __thiscall
Chaos::TSmokeEvolution<double,3>::Velocity(TSmokeEvolution<double,3> *this)

{
  return &this->MVelocity;
}

