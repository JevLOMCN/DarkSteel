// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 5

// operator() @ 143a3e4e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`Chaos::FChaosDDParticle::DrawOptimizedShapes'::__l2::<lambda_1>::operator()
          (void *this,FImplicitObject *param_1,TRigidTransform<double,3> *param_2,int param_3,
          int param_4,int param_5)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  undefined8 *puVar5;
  TArray<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *pTVar6;
  ForElementType<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>_> FVar7;
  uint uVar8;
  uint uVar9;
  FShapeInstance *pFVar10;
  undefined1 auStackY_108 [32];
  FConstGenericParticleHandle local_b8 [2];
  double local_a8 [2];
  double local_98 [2];
  double local_88 [2];
  double local_78 [2];
  double local_68 [2];
  double local_58 [2];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_108;
  if ((param_3 == -1) && (lVar1 = *(longlong *)((longlong)this + 8), 0 < *(int *)(lVar1 + 0x28))) {
    puVar5 = *(undefined8 **)(lVar1 + 0x20);
    if (*(undefined8 **)(lVar1 + 0x20) == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)(lVar1 + 0x18);
    }
    pFVar10 = (FShapeInstance *)*puVar5;
  }
  else {
    pTVar6 = Chaos::TGeometryParticleHandleImp<double,3,1>::ShapeInstances
                       (*(TGeometryParticleHandleImp<double,3,1> **)this);
    uVar9 = 0;
    if ((param_3 < 0) || (uVar4 = 1, pTVar6->ArrayNum <= param_3)) {
      uVar4 = uVar9;
    }
    uVar8 = uVar9;
    if (uVar4 != 0) {
      uVar8 = param_3;
    }
    FVar7 = (ForElementType<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>_>
             )Chaos::TGeometryParticleHandleImp<double,3,1>::ShapeInstances
                        (*(TGeometryParticleHandleImp<double,3,1> **)this);
    if ((int)uVar8 < *(int *)((longlong)FVar7 + 0x10)) {
      uVar9 = ~uVar8 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (*(ForElementType<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>_>
          *)((longlong)FVar7 + 8) !=
        (ForElementType<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>_>)
        0x0) {
      FVar7 = *(ForElementType<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>_>
                *)((longlong)FVar7 + 8);
    }
    pFVar10 = *(FShapeInstance **)((longlong)FVar7 + (longlong)(int)uVar8 * 8);
  }
  local_b8[0].Imp.MHandle = *(FGenericParticleHandleImp *)this;
  local_a8[0] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
  local_a8[1] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
  local_98[0] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
  local_98[1] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
  local_88[0] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
  local_88[1] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
  local_78[0] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
  local_78[1] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
  local_68[0] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
  local_68[1] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
  local_58[0] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
  local_58[1] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
  Chaos::FChaosDDParticleShape::Draw
            ((TRigidTransform<double,3> *)local_a8,local_b8,pFVar10,param_1,param_2,false,true,true,
             &FColor::Purple);
  return;
}

// DrawOptimizedShapes @ 143a63a40

