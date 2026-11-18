// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 18

// StaticClass @ 14cd8de30

UClass * __cdecl UGeometryScriptLibrary_ContainmentFunctions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_ContainmentFunctions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_ContainmentFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_ContainmentFunctions.
                InnerSingleton,StaticRegisterNativesUGeometryScriptLibrary_ContainmentFunctions,0x28
               ,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryScriptLibrary_ContainmentFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_ContainmentFunctions>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_ContainmentFunctions.InnerSingleton;
}

// UGeometryScriptLibrary_ContainmentFunctions @ 14cda5d60

UGeometryScriptLibrary_ContainmentFunctions * __thiscall
UGeometryScriptLibrary_ContainmentFunctions::UGeometryScriptLibrary_ContainmentFunctions
          (UGeometryScriptLibrary_ContainmentFunctions *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UGeometryScriptLibrary_ContainmentFunctions__6B_;
  return this;
}

// UGeometryScriptLibrary_ContainmentFunctions @ 14cda5d90

UGeometryScriptLibrary_ContainmentFunctions * __thiscall
UGeometryScriptLibrary_ContainmentFunctions::UGeometryScriptLibrary_ContainmentFunctions
          (UGeometryScriptLibrary_ContainmentFunctions *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UGeometryScriptLibrary_ContainmentFunctions__6B_;
  return this;
}

// ~UGeometryScriptLibrary_ContainmentFunctions @ 14cda6a00

void __thiscall
UGeometryScriptLibrary_ContainmentFunctions::~UGeometryScriptLibrary_ContainmentFunctions
          (UGeometryScriptLibrary_ContainmentFunctions *this)

