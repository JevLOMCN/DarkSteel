// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 18

// StaticClass @ 149670f70

UClass * __cdecl UGizmoElementTriangleList::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoElementTriangleList.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoElementTriangleList",
               &Z_Registration_Info_UClass_UGizmoElementTriangleList.InnerSingleton,
               StaticRegisterNativesUGizmoElementTriangleList,0x1b8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UGizmoElementTriangleList>,
               InternalVTableHelperCtorCaller<UGizmoElementTriangleList>,local_res8,
               UGizmoElementBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoElementTriangleList.InnerSingleton;
}

// UGizmoElementTriangleList @ 149685430

UGizmoElementTriangleList * __thiscall
UGizmoElementTriangleList::UGizmoElementTriangleList
          (UGizmoElementTriangleList *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UGizmoElementBase::UGizmoElementBase((UGizmoElementBase *)this,param_1);
  this->_padding_ = (longlong)&___7UGizmoElementTriangleList__6B_;
  (this->Vertices).ArrayNum = 0;
  (this->Vertices).ArrayMax = 0;
  (this->Vertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Base).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Base).field0_0x0._s_0.Y = (double)uVar1;
  (this->Base).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->UpDirection).field0_0x0._s_0.Z = 1.0;
  (this->SideDirection).field0_0x0._s_0.Y = 1.0;
  (this->UpDirection).field0_0x0._s_0.X = 0.0;
  (this->UpDirection).field0_0x0._s_0.Y = 0.0;
  (this->SideDirection).field0_0x0._s_0.X = 0.0;
  (this->SideDirection).field0_0x0._s_0.Z = 0.0;
  (this->ProjectedVertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ProjectedVertices).ArrayNum = 0;
  (this->ProjectedVertices).ArrayMax = 0;
  return this;
}

// UGizmoElementTriangleList @ 1496854d0

UGizmoElementTriangleList * __thiscall
UGizmoElementTriangleList::UGizmoElementTriangleList
          (UGizmoElementTriangleList *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UGizmoElementBase::UGizmoElementBase((UGizmoElementBase *)this,param_1);
  this->_padding_ = (longlong)&___7UGizmoElementTriangleList__6B_;
  (this->Vertices).ArrayNum = 0;
  (this->Vertices).ArrayMax = 0;
  (this->Vertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Base).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Base).field0_0x0._s_0.Y = (double)uVar1;
  (this->Base).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->UpDirection).field0_0x0._s_0.Z = 1.0;
  (this->SideDirection).field0_0x0._s_0.Y = 1.0;
  (this->UpDirection).field0_0x0._s_0.X = 0.0;
  (this->UpDirection).field0_0x0._s_0.Y = 0.0;
  (this->SideDirection).field0_0x0._s_0.X = 0.0;
  (this->SideDirection).field0_0x0._s_0.Z = 0.0;
  (this->ProjectedVertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ProjectedVertices).ArrayNum = 0;
  (this->ProjectedVertices).ArrayMax = 0;
  return this;
}

// ~UGizmoElementTriangleList @ 149689cc0