bool __cdecl
Chaos::FChaosDDParticle::DrawOptimizedShapes(TGeometryParticleHandleImp<double,3,1> *param_1)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  TGeometryParticleHandleImp<double,3,1> *pTVar6;
  uint uVar7;
  TGeometryParticleHandleImp<double,3,1> *local_28;
  FConvexOptimizer *local_20;
  code *local_18;
  TGeometryParticleHandleImp<double,3,1> **local_10;
  
  pTVar6 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (2 < *(byte *)((longlong)&param_1->_padding_ + 4)) {
    pTVar6 = param_1;
  }
  if (pTVar6 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    lVar2 = pTVar6->_padding_;
    uVar1 = (uint)pTVar6->_padding_;
    uVar7 = 0;
    if ((int)uVar1 < *(int *)(lVar2 + 0x6b8)) {
      uVar7 = ~uVar1 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    local_20 = *(FConvexOptimizer **)(*(longlong *)(lVar2 + 0x6b0) + (longlong)(int)uVar1 * 8);
    if ((local_20 != (FConvexOptimizer *)0x0) && ((local_20->SimplifiedConvexes).ArrayNum != 0)) {
      local_10 = &local_28;
      local_18 = UE::Core::Private::Function::
                 TFunctionRefCaller<`Chaos::FChaosDDParticle::DrawOptimizedShapes'::__l2::<lambda_1>_const_,void,Chaos::FImplicitObject_const_*,Chaos::TRigidTransform<double,3>_const_&,int,int,int>
                 ::Call;
      local_28 = param_1;
      Chaos::Private::FConvexOptimizer::VisitCollisionObjects
                (local_20,(TFunctionRef<void___cdecl(Chaos::FImplicitObject_const_*,Chaos::TRigidTransform<double,3>_const_&,int,int,int)>
                           *)&local_18);
      return true;
    }
  }
  return false;
}

// DrawShapes @ 143a63dc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
Chaos::FChaosDDParticle::DrawShapes
          (TRigidTransform<double,3> *param_1,TGeometryParticleHandleImp<double,3,1> *param_2)

{
  double *pdVar1;
  undefined8 *puVar2;
  double dVar3;
  uint uVar4;
  int iVar5;
  FConvexOptimizer *this;
  longlong lVar6;
  code *pcVar7;
  double dVar8;
  TTransform<double> *pTVar9;
  ForElementType<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>_> FVar10;
  bool bVar11;
  uint uVar12;
  TGeometryParticleHandleImp<double,3,1> *pTVar13;
  ForElementType<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>_> FVar14;
  TMatrix<double> *pTVar15;
  longlong lVar16;
  FChaosDDFrame *pFVar17;
  longlong lVar18;
  longlong lVar19;
  undefined1 auStack_238 [32];
  longlong local_218;
  longlong local_210;
  undefined1 local_208;
  undefined1 local_207 [3];
  int local_204;
  FConstGenericParticleHandle local_200;
  int *local_1f8;
  FChaosDDFrameWriter local_1f0;
  longlong local_1e0;
  TTransform<double> *local_1d8;
  ForElementType<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>_>
  local_1d0;
  TGeometryParticleHandleImp<double,3,1> *local_1c8;
  FConvexOptimizer *local_1c0;
  code *local_1b8;
  TGeometryParticleHandleImp<double,3,1> **local_1b0;
  code *local_1a8;
  FChaosDDFrameWriter **local_1a0;
  FChaosDDFrameWriter *local_198;
  TTransform<double> *local_190;
  TGeometryParticleHandleImp<double,3,1> *local_188;
  longlong local_180;
  undefined1 local_178;
  undefined1 local_177;
  undefined1 local_176;
  FColor *local_170;
  FChaosDDParticleData local_168;
  TVector<double>_u_0 local_158;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined1 local_128;
  TBox<double> local_120;
  TMatrix<double> local_e8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_238;
  pTVar13 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (2 < *(byte *)((longlong)&param_2->_padding_ + 4)) {
    pTVar13 = param_2;
  }
  local_1d8 = (TTransform<double> *)param_1;
  if (pTVar13 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    uVar4 = (uint)pTVar13->_padding_;
    lVar16 = pTVar13->_padding_;
    iVar5 = *(int *)(lVar16 + 0x6b8);
    uVar12 = 0;
    if ((int)uVar4 < iVar5) {
      uVar12 = ~uVar4 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (local_218 = (longlong)(int)uVar4, local_210 = (longlong)iVar5,
       bVar11 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    this = *(FConvexOptimizer **)(*(longlong *)(lVar16 + 0x6b0) + (longlong)(int)uVar4 * 8);
    if ((this != (FConvexOptimizer *)0x0) && ((this->SimplifiedConvexes).ArrayNum != 0)) {
      local_1b0 = &local_1c8;
      local_1b8 = UE::Core::Private::Function::
                  TFunctionRefCaller<`Chaos::FChaosDDParticle::DrawOptimizedShapes'::__l2::<lambda_1>_const_,void,Chaos::FImplicitObject_const_*,Chaos::TRigidTransform<double,3>_const_&,int,int,int>
                  ::Call;
      local_1c8 = param_2;
      local_1c0 = this;
      Chaos::Private::FConvexOptimizer::VisitCollisionObjects
                (this,(TFunctionRef<void___cdecl(Chaos::FImplicitObject_const_*,Chaos::TRigidTransform<double,3>_const_&,int,int,int)>
                       *)&local_1b8);
      local_208 = 0;
      goto LAB_143a63ea2;
    }
  }
  local_208 = 1;
LAB_143a63ea2:
  FVar14 = (ForElementType<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>_>
            )TGeometryParticleHandleImp<double,3,1>::ShapeInstances(param_2);
  local_204 = *(int *)((longlong)FVar14 + 0x10);
  local_1f8 = (int *)((longlong)FVar14 + 0x10);
  if (*(ForElementType<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>_> *)
       ((longlong)FVar14 + 8) !=
      (ForElementType<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>_>)0x0
     ) {
    FVar14 = *(ForElementType<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>_>
               *)((longlong)FVar14 + 8);
  }
  local_1d0 = (ForElementType<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>_>
               )((longlong)FVar14 + (longlong)local_204 * 8);
  do {
    FVar10 = local_1d0;
    if (*local_1f8 != local_204) {
      local_207[0] = 0;
      `TCheckedPointerIterator<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_207);
    }
    if (FVar14 == FVar10) {
      return;
    }
    lVar16 = *(longlong *)FVar14;
    local_200.Imp.MHandle = (FGenericParticleHandleImp)(FGenericParticleHandleImp)param_2;
    if ((param_2 != (TGeometryParticleHandleImp<double,3,1> *)0x0) && (lVar16 != 0)) {
      uVar4 = (uint)param_2->_padding_;
      lVar18 = (longlong)(int)uVar4;
      lVar6 = param_2->_padding_;
      iVar5 = *(int *)(lVar6 + 0x148);
      uVar12 = 0;
      if ((int)uVar4 < iVar5) {
        uVar12 = ~uVar4 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (local_218 = lVar18, local_210 = (longlong)iVar5,
         bVar11 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_1e0 = *(longlong *)(lVar6 + 0x140);
      uVar4 = (uint)param_2->_padding_;
      lVar19 = (longlong)(int)uVar4;
      lVar6 = param_2->_padding_;
      iVar5 = *(int *)(lVar6 + 0x148);
      uVar12 = 0;
      if ((int)uVar4 < iVar5) {
        uVar12 = ~uVar4 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (local_218 = lVar19, local_210 = (longlong)iVar5,
         bVar11 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pTVar9 = local_1d8;
      lVar6 = *(longlong *)(lVar6 + 0x140);
      local_128 = 1;
      pdVar1 = (double *)(lVar6 + lVar19 * 0x30);
      local_158._s_0.X = *pdVar1;
      local_158._s_0.Y = pdVar1[1];
      local_158._s_0.Z = *(double *)(lVar6 + 0x10 + lVar19 * 0x30);
      puVar2 = (undefined8 *)(local_1e0 + 0x18 + lVar18 * 0x30);
      local_140 = *puVar2;
      uStack_138 = puVar2[1];
      local_130 = *(undefined8 *)(local_1e0 + 0x28 + lVar18 * 0x30);
      pTVar15 = UE::Math::TTransform<double>::ToMatrixWithScale(local_1d8,&local_e8);
      UE::Math::TBox<double>::TransformBy((TBox<double> *)&local_158._s_0,&local_120,pTVar15);
      ChaosDD::Private::FChaosDDContext::GetWriter(&local_1f0);
      pFVar17 = local_1f0.Frame.Object;
      if (local_1f0.Frame.Object != (FChaosDDFrame *)0x0) {
        dVar3 = ((local_1f0.Frame.Object)->DrawRegion).W;
        if (dVar3 <= 0.0) {
          bVar11 = true;
        }
        else {
          dVar8 = ComputeSquaredDistanceFromBoxToPoint<double,double>
                            (&local_120.Min,&local_120.Max,
                             &((local_1f0.Frame.Object)->DrawRegion).Center);
          bVar11 = dVar8 < dVar3 * dVar3;
        }
        if (bVar11) {
          FChaosDDParticleData::FChaosDDParticleData(&local_168,&local_200);
          local_198 = &local_1f0;
          local_177 = local_208;
          local_170 = &FColor::Purple;
          local_1a0 = &local_198;
          local_1a8 = UE::Core::Private::Function::
                      TFunctionRefCaller<`Chaos::FChaosDDParticleShape::Draw'::__l2::<lambda_1>,void,Chaos::FImplicitObject_const_*,Chaos::TRigidTransform<double,3>_const_&,int,int,int>
                      ::Call;
          local_190 = pTVar9;
          local_178 = 1;
          local_176 = 1;
          local_188 = param_2;
          local_180 = lVar16;
          FImplicitObject::VisitLeafObjects
                    (*(FImplicitObject **)(lVar16 + 0x10),
                     (TFunctionRef<void___cdecl(Chaos::FImplicitObject_const_*,Chaos::TRigidTransform<double,3>_const_&,int,int,int)>
                      *)&local_1a8);
          if (local_1f0.Frame.Object == (FChaosDDFrame *)0x0) goto LAB_143a64125;
          lVar16 = (local_1f0.Frame.Object)->_padding_;
          pFVar17 = local_1f0.Frame.Object;
        }
        else {
          lVar16 = pFVar17->_padding_;
        }
        (**(code **)(lVar16 + 0x10))(pFVar17);
      }
LAB_143a64125:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1f0.Frame.SharedReferenceCount.ReferenceController);
    }
    FVar14 = (ForElementType<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>_>
              )((longlong)FVar14 + 8);
  } while( true );
}