{
  *(undefined ***)this = &___7UGeometryScriptLibrary_ContainmentFunctions__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// operator() @ 14cdaedf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`UGeometryScriptLibrary_ContainmentFunctions::ComputeMeshConvexDecomposition'::__l2::<lambda_1>::
operator()(void *this,FDynamicMesh3 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  ulonglong uVar7;
  ForAnyElementType FVar8;
  FDynamicMesh3 *pFVar9;
  undefined1 auStackY_488 [32];
  undefined1 local_458 [8];
  TArray<UE::Geometry::FDynamicMesh3_const_*,TSizedDefaultAllocator<32>_> local_450;
  FDynamicMeshEditor local_440;
  FSimpleShapeSet3d local_438;
  FMeshSimpleShapeApproximation local_3e8;
  TFunction<UE::Math::TVector<double>___cdecl(int,UE::Math::TVector<double>_const_&)> local_358;
  TFunction<UE::Math::TVector<double>___cdecl(int,UE::Math::TVector<double>_const_&)> local_328;
  undefined1 local_2f8 [32];
  void *local_2d8;
  undefined4 local_2d0;
  uint local_2cc;
  undefined4 local_2c8;
  undefined4 local_2c4;
  void *local_2b8;
  undefined4 local_2b0;
  ForAnyElementType local_2a8;
  undefined8 local_2a0;
  TBitArray<FDefaultBitArrayAllocator> local_298;
  undefined4 local_278;
  undefined4 local_274;
  void *local_268;
  undefined4 local_260;
  undefined2 local_258;
  ForAnyElementType local_250;
  undefined8 local_248;
  TBitArray<FDefaultBitArrayAllocator> local_240;
  undefined8 uStack_220;
  void *local_210;
  undefined4 local_208;
  ForAnyElementType local_200;
  undefined8 local_1f8;
  TBitArray<FDefaultBitArrayAllocator> local_1f0;
  undefined8 uStack_1d0;
  void *local_1c0;
  undefined4 local_1b8;
  undefined2 local_1b0;
  ForAnyElementType local_1a8;
  undefined8 local_1a0;
  TBitArray<FDefaultBitArrayAllocator> local_198;
  undefined4 local_178;
  undefined4 local_174;
  void *local_168;
  undefined4 local_160;
  ForAnyElementType local_158;
  undefined8 local_150;
  TBitArray<FDefaultBitArrayAllocator> local_148;
  undefined4 local_128;
  undefined4 local_124;
  void *local_118;
  undefined4 local_110;
  undefined2 local_108;
  ForAnyElementType local_100;
  undefined8 local_f8;
  TBitArray<FDefaultBitArrayAllocator> local_f0;
  undefined8 uStack_d0;
  void *local_c0;
  undefined4 local_b8;
  ForAnyElementType local_b0;
  undefined8 local_a8;
  TBitArray<FDefaultBitArrayAllocator> local_a0;
  undefined8 uStack_80;
  void *local_70;
  undefined4 local_68;
  undefined2 local_60;
  ForAnyElementType local_58;
  undefined8 local_50;
  ForAnyElementType local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_488;
  local_450.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_450.ArrayNum = 0;
  local_450.ArrayMax = 0;
  iVar6 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x808,&local_450.AllocatorInstance,&local_450.ArrayMax);
  local_450.ArrayNum = iVar6 + 1;
  *(FDynamicMesh3 **)(local_450.AllocatorInstance.Data + (longlong)iVar6 * 8) = param_1;
  UE::Geometry::FMeshSimpleShapeApproximation::FMeshSimpleShapeApproximation(&local_3e8);
  UE::Geometry::FMeshSimpleShapeApproximation::InitializeSourceMeshes(&local_3e8,&local_450);
  piVar1 = *(int **)this;
  local_3e8.bSimplifyHulls = 4 < piVar1[8];
  local_3e8.HullTargetFaceCount = piVar1[8];
  local_3e8.ConvexDecompositionMaxPieces = *piVar1;
  local_3e8.ConvexDecompositionSearchFactor = (float)*(double *)(piVar1 + 2);
  local_3e8.ConvexDecompositionErrorTolerance = *(double *)(piVar1 + 4);
  local_3e8.ConvexDecompositionMinPartThickness = *(double *)(piVar1 + 6);
  local_438.Spheres.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_438.Spheres.ArrayNum = 0;
  local_438.Spheres.ArrayMax = 0;
  local_438.Boxes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_438.Boxes.ArrayNum = 0;
  local_438.Boxes.ArrayMax = 0;
  local_438.Capsules.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_438.Capsules.ArrayNum = 0;
  local_438.Capsules.ArrayMax = 0;
  local_438.Convexes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_438.Convexes.ArrayNum = 0;
  local_438.Convexes.ArrayMax = 0;
  local_438.LevelSets.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_438.LevelSets.ArrayNum = 0;
  local_438.LevelSets.ArrayMax = 0;
  UE::Geometry::FMeshSimpleShapeApproximation::Generate_ConvexHullDecompositions
            (&local_3e8,&local_438,(FProgressCancel *)0x0);
  UE::Geometry::FDynamicMesh3::EnableMatchingAttributes
            (*(FDynamicMesh3 **)((longlong)this + 8),param_1,true,false);
  uVar5 = _UNK_150631d98;
  uVar3 = ___xmm_00000000ffffffff0000008000000000;
  local_440.Mesh = *(FDynamicMesh3 **)((longlong)this + 8);
  iVar6 = local_438.Convexes.ArrayNum;
  uVar7 = (ulonglong)local_438.Convexes.ArrayNum;
  pFVar9 = (FDynamicMesh3 *)(local_438.Convexes.AllocatorInstance.Data + uVar7 * 0x230);
  FVar8.Data = local_438.Convexes.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar7 != iVar6) {
      `TCheckedPointerIterator<UE::Geometry::FConvexShape3d,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_458);
    }
    uVar4 = ___xmm_00000000ffffffff0000008000000000;
    if ((FDynamicMesh3 *)FVar8.Data == pFVar9) break;
    local_2f8._0_8_ = (FScriptContainerElement *)0x0;
    local_2f8._8_8_ = 0;
    local_2d8 = (void *)0x0;
    local_2d0 = 0;
    local_2cc = 0x80;
    local_2c8 = 0xffffffff;
    local_2c4 = 0;
    local_2b8 = (void *)0x0;
    local_2b0 = 0;
    local_2a8.Data = (FScriptContainerElement *)0x0;
    local_2a0 = 0;
    local_298.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_298.NumBits = 0;
    local_298.MaxBits = 0x80;
    local_278 = 0xffffffff;
    local_274 = 0;
    local_268 = (void *)0x0;
    local_260 = 0;
    local_258._0_1_ = true;
    local_258._1_1_ = true;
    local_250.Data = (FScriptContainerElement *)0x0;
    local_248 = 0;
    local_240.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    ___xmm_00000000ffffffff0000008000000000 = (int)uVar3;
    _UNK_150631d94 = SUB84(uVar3,4);
    local_240.NumBits = ___xmm_00000000ffffffff0000008000000000;
    local_240.MaxBits = _UNK_150631d94;
    uStack_220 = uVar5;
    local_210 = (void *)0x0;
    local_208 = 0;
    local_200.Data = (FScriptContainerElement *)0x0;
    local_1f8 = 0;
    local_1f0.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    ___xmm_00000000ffffffff0000008000000000 = (int)uVar3;
    _UNK_150631d94 = SUB84(uVar3,4);
    local_1f0.NumBits = ___xmm_00000000ffffffff0000008000000000;
    local_1f0.MaxBits = _UNK_150631d94;
    uStack_1d0 = uVar5;
    local_1c0 = (void *)0x0;
    local_1b8 = 0;
    local_1b0._0_1_ = true;
    local_1b0._1_1_ = true;
    local_1a8.Data = (FScriptContainerElement *)0x0;
    local_1a0 = 0;
    local_198.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_198.NumBits = 0;
    local_198.MaxBits = 0x80;
    local_178 = 0xffffffff;
    local_174 = 0;
    local_168 = (void *)0x0;
    local_160 = 0;
    local_158.Data = (FScriptContainerElement *)0x0;
    local_150 = 0;
    local_148.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_148.NumBits = 0;
    local_148.MaxBits = 0x80;
    local_128 = 0xffffffff;
    local_124 = 0;
    local_118 = (void *)0x0;
    local_110 = 0;
    local_108._0_1_ = true;
    local_108._1_1_ = true;
    local_100.Data = (FScriptContainerElement *)0x0;
    local_f8 = 0;
    local_f0.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    ___xmm_00000000ffffffff0000008000000000 = (int)uVar3;
    _UNK_150631d94 = SUB84(uVar3,4);
    local_f0.NumBits = ___xmm_00000000ffffffff0000008000000000;
    local_f0.MaxBits = _UNK_150631d94;
    uStack_d0 = uVar5;
    local_c0 = (void *)0x0;
    local_b8 = 0;
    local_b0.Data = (FScriptContainerElement *)0x0;
    local_a8 = 0;
    local_a0.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    ___xmm_00000000ffffffff0000008000000000 = (int)uVar3;
    _UNK_150631d94 = SUB84(uVar3,4);
    local_a0.NumBits = ___xmm_00000000ffffffff0000008000000000;
    local_a0.MaxBits = _UNK_150631d94;
    uStack_80 = uVar5;
    local_70 = (void *)0x0;
    local_68 = 0;
    local_60._0_1_ = true;
    local_60._1_1_ = true;
    local_58.Data = (FScriptContainerElement *)0x0;
    local_50._0_4_ = 0;
    local_50._4_4_ = 0;
    local_48.Data = (FScriptContainerElement *)0x0;
    local_40._0_4_ = 0;
    local_40._4_4_ = 0;
    local_358._0_8_ = 0;
    local_358._40_8_ = 0;
    local_328._0_8_ = 0;
    local_328._40_8_ = 0;
    ___xmm_00000000ffffffff0000008000000000 = uVar4;
    UE::Geometry::FDynamicMeshEditor::AppendMesh
              (&local_440,(FDynamicMesh3 *)FVar8.Data,(FMeshIndexMappings *)local_2f8,&local_328,
               &local_358,false);
    DestructItems<UE::Geometry::TIndexMap<int>,int>((TIndexMap<int> *)local_48.Data,(int)local_40);
    if ((TIndexMap<int> *)local_48.Data != (TIndexMap<int> *)0x0) {
      FMemory::Free(local_48.Data);
    }
    DestructItems<UE::Geometry::TIndexMap<int>,int>((TIndexMap<int> *)local_58.Data,(int)local_50);
    if ((TIndexMap<int> *)local_58.Data != (TIndexMap<int> *)0x0) {
      FMemory::Free(local_58.Data);
    }
    local_68 = 0;
    if (local_70 != (void *)0x0) {
      FMemory::Free(local_70);
    }
    uVar7 = local_a8 >> 0x20;
    local_a8 = local_a8 & 0xffffffff00000000;
    if ((int)uVar7 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,&local_b0,0,(int *)((longlong)&local_a8 + 4));
    }
    iVar2 = local_a0.MaxBits;
    uStack_80 = 0xffffffff;
    local_a0._24_8_ = (ulonglong)(uint)local_a0.MaxBits << 0x20;
    if (0x80 < (uint)iVar2) {
      local_a0.NumBits = 0;
      local_a0.MaxBits = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_a0,0);
    }
    if (local_a0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_a0.AllocatorInstance.SecondaryData);
    }
    if (local_b0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data);
    }
    local_b8 = 0;
    if (local_c0 != (void *)0x0) {
      FMemory::Free(local_c0);
    }
    uVar7 = local_f8 >> 0x20;
    local_f8 = local_f8 & 0xffffffff00000000;
    if ((int)uVar7 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,&local_100,0,(int *)((longlong)&local_f8 + 4));
    }
    iVar2 = local_f0.MaxBits;
    uStack_d0 = 0xffffffff;
    local_f0._24_8_ = (ulonglong)(uint)local_f0.MaxBits << 0x20;
    if (0x80 < (uint)iVar2) {
      local_f0.NumBits = 0;
      local_f0.MaxBits = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_f0,0);
    }
    if (local_f0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_f0.AllocatorInstance.SecondaryData);
    }
    if (local_100.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data);
    }
    local_110 = 0;
    if (local_118 != (void *)0x0) {
      FMemory::Free(local_118);
    }
    uVar7 = local_150 >> 0x20;
    local_150 = local_150 & 0xffffffff00000000;
    if ((int)uVar7 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,&local_158,0,(int *)((longlong)&local_150 + 4));
    }
    local_128 = 0xffffffff;
    local_124 = 0;
    local_148.NumBits = 0;
    if (0x80 < (uint)local_148.MaxBits) {
      local_148.MaxBits = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_148,0);
    }
    if (local_148.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_148.AllocatorInstance.SecondaryData);
    }
    if (local_158.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Data);
    }
    local_160 = 0;
    if (local_168 != (void *)0x0) {
      FMemory::Free(local_168);
    }
    uVar7 = local_1a0 >> 0x20;
    local_1a0 = local_1a0 & 0xffffffff00000000;
    if ((int)uVar7 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,&local_1a8,0,(int *)((longlong)&local_1a0 + 4));
    }
    local_178 = 0xffffffff;
    local_174 = 0;
    local_198.NumBits = 0;
    if (0x80 < (uint)local_198.MaxBits) {
      local_198.MaxBits = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_198,0);
    }
    if (local_198.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_198.AllocatorInstance.SecondaryData);
    }
    if (local_1a8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.Data);
    }
    local_1b8 = 0;
    if (local_1c0 != (void *)0x0) {
      FMemory::Free(local_1c0);
    }
    uVar7 = local_1f8 >> 0x20;
    local_1f8 = local_1f8 & 0xffffffff00000000;
    if ((int)uVar7 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,&local_200,0,(int *)((longlong)&local_1f8 + 4));
    }
    iVar2 = local_1f0.MaxBits;
    uStack_1d0 = 0xffffffff;
    local_1f0._24_8_ = (ulonglong)(uint)local_1f0.MaxBits << 0x20;
    if (0x80 < (uint)iVar2) {
      local_1f0.NumBits = 0;
      local_1f0.MaxBits = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_1f0,0);
    }
    if (local_1f0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_1f0.AllocatorInstance.SecondaryData);
    }
    if (local_200.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_200.Data);
    }
    local_208 = 0;
    if (local_210 != (void *)0x0) {
      FMemory::Free(local_210);
    }
    uVar7 = local_248 >> 0x20;
    local_248 = local_248 & 0xffffffff00000000;
    if ((int)uVar7 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,&local_250,0,(int *)((longlong)&local_248 + 4));
    }
    iVar2 = local_240.MaxBits;
    uStack_220 = 0xffffffff;
    local_240._24_8_ = (ulonglong)(uint)local_240.MaxBits << 0x20;
    if (0x80 < (uint)iVar2) {
      local_240.NumBits = 0;
      local_240.MaxBits = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_240,0);
    }
    if (local_240.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_240.AllocatorInstance.SecondaryData);
    }
    if (local_250.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_250.Data);
    }
    local_260 = 0;
    if (local_268 != (void *)0x0) {
      FMemory::Free(local_268);
    }
    uVar7 = local_2a0 >> 0x20;
    local_2a0 = local_2a0 & 0xffffffff00000000;
    if ((int)uVar7 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,&local_2a8,0,(int *)((longlong)&local_2a0 + 4));
    }
    local_278 = 0xffffffff;
    local_274 = 0;
    local_298.NumBits = 0;
    if (0x80 < (uint)local_298.MaxBits) {
      local_298.MaxBits = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_298,0);
    }
    if (local_298.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_298.AllocatorInstance.SecondaryData);
    }
    if (local_2a8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2a8.Data);
    }
    local_2b0 = 0;
    if (local_2b8 != (void *)0x0) {
      FMemory::Free(local_2b8);
    }
    iVar2 = SUB84(local_2f8._8_8_,4);
    local_2f8._8_8_ = local_2f8._8_8_ & 0xffffffff00000000;
    if (iVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,(ForAnyElementType *)local_2f8,0,(int *)(local_2f8 + 0xc));
    }
    local_2c8 = 0xffffffff;
    local_2c4 = 0;
    local_2d0 = 0;
    if (0x80 < local_2cc) {
      local_2cc = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_2f8 + 0x10),0);
    }
    if (local_2d8 != (void *)0x0) {
      FMemory::Free(local_2d8);
    }
    if ((FScriptContainerElement *)local_2f8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_2f8._0_8_);
    }
    uVar7 = local_438.Convexes._8_8_ & 0xffffffff;
    FVar8.Data = FVar8.Data + 0x230;
  }
  UE::Geometry::FSimpleShapeSet3d::~FSimpleShapeSet3d(&local_438);
  if (local_3e8.SourceMeshCaches.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3e8.SourceMeshCaches.AllocatorInstance.Data);
  }
  if (local_3e8.SourceMeshes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3e8.SourceMeshes.AllocatorInstance.Data);
  }
  if (local_450.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_450.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14cdaf7b0

void __thiscall
`UGeometryScriptLibrary_ContainmentFunctions::ComputeMeshConvexHull'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *pTVar4;
  code *pcVar5;
  bool bVar6;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *pTVar7;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *pTVar8;
  FMeshConvexHull *local_res8;
  code *local_278;
  FMeshConvexHull **local_270;
  FMeshConvexHull local_268;
  
  pTVar8 = (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0;
  local_268.VertexSet.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_268.MinDimension = 0.0;
  local_268.VertexSet.ArrayNum = 0;
  local_268.VertexSet.ArrayMax = 0;
  local_268.bPostSimplify = false;
  local_268.MaxTargetFaceCount = 0;
  UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_268.ConvexHull);
  plVar2 = *(longlong **)this;
  local_268.Mesh = param_1;
  if (*plVar2 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar3 = *plVar2;
  if (*(int *)(lVar3 + 0x10) == *(int *)(lVar3 + 0x3c)) {
    if (**(char **)((longlong)this + 8) != '\0') {
      iVar1 = *(int *)(*(char **)((longlong)this + 8) + 4);
      if (iVar1 < 0x20) {
        iVar1 = 0x20;
      }
      UE::Geometry::FMeshConvexHull::GridSample(param_1,iVar1,&local_268.VertexSet);
    }
  }
  else {
    local_res8 = &local_268;
    local_270 = &local_res8;
    local_278 = UE::Core::Private::Function::
                TFunctionRefCaller<``UGeometryScriptLibrary_ContainmentFunctions::ComputeMeshConvexHull'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>,void,int>
                ::Call;
    FGeometryScriptMeshSelection::ProcessByVertexID
              (*(FGeometryScriptMeshSelection **)this,param_1,
               (TFunctionRef<void___cdecl(int)> *)&local_278,false);
  }
  local_268.bPostSimplify = 4 < *(int *)(*(longlong *)((longlong)this + 8) + 8);
  local_268.MaxTargetFaceCount = *(int *)(*(longlong *)((longlong)this + 8) + 8);
  bVar6 = UE::Geometry::FMeshConvexHull::Compute(&local_268,(FProgressCancel *)0x0);
  if (bVar6) {
    UE::Geometry::FDynamicMesh3::operator=
              (*(FDynamicMesh3 **)((longlong)this + 0x10),&local_268.ConvexHull);
    UE::Geometry::FDynamicMesh3::EnableAttributes(*(FDynamicMesh3 **)((longlong)this + 0x10));
    pTVar4 = *(TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> **)
              (*(longlong *)((longlong)this + 0x10) + 0x208);
    pTVar7 = pTVar8;
    if (pTVar4 != (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0) {
      pTVar7 = pTVar4;
    }
    if (0 < *(int *)&pTVar7->field_0x38) {
      pTVar8 = (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)
               **(undefined8 **)&pTVar7->field_0x30;
    }
    UE::Geometry::FMeshNormals::InitializeOverlayToPerTriangleNormals(pTVar8);
  }
  UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_268.ConvexHull);
  if (local_268.VertexSet.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_268.VertexSet.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14cdaf940

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`UGeometryScriptLibrary_ContainmentFunctions::ComputeMeshOrientedBox'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  short sVar7;
  longlong *plVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  double *pdVar11;
  code *pcVar12;
  undefined4 uVar13;
  bool bVar14;
  FText *pFVar15;
  TOrientedBox3<double> *pTVar16;
  TAxisAlignedBox3<double> *pTVar17;
  FOrientedBox *pFVar18;
  uint uVar19;
  ulonglong uVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  ulonglong uVar24;
  uint uVar25;
  undefined1 auVar26 [16];
  undefined4 uVar27;
  undefined4 uVar28;
  TMinVolumeBox3<double> local_res8;
  ForAnyElementType *local_res18;
  ForAnyElementType local_218;
  uint local_210;
  uint local_20c;
  int local_208 [4];
  TVector<double>_u_0 local_1f8;
  double dStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double dStack_1c0;
  undefined1 local_1b8 [16];
  code *local_1a8;
  ForAnyElementType **local_1a0;
  FDynamicMesh3 *local_198;
  ForAnyElementType *local_190;
  code *local_188;
  FDynamicMesh3 **local_180;
  FText local_178;
  FText local_168;
  TAxisAlignedBox3<double> local_158;
  TOrientedBox3<double> local_128;
  FOrientedBox local_d8;
  
  plVar8 = *(longlong **)((longlong)this + 8);
  local_218.Data = (FScriptContainerElement *)0x0;
  local_20c = 0;
  local_210 = 0;
  uVar20 = 0;
  if (*plVar8 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar14) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    uVar20 = (ulonglong)local_210;
  }
  lVar9 = *plVar8;
  if (*(int *)(lVar9 + 0x10) != *(int *)(lVar9 + 0x3c)) {
    local_res18 = &local_218;
    local_1a0 = &local_res18;
    local_1a8 = UE::Core::Private::Function::
                TFunctionRefCaller<``UGeometryScriptLibrary_ContainmentFunctions::ComputeMeshOrientedBox'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>,void,int>
                ::Call;
    FGeometryScriptMeshSelection::ProcessByVertexID
              (*(FGeometryScriptMeshSelection **)((longlong)this + 8),param_1,
               (TFunctionRef<void___cdecl(int)> *)&local_1a8,false);
    uVar19 = local_210;
    goto LAB_14cdafbae;
  }
  uVar19 = (param_1->VertexRefCounts).UsedCount;
  if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
  }
  if ((int)local_20c < (int)uVar19) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar19,&local_218,(int)uVar20,(int *)&local_20c);
    uVar20 = (ulonglong)local_210;
  }
  uVar19 = (uint)uVar20;
  uVar25 = (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
           (param_1->VertexRefCounts).RefCounts.CurBlockUsed;
  uVar24 = 0;
  if ((uVar25 == 0) ||
     (pFVar10 = (param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar24 = 0,
     (ushort)(**(short **)pFVar10 - 1U) < 0xfffe)) {
LAB_14cdafa99:
    uVar21 = (uint)uVar24;
  }
  else {
    uVar24 = 1;
    uVar21 = 1;
    if (1 < (int)uVar25) {
      do {
        sVar7 = *(short *)(*(longlong *)(pFVar10 + (uVar24 >> 9) * 8) +
                          (ulonglong)((uint)uVar24 & 0x1ff) * 2);
        if ((sVar7 != 0) && (sVar7 != -1)) break;
        uVar21 = (uint)uVar24 + 1;
        uVar24 = (ulonglong)uVar21;
      } while ((int)uVar21 < (int)uVar25);
      goto LAB_14cdafa99;
    }
  }
  if (uVar21 != uVar25) {
    while( true ) {
      iVar22 = (int)uVar24;
      uVar21 = (uint)uVar20;
      local_208[0] = iVar22;
      if (((local_218.Data <= (FScriptContainerElement *)local_208) &&
          ((FScriptContainerElement *)local_208 < local_218.Data + (longlong)(int)local_20c * 4)) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), uVar21 = local_210, bVar14)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      if (uVar21 == local_20c) {
        uVar21 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_218,(int *)&local_20c);
      }
      uVar19 = uVar21 + 1;
      uVar23 = iVar22 + 1;
      uVar24 = (ulonglong)uVar23;
      *(int *)(local_218.Data + (longlong)(int)uVar21 * 4) = local_208[0];
      local_210 = uVar19;
      if ((int)uVar23 < (int)uVar25) {
        pFVar10 = (param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
        do {
          uVar20 = (ulonglong)((uint)uVar24 & 0x1ff);
          if ((*(short *)(*(longlong *)(pFVar10 + (uVar24 >> 9) * 8) + uVar20 * 2) != 0) &&
             (*(short *)(*(longlong *)(pFVar10 + (uVar24 >> 9) * 8) + uVar20 * 2) != -1))
          goto LAB_14cdafb91;
          uVar23 = (uint)uVar24 + 1;
          uVar24 = (ulonglong)uVar23;
        } while ((int)uVar23 < (int)uVar25);
      }
      if (uVar23 == uVar25) break;
LAB_14cdafb91:
      uVar20 = (ulonglong)uVar19;
    }
  }
LAB_14cdafbae:
  if (uVar19 == 0) {
    pFVar15 = FText::AsLocalizable_Advanced_LocText
                        (&local_178,L"UGeometryScriptLibrary_MeshContainmentFunctions",
                         L"ComputeMeshOrientedBox_FailedEmptyInput",
                         L"ComputeMeshOrientedBox: Cannot find bounds of zero vertices");
    UE::Geometry::AppendError
              (*(UGeometryScriptDebug **)((longlong)this + 0x18),OperationFailed,pFVar15);
    if (local_178.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_178.TextData.Reference + 0x10))();
    }
  }
  else {
    local_1f8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_1f8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_1f8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_1d8 = 0.0;
    dStack_1d0 = 0.0;
    dStack_1e0 = 0.0;
    local_1c8 = (double)___xmm_3ff00000000000003ff0000000000000;
    dStack_1c0 = _UNK_150689688;
    local_1b8._8_8_ = _UNK_150689688;
    local_1b8._0_8_ = ___xmm_3ff00000000000003ff0000000000000;
    dVar1 = **(double **)((longlong)this + 0x10);
    uVar28 = (undefined4)((ulonglong)dVar1 >> 0x20);
    local_190 = &local_218;
    uVar27 = SUB84(dVar1,0);
    if (dVar1 <= 0.0) {
      uVar28 = 0;
      uVar27 = 0;
    }
    local_180 = &local_198;
    local_res8.Internal.Ptr =
         (TPimplPtr<UE::Geometry::TMinVolumeBox3Internal<double>,0>)
         (TMinVolumeBox3Internal<double> *)0x0;
    local_188 = UE::Core::Private::Function::
                TFunctionRefCaller<``UGeometryScriptLibrary_ContainmentFunctions::ComputeMeshOrientedBox'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>,UE::Math::TVector<double>,int>
                ::Call;
    local_198 = param_1;
    bVar14 = UE::Geometry::TMinVolumeBox3<double>::Solve
                       (&local_res8,uVar19,
                        (TFunctionRef<UE::Math::TVector<double>___cdecl(int)> *)&local_188,
                        *(char *)(*(double **)((longlong)this + 0x10) + 1) == '\x01',
                        (FProgressCancel *)0x0);
    if ((bVar14) &&
       (bVar14 = UE::Geometry::TMinVolumeBox3<double>::IsSolutionAvailable(&local_res8), bVar14)) {
      UE::Geometry::TMinVolumeBox3<double>::GetResult
                (&local_res8,(TOrientedBox3<double> *)&local_1f8._s_0);
      dVar1 = (double)CONCAT44(uVar28,uVar27) * __real_3fe0000000000000;
      auVar26._8_4_ = SUB84(dVar1,0);
      auVar26._0_8_ = dVar1;
      auVar26._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
      local_1b8 = maxpd(auVar26,local_1b8);
      if (dVar1 <= dStack_1c0) {
        dVar1 = dStack_1c0;
      }
      dStack_1c0 = dVar1;
      pTVar16 = UE::Geometry::TOrientedBox3<double>::ReparameterizedCloserToWorldFrame
                          ((TOrientedBox3<double> *)&local_1f8._s_0,&local_128);
      local_1f8._s_0.X = (pTVar16->Frame).Origin.field0_0x0._s_0.X;
      local_1f8._s_0.Y = (pTVar16->Frame).Origin.field0_0x0._s_0.Y;
      local_1f8._s_0.Z = (pTVar16->Frame).Origin.field0_0x0._s_0.Z;
      dStack_1e0 = (pTVar16->Frame).Rotation.field0_0x0._s_0.X;
      local_1d8 = (pTVar16->Frame).Rotation.field0_0x0._s_0.Y;
      dStack_1d0 = (pTVar16->Frame).Rotation.field0_0x0._s_0.Z;
      local_1c8 = (pTVar16->Frame).Rotation.field0_0x0._s_0.W;
      dStack_1c0 = (pTVar16->Extents).field0_0x0._s_0.X;
      local_1b8 = *(undefined1 (*) [16])((longlong)&(pTVar16->Extents).field0_0x0 + 8);
    }
    else {
      pTVar17 = UE::Geometry::FDynamicMesh3::GetBounds(param_1,&local_158,false);
      dVar1 = (pTVar17->Max).field0_0x0._s_0.X;
      dVar2 = (pTVar17->Min).field0_0x0._s_0.X;
      dVar3 = (pTVar17->Min).field0_0x0._s_0.Y;
      dVar4 = (pTVar17->Max).field0_0x0._s_0.Y;
      dVar5 = (pTVar17->Min).field0_0x0._s_0.Z;
      dVar6 = (pTVar17->Max).field0_0x0._s_0.Z;
      dStack_1e0 = 0.0;
      local_1f8._s_0.X = (dVar1 + dVar2) * __real_3fe0000000000000;
      local_1c8 = 1.0;
      dStack_1c0 = (dVar1 - dVar2) * __real_3fe0000000000000;
      local_1f8._s_0.Z = (dVar6 + dVar5) * __real_3fe0000000000000;
      local_1f8._s_0.Y = (dVar4 + dVar3) * __real_3fe0000000000000;
      local_1d8 = 0.0;
      dStack_1d0 = 0.0;
      local_1b8._8_8_ = (dVar6 - dVar5) * __real_3fe0000000000000;
      local_1b8._0_8_ = (dVar4 - dVar3) * __real_3fe0000000000000;
      pFVar15 = FText::AsLocalizable_Advanced_LocText
                          (&local_168,L"UGeometryScriptLibrary_MeshContainmentFunctions",
                           L"ComputeMeshOrientedBox_FailedFittingStep",
                           L"ComputeMeshOrientedBox: Failed to fit oriented box; falling back to axis-aligned box."
                          );
      UE::Geometry::AppendWarning
                (*(UGeometryScriptDebug **)((longlong)this + 0x18),OperationFailed,pFVar15);
      if (local_168.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_168.TextData.Reference + 0x10))();
      }
    }
    pFVar18 = UE::Geometry::TOrientedBox3<double>::operator_FOrientedBox
                        ((TOrientedBox3<double> *)&local_1f8._s_0,&local_d8);
    pdVar11 = *(double **)this;
    dVar1 = (pFVar18->Center).field0_0x0._s_0.Y;
    *pdVar11 = (pFVar18->Center).field0_0x0._s_0.X;
    pdVar11[1] = dVar1;
    dVar1 = (pFVar18->AxisX).field0_0x0._s_0.X;
    pdVar11[2] = (pFVar18->Center).field0_0x0._s_0.Z;
    pdVar11[3] = dVar1;
    dVar1 = (pFVar18->AxisX).field0_0x0._s_0.Z;
    pdVar11[4] = (pFVar18->AxisX).field0_0x0._s_0.Y;
    pdVar11[5] = dVar1;
    dVar1 = (pFVar18->AxisY).field0_0x0._s_0.Y;
    pdVar11[6] = (pFVar18->AxisY).field0_0x0._s_0.X;
    pdVar11[7] = dVar1;
    dVar1 = (pFVar18->AxisZ).field0_0x0._s_0.X;
    pdVar11[8] = (pFVar18->AxisY).field0_0x0._s_0.Z;
    pdVar11[9] = dVar1;
    dVar1 = (pFVar18->AxisZ).field0_0x0._s_0.Z;
    pdVar11[10] = (pFVar18->AxisZ).field0_0x0._s_0.Y;
    pdVar11[0xb] = dVar1;
    uVar27 = *(undefined4 *)((longlong)&pFVar18->ExtentX + 4);
    uVar28 = *(undefined4 *)&pFVar18->ExtentY;
    uVar13 = *(undefined4 *)((longlong)&pFVar18->ExtentY + 4);
    *(undefined4 *)(pdVar11 + 0xc) = *(undefined4 *)&pFVar18->ExtentX;
    *(undefined4 *)((longlong)pdVar11 + 100) = uVar27;
    *(undefined4 *)(pdVar11 + 0xd) = uVar28;
    *(undefined4 *)((longlong)pdVar11 + 0x6c) = uVar13;
    pdVar11[0xe] = pFVar18->ExtentZ;
    if (local_res8.Internal.Ptr != (TMinVolumeBox3Internal<double> *)0x0) {
      (**(code **)((longlong)local_res8.Internal.Ptr + -0x10))
                ((int *)((longlong)local_res8.Internal.Ptr + -0x10));
    }
  }
  if (local_218.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_218.Data);
  }
  return;
}

// operator() @ 14cdafec0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`UGeometryScriptLibrary_ContainmentFunctions::ComputeMeshSweptHull'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  double *pdVar1;
  longlong lVar2;
  bool bVar3;
  FMeshProjectionHull local_2c8;
  
  local_2c8.bSimplifyPolygon = false;
  local_2c8.ConvexHull2D.Vertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2c8.ProjectionFrame.Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_2c8.ProjectionFrame.Origin.field0_0x0._s_0.Y =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_2c8.ProjectionFrame.Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_2c8.ProjectionFrame.Rotation.field0_0x0._s_0.Z = ___xmm_3ff00000000000000000000000000000;
  local_2c8.ProjectionFrame.Rotation.field0_0x0._s_0.W = _UNK_15061cbc8;
  local_2c8.ProjectionFrame.Rotation.field0_0x0._s_0.X = 0.0;
  local_2c8.ProjectionFrame.Rotation.field0_0x0._s_0.Y = 0.0;
  local_2c8.MinEdgeLength = __real_3f847ae147ae147b;
  local_2c8.DeviationTolerance = ___xmm_00000000000000003fb999999999999a;
  local_2c8.MinThickness = (double)CONCAT44(_UNK_15076ac5c,_UNK_15076ac58);
  local_2c8.ConvexHull2D.Vertices.ArrayNum = 0;
  local_2c8.ConvexHull2D.Vertices.ArrayMax = 0;
  local_2c8.SimplifiedHull2D.Vertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2c8.SimplifiedHull2D.Vertices.ArrayNum = 0;
  local_2c8.SimplifiedHull2D.Vertices.ArrayMax = 0;
  UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_2c8.ConvexHull3D);
  pdVar1 = *(double **)this;
  local_2c8.Keep3DHullSide = None;
  local_2c8.ProjectionFrame.Rotation.field0_0x0._s_0.X = *pdVar1;
  local_2c8.ProjectionFrame.Rotation.field0_0x0._s_0.Y = pdVar1[1];
  local_2c8.ProjectionFrame.Rotation.field0_0x0._s_0.Z = pdVar1[2];
  local_2c8.ProjectionFrame.Rotation.field0_0x0._s_0.W = pdVar1[3];
  local_2c8.ProjectionFrame.Origin.field0_0x0._s_0.Z = pdVar1[6];
  local_2c8.ProjectionFrame.Origin.field0_0x0._s_0.X = pdVar1[4];
  local_2c8.ProjectionFrame.Origin.field0_0x0._s_0.Y = pdVar1[5];
  lVar2 = *(longlong *)((longlong)this + 8);
  local_2c8.MinThickness = (double)*(float *)(lVar2 + 8);
  if ((double)*(float *)(lVar2 + 8) <= 0.0) {
    local_2c8.MinThickness = 0.0;
  }
  local_2c8.bSimplifyPolygon = *(bool *)(lVar2 + 0xc);
  local_2c8.MinEdgeLength = (double)*(float *)(lVar2 + 0x10);
  local_2c8.DeviationTolerance = (double)*(float *)(lVar2 + 0x14);
  local_2c8.Mesh = param_1;
  bVar3 = UE::Geometry::FMeshProjectionHull::Compute(&local_2c8);
  if (bVar3) {
    UE::Geometry::FDynamicMesh3::operator=
              (*(FDynamicMesh3 **)((longlong)this + 0x10),&local_2c8.ConvexHull3D);
  }
  UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_2c8.ConvexHull3D);
  if (local_2c8.SimplifiedHull2D.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(local_2c8.SimplifiedHull2D.Vertices.AllocatorInstance.Data);
  }
  if (local_2c8.ConvexHull2D.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2c8.ConvexHull2D.Vertices.AllocatorInstance.Data);
  }
  return;
}