void __thiscall
UGizmoElementTriangleList::~UGizmoElementTriangleList(UGizmoElementTriangleList *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UGizmoElementTriangleList__6B_;
  pFVar1 = (this->ProjectedVertices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Vertices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UGizmoElementBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// ComputeProjectedVertices @ 149699330

void __thiscall
UGizmoElementTriangleList::ComputeProjectedVertices
          (UGizmoElementTriangleList *this,TTransform<double> *param_1,bool param_2)

{
  int *piVar1;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  double dVar3;
  double dVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [12];
  bool bVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar25;
  undefined1 auVar24 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined4 uVar40;
  double dVar41;
  double dVar42;
  undefined1 auVar43 [16];
  double dVar47;
  double dVar48;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  double dVar49;
  double dVar53;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  double dVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined4 uVar57;
  undefined4 uVar58;
  double local_118;
  double dStack_110;
  double local_108;
  double local_100;
  double dStack_f8;
  double local_f0;
  undefined1 local_e8 [16];
  double local_d8;
  undefined1 local_c8 [16];
  double local_b8;
  double local_a8;
  double dStack_a0;
  double local_98;
  
  auVar23 = *(undefined1 (*) [16])(param_1->Rotation).ZW.m128d_f64;
  auVar17 = *(undefined1 (*) [16])&(this->UpDirection).field0_0x0;
  auVar16 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
  dVar8 = (param_1->Rotation).ZW.m128d_f64[1];
  auVar21 = blendpd(auVar16,auVar23,2);
  dVar3 = (this->UpDirection).field0_0x0._s_0.Z;
  dVar53 = auVar17._8_8_;
  dVar33 = auVar23._0_8_;
  auVar50._0_8_ = dVar53 * auVar16._0_8_ - auVar16._8_8_ * auVar17._0_8_;
  auVar50._8_8_ = dVar3 * auVar16._8_8_ - dVar33 * dVar53;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = dVar3;
  auVar16 = blendpd(auVar17,auVar16,2);
  dVar9 = auVar23._8_8_;
  auVar43._8_4_ = SUB84(auVar50._8_8_,0);
  auVar43._0_8_ = auVar50._0_8_;
  auVar43._12_4_ = (int)((ulonglong)auVar50._8_8_ >> 0x20);
  auVar22._0_8_ = auVar16._0_8_ * dVar33 - auVar21._0_8_ * dVar3;
  auVar22._8_8_ = auVar16._8_8_ * dVar9 - auVar21._8_8_ * 0.0;
  auVar16 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
  auVar21 = blendpd(auVar50,auVar22,2);
  dVar41 = auVar43._8_8_ + auVar43._8_8_;
  dVar47 = auVar22._0_8_ + auVar22._0_8_;
  auVar51._0_8_ = auVar21._0_8_ + auVar21._0_8_;
  auVar51._8_8_ = auVar21._8_8_ + auVar21._8_8_;
  auVar34._8_4_ = SUB84(dVar47,0);
  auVar34._0_8_ = dVar41;
  uVar40 = (undefined4)((ulonglong)dVar47 >> 0x20);
  auVar34._12_4_ = uVar40;
  auVar26._8_4_ = SUB84(dVar47,0);
  auVar26._0_8_ = dVar41;
  auVar26._12_4_ = uVar40;
  auVar27 = blendpd(auVar26,auVar51,2);
  auVar35._0_8_ = auVar34._8_8_ * auVar16._0_8_ - auVar16._8_8_ * dVar41;
  auVar35._8_8_ = auVar51._0_8_ * auVar16._8_8_ - dVar33 * dVar47;
  auVar22 = blendpd(auVar16,auVar23,2);
  auVar16 = *(undefined1 (*) [16])&(this->SideDirection).field0_0x0;
  auVar21._8_4_ = SUB84(auVar35._8_8_,0);
  auVar21._0_8_ = auVar35._0_8_;
  auVar21._12_4_ = (int)((ulonglong)auVar35._8_8_ >> 0x20);
  dVar4 = (this->SideDirection).field0_0x0._s_0.Z;
  dVar49 = auVar16._8_8_;
  auVar28._0_8_ = auVar27._0_8_ * dVar33 - auVar22._0_8_ * auVar51._0_8_;
  auVar28._8_8_ = auVar27._8_8_ * dVar9 - auVar22._8_8_ * auVar51._8_8_;
  dVar42 = dVar41 * dVar8 + auVar17._0_8_ + auVar21._8_8_;
  dVar48 = dVar47 * dVar8 + dVar53 + auVar28._0_8_;
  auVar17 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
  auVar22 = blendpd(auVar17,auVar23,2);
  auVar55._0_8_ = dVar49 * auVar17._0_8_ - auVar17._8_8_ * auVar16._0_8_;
  auVar55._8_8_ = dVar4 * auVar17._8_8_ - dVar33 * dVar49;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = dVar4;
  auVar17 = blendpd(auVar16,auVar17,2);
  auVar21 = blendpd(auVar35,auVar28,2);
  auVar27._0_8_ = auVar17._0_8_ * dVar33 - auVar22._0_8_ * dVar4;
  auVar27._8_8_ = auVar17._8_8_ * dVar9 - auVar22._8_8_ * 0.0;
  dStack_a0 = dVar48;
  local_a8 = dVar42;
  auVar17 = blendpd(auVar55,auVar27,2);
  dVar41 = auVar55._8_8_ + auVar55._8_8_;
  dVar47 = auVar27._0_8_ + auVar27._0_8_;
  uVar40 = (undefined4)((ulonglong)dVar47 >> 0x20);
  auVar56._0_8_ = auVar17._0_8_ + auVar17._0_8_;
  auVar56._8_8_ = auVar17._8_8_ + auVar17._8_8_;
  local_98 = auVar51._0_8_ * dVar8 + dVar3 + auVar21._0_8_;
  auVar17 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
  auVar36._8_4_ = SUB84(dVar47,0);
  auVar36._0_8_ = dVar41;
  auVar36._12_4_ = uVar40;
  auVar29._8_4_ = SUB84(dVar47,0);
  auVar29._0_8_ = dVar41;
  auVar29._12_4_ = uVar40;
  auVar23 = blendpd(auVar17,auVar23,2);
  auVar37._0_8_ = auVar36._8_8_ * auVar17._0_8_ - auVar17._8_8_ * dVar41;
  auVar37._8_8_ = auVar56._0_8_ * auVar17._8_8_ - dVar33 * dVar47;
  dVar25 = auVar23._8_8_ * auVar56._8_8_;
  auVar17 = blendpd(auVar29,auVar56,2);
  auVar30._0_8_ = auVar17._0_8_ * dVar33 - auVar23._0_8_ * auVar56._0_8_;
  auVar30._8_8_ = auVar17._8_8_ * dVar9 - dVar25;
  dVar53 = (param_1->Rotation).ZW.m128d_f64[1];
  auVar23._8_4_ = SUB84(auVar37._8_8_,0);
  auVar23._0_8_ = auVar37._0_8_;
  auVar23._12_4_ = (int)((ulonglong)auVar37._8_8_ >> 0x20);
  auVar17 = blendpd(auVar37,auVar30,2);
  dVar8 = dVar41 * dVar9 + auVar16._0_8_ + auVar23._8_8_;
  dVar3 = dVar47 * dVar9 + dVar49 + auVar30._0_8_;
  uVar57 = SUB84(dVar3,0);
  uVar58 = (undefined4)((ulonglong)dVar3 >> 0x20);
  dVar41 = (this->Base).field0_0x0._s_0.X * (param_1->Scale3D).XY.m128d_f64[0];
  dVar47 = (this->Base).field0_0x0._s_0.Y * (param_1->Scale3D).XY.m128d_f64[1];
  uVar40 = (undefined4)((ulonglong)dVar47 >> 0x20);
  local_b8 = auVar56._0_8_ * dVar9 + dVar4 + auVar17._0_8_;
  auVar10._4_8_ = dVar25;
  auVar10._0_4_ = (int)((ulonglong)dVar8 >> 0x20);
  auVar24._0_8_ = auVar10._0_8_ << 0x20;
  auVar24._8_4_ = uVar57;
  auVar24._12_4_ = uVar58;
  dVar25 = local_b8 * dVar48;
  dVar9 = local_98 * auVar24._8_8_;
  dVar49 = local_98 * dVar8;
  auVar23 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
  dVar54 = local_b8 * dVar42;
  auVar44._8_4_ = SUB84(dVar47,0);
  auVar44._0_8_ = dVar41;
  auVar44._12_4_ = uVar40;
  local_c8._8_4_ = uVar57;
  local_c8._0_8_ = dVar8;
  local_c8._12_4_ = uVar58;
  auVar17 = *(undefined1 (*) [16])(param_1->Rotation).ZW.m128d_f64;
  auVar52._0_8_ = (this->Base).field0_0x0._s_0.Z * (param_1->Scale3D).ZW.m128d_f64[0];
  auVar52._8_8_ = (param_1->Scale3D).ZW.m128d_f64[1] * 0.0;
  dVar3 = auVar17._0_8_;
  auVar16 = blendpd(auVar23,auVar17,2);
  auVar45._0_8_ = auVar44._8_8_ * auVar23._0_8_ - auVar23._8_8_ * dVar41;
  auVar45._8_8_ = auVar52._0_8_ * auVar23._8_8_ - dVar3 * dVar47;
  auVar18._8_4_ = SUB84(dVar47,0);
  auVar18._0_8_ = dVar41;
  auVar18._12_4_ = uVar40;
  auVar23 = blendpd(auVar18,auVar52,2);
  auVar19._0_8_ = auVar23._0_8_ * dVar3 - auVar16._0_8_ * auVar52._0_8_;
  auVar19._8_8_ = auVar23._8_8_ * auVar17._8_8_ - auVar16._8_8_ * auVar52._8_8_;
  auVar23 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
  auVar16 = blendpd(auVar45,auVar19,2);
  dVar4 = auVar45._8_8_ + auVar45._8_8_;
  dVar33 = auVar19._0_8_ + auVar19._0_8_;
  uVar40 = (undefined4)((ulonglong)dVar33 >> 0x20);
  auVar46._0_8_ = auVar16._0_8_ + auVar16._0_8_;
  auVar46._8_8_ = auVar16._8_8_ + auVar16._8_8_;
  auVar38._8_4_ = SUB84(dVar33,0);
  auVar38._0_8_ = dVar4;
  auVar38._12_4_ = uVar40;
  auVar31._8_4_ = SUB84(dVar33,0);
  auVar31._0_8_ = dVar4;
  auVar31._12_4_ = uVar40;
  auVar22 = blendpd(auVar31,auVar46,2);
  auVar16 = blendpd(auVar23,auVar17,2);
  auVar39._0_8_ = auVar38._8_8_ * auVar23._0_8_ - auVar23._8_8_ * dVar4;
  auVar39._8_8_ = auVar46._0_8_ * auVar23._8_8_ - dVar3 * dVar33;
  local_f0 = (param_1->Scale3D).ZW.m128d_f64[0];
  pTVar2 = &this->ProjectedVertices;
  piVar1 = &(this->ProjectedVertices).ArrayMax;
  auVar20._8_4_ = SUB84(auVar39._8_8_,0);
  auVar20._0_8_ = auVar39._0_8_;
  auVar20._12_4_ = (int)((ulonglong)auVar39._8_8_ >> 0x20);
  auVar32._0_8_ = auVar22._0_8_ * dVar3 - auVar16._0_8_ * auVar46._0_8_;
  auVar32._8_8_ = auVar22._8_8_ * auVar17._8_8_ - auVar16._8_8_ * auVar46._8_8_;
  local_100 = (param_1->Scale3D).XY.m128d_f64[0];
  dStack_f8 = (param_1->Scale3D).XY.m128d_f64[1];
  dVar3 = dVar33 * dVar53 + dVar47 + auVar32._0_8_ + (param_1->Translation).XY.m128d_f64[1];
  auVar23 = blendpd(auVar39,auVar32,2);
  local_e8._8_4_ = SUB84(dVar3,0);
  local_e8._0_8_ = dVar4 * dVar53 + dVar41 + auVar20._8_8_ + (param_1->Translation).XY.m128d_f64[0];
  local_e8._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  local_d8 = auVar46._0_8_ * dVar53 + auVar52._0_8_ + auVar23._0_8_ +
             (param_1->Translation).ZW.m128d_f64[0];
  (this->ProjectedVertices).ArrayNum = 0;
  if ((this->ProjectedVertices).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  uVar15 = (this->Vertices).ArrayNum;
  if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
  }
  if (*piVar1 < (int)uVar15) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar15,&pTVar2->AllocatorInstance,(this->ProjectedVertices).ArrayNum,piVar1);
  }
  uVar15 = 0;
  if (0 < (this->Vertices).ArrayNum) {
    lVar14 = 0;
    do {
      uVar12 = 0;
      if ((int)uVar15 < (this->Vertices).ArrayNum) {
        uVar12 = ~uVar15 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar5 = (this->Vertices).AllocatorInstance.Data;
      dVar33 = local_100 * *(double *)(pFVar5 + lVar14);
      pFVar6 = (pTVar2->AllocatorInstance).Data;
      dVar3 = dStack_f8 * *(double *)(pFVar5 + lVar14 + 8);
      dVar4 = local_f0 * *(double *)(pFVar5 + lVar14 + 0x10);
      local_118 = (dVar9 - dVar25) * dVar33 + (double)local_e8._0_8_ +
                  dVar3 * (double)local_c8._0_8_ + dVar4 * local_a8;
      dStack_110 = (dVar54 - dVar49) * dVar33 + (double)local_e8._8_8_ +
                   dVar3 * (double)local_c8._8_8_ + dVar4 * dStack_a0;
      local_108 = (dVar8 * dVar48 - auVar24._8_8_ * dVar42) * dVar33 + local_d8 + dVar3 * local_b8 +
                  dVar4 * local_98;
      if (((pFVar6 <= (FScriptContainerElement *)&local_118) &&
          ((FScriptContainerElement *)&local_118 < pFVar6 + (longlong)*piVar1 * 0x18)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar13 = (this->ProjectedVertices).ArrayNum;
      if (iVar13 == *piVar1) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&pTVar2->AllocatorInstance,piVar1);
      }
      uVar15 = uVar15 + 1;
      (this->ProjectedVertices).ArrayNum = iVar13 + 1;
      lVar14 = lVar14 + 0x18;
      pFVar6 = (pTVar2->AllocatorInstance).Data;
      pFVar5 = pFVar6 + (longlong)iVar13 * 0x18;
      *(double *)pFVar5 = local_118;
      *(double *)(pFVar5 + 8) = dStack_110;
      *(double *)(pFVar6 + (longlong)iVar13 * 0x18 + 0x10) = local_108;
    } while ((int)uVar15 < (this->Vertices).ArrayNum);
  }
  return;
}

// GetBase @ 1496a0450

TVector<double> * __thiscall
UGizmoElementTriangleList::GetBase
          (UGizmoElementTriangleList *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (this->Base).field0_0x0._s_0.Y;
  dVar1 = (this->Base).field0_0x0._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->Base).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1496a5890

UClass * __cdecl UGizmoElementTriangleList::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoElementTriangleList.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoElementTriangleList",
               &Z_Registration_Info_UClass_UGizmoElementTriangleList.InnerSingleton,
               StaticRegisterNativesUGizmoElementTriangleList,0x1b8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UGizmoElementTriangleList>,
               InternalVTableHelperCtorCaller<UGizmoElementTriangleList>,local_res8,
               UGizmoElementBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoElementTriangleList.InnerSingleton;
}

