// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 15

// StaticClass @ 14ce189b0

UClass * __cdecl UGeometryScriptLibrary_MeshSubdivideFunctions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSubdivideFunctions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_MeshSubdivideFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSubdivideFunctions.
                InnerSingleton,StaticRegisterNativesUGeometryScriptLibrary_MeshSubdivideFunctions,
               0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryScriptLibrary_MeshSubdivideFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshSubdivideFunctions>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSubdivideFunctions.InnerSingleton;
}

// UGeometryScriptLibrary_MeshSubdivideFunctions @ 14ce26d00

UGeometryScriptLibrary_MeshSubdivideFunctions * __thiscall
UGeometryScriptLibrary_MeshSubdivideFunctions::UGeometryScriptLibrary_MeshSubdivideFunctions
          (UGeometryScriptLibrary_MeshSubdivideFunctions *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UGeometryScriptLibrary_MeshSubdivideFunctions__6B_;
  return this;
}

// UGeometryScriptLibrary_MeshSubdivideFunctions @ 14ce26d30

UGeometryScriptLibrary_MeshSubdivideFunctions * __thiscall
UGeometryScriptLibrary_MeshSubdivideFunctions::UGeometryScriptLibrary_MeshSubdivideFunctions
          (UGeometryScriptLibrary_MeshSubdivideFunctions *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UGeometryScriptLibrary_MeshSubdivideFunctions__6B_;
  return this;
}

// ~UGeometryScriptLibrary_MeshSubdivideFunctions @ 14ce27490

void __thiscall
UGeometryScriptLibrary_MeshSubdivideFunctions::~UGeometryScriptLibrary_MeshSubdivideFunctions
          (UGeometryScriptLibrary_MeshSubdivideFunctions *this)