// ComputeMeshConvexDecomposition @ 14cdccea0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_ContainmentFunctions::ComputeMeshConvexDecomposition
          (UDynamicMesh *param_1,UDynamicMesh *param_2,UDynamicMesh **param_3,
          FGeometryScriptConvexDecompositionOptions *param_4,UGeometryScriptDebug *param_5)

{
  FText *pFVar1;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *pTVar2;
  undefined1 local_258 [16];
  FGeometryScriptConvexDecompositionOptions *local_248;
  FDynamicMesh3 *local_240;
  FDynamicMesh3 local_238;
  
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_258,L"UGeometryScriptLibrary_MeshContainmentFunctions",
                        L"ComputeMeshConvexDecomposition_InvalidInput",
                        L"ComputeMeshConvexDecomposition: TargetMesh is Null");
    UE::Geometry::AppendError(param_5,InvalidInputs,pFVar1);
    if ((ITextData *)local_258._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_258._0_8_ + 0x10))();
    }
    param_1 = (UDynamicMesh *)0x0;
  }
  else if (param_2 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_258,L"UGeometryScriptLibrary_MeshContainmentFunctions",
                        L"ComputeMeshConvexDecomposition_InvalidInput2",
                        L"ComputeMeshConvexDecomposition: CopyToMesh is Null");
    UE::Geometry::AppendError(param_5,InvalidInputs,pFVar1);
    if ((ITextData *)local_258._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_258._0_8_ + 0x10))();
    }
  }
  else {
    *param_3 = param_2;
    UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_238);
    local_240 = &local_238;
    local_258._8_8_ = &local_248;
    local_258._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_ContainmentFunctions::ComputeMeshConvexDecomposition'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
         ::Call;
    local_248 = param_4;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)local_258)
    ;
    if (local_238.TriangleRefCounts.UsedCount == 0) {
      pFVar1 = FText::AsLocalizable_Advanced_LocText
                         ((FText *)local_258,L"UGeometryScriptLibrary_MeshContainmentFunctions",
                          L"ComputeMeshConvexDecomposition_Failed",
                          L"ComputeMeshConvexDecomposition: Hull Computation Failed");
      UE::Geometry::AppendError(param_5,OperationFailed,pFVar1);
      if ((ITextData *)local_258._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_258._0_8_ + 0x10))();
      }
      UDynamicMesh::ResetToCube(param_2);
    }
    else {
      if (((local_238.AttributeSet.Ptr)->NormalLayers).Array.ArrayNum < 1) {
        pTVar2 = (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0;
      }
      else {
        pTVar2 = *(TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> **)
                  ((local_238.AttributeSet.Ptr)->NormalLayers).Array.AllocatorInstance.Data;
      }
      UE::Geometry::FMeshNormals::InitializeOverlayToPerTriangleNormals(pTVar2);
      UDynamicMesh::SetMesh(param_2,&local_238);
    }
    UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_238);
  }
  return param_1;
}

