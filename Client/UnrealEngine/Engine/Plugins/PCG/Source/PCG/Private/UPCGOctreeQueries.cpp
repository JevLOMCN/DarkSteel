// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 27

// StaticClass @ 149f1d060

UClass * __cdecl UPCGOctreeQueries::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGOctreeQueries.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGOctreeQueries",
               &Z_Registration_Info_UClass_UPCGOctreeQueries.InnerSingleton,
               StaticRegisterNativesUPCGOctreeQueries,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGOctreeQueries>,
               InternalVTableHelperCtorCaller<UPCGOctreeQueries>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGOctreeQueries.InnerSingleton;
}

// UPCGOctreeQueries @ 149f32d60

UPCGOctreeQueries * __thiscall
UPCGOctreeQueries::UPCGOctreeQueries(UPCGOctreeQueries *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UPCGOctreeQueries__6B_;
  return this;
}

// UPCGOctreeQueries @ 149f32d90

UPCGOctreeQueries * __thiscall
UPCGOctreeQueries::UPCGOctreeQueries(UPCGOctreeQueries *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UPCGOctreeQueries__6B_;
  return this;
}

// ~UPCGOctreeQueries @ 149f34b10

void __thiscall UPCGOctreeQueries::~UPCGOctreeQueries(UPCGOctreeQueries *this)