{
  *(undefined ***)this = &___7UGeometryScriptLibrary_MeshSubdivideFunctions__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// operator() @ 14ce2f000

void __thiscall
`UGeometryScriptLibrary_MeshSubdivideFunctions::ApplyPNTessellation'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  bool bVar1;
  FText *pFVar2;
  EGeometryScriptErrorType EVar3;
  FText local_38;
  FPNTriangles local_28;
  
  local_28._padding_ = (longlong)&___7FPNTriangles_Geometry_UE__6B_;
  local_28.Progress = (FProgressCancel *)0x0;
  local_28.TessellationLevel = **(int **)this;
  local_28.bRecalculateNormals = (bool)**(undefined1 **)((longlong)this + 8);
  local_28.Mesh = param_1;
  if ((local_28.TessellationLevel < 0) || (param_1 == (FDynamicMesh3 *)0x0)) {
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       (&local_38,L"UGeometryScriptLibrary_MeshSubdivideFunctions",
                        L"ApplyPNTessellation_Error",L"ApplyPNTessellation: The inputs are invalid")
    ;
    EVar3 = InvalidInputs;
  }
  else {
    bVar1 = UE::Geometry::FPNTriangles::Compute(&local_28);
    if (bVar1) {
      return;
    }
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       (&local_38,L"UGeometryScriptLibrary_MeshSubdivideFunctions",
                        L"ApplyPNTessellation_Failed",L"ApplyPNTessellation: Tessellation failed");
    EVar3 = OperationFailed;
  }
  UE::Geometry::AppendError
            ((UGeometryScriptDebug *)**(undefined8 **)((longlong)this + 0x10),EVar3,pFVar2);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  return;
}

// operator() @ 14ce2f0d0

void __thiscall
`UGeometryScriptLibrary_MeshSubdivideFunctions::ApplySelectiveTessellation'::__l2::<lambda_1>::
operator()(void *this,FDynamicMesh3 *param_1)

{
  undefined8 *puVar1;
  bool bVar2;
  int iVar3;
  TUniquePtr<UE::Geometry::FTessellationPattern,TDefaultDelete<UE::Geometry::FTessellationPattern>_>
  TVar4;
  FText *pFVar5;
  FTessellationPattern *pFVar6;
  undefined4 local_res8;
  undefined4 uStackX_c;
  undefined8 *local_res10;
  TArray<int,TSizedDefaultAllocator<32>_> local_2d8;
  FText local_2c8;
  FSelectiveTessellate local_2b8;
  FTessellationPattern local_268;
  FDynamicMesh3 local_258;
  
  pFVar6 = (FTessellationPattern *)0x0;
  local_res8 = 0;
  UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_258);
  local_2b8.ResultMesh = &local_258;
  local_2b8._padding_ = (longlong)&___7FSelectiveTessellate_Geometry_UE__6B_;
  local_2b8.Progress = (FProgressCancel *)0x0;
  local_2b8.bUseParallel = true;
  local_2b8.Pattern = (FTessellationPattern *)0x0;
  local_2b8.TessInfo.SelectedVertices = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  local_2b8.TessInfo.TriangleIDToNewTriangleIDs =
       (TMap<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
        *)0x0;
  local_2b8.bInPlace = false;
  local_2d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2d8.ArrayNum = 0;
  local_2d8.ArrayMax = 0;
  local_2b8.Mesh = param_1;
  FGeometryScriptMeshSelection::ConvertToMeshIndexArray
            (*(FGeometryScriptMeshSelection **)this,param_1,&local_2d8,Triangle);
  if (((local_2d8.ArrayNum != 0) || (*(char *)(*(longlong *)((longlong)this + 8) + 1) == '\0')) &&
     (**(char **)((longlong)this + 0x10) == '\0')) {
    bVar2 = local_2d8.ArrayNum < 1;
    if (bVar2) {
      TVar4 = UE::Geometry::FSelectiveTessellate::CreateConcentricRingsTessellationPattern
                        ((FDynamicMesh3 *)&local_res8,(int)param_1);
    }
    else {
      TVar4 = UE::Geometry::FSelectiveTessellate::CreateConcentricRingsTessellationPattern
                        ((FDynamicMesh3 *)&local_res10,(int)param_1,
                         (TArray<int,TSizedDefaultAllocator<32>_> *)
                         (ulonglong)**(uint **)((longlong)this + 0x18));
    }
    if (&local_268 != TVar4.Ptr) {
      pFVar6 = (FTessellationPattern *)(TVar4.Ptr)->_padding_;
      (TVar4.Ptr)->_padding_ = 0;
    }
    if ((bVar2) &&
       (puVar1 = (undefined8 *)CONCAT44(uStackX_c,local_res8), puVar1 != (undefined8 *)0x0)) {
      (**(code **)*puVar1)(puVar1,1);
    }
    if ((!bVar2) && (local_res10 != (undefined8 *)0x0)) {
      (**(code **)*local_res10)(local_res10,1);
    }
    local_2b8.bUseParallel = (bool)**(undefined1 **)((longlong)this + 8);
    local_2b8.Pattern = pFVar6;
    if ((((local_2b8.bInPlace == false) &&
         (((local_2b8.Mesh == (FDynamicMesh3 *)0x0 || (local_2b8.ResultMesh == (FDynamicMesh3 *)0x0)
           ) || (pFVar6 == (FTessellationPattern *)0x0)))) ||
        ((local_2b8.bInPlace == true &&
         ((local_2b8.ResultMesh == (FDynamicMesh3 *)0x0 || (pFVar6 == (FTessellationPattern *)0x0)))
         ))) || ((pFVar6 == (FTessellationPattern *)0x0 ||
                 (iVar3 = (**(code **)(pFVar6->_padding_ + 8))(pFVar6), iVar3 != 0)))) {
      pFVar5 = FText::AsLocalizable_Advanced_LocText
                         (&local_2c8,L"UGeometryScriptLibrary_MeshSubdivideFunctions",
                          L"ApplyAdapativeTessellation_Error",
                          L"ApplyAdapativeTessellation: The inputs are invalid");
      UE::Geometry::AppendError
                ((UGeometryScriptDebug *)**(undefined8 **)((longlong)this + 0x20),InvalidInputs,
                 pFVar5);
      if (local_2c8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_2c8.TextData.Reference + 0x10))();
      }
      if (pFVar6 == (FTessellationPattern *)0x0) goto LAB_14ce2f32b;
    }
    else {
      bVar2 = UE::Geometry::FSelectiveTessellate::Compute(&local_2b8);
      if (bVar2) {
        UE::Geometry::FDynamicMesh3::operator=(param_1,&local_258);
      }
      else {
        pFVar5 = FText::AsLocalizable_Advanced_LocText
                           (&local_2c8,L"UGeometryScriptLibrary_MeshSubdivideFunctions",
                            L"ApplyAdapativeTessellate_Failed",
                            L"ApplyAdapativeTessellate: Tessellation failed");
        UE::Geometry::AppendError
                  ((UGeometryScriptDebug *)**(undefined8 **)((longlong)this + 0x20),OperationFailed,
                   pFVar5);
        if (local_2c8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_2c8.TextData.Reference + 0x10))();
        }
      }
    }
    (**(code **)pFVar6->_padding_)(pFVar6,1);
  }