// ComputeMeshConvexHull @ 14cdcd040

UDynamicMesh * __cdecl
UGeometryScriptLibrary_ContainmentFunctions::ComputeMeshConvexHull
          (UDynamicMesh *param_1,UDynamicMesh *param_2,UDynamicMesh **param_3,
          FGeometryScriptMeshSelection *param_4,FGeometryScriptConvexHullOptions *param_5,
          UGeometryScriptDebug *param_6)

{
  FText *pFVar1;
  undefined1 local_268 [16];
  FGeometryScriptMeshSelection *local_258;
  FGeometryScriptConvexHullOptions *local_250;
  FDynamicMesh3 *local_248;
  FDynamicMesh3 local_238;
  
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_268,L"UGeometryScriptLibrary_MeshContainmentFunctions",
                        L"ComputeMeshConvexHull_InvalidInput",
                        L"ComputeMeshConvexHull: TargetMesh is Null");
    UE::Geometry::AppendError(param_6,InvalidInputs,pFVar1);
    if ((ITextData *)local_268._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_268._0_8_ + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_4->GeoSelection).SharedReferenceCount.ReferenceController);
    param_1 = (UDynamicMesh *)0x0;
  }
  else {
    if (param_2 == (UDynamicMesh *)0x0) {
      pFVar1 = FText::AsLocalizable_Advanced_LocText
                         ((FText *)local_268,L"UGeometryScriptLibrary_MeshContainmentFunctions",
                          L"ComputeMeshConvexHull_InvalidInput2",
                          L"ComputeMeshConvexHull: CopyToMesh is Null");
      UE::Geometry::AppendError(param_6,InvalidInputs,pFVar1);
      if ((ITextData *)local_268._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_268._0_8_ + 0x10))();
      }
    }
    else {
      *param_3 = param_2;
      UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_238);
      local_250 = param_5;
      local_248 = &local_238;
      local_268._8_8_ = &local_258;
      local_268._0_8_ =
           UE::Core::Private::Function::
           TFunctionRefCaller<`UGeometryScriptLibrary_ContainmentFunctions::ComputeMeshConvexHull'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
           ::Call;
      local_258 = param_4;
      UDynamicMesh::ProcessMesh
                (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)
                         local_268);
      if (local_238.TriangleRefCounts.UsedCount == 0) {
        pFVar1 = FText::AsLocalizable_Advanced_LocText
                           ((FText *)local_268,L"UGeometryScriptLibrary_MeshContainmentFunctions",
                            L"ComputeMeshConvexHull_Failed",
                            L"ComputeMeshConvexHull: Hull Computation Failed");
        UE::Geometry::AppendError(param_6,OperationFailed,pFVar1);
        if ((ITextData *)local_268._0_8_ != (ITextData *)0x0) {
          (**(code **)((longlong)*(ITextData *)local_268._0_8_ + 0x10))();
        }
        UDynamicMesh::ResetToCube(param_2);
      }
      else {
        UDynamicMesh::SetMesh(param_2,&local_238);
      }
      UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_238);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_4->GeoSelection).SharedReferenceCount.ReferenceController);
  }
  return param_1;
}

// ComputeMeshOrientedBox @ 14cdcd1e0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_ContainmentFunctions::ComputeMeshOrientedBox
          (UDynamicMesh *param_1,FOrientedBox *param_2,FGeometryScriptMeshSelection *param_3,
          FGeometryScriptFitOrientedBoxOptions *param_4,UGeometryScriptDebug *param_5)

{
  FText *pFVar1;
  undefined1 local_38 [16];
  FOrientedBox *local_28;
  FGeometryScriptMeshSelection *local_20;
  FGeometryScriptFitOrientedBoxOptions *local_18;
  UGeometryScriptDebug *local_10;
  
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_38,L"UGeometryScriptLibrary_MeshContainmentFunctions",
                        L"ComputeMeshOrientedBox_InvalidInput",
                        L"ComputeMeshOrientedBox: TargetMesh is Null");
    UE::Geometry::AppendError(param_5,InvalidInputs,pFVar1);
    if ((ITextData *)local_38._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_38._0_8_ + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_3->GeoSelection).SharedReferenceCount.ReferenceController);
    return (UDynamicMesh *)0x0;
  }
  local_10 = param_5;
  local_38._8_8_ = &local_28;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_ContainmentFunctions::ComputeMeshOrientedBox'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
       ::Call;
  local_28 = param_2;
  local_20 = param_3;
  local_18 = param_4;
  UDynamicMesh::ProcessMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->GeoSelection).SharedReferenceCount.ReferenceController);
  return param_1;
}

// ComputeMeshSweptHull @ 14cdcd2b0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_ContainmentFunctions::ComputeMeshSweptHull
          (UDynamicMesh *param_1,UDynamicMesh *param_2,UDynamicMesh **param_3,
          TTransform<double> *param_4,FGeometryScriptSweptHullOptions *param_5,
          UGeometryScriptDebug *param_6)

{
  FText *pFVar1;
  undefined1 local_278 [16];
  TTransform<double> *local_268;
  FGeometryScriptSweptHullOptions *local_260;
  FDynamicMesh3 *local_258;
  FDynamicMesh3 local_248;
  
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_278,L"UGeometryScriptLibrary_MeshContainmentFunctions",
                        L"ComputeMeshSweptHull_InvalidInput",
                        L"ComputeMeshSweptHull: TargetMesh is Null");
    UE::Geometry::AppendError(param_6,InvalidInputs,pFVar1);
    if ((ITextData *)local_278._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_278._0_8_ + 0x10))();
    }
    param_1 = (UDynamicMesh *)0x0;
  }
  else if (param_2 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_278,L"UGeometryScriptLibrary_MeshContainmentFunctions",
                        L"ComputeMeshSweptHulll_InvalidInput2",
                        L"ComputeMeshSweptHull: CopyToMesh is Null");
    UE::Geometry::AppendError(param_6,InvalidInputs,pFVar1);
    if ((ITextData *)local_278._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_278._0_8_ + 0x10))(local_278._0_8_);
    }
  }
  else {
    *param_3 = param_2;
    UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_248);
    local_260 = param_5;
    local_258 = &local_248;
    local_278._8_8_ = &local_268;
    local_278._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_ContainmentFunctions::ComputeMeshSweptHull'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
         ::Call;
    local_268 = param_4;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)local_278)
    ;
    if (local_248.TriangleRefCounts.UsedCount == 0) {
      pFVar1 = FText::AsLocalizable_Advanced_LocText
                         ((FText *)local_278,L"UGeometryScriptLibrary_MeshContainmentFunctions",
                          L"ComputeMeshSweptHull_Failed",
                          L"ComputeMeshSweptHull: Hull Computation Failed");
      UE::Geometry::AppendError(param_6,OperationFailed,pFVar1);
      if ((ITextData *)local_278._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_278._0_8_ + 0x10))();
      }
      UDynamicMesh::ResetToCube(param_2);
    }
    else {
      UDynamicMesh::SetMesh(param_2,&local_248);
    }
    UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_248);
  }
  return param_1;
}

// GetPrivateStaticClass @ 14cdd83e0

UClass * __cdecl UGeometryScriptLibrary_ContainmentFunctions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_ContainmentFunctions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_ContainmentFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_ContainmentFunctions.
                InnerSingleton,StaticRegisterNativesUGeometryScriptLibrary_ContainmentFunctions,0x28
               ,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryScriptLibrary_ContainmentFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_ContainmentFunctions>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_ContainmentFunctions.InnerSingleton;
}

// StaticRegisterNativesUGeometryScriptLibrary_ContainmentFunctions @ 14cde70e0

void __cdecl
UGeometryScriptLibrary_ContainmentFunctions::
StaticRegisterNativesUGeometryScriptLibrary_ContainmentFunctions(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UGeometryScriptLibrary_ContainmentFunctions_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execComputeMeshConvexDecomposition @ 14cdf6d70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_ContainmentFunctions::execComputeMeshConvexDecomposition
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  FProperty *pFVar2;
  UDynamicMesh *this;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  UGeometryScriptDebug *pUVar5;
  bool bVar6;
  int iVar7;
  FText *pFVar8;
  longlong lVar9;
  UDynamicMesh *pUVar10;
  UDynamicMesh *this_00;
  uchar *puVar11;
  uchar *puVar12;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined2 local_368;
  ITextData *local_360;
  uint local_358;
  undefined2 local_350;
  ITextData *local_348;
  uint local_340;
  uchar local_338 [8];
  undefined8 local_330;
  UGeometryScriptDebug *local_328;
  UDynamicMesh *local_320;
  undefined1 local_318 [8];
  undefined4 local_310;
  undefined4 uStack_30c;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined4 local_2f0;
  undefined4 uStack_2ec;
  undefined8 *local_2e8;
  FDynamicMesh3 *local_2e0;
  code *local_2d8;
  undefined8 **local_2d0;
  FText local_2c8;
  FText local_2b8;
  FText local_2a8;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  FDynamicMesh3 local_268;
  
  pUVar10 = (UDynamicMesh *)0x0;
  local_320 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_320,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_320);
  }
  local_338[0] = '\0';
  local_338[1] = '\0';
  local_338[2] = '\0';
  local_338[3] = '\0';
  local_338[4] = '\0';
  local_338[5] = '\0';
  local_338[6] = '\0';
  local_338[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_338,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_338);
  }
  puVar12 = param_2->MostRecentPropertyAddress;
  local_330 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar11 = local_338;
  if (puVar12 != (uchar *)0x0) {
    puVar11 = puVar12;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_330,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_330);
  }
  uStack_308 = ___xmm_00000000000000003fe0000000000000;
  uStack_300 = _UNK_150978bb8;
  puVar12 = (uchar *)&local_330;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar12 = param_2->MostRecentPropertyAddress;
  }
  local_310 = 2;
  uStack_2f8 = __real_3fb999999999999a;
  local_2f0 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_310,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_310);
  }
  local_328 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_328,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_328);
  }
  this_00 = local_320;
  pUVar5 = local_328;
  local_298 = CONCAT44(uStack_30c,local_310);
  uStack_290 = uStack_308;
  local_278 = CONCAT44(uStack_2ec,local_2f0);
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(UDynamicMesh **)puVar11;
  local_288 = uStack_300;
  uStack_280 = uStack_2f8;
  if (local_320 == (UDynamicMesh *)0x0) {
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       (&local_2c8,L"UGeometryScriptLibrary_MeshContainmentFunctions",
                        L"ComputeMeshConvexDecomposition_InvalidInput",
                        L"ComputeMeshConvexDecomposition: TargetMesh is Null");
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(pFVar8);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_360 = (pFVar8->TextData).Reference;
    local_368 = 0x200;
    if (local_360 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_360 + 8))(local_360,local_res10);
    }
    local_358 = pFVar8->Flags;
    if (pUVar5 != (UGeometryScriptDebug *)0x0) {
      pFVar3 = (pUVar5->Messages).AllocatorInstance.Data;
      if (((pFVar3 <= (FScriptContainerElement *)&local_368) &&
          ((FScriptContainerElement *)&local_368 <
           pFVar3 + (longlong)(pUVar5->Messages).ArrayMax * 0x18)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar7 = (pUVar5->Messages).ArrayNum;
      piVar1 = &(pUVar5->Messages).ArrayMax;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,&(pUVar5->Messages).AllocatorInstance,piVar1);
      }
      lVar9 = (longlong)iVar7;
      (pUVar5->Messages).ArrayNum = iVar7 + 1;
      pFVar3 = (pUVar5->Messages).AllocatorInstance.Data;
      pFVar3[lVar9 * 0x18] = local_368._0_1_;
      pFVar3[lVar9 * 0x18 + 1] = local_368._1_1_;
      *(undefined8 *)(pFVar3 + lVar9 * 0x18 + 8) = 0;
      *(ITextData **)(pFVar3 + lVar9 * 0x18 + 8) = local_360;
      if (local_360 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_360 + 8))(local_360,local_res18);
      }
      *(uint *)(pFVar3 + lVar9 * 0x18 + 0x10) = local_358;
    }
    if (local_360 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_360 + 0x10))();
    }
    this_00 = pUVar10;
    if (local_2c8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_2c8.TextData.Reference + 0x10))();
    }
  }
  else if (this == (UDynamicMesh *)0x0) {
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       (&local_2b8,L"UGeometryScriptLibrary_MeshContainmentFunctions",
                        L"ComputeMeshConvexDecomposition_InvalidInput2",
                        L"ComputeMeshConvexDecomposition: CopyToMesh is Null");
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(pFVar8);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_348 = (pFVar8->TextData).Reference;
    local_350 = 0x200;
    if (local_348 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_348 + 8))(local_348,local_res20);
    }
    local_340 = pFVar8->Flags;
    if (pUVar5 != (UGeometryScriptDebug *)0x0) {
      pFVar3 = (pUVar5->Messages).AllocatorInstance.Data;
      if (((pFVar3 <= (FScriptContainerElement *)&local_350) &&
          ((FScriptContainerElement *)&local_350 <
           pFVar3 + (longlong)(pUVar5->Messages).ArrayMax * 0x18)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar7 = (pUVar5->Messages).ArrayNum;
      piVar1 = &(pUVar5->Messages).ArrayMax;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,&(pUVar5->Messages).AllocatorInstance,piVar1);
      }
      lVar9 = (longlong)iVar7;
      (pUVar5->Messages).ArrayNum = iVar7 + 1;
      pFVar3 = (pUVar5->Messages).AllocatorInstance.Data;
      pFVar3[lVar9 * 0x18] = local_350._0_1_;
      pFVar3[lVar9 * 0x18 + 1] = local_350._1_1_;
      *(undefined8 *)(pFVar3 + lVar9 * 0x18 + 8) = 0;
      *(ITextData **)(pFVar3 + lVar9 * 0x18 + 8) = local_348;
      if (local_348 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_348 + 8))(local_348,local_318);
      }
      *(uint *)(pFVar3 + lVar9 * 0x18 + 0x10) = local_340;
    }
    if (local_348 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_348 + 0x10))();
    }
    if (local_2b8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_2b8.TextData.Reference + 0x10))();
    }
  }
  else {
    *(UDynamicMesh **)puVar12 = this;
    UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_268);
    local_2e8 = &local_298;
    local_2e0 = &local_268;
    local_2d0 = &local_2e8;
    local_2d8 = UE::Core::Private::Function::
                TFunctionRefCaller<`UGeometryScriptLibrary_ContainmentFunctions::ComputeMeshConvexDecomposition'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
                ::Call;
    UDynamicMesh::ProcessMesh
              (this_00,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_2d8
              );
    if (local_268.TriangleRefCounts.UsedCount == 0) {
      pFVar8 = FText::AsLocalizable_Advanced_LocText
                         (&local_2a8,L"UGeometryScriptLibrary_MeshContainmentFunctions",
                          L"ComputeMeshConvexDecomposition_Failed",
                          L"ComputeMeshConvexDecomposition: Hull Computation Failed");
      UE::Geometry::AppendError(pUVar5,OperationFailed,pFVar8);
      if (local_2a8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_2a8.TextData.Reference + 0x10))();
      }
      UDynamicMesh::ResetToCube(this);
    }
    else {
      if (0 < ((local_268.AttributeSet.Ptr)->NormalLayers).Array.ArrayNum) {
        pUVar10 = *(UDynamicMesh **)
                   ((local_268.AttributeSet.Ptr)->NormalLayers).Array.AllocatorInstance.Data;
      }
      UE::Geometry::FMeshNormals::InitializeOverlayToPerTriangleNormals
                ((TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)pUVar10);
      UDynamicMesh::SetMesh(this,&local_268);
    }
    UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_268);
  }
  *(UDynamicMesh **)param_3 = this_00;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (*(UObject **)puVar12 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(*(UObject **)puVar12);
  }
  return;
}