{
  *(undefined ***)this = &___7UPCGOctreeQueries__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// operator() @ 149f36100

void __thiscall
`UPCGOctreeQueries::
ForEachPointInsideSphere<`UPCGOctreeQueries::GetPointsInsideSphere'::__l2::<lambda_1>_>'::__l2::
<lambda_1>::operator()(void *this,FPointRef *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  longlong *plVar4;
  double *pdVar5;
  ForAnyElementType *pFVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  char cVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  double dVar22;
  
  cVar11 = (**(code **)(**(longlong **)this + 0x480))();
  if (cVar11 != '\0') {
    plVar4 = *(longlong **)((longlong)this + 8);
    if (plVar4 == (longlong *)0x0) {
      lVar15 = (**(code **)(**(longlong **)this + 0x590))(*(longlong **)this,param_1->Index);
      uVar20 = *(undefined4 *)(lVar15 + 0x20);
      uVar21 = *(undefined4 *)(lVar15 + 0x24);
      uVar18 = *(undefined4 *)(lVar15 + 0x28);
      uVar19 = *(undefined4 *)(lVar15 + 0x2c);
      dVar22 = *(double *)(lVar15 + 0x30);
    }
    else {
      uVar3 = param_1->Index;
      uVar13 = 0;
      if ((int)uVar3 < (int)plVar4[1]) {
        uVar13 = ~uVar3 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      puVar2 = (undefined4 *)((longlong)(int)uVar3 * 0xd0 + 0x20 + *plVar4);
      uVar20 = *puVar2;
      uVar21 = puVar2[1];
      uVar18 = puVar2[2];
      uVar19 = puVar2[3];
      dVar22 = *(double *)((longlong)(int)uVar3 * 0xd0 + 0x30 + *plVar4);
    }
    pdVar5 = *(double **)((longlong)this + 0x10);
    dVar8 = (double)CONCAT44(uVar19,uVar18) - pdVar5[1];
    dVar9 = (double)CONCAT44(uVar21,uVar20) - *pdVar5;
    dVar22 = dVar8 * dVar8 + dVar9 * dVar9 + (dVar22 - pdVar5[2]) * (dVar22 - pdVar5[2]);
    if (dVar22 < *(double *)((longlong)this + 0x18) || dVar22 == *(double *)((longlong)this + 0x18))
    {
      if ((*(longlong *)((longlong)this + 8) == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Points",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\SpatialAlgo\\PCGOctreeQueries.h"
                              ,99,L""), bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar3 = param_1->Index;
      plVar4 = *(longlong **)((longlong)this + 8);
      uVar13 = 0;
      if ((int)uVar3 < (int)plVar4[1]) {
        uVar13 = ~uVar3 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar6 = *(ForAnyElementType **)((longlong)this + 0x20);
      pFVar17 = (FScriptContainerElement *)((longlong)(int)uVar3 * 0xd0 + *plVar4);
      if (((pFVar6->Data <= pFVar17) &&
          (pFVar17 < pFVar6->Data + (longlong)*(int *)((longlong)&pFVar6[1].Data + 4) * 0xd0)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar14 = *(int *)&pFVar6[1].Data;
      piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
      if (iVar14 == *piVar1) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x10d0,pFVar6,piVar1);
      }
      *(int *)&pFVar6[1].Data = iVar14 + 1;
      uVar10 = *(undefined8 *)(pFVar17 + 8);
      pFVar16 = pFVar6->Data + (longlong)iVar14 * 0xd0;
      *(undefined8 *)pFVar16 = *(undefined8 *)pFVar17;
      *(undefined8 *)(pFVar16 + 8) = uVar10;
      uVar10 = *(undefined8 *)(pFVar17 + 0x18);
      *(undefined8 *)(pFVar16 + 0x10) = *(undefined8 *)(pFVar17 + 0x10);
      *(undefined8 *)(pFVar16 + 0x18) = uVar10;
      uVar10 = *(undefined8 *)(pFVar17 + 0x28);
      *(undefined8 *)(pFVar16 + 0x20) = *(undefined8 *)(pFVar17 + 0x20);
      *(undefined8 *)(pFVar16 + 0x28) = uVar10;
      uVar10 = *(undefined8 *)(pFVar17 + 0x38);
      *(undefined8 *)(pFVar16 + 0x30) = *(undefined8 *)(pFVar17 + 0x30);
      *(undefined8 *)(pFVar16 + 0x38) = uVar10;
      uVar10 = *(undefined8 *)(pFVar17 + 0x48);
      *(undefined8 *)(pFVar16 + 0x40) = *(undefined8 *)(pFVar17 + 0x40);
      *(undefined8 *)(pFVar16 + 0x48) = uVar10;
      uVar10 = *(undefined8 *)(pFVar17 + 0x58);
      *(undefined8 *)(pFVar16 + 0x50) = *(undefined8 *)(pFVar17 + 0x50);
      *(undefined8 *)(pFVar16 + 0x58) = uVar10;
      uVar10 = *(undefined8 *)(pFVar17 + 0x68);
      *(undefined8 *)(pFVar16 + 0x60) = *(undefined8 *)(pFVar17 + 0x60);
      *(undefined8 *)(pFVar16 + 0x68) = uVar10;
      uVar10 = *(undefined8 *)(pFVar17 + 0x78);
      *(undefined8 *)(pFVar16 + 0x70) = *(undefined8 *)(pFVar17 + 0x70);
      *(undefined8 *)(pFVar16 + 0x78) = uVar10;
      uVar10 = *(undefined8 *)(pFVar17 + 0x88);
      *(undefined8 *)(pFVar16 + 0x80) = *(undefined8 *)(pFVar17 + 0x80);
      *(undefined8 *)(pFVar16 + 0x88) = uVar10;
      uVar10 = *(undefined8 *)(pFVar17 + 0x98);
      *(undefined8 *)(pFVar16 + 0x90) = *(undefined8 *)(pFVar17 + 0x90);
      *(undefined8 *)(pFVar16 + 0x98) = uVar10;
      uVar10 = *(undefined8 *)(pFVar17 + 0xa8);
      *(undefined8 *)(pFVar16 + 0xa0) = *(undefined8 *)(pFVar17 + 0xa0);
      *(undefined8 *)(pFVar16 + 0xa8) = uVar10;
      uVar10 = *(undefined8 *)(pFVar17 + 0xb8);
      *(undefined8 *)(pFVar16 + 0xb0) = *(undefined8 *)(pFVar17 + 0xb0);
      *(undefined8 *)(pFVar16 + 0xb8) = uVar10;
      uVar10 = *(undefined8 *)(pFVar17 + 200);
      *(undefined8 *)(pFVar16 + 0xc0) = *(undefined8 *)(pFVar17 + 0xc0);
      *(undefined8 *)(pFVar16 + 200) = uVar10;
    }
  }
  return;
}

// GetClosestPoint @ 149f48140

void __cdecl
UPCGOctreeQueries::GetClosestPoint
          (UPCGPointData *param_1,TVector<double> *param_2,bool param_3,bool *param_4,
          FPCGPoint *param_5,double param_6)

{
  int iVar1;
  code *pcVar2;
  double dVar3;
  undefined8 uVar4;
  long64 lVar5;
  bool bVar6;
  UClass *pUVar7;
  TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics> *this;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  TArray<FPCGPoint,TSizedDefaultAllocator<32>_> *pTVar10;
  longlong lVar11;
  undefined8 local_res8;
  uint local_res18 [2];
  UPCGPointData *local_c8;
  TArray<FPCGPoint,TSizedDefaultAllocator<32>_> *local_c0;
  TVector<double> *local_b8;
  double local_b0;
  undefined8 *local_a8;
  uint *local_a0;
  undefined8 local_98;
  TVector4<double>_u_0 local_88;
  undefined1 local_68 [16];
  double local_58;
  undefined8 local_50;
  undefined1 local_38;
  undefined7 uStack_37;
  
  *param_4 = false;
  if (param_1 != (UPCGPointData *)0x0) {
    local_res8 = __real_7fefffffffffffff;
    local_88._s_0.X = (param_2->field0_0x0)._s_0.X;
    local_88._s_0.Y = (param_2->field0_0x0)._s_0.Y;
    if (param_6 <= 0.0) {
      param_6 = 0.0;
    }
    local_88._s_0.Z = (param_2->field0_0x0)._s_0.Z;
    local_88._s_0.W = 0.0;
    local_50 = 0;
    local_res18[0] = 0xffffffff;
    local_58 = param_6 * __real_3ff6a09e667f3bcd;
    local_68._8_4_ = SUB84(local_58,0);
    local_68._0_8_ = local_58;
    local_68._12_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_38 = param_3;
    pUVar7 = Z_Construct_UClass_UPCGPointData_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
       (pTVar10 = &param_1->Points,
       (longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
       != &pUVar7->_padding_)) {
      pTVar10 = (TArray<FPCGPoint,TSizedDefaultAllocator<32>_> *)0x0;
    }
    this = (TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics> *)
           (**(code **)(param_1->_padding_ + 0x618))(param_1);
    local_a8 = &local_res8;
    local_a0 = local_res18;
    local_98 = CONCAT71(uStack_37,local_38);
    local_c8 = param_1;
    local_c0 = pTVar10;
    local_b8 = param_2;
    local_b0 = param_6 * param_6;
    TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics>::
    FindElementsWithBoundsTestInternal<_UPCGOctreeQueries::ForEachPointInsideSphere<_PCGOctreeQueries::GetPointIndexInSphereUnderCondition<_UPCGOctreeQueries::GetClosestPointIndex_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
              (this,0,(FOctreeNodeContext *)this,(FBoxCenterAndExtent *)&local_88._s_0,
               (<lambda_1> *)&local_c8);
    lVar11 = (longlong)(int)local_res18[0];
    if (local_res18[0] != 0xffffffff) {
      uVar9 = 0;
      if ((int)local_res18[0] < (param_1->Points).ArrayNum) {
        uVar9 = ~local_res18[0] >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar8 = (param_1->Points).AllocatorInstance.Data + lVar11 * 0xd0;
      if (pFVar8 != (FScriptContainerElement *)0x0) {
        *param_4 = true;
        dVar3 = *(double *)(pFVar8 + 8);
        (param_5->Transform).Rotation.XY.m128d_f64[0] = *(double *)pFVar8;
        (param_5->Transform).Rotation.XY.m128d_f64[1] = dVar3;
        dVar3 = *(double *)(pFVar8 + 0x18);
        (param_5->Transform).Rotation.ZW.m128d_f64[0] = *(double *)(pFVar8 + 0x10);
        (param_5->Transform).Rotation.ZW.m128d_f64[1] = dVar3;
        dVar3 = *(double *)(pFVar8 + 0x28);
        (param_5->Transform).Translation.XY.m128d_f64[0] = *(double *)(pFVar8 + 0x20);
        (param_5->Transform).Translation.XY.m128d_f64[1] = dVar3;
        dVar3 = *(double *)(pFVar8 + 0x38);
        (param_5->Transform).Translation.ZW.m128d_f64[0] = *(double *)(pFVar8 + 0x30);
        (param_5->Transform).Translation.ZW.m128d_f64[1] = dVar3;
        dVar3 = *(double *)(pFVar8 + 0x48);
        (param_5->Transform).Scale3D.XY.m128d_f64[0] = *(double *)(pFVar8 + 0x40);
        (param_5->Transform).Scale3D.XY.m128d_f64[1] = dVar3;
        dVar3 = *(double *)(pFVar8 + 0x58);
        (param_5->Transform).Scale3D.ZW.m128d_f64[0] = *(double *)(pFVar8 + 0x50);
        (param_5->Transform).Scale3D.ZW.m128d_f64[1] = dVar3;
        dVar3 = *(double *)(pFVar8 + 0x68);
        *(undefined8 *)&param_5->Density = *(undefined8 *)(pFVar8 + 0x60);
        (param_5->BoundsMin).field0_0x0._s_0.X = dVar3;
        dVar3 = *(double *)(pFVar8 + 0x78);
        (param_5->BoundsMin).field0_0x0._s_0.Y = *(double *)(pFVar8 + 0x70);
        (param_5->BoundsMin).field0_0x0._s_0.Z = dVar3;
        dVar3 = *(double *)(pFVar8 + 0x88);
        (param_5->BoundsMax).field0_0x0._s_0.X = *(double *)(pFVar8 + 0x80);
        (param_5->BoundsMax).field0_0x0._s_0.Y = dVar3;
        lVar11 = *(longlong *)(pFVar8 + 0x98);
        (param_5->BoundsMax).field0_0x0._s_0.Z = *(double *)(pFVar8 + 0x90);
        param_5->_padding_ = lVar11;
        dVar3 = *(double *)(pFVar8 + 0xa8);
        (param_5->Color).field0_0x0._s_0.X = *(double *)(pFVar8 + 0xa0);
        (param_5->Color).field0_0x0._s_0.Y = dVar3;
        dVar3 = *(double *)(pFVar8 + 0xb8);
        (param_5->Color).field0_0x0._s_0.Z = *(double *)(pFVar8 + 0xb0);
        (param_5->Color).field0_0x0._s_0.W = dVar3;
        uVar4 = *(undefined8 *)(pFVar8 + 0xc0);
        lVar5 = *(long64 *)(pFVar8 + 200);
        param_5->Steepness = (float)(int)uVar4;
        param_5->Seed = (int)((ulonglong)uVar4 >> 0x20);
        param_5->MetadataEntry = lVar5;
      }
    }
  }
  return;
}

// GetClosestPoint @ 149f48390

FPCGPoint * __cdecl
UPCGOctreeQueries::GetClosestPoint
          (UPCGPointData *param_1,TVector<double> *param_2,bool param_3,double param_4)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics> *this;
  FPCGPoint *pFVar5;
  FPCGPoint *pFVar6;
  longlong lVar7;
  uint uVar8;
  undefined8 local_res8;
  uint local_res18 [4];
  UPCGPointData *local_c8;
  FPCGPoint *local_c0;
  TVector<double> *local_b8;
  double local_b0;
  undefined8 *local_a8;
  uint *local_a0;
  undefined8 local_98;
  TVector4<double>_u_0 local_88;
  undefined1 local_68 [16];
  double local_58;
  undefined8 local_50;
  undefined1 local_38;
  undefined7 uStack_37;
  
  pFVar5 = (FPCGPoint *)0x0;
  if (param_1 != (UPCGPointData *)0x0) {
    if (param_4 <= 0.0) {
      param_4 = 0.0;
    }
    local_res8 = __real_7fefffffffffffff;
    local_88._s_0.X = (param_2->field0_0x0)._s_0.X;
    local_88._s_0.Y = (param_2->field0_0x0)._s_0.Y;
    local_res18[0] = 0xffffffff;
    local_88._s_0.Z = (param_2->field0_0x0)._s_0.Z;
    local_58 = param_4 * __real_3ff6a09e667f3bcd;
    local_88._s_0.W = 0.0;
    local_50 = 0;
    local_68._8_4_ = SUB84(local_58,0);
    local_68._0_8_ = local_58;
    local_68._12_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_38 = param_3;
    pUVar4 = Z_Construct_UClass_UPCGPointData_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
       (pFVar6 = (FPCGPoint *)&param_1->Points,
       (longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
       != &pUVar4->_padding_)) {
      pFVar6 = pFVar5;
    }
    this = (TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics> *)
           (**(code **)(param_1->_padding_ + 0x618))(param_1);
    local_a8 = &local_res8;
    local_a0 = local_res18;
    local_98 = CONCAT71(uStack_37,local_38);
    local_c8 = param_1;
    local_c0 = pFVar6;
    local_b8 = param_2;
    local_b0 = param_4 * param_4;
    TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics>::
    FindElementsWithBoundsTestInternal<_UPCGOctreeQueries::ForEachPointInsideSphere<_PCGOctreeQueries::GetPointIndexInSphereUnderCondition<_UPCGOctreeQueries::GetClosestPointIndex_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
              (this,0,(FOctreeNodeContext *)this,(FBoxCenterAndExtent *)&local_88._s_0,
               (<lambda_1> *)&local_c8);
    lVar7 = (longlong)(int)local_res18[0];
    if (local_res18[0] != 0xffffffff) {
      uVar8 = 0;
      if ((int)local_res18[0] < (param_1->Points).ArrayNum) {
        uVar8 = ~local_res18[0] >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FPCGPoint *)(*pcVar2)();
        return pFVar5;
      }
      pFVar5 = (FPCGPoint *)((param_1->Points).AllocatorInstance.Data + lVar7 * 0xd0);
    }
  }
  return pFVar5;
}

// GetClosestPointFromOtherPoint @ 149f48530

void __cdecl
UPCGOctreeQueries::GetClosestPointFromOtherPoint
          (UPCGPointData *param_1,int param_2,bool *param_3,FPCGPoint *param_4,double param_5)

{
  int iVar1;
  code *pcVar2;
  double dVar3;
  undefined8 uVar4;
  long64 lVar5;
  bool bVar6;
  UClass *pUVar7;
  TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics> *this;
  TArray<FPCGPoint,TSizedDefaultAllocator<32>_> *pTVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  uint local_res8 [2];
  undefined8 local_res18;
  UPCGPointData *local_d8;
  TArray<FPCGPoint,TSizedDefaultAllocator<32>_> *local_d0;
  double *local_c8;
  double local_c0;
  undefined8 *local_b8;
  uint *local_b0;
  FScriptContainerElement *local_a8;
  TVector4<double>_u_0 local_98;
  undefined1 local_78 [16];
  double local_68;
  undefined8 local_60;
  double local_58;
  double dStack_50;
  double local_48;
  
  *param_3 = false;
  if (((param_1 != (UPCGPointData *)0x0) && (-1 < param_2)) &&
     (param_2 < (param_1->Points).ArrayNum)) {
    if (param_5 <= 0.0) {
      param_5 = 0.0;
    }
    local_res18 = __real_7fefffffffffffff;
    local_68 = param_5 * __real_3ff6a09e667f3bcd;
    local_98._s_0.W = 0.0;
    local_60 = 0;
    pFVar10 = (param_1->Points).AllocatorInstance.Data + (longlong)param_2 * 0xd0;
    local_res8[0] = 0xffffffff;
    local_98._s_0.X = (double)*(undefined8 *)(pFVar10 + 0x20);
    local_98._s_0.Y = (double)*(undefined8 *)(pFVar10 + 0x28);
    local_98._s_0.Z = (double)*(undefined8 *)(pFVar10 + 0x30);
    local_78._8_4_ = SUB84(local_68,0);
    local_78._0_8_ = local_68;
    local_78._12_4_ = (int)((ulonglong)local_68 >> 0x20);
    local_58 = local_98._s_0.X;
    dStack_50 = local_98._s_0.Y;
    local_48 = local_98._s_0.Z;
    pUVar7 = Z_Construct_UClass_UPCGPointData_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
       (pTVar8 = &param_1->Points,
       (longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
       != &pUVar7->_padding_)) {
      pTVar8 = (TArray<FPCGPoint,TSizedDefaultAllocator<32>_> *)0x0;
    }
    this = (TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics> *)
           (**(code **)(param_1->_padding_ + 0x618))(param_1);
    local_c8 = &local_58;
    local_b8 = &local_res18;
    local_b0 = local_res8;
    local_d8 = param_1;
    local_d0 = pTVar8;
    local_c0 = param_5 * param_5;
    local_a8 = pFVar10;
    TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics>::
    FindElementsWithBoundsTestInternal<_UPCGOctreeQueries::ForEachPointInsideSphere<_PCGOctreeQueries::GetPointIndexInSphereUnderCondition<_UPCGOctreeQueries::GetClosestPointFromOtherPoint_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
              (this,0,(FOctreeNodeContext *)this,(FBoxCenterAndExtent *)&local_98._s_0,
               (<lambda_1> *)&local_d8);
    lVar9 = (longlong)(int)local_res8[0];
    if (local_res8[0] != 0xffffffff) {
      uVar11 = 0;
      if ((int)local_res8[0] < (param_1->Points).ArrayNum) {
        uVar11 = ~local_res8[0] >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar10 = (param_1->Points).AllocatorInstance.Data + lVar9 * 0xd0;
      if (pFVar10 != (FScriptContainerElement *)0x0) {
        *param_3 = true;
        dVar3 = *(double *)(pFVar10 + 8);
        (param_4->Transform).Rotation.XY.m128d_f64[0] = *(double *)pFVar10;
        (param_4->Transform).Rotation.XY.m128d_f64[1] = dVar3;
        dVar3 = *(double *)(pFVar10 + 0x18);
        (param_4->Transform).Rotation.ZW.m128d_f64[0] = *(double *)(pFVar10 + 0x10);
        (param_4->Transform).Rotation.ZW.m128d_f64[1] = dVar3;
        dVar3 = *(double *)(pFVar10 + 0x28);
        (param_4->Transform).Translation.XY.m128d_f64[0] = *(double *)(pFVar10 + 0x20);
        (param_4->Transform).Translation.XY.m128d_f64[1] = dVar3;
        dVar3 = *(double *)(pFVar10 + 0x38);
        (param_4->Transform).Translation.ZW.m128d_f64[0] = *(double *)(pFVar10 + 0x30);
        (param_4->Transform).Translation.ZW.m128d_f64[1] = dVar3;
        dVar3 = *(double *)(pFVar10 + 0x48);
        (param_4->Transform).Scale3D.XY.m128d_f64[0] = *(double *)(pFVar10 + 0x40);
        (param_4->Transform).Scale3D.XY.m128d_f64[1] = dVar3;
        dVar3 = *(double *)(pFVar10 + 0x58);
        (param_4->Transform).Scale3D.ZW.m128d_f64[0] = *(double *)(pFVar10 + 0x50);
        (param_4->Transform).Scale3D.ZW.m128d_f64[1] = dVar3;
        dVar3 = *(double *)(pFVar10 + 0x68);
        *(undefined8 *)&param_4->Density = *(undefined8 *)(pFVar10 + 0x60);
        (param_4->BoundsMin).field0_0x0._s_0.X = dVar3;
        dVar3 = *(double *)(pFVar10 + 0x78);
        (param_4->BoundsMin).field0_0x0._s_0.Y = *(double *)(pFVar10 + 0x70);
        (param_4->BoundsMin).field0_0x0._s_0.Z = dVar3;
        dVar3 = *(double *)(pFVar10 + 0x88);
        (param_4->BoundsMax).field0_0x0._s_0.X = *(double *)(pFVar10 + 0x80);
        (param_4->BoundsMax).field0_0x0._s_0.Y = dVar3;
        lVar9 = *(longlong *)(pFVar10 + 0x98);
        (param_4->BoundsMax).field0_0x0._s_0.Z = *(double *)(pFVar10 + 0x90);
        param_4->_padding_ = lVar9;
        dVar3 = *(double *)(pFVar10 + 0xa8);
        (param_4->Color).field0_0x0._s_0.X = *(double *)(pFVar10 + 0xa0);
        (param_4->Color).field0_0x0._s_0.Y = dVar3;
        dVar3 = *(double *)(pFVar10 + 0xb8);
        (param_4->Color).field0_0x0._s_0.Z = *(double *)(pFVar10 + 0xb0);
        (param_4->Color).field0_0x0._s_0.W = dVar3;
        uVar4 = *(undefined8 *)(pFVar10 + 0xc0);
        lVar5 = *(long64 *)(pFVar10 + 200);
        param_4->Steepness = (float)(int)uVar4;
        param_4->Seed = (int)((ulonglong)uVar4 >> 0x20);
        param_4->MetadataEntry = lVar5;
      }
    }
  }
  return;
}

// GetClosestPointFromOtherPoint @ 149f487a0

FPCGPoint * __cdecl
UPCGOctreeQueries::GetClosestPointFromOtherPoint
          (UPCGPointData *param_1,FPCGPoint *param_2,double param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics> *this;
  FPCGPoint *pFVar5;
  FPCGPoint *pFVar6;
  longlong lVar7;
  uint uVar8;
  uint local_res8 [2];
  undefined8 local_res10;
  double local_b8;
  double dStack_b0;
  double local_a8;
  UPCGPointData *local_a0;
  FPCGPoint *local_98;
  double *local_90;
  double local_88;
  undefined8 *local_80;
  uint *local_78;
  FPCGPoint *local_70;
  TVector4<double>_u_0 local_68;
  undefined1 local_48 [16];
  double local_38;
  undefined8 local_30;
  
  local_b8 = (param_2->Transform).Translation.XY.m128d_f64[0];
  dStack_b0 = (param_2->Transform).Translation.XY.m128d_f64[1];
  pFVar5 = (FPCGPoint *)0x0;
  local_a8 = (param_2->Transform).Translation.ZW.m128d_f64[0];
  if (param_1 != (UPCGPointData *)0x0) {
    if (param_3 <= 0.0) {
      param_3 = 0.0;
    }
    local_res10 = __real_7fefffffffffffff;
    local_res8[0] = 0xffffffff;
    local_68._s_0.W = 0.0;
    local_38 = param_3 * __real_3ff6a09e667f3bcd;
    local_30 = 0;
    local_48._8_4_ = SUB84(local_38,0);
    local_48._0_8_ = local_38;
    local_48._12_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_68._s_0.X = local_b8;
    local_68._s_0.Y = dStack_b0;
    local_68._s_0.Z = local_a8;
    pUVar4 = Z_Construct_UClass_UPCGPointData_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
       (pFVar6 = (FPCGPoint *)&param_1->Points,
       (longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
       != &pUVar4->_padding_)) {
      pFVar6 = pFVar5;
    }
    this = (TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics> *)
           (**(code **)(param_1->_padding_ + 0x618))(param_1);
    local_90 = &local_b8;
    local_80 = &local_res10;
    local_78 = local_res8;
    local_a0 = param_1;
    local_98 = pFVar6;
    local_88 = param_3 * param_3;
    local_70 = param_2;
    TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics>::
    FindElementsWithBoundsTestInternal<_UPCGOctreeQueries::ForEachPointInsideSphere<_PCGOctreeQueries::GetPointIndexInSphereUnderCondition<_UPCGOctreeQueries::GetClosestPointFromOtherPoint_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
              (this,0,(FOctreeNodeContext *)this,(FBoxCenterAndExtent *)&local_68._s_0,
               (<lambda_1> *)&local_a0);
    lVar7 = (longlong)(int)local_res8[0];
    if (local_res8[0] != 0xffffffff) {
      uVar8 = 0;
      if ((int)local_res8[0] < (param_1->Points).ArrayNum) {
        uVar8 = ~local_res8[0] >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FPCGPoint *)(*pcVar2)();
        return pFVar5;
      }
      pFVar5 = (FPCGPoint *)((param_1->Points).AllocatorInstance.Data + lVar7 * 0xd0);
    }
  }
  return pFVar5;
}

// GetClosestPointIndex @ 149f48940

int __cdecl
UPCGOctreeQueries::GetClosestPointIndex
          (UPCGBasePointData *param_1,TVector<double> *param_2,bool param_3,double param_4)

{
  int iVar1;
  UClass *pUVar2;
  TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics> *this;
  UPCGBasePointData *pUVar3;
  undefined8 local_res8;
  int local_res18 [2];
  UPCGBasePointData *local_b8;
  UPCGBasePointData *local_b0;
  TVector<double> *local_a8;
  double local_a0;
  undefined8 *local_98;
  int *local_90;
  undefined8 local_88;
  TVector4<double>_u_0 local_78;
  undefined1 local_58 [16];
  double local_48;
  undefined8 local_40;
  undefined1 local_28;
  undefined7 uStack_27;
  
  if (param_1 == (UPCGBasePointData *)0x0) {
    local_res18[0] = -1;
  }
  else {
    if (param_4 <= 0.0) {
      param_4 = 0.0;
    }
    local_res8 = __real_7fefffffffffffff;
    local_78._s_0.X = (param_2->field0_0x0)._s_0.X;
    local_78._s_0.Y = (param_2->field0_0x0)._s_0.Y;
    local_78._s_0.W = 0.0;
    local_78._s_0.Z = (param_2->field0_0x0)._s_0.Z;
    local_48 = param_4 * __real_3ff6a09e667f3bcd;
    local_res18[0] = -1;
    local_40 = 0;
    local_58._8_4_ = SUB84(local_48,0);
    local_58._0_8_ = local_48;
    local_58._12_4_ = (int)((ulonglong)local_48 >> 0x20);
    local_28 = param_3;
    pUVar2 = Z_Construct_UClass_UPCGPointData_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar2->_padding_)) {
      pUVar3 = (UPCGBasePointData *)0x0;
    }
    else {
      pUVar3 = param_1 + 1;
    }
    this = (TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics> *)
           (**(code **)(param_1->_padding_ + 0x618))(param_1);
    local_98 = &local_res8;
    local_90 = local_res18;
    local_88 = CONCAT71(uStack_27,local_28);
    local_b8 = param_1;
    local_b0 = pUVar3;
    local_a8 = param_2;
    local_a0 = param_4 * param_4;
    TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics>::
    FindElementsWithBoundsTestInternal<_UPCGOctreeQueries::ForEachPointInsideSphere<_PCGOctreeQueries::GetPointIndexInSphereUnderCondition<_UPCGOctreeQueries::GetClosestPointIndex_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
              (this,0,(FOctreeNodeContext *)this,(FBoxCenterAndExtent *)&local_78._s_0,
               (<lambda_1> *)&local_b8);
  }
  return local_res18[0];
}

// GetClosestPointIndexFromOtherPointIndex @ 149f48ab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl
UPCGOctreeQueries::GetClosestPointIndexFromOtherPointIndex
          (UPCGBasePointData *param_1,int param_2,double param_3)

{
  double *pdVar1;
  int iVar2;
  UClass *pUVar3;
  TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics> *this;
  longlong lVar4;
  UPCGBasePointData *pUVar5;
  undefined1 auStackY_198 [32];
  int local_168 [2];
  undefined8 local_160;
  UPCGBasePointData *local_158;
  UPCGBasePointData *local_150;
  double *local_148;
  double local_140;
  undefined8 *local_138;
  int *local_130;
  undefined8 local_128;
  TVector4<double>_u_0 local_118;
  undefined1 local_f8 [16];
  double local_e8;
  undefined8 local_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  int local_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  int local_a0;
  int local_9c;
  int local_98;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_198;
  (**(code **)(param_1->_padding_ + 0x500))(param_1,&local_a8);
  if ((param_2 < 0) || (local_98 <= param_2)) {
    local_168[0] = -1;
  }
  else {
    local_160 = __real_7fefffffffffffff;
    if (param_3 <= 0.0) {
      param_3 = 0.0;
    }
    lVar4 = (longlong)(param_2 % local_9c) * (longlong)local_a0;
    local_118._s_0.W = 0.0;
    local_e8 = param_3 * __real_3ff6a09e667f3bcd;
    local_e0 = 0;
    local_168[0] = -1;
    pdVar1 = (double *)(lVar4 + 0x20 + local_a8);
    local_118._s_0.X = *pdVar1;
    local_118._s_0.Y = pdVar1[1];
    local_118._s_0.Z = *(double *)(lVar4 + 0x30 + local_a8);
    local_f8._8_4_ = SUB84(local_e8,0);
    local_f8._0_8_ = local_e8;
    local_f8._12_4_ = (int)((ulonglong)local_e8 >> 0x20);
    local_d8 = local_118._s_0.X;
    dStack_d0 = local_118._s_0.Y;
    local_c8 = local_118._s_0.Z;
    local_b0 = param_2;
    pUVar3 = Z_Construct_UClass_UPCGPointData_NoRegister();
    iVar2 = (int)pUVar3->_padding_;
    if (((*(int *)(param_1->_padding_ + 0x38) < iVar2) ||
        ((longlong *)
         *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
         &pUVar3->_padding_)) || (param_1 == (UPCGBasePointData *)0x0)) {
      pUVar5 = (UPCGBasePointData *)0x0;
    }
    else {
      pUVar5 = param_1 + 1;
    }
    this = (TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics> *)
           (**(code **)(param_1->_padding_ + 0x618))(param_1);
    local_148 = &local_d8;
    local_138 = &local_160;
    local_130 = local_168;
    local_128 = CONCAT44(uStack_ac,local_b0);
    local_158 = param_1;
    local_150 = pUVar5;
    local_140 = param_3 * param_3;
    TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics>::
    FindElementsWithBoundsTestInternal<_UPCGOctreeQueries::ForEachPointInsideSphere<_PCGOctreeQueries::GetPointIndexInSphereUnderCondition<_UPCGOctreeQueries::GetClosestPointIndexFromOtherPointIndex_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
              (this,0,(FOctreeNodeContext *)this,(FBoxCenterAndExtent *)&local_118._s_0,
               (<lambda_1> *)&local_158);
  }
  return local_168[0];
}

// GetFarthestPoint @ 149f49db0

void __cdecl
UPCGOctreeQueries::GetFarthestPoint
          (UPCGPointData *param_1,TVector<double> *param_2,bool *param_3,FPCGPoint *param_4,
          double param_5)

{
  int iVar1;
  code *pcVar2;
  double dVar3;
  undefined8 uVar4;
  long64 lVar5;
  bool bVar6;
  UClass *pUVar7;
  TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics> *this;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  TArray<FPCGPoint,TSizedDefaultAllocator<32>_> *pTVar10;
  longlong lVar11;
  uint local_res8 [2];
  undefined8 local_res18 [2];
  UPCGPointData *local_d8;
  TArray<FPCGPoint,TSizedDefaultAllocator<32>_> *local_d0;
  TVector<double> *local_c8;
  double local_c0;
  undefined8 *local_b8;
  uint *local_b0;
  undefined8 local_a8;
  TVector4<double>_u_0 local_98;
  undefined1 local_78 [16];
  double local_68;
  undefined8 local_60;
  undefined8 local_48;
  
  *param_3 = false;
  if (param_1 != (UPCGPointData *)0x0) {
    local_res18[0] = __real_0010000000000000;
    local_98._s_0.X = (param_2->field0_0x0)._s_0.X;
    local_98._s_0.Y = (param_2->field0_0x0)._s_0.Y;
    if (param_5 <= 0.0) {
      param_5 = 0.0;
    }
    local_98._s_0.Z = (param_2->field0_0x0)._s_0.Z;
    local_98._s_0.W = 0.0;
    local_60 = 0;
    local_res8[0] = 0xffffffff;
    local_68 = param_5 * __real_3ff6a09e667f3bcd;
    local_78._8_4_ = SUB84(local_68,0);
    local_78._0_8_ = local_68;
    local_78._12_4_ = (int)((ulonglong)local_68 >> 0x20);
    pUVar7 = Z_Construct_UClass_UPCGPointData_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
       (pTVar10 = &param_1->Points,
       (longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
       != &pUVar7->_padding_)) {
      pTVar10 = (TArray<FPCGPoint,TSizedDefaultAllocator<32>_> *)0x0;
    }
    this = (TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics> *)
           (**(code **)(param_1->_padding_ + 0x618))(param_1);
    local_b8 = local_res18;
    local_b0 = local_res8;
    local_a8 = local_48;
    local_d8 = param_1;
    local_d0 = pTVar10;
    local_c8 = param_2;
    local_c0 = param_5 * param_5;
    TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics>::
    FindElementsWithBoundsTestInternal<_UPCGOctreeQueries::ForEachPointInsideSphere<_PCGOctreeQueries::GetPointIndexInSphereUnderCondition<_UPCGOctreeQueries::GetFarthestPointIndex_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
              (this,0,(FOctreeNodeContext *)this,(FBoxCenterAndExtent *)&local_98._s_0,
               (<lambda_1> *)&local_d8);
    lVar11 = (longlong)(int)local_res8[0];
    if (local_res8[0] != 0xffffffff) {
      uVar9 = 0;
      if ((int)local_res8[0] < (param_1->Points).ArrayNum) {
        uVar9 = ~local_res8[0] >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar8 = (param_1->Points).AllocatorInstance.Data + lVar11 * 0xd0;
      if (pFVar8 != (FScriptContainerElement *)0x0) {
        *param_3 = true;
        dVar3 = *(double *)(pFVar8 + 8);
        (param_4->Transform).Rotation.XY.m128d_f64[0] = *(double *)pFVar8;
        (param_4->Transform).Rotation.XY.m128d_f64[1] = dVar3;
        dVar3 = *(double *)(pFVar8 + 0x18);
        (param_4->Transform).Rotation.ZW.m128d_f64[0] = *(double *)(pFVar8 + 0x10);
        (param_4->Transform).Rotation.ZW.m128d_f64[1] = dVar3;
        dVar3 = *(double *)(pFVar8 + 0x28);
        (param_4->Transform).Translation.XY.m128d_f64[0] = *(double *)(pFVar8 + 0x20);
        (param_4->Transform).Translation.XY.m128d_f64[1] = dVar3;
        dVar3 = *(double *)(pFVar8 + 0x38);
        (param_4->Transform).Translation.ZW.m128d_f64[0] = *(double *)(pFVar8 + 0x30);
        (param_4->Transform).Translation.ZW.m128d_f64[1] = dVar3;
        dVar3 = *(double *)(pFVar8 + 0x48);
        (param_4->Transform).Scale3D.XY.m128d_f64[0] = *(double *)(pFVar8 + 0x40);
        (param_4->Transform).Scale3D.XY.m128d_f64[1] = dVar3;
        dVar3 = *(double *)(pFVar8 + 0x58);
        (param_4->Transform).Scale3D.ZW.m128d_f64[0] = *(double *)(pFVar8 + 0x50);
        (param_4->Transform).Scale3D.ZW.m128d_f64[1] = dVar3;
        dVar3 = *(double *)(pFVar8 + 0x68);
        *(undefined8 *)&param_4->Density = *(undefined8 *)(pFVar8 + 0x60);
        (param_4->BoundsMin).field0_0x0._s_0.X = dVar3;
        dVar3 = *(double *)(pFVar8 + 0x78);
        (param_4->BoundsMin).field0_0x0._s_0.Y = *(double *)(pFVar8 + 0x70);
        (param_4->BoundsMin).field0_0x0._s_0.Z = dVar3;
        dVar3 = *(double *)(pFVar8 + 0x88);
        (param_4->BoundsMax).field0_0x0._s_0.X = *(double *)(pFVar8 + 0x80);
        (param_4->BoundsMax).field0_0x0._s_0.Y = dVar3;
        lVar11 = *(longlong *)(pFVar8 + 0x98);
        (param_4->BoundsMax).field0_0x0._s_0.Z = *(double *)(pFVar8 + 0x90);
        param_4->_padding_ = lVar11;
        dVar3 = *(double *)(pFVar8 + 0xa8);
        (param_4->Color).field0_0x0._s_0.X = *(double *)(pFVar8 + 0xa0);
        (param_4->Color).field0_0x0._s_0.Y = dVar3;
        dVar3 = *(double *)(pFVar8 + 0xb8);
        (param_4->Color).field0_0x0._s_0.Z = *(double *)(pFVar8 + 0xb0);
        (param_4->Color).field0_0x0._s_0.W = dVar3;
        uVar4 = *(undefined8 *)(pFVar8 + 0xc0);
        lVar5 = *(long64 *)(pFVar8 + 200);
        param_4->Steepness = (float)(int)uVar4;
        param_4->Seed = (int)((ulonglong)uVar4 >> 0x20);
        param_4->MetadataEntry = lVar5;
      }
    }
  }
  return;
}

// GetFarthestPoint @ 149f49ff0

FPCGPoint * __cdecl
UPCGOctreeQueries::GetFarthestPoint(UPCGPointData *param_1,TVector<double> *param_2,double param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics> *this;
  FPCGPoint *pFVar5;
  FPCGPoint *pFVar6;
  longlong lVar7;
  uint uVar8;
  uint local_res8 [2];
  undefined8 local_res20;
  UPCGPointData *local_c8;
  FPCGPoint *local_c0;
  TVector<double> *local_b8;
  double local_b0;
  undefined8 *local_a8;
  uint *local_a0;
  undefined8 local_98;
  TVector4<double>_u_0 local_88;
  undefined1 local_68 [16];
  double local_58;
  undefined8 local_50;
  undefined8 local_38;
  
  pFVar5 = (FPCGPoint *)0x0;
  if (param_1 != (UPCGPointData *)0x0) {
    if (param_3 <= 0.0) {
      param_3 = 0.0;
    }
    local_res20 = __real_0010000000000000;
    local_88._s_0.X = (param_2->field0_0x0)._s_0.X;
    local_88._s_0.Y = (param_2->field0_0x0)._s_0.Y;
    local_res8[0] = 0xffffffff;
    local_88._s_0.Z = (param_2->field0_0x0)._s_0.Z;
    local_58 = param_3 * __real_3ff6a09e667f3bcd;
    local_88._s_0.W = 0.0;
    local_50 = 0;
    local_68._8_4_ = SUB84(local_58,0);
    local_68._0_8_ = local_58;
    local_68._12_4_ = (int)((ulonglong)local_58 >> 0x20);
    pUVar4 = Z_Construct_UClass_UPCGPointData_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
       (pFVar6 = (FPCGPoint *)&param_1->Points,
       (longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
       != &pUVar4->_padding_)) {
      pFVar6 = pFVar5;
    }
    this = (TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics> *)
           (**(code **)(param_1->_padding_ + 0x618))(param_1);
    local_a8 = &local_res20;
    local_a0 = local_res8;
    local_98 = local_38;
    local_c8 = param_1;
    local_c0 = pFVar6;
    local_b8 = param_2;
    local_b0 = param_3 * param_3;
    TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics>::
    FindElementsWithBoundsTestInternal<_UPCGOctreeQueries::ForEachPointInsideSphere<_PCGOctreeQueries::GetPointIndexInSphereUnderCondition<_UPCGOctreeQueries::GetFarthestPointIndex_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
              (this,0,(FOctreeNodeContext *)this,(FBoxCenterAndExtent *)&local_88._s_0,
               (<lambda_1> *)&local_c8);
    lVar7 = (longlong)(int)local_res8[0];
    if (local_res8[0] != 0xffffffff) {
      uVar8 = 0;
      if ((int)local_res8[0] < (param_1->Points).ArrayNum) {
        uVar8 = ~local_res8[0] >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FPCGPoint *)(*pcVar2)();
        return pFVar5;
      }
      pFVar5 = (FPCGPoint *)((param_1->Points).AllocatorInstance.Data + lVar7 * 0xd0);
    }
  }
  return pFVar5;
}

// GetFarthestPointFromOtherPoint @ 149f4a190

void __cdecl
UPCGOctreeQueries::GetFarthestPointFromOtherPoint
          (UPCGPointData *param_1,int param_2,bool *param_3,FPCGPoint *param_4,double param_5)

{
  int iVar1;
  code *pcVar2;
  double dVar3;
  undefined8 uVar4;
  long64 lVar5;
  bool bVar6;
  UClass *pUVar7;
  TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics> *this;
  TArray<FPCGPoint,TSizedDefaultAllocator<32>_> *pTVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  uint local_res8 [2];
  undefined8 local_res18;
  UPCGPointData *local_d8;
  TArray<FPCGPoint,TSizedDefaultAllocator<32>_> *local_d0;
  double *local_c8;
  double local_c0;
  undefined8 *local_b8;
  uint *local_b0;
  FScriptContainerElement *local_a8;
  TVector4<double>_u_0 local_98;
  undefined1 local_78 [16];
  double local_68;
  undefined8 local_60;
  double local_58;
  double dStack_50;
  double local_48;
  
  *param_3 = false;
  if (((param_1 != (UPCGPointData *)0x0) && (-1 < param_2)) &&
     (param_2 < (param_1->Points).ArrayNum)) {
    if (param_5 <= 0.0) {
      param_5 = 0.0;
    }
    local_res18 = __real_0010000000000000;
    local_68 = param_5 * __real_3ff6a09e667f3bcd;
    local_98._s_0.W = 0.0;
    local_60 = 0;
    pFVar10 = (param_1->Points).AllocatorInstance.Data + (longlong)param_2 * 0xd0;
    local_res8[0] = 0xffffffff;
    local_98._s_0.X = (double)*(undefined8 *)(pFVar10 + 0x20);
    local_98._s_0.Y = (double)*(undefined8 *)(pFVar10 + 0x28);
    local_98._s_0.Z = (double)*(undefined8 *)(pFVar10 + 0x30);
    local_78._8_4_ = SUB84(local_68,0);
    local_78._0_8_ = local_68;
    local_78._12_4_ = (int)((ulonglong)local_68 >> 0x20);
    local_58 = local_98._s_0.X;
    dStack_50 = local_98._s_0.Y;
    local_48 = local_98._s_0.Z;
    pUVar7 = Z_Construct_UClass_UPCGPointData_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
       (pTVar8 = &param_1->Points,
       (longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
       != &pUVar7->_padding_)) {
      pTVar8 = (TArray<FPCGPoint,TSizedDefaultAllocator<32>_> *)0x0;
    }
    this = (TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics> *)
           (**(code **)(param_1->_padding_ + 0x618))(param_1);
    local_c8 = &local_58;
    local_b8 = &local_res18;
    local_b0 = local_res8;
    local_d8 = param_1;
    local_d0 = pTVar8;
    local_c0 = param_5 * param_5;
    local_a8 = pFVar10;
    TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics>::
    FindElementsWithBoundsTestInternal<_UPCGOctreeQueries::ForEachPointInsideSphere<_PCGOctreeQueries::GetPointIndexInSphereUnderCondition<_UPCGOctreeQueries::GetFarthestPointFromOtherPoint_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
              (this,0,(FOctreeNodeContext *)this,(FBoxCenterAndExtent *)&local_98._s_0,
               (<lambda_1> *)&local_d8);
    lVar9 = (longlong)(int)local_res8[0];
    if (local_res8[0] != 0xffffffff) {
      uVar11 = 0;
      if ((int)local_res8[0] < (param_1->Points).ArrayNum) {
        uVar11 = ~local_res8[0] >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar10 = (param_1->Points).AllocatorInstance.Data + lVar9 * 0xd0;
      if (pFVar10 != (FScriptContainerElement *)0x0) {
        *param_3 = true;
        dVar3 = *(double *)(pFVar10 + 8);
        (param_4->Transform).Rotation.XY.m128d_f64[0] = *(double *)pFVar10;
        (param_4->Transform).Rotation.XY.m128d_f64[1] = dVar3;
        dVar3 = *(double *)(pFVar10 + 0x18);
        (param_4->Transform).Rotation.ZW.m128d_f64[0] = *(double *)(pFVar10 + 0x10);
        (param_4->Transform).Rotation.ZW.m128d_f64[1] = dVar3;
        dVar3 = *(double *)(pFVar10 + 0x28);
        (param_4->Transform).Translation.XY.m128d_f64[0] = *(double *)(pFVar10 + 0x20);
        (param_4->Transform).Translation.XY.m128d_f64[1] = dVar3;
        dVar3 = *(double *)(pFVar10 + 0x38);
        (param_4->Transform).Translation.ZW.m128d_f64[0] = *(double *)(pFVar10 + 0x30);
        (param_4->Transform).Translation.ZW.m128d_f64[1] = dVar3;
        dVar3 = *(double *)(pFVar10 + 0x48);
        (param_4->Transform).Scale3D.XY.m128d_f64[0] = *(double *)(pFVar10 + 0x40);
        (param_4->Transform).Scale3D.XY.m128d_f64[1] = dVar3;
        dVar3 = *(double *)(pFVar10 + 0x58);
        (param_4->Transform).Scale3D.ZW.m128d_f64[0] = *(double *)(pFVar10 + 0x50);
        (param_4->Transform).Scale3D.ZW.m128d_f64[1] = dVar3;
        dVar3 = *(double *)(pFVar10 + 0x68);
        *(undefined8 *)&param_4->Density = *(undefined8 *)(pFVar10 + 0x60);
        (param_4->BoundsMin).field0_0x0._s_0.X = dVar3;
        dVar3 = *(double *)(pFVar10 + 0x78);
        (param_4->BoundsMin).field0_0x0._s_0.Y = *(double *)(pFVar10 + 0x70);
        (param_4->BoundsMin).field0_0x0._s_0.Z = dVar3;
        dVar3 = *(double *)(pFVar10 + 0x88);
        (param_4->BoundsMax).field0_0x0._s_0.X = *(double *)(pFVar10 + 0x80);
        (param_4->BoundsMax).field0_0x0._s_0.Y = dVar3;
        lVar9 = *(longlong *)(pFVar10 + 0x98);
        (param_4->BoundsMax).field0_0x0._s_0.Z = *(double *)(pFVar10 + 0x90);
        param_4->_padding_ = lVar9;
        dVar3 = *(double *)(pFVar10 + 0xa8);
        (param_4->Color).field0_0x0._s_0.X = *(double *)(pFVar10 + 0xa0);
        (param_4->Color).field0_0x0._s_0.Y = dVar3;
        dVar3 = *(double *)(pFVar10 + 0xb8);
        (param_4->Color).field0_0x0._s_0.Z = *(double *)(pFVar10 + 0xb0);
        (param_4->Color).field0_0x0._s_0.W = dVar3;
        uVar4 = *(undefined8 *)(pFVar10 + 0xc0);
        lVar5 = *(long64 *)(pFVar10 + 200);
        param_4->Steepness = (float)(int)uVar4;
        param_4->Seed = (int)((ulonglong)uVar4 >> 0x20);
        param_4->MetadataEntry = lVar5;
      }
    }
  }
  return;
}

// GetFarthestPointFromOtherPoint @ 149f4a400

FPCGPoint * __cdecl
UPCGOctreeQueries::GetFarthestPointFromOtherPoint
          (UPCGPointData *param_1,FPCGPoint *param_2,double param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics> *this;
  FPCGPoint *pFVar5;
  FPCGPoint *pFVar6;
  longlong lVar7;
  uint uVar8;
  uint local_res8 [2];
  undefined8 local_res10;
  double local_b8;
  double dStack_b0;
  double local_a8;
  UPCGPointData *local_a0;
  FPCGPoint *local_98;
  double *local_90;
  double local_88;
  undefined8 *local_80;
  uint *local_78;
  FPCGPoint *local_70;
  TVector4<double>_u_0 local_68;
  undefined1 local_48 [16];
  double local_38;
  undefined8 local_30;
  
  local_b8 = (param_2->Transform).Translation.XY.m128d_f64[0];
  dStack_b0 = (param_2->Transform).Translation.XY.m128d_f64[1];
  pFVar5 = (FPCGPoint *)0x0;
  local_a8 = (param_2->Transform).Translation.ZW.m128d_f64[0];
  if (param_1 != (UPCGPointData *)0x0) {
    if (param_3 <= 0.0) {
      param_3 = 0.0;
    }
    local_res10 = __real_0010000000000000;
    local_res8[0] = 0xffffffff;
    local_68._s_0.W = 0.0;
    local_38 = param_3 * __real_3ff6a09e667f3bcd;
    local_30 = 0;
    local_48._8_4_ = SUB84(local_38,0);
    local_48._0_8_ = local_38;
    local_48._12_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_68._s_0.X = local_b8;
    local_68._s_0.Y = dStack_b0;
    local_68._s_0.Z = local_a8;
    pUVar4 = Z_Construct_UClass_UPCGPointData_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
       (pFVar6 = (FPCGPoint *)&param_1->Points,
       (longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
       != &pUVar4->_padding_)) {
      pFVar6 = pFVar5;
    }
    this = (TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics> *)
           (**(code **)(param_1->_padding_ + 0x618))(param_1);
    local_90 = &local_b8;
    local_80 = &local_res10;
    local_78 = local_res8;
    local_a0 = param_1;
    local_98 = pFVar6;
    local_88 = param_3 * param_3;
    local_70 = param_2;
    TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics>::
    FindElementsWithBoundsTestInternal<_UPCGOctreeQueries::ForEachPointInsideSphere<_PCGOctreeQueries::GetPointIndexInSphereUnderCondition<_UPCGOctreeQueries::GetFarthestPointFromOtherPoint_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
              (this,0,(FOctreeNodeContext *)this,(FBoxCenterAndExtent *)&local_68._s_0,
               (<lambda_1> *)&local_a0);
    lVar7 = (longlong)(int)local_res8[0];
    if (local_res8[0] != 0xffffffff) {
      uVar8 = 0;
      if ((int)local_res8[0] < (param_1->Points).ArrayNum) {
        uVar8 = ~local_res8[0] >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FPCGPoint *)(*pcVar2)();
        return pFVar5;
      }
      pFVar5 = (FPCGPoint *)((param_1->Points).AllocatorInstance.Data + lVar7 * 0xd0);
    }
  }
  return pFVar5;
}

// GetFarthestPointIndex @ 149f4a5a0

int __cdecl
UPCGOctreeQueries::GetFarthestPointIndex
          (UPCGBasePointData *param_1,TVector<double> *param_2,double param_3)

{
  int iVar1;
  UClass *pUVar2;
  TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics> *this;
  UPCGBasePointData *pUVar3;
  int local_res8 [2];
  undefined8 local_res20;
  UPCGBasePointData *local_b8;
  UPCGBasePointData *local_b0;
  TVector<double> *local_a8;
  double local_a0;
  undefined8 *local_98;
  int *local_90;
  undefined8 local_88;
  TVector4<double>_u_0 local_78;
  undefined1 local_58 [16];
  double local_48;
  undefined8 local_40;
  undefined8 local_28;
  
  if (param_1 == (UPCGBasePointData *)0x0) {
    local_res8[0] = -1;
  }
  else {
    if (param_3 <= 0.0) {
      param_3 = 0.0;
    }
    local_res20 = __real_0010000000000000;
    local_78._s_0.X = (param_2->field0_0x0)._s_0.X;
    local_78._s_0.Y = (param_2->field0_0x0)._s_0.Y;
    local_78._s_0.W = 0.0;
    local_78._s_0.Z = (param_2->field0_0x0)._s_0.Z;
    local_48 = param_3 * __real_3ff6a09e667f3bcd;
    local_res8[0] = -1;
    local_40 = 0;
    local_58._8_4_ = SUB84(local_48,0);
    local_58._0_8_ = local_48;
    local_58._12_4_ = (int)((ulonglong)local_48 >> 0x20);
    pUVar2 = Z_Construct_UClass_UPCGPointData_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar2->_padding_)) {
      pUVar3 = (UPCGBasePointData *)0x0;
    }
    else {
      pUVar3 = param_1 + 1;
    }
    this = (TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics> *)
           (**(code **)(param_1->_padding_ + 0x618))(param_1);
    local_98 = &local_res20;
    local_90 = local_res8;
    local_88 = local_28;
    local_b8 = param_1;
    local_b0 = pUVar3;
    local_a8 = param_2;
    local_a0 = param_3 * param_3;
    TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics>::
    FindElementsWithBoundsTestInternal<_UPCGOctreeQueries::ForEachPointInsideSphere<_PCGOctreeQueries::GetPointIndexInSphereUnderCondition<_UPCGOctreeQueries::GetFarthestPointIndex_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
              (this,0,(FOctreeNodeContext *)this,(FBoxCenterAndExtent *)&local_78._s_0,
               (<lambda_1> *)&local_b8);
  }
  return local_res8[0];
}