// GetSideDirection @ 1496a7f70

TVector<double> * __thiscall
UGizmoElementTriangleList::GetSideDirection
          (UGizmoElementTriangleList *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (this->SideDirection).field0_0x0._s_0.Y;
  dVar1 = (this->SideDirection).field0_0x0._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->SideDirection).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// GetUpDirection @ 1496a93b0

TVector<double> * __thiscall
UGizmoElementTriangleList::GetUpDirection
          (UGizmoElementTriangleList *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (this->UpDirection).field0_0x0._s_0.Y;
  dVar1 = (this->UpDirection).field0_0x0._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->UpDirection).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// GetVertices @ 1496a97c0

TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> * __thiscall
UGizmoElementTriangleList::GetVertices(UGizmoElementTriangleList *this)

{
  return &this->Vertices;
}

// Intersect @ 1496ace50

bool __cdecl
UGizmoElementTriangleList::Intersect
          (TRay<double> *param_1,TVector<double> *param_2,TVector<double> *param_3,
          TVector<double> *param_4,double param_5,double *param_6)

{
  double dVar1;
  undefined8 uVar2;
  double dVar3;
  undefined8 uVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  double dVar11;
  double dVar12;
  TVector<double> local_158;
  TVector<double>_u_0 local_140;
  TVector<double>_u_0 local_128;
  TVector<double>_u_0 local_110;
  TVector<double>_u_0 local_f8;
  TVector<double>_u_0 local_e0;
  TPlane<double> local_c8 [6];
  
  dVar12 = (param_2->field0_0x0)._s_0.X;
  dVar3 = ((param_2->field0_0x0)._s_0.Y + (param_3->field0_0x0)._s_0.Y +
          (param_4->field0_0x0)._s_0.Y) * __real_3fd5555555555555;
  dVar1 = (dVar12 + (param_3->field0_0x0)._s_0.X + (param_4->field0_0x0)._s_0.X) *
          __real_3fd5555555555555;
  dVar5 = ((param_2->field0_0x0)._s_0.Z + (param_3->field0_0x0)._s_0.Z +
          (param_4->field0_0x0)._s_0.Z) * __real_3fd5555555555555;
  uVar7 = (param_2->field0_0x0)._s_0.Y - dVar3;
  uVar9 = dVar12 - dVar1;
  uVar8 = (param_2->field0_0x0)._s_0.Z - dVar5;
  dVar11 = (double)uVar7 * (double)uVar7 + (double)uVar9 * (double)uVar9 +
           (double)uVar8 * (double)uVar8;
  if (dVar11 != __real_3ff0000000000000) {
    if (__real_3e45798ee0000000 <= dVar11) {
      dVar11 = __real_3ff0000000000000 / SQRT(dVar11);
      uVar7 = (double)uVar7 * dVar11;
      uVar8 = (double)uVar8 * dVar11;
      uVar9 = (double)uVar9 * dVar11;
    }
    else {
      local_158.field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    }
  }
  local_f8._s_0.X = (double)uVar9 * param_5 + dVar12;
  local_f8._s_0.Y = (double)uVar7 * param_5 + (param_2->field0_0x0)._s_0.Y;
  uVar9 = (param_3->field0_0x0)._s_0.X - dVar1;
  local_f8._s_0.Z = (double)uVar8 * param_5 + (param_2->field0_0x0)._s_0.Z;
  uVar7 = (param_3->field0_0x0)._s_0.Y - dVar3;
  uVar8 = (param_3->field0_0x0)._s_0.Z - dVar5;
  dVar12 = (double)uVar7 * (double)uVar7 + (double)uVar9 * (double)uVar9 +
           (double)uVar8 * (double)uVar8;
  if (dVar12 != __real_3ff0000000000000) {
    if (__real_3e45798ee0000000 <= dVar12) {
      dVar12 = __real_3ff0000000000000 / SQRT(dVar12);
      uVar7 = (double)uVar7 * dVar12;
      uVar8 = (double)uVar8 * dVar12;
      uVar9 = (double)uVar9 * dVar12;
    }
    else {
      local_158.field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    }
  }
  uVar6 = (param_4->field0_0x0)._s_0.X - dVar1;
  uVar2 = (param_4->field0_0x0)._s_0.Y - dVar3;
  uVar4 = (param_4->field0_0x0)._s_0.Z - dVar5;
  local_110._s_0.X = (double)uVar9 * param_5 + (param_3->field0_0x0)._s_0.X;
  local_110._s_0.Y = (double)uVar7 * param_5 + (param_3->field0_0x0)._s_0.Y;
  local_110._s_0.Z = (double)uVar8 * param_5 + (param_3->field0_0x0)._s_0.Z;
  dVar12 = (double)uVar2 * (double)uVar2 + (double)uVar6 * (double)uVar6 +
           (double)uVar4 * (double)uVar4;
  if (dVar12 != __real_3ff0000000000000) {
    if (__real_3e45798ee0000000 <= dVar12) {
      dVar12 = __real_3ff0000000000000 / SQRT(dVar12);
      uVar2 = (double)uVar2 * dVar12;
      uVar4 = (double)uVar4 * dVar12;
      uVar6 = (double)uVar6 * dVar12;
    }
    else {
      local_158.field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    }
  }
  local_128._s_0.X = (double)uVar6 * param_5 + (param_4->field0_0x0)._s_0.X;
  local_128._s_0.Y = (double)uVar2 * param_5 + (param_4->field0_0x0)._s_0.Y;
  local_128._s_0.Z = (double)uVar4 * param_5 + (param_4->field0_0x0)._s_0.Z;
  local_c8[0]._padding_ =
       (longlong)
       ((local_110._s_0.Z - local_128._s_0.Z) * (local_f8._s_0.Y - local_110._s_0.Y) -
       (local_110._s_0.Y - local_128._s_0.Y) * (local_f8._s_0.Z - local_110._s_0.Z));
  local_c8[0]._padding_ =
       (longlong)
       ((local_110._s_0.X - local_128._s_0.X) * (local_f8._s_0.Z - local_110._s_0.Z) -
       (local_110._s_0.Z - local_128._s_0.Z) * (local_f8._s_0.X - local_110._s_0.X));
  local_c8[0]._padding_ =
       (longlong)
       ((local_110._s_0.Y - local_128._s_0.Y) * (local_f8._s_0.X - local_110._s_0.X) -
       (local_110._s_0.X - local_128._s_0.X) * (local_f8._s_0.Y - local_110._s_0.Y));
  local_c8[0].W =
       (double)local_c8[0]._padding_ * local_f8._s_0.Y +
       (double)local_c8[0]._padding_ * local_f8._s_0.X +
       (double)local_c8[0]._padding_ * local_f8._s_0.Z;
  local_140._s_0.X =
       (param_1->Direction).field0_0x0._s_0.X * __real_40c3880000000000 +
       (param_1->Origin).field0_0x0._s_0.X;
  local_140._s_0.Z =
       (param_1->Direction).field0_0x0._s_0.Z * __real_40c3880000000000 +
       (param_1->Origin).field0_0x0._s_0.Z;
  local_140._s_0.Y =
       (param_1->Direction).field0_0x0._s_0.Y * __real_40c3880000000000 +
       (param_1->Origin).field0_0x0._s_0.Y;
  bVar10 = FMath::SegmentPlaneIntersection
                     (&param_1->Origin,(TVector<double> *)&local_140._s_0,local_c8,&local_158);
  if ((((bVar10) &&
       (FMath::ComputeBaryCentric2D
                  ((TVector<double> *)&local_e0._s_0,&local_158,(TVector<double> *)&local_f8._s_0,
                   (TVector<double> *)&local_110._s_0,(TVector<double> *)&local_128._s_0),
       0.0 < local_e0._s_0.X)) && (0.0 < local_e0._s_0.Y)) && (0.0 < local_e0._s_0.Z)) {
    *param_6 = 0.0;
    return true;
  }
  return false;
}