// execComputeMeshConvexHull @ 14cdf7350

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_ContainmentFunctions::execComputeMeshConvexHull
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  FProperty *pFVar2;
  UDynamicMesh *this;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  UGeometryScriptDebug *pUVar5;
  bool bVar6;
  int iVar7;
  FText *pFVar8;
  UDynamicMesh *this_00;
  uchar *puVar9;
  uchar *puVar10;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined4 local_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined2 local_358;
  ITextData *local_350;
  uint local_348;
  undefined2 local_340;
  ITextData *local_338;
  uint local_330;
  uchar local_328 [8];
  undefined8 local_320;
  UGeometryScriptDebug *local_318;
  UDynamicMesh *local_310;
  FGeometryScriptMeshSelection local_308;
  undefined1 local_2f8 [16];
  undefined8 local_2e8;
  undefined4 local_2e0;
  code *local_2d8;
  FGeometrySelection ***local_2d0;
  FGeometrySelection *local_2c8;
  TReferenceControllerBase<1> *pTStack_2c0;
  FGeometrySelection **local_2b8;
  undefined8 *local_2b0;
  FDynamicMesh3 *local_2a8;
  FText local_2a0;
  FText local_290;
  FText local_280;
  FDynamicMesh3 local_268;
  
  local_310 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_310,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_310);
  }
  local_328[0] = '\0';
  local_328[1] = '\0';
  local_328[2] = '\0';
  local_328[3] = '\0';
  local_328[4] = '\0';
  local_328[5] = '\0';
  local_328[6] = '\0';
  local_328[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_328,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_328);
  }
  puVar10 = param_2->MostRecentPropertyAddress;
  local_320 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar9 = local_328;
  if (puVar10 != (uchar *)0x0) {
    puVar9 = puVar10;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_320,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_320);
  }
  puVar10 = (uchar *)&local_320;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar10 = param_2->MostRecentPropertyAddress;
  }
  FGeometryScriptMeshSelection::FGeometryScriptMeshSelection(&local_308);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_308,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_308);
  }
  local_368 = CONCAT31(local_368._1_3_,1);
  uStack_364 = 0x80;
  uStack_360 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_368,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_368);
  }
  local_318 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_318,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_318);
  }
  this_00 = local_310;
  pUVar5 = local_318;
  local_2e8 = CONCAT44(uStack_364,local_368);
  local_2c8 = local_308.GeoSelection.Object;
  pTStack_2c0 = local_308.GeoSelection.SharedReferenceCount.ReferenceController;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_308.GeoSelection.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_308.GeoSelection.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_308.GeoSelection.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  this = *(UDynamicMesh **)puVar9;
  local_2e0 = uStack_360;
  if (local_310 == (UDynamicMesh *)0x0) {
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       (&local_2a0,L"UGeometryScriptLibrary_MeshContainmentFunctions",
                        L"ComputeMeshConvexHull_InvalidInput",
                        L"ComputeMeshConvexHull: TargetMesh is Null");
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(pFVar8);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_350 = (pFVar8->TextData).Reference;
    local_358 = 0x200;
    if (local_350 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_350 + 8))(local_350,local_res10);
    }
    local_348 = pFVar8->Flags;
    if (pUVar5 != (UGeometryScriptDebug *)0x0) {
      pFVar3 = (pUVar5->Messages).AllocatorInstance.Data;
      if (((pFVar3 <= (FScriptContainerElement *)&local_358) &&
          ((FScriptContainerElement *)&local_358 <
           pFVar3 + (longlong)(pUVar5->Messages).ArrayMax * 0x18)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar7 = (pUVar5->Messages).ArrayNum;
      piVar1 = &(pUVar5->Messages).ArrayMax;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,&(pUVar5->Messages).AllocatorInstance,piVar1);
      }
      (pUVar5->Messages).ArrayNum = iVar7 + 1;
      pFVar3 = (pUVar5->Messages).AllocatorInstance.Data + (longlong)iVar7 * 0x18;
      *pFVar3 = local_358._0_1_;
      pFVar3[1] = local_358._1_1_;
      *(undefined8 *)(pFVar3 + 8) = 0;
      *(ITextData **)(pFVar3 + 8) = local_350;
      if (local_350 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_350 + 8))(local_350,local_res18);
      }
      *(uint *)(pFVar3 + 0x10) = local_348;
    }
    if (local_350 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_350 + 0x10))();
    }
    this_00 = (UDynamicMesh *)0x0;
    if (local_2a0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_2a0.TextData.Reference + 0x10))();
    }
  }
  else if (this == (UDynamicMesh *)0x0) {
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       (&local_290,L"UGeometryScriptLibrary_MeshContainmentFunctions",
                        L"ComputeMeshConvexHull_InvalidInput2",
                        L"ComputeMeshConvexHull: CopyToMesh is Null");
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(pFVar8);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_338 = (pFVar8->TextData).Reference;
    local_340 = 0x200;
    if (local_338 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_338 + 8))(local_338,local_res20);
    }
    local_330 = pFVar8->Flags;
    if (pUVar5 != (UGeometryScriptDebug *)0x0) {
      pFVar3 = (pUVar5->Messages).AllocatorInstance.Data;
      if (((pFVar3 <= (FScriptContainerElement *)&local_340) &&
          ((FScriptContainerElement *)&local_340 <
           pFVar3 + (longlong)(pUVar5->Messages).ArrayMax * 0x18)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar7 = (pUVar5->Messages).ArrayNum;
      piVar1 = &(pUVar5->Messages).ArrayMax;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,&(pUVar5->Messages).AllocatorInstance,piVar1);
      }
      (pUVar5->Messages).ArrayNum = iVar7 + 1;
      pFVar3 = (pUVar5->Messages).AllocatorInstance.Data + (longlong)iVar7 * 0x18;
      *pFVar3 = local_340._0_1_;
      pFVar3[1] = local_340._1_1_;
      *(undefined8 *)(pFVar3 + 8) = 0;
      *(ITextData **)(pFVar3 + 8) = local_338;
      if (local_338 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_338 + 8))(local_338,local_2f8);
      }
      *(uint *)(pFVar3 + 0x10) = local_330;
    }
    if (local_338 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_338 + 0x10))();
    }
    if (local_290.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_290.TextData.Reference + 0x10))();
    }
  }
  else {
    *(UDynamicMesh **)puVar10 = this;
    UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_268);
    local_2b8 = &local_2c8;
    local_2b0 = &local_2e8;
    local_2a8 = &local_268;
    local_2d8 = UE::Core::Private::Function::
                TFunctionRefCaller<`UGeometryScriptLibrary_ContainmentFunctions::ComputeMeshConvexHull'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
                ::Call;
    local_2d0 = &local_2b8;
    UDynamicMesh::ProcessMesh
              (this_00,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_2d8
              );
    if (local_268.TriangleRefCounts.UsedCount == 0) {
      pFVar8 = FText::AsLocalizable_Advanced_LocText
                         (&local_280,L"UGeometryScriptLibrary_MeshContainmentFunctions",
                          L"ComputeMeshConvexHull_Failed",
                          L"ComputeMeshConvexHull: Hull Computation Failed");
      UE::Geometry::AppendError(pUVar5,OperationFailed,pFVar8);
      if (local_280.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_280.TextData.Reference + 0x10))();
      }
      UDynamicMesh::ResetToCube(this);
    }
    else {
      UDynamicMesh::SetMesh(this,&local_268);
    }
    UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_268);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_2c0);
  *(UDynamicMesh **)param_3 = this_00;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (*(UObject **)puVar10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(*(UObject **)puVar10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_308.GeoSelection.SharedReferenceCount.ReferenceController);
  return;
}

// execComputeMeshOrientedBox @ 14cdf7960

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_ContainmentFunctions::execComputeMeshOrientedBox
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  FText *this;
  longlong lVar7;
  UDynamicMesh *pUVar8;
  uchar *puVar9;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  longlong local_res20;
  undefined2 local_148;
  ITextData *local_140;
  uint local_138;
  UDynamicMesh *local_130;
  undefined8 local_128;
  undefined1 uStack_120;
  undefined7 uStack_11f;
  FGeometryScriptMeshSelection local_118;
  code *local_108;
  uchar **local_100;
  FGeometrySelection *local_f8;
  TReferenceControllerBase<1> *pTStack_f0;
  uchar *local_e8;
  FGeometrySelection **local_e0;
  undefined8 *local_d8;
  longlong local_d0;
  FText local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  uchar local_a8 [16];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  local_130 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_130,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_130);
  }
  local_a8[0] = '\0';
  local_a8[1] = '\0';
  local_a8[2] = '\0';
  local_a8[3] = '\0';
  local_a8[4] = '\0';
  local_a8[5] = '\0';
  local_a8[6] = '\0';
  local_a8[7] = '\0';
  local_a8[8] = '\0';
  local_a8[9] = '\0';
  local_a8[10] = '\0';
  local_a8[0xb] = '\0';
  local_a8[0xc] = '\0';
  local_a8[0xd] = '\0';
  local_a8[0xe] = '\0';
  local_a8[0xf] = '\0';
  local_88 = 0;
  uStack_80 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_48 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_40 = _UNK_150689688;
  local_38 = __real_3ff0000000000000;
  local_98 = ___xmm_3ff00000000000000000000000000000;
  uStack_90 = _UNK_15061cbc8;
  local_78 = ___xmm_3ff00000000000000000000000000000;
  uStack_70 = _UNK_15061cbc8;
  local_58 = ___xmm_3ff00000000000000000000000000000;
  uStack_50 = _UNK_15061cbc8;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_a8);
  }
  puVar9 = local_a8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar9 = param_2->MostRecentPropertyAddress;
  }
  FGeometryScriptMeshSelection::FGeometryScriptMeshSelection(&local_118);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_118,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_118);
  }
  local_128 = __real_3f847ae147ae147b;
  uStack_120 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_128,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_128);
  }
  local_res20 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  pUVar8 = local_130;
  lVar4 = local_res20;
  uStack_b0 = CONCAT71(uStack_11f,uStack_120);
  local_f8 = local_118.GeoSelection.Object;
  pTStack_f0 = local_118.GeoSelection.SharedReferenceCount.ReferenceController;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_118.GeoSelection.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_118.GeoSelection.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_118.GeoSelection.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  local_b8 = local_128;
  if (local_130 == (UDynamicMesh *)0x0) {
    this = FText::AsLocalizable_Advanced_LocText
                     (&local_c8,L"UGeometryScriptLibrary_MeshContainmentFunctions",
                      L"ComputeMeshOrientedBox_InvalidInput",
                      L"ComputeMeshOrientedBox: TargetMesh is Null");
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(this);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_140 = (this->TextData).Reference;
    local_148 = 0x200;
    if (local_140 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_140 + 8))(local_140,local_res10);
    }
    local_138 = this->Flags;
    if (lVar4 != 0) {
      if (((*(undefined2 **)(lVar4 + 0x28) <= &local_148) &&
          (&local_148 < *(undefined2 **)(lVar4 + 0x28) + (longlong)*(int *)(lVar4 + 0x34) * 0xc)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar6 = *(int *)(lVar4 + 0x30);
      if (iVar6 == *(int *)(lVar4 + 0x34)) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,(ForAnyElementType *)(lVar4 + 0x28),(int *)(lVar4 + 0x34));
      }
      lVar7 = (longlong)iVar6;
      *(int *)(lVar4 + 0x30) = iVar6 + 1;
      pFVar2 = ((ForAnyElementType *)(lVar4 + 0x28))->Data;
      pFVar2[lVar7 * 0x18] = local_148._0_1_;
      pFVar2[lVar7 * 0x18 + 1] = local_148._1_1_;
      *(undefined8 *)(pFVar2 + lVar7 * 0x18 + 8) = 0;
      *(ITextData **)(pFVar2 + lVar7 * 0x18 + 8) = local_140;
      if (local_140 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_140 + 8))(local_140,local_res18);
      }
      *(uint *)(pFVar2 + lVar7 * 0x18 + 0x10) = local_138;
    }
    if (local_140 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_140 + 0x10))();
    }
    pUVar8 = (UDynamicMesh *)0x0;
    if (local_c8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
    }
  }
  else {
    local_e0 = &local_f8;
    local_d8 = &local_b8;
    local_d0 = local_res20;
    local_100 = &local_e8;
    local_108 = UE::Core::Private::Function::
                TFunctionRefCaller<`UGeometryScriptLibrary_ContainmentFunctions::ComputeMeshOrientedBox'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
                ::Call;
    local_e8 = puVar9;
    UDynamicMesh::ProcessMesh
              (local_130,
               (TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_108);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_f0);
  *(UDynamicMesh **)param_3 = pUVar8;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_118.GeoSelection.SharedReferenceCount.ReferenceController);
  return;
}