// GetFarthestPointIndexFromOtherPointIndex @ 149f4a710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl
UPCGOctreeQueries::GetFarthestPointIndexFromOtherPointIndex
          (UPCGBasePointData *param_1,int param_2,double param_3)

{
  double *pdVar1;
  int iVar2;
  UClass *pUVar3;
  TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics> *this;
  longlong lVar4;
  UPCGBasePointData *pUVar5;
  undefined1 auStackY_198 [32];
  int local_168 [2];
  undefined8 local_160;
  UPCGBasePointData *local_158;
  UPCGBasePointData *local_150;
  double *local_148;
  double local_140;
  undefined8 *local_138;
  int *local_130;
  undefined8 local_128;
  TVector4<double>_u_0 local_118;
  undefined1 local_f8 [16];
  double local_e8;
  undefined8 local_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  int local_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  int local_a0;
  int local_9c;
  int local_98;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_198;
  (**(code **)(param_1->_padding_ + 0x500))(param_1,&local_a8);
  if ((param_2 < 0) || (local_98 <= param_2)) {
    local_168[0] = -1;
  }
  else {
    local_160 = __real_0010000000000000;
    if (param_3 <= 0.0) {
      param_3 = 0.0;
    }
    lVar4 = (longlong)(param_2 % local_9c) * (longlong)local_a0;
    local_118._s_0.W = 0.0;
    local_e8 = param_3 * __real_3ff6a09e667f3bcd;
    local_e0 = 0;
    local_168[0] = -1;
    pdVar1 = (double *)(lVar4 + 0x20 + local_a8);
    local_118._s_0.X = *pdVar1;
    local_118._s_0.Y = pdVar1[1];
    local_118._s_0.Z = *(double *)(lVar4 + 0x30 + local_a8);
    local_f8._8_4_ = SUB84(local_e8,0);
    local_f8._0_8_ = local_e8;
    local_f8._12_4_ = (int)((ulonglong)local_e8 >> 0x20);
    local_d8 = local_118._s_0.X;
    dStack_d0 = local_118._s_0.Y;
    local_c8 = local_118._s_0.Z;
    local_b0 = param_2;
    pUVar3 = Z_Construct_UClass_UPCGPointData_NoRegister();
    iVar2 = (int)pUVar3->_padding_;
    if (((*(int *)(param_1->_padding_ + 0x38) < iVar2) ||
        ((longlong *)
         *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
         &pUVar3->_padding_)) || (param_1 == (UPCGBasePointData *)0x0)) {
      pUVar5 = (UPCGBasePointData *)0x0;
    }
    else {
      pUVar5 = param_1 + 1;
    }
    this = (TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics> *)
           (**(code **)(param_1->_padding_ + 0x618))(param_1);
    local_148 = &local_d8;
    local_138 = &local_160;
    local_130 = local_168;
    local_128 = CONCAT44(uStack_ac,local_b0);
    local_158 = param_1;
    local_150 = pUVar5;
    local_140 = param_3 * param_3;
    TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics>::
    FindElementsWithBoundsTestInternal<_UPCGOctreeQueries::ForEachPointInsideSphere<_PCGOctreeQueries::GetPointIndexInSphereUnderCondition<_UPCGOctreeQueries::GetFarthestPointIndexFromOtherPointIndex_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
              (this,0,(FOctreeNodeContext *)this,(FBoxCenterAndExtent *)&local_118._s_0,
               (<lambda_1> *)&local_158);
  }
  return local_168[0];
}