// DrawShapes @ 143a641a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl Chaos::FChaosDDParticle::DrawShapes(TGeometryParticleHandleImp<double,3,1> *param_1)

{
  undefined1 auStack_98 [32];
  double local_78 [2];
  double local_68 [2];
  double local_58 [2];
  double local_48 [2];
  double local_38 [2];
  double local_28 [2];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_78 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  local_68 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  local_58 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  local_48 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  local_38 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  local_28 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  DrawShapes((TRigidTransform<double,3> *)local_78,param_1);
  return;
}

// DrawShapes @ 143a64230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
Chaos::FChaosDDParticle::DrawShapes(TGeometryParticleHandleImp<double,3,1> *param_1,FColor *param_2)

{
  double *pdVar1;
  undefined8 *puVar2;
  double dVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  code *pcVar8;
  double dVar9;
  ForElementType<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>_> FVar10;
  bool bVar11;
  uint uVar12;
  ForElementType<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>_> FVar13;
  TMatrix<double> *pTVar14;
  longlong lVar15;
  FChaosDDFrame *pFVar16;
  longlong lVar17;
  longlong lVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined1 auStack_278 [32];
  longlong local_258;
  longlong local_250;
  undefined1 local_248 [4];
  int local_244;
  FConstGenericParticleHandle local_240;
  TGeometryParticleHandleImp<double,3,1> *local_238;
  int *local_230;
  FChaosDDFrameWriter local_228;
  FColor *local_218;
  ForElementType<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>_>
  local_210;
  code *local_208;
  FChaosDDFrameWriter **local_200;
  FChaosDDFrameWriter *local_1f8;
  TTransform<double> *local_1f0;
  TGeometryParticleHandleImp<double,3,1> *local_1e8;
  longlong local_1e0;
  undefined2 local_1d8;
  undefined1 local_1d6;
  FColor *local_1d0;
  FChaosDDParticleData local_1c8;
  TVector<double>_u_0 local_1b8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined1 local_188;
  TTransform<double> local_178;
  TBox<double> local_118;
  TMatrix<double> local_d8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_278;
  local_238 = param_1;
  local_218 = param_2;
  FVar13 = (ForElementType<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>_>
            )TGeometryParticleHandleImp<double,3,1>::ShapeInstances(param_1);
  local_244 = *(int *)((longlong)FVar13 + 0x10);
  local_230 = (int *)((longlong)FVar13 + 0x10);
  if (*(ForElementType<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>_> *)
       ((longlong)FVar13 + 8) !=
      (ForElementType<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>_>)0x0
     ) {
    FVar13 = *(ForElementType<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>_>
               *)((longlong)FVar13 + 8);
  }
  uVar19 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
  uVar20 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
  uVar21 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
  uVar22 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
  uVar23 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
  uVar24 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
  uVar25 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
  uVar26 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
  uVar27 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
  uVar28 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
  uVar29 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._0_4_;
  uVar30 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._4_4_;
  uVar31 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
  uVar32 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
  uVar33 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
  uVar34 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
  uVar35 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
  uVar36 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
  uVar37 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
  uVar38 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
  uVar39 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
  uVar40 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
  uVar41 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
  uVar42 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
  local_210 = (ForElementType<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>_>
               )((longlong)FVar13 + (longlong)local_244 * 8);
  do {
    FVar10 = local_210;
    if (*local_230 != local_244) {
      local_248[0] = 0;
      `TCheckedPointerIterator<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_248);
      uVar19 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
      uVar20 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
      uVar21 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
      uVar22 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
      uVar23 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
      uVar24 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
      uVar25 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
      uVar26 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
      uVar27 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
      uVar28 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
      uVar29 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._0_4_;
      uVar30 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._4_4_;
      uVar31 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
      uVar32 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
      uVar33 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
      uVar34 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
      uVar35 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
      uVar36 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
      uVar37 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
      uVar38 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
      uVar39 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
      uVar40 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
      uVar41 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
      uVar42 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
    }
    if (FVar13 == FVar10) {
      return;
    }
    lVar15 = *(longlong *)FVar13;
    local_240.Imp.MHandle = (FGenericParticleHandleImp)(FGenericParticleHandleImp)param_1;
    local_178.Rotation.XY.m128d_f64[0]._0_4_ = uVar39;
    local_178.Rotation.XY.m128d_f64[0]._4_4_ = uVar40;
    local_178.Rotation.XY.m128d_f64[1]._0_4_ = uVar41;
    local_178.Rotation.XY.m128d_f64[1]._4_4_ = uVar42;
    local_178.Rotation.ZW.m128d_f64[0]._0_4_ = uVar35;
    local_178.Rotation.ZW.m128d_f64[0]._4_4_ = uVar36;
    local_178.Rotation.ZW.m128d_f64[1]._0_4_ = uVar37;
    local_178.Rotation.ZW.m128d_f64[1]._4_4_ = uVar38;
    local_178.Translation.XY.m128d_f64[0]._0_4_ = uVar31;
    local_178.Translation.XY.m128d_f64[0]._4_4_ = uVar32;
    local_178.Translation.XY.m128d_f64[1]._0_4_ = uVar33;
    local_178.Translation.XY.m128d_f64[1]._4_4_ = uVar34;
    local_178.Translation.ZW.m128d_f64[0]._0_4_ = uVar27;
    local_178.Translation.ZW.m128d_f64[0]._4_4_ = uVar28;
    local_178.Translation.ZW.m128d_f64[1]._0_4_ = uVar29;
    local_178.Translation.ZW.m128d_f64[1]._4_4_ = uVar30;
    local_178.Scale3D.XY.m128d_f64[0]._0_4_ = uVar23;
    local_178.Scale3D.XY.m128d_f64[0]._4_4_ = uVar24;
    local_178.Scale3D.XY.m128d_f64[1]._0_4_ = uVar25;
    local_178.Scale3D.XY.m128d_f64[1]._4_4_ = uVar26;
    local_178.Scale3D.ZW.m128d_f64[0]._0_4_ = uVar19;
    local_178.Scale3D.ZW.m128d_f64[0]._4_4_ = uVar20;
    local_178.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar21;
    local_178.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar22;
    if ((param_1 != (TGeometryParticleHandleImp<double,3,1> *)0x0) && (lVar15 != 0)) {
      uVar4 = (uint)param_1->_padding_;
      lVar17 = (longlong)(int)uVar4;
      lVar6 = param_1->_padding_;
      iVar5 = *(int *)(lVar6 + 0x148);
      uVar12 = 0;
      if ((int)uVar4 < iVar5) {
        uVar12 = ~uVar4 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (local_258 = lVar17, local_250 = (longlong)iVar5,
         bVar11 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar6 = *(longlong *)(lVar6 + 0x140);
      uVar4 = (uint)param_1->_padding_;
      lVar18 = (longlong)(int)uVar4;
      lVar7 = param_1->_padding_;
      iVar5 = *(int *)(lVar7 + 0x148);
      uVar12 = 0;
      if ((int)uVar4 < iVar5) {
        uVar12 = ~uVar4 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (local_258 = lVar18, local_250 = (longlong)iVar5,
         bVar11 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar7 = *(longlong *)(lVar7 + 0x140);
      local_188 = 1;
      pdVar1 = (double *)(lVar7 + lVar18 * 0x30);
      local_1b8._s_0.X = *pdVar1;
      local_1b8._s_0.Y = pdVar1[1];
      local_1b8._s_0.Z = *(double *)(lVar7 + 0x10 + lVar18 * 0x30);
      puVar2 = (undefined8 *)(lVar6 + 0x18 + lVar17 * 0x30);
      local_1a0 = *puVar2;
      uStack_198 = puVar2[1];
      local_190 = *(undefined8 *)(lVar6 + 0x28 + lVar17 * 0x30);
      pTVar14 = UE::Math::TTransform<double>::ToMatrixWithScale(&local_178,&local_d8);
      UE::Math::TBox<double>::TransformBy((TBox<double> *)&local_1b8._s_0,&local_118,pTVar14);
      ChaosDD::Private::FChaosDDContext::GetWriter(&local_228);
      pFVar16 = local_228.Frame.Object;
      if (local_228.Frame.Object != (FChaosDDFrame *)0x0) {
        dVar3 = ((local_228.Frame.Object)->DrawRegion).W;
        if (dVar3 <= 0.0) {
          bVar11 = true;
        }
        else {
          dVar9 = ComputeSquaredDistanceFromBoxToPoint<double,double>
                            (&local_118.Min,&local_118.Max,
                             &((local_228.Frame.Object)->DrawRegion).Center);
          bVar11 = dVar9 < dVar3 * dVar3;
        }
        if (bVar11) {
          FChaosDDParticleData::FChaosDDParticleData(&local_1c8,&local_240);
          local_1f8 = &local_228;
          local_1d0 = local_218;
          local_200 = &local_1f8;
          local_208 = UE::Core::Private::Function::
                      TFunctionRefCaller<`Chaos::FChaosDDParticleShape::Draw'::__l2::<lambda_1>,void,Chaos::FImplicitObject_const_*,Chaos::TRigidTransform<double,3>_const_&,int,int,int>
                      ::Call;
          local_1d8 = 1;
          local_1d6 = 0;
          local_1f0 = &local_178;
          local_1e8 = param_1;
          local_1e0 = lVar15;
          FImplicitObject::VisitLeafObjects
                    (*(FImplicitObject **)(lVar15 + 0x10),
                     (TFunctionRef<void___cdecl(Chaos::FImplicitObject_const_*,Chaos::TRigidTransform<double,3>_const_&,int,int,int)>
                      *)&local_208);
          if (local_228.Frame.Object == (FChaosDDFrame *)0x0) goto LAB_143a6454a;
          lVar15 = (local_228.Frame.Object)->_padding_;
          pFVar16 = local_228.Frame.Object;
        }
        else {
          lVar15 = pFVar16->_padding_;
        }
        (**(code **)(lVar15 + 0x10))(pFVar16);
      }
LAB_143a6454a:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_228.Frame.SharedReferenceCount.ReferenceController);
      uVar39 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
      uVar40 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
      uVar41 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
      uVar42 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
      uVar35 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
      uVar36 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
      uVar37 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
      uVar38 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
      uVar31 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
      uVar32 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
      uVar33 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
      uVar34 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
      uVar27 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
      uVar28 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
      uVar29 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._0_4_;
      uVar30 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._4_4_;
      uVar23 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
      uVar24 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
      uVar25 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
      uVar26 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
      uVar19 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
      uVar20 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
      uVar21 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
      uVar22 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
      param_1 = local_238;
    }
    FVar13 = (ForElementType<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>_>
              )((longlong)FVar13 + 8);
  } while( true );
}