// execComputeMeshSweptHull @ 14cdf7d60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_ContainmentFunctions::execComputeMeshSweptHull
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  FProperty *pFVar2;
  UDynamicMesh *this;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  UGeometryScriptDebug *pUVar5;
  bool bVar6;
  int iVar7;
  FText *pFVar8;
  uchar *puVar9;
  UDynamicMesh *this_00;
  longlong lVar10;
  uchar *puVar11;
  undefined1 auStack_468 [32];
  undefined2 *local_448;
  FScriptContainerElement *local_440;
  longlong local_438;
  longlong local_430;
  undefined8 local_428;
  undefined2 local_418;
  ITextData *local_410;
  uint local_408;
  undefined2 local_400;
  ITextData *local_3f8;
  uint local_3f0;
  uchar local_3e8 [8];
  undefined8 local_3e0;
  UGeometryScriptDebug *local_3d8;
  UDynamicMesh *local_3d0;
  undefined4 local_3c8;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined4 local_3b8;
  undefined4 uStack_3b4;
  undefined1 local_3b0 [4];
  undefined1 local_3ac [4];
  undefined1 local_3a8 [4];
  undefined1 local_3a4 [4];
  code *local_3a0;
  undefined8 **local_398;
  undefined8 *local_390;
  undefined8 *local_388;
  FDynamicMesh3 *local_380;
  FText local_378;
  FText local_368;
  FText local_358;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  FDynamicMesh3 local_2c8;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_468;
  local_3d0 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_3d0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_3d0);
  }
  local_3e8[0] = '\0';
  local_3e8[1] = '\0';
  local_3e8[2] = '\0';
  local_3e8[3] = '\0';
  local_3e8[4] = '\0';
  local_3e8[5] = '\0';
  local_3e8[6] = '\0';
  local_3e8[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_3e8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_3e8);
  }
  puVar11 = param_2->MostRecentPropertyAddress;
  local_3e0 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar9 = local_3e8;
  if (puVar11 != (uchar *)0x0) {
    puVar9 = puVar11;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_3e0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_3e0);
  }
  puVar11 = (uchar *)&local_3e0;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar11 = param_2->MostRecentPropertyAddress;
  }
  local_98._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_98._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_98._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_88._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_88._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_88._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_78._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_78._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_78._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_68._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_68._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_68._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_58._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_58._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_58._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_48._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_48._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_48._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_98,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_98);
  }
  local_3c8 = CONCAT31(local_3c8._1_3_,1);
  uStack_3c4 = 0x80;
  uStack_3c0 = 0x3c23d70a;
  uStack_3bc = CONCAT31(uStack_3bc._1_3_,1);
  local_3b8 = 0x3dcccccd;
  uStack_3b4 = 0x3dcccccd;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_3c8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_3c8);
  }
  local_3d8 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_3d8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_3d8);
  }
  this_00 = local_3d0;
  pUVar5 = local_3d8;
  local_348 = CONCAT44(uStack_3c4,local_3c8);
  uStack_340 = CONCAT44(uStack_3bc,uStack_3c0);
  local_338 = CONCAT44(uStack_3b4,local_3b8);
  local_328 = local_98._0_8_;
  uStack_320 = local_98._8_8_;
  local_318 = local_88._0_8_;
  uStack_310 = local_88._8_8_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(UDynamicMesh **)puVar9;
  local_308 = local_78._0_8_;
  uStack_300 = local_78._8_8_;
  local_2f8 = local_68._0_8_;
  uStack_2f0 = local_68._8_8_;
  local_2e8 = local_58._0_8_;
  uStack_2e0 = local_58._8_8_;
  local_2d8 = local_48._0_8_;
  uStack_2d0 = local_48._8_8_;
  if (local_3d0 == (UDynamicMesh *)0x0) {
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       (&local_378,L"UGeometryScriptLibrary_MeshContainmentFunctions",
                        L"ComputeMeshSweptHull_InvalidInput",
                        L"ComputeMeshSweptHull: TargetMesh is Null");
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(pFVar8);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_410 = (pFVar8->TextData).Reference;
    local_418 = 0x200;
    if (local_410 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_410 + 8))(local_410,local_3b0);
    }
    local_408 = pFVar8->Flags;
    if (pUVar5 != (UGeometryScriptDebug *)0x0) {
      pFVar3 = (pUVar5->Messages).AllocatorInstance.Data;
      if ((pFVar3 <= (FScriptContainerElement *)&local_418) &&
         (lVar10 = (longlong)(pUVar5->Messages).ArrayMax,
         (FScriptContainerElement *)&local_418 < pFVar3 + lVar10 * 0x18)) {
        local_430 = (longlong)(pUVar5->Messages).ArrayNum;
        local_428 = 0x18;
        local_448 = &local_418;
        local_440 = pFVar3;
        local_438 = lVar10;
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
      iVar7 = (pUVar5->Messages).ArrayNum;
      piVar1 = &(pUVar5->Messages).ArrayMax;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,&(pUVar5->Messages).AllocatorInstance,piVar1);
      }
      lVar10 = (longlong)iVar7;
      (pUVar5->Messages).ArrayNum = iVar7 + 1;
      pFVar3 = (pUVar5->Messages).AllocatorInstance.Data;
      pFVar3[lVar10 * 0x18] = local_418._0_1_;
      pFVar3[lVar10 * 0x18 + 1] = local_418._1_1_;
      *(undefined8 *)(pFVar3 + lVar10 * 0x18 + 8) = 0;
      *(ITextData **)(pFVar3 + lVar10 * 0x18 + 8) = local_410;
      if (local_410 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_410 + 8))(local_410,local_3ac);
      }
      *(uint *)(pFVar3 + lVar10 * 0x18 + 0x10) = local_408;
    }
    if (local_410 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_410 + 0x10))();
    }
    this_00 = (UDynamicMesh *)0x0;
    if (local_378.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_378.TextData.Reference + 0x10))();
    }
  }
  else if (this == (UDynamicMesh *)0x0) {
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       (&local_368,L"UGeometryScriptLibrary_MeshContainmentFunctions",
                        L"ComputeMeshSweptHulll_InvalidInput2",
                        L"ComputeMeshSweptHull: CopyToMesh is Null");
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(pFVar8);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_3f8 = (pFVar8->TextData).Reference;
    local_400 = 0x200;
    if (local_3f8 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_3f8 + 8))(local_3f8,local_3a8);
    }
    local_3f0 = pFVar8->Flags;
    if (pUVar5 != (UGeometryScriptDebug *)0x0) {
      pFVar3 = (pUVar5->Messages).AllocatorInstance.Data;
      if ((pFVar3 <= (FScriptContainerElement *)&local_400) &&
         (lVar10 = (longlong)(pUVar5->Messages).ArrayMax,
         (FScriptContainerElement *)&local_400 < pFVar3 + lVar10 * 0x18)) {
        local_430 = (longlong)(pUVar5->Messages).ArrayNum;
        local_428 = 0x18;
        local_448 = &local_400;
        local_440 = pFVar3;
        local_438 = lVar10;
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
      iVar7 = (pUVar5->Messages).ArrayNum;
      piVar1 = &(pUVar5->Messages).ArrayMax;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,&(pUVar5->Messages).AllocatorInstance,piVar1);
      }
      lVar10 = (longlong)iVar7;
      (pUVar5->Messages).ArrayNum = iVar7 + 1;
      pFVar3 = (pUVar5->Messages).AllocatorInstance.Data;
      pFVar3[lVar10 * 0x18] = local_400._0_1_;
      pFVar3[lVar10 * 0x18 + 1] = local_400._1_1_;
      *(undefined8 *)(pFVar3 + lVar10 * 0x18 + 8) = 0;
      *(ITextData **)(pFVar3 + lVar10 * 0x18 + 8) = local_3f8;
      if (local_3f8 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_3f8 + 8))(local_3f8,local_3a4);
      }
      *(uint *)(pFVar3 + lVar10 * 0x18 + 0x10) = local_3f0;
    }
    if (local_3f8 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_3f8 + 0x10))();
    }
    if (local_368.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_368.TextData.Reference + 0x10))();
    }
  }
  else {
    *(UDynamicMesh **)puVar11 = this;
    UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_2c8);
    local_390 = &local_328;
    local_388 = &local_348;
    local_380 = &local_2c8;
    local_398 = &local_390;
    local_3a0 = UE::Core::Private::Function::
                TFunctionRefCaller<`UGeometryScriptLibrary_ContainmentFunctions::ComputeMeshSweptHull'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
                ::Call;
    UDynamicMesh::ProcessMesh
              (this_00,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_3a0
              );
    if (local_2c8.TriangleRefCounts.UsedCount == 0) {
      pFVar8 = FText::AsLocalizable_Advanced_LocText
                         (&local_358,L"UGeometryScriptLibrary_MeshContainmentFunctions",
                          L"ComputeMeshSweptHull_Failed",
                          L"ComputeMeshSweptHull: Hull Computation Failed");
      UE::Geometry::AppendError(pUVar5,OperationFailed,pFVar8);
      if (local_358.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_358.TextData.Reference + 0x10))();
      }
      UDynamicMesh::ResetToCube(this);
    }
    else {
      UDynamicMesh::SetMesh(this,&local_2c8);
    }
    UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_2c8);
  }
  *(UDynamicMesh **)param_3 = this_00;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (*(UObject **)puVar11 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(*(UObject **)puVar11);
  }
  return;
}