// GetPointsInsideBounds @ 149f4c720

TArray<FPCGPoint,TSizedDefaultAllocator<32>_> * __cdecl
UPCGOctreeQueries::GetPointsInsideBounds
          (TArray<FPCGPoint,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          UPCGPointData *param_1,TBox<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics> *this;
  TArray<FPCGPoint,TSizedDefaultAllocator<32>_> local_88;
  <lambda_1> local_78;
  TVector4<double>_u_0 local_68;
  undefined1 local_48 [16];
  double local_38;
  undefined8 uStack_30;
  
  if (param_1 == (UPCGPointData *)0x0) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
  }
  else {
    local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.ArrayNum = 0;
    local_88.ArrayMax = 0;
    this = (TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics> *)
           (**(code **)(param_1->_padding_ + 0x618))(param_1);
    local_78.Points = &param_1->Points;
    dVar3 = ((param_2->Max).field0_0x0._s_0.X - (param_2->Min).field0_0x0._s_0.X) *
            __real_3fe0000000000000;
    local_78.Result = &local_88;
    local_38 = ((param_2->Max).field0_0x0._s_0.Z - (param_2->Min).field0_0x0._s_0.Z) *
               __real_3fe0000000000000;
    dVar2 = ((param_2->Max).field0_0x0._s_0.Y - (param_2->Min).field0_0x0._s_0.Y) *
            __real_3fe0000000000000;
    local_68._s_0.Z = local_38 + (param_2->Min).field0_0x0._s_0.Z;
    dVar1 = dVar2 + (param_2->Min).field0_0x0._s_0.Y;
    local_48._8_4_ = SUB84(dVar2,0);
    local_48._0_8_ = dVar3;
    local_48._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    local_68._s_0.W = 0.0;
    uStack_30 = 0;
    local_68._8_4_ = SUB84(dVar1,0);
    local_68._0_8_ = dVar3 + (param_2->Min).field0_0x0._s_0.X;
    local_68._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
    TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics>::
    FindElementsWithBoundsTestInternal<_UPCGOctreeQueries::GetPointsInsideBounds_::__l2::<lambda_1>_>
              (this,0,(FOctreeNodeContext *)this,(FBoxCenterAndExtent *)&local_68._s_0,&local_78);
    (__return_storage_ptr__->AllocatorInstance).Data = local_88.AllocatorInstance.Data;
    __return_storage_ptr__->ArrayNum = local_88.ArrayNum;
    __return_storage_ptr__->ArrayMax = local_88.ArrayMax;
  }
  return __return_storage_ptr__;
}