// LineTrace @ 1496b1d50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

FInputRayHit * __thiscall
UGizmoElementTriangleList::LineTrace
          (UGizmoElementTriangleList *this,FInputRayHit *__return_storage_ptr__,
          UGizmoViewContext *param_1,FLineTraceTraversalState *param_2,TVector<double> *param_3,
          TVector<double> *param_4,FLineTraceOutput *param_5)

{
  float fVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  FInputRayHit *pFVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auStackY_138 [32];
  double local_108;
  TVector<double>_u_0 local_100;
  TVector<double>_u_0 local_e8;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_138;
  local_c8 = (param_2->LocalToWorldTransform).Rotation.XY.m128d_f64[0];
  dStack_c0 = (param_2->LocalToWorldTransform).Rotation.XY.m128d_f64[1];
  local_b8 = (param_2->LocalToWorldTransform).Rotation.ZW.m128d_f64[0];
  dStack_b0 = (param_2->LocalToWorldTransform).Rotation.ZW.m128d_f64[1];
  local_a8 = (param_2->LocalToWorldTransform).Translation.XY.m128d_f64[0];
  dStack_a0 = (param_2->LocalToWorldTransform).Translation.XY.m128d_f64[1];
  local_88 = (param_2->LocalToWorldTransform).Scale3D.XY.m128d_f64[0];
  dStack_80 = (param_2->LocalToWorldTransform).Scale3D.XY.m128d_f64[1];
  local_98 = (param_2->LocalToWorldTransform).Translation.ZW.m128d_f64[0];
  dStack_90 = (param_2->LocalToWorldTransform).Translation.ZW.m128d_f64[1];
  local_68 = *(undefined4 *)&param_2->PixelToWorldScale;
  uStack_64 = *(undefined4 *)((longlong)&param_2->PixelToWorldScale + 4);
  uStack_60._0_1_ = param_2->bIsPerspectiveProjection;
  uStack_60._1_1_ = param_2->HitSortType;
  uStack_60._2_2_ = *(undefined2 *)&param_2->field_0x6a;
  uStack_5c = *(undefined4 *)&param_2->field_0x6c;
  local_78 = *(undefined4 *)(param_2->LocalToWorldTransform).Scale3D.ZW.m128d_f64;
  uStack_74 = *(undefined4 *)((longlong)(param_2->LocalToWorldTransform).Scale3D.ZW.m128d_f64 + 4);
  uStack_70 = *(undefined4 *)((param_2->LocalToWorldTransform).Scale3D.ZW.m128d_f64 + 1);
  uStack_6c = *(undefined4 *)((longlong)(param_2->LocalToWorldTransform).Scale3D.ZW.m128d_f64 + 0xc)
  ;
  cVar6 = (**(code **)(this->_padding_ + 0x6a8))(local_68,param_1,&this->Base,&local_c8);
  if ((cVar6 != '\0') && (2 < (this->Vertices).ArrayNum)) {
    ComputeProjectedVertices(this,&param_2->LocalToWorldTransform,false);
    fVar1 = *(float *)&this->_padding_;
    local_100._s_0.X = (param_3->field0_0x0)._s_0.X;
    local_100._s_0.Y = (param_3->field0_0x0)._s_0.Y;
    local_100._s_0.Z = (param_3->field0_0x0)._s_0.Z;
    dVar5 = (double)CONCAT44(uStack_64,local_68);
    local_e8._s_0.Z = (param_4->field0_0x0)._s_0.Z;
    local_e8._s_0.X = (param_4->field0_0x0)._s_0.X;
    local_e8._s_0.Y = (param_4->field0_0x0)._s_0.Y;
    UE::Math::TVector<double>::Normalize((TVector<double> *)&local_e8._s_0,__real_3e45798ee0000000);
    uVar13 = 0;
    local_108 = 0.0;
    if (0 < (this->ProjectedVertices).ArrayNum + -2) {
      do {
        uVar8 = 0;
        if ((int)uVar13 < (this->ProjectedVertices).ArrayNum) {
          uVar8 = ~uVar13 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          pFVar9 = (FInputRayHit *)(*pcVar4)();
          return pFVar9;
        }
        lVar10 = (longlong)(int)uVar13;
        uVar11 = uVar13 + 1;
        pFVar2 = (this->ProjectedVertices).AllocatorInstance.Data;
        uVar8 = 0;
        if ((int)uVar11 < (this->ProjectedVertices).ArrayNum) {
          uVar8 = ~uVar11 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          pFVar9 = (FInputRayHit *)(*pcVar4)();
          return pFVar9;
        }
        uVar12 = uVar13 + 2;
        pFVar3 = (this->ProjectedVertices).AllocatorInstance.Data;
        uVar8 = 0;
        if ((int)uVar12 < (this->ProjectedVertices).ArrayNum) {
          uVar8 = ~uVar12 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          pFVar9 = (FInputRayHit *)(*pcVar4)();
          return pFVar9;
        }
        uVar13 = uVar13 + 3;
        bVar7 = Intersect((TRay<double> *)&local_100._s_0,
                          (TVector<double> *)(pFVar2 + lVar10 * 0x18),
                          (TVector<double> *)(pFVar3 + (longlong)(int)uVar11 * 0x18),
                          (TVector<double> *)
                          ((this->ProjectedVertices).AllocatorInstance.Data +
                          (longlong)(int)uVar12 * 0x18),(double)fVar1 * dVar5,&local_108);
        if (bVar7) {
          (**(code **)(this->_padding_ + 0x6b0))(this,__return_storage_ptr__,local_108,param_5);
          return __return_storage_ptr__;
        }
      } while ((int)uVar13 < (this->ProjectedVertices).ArrayNum + -2);
    }
  }
  FInputRayHit::FInputRayHit(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Render @ 1496bb2e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UGizmoElementTriangleList::Render
          (UGizmoElementTriangleList *this,IToolsContextRenderAPI *param_1,
          FRenderTraversalState *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  FWeakObjectPtr FVar15;
  FRenderTraversalState *pFVar16;
  double *pdVar17;
  char cVar18;
  bool bVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  FRenderTraversalState *pFVar24;
  UMaterialInterface *pUVar25;
  FPrimitiveDrawInterface *pFVar26;
  FMaterialRenderProxy *pFVar27;
  longlong lVar28;
  double *pdVar29;
  uint uVar30;
  undefined1 auStackY_368 [32];
  TVector<float>_u_0 local_328;
  TVector<float>_u_0 local_31c;
  TVector<float>_u_0 local_310;
  FDynamicMeshBuilder local_300;
  FDynamicMeshVertex local_2d8;
  FDynamicMeshVertex local_278;
  FDynamicMeshVertex local_218;
  double local_1b8 [13];
  EGizmoElementInteractionState EStack_150;
  FGizmoElementMeshRenderStateAttributes FStack_14c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_368;
  lVar28 = 2;
  pFVar16 = param_2;
  pdVar17 = local_1b8;
  do {
    pdVar29 = pdVar17;
    pFVar24 = pFVar16;
    dVar11 = (pFVar24->LocalToWorldTransform).Rotation.XY.m128d_f64[1];
    dVar12 = (pFVar24->LocalToWorldTransform).Rotation.ZW.m128d_f64[0];
    dVar13 = (pFVar24->LocalToWorldTransform).Rotation.ZW.m128d_f64[1];
    pFVar16 = (FRenderTraversalState *)
              &(pFVar24->MeshRenderState).HoverMaterial.bOverridesChildState;
    *pdVar29 = (pFVar24->LocalToWorldTransform).Rotation.XY.m128d_f64[0];
    pdVar29[1] = dVar11;
    dVar11 = (pFVar24->LocalToWorldTransform).Translation.XY.m128d_f64[0];
    dVar14 = (pFVar24->LocalToWorldTransform).Translation.XY.m128d_f64[1];
    pdVar29[2] = dVar12;
    pdVar29[3] = dVar13;
    dVar12 = (pFVar24->LocalToWorldTransform).Translation.ZW.m128d_f64[0];
    dVar13 = (pFVar24->LocalToWorldTransform).Translation.ZW.m128d_f64[1];
    pdVar29[4] = dVar11;
    pdVar29[5] = dVar14;
    dVar11 = (pFVar24->LocalToWorldTransform).Scale3D.XY.m128d_f64[0];
    dVar14 = (pFVar24->LocalToWorldTransform).Scale3D.XY.m128d_f64[1];
    pdVar29[6] = dVar12;
    pdVar29[7] = dVar13;
    dVar12 = (pFVar24->LocalToWorldTransform).Scale3D.ZW.m128d_f64[0];
    dVar13 = (pFVar24->LocalToWorldTransform).Scale3D.ZW.m128d_f64[1];
    pdVar29[8] = dVar11;
    pdVar29[9] = dVar14;
    dVar11 = pFVar24->PixelToWorldScale;
    dVar14 = *(double *)&pFVar24->InteractionState;
    pdVar29[10] = dVar12;
    pdVar29[0xb] = dVar13;
    dVar12 = *(double *)&(pFVar24->MeshRenderState).Material.Value.WeakPtr.ObjectSerialNumber;
    FVar15 = (pFVar24->MeshRenderState).HoverMaterial.Value.WeakPtr;
    pdVar29[0xc] = dVar11;
    pdVar29[0xd] = dVar14;
    pdVar29[0xe] = dVar12;
    *(FWeakObjectPtr *)(pdVar29 + 0xf) = FVar15;
    lVar28 = lVar28 + -1;
    pdVar17 = pdVar29 + 0x10;
  } while (lVar28 != 0);
  dVar11 = *(double *)&(pFVar24->MeshRenderState).InteractMaterial.Value.WeakPtr.ObjectSerialNumber;
  FVar15 = (pFVar24->MeshRenderState).SelectMaterial.Value.WeakPtr;
  dVar12 = *(double *)&(pFVar24->MeshRenderState).SelectMaterial.bOverridesChildState;
  pdVar29[0x10] = *(double *)pFVar16;
  pdVar29[0x11] = dVar11;
  dVar11 = *(double *)&(pFVar24->MeshRenderState).SubdueMaterial.Value.WeakPtr.ObjectSerialNumber;
  dVar13 = *(double *)&(pFVar24->MeshRenderState).VertexColor.Value.field0_0x0;
  *(FWeakObjectPtr *)(pdVar29 + 0x12) = FVar15;
  pdVar29[0x13] = dVar12;
  dVar12 = *(double *)((longlong)&(pFVar24->MeshRenderState).VertexColor.Value.field0_0x0 + 8);
  dVar14 = *(double *)&(pFVar24->MeshRenderState).VertexColor.bHasValue;
  pdVar29[0x14] = dVar11;
  pdVar29[0x15] = dVar13;
  dVar11 = *(double *)((longlong)&(pFVar24->MeshRenderState).HoverVertexColor.Value.field0_0x0 + 4);
  dVar13 = *(double *)
            ((longlong)&(pFVar24->MeshRenderState).HoverVertexColor.Value.field0_0x0 + 0xc);
  pdVar29[0x16] = dVar12;
  pdVar29[0x17] = dVar14;
  fVar3 = (pFVar24->MeshRenderState).InteractVertexColor.Value.field0_0x0._s_0.R;
  fVar4 = (pFVar24->MeshRenderState).InteractVertexColor.Value.field0_0x0._s_0.G;
  fVar5 = (pFVar24->MeshRenderState).InteractVertexColor.Value.field0_0x0._s_0.B;
  fVar6 = (pFVar24->MeshRenderState).InteractVertexColor.Value.field0_0x0._s_0.A;
  pdVar29[0x18] = dVar11;
  pdVar29[0x19] = dVar13;
  uVar7 = *(undefined4 *)&(pFVar24->MeshRenderState).InteractVertexColor.bHasValue;
  fVar8 = (pFVar24->MeshRenderState).SelectVertexColor.Value.field0_0x0._s_0.R;
  fVar9 = (pFVar24->MeshRenderState).SelectVertexColor.Value.field0_0x0._s_0.G;
  fVar10 = (pFVar24->MeshRenderState).SelectVertexColor.Value.field0_0x0._s_0.B;
  lVar28 = this->_padding_;
  *(float *)(pdVar29 + 0x1a) = fVar3;
  *(float *)((longlong)pdVar29 + 0xd4) = fVar4;
  *(float *)(pdVar29 + 0x1b) = fVar5;
  *(float *)((longlong)pdVar29 + 0xdc) = fVar6;
  *(undefined4 *)(pdVar29 + 0x1c) = uVar7;
  *(float *)((longlong)pdVar29 + 0xe4) = fVar8;
  *(float *)(pdVar29 + 0x1d) = fVar9;
  *(float *)((longlong)pdVar29 + 0xec) = fVar10;
  cVar18 = (**(code **)(lVar28 + 0x698))(this,param_1,&this->Base);
  if (((cVar18 != '\0') && (2 < (this->Vertices).ArrayNum)) &&
     (pUVar25 = FGizmoElementMeshRenderStateAttributes::GetMaterialInternal(&FStack_14c,EStack_150),
     pUVar25 != (UMaterialInterface *)0x0)) {
    pFVar26 = (FPrimitiveDrawInterface *)(**(code **)((longlong)*param_1 + 8))(param_1);
    ComputeProjectedVertices(this,&param_2->LocalToWorldTransform,true);
    FDynamicMeshBuilder::FDynamicMeshBuilder
              (&local_300,pFVar26->View->FeatureLevel,1,0,false,(FDynamicMeshBufferAllocator *)0x0);
    uVar30 = 0;
    if (0 < (this->ProjectedVertices).ArrayNum + -2) {
      lVar28 = 0;
      do {
        uVar20 = 0;
        if ((int)uVar30 < (this->ProjectedVertices).ArrayNum) {
          uVar20 = ~uVar30 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar1 = (this->ProjectedVertices).AllocatorInstance.Data;
        local_328._s_0.X = (float)*(double *)(pFVar1 + lVar28);
        local_328._s_0.Y = (float)*(double *)(pFVar1 + lVar28 + 8);
        local_328._s_0.Z = (float)*(double *)(pFVar1 + lVar28 + 0x10);
        FDynamicMeshVertex::FDynamicMeshVertex(&local_218,(TVector<float> *)&local_328._s_0);
        uVar20 = 0;
        if ((int)(uVar30 + 1) < (this->ProjectedVertices).ArrayNum) {
          uVar20 = ~(uVar30 + 1) >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar1 = (this->ProjectedVertices).AllocatorInstance.Data;
        local_31c._s_0.X = (float)*(double *)(pFVar1 + lVar28 + 0x18);
        local_31c._s_0.Y = (float)*(double *)(pFVar1 + lVar28 + 0x20);
        local_31c._s_0.Z = (float)*(double *)(pFVar1 + lVar28 + 0x28);
        FDynamicMeshVertex::FDynamicMeshVertex(&local_278,(TVector<float> *)&local_31c._s_0);
        uVar20 = 0;
        if ((int)(uVar30 + 2) < (this->ProjectedVertices).ArrayNum) {
          uVar20 = ~(uVar30 + 2) >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar1 = (this->ProjectedVertices).AllocatorInstance.Data;
        uVar30 = uVar30 + 3;
        local_310._s_0.X = (float)*(double *)(pFVar1 + lVar28 + 0x30);
        local_310._s_0.Y = (float)*(double *)(pFVar1 + lVar28 + 0x38);
        local_310._s_0.Z = (float)*(double *)(pFVar1 + lVar28 + 0x40);
        FDynamicMeshVertex::FDynamicMeshVertex(&local_2d8,(TVector<float> *)&local_310._s_0);
        iVar21 = FDynamicMeshBuilder::AddVertex(&local_300,&local_2d8);
        iVar22 = FDynamicMeshBuilder::AddVertex(&local_300,&local_278);
        iVar23 = FDynamicMeshBuilder::AddVertex(&local_300,&local_218);
        FDynamicMeshBuilder::AddTriangle(&local_300,iVar23,iVar22,iVar21);
        lVar28 = lVar28 + 0x48;
      } while ((int)uVar30 < (this->ProjectedVertices).ArrayNum + -2);
    }
    pFVar27 = (FMaterialRenderProxy *)(**(code **)(pUVar25->_padding_ + 0x310))(pUVar25);
    FDynamicMeshBuilder::Draw
              (&local_300,pFVar26,&UE::Math::TMatrix<double>::Identity,pFVar27,'\x01',false,true,
               (FHitProxyId)0xffffffff);
    FDynamicMeshBuilder::~FDynamicMeshBuilder(&local_300);
  }
  return;
}

// SetBase @ 1496bd300

void __thiscall
UGizmoElementTriangleList::SetBase(UGizmoElementTriangleList *this,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  (this->Base).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->Base).field0_0x0._s_0.Y = dVar2;
  (this->Base).field0_0x0._s_0.Z = dVar1;
  return;
}

// SetSideDirection @ 1496bfd70

void __thiscall
UGizmoElementTriangleList::SetSideDirection
          (UGizmoElementTriangleList *this,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  
  dVar1 = (param_1->field0_0x0)._s_0.X;
  dVar2 = (param_1->field0_0x0)._s_0.Z;
  dVar3 = (param_1->field0_0x0)._s_0.Y;
  dVar8 = dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2;
  if (dVar8 == __real_3ff0000000000000) {
    uVar7 = (param_1->field0_0x0)._s_0.Z;
    uVar5 = *(double *)((longlong)&param_1->field0_0x0 + 8);
    uVar6 = (param_1->field0_0x0)._s_0.X;
  }
  else {
    uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
    uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    if (__real_3e45798ee0000000 <= dVar8) {
      dVar8 = __real_3ff0000000000000 / SQRT(dVar8);
      uVar7 = dVar2 * dVar8;
      uVar5 = dVar3 * dVar8;
      uVar6 = dVar1 * dVar8;
    }
  }
  auVar4._8_4_ = (int)uVar5;
  auVar4._0_8_ = uVar6;
  auVar4._12_4_ = (int)((ulonglong)uVar5 >> 0x20);
  *(undefined1 (*) [16])&(this->SideDirection).field0_0x0 = auVar4;
  (this->SideDirection).field0_0x0._s_0.Z = (double)uVar7;
  return;
}

// SetUpDirection @ 1496c08c0

void __thiscall
UGizmoElementTriangleList::SetUpDirection(UGizmoElementTriangleList *this,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  
  dVar1 = (param_1->field0_0x0)._s_0.X;
  dVar2 = (param_1->field0_0x0)._s_0.Z;
  dVar3 = (param_1->field0_0x0)._s_0.Y;
  dVar8 = dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2;
  if (dVar8 == __real_3ff0000000000000) {
    uVar7 = (param_1->field0_0x0)._s_0.Z;
    uVar5 = *(double *)((longlong)&param_1->field0_0x0 + 8);
    uVar6 = (param_1->field0_0x0)._s_0.X;
  }
  else {
    uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
    uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    if (__real_3e45798ee0000000 <= dVar8) {
      dVar8 = __real_3ff0000000000000 / SQRT(dVar8);
      uVar7 = dVar2 * dVar8;
      uVar5 = dVar3 * dVar8;
      uVar6 = dVar1 * dVar8;
    }
  }
  auVar4._8_4_ = (int)uVar5;
  auVar4._0_8_ = uVar6;
  auVar4._12_4_ = (int)((ulonglong)uVar5 >> 0x20);
  *(undefined1 (*) [16])&(this->UpDirection).field0_0x0 = auVar4;
  (this->UpDirection).field0_0x0._s_0.Z = (double)uVar7;
  return;
}

// SetVertices @ 1496c0bb0

void __thiscall
UGizmoElementTriangleList::SetVertices
          (UGizmoElementTriangleList *this,TArrayView<UE::Math::TVector<double>_const_,int> *param_1
          )

{
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::
  operator=<UE::Math::TVector<double>_const_,int>(&this->Vertices,param_1);
  return;
}

// StaticRegisterNativesUGizmoElementTriangleList @ 1496c29f0

void __cdecl UGizmoElementTriangleList::StaticRegisterNativesUGizmoElementTriangleList(void)

{
  return;
}