LAB_14ce2f32b:
  if (local_2d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2d8.AllocatorInstance.Data);
  }
  local_2b8._padding_ = (longlong)&___7FSelectiveTessellate_Geometry_UE__6B_;
  UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_258);
  return;
}

// operator() @ 14ce31240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UGeometryScriptLibrary_MeshSubdivideFunctions::ApplyUniformTessellation'::__l2::<lambda_1>::
operator()(void *this,FDynamicMesh3 *param_1)

{
  ulonglong uVar1;
  bool bVar2;
  FText *pFVar3;
  EGeometryScriptErrorType EVar4;
  undefined1 auStackY_138 [32];
  FText local_108;
  undefined1 local_f8 [48];
  ForAnyElementType local_c8;
  undefined8 local_c0;
  TBitArray<FDefaultBitArrayAllocator> local_b8;
  undefined4 local_98;
  undefined4 local_94;
  void *local_88;
  undefined4 local_80;
  ForAnyElementType local_78;
  undefined8 local_70;
  TBitArray<FDefaultBitArrayAllocator> local_68;
  undefined4 local_48;
  undefined4 local_44;
  void *local_38;
  undefined4 local_30;
  FDynamicMesh3 *local_28;
  bool local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_138;
  local_f8._0_8_ = &___7FUniformTessellate_Geometry_UE__6B_;
  local_f8._8_8_ = (FProgressCancel *)0x0;
  local_f8[0x14] = true;
  local_f8[0x15] = false;
  local_f8._32_8_ = (FScriptContainerElement *)0x0;
  local_f8._40_4_ = 0;
  local_f8._44_4_ = 0;
  local_c8.Data = (FScriptContainerElement *)0x0;
  local_c0 = 0;
  local_b8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_b8.NumBits = 0;
  local_b8.MaxBits = 0x80;
  local_98 = 0xffffffff;
  local_94 = 0;
  local_88 = (void *)0x0;
  local_80 = 0;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70 = 0;
  local_68.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_68.NumBits = 0;
  local_68.MaxBits = 0x80;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = (void *)0x0;
  local_30 = 0;
  local_28 = (FDynamicMesh3 *)0x0;
  local_20 = true;
  local_f8._16_4_ = **(int **)this;
  local_f8._24_8_ = param_1;
  if (((int)local_f8._16_4_ < 0) || (param_1 == (FDynamicMesh3 *)0x0)) {
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       (&local_108,L"UGeometryScriptLibrary_MeshSubdivideFunctions",
                        L"ApplyUniformTessellation_Error",
                        L"ApplyUniformTessellation: The inputs are invalid");
    EVar4 = InvalidInputs;
  }
  else {
    bVar2 = UE::Geometry::FUniformTessellate::Compute((FUniformTessellate *)local_f8);
    if (bVar2) goto LAB_14ce31371;
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       (&local_108,L"UGeometryScriptLibrary_MeshSubdivideFunctions",
                        L"ApplyUniformTessellation_Failed",
                        L"ApplyUniformTessellation: Tessellation failed");
    EVar4 = OperationFailed;
  }
  UE::Geometry::AppendError
            ((UGeometryScriptDebug *)**(undefined8 **)((longlong)this + 8),EVar4,pFVar3);
  if (local_108.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_108.TextData.Reference + 0x10))();
  }
LAB_14ce31371:
  local_f8._0_8_ = &___7FUniformTessellate_Geometry_UE__6B_;
  local_30 = 0;
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  uVar1 = local_70 >> 0x20;
  local_70 = local_70 & 0xffffffff00000000;
  if ((int)uVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,&local_78,0,(int *)((longlong)&local_70 + 4));
  }
  local_48 = 0xffffffff;
  local_44 = 0;
  local_68.NumBits = 0;
  if (0x80 < (uint)local_68.MaxBits) {
    local_68.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_68,0);
  }
  if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_68.AllocatorInstance.SecondaryData);
  }
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  local_80 = 0;
  if (local_88 != (void *)0x0) {
    FMemory::Free(local_88);
  }
  uVar1 = local_c0 >> 0x20;
  local_c0 = local_c0 & 0xffffffff00000000;
  if ((int)uVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,&local_c8,0,(int *)((longlong)&local_c0 + 4));
  }
  local_98 = 0xffffffff;
  local_94 = 0;
  local_b8.NumBits = 0;
  if (0x80 < (uint)local_b8.MaxBits) {
    local_b8.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_b8,0);
  }
  if (local_b8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_b8.AllocatorInstance.SecondaryData);
  }
  if (local_c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data);
  }
  if ((FScriptContainerElement *)local_f8._32_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_f8._32_8_);
  }
  return;
}