// GetPointsInsideSphere @ 149f4c870

TArray<FPCGPoint,TSizedDefaultAllocator<32>_> * __cdecl
UPCGOctreeQueries::GetPointsInsideSphere
          (TArray<FPCGPoint,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          UPCGPointData *param_1,TVector<double> *param_2,double param_3)

{
  int iVar1;
  UClass *pUVar2;
  TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics> *this;
  TArray<FPCGPoint,TSizedDefaultAllocator<32>_> *pTVar3;
  ForAnyElementType local_98;
  undefined8 local_90;
  UPCGPointData *local_88;
  TArray<FPCGPoint,TSizedDefaultAllocator<32>_> *local_80;
  TVector<double> *local_78;
  double local_70;
  ForAnyElementType *local_68;
  TVector4<double>_u_0 local_58;
  undefined1 local_38 [16];
  double local_28;
  undefined8 local_20;
  
  if (param_1 == (UPCGPointData *)0x0) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
  }
  else {
    local_58._s_0.X = (param_2->field0_0x0)._s_0.X;
    local_58._s_0.Y = (param_2->field0_0x0)._s_0.Y;
    local_98.Data = (FScriptContainerElement *)0x0;
    local_28 = param_3 * __real_3ff6a09e667f3bcd;
    local_90 = 0;
    local_58._s_0.Z = (param_2->field0_0x0)._s_0.Z;
    local_38._8_4_ = SUB84(local_28,0);
    local_38._0_8_ = local_28;
    local_38._12_4_ = (int)((ulonglong)local_28 >> 0x20);
    local_58._s_0.W = 0.0;
    local_20 = 0;
    pUVar2 = Z_Construct_UClass_UPCGPointData_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
       (pTVar3 = &param_1->Points,
       (longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
       != &pUVar2->_padding_)) {
      pTVar3 = (TArray<FPCGPoint,TSizedDefaultAllocator<32>_> *)0x0;
    }
    this = (TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics> *)
           (**(code **)(param_1->_padding_ + 0x618))(param_1);
    local_68 = &local_98;
    local_88 = param_1;
    local_80 = pTVar3;
    local_78 = param_2;
    local_70 = param_3 * param_3;
    TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics>::
    FindElementsWithBoundsTestInternal<_UPCGOctreeQueries::ForEachPointInsideSphere<_UPCGOctreeQueries::GetPointsInsideSphere_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
              (this,0,(FOctreeNodeContext *)this,(FBoxCenterAndExtent *)&local_58._s_0,
               (<lambda_1> *)&local_88);
    (__return_storage_ptr__->AllocatorInstance).Data = local_98.Data;
    __return_storage_ptr__->ArrayNum = (int)local_90;
    __return_storage_ptr__->ArrayMax = local_90._4_4_;
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 149f4dae0

UClass * __cdecl UPCGOctreeQueries::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGOctreeQueries.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGOctreeQueries",
               &Z_Registration_Info_UClass_UPCGOctreeQueries.InnerSingleton,
               StaticRegisterNativesUPCGOctreeQueries,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGOctreeQueries>,
               InternalVTableHelperCtorCaller<UPCGOctreeQueries>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGOctreeQueries.InnerSingleton;
}