// ApplyPNTessellation @ 14ce5b660

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshSubdivideFunctions::ApplyPNTessellation
          (UDynamicMesh *param_1,FGeometryScriptPNTessellateOptions param_2,int param_3,
          UGeometryScriptDebug *param_4)

{
  FText *pFVar1;
  undefined1 local_res10 [8];
  int local_res18 [2];
  UGeometryScriptDebug *local_res20;
  undefined1 local_38 [16];
  int *local_28;
  undefined1 *local_20;
  UGeometryScriptDebug **local_18;
  
  local_res10[0] = param_2.bRecomputeNormals;
  local_res18[0] = param_3;
  local_res20 = param_4;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_38,L"UGeometryScriptLibrary_MeshSubdivideFunctions",
                        L"ApplyPNTessellation_InvalidInput",
                        L"ApplyPNTessellation: TargetMesh is Null");
    UE::Geometry::AppendError(local_res20,InvalidInputs,pFVar1);
    if ((ITextData *)local_38._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_38._0_8_ + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  if (0 < param_3) {
    local_28 = local_res18;
    local_20 = local_res10;
    local_18 = &local_res20;
    local_38._8_8_ = &local_28;
    local_38._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_MeshSubdivideFunctions::ApplyPNTessellation'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
         ::Call;
    UDynamicMesh::EditMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_38,
               GeneralEdit,Unknown,false);
  }
  return param_1;
}

// ApplySelectiveTessellation @ 14ce5bf10

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshSubdivideFunctions::ApplySelectiveTessellation
          (UDynamicMesh *param_1,FGeometryScriptMeshSelection *param_2,
          FGeometryScriptSelectiveTessellateOptions param_3,int param_4,
          ESelectiveTessellatePatternType param_5,UGeometryScriptDebug *param_6)

{
  bool bVar1;
  FText *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  FGeometryScriptSelectiveTessellateOptions local_res18 [4];
  int local_res20 [2];
  undefined1 local_48 [16];
  FGeometryScriptMeshSelection *local_38;
  FGeometryScriptSelectiveTessellateOptions *local_30;
  ESelectiveTessellatePatternType *local_28;
  int *local_20;
  UGeometryScriptDebug **local_18;
  
  local_res18[0] = param_3;
  local_res20[0] = param_4;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_48,L"UGeometryScriptLibrary_MeshSubdivideFunctions",
                        L"ApplyAdapativeTessellation_InvalidInput",
                        L"ApplyAdapativeTessellation: TargetMesh is Null");
    UE::Geometry::AppendError(param_6,InvalidInputs,pFVar2);
    if ((ITextData *)local_48._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_48._0_8_ + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->GeoSelection).SharedReferenceCount.ReferenceController);
    return (UDynamicMesh *)0x0;
  }
  if (param_4 < 1) {
    pTVar3 = (param_2->GeoSelection).SharedReferenceCount.ReferenceController;
  }
  else {
    if (param_5 == ConcentricRings) {
      bVar1 = FGeometryScriptMeshSelection::IsEmpty(param_2);
      if ((!bVar1) || (local_res18[0].EmptyBehavior == FullMeshSelection)) {
        local_30 = local_res18;
        local_28 = &param_5;
        local_20 = local_res20;
        local_18 = &param_6;
        local_48._8_8_ = &local_38;
        local_48._0_8_ =
             UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshSubdivideFunctions::ApplySelectiveTessellation'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
             ::Call;
        local_38 = param_2;
        UDynamicMesh::EditMesh
                  (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_48,
                   GeneralEdit,Unknown,false);
      }
    }
    else {
      pFVar2 = FText::AsLocalizable_Advanced_LocText
                         ((FText *)local_48,L"UGeometryScriptLibrary_MeshSubdivideFunctions",
                          L"ApplyAdapativeTessellation_InvalidPatternTypeNew",
                          L"ApplyAdapativeTessellation: Only ConcentricRings pattern is currently supported"
                         );
      UE::Geometry::AppendError(param_6,InvalidInputs,pFVar2);
      if ((ITextData *)local_48._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_48._0_8_ + 0x10))();
      }
    }
    pTVar3 = (param_2->GeoSelection).SharedReferenceCount.ReferenceController;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return param_1;
}

// ApplyUniformTessellation @ 14ce5cb90

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshSubdivideFunctions::ApplyUniformTessellation
          (UDynamicMesh *param_1,int param_2,UGeometryScriptDebug *param_3)

{
  FText *pFVar1;
  int local_res10 [2];
  UGeometryScriptDebug *local_res18 [2];
  int *local_28;
  UGeometryScriptDebug **local_20;
  undefined1 local_18 [16];
  
  local_res10[0] = param_2;
  local_res18[0] = param_3;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_18,L"UGeometryScriptLibrary_MeshSubdivideFunctions",
                        L"ApplyUniformTessellation_InvalidInput",
                        L"ApplyUniformTessellation: TargetMesh is Null");
    UE::Geometry::AppendError(local_res18[0],InvalidInputs,pFVar1);
    if ((ITextData *)local_18._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_18._0_8_ + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  if (0 < param_2) {
    local_28 = local_res10;
    local_20 = local_res18;
    local_18._8_8_ = &local_28;
    local_18._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_MeshSubdivideFunctions::ApplyUniformTessellation'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
         ::Call;
    UDynamicMesh::EditMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_18,
               GeneralEdit,Unknown,false);
  }
  return param_1;
}

// GetPrivateStaticClass @ 14ce6d6b0

UClass * __cdecl UGeometryScriptLibrary_MeshSubdivideFunctions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSubdivideFunctions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_MeshSubdivideFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSubdivideFunctions.
                InnerSingleton,StaticRegisterNativesUGeometryScriptLibrary_MeshSubdivideFunctions,
               0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryScriptLibrary_MeshSubdivideFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshSubdivideFunctions>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSubdivideFunctions.InnerSingleton;
}

// StaticRegisterNativesUGeometryScriptLibrary_MeshSubdivideFunctions @ 14ce75200