// StaticRegisterNativesUPCGOctreeQueries @ 149f63ab0

void __cdecl UPCGOctreeQueries::StaticRegisterNativesUPCGOctreeQueries(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 6;
  local_18.DataPtr = Z_Construct_UClass_UPCGOctreeQueries_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetClosestPoint @ 149f6fe50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl UPCGOctreeQueries::execGetClosestPoint(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  int iVar2;
  FProperty *pFVar3;
  code *pcVar4;
  double dVar5;
  longlong *plVar6;
  bool bVar7;
  UClass *pUVar8;
  TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics> *this;
  double *pdVar9;
  longlong *plVar10;
  longlong lVar11;
  double *pdVar12;
  uchar *puVar13;
  uint uVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined1 auStackY_228 [32];
  uchar local_1f8;
  undefined1 local_1f7;
  int local_1f4;
  uint local_1f0 [2];
  double local_1e8;
  longlong *local_1e0;
  undefined8 local_1d8;
  longlong *local_1d0;
  longlong *local_1c8;
  double *local_1c0;
  double local_1b8;
  undefined8 *local_1b0;
  uint *local_1a8;
  undefined8 local_1a0;
  TVector4<double>_u_0 local_198;
  undefined1 local_178 [16];
  double local_168;
  undefined8 local_160;
  double local_158 [5];
  undefined1 local_130;
  undefined7 uStack_12f;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  undefined1 local_108 [16];
  double local_f8;
  double dStack_f0;
  undefined1 local_e8 [16];
  double local_d8;
  double dStack_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_228;
  local_1e0 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1e0,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1e0);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_158,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_158);
  }
  local_1f4 = 0;
  pdVar9 = local_158;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar9 = (double *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1f4,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1f4);
  }
  local_1f7 = local_1f4 != 0;
  local_1f8 = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1f8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1f8);
  }
  local_128 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_120 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_c8 = 0x3f800000;
  local_68 = 0x3f000000;
  puVar13 = &local_1f8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar13 = param_2->MostRecentPropertyAddress;
  }
  local_60 = 0xffffffffffffffff;
  local_118 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  dStack_110 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_108._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_108._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_108._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_e8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_e8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_e8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_f8 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  dStack_f0 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  uVar14 = (uint)__xmm_80000000000000008000000000000000;
  uVar15 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  local_d8 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  dStack_d0 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_b8 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >>
                            0x20) ^ uVar15,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0) ^ uVar14);
  local_c0 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._0_8_ >>
                            0x20) ^ uVar15,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X,0) ^ uVar14);
  local_a8 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  dStack_a0 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_88 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_80 = _UNK_150689688;
  local_78 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_70 = _UNK_150689688;
  local_b0 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >>
                            0x20) ^ uVar15,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^ uVar14);
  local_98 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_128,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_128);
  }
  local_1e8 = 0.0;
  pdVar12 = &local_128;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar12 = (double *)param_2->MostRecentPropertyAddress;
  }
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1e8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1e8);
  }
  plVar6 = local_1e0;
  dVar5 = local_1e8;
  uVar16 = SUB84(local_1e8,0);
  uVar17 = (undefined4)((ulonglong)local_1e8 >> 0x20);
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *puVar13 = '\0';
  if (plVar6 != (longlong *)0x0) {
    if (dVar5 <= 0.0) {
      uVar16 = 0;
      uVar17 = 0;
    }
    local_1d8 = __real_7fefffffffffffff;
    local_198._s_0.X = *pdVar9;
    local_198._s_0.Y = pdVar9[1];
    local_1f0[0] = 0xffffffff;
    local_198._s_0.W = 0.0;
    local_168 = (double)CONCAT44(uVar17,uVar16) * __real_3ff6a09e667f3bcd;
    local_130 = local_1f7;
    local_198._s_0.Z = pdVar9[2];
    local_178._8_4_ = SUB84(local_168,0);
    local_178._0_8_ = local_168;
    local_178._12_4_ = (int)((ulonglong)local_168 >> 0x20);
    local_160 = 0;
    pUVar8 = Z_Construct_UClass_UPCGPointData_NoRegister();
    iVar2 = (int)pUVar8->_padding_;
    if ((*(int *)(plVar6[2] + 0x38) < iVar2) ||
       (plVar10 = plVar6 + 0x36,
       (longlong *)*(undefined1 **)(*(longlong *)(plVar6[2] + 0x30) + (longlong)iVar2 * 8) !=
       &pUVar8->_padding_)) {
      plVar10 = (longlong *)0x0;
    }
    this = (TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics> *)
           (**(code **)(*plVar6 + 0x618))(plVar6);
    local_1b0 = &local_1d8;
    local_1a8 = local_1f0;
    local_1d0 = plVar6;
    local_1a0 = CONCAT71(uStack_12f,local_130);
    local_1c8 = plVar10;
    local_1c0 = pdVar9;
    local_1b8 = (double)CONCAT44(uVar17,uVar16) * (double)CONCAT44(uVar17,uVar16);
    TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics>::
    FindElementsWithBoundsTestInternal<_UPCGOctreeQueries::ForEachPointInsideSphere<_PCGOctreeQueries::GetPointIndexInSphereUnderCondition<_UPCGOctreeQueries::GetClosestPointIndex_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
              (this,0,(FOctreeNodeContext *)this,(FBoxCenterAndExtent *)&local_198._s_0,
               (<lambda_1> *)&local_1d0);
    lVar11 = (longlong)(int)local_1f0[0];
    if (local_1f0[0] != 0xffffffff) {
      uVar14 = 0;
      if ((int)local_1f0[0] < (int)plVar6[0x37]) {
        uVar14 = ~local_1f0[0] >> 0x1f;
      }
      if (uVar14 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      pdVar9 = (double *)(lVar11 * 0xd0 + plVar6[0x36]);
      if (pdVar9 != (double *)0x0) {
        *puVar13 = '\x01';
        dVar5 = pdVar9[1];
        *pdVar12 = *pdVar9;
        pdVar12[1] = dVar5;
        dVar5 = pdVar9[3];
        pdVar12[2] = pdVar9[2];
        pdVar12[3] = dVar5;
        dVar5 = pdVar9[5];
        pdVar12[4] = pdVar9[4];
        pdVar12[5] = dVar5;
        dVar5 = pdVar9[7];
        pdVar12[6] = pdVar9[6];
        pdVar12[7] = dVar5;
        dVar5 = pdVar9[9];
        pdVar12[8] = pdVar9[8];
        pdVar12[9] = dVar5;
        dVar5 = pdVar9[0xb];
        pdVar12[10] = pdVar9[10];
        pdVar12[0xb] = dVar5;
        dVar5 = pdVar9[0xd];
        pdVar12[0xc] = pdVar9[0xc];
        pdVar12[0xd] = dVar5;
        dVar5 = pdVar9[0xf];
        pdVar12[0xe] = pdVar9[0xe];
        pdVar12[0xf] = dVar5;
        dVar5 = pdVar9[0x11];
        pdVar12[0x10] = pdVar9[0x10];
        pdVar12[0x11] = dVar5;
        dVar5 = pdVar9[0x13];
        pdVar12[0x12] = pdVar9[0x12];
        pdVar12[0x13] = dVar5;
        dVar5 = pdVar9[0x15];
        pdVar12[0x14] = pdVar9[0x14];
        pdVar12[0x15] = dVar5;
        dVar5 = pdVar9[0x17];
        pdVar12[0x16] = pdVar9[0x16];
        pdVar12[0x17] = dVar5;
        dVar5 = pdVar9[0x19];
        pdVar12[0x18] = pdVar9[0x18];
        pdVar12[0x19] = dVar5;
      }
    }
  }
  return;
}

// execGetClosestPointFromOtherPoint @ 149f70330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UPCGOctreeQueries::execGetClosestPointFromOtherPoint(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  int iVar2;
  FProperty *pFVar3;
  code *pcVar4;
  double dVar5;
  longlong *plVar6;
  bool bVar7;
  longlong lVar8;
  UClass *pUVar9;
  TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics> *this;
  double *pdVar10;
  longlong *plVar11;
  double *pdVar12;
  uchar *puVar13;
  uint uVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined1 auStackY_218 [32];
  uchar local_1e8 [4];
  int local_1e4;
  uint local_1e0 [2];
  double local_1d8;
  longlong *local_1d0;
  undefined8 local_1c8;
  longlong *local_1c0;
  longlong *local_1b8;
  double *local_1b0;
  double local_1a8;
  undefined8 *local_1a0;
  uint *local_198;
  longlong local_190;
  TVector4<double>_u_0 local_188;
  undefined1 local_168 [16];
  double local_158;
  undefined8 local_150;
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  undefined1 local_108 [16];
  double local_f8;
  double dStack_f0;
  undefined1 local_e8 [16];
  double local_d8;
  double dStack_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_218;
  local_1d0 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1d0,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1d0);
  }
  local_1e4 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1e4,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1e4);
  }
  local_1e8[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_1e8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_1e8);
  }
  local_128 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_120 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_c8 = 0x3f800000;
  local_68 = 0x3f000000;
  puVar13 = local_1e8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar13 = param_2->MostRecentPropertyAddress;
  }
  local_60 = 0xffffffffffffffff;
  local_118 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  dStack_110 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_108._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_108._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_108._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_e8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_e8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_e8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_f8 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  dStack_f0 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  uVar14 = (uint)__xmm_80000000000000008000000000000000;
  uVar15 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  local_d8 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  dStack_d0 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_b8 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >>
                            0x20) ^ uVar15,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0) ^ uVar14);
  local_c0 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._0_8_ >>
                            0x20) ^ uVar15,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X,0) ^ uVar14);
  local_a8 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  dStack_a0 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_88 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_80 = _UNK_150689688;
  local_78 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_70 = _UNK_150689688;
  local_b0 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >>
                            0x20) ^ uVar15,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^ uVar14);
  local_98 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_128,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_128);
  }
  local_1d8 = 0.0;
  pdVar12 = &local_128;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar12 = (double *)param_2->MostRecentPropertyAddress;
  }
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1d8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1d8);
  }
  plVar6 = local_1d0;
  dVar5 = local_1d8;
  iVar2 = local_1e4;
  uVar16 = SUB84(local_1d8,0);
  uVar17 = (undefined4)((ulonglong)local_1d8 >> 0x20);
  lVar8 = (longlong)local_1e4;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *puVar13 = '\0';
  if (((plVar6 != (longlong *)0x0) && (-1 < iVar2)) && (iVar2 < (int)plVar6[0x37])) {
    if (dVar5 <= 0.0) {
      uVar16 = 0;
      uVar17 = 0;
    }
    local_1c8 = __real_7fefffffffffffff;
    local_158 = (double)CONCAT44(uVar17,uVar16) * __real_3ff6a09e667f3bcd;
    local_188._s_0.W = 0.0;
    local_150 = 0;
    lVar8 = lVar8 * 0xd0 + plVar6[0x36];
    local_1e0[0] = 0xffffffff;
    local_188._s_0.X = *(double *)(lVar8 + 0x20);
    local_188._s_0.Y = *(double *)(lVar8 + 0x28);
    local_188._s_0.Z = *(double *)(lVar8 + 0x30);
    local_168._8_4_ = SUB84(local_158,0);
    local_168._0_8_ = local_158;
    local_168._12_4_ = (int)((ulonglong)local_158 >> 0x20);
    local_148 = local_188._s_0.X;
    dStack_140 = local_188._s_0.Y;
    local_138 = local_188._s_0.Z;
    pUVar9 = Z_Construct_UClass_UPCGPointData_NoRegister();
    iVar2 = (int)pUVar9->_padding_;
    if ((*(int *)(plVar6[2] + 0x38) < iVar2) ||
       (plVar11 = plVar6 + 0x36,
       (longlong *)*(undefined1 **)(*(longlong *)(plVar6[2] + 0x30) + (longlong)iVar2 * 8) !=
       &pUVar9->_padding_)) {
      plVar11 = (longlong *)0x0;
    }
    this = (TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics> *)
           (**(code **)(*plVar6 + 0x618))(plVar6);
    local_1b0 = &local_148;
    local_1a0 = &local_1c8;
    local_1c0 = plVar6;
    local_198 = local_1e0;
    local_1b8 = plVar11;
    local_1a8 = (double)CONCAT44(uVar17,uVar16) * (double)CONCAT44(uVar17,uVar16);
    local_190 = lVar8;
    TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics>::
    FindElementsWithBoundsTestInternal<_UPCGOctreeQueries::ForEachPointInsideSphere<_PCGOctreeQueries::GetPointIndexInSphereUnderCondition<_UPCGOctreeQueries::GetClosestPointFromOtherPoint_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
              (this,0,(FOctreeNodeContext *)this,(FBoxCenterAndExtent *)&local_188._s_0,
               (<lambda_1> *)&local_1c0);
    lVar8 = (longlong)(int)local_1e0[0];
    if (local_1e0[0] != 0xffffffff) {
      uVar14 = 0;
      if ((int)local_1e0[0] < (int)plVar6[0x37]) {
        uVar14 = ~local_1e0[0] >> 0x1f;
      }
      if (uVar14 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      pdVar10 = (double *)(lVar8 * 0xd0 + plVar6[0x36]);
      if (pdVar10 != (double *)0x0) {
        *puVar13 = '\x01';
        dVar5 = pdVar10[1];
        *pdVar12 = *pdVar10;
        pdVar12[1] = dVar5;
        dVar5 = pdVar10[3];
        pdVar12[2] = pdVar10[2];
        pdVar12[3] = dVar5;
        dVar5 = pdVar10[5];
        pdVar12[4] = pdVar10[4];
        pdVar12[5] = dVar5;
        dVar5 = pdVar10[7];
        pdVar12[6] = pdVar10[6];
        pdVar12[7] = dVar5;
        dVar5 = pdVar10[9];
        pdVar12[8] = pdVar10[8];
        pdVar12[9] = dVar5;
        dVar5 = pdVar10[0xb];
        pdVar12[10] = pdVar10[10];
        pdVar12[0xb] = dVar5;
        dVar5 = pdVar10[0xd];
        pdVar12[0xc] = pdVar10[0xc];
        pdVar12[0xd] = dVar5;
        dVar5 = pdVar10[0xf];
        pdVar12[0xe] = pdVar10[0xe];
        pdVar12[0xf] = dVar5;
        dVar5 = pdVar10[0x11];
        pdVar12[0x10] = pdVar10[0x10];
        pdVar12[0x11] = dVar5;
        dVar5 = pdVar10[0x13];
        pdVar12[0x12] = pdVar10[0x12];
        pdVar12[0x13] = dVar5;
        dVar5 = pdVar10[0x15];
        pdVar12[0x14] = pdVar10[0x14];
        pdVar12[0x15] = dVar5;
        dVar5 = pdVar10[0x17];
        pdVar12[0x16] = pdVar10[0x16];
        pdVar12[0x17] = dVar5;
        dVar5 = pdVar10[0x19];
        pdVar12[0x18] = pdVar10[0x18];
        pdVar12[0x19] = dVar5;
      }
    }
  }
  return;
}

// execGetFarthestPoint @ 149f70890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl UPCGOctreeQueries::execGetFarthestPoint(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  int iVar2;
  FProperty *pFVar3;
  code *pcVar4;
  double dVar5;
  longlong *plVar6;
  bool bVar7;
  UClass *pUVar8;
  TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics> *this;
  double *pdVar9;
  longlong *plVar10;
  longlong lVar11;
  double *pdVar12;
  uchar *puVar13;
  uint uVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined1 auStackY_228 [32];
  uchar local_1f8 [4];
  uint local_1f4;
  double local_1f0;
  longlong *local_1e8;
  undefined8 local_1e0;
  longlong *local_1d8;
  longlong *local_1d0;
  double *local_1c8;
  double local_1c0;
  undefined8 *local_1b8;
  uint *local_1b0;
  undefined8 local_1a8;
  TVector4<double>_u_0 local_198;
  undefined1 local_178 [16];
  double local_168;
  undefined8 local_160;
  double local_158 [5];
  undefined8 local_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  undefined1 local_108 [16];
  double local_f8;
  double dStack_f0;
  undefined1 local_e8 [16];
  double local_d8;
  double dStack_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_228;
  local_1e8 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1e8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1e8);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_158,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_158);
  }
  pdVar12 = (double *)param_2->MostRecentPropertyAddress;
  local_1f8[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pdVar9 = local_158;
  if (pdVar12 != (double *)0x0) {
    pdVar9 = pdVar12;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_1f8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_1f8);
  }
  local_128 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_120 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_c8 = 0x3f800000;
  local_68 = 0x3f000000;
  puVar13 = local_1f8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar13 = param_2->MostRecentPropertyAddress;
  }
  local_60 = 0xffffffffffffffff;
  local_118 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  dStack_110 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_108._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_108._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_108._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_e8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_e8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_e8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_f8 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  dStack_f0 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  uVar14 = (uint)__xmm_80000000000000008000000000000000;
  uVar15 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  local_d8 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  dStack_d0 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_b8 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >>
                            0x20) ^ uVar15,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0) ^ uVar14);
  local_c0 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._0_8_ >>
                            0x20) ^ uVar15,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X,0) ^ uVar14);
  local_a8 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  dStack_a0 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_88 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_80 = _UNK_150689688;
  local_78 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_70 = _UNK_150689688;
  local_b0 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >>
                            0x20) ^ uVar15,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^ uVar14);
  local_98 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_128,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_128);
  }
  local_1f0 = 0.0;
  pdVar12 = &local_128;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar12 = (double *)param_2->MostRecentPropertyAddress;
  }
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1f0,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1f0);
  }
  plVar6 = local_1e8;
  dVar5 = local_1f0;
  uVar16 = SUB84(local_1f0,0);
  uVar17 = (undefined4)((ulonglong)local_1f0 >> 0x20);
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *puVar13 = '\0';
  if (plVar6 != (longlong *)0x0) {
    if (dVar5 <= 0.0) {
      uVar16 = 0;
      uVar17 = 0;
    }
    local_1e0 = __real_0010000000000000;
    local_198._s_0.X = *pdVar9;
    local_198._s_0.Y = pdVar9[1];
    local_1f4 = 0xffffffff;
    local_198._s_0.W = 0.0;
    local_168 = (double)CONCAT44(uVar17,uVar16) * __real_3ff6a09e667f3bcd;
    local_198._s_0.Z = pdVar9[2];
    local_160 = 0;
    local_178._8_4_ = SUB84(local_168,0);
    local_178._0_8_ = local_168;
    local_178._12_4_ = (int)((ulonglong)local_168 >> 0x20);
    pUVar8 = Z_Construct_UClass_UPCGPointData_NoRegister();
    iVar2 = (int)pUVar8->_padding_;
    if ((*(int *)(plVar6[2] + 0x38) < iVar2) ||
       (plVar10 = plVar6 + 0x36,
       (longlong *)*(undefined1 **)(*(longlong *)(plVar6[2] + 0x30) + (longlong)iVar2 * 8) !=
       &pUVar8->_padding_)) {
      plVar10 = (longlong *)0x0;
    }
    this = (TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics> *)
           (**(code **)(*plVar6 + 0x618))(plVar6);
    local_1b8 = &local_1e0;
    local_1b0 = &local_1f4;
    local_1d8 = plVar6;
    local_1a8 = local_130;
    local_1d0 = plVar10;
    local_1c8 = pdVar9;
    local_1c0 = (double)CONCAT44(uVar17,uVar16) * (double)CONCAT44(uVar17,uVar16);
    TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics>::
    FindElementsWithBoundsTestInternal<_UPCGOctreeQueries::ForEachPointInsideSphere<_PCGOctreeQueries::GetPointIndexInSphereUnderCondition<_UPCGOctreeQueries::GetFarthestPointIndex_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
              (this,0,(FOctreeNodeContext *)this,(FBoxCenterAndExtent *)&local_198._s_0,
               (<lambda_1> *)&local_1d8);
    lVar11 = (longlong)(int)local_1f4;
    if (local_1f4 != 0xffffffff) {
      uVar14 = 0;
      if ((int)local_1f4 < (int)plVar6[0x37]) {
        uVar14 = ~local_1f4 >> 0x1f;
      }
      if (uVar14 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      pdVar9 = (double *)(lVar11 * 0xd0 + plVar6[0x36]);
      if (pdVar9 != (double *)0x0) {
        *puVar13 = '\x01';
        dVar5 = pdVar9[1];
        *pdVar12 = *pdVar9;
        pdVar12[1] = dVar5;
        dVar5 = pdVar9[3];
        pdVar12[2] = pdVar9[2];
        pdVar12[3] = dVar5;
        dVar5 = pdVar9[5];
        pdVar12[4] = pdVar9[4];
        pdVar12[5] = dVar5;
        dVar5 = pdVar9[7];
        pdVar12[6] = pdVar9[6];
        pdVar12[7] = dVar5;
        dVar5 = pdVar9[9];
        pdVar12[8] = pdVar9[8];
        pdVar12[9] = dVar5;
        dVar5 = pdVar9[0xb];
        pdVar12[10] = pdVar9[10];
        pdVar12[0xb] = dVar5;
        dVar5 = pdVar9[0xd];
        pdVar12[0xc] = pdVar9[0xc];
        pdVar12[0xd] = dVar5;
        dVar5 = pdVar9[0xf];
        pdVar12[0xe] = pdVar9[0xe];
        pdVar12[0xf] = dVar5;
        dVar5 = pdVar9[0x11];
        pdVar12[0x10] = pdVar9[0x10];
        pdVar12[0x11] = dVar5;
        dVar5 = pdVar9[0x13];
        pdVar12[0x12] = pdVar9[0x12];
        pdVar12[0x13] = dVar5;
        dVar5 = pdVar9[0x15];
        pdVar12[0x14] = pdVar9[0x14];
        pdVar12[0x15] = dVar5;
        dVar5 = pdVar9[0x17];
        pdVar12[0x16] = pdVar9[0x16];
        pdVar12[0x17] = dVar5;
        dVar5 = pdVar9[0x19];
        pdVar12[0x18] = pdVar9[0x18];
        pdVar12[0x19] = dVar5;
      }
    }
  }
  return;
}