void __cdecl
UGeometryScriptLibrary_MeshSubdivideFunctions::
StaticRegisterNativesUGeometryScriptLibrary_MeshSubdivideFunctions(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UGeometryScriptLibrary_MeshSubdivideFunctions_Statics::Funcs
  ;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execApplyPNTessellation @ 14ce87290

void __cdecl
UGeometryScriptLibrary_MeshSubdivideFunctions::execApplyPNTessellation
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDynamicMesh *pUVar2;
  FText *pFVar3;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  int local_res20 [2];
  int local_68 [2];
  UGeometryScriptDebug *local_60;
  UDynamicMesh *local_58;
  UGeometryScriptDebug *local_50;
  undefined1 local_48 [16];
  int *local_38;
  undefined1 *local_30;
  UGeometryScriptDebug **local_28;
  
  local_58 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_res10[0] = 1;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_60 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_60,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_60);
  }
  pUVar2 = local_58;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_50 = local_60;
  local_res18[0] = local_res10[0];
  local_68[0] = local_res20[0];
  if (local_58 == (UDynamicMesh *)0x0) {
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_48,L"UGeometryScriptLibrary_MeshSubdivideFunctions",
                        L"ApplyPNTessellation_InvalidInput",
                        L"ApplyPNTessellation: TargetMesh is Null");
    UE::Geometry::AppendError(local_50,InvalidInputs,pFVar3);
    if ((ITextData *)local_48._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_48._0_8_ + 0x10))();
    }
    *(undefined8 *)param_3 = 0;
  }
  else {
    if (0 < local_res20[0]) {
      local_38 = local_68;
      local_30 = local_res18;
      local_28 = &local_50;
      local_48._8_8_ = &local_38;
      local_48._0_8_ =
           UE::Core::Private::Function::
           TFunctionRefCaller<`UGeometryScriptLibrary_MeshSubdivideFunctions::ApplyPNTessellation'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
           ::Call;
      UDynamicMesh::EditMesh
                (local_58,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_48,
                 GeneralEdit,Unknown,false);
    }
    *(UDynamicMesh **)param_3 = pUVar2;
  }
  return;
}

// execApplySelectiveTessellation @ 14ce87470

void __cdecl
UGeometryScriptLibrary_MeshSubdivideFunctions::execApplySelectiveTessellation
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FText *pFVar3;
  UDynamicMesh *this;
  char local_res10 [8];
  char local_res18 [8];
  undefined2 local_res20 [4];
  undefined2 local_a8;
  int local_a0 [2];
  int local_98 [2];
  UGeometryScriptDebug *local_90;
  UDynamicMesh *local_88;
  UGeometryScriptDebug *local_80;
  undefined1 local_78 [16];
  FGeometryScriptMeshSelection local_68;
  FGeometryScriptMeshSelection local_58;
  FGeometryScriptMeshSelection *local_48;
  undefined2 *local_40;
  char *local_38;
  int *local_30;
  UGeometryScriptDebug **local_28;
  
  local_88 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  FGeometryScriptMeshSelection::FGeometryScriptMeshSelection(&local_68);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_res20[0] = 1;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_a0[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_a0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_a0);
  }
  local_res10[0] = '\0';
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_90 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_90,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_90);
  }
  this = local_88;
  local_58.GeoSelection.Object = local_68.GeoSelection.Object;
  local_58.GeoSelection.SharedReferenceCount.ReferenceController =
       local_68.GeoSelection.SharedReferenceCount.ReferenceController;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_68.GeoSelection.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_68.GeoSelection.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_68.GeoSelection.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  local_80 = local_90;
  local_res18[0] = local_res10[0];
  local_98[0] = local_a0[0];
  local_a8 = local_res20[0];
  if (local_88 == (UDynamicMesh *)0x0) {
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_78,L"UGeometryScriptLibrary_MeshSubdivideFunctions",
                        L"ApplyAdapativeTessellation_InvalidInput",
                        L"ApplyAdapativeTessellation: TargetMesh is Null");
    UE::Geometry::AppendError(local_80,InvalidInputs,pFVar3);
    this = (UDynamicMesh *)0x0;
    if ((ITextData *)local_78._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_78._0_8_ + 0x10))();
    }
  }
  else if (0 < local_a0[0]) {
    if (local_res10[0] == '\0') {
      bVar2 = FGeometryScriptMeshSelection::IsEmpty(&local_58);
      if ((!bVar2) || (local_a8._1_1_ == '\0')) {
        local_48 = &local_58;
        local_40 = &local_a8;
        local_38 = local_res18;
        local_30 = local_98;
        local_28 = &local_80;
        local_78._8_8_ = &local_48;
        local_78._0_8_ =
             UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshSubdivideFunctions::ApplySelectiveTessellation'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
             ::Call;
        UDynamicMesh::EditMesh
                  (this,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_78,
                   GeneralEdit,Unknown,false);
      }
    }
    else {
      pFVar3 = FText::AsLocalizable_Advanced_LocText
                         ((FText *)local_78,L"UGeometryScriptLibrary_MeshSubdivideFunctions",
                          L"ApplyAdapativeTessellation_InvalidPatternTypeNew",
                          L"ApplyAdapativeTessellation: Only ConcentricRings pattern is currently supported"
                         );
      UE::Geometry::AppendError(local_80,InvalidInputs,pFVar3);
      if ((ITextData *)local_78._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_78._0_8_ + 0x10))();
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.GeoSelection.SharedReferenceCount.ReferenceController);
  *(UDynamicMesh **)param_3 = this;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.GeoSelection.SharedReferenceCount.ReferenceController);
  return;
}

// execApplyUniformTessellation @ 14ce88a40

void __cdecl
UGeometryScriptLibrary_MeshSubdivideFunctions::execApplyUniformTessellation
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDynamicMesh *pUVar2;
  FText *pFVar3;
  int local_res10 [2];
  int local_res18 [2];
  UGeometryScriptDebug *local_res20;
  UDynamicMesh *local_48;
  UGeometryScriptDebug *local_40;
  int *local_38;
  UGeometryScriptDebug **local_30;
  undefined1 local_28 [16];
  
  local_48 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  pUVar2 = local_48;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_40 = local_res20;
  local_res18[0] = local_res10[0];
  if (local_48 == (UDynamicMesh *)0x0) {
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_28,L"UGeometryScriptLibrary_MeshSubdivideFunctions",
                        L"ApplyUniformTessellation_InvalidInput",
                        L"ApplyUniformTessellation: TargetMesh is Null");
    UE::Geometry::AppendError(local_40,InvalidInputs,pFVar3);
    if ((ITextData *)local_28._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_28._0_8_ + 0x10))();
    }
    *(undefined8 *)param_3 = 0;
    return;
  }
  if (0 < local_res10[0]) {
    local_38 = local_res18;
    local_30 = &local_40;
    local_28._8_8_ = &local_38;
    local_28._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_MeshSubdivideFunctions::ApplyUniformTessellation'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
         ::Call;
    UDynamicMesh::EditMesh
              (local_48,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_28,
               GeneralEdit,Unknown,false);
  }
  *(UDynamicMesh **)param_3 = pUVar2;
  return;
}