// execGetFarthestPointFromOtherPoint @ 149f70d20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UPCGOctreeQueries::execGetFarthestPointFromOtherPoint
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  int iVar2;
  FProperty *pFVar3;
  code *pcVar4;
  double dVar5;
  longlong *plVar6;
  bool bVar7;
  longlong lVar8;
  UClass *pUVar9;
  TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics> *this;
  double *pdVar10;
  longlong *plVar11;
  double *pdVar12;
  uchar *puVar13;
  uint uVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined1 auStackY_218 [32];
  uchar local_1e8 [4];
  int local_1e4;
  uint local_1e0 [2];
  double local_1d8;
  longlong *local_1d0;
  undefined8 local_1c8;
  longlong *local_1c0;
  longlong *local_1b8;
  double *local_1b0;
  double local_1a8;
  undefined8 *local_1a0;
  uint *local_198;
  longlong local_190;
  TVector4<double>_u_0 local_188;
  undefined1 local_168 [16];
  double local_158;
  undefined8 local_150;
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  undefined1 local_108 [16];
  double local_f8;
  double dStack_f0;
  undefined1 local_e8 [16];
  double local_d8;
  double dStack_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_218;
  local_1d0 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1d0,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1d0);
  }
  local_1e4 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1e4,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1e4);
  }
  local_1e8[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_1e8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_1e8);
  }
  local_128 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_120 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_c8 = 0x3f800000;
  local_68 = 0x3f000000;
  puVar13 = local_1e8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar13 = param_2->MostRecentPropertyAddress;
  }
  local_60 = 0xffffffffffffffff;
  local_118 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  dStack_110 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_108._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_108._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_108._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_e8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_e8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_e8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_f8 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  dStack_f0 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  uVar14 = (uint)__xmm_80000000000000008000000000000000;
  uVar15 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  local_d8 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  dStack_d0 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_b8 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >>
                            0x20) ^ uVar15,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0) ^ uVar14);
  local_c0 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._0_8_ >>
                            0x20) ^ uVar15,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X,0) ^ uVar14);
  local_a8 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  dStack_a0 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_88 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_80 = _UNK_150689688;
  local_78 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_70 = _UNK_150689688;
  local_b0 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >>
                            0x20) ^ uVar15,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^ uVar14);
  local_98 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_128,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_128);
  }
  local_1d8 = 0.0;
  pdVar12 = &local_128;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar12 = (double *)param_2->MostRecentPropertyAddress;
  }
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1d8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1d8);
  }
  plVar6 = local_1d0;
  dVar5 = local_1d8;
  iVar2 = local_1e4;
  uVar16 = SUB84(local_1d8,0);
  uVar17 = (undefined4)((ulonglong)local_1d8 >> 0x20);
  lVar8 = (longlong)local_1e4;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *puVar13 = '\0';
  if (((plVar6 != (longlong *)0x0) && (-1 < iVar2)) && (iVar2 < (int)plVar6[0x37])) {
    if (dVar5 <= 0.0) {
      uVar16 = 0;
      uVar17 = 0;
    }
    local_1c8 = __real_0010000000000000;
    local_158 = (double)CONCAT44(uVar17,uVar16) * __real_3ff6a09e667f3bcd;
    local_188._s_0.W = 0.0;
    local_150 = 0;
    lVar8 = lVar8 * 0xd0 + plVar6[0x36];
    local_1e0[0] = 0xffffffff;
    local_188._s_0.X = *(double *)(lVar8 + 0x20);
    local_188._s_0.Y = *(double *)(lVar8 + 0x28);
    local_188._s_0.Z = *(double *)(lVar8 + 0x30);
    local_168._8_4_ = SUB84(local_158,0);
    local_168._0_8_ = local_158;
    local_168._12_4_ = (int)((ulonglong)local_158 >> 0x20);
    local_148 = local_188._s_0.X;
    dStack_140 = local_188._s_0.Y;
    local_138 = local_188._s_0.Z;
    pUVar9 = Z_Construct_UClass_UPCGPointData_NoRegister();
    iVar2 = (int)pUVar9->_padding_;
    if ((*(int *)(plVar6[2] + 0x38) < iVar2) ||
       (plVar11 = plVar6 + 0x36,
       (longlong *)*(undefined1 **)(*(longlong *)(plVar6[2] + 0x30) + (longlong)iVar2 * 8) !=
       &pUVar9->_padding_)) {
      plVar11 = (longlong *)0x0;
    }
    this = (TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics> *)
           (**(code **)(*plVar6 + 0x618))(plVar6);
    local_1b0 = &local_148;
    local_1a0 = &local_1c8;
    local_1c0 = plVar6;
    local_198 = local_1e0;
    local_1b8 = plVar11;
    local_1a8 = (double)CONCAT44(uVar17,uVar16) * (double)CONCAT44(uVar17,uVar16);
    local_190 = lVar8;
    TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics>::
    FindElementsWithBoundsTestInternal<_UPCGOctreeQueries::ForEachPointInsideSphere<_PCGOctreeQueries::GetPointIndexInSphereUnderCondition<_UPCGOctreeQueries::GetFarthestPointFromOtherPoint_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
              (this,0,(FOctreeNodeContext *)this,(FBoxCenterAndExtent *)&local_188._s_0,
               (<lambda_1> *)&local_1c0);
    lVar8 = (longlong)(int)local_1e0[0];
    if (local_1e0[0] != 0xffffffff) {
      uVar14 = 0;
      if ((int)local_1e0[0] < (int)plVar6[0x37]) {
        uVar14 = ~local_1e0[0] >> 0x1f;
      }
      if (uVar14 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      pdVar10 = (double *)(lVar8 * 0xd0 + plVar6[0x36]);
      if (pdVar10 != (double *)0x0) {
        *puVar13 = '\x01';
        dVar5 = pdVar10[1];
        *pdVar12 = *pdVar10;
        pdVar12[1] = dVar5;
        dVar5 = pdVar10[3];
        pdVar12[2] = pdVar10[2];
        pdVar12[3] = dVar5;
        dVar5 = pdVar10[5];
        pdVar12[4] = pdVar10[4];
        pdVar12[5] = dVar5;
        dVar5 = pdVar10[7];
        pdVar12[6] = pdVar10[6];
        pdVar12[7] = dVar5;
        dVar5 = pdVar10[9];
        pdVar12[8] = pdVar10[8];
        pdVar12[9] = dVar5;
        dVar5 = pdVar10[0xb];
        pdVar12[10] = pdVar10[10];
        pdVar12[0xb] = dVar5;
        dVar5 = pdVar10[0xd];
        pdVar12[0xc] = pdVar10[0xc];
        pdVar12[0xd] = dVar5;
        dVar5 = pdVar10[0xf];
        pdVar12[0xe] = pdVar10[0xe];
        pdVar12[0xf] = dVar5;
        dVar5 = pdVar10[0x11];
        pdVar12[0x10] = pdVar10[0x10];
        pdVar12[0x11] = dVar5;
        dVar5 = pdVar10[0x13];
        pdVar12[0x12] = pdVar10[0x12];
        pdVar12[0x13] = dVar5;
        dVar5 = pdVar10[0x15];
        pdVar12[0x14] = pdVar10[0x14];
        pdVar12[0x15] = dVar5;
        dVar5 = pdVar10[0x17];
        pdVar12[0x16] = pdVar10[0x16];
        pdVar12[0x17] = dVar5;
        dVar5 = pdVar10[0x19];
        pdVar12[0x18] = pdVar10[0x18];
        pdVar12[0x19] = dVar5;
      }
    }
  }
  return;
}

// execGetPointsInsideBounds @ 149f71250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UPCGOctreeQueries::execGetPointsInsideBounds(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double dVar2;
  double dVar3;
  longlong *plVar4;
  TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics> *this;
  ForAnyElementType FVar5;
  int iVar6;
  int iVar7;
  double *pdVar8;
  undefined1 auStackY_128 [32];
  longlong *local_f8;
  TArray<FPCGPoint,TSizedDefaultAllocator<32>_> local_f0;
  <lambda_1> local_e0;
  TVector4<double>_u_0 local_c8;
  undefined1 local_a8 [16];
  double local_98;
  undefined8 uStack_90;
  undefined1 local_88 [16];
  double local_78 [6];
  undefined1 local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_128;
  local_f8 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f8);
  }
  local_48 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_78);
  }
  plVar4 = local_f8;
  pdVar8 = local_78;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar8 = (double *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_f8 == (longlong *)0x0) {
    FVar5.Data = (FScriptContainerElement *)0x0;
    iVar6 = 0;
    iVar7 = 0;
  }
  else {
    local_f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f0.ArrayNum = 0;
    local_f0.ArrayMax = 0;
    this = (TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics> *)
           (**(code **)(*local_f8 + 0x618))(local_f8);
    local_e0.Points = (TArray<FPCGPoint,TSizedDefaultAllocator<32>_> *)(plVar4 + 0x36);
    dVar3 = (pdVar8[3] - *pdVar8) * __real_3fe0000000000000;
    local_e0.Result = &local_f0;
    local_98 = (pdVar8[5] - pdVar8[2]) * __real_3fe0000000000000;
    dVar2 = (pdVar8[4] - pdVar8[1]) * __real_3fe0000000000000;
    local_c8._s_0.Z = local_98 + pdVar8[2];
    local_a8._8_4_ = SUB84(dVar2,0);
    local_a8._0_8_ = dVar3;
    local_a8._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    local_c8._s_0.W = 0.0;
    uStack_90 = 0;
    local_c8._8_4_ = SUB84(dVar2 + pdVar8[1],0);
    local_c8._0_8_ = dVar3 + *pdVar8;
    local_c8._12_4_ = (int)((ulonglong)(dVar2 + pdVar8[1]) >> 0x20);
    TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics>::
    FindElementsWithBoundsTestInternal<_UPCGOctreeQueries::GetPointsInsideBounds_::__l2::<lambda_1>_>
              (this,0,(FOctreeNodeContext *)this,(FBoxCenterAndExtent *)&local_c8._s_0,&local_e0);
    FVar5.Data = local_f0.AllocatorInstance.Data;
    iVar6 = local_f0.ArrayNum;
    iVar7 = local_f0.ArrayMax;
  }
  if (param_3 != local_88) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = FVar5.Data;
    *(int *)((longlong)param_3 + 8) = iVar6;
    *(int *)((longlong)param_3 + 0xc) = iVar7;
    FVar5.Data = (FScriptContainerElement *)0x0;
  }
  if (FVar5.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar5.Data);
  }
  return;
}

// execGetPointsInsideSphere @ 149f714d0

void __cdecl
UPCGOctreeQueries::execGetPointsInsideSphere(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  int iVar2;
  FProperty *pFVar3;
  double dVar4;
  UClass *pUVar5;
  TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics> *this;
  longlong *plVar6;
  undefined4 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined4 uVar10;
  double *pdVar11;
  longlong *local_res10;
  double local_res18;
  longlong *local_f8;
  undefined8 local_f0;
  longlong *local_e8;
  longlong *local_e0;
  double *local_d8;
  double local_d0;
  longlong **local_c8;
  TVector4<double>_u_0 local_b8;
  undefined1 local_98 [16];
  double local_88;
  undefined8 local_80;
  double local_78 [3];
  undefined1 local_60 [56];
  
  plVar9 = (longlong *)0x0;
  local_res10 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_78,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_78);
  }
  local_res18 = 0.0;
  pdVar11 = local_78;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar11 = (double *)param_2->MostRecentPropertyAddress;
  }
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  plVar6 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == (longlong *)0x0) {
    plVar6 = plVar9;
    uVar7 = 0;
    uVar10 = 0;
  }
  else {
    local_b8._s_0.X = *pdVar11;
    local_b8._s_0.Y = pdVar11[1];
    local_f8 = (longlong *)0x0;
    local_88 = local_res18 * __real_3ff6a09e667f3bcd;
    local_f0 = 0;
    local_b8._s_0.Z = pdVar11[2];
    local_b8._s_0.W = 0.0;
    local_98._8_4_ = SUB84(local_88,0);
    local_98._0_8_ = local_88;
    local_98._12_4_ = (int)((ulonglong)local_88 >> 0x20);
    local_80 = 0;
    dVar4 = local_res18 * local_res18;
    pUVar5 = Z_Construct_UClass_UPCGPointData_NoRegister();
    iVar2 = (int)pUVar5->_padding_;
    if (((*(int *)(plVar6[2] + 0x38) < iVar2) ||
        ((longlong *)*(undefined1 **)(*(longlong *)(plVar6[2] + 0x30) + (longlong)iVar2 * 8) !=
         &pUVar5->_padding_)) || (plVar8 = plVar6 + 0x36, plVar6 == (longlong *)0x0)) {
      plVar8 = plVar9;
    }
    this = (TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics> *)
           (**(code **)(*plVar6 + 0x618))(plVar6);
    local_c8 = &local_f8;
    local_e8 = plVar6;
    local_e0 = plVar8;
    local_d8 = pdVar11;
    local_d0 = dVar4;
    TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics>::
    FindElementsWithBoundsTestInternal<_UPCGOctreeQueries::ForEachPointInsideSphere<_UPCGOctreeQueries::GetPointsInsideSphere_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
              (this,0,(FOctreeNodeContext *)this,(FBoxCenterAndExtent *)&local_b8._s_0,
               (<lambda_1> *)&local_e8);
    plVar6 = local_f8;
    uVar7 = (undefined4)local_f0;
    uVar10 = local_f0._4_4_;
  }
  if (param_3 != local_60) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(longlong **)param_3 = plVar6;
    *(undefined4 *)((longlong)param_3 + 8) = uVar7;
    *(undefined4 *)((longlong)param_3 + 0xc) = uVar10;
    plVar6 = plVar9;
  }
  if (plVar6 != (longlong *)0x0) {
    FMemory::Free(plVar6);
  }
  return;
}

