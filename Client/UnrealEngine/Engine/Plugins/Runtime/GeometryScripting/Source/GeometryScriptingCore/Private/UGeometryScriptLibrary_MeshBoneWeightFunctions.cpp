// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 62

// StaticClass @ 14cd8e120

UClass * __cdecl UGeometryScriptLibrary_MeshBoneWeightFunctions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshBoneWeightFunctions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_MeshBoneWeightFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshBoneWeightFunctions.
                InnerSingleton,StaticRegisterNativesUGeometryScriptLibrary_MeshBoneWeightFunctions,
               0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryScriptLibrary_MeshBoneWeightFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshBoneWeightFunctions>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshBoneWeightFunctions.InnerSingleton;
}

// UGeometryScriptLibrary_MeshBoneWeightFunctions @ 14cda5ee0

UGeometryScriptLibrary_MeshBoneWeightFunctions * __thiscall
UGeometryScriptLibrary_MeshBoneWeightFunctions::UGeometryScriptLibrary_MeshBoneWeightFunctions
          (UGeometryScriptLibrary_MeshBoneWeightFunctions *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UGeometryScriptLibrary_MeshBoneWeightFunctions__6B_;
  return this;
}

// UGeometryScriptLibrary_MeshBoneWeightFunctions @ 14cda5f10

UGeometryScriptLibrary_MeshBoneWeightFunctions * __thiscall
UGeometryScriptLibrary_MeshBoneWeightFunctions::UGeometryScriptLibrary_MeshBoneWeightFunctions
          (UGeometryScriptLibrary_MeshBoneWeightFunctions *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UGeometryScriptLibrary_MeshBoneWeightFunctions__6B_;
  return this;
}

// ~UGeometryScriptLibrary_MeshBoneWeightFunctions @ 14cda6a80

void __thiscall
UGeometryScriptLibrary_MeshBoneWeightFunctions::~UGeometryScriptLibrary_MeshBoneWeightFunctions
          (UGeometryScriptLibrary_MeshBoneWeightFunctions *this)

{
  *(undefined ***)this = &___7UGeometryScriptLibrary_MeshBoneWeightFunctions__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// operator() @ 14cdb0850

void __thiscall
`UGeometryScriptLibrary_MeshBoneWeightFunctions::ComputeSmoothBoneWeights'::__l2::<lambda_1>::
operator()(void *this,FDynamicMesh3 *param_1)

{
  char *pcVar1;
  code *pcVar2;
  FSharedReferencer<1> FVar3;
  longlong lVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  FDynamicMesh3 *pFVar7;
  FSharedReferencer<1> local_f0;
  FSkinBindingOp local_e8;
  
  UE::Geometry::FDynamicMeshOperator::FDynamicMeshOperator((FDynamicMeshOperator *)&local_e8);
  local_e8.ProfileName = FSkeletalMeshAttributesShared::DefaultSkinWeightProfileName;
  local_e8._padding_ = (longlong)&___7FSkinBindingOp_Geometry_UE__6B_;
  local_e8.OriginalMesh.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_e8.TransformHierarchy.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.OriginalMesh.Object = (FDynamicMesh3 *)0x0;
  local_e8.TransformHierarchy.ArrayNum = 0;
  local_e8.TransformHierarchy.ArrayMax = 0;
  local_e8.BindType = DirectDistance;
  local_e8.Stiffness = 0.2;
  local_e8.MaxInfluences = 5;
  local_e8.VoxelResolution = 0x100;
  pTVar6 = ::operator_new(0x240);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    local_f0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar7 = (FDynamicMesh3 *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFDynamicMesh3_Geometry_UE___00_SharedPointerInternals__6B_
    ;
    UE::Geometry::FDynamicMesh3::FDynamicMesh3((FDynamicMesh3 *)(pTVar6 + 1),param_1);
    pFVar7 = (FDynamicMesh3 *)(pTVar6 + 1);
    if (pFVar7 == (FDynamicMesh3 *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    local_f0.ReferenceController = pTVar6;
  }
  FVar3.ReferenceController = local_f0.ReferenceController;
  local_e8.OriginalMesh.Object = pFVar7;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            (&local_e8.OriginalMesh.SharedReferenceCount,&local_f0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar3.ReferenceController);
  UE::Geometry::FSkinBindingOp::SetTransformHierarchyFromReferenceSkeleton
            (&local_e8,(FReferenceSkeleton *)(**(longlong **)this + 0x48));
  pcVar1 = *(char **)((longlong)this + 0x10);
  local_e8.ProfileName = **(FName **)((longlong)this + 8);
  if (*pcVar1 == '\0') {
    local_e8.BindType = DirectDistance;
  }
  else if (*pcVar1 == '\x01') {
    local_e8.BindType = GeodesicVoxel;
  }
  local_e8.Stiffness = *(float *)(pcVar1 + 4);
  local_e8.MaxInfluences = *(int *)(pcVar1 + 8);
  local_e8.VoxelResolution = *(int *)(pcVar1 + 0xc);
  UE::Geometry::FSkinBindingOp::CalculateResult(&local_e8,(FProgressCancel *)0x0);
  lVar4 = local_e8._padding_;
  local_e8._padding_ = 0;
  UE::Geometry::FDynamicMesh3::operator=(param_1,(FDynamicMesh3 *)lVar4);
  local_e8._padding_ = (longlong)&___7FSkinBindingOp_Geometry_UE__6B_;
  if (local_e8.TransformHierarchy.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.TransformHierarchy.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e8.OriginalMesh.SharedReferenceCount.ReferenceController);
  local_e8._padding_ = (longlong)&___7FDynamicMeshOperator_Geometry_UE__6B_;
  DestructItems<UE::Geometry::FGeometryWarning,int>
            ((FGeometryWarning *)local_e8._padding_,(int)local_e8._padding_);
  if ((FGeometryWarning *)local_e8._padding_ != (FGeometryWarning *)0x0) {
    FMemory::Free((void *)local_e8._padding_);
  }
  DestructItems<UE::Geometry::FGeometryError,int>
            ((FGeometryError *)local_e8._padding_,(int)local_e8._padding_);
  if ((FGeometryError *)local_e8._padding_ != (FGeometryError *)0x0) {
    FMemory::Free((void *)local_e8._padding_);
  }
  if ((undefined8 *)local_e8._padding_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_e8._padding_)(local_e8._padding_,1);
  }
  return;
}

// operator() @ 14cdb0f40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`UGeometryScriptLibrary_MeshBoneWeightFunctions::CopyBonesFromSkeleton'::__l2::<lambda_1>::
operator()(void *this,FDynamicMesh3 *param_1)

{
  FScriptContainerElement *pFVar1;
  FGeometryScriptCopyBonesFromMeshOptions FVar2;
  undefined4 uVar3;
  UGeometryScriptDebug *pUVar4;
  FName FVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  FDynamicMesh3 *pFVar20;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_> *pTVar21;
  longlong *plVar22;
  bool bVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  FDynamicMeshAttributeSet *pFVar27;
  TTuple<FName,int> *pTVar28;
  byte bVar29;
  longlong lVar30;
  FDynamicMeshAttributeSet *this_00;
  undefined1 *puVar31;
  int iVar32;
  FScriptContainerElement *pFVar33;
  ulonglong uVar34;
  uint uVar35;
  ulonglong uVar36;
  FScriptContainerElement *pFVar37;
  uint *puVar38;
  uint uVar39;
  longlong lVar41;
  longlong lVar42;
  undefined1 auStackY_2e8 [32];
  undefined1 local_298;
  undefined1 local_297 [3];
  uint local_294;
  ForAnyElementType local_290;
  undefined8 local_288;
  ForAnyElementType local_280;
  int local_278;
  int iStack_274;
  FDynamicMesh3 *local_270;
  undefined4 local_268 [2];
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *local_260;
  FName local_258;
  undefined8 local_250;
  undefined1 local_248 [8];
  int local_240;
  int local_23c;
  longlong local_238;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_> *local_230;
  longlong *local_228;
  uint uStack_220;
  uint uStack_21c;
  TBitArray<FDefaultBitArrayAllocator> *local_218;
  undefined4 uStack_210;
  uint uStack_20c;
  uint local_208;
  undefined4 uStack_204;
  int iStack_200;
  undefined4 uStack_1fc;
  longlong *local_1f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1f0;
  undefined8 uStack_1d0;
  FScriptContainerElement *local_1c8;
  int iStack_1c0;
  undefined4 uStack_1bc;
  FName *local_1b8;
  int iStack_1b0;
  undefined4 uStack_1ac;
  FName *local_1a8;
  uint *local_1a0;
  undefined8 *local_198;
  undefined4 *local_190;
  TArrayView<int_const_,int> local_188;
  TArrayView<FName_const_,int> local_178 [2];
  undefined4 local_14c;
  undefined1 local_148 [32];
  uint *local_128;
  uint local_120;
  undefined4 local_11c;
  undefined4 local_118;
  int local_114;
  undefined1 local_110 [8];
  undefined1 *local_108;
  int local_100;
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator> local_f8;
  ulonglong local_a8;
  FDynamicMeshAttributeSet *pFVar40;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  local_270 = param_1;
  if ((param_1->AttributeSet).Ptr == (FDynamicMeshAttributeSet *)0x0) {
    UE::Geometry::FDynamicMesh3::EnableAttributes(param_1);
  }
  local_148._0_8_ = 0;
  local_148._8_8_ = 0;
  local_128 = (uint *)0x0;
  local_288._4_4_ = 0;
  local_120 = 0;
  local_11c = 0x80;
  local_118 = 0xffffffff;
  local_114 = 0;
  local_108 = (undefined1 *)0x0;
  local_100 = 0;
  local_238 = **(longlong **)this;
  uVar25 = *(uint *)(local_238 + 0x50);
  lVar41 = (longlong)(int)uVar25;
  local_280.Data = (FScriptContainerElement *)0x0;
  local_278 = 0;
  iStack_274 = 0;
  local_290.Data = (FScriptContainerElement *)0x0;
  local_288 = 0;
  if ((int)uVar25 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar25);
  }
  if (0 < (int)uVar25) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar25,&local_280,0,&iStack_274);
  }
  if (local_288._4_4_ < (int)uVar25) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar25,&local_290,(int)local_288,(int *)((longlong)&local_288 + 4));
  }
  lVar42 = **(longlong **)this;
  pFVar33 = *(FScriptContainerElement **)(lVar42 + 0x48);
  iVar32 = *(int *)(lVar42 + 0x50);
  pFVar37 = pFVar33 + 8;
  pFVar1 = pFVar33 + (longlong)iVar32 * 0xc;
  while( true ) {
    if (*(int *)(lVar42 + 0x50) != iVar32) {
      local_298 = 0;
      `TCheckedPointerIterator<FMeshBoneInfo_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_298);
    }
    pFVar20 = local_270;
    if (pFVar33 == pFVar1) break;
    if (((local_280.Data <= pFVar33) && (pFVar33 < local_280.Data + (longlong)iStack_274 * 8)) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar23)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (local_278 == iStack_274) {
      local_278 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,&local_280,&iStack_274);
    }
    lVar30 = (longlong)local_278;
    local_278 = local_278 + 1;
    *(undefined8 *)(local_280.Data + lVar30 * 8) = *(undefined8 *)pFVar33;
    if (((local_290.Data <= pFVar37) && (pFVar37 < local_290.Data + (longlong)local_288._4_4_ * 4))
       && (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar23)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar24 = (int)local_288;
    if ((int)local_288 == local_288._4_4_) {
      iVar24 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&local_290,(int *)((longlong)&local_288 + 4));
    }
    pFVar33 = pFVar33 + 0xc;
    local_288 = CONCAT44(local_288._4_4_,iVar24 + 1);
    puVar19 = (undefined8 *)&pFVar37->field_0x0;
    pFVar37 = pFVar37 + 0xc;
    *(undefined4 *)(local_290.Data + (longlong)iVar24 * 4) = *(undefined4 *)puVar19;
  }
  iVar32 = (int)local_288;
  pUVar4 = (UGeometryScriptDebug *)**(undefined8 **)((longlong)this + 0x10);
  FVar2 = **(FGeometryScriptCopyBonesFromMeshOptions **)((longlong)this + 8);
  local_1c8 = local_290.Data;
  if (((int)local_288 < 0) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar23)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar24 = local_278;
  iStack_1c0 = iVar32;
  local_1b8 = (FName *)local_280.Data;
  if ((local_278 < 0) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar23)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_188._12_4_ = uStack_1bc;
  local_188.ArrayNum = iStack_1c0;
  iStack_1b0 = iVar24;
  local_178[0]._12_4_ = uStack_1ac;
  local_178[0].ArrayNum = iVar24;
  local_178[0].DataPtr = local_1b8;
  local_188.DataPtr = (int *)local_1c8;
  bVar23 = GetBoneCopyHierarchyAndReindexMeshIfNeeded
                     (local_178,&local_188,pFVar20,
                      (TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                       *)local_148,FVar2,pUVar4);
  uVar39 = 0;
  pFVar40 = (FDynamicMeshAttributeSet *)0x0;
  if (bVar23) {
    pFVar27 = (pFVar20->AttributeSet).Ptr;
    this_00 = pFVar40;
    if (pFVar27 != (FDynamicMeshAttributeSet *)0x0) {
      this_00 = pFVar27;
    }
    uVar35 = uVar25;
    if (local_148._8_4_ != local_114) {
      uVar35 = local_148._8_4_ - local_114;
    }
    UE::Geometry::FDynamicMeshAttributeSet::EnableBones(this_00,uVar35);
    pFVar27 = (pFVar20->AttributeSet).Ptr;
    if (pFVar27 == (FDynamicMeshAttributeSet *)0x0) {
      local_270 = _DAT_00000118;
      pFVar27 = pFVar40;
      local_260 = _DAT_00000110;
    }
    else {
      local_270 = (FDynamicMesh3 *)(pFVar27->BoneParentIndexAttrib).Ptr;
      local_260 = (pFVar27->BoneNameAttrib).Ptr;
    }
    local_230 = (pFVar27->BonePoseAttrib).Ptr;
    local_f8.Elements._0_8_ = 0;
    local_f8.Elements._8_8_ = 0;
    local_f8.Elements._32_8_ = 0;
    local_f8.Elements._40_4_ = 0;
    local_f8.Elements._44_4_ = 0x80;
    local_f8.Elements._48_4_ = 0xffffffff;
    local_f8.Elements._52_4_ = 0;
    local_f8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_f8.HashSize = 0;
    local_294 = 0;
    pFVar27 = pFVar40;
    if (0 < (int)uVar25) {
      do {
        uVar25 = 0;
        if ((int)uVar39 < local_278) {
          uVar25 = ~uVar39 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FVar5 = *(FName *)(local_280.Data + (longlong)pFVar27 * 8);
        local_258 = FVar5;
        if (local_148._8_4_ == local_114) {
LAB_14cdb149b:
          local_1a8 = &local_258;
          local_1a0 = &local_294;
          TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
          Emplace<TPairInitializer<FName_const_&,int_const_&>_>
                    (&local_f8,(TPairInitializer<FName_const_&,int_const_&> *)local_248,
                     (bool *)&local_1a8);
          FVar5 = local_258;
          lVar42 = (longlong)(int)local_294;
          uVar25 = 0;
          if ((int)local_294 < (local_260->AttribValues).ArrayNum) {
            uVar25 = ~local_294 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar23)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          lVar30 = local_238;
          *(FName *)((local_260->AttribValues).AllocatorInstance.Data + lVar42 * 8) = FVar5;
          uVar25 = 0;
          if ((int)uVar39 < *(int *)(local_238 + 0x60)) {
            uVar25 = ~uVar39 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar23)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pTVar21 = local_230;
          lVar42 = *(longlong *)(lVar30 + 0x58);
          lVar30 = (longlong)(int)local_294;
          puVar19 = (undefined8 *)((longlong)&pFVar40->_padding_ + lVar42);
          uVar7 = *puVar19;
          uVar8 = puVar19[1];
          puVar19 = (undefined8 *)((longlong)&pFVar40->_padding_ + lVar42);
          uVar9 = *puVar19;
          uVar10 = puVar19[1];
          puVar19 = (undefined8 *)
                    ((longlong)&(pFVar40->UVLayers).Array.AllocatorInstance.Data + lVar42);
          uVar11 = *puVar19;
          uVar12 = puVar19[1];
          puVar19 = (undefined8 *)
                    ((longlong)&(pFVar40->NormalLayers).Array.AllocatorInstance.Data + lVar42);
          uVar13 = *puVar19;
          uVar14 = puVar19[1];
          puVar19 = (undefined8 *)((longlong)&(pFVar40->ColorLayer).Ptr + lVar42);
          uVar15 = *puVar19;
          uVar16 = puVar19[1];
          puVar19 = (undefined8 *)
                    ((longlong)&(pFVar40->WeightLayers).Array.AllocatorInstance.Data + lVar42);
          uVar17 = *puVar19;
          uVar18 = puVar19[1];
          uVar25 = 0;
          if ((int)local_294 < (local_230->AttribValues).ArrayNum) {
            uVar25 = ~local_294 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar23)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar37 = (pTVar21->AttribValues).AllocatorInstance.Data;
          lVar30 = lVar30 * 0x60;
          *(undefined8 *)(pFVar37 + lVar30) = uVar7;
          *(undefined8 *)(pFVar37 + lVar30 + 8) = uVar8;
          *(undefined8 *)(pFVar37 + lVar30 + 0x10) = uVar9;
          *(undefined8 *)(pFVar37 + lVar30 + 0x10 + 8) = uVar10;
          *(undefined8 *)(pFVar37 + lVar30 + 0x20) = uVar11;
          *(undefined8 *)(pFVar37 + lVar30 + 0x20 + 8) = uVar12;
          *(undefined8 *)(pFVar37 + lVar30 + 0x30) = uVar13;
          *(undefined8 *)(pFVar37 + lVar30 + 0x30 + 8) = uVar14;
          *(undefined8 *)(pFVar37 + lVar30 + 0x40) = uVar15;
          *(undefined8 *)(pFVar37 + lVar30 + 0x40 + 8) = uVar16;
          *(undefined8 *)(pFVar37 + lVar30 + 0x50) = uVar17;
          *(undefined8 *)(pFVar37 + lVar30 + 0x50 + 8) = uVar18;
          local_294 = local_294 + 1;
        }
        else {
          uVar25 = ::GetTypeHash(FVar5.ComparisonIndex.Value);
          if (local_148._8_4_ != local_114) {
            puVar31 = local_110;
            if (local_108 != (undefined1 *)0x0) {
              puVar31 = local_108;
            }
            for (iVar32 = *(int *)(puVar31 + (ulonglong)(local_100 - 1U & FVar5.Number + uVar25) * 4
                                  ); iVar32 != -1;
                iVar32 = *(int *)(local_148._0_8_ + 0x10 + (longlong)iVar32 * 0x18)) {
              if (*(FName *)(local_148._0_8_ + (longlong)iVar32 * 0x18) == FVar5)
              goto LAB_14cdb149b;
            }
          }
        }
        uVar39 = uVar39 + 1;
        pFVar27 = (FDynamicMeshAttributeSet *)((longlong)&pFVar27->_padding_ + 1);
        pFVar40 = (FDynamicMeshAttributeSet *)&pFVar40->PolygroupLayers;
      } while ((longlong)pFVar27 < lVar41);
    }
    pFVar20 = local_270;
    uVar34 = 0;
    uVar25 = 0;
    if (local_148._8_4_ == local_114) {
      uVar36 = uVar34;
      if (0 < lVar41) {
        do {
          uVar35 = (uint)uVar34;
          uVar39 = uVar25;
          if ((int)uVar35 < (int)local_288) {
            uVar39 = ~uVar35 >> 0x1f;
          }
          if ((uVar39 == 0) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar23)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar3 = *(undefined4 *)(local_290.Data + uVar36 * 4);
          uVar39 = uVar25;
          if ((int)uVar35 < (int)(pFVar20->VertexRefCounts).RefCounts.CurBlock) {
            uVar39 = ~uVar35 >> 0x1f;
          }
          if ((uVar39 == 0) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar23)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar34 = (ulonglong)(uVar35 + 1);
          *(undefined4 *)
           ((((TArray<int,TSizedDefaultAllocator<32>_> *)&(pFVar20->Vertices).Blocks.ArrayNum)->
            AllocatorInstance).Data + uVar36 * 4) = uVar3;
          uVar36 = uVar36 + 1;
        } while ((longlong)uVar36 < lVar41);
      }
    }
    else {
      local_198 = &local_250;
      local_268[0] = 0xffffffff;
      local_190 = local_268;
      local_250 = 0;
      TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<FName_&&,int_&&>_>
                (&local_f8,(TPairInitializer<FName_&&,int_&&> *)(local_248 + 4),(bool *)&local_198);
      uVar39 = local_120;
      uStack_21c = 1;
      uStack_20c = uVar25;
      uStack_220 = uVar25;
      local_208 = uVar25;
      if (local_120 != 0) {
        puVar38 = (uint *)(local_148 + 0x10);
        if (local_128 != (uint *)0x0) {
          puVar38 = local_128;
        }
        uVar35 = *puVar38;
        uVar36 = uVar34;
        while( true ) {
          uStack_220 = (uint)uVar34;
          local_208 = (uint)uVar36;
          if (uVar35 != 0) break;
          lVar41 = (longlong)(int)uStack_220;
          local_208 = local_208 + 0x20;
          uVar36 = (ulonglong)local_208;
          uStack_220 = uStack_220 + 1;
          uVar34 = (ulonglong)uStack_220;
          uStack_20c = local_120;
          if ((int)((local_120 - 1) + ((int)(local_120 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_220
             ) goto LAB_14cdb18a0;
          uVar35 = puVar38[lVar41 + 1];
        }
        uStack_21c = -uVar35 & uVar35;
        uVar34 = (ulonglong)uStack_21c * 2 + 1;
        lVar41 = 0x3f;
        if (uVar34 != 0) {
          for (; uVar34 >> lVar41 == 0; lVar41 = lVar41 + -1) {
          }
        }
        local_240 = (int)lVar41;
        uStack_20c = (local_208 - 1) + local_240;
        if ((int)local_120 < (int)uStack_20c) {
          uStack_20c = local_120;
        }
      }
LAB_14cdb18a0:
      local_228 = (longlong *)local_148;
      uStack_204 = local_14c;
      local_218 = (TBitArray<FDefaultBitArrayAllocator> *)(local_148 + 0x10);
      iStack_200 = local_148._8_4_ - local_114;
      uVar35 = local_120 & 0xffffffe0;
      uStack_210 = 0xffffffff;
      TStack_1f0.CurrentBitIndex = uStack_20c;
      TStack_1f0.UnvisitedBitMask = 0xffffffff;
      TStack_1f0._padding_ = CONCAT44(uStack_21c,uStack_220);
      iVar32 = (int)local_120 >> 5;
      TStack_1f0._28_4_ = local_14c;
      TStack_1f0.BaseBitIndex = local_208;
      uStack_1d0 = CONCAT44(uStack_1fc,iStack_200);
      bVar29 = (byte)local_120;
      local_1f8 = local_228;
      TStack_1f0.Array = local_218;
      if (((int)local_120 < 0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar23)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar20 = local_270;
      if (uVar39 != local_120) {
        puVar38 = (uint *)(local_148 + 0x10);
        if (local_128 != (uint *)0x0) {
          puVar38 = local_128;
        }
        uVar39 = -1 << (bVar29 & 0x1f) & puVar38[iVar32];
        while (uVar39 == 0) {
          lVar41 = (longlong)iVar32;
          uVar35 = uVar35 + 0x20;
          iVar32 = iVar32 + 1;
          uVar39 = local_120;
          if ((int)((local_120 - 1) + ((int)(local_120 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar32)
          goto LAB_14cdb19d0;
          uVar39 = puVar38[lVar41 + 1];
        }
        uVar34 = (ulonglong)(-uVar39 & uVar39) * 2 + 1;
        lVar41 = 0x3f;
        if (uVar34 != 0) {
          for (; uVar34 >> lVar41 == 0; lVar41 = lVar41 + -1) {
          }
        }
        local_23c = (int)lVar41;
        uVar39 = (uVar35 - 1) + local_23c;
        if ((int)local_120 < (int)uVar39) {
          uVar39 = local_120;
        }
      }
LAB_14cdb19d0:
      while( true ) {
        plVar22 = local_1f8;
        if ((int)local_1f8[1] - *(int *)((longlong)local_1f8 + 0x34) != (int)uStack_1d0) {
          local_297[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_297);
        }
        lVar41 = (longlong)TStack_1f0.CurrentBitIndex;
        if (((TStack_1f0.CurrentBitIndex == uVar39) &&
            (TStack_1f0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_148 + 0x10))) &&
           (plVar22 == (longlong *)local_148)) break;
        lVar42 = *plVar22;
        pTVar28 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                  ::Find(&local_f8,*(FName *)(lVar42 + lVar41 * 0x18));
        if ((pTVar28 == (TTuple<FName,int> *)0x0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("Pair != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                ,0x288,L""), bVar23)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar35 = *(uint *)&pTVar28->field_0x8;
        pTVar28 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                  ::Find(&local_f8,*(FName *)(lVar42 + lVar41 * 0x18 + 8));
        if ((pTVar28 == (TTuple<FName,int> *)0x0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("Pair != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                ,0x288,L""), bVar23)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar3 = *(undefined4 *)&pTVar28->field_0x8;
        uVar26 = uVar25;
        if ((int)uVar35 < (int)(pFVar20->VertexRefCounts).RefCounts.CurBlock) {
          uVar26 = ~uVar35 >> 0x1f;
        }
        if ((uVar26 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        *(undefined4 *)
         ((((TArray<int,TSizedDefaultAllocator<32>_> *)&(pFVar20->Vertices).Blocks.ArrayNum)->
          AllocatorInstance).Data + (longlong)(int)uVar35 * 4) = uVar3;
        TStack_1f0.UnvisitedBitMask = TStack_1f0.UnvisitedBitMask & ~TStack_1f0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1f0);
      }
    }
    local_f8.HashSize = 0;
    if (local_f8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_f8.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_f8.Elements);
  }
  if (local_290.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_290.Data);
  }
  if (local_280.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_280.Data);
  }
  local_100 = 0;
  if (local_108 != (undefined1 *)0x0) {
    FMemory::Free(local_108);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_148);
  return;
}

// operator() @ 14cdb1c00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`UGeometryScriptLibrary_MeshBoneWeightFunctions::GetAllBonesInfo'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  TTransform<double> *pTVar1;
  FDynamicMeshAttributeSet *pFVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  FText *pFVar13;
  uint *puVar14;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_> *pTVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *pTVar19;
  longlong lVar20;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *pTVar21;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar22;
  undefined1 auStack_128 [32];
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *local_f0;
  longlong local_e8;
  TArray<FName,TSizedDefaultAllocator<32>_> *local_e0;
  void *local_d8;
  longlong local_d0;
  FLinearColor_u_0 local_c8;
  FText local_b8;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_128;
  pFVar2 = (param_1->AttributeSet).Ptr;
  local_d8 = this;
  if ((pFVar2 == (FDynamicMeshAttributeSet *)0x0) ||
     ((pFVar2->BoneNameAttrib).Ptr ==
      (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0)) {
    pFVar13 = FText::AsLocalizable_Advanced_LocText
                        (&local_b8,L"UGeometryScriptLibrary_MeshBoneWeightFunctions",
                         L"GetAllBonesInfo_TargetMeshHasNoBones",
                         L"GetAllBonesInfo: TargetMesh has no bone attributes");
    UE::Geometry::AppendError((UGeometryScriptDebug *)**(undefined8 **)this,InvalidInputs,pFVar13);
    if (local_b8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
    }
  }
  else {
    iVar11 = UE::Geometry::FDynamicMeshAttributeSet::GetNumBones(pFVar2);
    TArray<FGeometryScriptBoneInfo,TSizedDefaultAllocator<32>_>::SetNum
              (*(TArray<FGeometryScriptBoneInfo,TSizedDefaultAllocator<32>_> **)((longlong)this + 8)
               ,iVar11,Default);
    pFVar2 = (param_1->AttributeSet).Ptr;
    pTVar15 = _DAT_00000120;
    pTVar19 = _DAT_00000110;
    pTVar21 = _DAT_00000118;
    if (pFVar2 != (FDynamicMeshAttributeSet *)0x0) {
      pTVar15 = (pFVar2->BonePoseAttrib).Ptr;
      pTVar19 = (pFVar2->BoneNameAttrib).Ptr;
      pTVar21 = (pFVar2->BoneParentIndexAttrib).Ptr;
    }
    local_e0 = &pTVar19->AttribValues;
    local_f0 = &((pFVar2->BoneColorAttrib).Ptr)->AttribValues;
    pTVar22 = &pTVar21->AttribValues;
    uVar16 = 0;
    if (0 < iVar11) {
      lVar18 = 0;
      local_f8 = 0;
      local_e8 = 0;
      local_d0 = (longlong)iVar11;
      do {
        pTVar9 = local_e0;
        lVar20 = local_e8;
        uVar17 = ~uVar16 >> 0x1f;
        plVar3 = *(longlong **)((longlong)local_d8 + 8);
        iVar11 = (int)plVar3[1];
        uVar12 = 0;
        if ((int)uVar16 < iVar11) {
          uVar12 = uVar17;
        }
        if (uVar12 == 0) {
          local_108 = (longlong)(int)uVar16;
          local_100 = (longlong)iVar11;
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar10) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        puVar14 = (uint *)(*plVar3 + lVar20);
        *puVar14 = uVar16;
        iVar11 = pTVar9->ArrayNum;
        uVar12 = 0;
        if ((int)uVar16 < iVar11) {
          uVar12 = uVar17;
        }
        if ((uVar12 == 0) &&
           (local_108 = lVar18, local_100 = (longlong)iVar11,
           bVar10 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(undefined8 *)(puVar14 + 1) =
             *(undefined8 *)((pTVar9->AllocatorInstance).Data + lVar18 * 8);
        iVar11 = (pTVar21->AttribValues).ArrayNum;
        uVar12 = 0;
        if ((int)uVar16 < iVar11) {
          uVar12 = uVar17;
        }
        if (uVar12 == 0) {
          local_108 = (longlong)(int)uVar16;
          local_100 = (longlong)iVar11;
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar10) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        puVar14[3] = *(uint *)((pTVar22->AllocatorInstance).Data + lVar18 * 4);
        iVar11 = (pTVar15->AttribValues).ArrayNum;
        uVar12 = 0;
        if ((int)uVar16 < iVar11) {
          uVar12 = uVar17;
        }
        if (uVar12 == 0) {
          local_108 = (longlong)(int)uVar16;
          local_100 = (longlong)iVar11;
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar10) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        pFVar4 = (pTVar15->AttribValues).AllocatorInstance.Data;
        pTVar1 = (TTransform<double> *)(puVar14 + 0x1c);
        uVar6 = *(undefined8 *)(pFVar4 + local_f8 + 8);
        *(undefined8 *)(puVar14 + 4) = *(undefined8 *)(pFVar4 + local_f8);
        *(undefined8 *)(puVar14 + 6) = uVar6;
        uVar6 = *(undefined8 *)(pFVar4 + local_f8 + 0x10 + 8);
        *(undefined8 *)(puVar14 + 8) = *(undefined8 *)(pFVar4 + local_f8 + 0x10);
        *(undefined8 *)(puVar14 + 10) = uVar6;
        uVar6 = *(undefined8 *)(pFVar4 + local_f8 + 0x20 + 8);
        *(undefined8 *)(puVar14 + 0xc) = *(undefined8 *)(pFVar4 + local_f8 + 0x20);
        *(undefined8 *)(puVar14 + 0xe) = uVar6;
        uVar6 = *(undefined8 *)(pFVar4 + local_f8 + 0x30 + 8);
        *(undefined8 *)(puVar14 + 0x10) = *(undefined8 *)(pFVar4 + local_f8 + 0x30);
        *(undefined8 *)(puVar14 + 0x12) = uVar6;
        uVar6 = *(undefined8 *)(pFVar4 + local_f8 + 0x40 + 8);
        *(undefined8 *)(puVar14 + 0x14) = *(undefined8 *)(pFVar4 + local_f8 + 0x40);
        *(undefined8 *)(puVar14 + 0x16) = uVar6;
        uVar6 = *(undefined8 *)(pFVar4 + local_f8 + 0x50 + 8);
        *(undefined8 *)(puVar14 + 0x18) = *(undefined8 *)(pFVar4 + local_f8 + 0x50);
        *(undefined8 *)(puVar14 + 0x1a) = uVar6;
        uVar6 = *(undefined8 *)(puVar14 + 6);
        uVar7 = *(undefined8 *)(puVar14 + 8);
        uVar8 = *(undefined8 *)(puVar14 + 10);
        (pTVar1->Rotation).XY.m128d_f64[0] = *(double *)(puVar14 + 4);
        *(undefined8 *)(puVar14 + 0x1e) = uVar6;
        *(undefined8 *)(puVar14 + 0x20) = uVar7;
        *(undefined8 *)(puVar14 + 0x22) = uVar8;
        *(undefined8 *)(puVar14 + 0x24) = *(undefined8 *)(puVar14 + 0xc);
        *(undefined8 *)(puVar14 + 0x26) = *(undefined8 *)(puVar14 + 0xe);
        *(undefined8 *)(puVar14 + 0x28) = *(undefined8 *)(puVar14 + 0x10);
        *(undefined8 *)(puVar14 + 0x2a) = *(undefined8 *)(puVar14 + 0x12);
        *(undefined8 *)(puVar14 + 0x2c) = *(undefined8 *)(puVar14 + 0x14);
        *(undefined8 *)(puVar14 + 0x2e) = *(undefined8 *)(puVar14 + 0x16);
        *(undefined8 *)(puVar14 + 0x30) = *(undefined8 *)(puVar14 + 0x18);
        *(undefined8 *)(puVar14 + 0x32) = *(undefined8 *)(puVar14 + 0x1a);
        uVar12 = 0;
        if ((int)uVar16 < local_f0->ArrayNum) {
          uVar12 = uVar17;
        }
        if (uVar12 == 0) {
          local_108 = (longlong)(int)uVar16;
          local_100 = (longlong)local_f0->ArrayNum;
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar10) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        FLinearColor::FLinearColor
                  ((FLinearColor *)&local_c8._s_0,
                   (TVector4<float> *)
                   ((local_f0->AllocatorInstance).Data + (longlong)(int)uVar16 * 0x10));
        *(undefined8 *)(puVar14 + 0x34) = local_c8._0_8_;
        *(undefined8 *)(puVar14 + 0x36) = local_c8._8_8_;
        iVar11 = (pTVar21->AttribValues).ArrayNum;
        uVar12 = 0;
        if ((int)uVar16 < iVar11) {
          uVar12 = uVar17;
        }
        if ((uVar12 == 0) &&
           (local_108 = (longlong)(int)uVar16, local_100 = (longlong)iVar11,
           bVar10 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar12 = *(uint *)((pTVar22->AllocatorInstance).Data + lVar18 * 4);
        lVar20 = local_100;
        while (uVar12 != 0xffffffff) {
          iVar11 = (pTVar15->AttribValues).ArrayNum;
          local_100 = (longlong)iVar11;
          uVar17 = 0;
          if ((int)uVar12 < iVar11) {
            uVar17 = ~uVar12 >> 0x1f;
          }
          if (uVar17 == 0) {
            local_108 = (longlong)(int)uVar12;
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            lVar20 = local_100;
            if (bVar10) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          local_100 = lVar20;
          lVar20 = (longlong)(int)uVar12;
          local_a8.Rotation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          local_a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_a8.Rotation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
          local_a8.Rotation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
          local_a8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_a8.Rotation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
          local_a8.Translation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
          local_a8.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_a8.Translation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
          local_a8.Translation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
          local_a8.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_a8.Translation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
          local_a8.Scale3D.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
          local_a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_a8.Scale3D.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
          local_a8.Scale3D.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
          local_a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_a8.Scale3D.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
          UE::Math::TTransform<double>::Multiply
                    (&local_a8,pTVar1,
                     (TTransform<double> *)
                     ((pTVar15->AttribValues).AllocatorInstance.Data + lVar20 * 0x60));
          (pTVar1->Rotation).XY.m128d_f64[0] = local_a8.Rotation.XY.m128d_f64[0];
          *(double *)(puVar14 + 0x1e) = local_a8.Rotation.XY.m128d_f64[1];
          *(double *)(puVar14 + 0x20) = local_a8.Rotation.ZW.m128d_f64[0];
          *(double *)(puVar14 + 0x22) = local_a8.Rotation.ZW.m128d_f64[1];
          *(double *)(puVar14 + 0x24) = local_a8.Translation.XY.m128d_f64[0];
          *(double *)(puVar14 + 0x26) = local_a8.Translation.XY.m128d_f64[1];
          *(double *)(puVar14 + 0x28) = local_a8.Translation.ZW.m128d_f64[0];
          *(double *)(puVar14 + 0x2a) = local_a8.Translation.ZW.m128d_f64[1];
          *(double *)(puVar14 + 0x2c) = local_a8.Scale3D.XY.m128d_f64[0];
          *(double *)(puVar14 + 0x2e) = local_a8.Scale3D.XY.m128d_f64[1];
          *(double *)(puVar14 + 0x30) = local_a8.Scale3D.ZW.m128d_f64[0];
          *(double *)(puVar14 + 0x32) = local_a8.Scale3D.ZW.m128d_f64[1];
          iVar11 = (pTVar21->AttribValues).ArrayNum;
          uVar17 = 0;
          if ((int)uVar12 < iVar11) {
            uVar17 = ~uVar12 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (local_108 = lVar20, local_100 = (longlong)iVar11,
             bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar12 = *(uint *)((pTVar22->AllocatorInstance).Data + lVar20 * 4);
          lVar20 = local_100;
        }
        uVar16 = uVar16 + 1;
        local_f8 = local_f8 + 0x60;
        local_e8 = local_e8 + 0xe0;
        lVar18 = lVar18 + 1;
        local_100 = lVar20;
      } while (lVar18 < local_d0);
    }
  }
  return;
}

// operator() @ 14cdb2330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`UGeometryScriptLibrary_MeshBoneWeightFunctions::GetBoneChildren'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  int iVar1;
  FDynamicMeshAttributeSet *pFVar2;
  FScriptContainerElement *pFVar3;
  ForAnyElementType *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  undefined8 uVar7;
  TTransform<double> *pTVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  FDynamicMeshAttributeSet *pFVar12;
  FText *pFVar13;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *pTVar14;
  longlong lVar15;
  int iVar16;
  FScriptContainerElement *pFVar17;
  uint *puVar18;
  longlong lVar19;
  uint uVar20;
  FDynamicMeshAttributeSet *pFVar21;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_> *pTVar22;
  uint uVar23;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *pTVar24;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar25;
  undefined1 auStackY_138 [32];
  TArray<int,TSizedDefaultAllocator<32>_> local_108;
  TArray<FName,TSizedDefaultAllocator<32>_> *local_f8;
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *local_f0;
  longlong local_e8;
  longlong local_e0;
  void *local_d8;
  TTransform<double> *local_d0;
  FLinearColor_u_0 local_c8;
  FText local_b8;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_138;
  pFVar2 = (param_1->AttributeSet).Ptr;
  local_d8 = this;
  if ((pFVar2 == (FDynamicMeshAttributeSet *)0x0) ||
     ((pFVar2->BoneNameAttrib).Ptr ==
      (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0)) {
    pFVar13 = FText::AsLocalizable_Advanced_LocText
                        (&local_b8,L"UGeometryScriptLibrary_MeshBoneWeightFunctions",
                         L"GetBoneChildren_TargetMeshHasNoBones",
                         L"GetBoneChildren: TargetMesh has no bone attributes");
    UE::Geometry::AppendError((UGeometryScriptDebug *)**(undefined8 **)this,InvalidInputs,pFVar13);
    if (local_b8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
    }
  }
  else {
    UE::Geometry::FDynamicMeshAttributeSet::GetNumBones(pFVar2);
    pFVar2 = (param_1->AttributeSet).Ptr;
    pFVar21 = (FDynamicMeshAttributeSet *)0x0;
    pFVar12 = pFVar21;
    pTVar14 = _DAT_00000110;
    pTVar22 = _DAT_00000120;
    pTVar24 = _DAT_00000118;
    if (pFVar2 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar12 = pFVar2;
      pTVar14 = (pFVar2->BoneNameAttrib).Ptr;
      pTVar22 = (pFVar2->BonePoseAttrib).Ptr;
      pTVar24 = (pFVar2->BoneParentIndexAttrib).Ptr;
    }
    pFVar3 = (pTVar14->AttribValues).AllocatorInstance.Data;
    local_f8 = &pTVar14->AttribValues;
    local_f0 = &((pFVar12->BoneColorAttrib).Ptr)->AttribValues;
    pTVar25 = &pTVar24->AttribValues;
    if (pFVar3 != pFVar3 + (longlong)(pTVar14->AttribValues).ArrayNum * 8) {
      pFVar17 = pFVar3;
      do {
        if (*(longlong *)pFVar17 == **(longlong **)((longlong)this + 8)) {
          iVar16 = (int)((longlong)pFVar17 - (longlong)pFVar3 >> 3);
          goto LAB_14cdb2427;
        }
        pFVar17 = pFVar17 + 8;
      } while (pFVar17 != pFVar3 + (longlong)(pTVar14->AttribValues).ArrayNum * 8);
    }
    iVar16 = -1;
LAB_14cdb2427:
    *(bool *)*(undefined8 *)((longlong)this + 0x10) = iVar16 != -1;
    if (**(char **)((longlong)this + 0x10) != '\0') {
      pFVar4 = *(ForAnyElementType **)((longlong)this + 0x18);
      iVar1 = *(int *)((longlong)&pFVar4[1].Data + 4);
      *(undefined4 *)&pFVar4[1].Data = 0;
      if (iVar1 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xe0,0x10,0,pFVar4,0,(int *)((longlong)&pFVar4[1].Data + 4));
      }
      local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_108.ArrayNum = 0;
      local_108.ArrayMax = 0;
      UE::Geometry::FMeshBones::GetBoneChildren
                (param_1,iVar16,&local_108,*(bool *)*(undefined8 *)((longlong)this + 0x20));
      TArray<FGeometryScriptBoneInfo,TSizedDefaultAllocator<32>_>::SetNum
                (*(TArray<FGeometryScriptBoneInfo,TSizedDefaultAllocator<32>_> **)
                  ((longlong)this + 0x18),local_108.ArrayNum,Default);
      if (0 < local_108.ArrayNum) {
        local_e0 = 0;
        local_e8 = 0;
        do {
          lVar15 = local_e0;
          lVar19 = local_e8;
          uVar20 = (uint)pFVar21;
          uVar10 = 0;
          if ((int)uVar20 < local_108.ArrayNum) {
            uVar10 = ~uVar20 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar10 = *(uint *)(local_108.AllocatorInstance.Data + lVar19);
          lVar19 = (longlong)(int)uVar10;
          plVar5 = *(longlong **)((longlong)local_d8 + 0x18);
          uVar11 = 0;
          if ((int)uVar20 < (int)plVar5[1]) {
            uVar11 = ~uVar20 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          puVar18 = (uint *)(*plVar5 + lVar15);
          uVar23 = ~uVar10 >> 0x1f;
          *puVar18 = uVar10;
          uVar11 = 0;
          if ((int)uVar10 < local_f8->ArrayNum) {
            uVar11 = uVar23;
          }
          if ((uVar11 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          *(undefined8 *)(puVar18 + 1) =
               *(undefined8 *)((local_f8->AllocatorInstance).Data + lVar19 * 8);
          uVar11 = 0;
          if ((int)uVar10 < (pTVar24->AttribValues).ArrayNum) {
            uVar11 = uVar23;
          }
          if ((uVar11 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          puVar18[3] = *(uint *)((pTVar25->AllocatorInstance).Data + lVar19 * 4);
          uVar11 = 0;
          if ((int)uVar10 < (pTVar22->AttribValues).ArrayNum) {
            uVar11 = uVar23;
          }
          if ((uVar11 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar3 = (pTVar22->AttribValues).AllocatorInstance.Data;
          lVar15 = lVar19 * 0x60;
          uVar7 = *(undefined8 *)(pFVar3 + lVar15 + 8);
          *(undefined8 *)(puVar18 + 4) = *(undefined8 *)(pFVar3 + lVar15);
          *(undefined8 *)(puVar18 + 6) = uVar7;
          uVar7 = *(undefined8 *)(pFVar3 + lVar15 + 0x10 + 8);
          *(undefined8 *)(puVar18 + 8) = *(undefined8 *)(pFVar3 + lVar15 + 0x10);
          *(undefined8 *)(puVar18 + 10) = uVar7;
          uVar7 = *(undefined8 *)(pFVar3 + lVar15 + 0x20 + 8);
          *(undefined8 *)(puVar18 + 0xc) = *(undefined8 *)(pFVar3 + lVar15 + 0x20);
          *(undefined8 *)(puVar18 + 0xe) = uVar7;
          uVar7 = *(undefined8 *)(pFVar3 + lVar15 + 0x30 + 8);
          *(undefined8 *)(puVar18 + 0x10) = *(undefined8 *)(pFVar3 + lVar15 + 0x30);
          *(undefined8 *)(puVar18 + 0x12) = uVar7;
          uVar7 = *(undefined8 *)(pFVar3 + lVar15 + 0x40 + 8);
          *(undefined8 *)(puVar18 + 0x14) = *(undefined8 *)(pFVar3 + lVar15 + 0x40);
          *(undefined8 *)(puVar18 + 0x16) = uVar7;
          uVar7 = *(undefined8 *)(pFVar3 + lVar15 + 0x50 + 8);
          local_d0 = (TTransform<double> *)(puVar18 + 0x1c);
          *(undefined8 *)(puVar18 + 0x18) = *(undefined8 *)(pFVar3 + lVar15 + 0x50);
          *(undefined8 *)(puVar18 + 0x1a) = uVar7;
          *(undefined8 *)(puVar18 + 0x1c) = *(undefined8 *)(puVar18 + 4);
          *(undefined8 *)(puVar18 + 0x1e) = *(undefined8 *)(puVar18 + 6);
          *(undefined8 *)(puVar18 + 0x20) = *(undefined8 *)(puVar18 + 8);
          *(undefined8 *)(puVar18 + 0x22) = *(undefined8 *)(puVar18 + 10);
          *(undefined8 *)(puVar18 + 0x24) = *(undefined8 *)(puVar18 + 0xc);
          *(undefined8 *)(puVar18 + 0x26) = *(undefined8 *)(puVar18 + 0xe);
          *(undefined8 *)(puVar18 + 0x28) = *(undefined8 *)(puVar18 + 0x10);
          *(undefined8 *)(puVar18 + 0x2a) = *(undefined8 *)(puVar18 + 0x12);
          *(undefined8 *)(puVar18 + 0x2c) = *(undefined8 *)(puVar18 + 0x14);
          *(undefined8 *)(puVar18 + 0x2e) = *(undefined8 *)(puVar18 + 0x16);
          *(undefined8 *)(puVar18 + 0x30) = *(undefined8 *)(puVar18 + 0x18);
          *(undefined8 *)(puVar18 + 0x32) = *(undefined8 *)(puVar18 + 0x1a);
          uVar11 = 0;
          if ((int)uVar10 < local_f0->ArrayNum) {
            uVar11 = uVar23;
          }
          if ((uVar11 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          FLinearColor::FLinearColor
                    ((FLinearColor *)&local_c8._s_0,
                     (TVector4<float> *)((local_f0->AllocatorInstance).Data + lVar19 * 0x10));
          *(undefined8 *)(puVar18 + 0x34) = local_c8._0_8_;
          *(undefined8 *)(puVar18 + 0x36) = local_c8._8_8_;
          uVar11 = 0;
          if ((int)uVar10 < (pTVar24->AttribValues).ArrayNum) {
            uVar11 = uVar23;
          }
          if ((uVar11 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pTVar8 = local_d0;
          for (uVar10 = *(uint *)((pTVar25->AllocatorInstance).Data + lVar19 * 4);
              uVar10 != 0xffffffff;
              uVar10 = *(uint *)((pTVar25->AllocatorInstance).Data + (longlong)(int)uVar10 * 4)) {
            uVar11 = 0;
            if ((int)uVar10 < (pTVar22->AttribValues).ArrayNum) {
              uVar11 = ~uVar10 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            local_a8.Rotation.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
            local_a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0]
            ;
            local_a8.Rotation.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
            local_a8.Rotation.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
            local_a8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2]
            ;
            local_a8.Rotation.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
            local_a8.Translation.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
            local_a8.Translation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[0];
            local_a8.Translation.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
            local_a8.Translation.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
            local_a8.Translation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[2];
            local_a8.Translation.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
            local_a8.Scale3D.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
            local_a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
            local_a8.Scale3D.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
            local_a8.Scale3D.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
            local_a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
            local_a8.Scale3D.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
            UE::Math::TTransform<double>::Multiply
                      (&local_a8,pTVar8,
                       (TTransform<double> *)
                       ((pTVar22->AttribValues).AllocatorInstance.Data +
                       (longlong)(int)uVar10 * 0x60));
            (pTVar8->Rotation).XY.m128d_f64[0] = local_a8.Rotation.XY.m128d_f64[0];
            (pTVar8->Rotation).XY.m128d_f64[1] = local_a8.Rotation.XY.m128d_f64[1];
            (pTVar8->Rotation).ZW.m128d_f64[0] = local_a8.Rotation.ZW.m128d_f64[0];
            (pTVar8->Rotation).ZW.m128d_f64[1] = local_a8.Rotation.ZW.m128d_f64[1];
            (pTVar8->Translation).XY.m128d_f64[0] = local_a8.Translation.XY.m128d_f64[0];
            (pTVar8->Translation).XY.m128d_f64[1] = local_a8.Translation.XY.m128d_f64[1];
            (pTVar8->Translation).ZW.m128d_f64[0] = local_a8.Translation.ZW.m128d_f64[0];
            (pTVar8->Translation).ZW.m128d_f64[1] = local_a8.Translation.ZW.m128d_f64[1];
            (pTVar8->Scale3D).XY.m128d_f64[0] = local_a8.Scale3D.XY.m128d_f64[0];
            (pTVar8->Scale3D).XY.m128d_f64[1] = local_a8.Scale3D.XY.m128d_f64[1];
            (pTVar8->Scale3D).ZW.m128d_f64[0] = local_a8.Scale3D.ZW.m128d_f64[0];
            (pTVar8->Scale3D).ZW.m128d_f64[1] = local_a8.Scale3D.ZW.m128d_f64[1];
            uVar11 = 0;
            if ((int)uVar10 < (pTVar24->AttribValues).ArrayNum) {
              uVar11 = ~uVar10 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          pFVar21 = (FDynamicMeshAttributeSet *)(ulonglong)(uVar20 + 1);
          local_e8 = local_e8 + 4;
          local_e0 = local_e0 + 0xe0;
        } while ((int)(uVar20 + 1) < local_108.ArrayNum);
      }
      if (local_108.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// operator() @ 14cdb29b0

void __thiscall
`UGeometryScriptLibrary_MeshBoneWeightFunctions::GetBoneIndex'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  FDynamicMeshAttributeSet *pFVar1;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *pTVar2;
  FScriptContainerElement *pFVar3;
  undefined4 uVar4;
  FScriptContainerElement *pFVar5;
  FText *pFVar6;
  FText local_18;
  
  pFVar1 = (param_1->AttributeSet).Ptr;
  if ((pFVar1 == (FDynamicMeshAttributeSet *)0x0) ||
     (pTVar2 = (pFVar1->BoneNameAttrib).Ptr,
     pTVar2 == (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0)) {
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"UGeometryScriptLibrary_MeshBoneWeightFunctions",
                        L"GetBoneIndex_TargetMeshHasNoBones",
                        L"GetBoneIndex: TargetMesh has no bone attributes");
    UE::Geometry::AppendError((UGeometryScriptDebug *)**(undefined8 **)this,InvalidInputs,pFVar6);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    return;
  }
  pFVar3 = (pTVar2->AttribValues).AllocatorInstance.Data;
  if (pFVar3 != pFVar3 + (longlong)(pTVar2->AttribValues).ArrayNum * 8) {
    pFVar5 = pFVar3;
    do {
      if (*(longlong *)pFVar5 == **(longlong **)((longlong)this + 0x10)) {
        uVar4 = (undefined4)((longlong)pFVar5 - (longlong)pFVar3 >> 3);
        goto LAB_14cdb2a03;
      }
      pFVar5 = pFVar5 + 8;
    } while (pFVar5 != pFVar3 + (longlong)(pTVar2->AttribValues).ArrayNum * 8);
  }
  uVar4 = 0xffffffff;
LAB_14cdb2a03:
  **(undefined4 **)((longlong)this + 8) = uVar4;
  *(bool *)*(undefined8 *)((longlong)this + 0x18) = **(int **)((longlong)this + 8) != -1;
  return;
}

// operator() @ 14cdb2a80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`UGeometryScriptLibrary_MeshBoneWeightFunctions::GetBoneInfo'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  int iVar1;
  FDynamicMeshAttributeSet *pFVar2;
  FScriptContainerElement *pFVar3;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *pTVar4;
  longlong lVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  bool bVar18;
  uint uVar19;
  FText *pFVar20;
  longlong lVar21;
  uint uVar22;
  FScriptContainerElement *pFVar23;
  uint uVar24;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *pTVar25;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar26;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *pTVar27;
  longlong lVar28;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_> *pTVar29;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  longlong local_d0;
  FLinearColor_u_0 local_c8;
  FText local_b8;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pFVar2 = (param_1->AttributeSet).Ptr;
  if ((pFVar2 == (FDynamicMeshAttributeSet *)0x0) ||
     (pTVar27 = (pFVar2->BoneNameAttrib).Ptr,
     pTVar27 == (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0)) {
    pFVar20 = FText::AsLocalizable_Advanced_LocText
                        (&local_b8,L"UGeometryScriptLibrary_MeshBoneWeightFunctions",
                         L"GetBoneInfo_TargetMeshHasNoBones",
                         L"GetBoneInfo: TargetMesh has no bone attributes");
    UE::Geometry::AppendError((UGeometryScriptDebug *)**(undefined8 **)this,InvalidInputs,pFVar20);
    if (local_b8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
    }
  }
  else {
    pFVar3 = (pTVar27->AttribValues).AllocatorInstance.Data;
    if (pFVar3 != pFVar3 + (longlong)(pTVar27->AttribValues).ArrayNum * 8) {
      pFVar23 = pFVar3;
      do {
        if (*(longlong *)pFVar23 == **(longlong **)((longlong)this + 8)) {
          uVar22 = (uint)((longlong)pFVar23 - (longlong)pFVar3 >> 3);
          goto LAB_14cdb2af7;
        }
        pFVar23 = pFVar23 + 8;
      } while (pFVar23 != pFVar3 + (longlong)(pTVar27->AttribValues).ArrayNum * 8);
    }
    uVar22 = 0xffffffff;
LAB_14cdb2af7:
    *(bool *)*(undefined8 *)((longlong)this + 0x10) = uVar22 != 0xffffffff;
    if (**(char **)((longlong)this + 0x10) != '\0') {
      pFVar2 = (param_1->AttributeSet).Ptr;
      pTVar25 = _DAT_00000118;
      pTVar27 = _DAT_00000110;
      pTVar29 = _DAT_00000120;
      if (pFVar2 != (FDynamicMeshAttributeSet *)0x0) {
        pTVar25 = (pFVar2->BoneParentIndexAttrib).Ptr;
        pTVar27 = (pFVar2->BoneNameAttrib).Ptr;
        pTVar29 = (pFVar2->BonePoseAttrib).Ptr;
      }
      pTVar4 = (pFVar2->BoneColorAttrib).Ptr;
      pTVar26 = &pTVar25->AttribValues;
      uVar24 = ~uVar22 >> 0x1f;
      **(uint **)((longlong)this + 0x18) = uVar22;
      iVar1 = (pTVar27->AttribValues).ArrayNum;
      uVar19 = 0;
      if ((int)uVar22 < iVar1) {
        uVar19 = uVar24;
      }
      if (uVar19 == 0) {
        local_d8 = (longlong)(int)uVar22;
        local_d0 = (longlong)iVar1;
        bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar18) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      lVar28 = (longlong)(int)uVar22;
      *(undefined8 *)(*(longlong *)((longlong)this + 0x18) + 4) =
           *(undefined8 *)((pTVar27->AttribValues).AllocatorInstance.Data + lVar28 * 8);
      iVar1 = (pTVar25->AttribValues).ArrayNum;
      uVar19 = 0;
      if ((int)uVar22 < iVar1) {
        uVar19 = uVar24;
      }
      if ((uVar19 == 0) &&
         (local_d8 = lVar28, local_d0 = (longlong)iVar1,
         bVar18 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      *(undefined4 *)(*(longlong *)((longlong)this + 0x18) + 0xc) =
           *(undefined4 *)((pTVar26->AllocatorInstance).Data + lVar28 * 4);
      iVar1 = (pTVar29->AttribValues).ArrayNum;
      uVar19 = 0;
      if ((int)uVar22 < iVar1) {
        uVar19 = uVar24;
      }
      if ((uVar19 == 0) &&
         (local_d8 = lVar28, local_d0 = (longlong)iVar1,
         bVar18 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar3 = (pTVar29->AttribValues).AllocatorInstance.Data;
      lVar21 = lVar28 * 0x60;
      uVar7 = *(undefined8 *)(pFVar3 + lVar21 + 8);
      uVar8 = *(undefined8 *)(pFVar3 + lVar21 + 0x10);
      uVar9 = *(undefined8 *)(pFVar3 + lVar21 + 0x10 + 8);
      uVar10 = *(undefined8 *)(pFVar3 + lVar21 + 0x20);
      uVar11 = *(undefined8 *)(pFVar3 + lVar21 + 0x20 + 8);
      uVar12 = *(undefined8 *)(pFVar3 + lVar21 + 0x30);
      uVar13 = *(undefined8 *)(pFVar3 + lVar21 + 0x30 + 8);
      uVar14 = *(undefined8 *)(pFVar3 + lVar21 + 0x40);
      uVar15 = *(undefined8 *)(pFVar3 + lVar21 + 0x40 + 8);
      uVar16 = *(undefined8 *)(pFVar3 + lVar21 + 0x50);
      uVar17 = *(undefined8 *)(pFVar3 + lVar21 + 0x50 + 8);
      lVar5 = *(longlong *)((longlong)this + 0x18);
      *(undefined8 *)(lVar5 + 0x10) = *(undefined8 *)(pFVar3 + lVar21);
      *(undefined8 *)(lVar5 + 0x18) = uVar7;
      *(undefined8 *)(lVar5 + 0x20) = uVar8;
      *(undefined8 *)(lVar5 + 0x28) = uVar9;
      *(undefined8 *)(lVar5 + 0x30) = uVar10;
      *(undefined8 *)(lVar5 + 0x38) = uVar11;
      *(undefined8 *)(lVar5 + 0x40) = uVar12;
      *(undefined8 *)(lVar5 + 0x48) = uVar13;
      *(undefined8 *)(lVar5 + 0x50) = uVar14;
      *(undefined8 *)(lVar5 + 0x58) = uVar15;
      *(undefined8 *)(lVar5 + 0x60) = uVar16;
      *(undefined8 *)(lVar5 + 0x68) = uVar17;
      lVar5 = *(longlong *)((longlong)this + 0x18);
      *(undefined8 *)(lVar5 + 0x70) = *(undefined8 *)(lVar5 + 0x10);
      *(undefined8 *)(lVar5 + 0x78) = *(undefined8 *)(lVar5 + 0x18);
      *(undefined8 *)(lVar5 + 0x80) = *(undefined8 *)(lVar5 + 0x20);
      *(undefined8 *)(lVar5 + 0x88) = *(undefined8 *)(lVar5 + 0x28);
      *(undefined8 *)(lVar5 + 0x90) = *(undefined8 *)(lVar5 + 0x30);
      *(undefined8 *)(lVar5 + 0x98) = *(undefined8 *)(lVar5 + 0x38);
      *(undefined8 *)(lVar5 + 0xa0) = *(undefined8 *)(lVar5 + 0x40);
      *(undefined8 *)(lVar5 + 0xa8) = *(undefined8 *)(lVar5 + 0x48);
      *(undefined8 *)(lVar5 + 0xb0) = *(undefined8 *)(lVar5 + 0x50);
      *(undefined8 *)(lVar5 + 0xb8) = *(undefined8 *)(lVar5 + 0x58);
      *(undefined8 *)(lVar5 + 0xc0) = *(undefined8 *)(lVar5 + 0x60);
      *(undefined8 *)(lVar5 + 200) = *(undefined8 *)(lVar5 + 0x68);
      iVar1 = (pTVar4->AttribValues).ArrayNum;
      uVar19 = 0;
      if ((int)uVar22 < iVar1) {
        uVar19 = uVar24;
      }
      if ((uVar19 == 0) &&
         (local_d8 = lVar28, local_d0 = (longlong)iVar1,
         bVar18 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FLinearColor::FLinearColor
                ((FLinearColor *)&local_c8._s_0,
                 (TVector4<float> *)((pTVar4->AttribValues).AllocatorInstance.Data + lVar28 * 0x10))
      ;
      lVar5 = *(longlong *)((longlong)this + 0x18);
      *(undefined8 *)(lVar5 + 0xd0) = local_c8._0_8_;
      *(undefined8 *)(lVar5 + 0xd8) = local_c8._8_8_;
      iVar1 = (pTVar25->AttribValues).ArrayNum;
      uVar19 = 0;
      if ((int)uVar22 < iVar1) {
        uVar19 = uVar24;
      }
      if ((uVar19 == 0) &&
         (local_d8 = lVar28, local_d0 = (longlong)iVar1,
         bVar18 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar22 = *(uint *)((pTVar26->AllocatorInstance).Data + lVar28 * 4);
      lVar28 = local_d0;
      while (uVar22 != 0xffffffff) {
        iVar1 = (pTVar29->AttribValues).ArrayNum;
        local_d0 = (longlong)iVar1;
        lVar5 = *(longlong *)((longlong)this + 0x18);
        uVar19 = 0;
        if ((int)uVar22 < iVar1) {
          uVar19 = ~uVar22 >> 0x1f;
        }
        if (uVar19 == 0) {
          local_d8 = (longlong)(int)uVar22;
          bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          lVar28 = local_d0;
          if (bVar18) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        local_d0 = lVar28;
        lVar21 = (longlong)(int)uVar22;
        local_a8.Rotation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        local_a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_a8.Rotation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
        local_a8.Rotation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        local_a8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_a8.Rotation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
        local_a8.Translation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        local_a8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
        local_a8.Translation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_a8.Translation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
        local_a8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
        local_a8.Translation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
        local_a8.Scale3D.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        local_a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_a8.Scale3D.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        local_a8.Scale3D.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
        local_a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_a8.Scale3D.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
        UE::Math::TTransform<double>::Multiply
                  (&local_a8,(TTransform<double> *)(lVar5 + 0x70),
                   (TTransform<double> *)
                   ((pTVar29->AttribValues).AllocatorInstance.Data + lVar21 * 0x60));
        lVar28 = *(longlong *)((longlong)this + 0x18);
        *(double *)(lVar28 + 0x70) = local_a8.Rotation.XY.m128d_f64[0];
        *(double *)(lVar28 + 0x78) = local_a8.Rotation.XY.m128d_f64[1];
        *(double *)(lVar28 + 0x80) = local_a8.Rotation.ZW.m128d_f64[0];
        *(double *)(lVar28 + 0x88) = local_a8.Rotation.ZW.m128d_f64[1];
        *(double *)(lVar28 + 0x90) = local_a8.Translation.XY.m128d_f64[0];
        *(double *)(lVar28 + 0x98) = local_a8.Translation.XY.m128d_f64[1];
        *(double *)(lVar28 + 0xa0) = local_a8.Translation.ZW.m128d_f64[0];
        *(double *)(lVar28 + 0xa8) = local_a8.Translation.ZW.m128d_f64[1];
        *(double *)(lVar28 + 0xb0) = local_a8.Scale3D.XY.m128d_f64[0];
        *(double *)(lVar28 + 0xb8) = local_a8.Scale3D.XY.m128d_f64[1];
        *(double *)(lVar28 + 0xc0) = local_a8.Scale3D.ZW.m128d_f64[0];
        *(double *)(lVar28 + 200) = local_a8.Scale3D.ZW.m128d_f64[1];
        iVar1 = (pTVar25->AttribValues).ArrayNum;
        uVar19 = 0;
        if ((int)uVar22 < iVar1) {
          uVar19 = ~uVar22 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (local_d8 = lVar21, local_d0 = (longlong)iVar1,
           bVar18 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar18)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar28 = local_d0;
        uVar22 = *(uint *)((pTVar26->AllocatorInstance).Data + lVar21 * 4);
      }
    }
  }
  return;
}

// operator() @ 14cdb2fd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FBoneWeight __thiscall
`UGeometryScriptLibrary_MeshBoneWeightFunctions::GetLargestVertexBoneWeight'::__l2::<lambda_1>::
operator()(void *this,FDynamicMesh3 *param_1,
          TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *param_2)

{
  int iVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  uint uVar5;
  FBoneWeight FVar6;
  ForElementType<UE::AnimationCore::FBoneWeight> FVar7;
  ForElementType<UE::AnimationCore::FBoneWeight> FVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  longlong in_R9;
  float fVar12;
  float fVar13;
  undefined1 auStackY_c8 [32];
  ForElementType<UE::AnimationCore::FBoneWeight> local_88;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  *(undefined4 *)&param_1->_padding_ = 0;
  uVar11 = **(uint **)this;
  if ((((int)uVar11 < 0) ||
      (*(int *)&(param_2->VertexBoneWeights).Blocks.AllocatorInstance.Data * 0x200 +
       *(int *)((longlong)&(param_2->VertexBoneWeights).Blocks.AllocatorInstance.Data + 4) <=
       (int)uVar11)) ||
     (0xfffd < (ushort)(*(short *)(*(longlong *)
                                    (*(longlong *)&(param_2->VertexBoneWeights).Blocks.ArrayNum +
                                    (ulonglong)(uVar11 >> 9) * 8) + (ulonglong)(uVar11 & 0x1ff) * 2)
                       - 1U))) {
    if (2 < (byte)LogGeometry._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
  }
  else {
    fVar13 = 0.0;
    **(undefined1 **)((longlong)this + 8) = 1;
    local_88.SecondaryData = (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
    local_50 = 0;
    local_4c = 0xc;
    FVar7 = (ForElementType<UE::AnimationCore::FBoneWeight>)
            (*(longlong *)(*(longlong *)(in_R9 + 0x20) + (ulonglong)(**(uint **)this >> 9) * 8) +
            (ulonglong)(**(uint **)this & 0x1ff) * 0x40);
    if ((ForElementType<UE::AnimationCore::FBoneWeight>)&local_88 != FVar7) {
      iVar1 = *(int *)((longlong)FVar7 + 0x38);
      FVar8 = *(ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar7 + 0x30);
      if (*(ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar7 + 0x30) ==
          (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
        FVar8 = FVar7;
      }
      local_50 = iVar1;
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AnimationCore::FBoneWeight>_>
                (4,2,iVar1,0xc,&local_88,iVar1,&local_4c);
      FVar7 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_88;
      if (local_88.SecondaryData != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
        FVar7 = local_88.SecondaryData;
      }
      if (iVar1 != 0) {
        memcpy((void *)FVar7,(void *)FVar8,(longlong)iVar1 << 2);
      }
    }
    fVar3 = __real_37800080;
    lVar10 = (longlong)local_50;
    uVar11 = 0;
    FVar7 = local_88.SecondaryData;
    if (0 < lVar10) {
      lVar9 = 0;
      do {
        uVar5 = 0;
        if ((int)uVar11 < local_50) {
          uVar5 = ~uVar11 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , FVar7 = local_88.SecondaryData, bVar4)) {
          pcVar2 = (code *)swi(3);
          FVar6 = (FBoneWeight)(*pcVar2)();
          return FVar6;
        }
        FVar8 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_88;
        if (FVar7 != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
          FVar8 = FVar7;
        }
        fVar12 = (float)*(ushort *)((uchar *)((longlong)FVar8 + 2) + lVar9 * 4) * fVar3;
        if (fVar13 < fVar12) {
          *(undefined4 *)&param_1->_padding_ = *(undefined4 *)((longlong)FVar8 + lVar9 * 4);
          fVar13 = fVar12;
        }
        uVar11 = uVar11 + 1;
        lVar9 = lVar9 + 1;
      } while (lVar9 < lVar10);
    }
    if (FVar7 != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
      FMemory::Free((void *)FVar7);
    }
  }
  return SUB84(param_1,0);
}

// operator() @ 14cdb3500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`UGeometryScriptLibrary_MeshBoneWeightFunctions::GetMaxBoneWeightIndex'::__l2::<lambda_1>::
operator()(void *this,FDynamicMesh3 *param_1,
          TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *param_2)

{
  longlong lVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  ForElementType<UE::AnimationCore::FBoneWeight> _Dst;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  ForElementType<UE::AnimationCore::FBoneWeight> FVar12;
  uint uVar13;
  double dVar14;
  double dVar15;
  undefined1 auStackY_c8 [32];
  ForElementType<UE::AnimationCore::FBoneWeight> local_88;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  uVar13 = (param_1->VertexRefCounts).RefCounts.CurBlockUsed +
           (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200;
  uVar9 = 0;
  if ((uVar13 != 0) &&
     (pFVar3 = (param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar9 = 0,
     0xfffd < (ushort)(**(short **)pFVar3 - 1U))) {
    uVar8 = 1;
    uVar9 = 1;
    if (1 < (int)uVar13) {
      do {
        lVar10 = *(longlong *)(pFVar3 + (ulonglong)(uVar8 >> 9) * 8);
        if ((*(short *)(lVar10 + (ulonglong)(uVar8 & 0x1ff) * 2) != 0) &&
           (uVar9 = uVar8, *(short *)(lVar10 + (ulonglong)(uVar8 & 0x1ff) * 2) != -1)) break;
        uVar8 = uVar8 + 1;
        uVar9 = uVar8;
      } while ((int)uVar8 < (int)uVar13);
    }
  }
joined_r0x00014cdb359a:
  do {
    if (uVar9 == uVar13) {
      return true;
    }
    while( true ) {
      local_88.SecondaryData = (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
      local_50 = 0;
      local_4c = 0xc;
      FVar12 = (ForElementType<UE::AnimationCore::FBoneWeight>)
               (*(longlong *)
                 ((param_2->VertexBoneWeights).Blocks.AllocatorInstance.Data +
                 (ulonglong)(uVar9 >> 9) * 8) + (ulonglong)(uVar9 & 0x1ff) * 0x40);
      if ((ForElementType<UE::AnimationCore::FBoneWeight>)&local_88 != FVar12) {
        iVar2 = *(int *)((longlong)FVar12 + 0x38);
        if (*(ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar12 + 0x30) !=
            (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
          FVar12 = *(ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar12 + 0x30);
        }
        local_50 = iVar2;
        UE::Core::Private::
        ReallocForCopy<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AnimationCore::FBoneWeight>_>
                  (4,2,iVar2,0xc,&local_88,iVar2,&local_4c);
        _Dst = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_88;
        if (local_88.SecondaryData != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
          _Dst = local_88.SecondaryData;
        }
        if (iVar2 != 0) {
          memcpy((void *)_Dst,(void *)FVar12,(longlong)iVar2 << 2);
        }
      }
      uVar8 = 0;
      lVar10 = (longlong)local_50;
      lVar11 = 0;
      if (0 < local_50) {
        do {
          uVar7 = 0;
          if ((int)uVar8 < local_50) {
            uVar7 = ~uVar8 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          FVar12 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_88;
          if (local_88.SecondaryData != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
            FVar12 = local_88.SecondaryData;
          }
          uVar8 = uVar8 + 1;
          lVar1 = lVar11 * 4;
          lVar11 = lVar11 + 1;
          dVar14 = (double)**(int **)this;
          dVar15 = (double)*(ushort *)((longlong)FVar12 + lVar1);
          if (dVar15 <= dVar14) {
            dVar15 = dVar14;
          }
          **(int **)this = (int)dVar15;
        } while (lVar11 < lVar10);
      }
      if (local_88.SecondaryData != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
        FMemory::Free((void *)local_88.SecondaryData);
      }
      uVar9 = uVar9 + 1;
      if ((int)uVar13 <= (int)uVar9) break;
      pFVar3 = (param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
      while( true ) {
        if ((*(short *)(*(longlong *)(pFVar3 + (ulonglong)(uVar9 >> 9) * 8) +
                       (ulonglong)(uVar9 & 0x1ff) * 2) != 0) &&
           (*(short *)(*(longlong *)(pFVar3 + (ulonglong)(uVar9 >> 9) * 8) +
                      (ulonglong)(uVar9 & 0x1ff) * 2) != -1)) break;
        uVar9 = uVar9 + 1;
        if ((int)uVar13 <= (int)uVar9) goto joined_r0x00014cdb359a;
      }
    }
  } while( true );
}

// operator() @ 14cdb3900

void __thiscall
`UGeometryScriptLibrary_MeshBoneWeightFunctions::GetRootBoneName'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  FDynamicMeshAttributeSet *pFVar1;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *pTVar2;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FText *pFVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  FText local_38;
  FText local_28;
  FText local_18;
  
  pFVar1 = (param_1->AttributeSet).Ptr;
  if ((pFVar1 == (FDynamicMeshAttributeSet *)0x0) ||
     (pTVar2 = (pFVar1->BoneNameAttrib).Ptr,
     pTVar2 == (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0)) {
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"UGeometryScriptLibrary_MeshBoneWeightFunctions",
                        L"GetRootBoneName_TargetMeshHasNoBones",
                        L"GetRootBoneName: TargetMesh has no bone attributes");
    UE::Geometry::AppendError((UGeometryScriptDebug *)**(undefined8 **)this,InvalidInputs,pFVar8);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
      return;
    }
  }
  else if ((pTVar2->AttribValues).ArrayNum == 0) {
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       (&local_38,L"UGeometryScriptLibrary_MeshBoneWeightFunctions",
                        L"GetRootBoneName_TargetMeshHasEmptySkeleton",
                        L"GetRootBoneName: TargetMesh has bone attributes set, but they are empty (doesn\'t contain a single bone)"
                       );
    UE::Geometry::AppendError((UGeometryScriptDebug *)**(undefined8 **)this,InvalidInputs,pFVar8);
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
      return;
    }
  }
  else {
    pTVar3 = (pFVar1->BoneParentIndexAttrib).Ptr;
    pFVar4 = (pTVar3->AttribValues).AllocatorInstance.Data;
    for (pFVar10 = pFVar4; pFVar10 != pFVar4 + (longlong)(pTVar3->AttribValues).ArrayNum * 4;
        pFVar10 = pFVar10 + 4) {
      if (*(int *)pFVar10 == -1) {
        uVar9 = (uint)((longlong)pFVar10 - (longlong)pFVar4 >> 2);
        if (uVar9 != 0xffffffff) {
          uVar7 = 0;
          if ((int)uVar9 < (pTVar2->AttribValues).ArrayNum) {
            uVar7 = ~uVar9 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          **(undefined8 **)((longlong)this + 8) =
               *(undefined8 *)
                ((pTVar2->AttribValues).AllocatorInstance.Data + (longlong)(int)uVar9 * 8);
          return;
        }
        break;
      }
    }
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       (&local_28,L"UGeometryScriptLibrary_MeshBoneWeightFunctions",
                        L"GetRootBoneName_TargetMeshHasNoRootBone",
                        L"GetRootBoneName: TargetMesh has no root bone");
    UE::Geometry::AppendError((UGeometryScriptDebug *)**(undefined8 **)this,InvalidInputs,pFVar8);
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
    }
  }
  return;
}

// operator() @ 14cdb3f70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
`UGeometryScriptLibrary_MeshBoneWeightFunctions::GetVertexBoneWeights'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1,
          TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *param_2)

{
  int *piVar1;
  int iVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  float fVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  ForElementType<UE::AnimationCore::FBoneWeight> FVar10;
  ForElementType<UE::AnimationCore::FBoneWeight> _Src;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined1 auStackY_e8 [32];
  undefined8 local_98;
  ForElementType<UE::AnimationCore::FBoneWeight> local_88;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  uVar8 = **(uint **)this;
  if ((-1 < (int)uVar8) &&
     ((int)uVar8 <
      (int)((param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
           (param_1->VertexRefCounts).RefCounts.CurBlockUsed))) {
    if ((ushort)(*(short *)(*(longlong *)
                             ((param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                             (ulonglong)(uVar8 >> 9) * 8) + (ulonglong)(uVar8 & 0x1ff) * 2) - 1U) <
        0xfffe) {
      uVar11 = 0;
      local_50 = 0;
      local_88.SecondaryData = (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
      local_4c = 0xc;
      FVar10 = (ForElementType<UE::AnimationCore::FBoneWeight>)
               (*(longlong *)
                 ((param_2->VertexBoneWeights).Blocks.AllocatorInstance.Data +
                 (ulonglong)(uVar8 >> 9) * 8) + (ulonglong)(uVar8 & 0x1ff) * 0x40);
      if ((ForElementType<UE::AnimationCore::FBoneWeight>)&local_88 != FVar10) {
        iVar2 = *(int *)((longlong)FVar10 + 0x38);
        _Src = *(ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar10 + 0x30);
        if (*(ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar10 + 0x30) ==
            (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
          _Src = FVar10;
        }
        local_50 = iVar2;
        UE::Core::Private::
        ReallocForCopy<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AnimationCore::FBoneWeight>_>
                  (4,2,iVar2,0xc,&local_88,iVar2,&local_4c);
        FVar10 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_88;
        if (local_88.SecondaryData != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
          FVar10 = local_88.SecondaryData;
        }
        if (iVar2 != 0) {
          memcpy((void *)FVar10,(void *)_Src,(longlong)iVar2 << 2);
        }
      }
      iVar2 = local_50;
      TArray<FGeometryScriptBoneWeight,TSizedDefaultAllocator<32>_>::SetNum
                (*(TArray<FGeometryScriptBoneWeight,TSizedDefaultAllocator<32>_> **)
                  ((longlong)this + 8),local_50,Default);
      fVar5 = __real_37800080;
      uVar13 = uVar11;
      if (0 < iVar2) {
        do {
          uVar12 = (uint)uVar13;
          local_98 = 0;
          uVar8 = 0;
          if ((int)uVar12 < local_50) {
            uVar8 = ~uVar12 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return (bool)uVar7;
          }
          FVar10 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_88;
          if (local_88.SecondaryData != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
            FVar10 = local_88.SecondaryData;
          }
          local_98 = CONCAT44(local_98._4_4_,(uint)*(ushort *)((longlong)FVar10 + uVar11 * 4));
          uVar8 = 0;
          if ((int)uVar12 < local_50) {
            uVar8 = ~uVar12 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return (bool)uVar7;
          }
          pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
          FVar10 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_88;
          if (local_88.SecondaryData != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
            FVar10 = local_88.SecondaryData;
          }
          local_98 = CONCAT44((float)*(ushort *)((uchar *)((longlong)FVar10 + 2) + uVar11 * 4) *
                              fVar5,(undefined4)local_98);
          if (((pFVar3->Data <= (FScriptContainerElement *)&local_98) &&
              ((FScriptContainerElement *)&local_98 <
               pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 8)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return (bool)uVar7;
          }
          iVar9 = *(int *)&pFVar3[1].Data;
          piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
          if (iVar9 == *piVar1) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x408,pFVar3,piVar1);
          }
          *(int *)&pFVar3[1].Data = iVar9 + 1;
          uVar11 = uVar11 + 1;
          *(undefined8 *)(pFVar3->Data + (longlong)iVar9 * 8) = local_98;
          uVar13 = (ulonglong)(uVar12 + 1);
        } while ((longlong)uVar11 < (longlong)iVar2);
      }
      if (local_88.SecondaryData != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
        FMemory::Free((void *)local_88.SecondaryData);
      }
    }
  }
  return 0 < *(int *)(*(longlong *)((longlong)this + 8) + 8);
}

// operator() @ 14cdb50e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014cdb59ec) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
`UGeometryScriptLibrary_MeshBoneWeightFunctions::PruneBoneWeights'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  uchar *puVar1;
  FName *pFVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  FName *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  int iVar12;
  FDynamicMeshAttributeSet *pFVar13;
  FText *pFVar14;
  FText *pFVar15;
  FTextFormat *pFVar16;
  TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *pTVar17;
  FDynamicMeshAttributeSet *this_00;
  ulonglong uVar18;
  FName *pFVar19;
  FName *pFVar20;
  ForElementType<UE::AnimationCore::FBoneWeight> FVar21;
  ForElementType<UE::AnimationCore::FBoneWeight> FVar22;
  FScriptContainerElement *pFVar23;
  uint uVar24;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *pTVar25;
  ForAnyElementType FVar26;
  FDynamicMeshAttributeSet *pFVar27;
  uint uVar28;
  short sVar29;
  ulonglong uVar30;
  FDynamicMesh3 *pFVar31;
  ushort uVar32;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar33;
  undefined1 auStackY_2b8 [32];
  FIdentityFunctor local_268;
  undefined1 local_267 [3];
  uint local_264;
  uint local_260;
  FBoneWeight local_25c;
  ForAnyElementType local_258;
  undefined8 local_250;
  FBoneWeight local_248 [2];
  TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *local_240;
  uint local_238;
  FDynamicMesh3 *local_230;
  TArray<int,TSizedDefaultAllocator<32>_> *local_228;
  FBoneWeightsSettings local_220;
  FBoneWeightsSettings local_210;
  FBoneWeightsSettings local_200;
  FBoneWeightsSettings local_1f0;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_1e0;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_1d8;
  FScriptContainerElement *local_1d0;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_1c8;
  FScriptContainerElement *local_1c0;
  FName local_1b8;
  FName local_1b0;
  TArray<int,TSizedDefaultAllocator<32>_> *local_1a8;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_1a0;
  void *local_198;
  FBoneWeight *local_188;
  int iStack_180;
  undefined4 uStack_17c;
  FText local_178;
  FText local_168;
  FText local_158;
  FText local_148;
  FText local_138;
  TArrayView<UE::AnimationCore::FBoneWeight_const_,int> local_128;
  FText local_118;
  FText local_108;
  FTextFormat local_f8;
  FText local_e8;
  FTextFormat local_d8;
  TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  local_c8;
  TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  local_88;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  pFVar27 = (param_1->AttributeSet).Ptr;
  local_230 = param_1;
  local_198 = this;
  if (((pFVar27 == (FDynamicMeshAttributeSet *)0x0) ||
      ((pFVar27->BoneNameAttrib).Ptr ==
       (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0)) ||
     (iVar12 = UE::Geometry::FDynamicMeshAttributeSet::GetNumBones(pFVar27), iVar12 == 0)) {
    pFVar14 = FText::AsLocalizable_Advanced_LocText
                        (&local_118,L"UGeometryScriptLibrary_MeshBoneWeightFunctions",
                         L"PruneBoneWeights_NoBones",L"Target mesh has no bone attribute");
    UE::Geometry::AppendError((UGeometryScriptDebug *)**(undefined8 **)this,InvalidInputs,pFVar14);
    if (local_118.TextData.Reference == (ITextData *)0x0) {
      return;
    }
    (**(code **)((longlong)*local_118.TextData.Reference + 0x10))();
    return;
  }
  bVar11 = ValidateBoneHierarchy(param_1,(UGeometryScriptDebug *)**(undefined8 **)this);
  if (!bVar11) {
    return;
  }
  pFVar27 = (param_1->AttributeSet).Ptr;
  this_00 = (FDynamicMeshAttributeSet *)0x0;
  pFVar13 = this_00;
  pTVar25 = _DAT_00000110;
  if (pFVar27 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar13 = pFVar27;
    pTVar25 = (pFVar27->BoneNameAttrib).Ptr;
  }
  plVar5 = *(longlong **)((longlong)this + 8);
  local_228 = &((pFVar13->BoneParentIndexAttrib).Ptr)->AttribValues;
  local_258.Data = (FScriptContainerElement *)0x0;
  local_250 = 0;
  pFVar20 = (FName *)*plVar5;
  lVar10 = plVar5[1];
  pFVar2 = pFVar20 + (int)lVar10;
  pFVar27 = this_00;
LAB_14cdb51d0:
  do {
    if ((int)plVar5[1] != (int)lVar10) {
      local_267[0] = 0;
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_267);
      pFVar27 = (FDynamicMeshAttributeSet *)(local_250 & 0xffffffff);
    }
    pFVar31 = local_230;
    if (pFVar20 == pFVar2) {
      pFVar27 = (local_230->AttributeSet).Ptr;
      if (pFVar27 != (FDynamicMeshAttributeSet *)0x0) {
        this_00 = pFVar27;
      }
      pTVar17 = UE::Geometry::FDynamicMeshAttributeSet::GetSkinWeightsAttribute
                          (this_00,**(FName **)((longlong)this + 0x18));
      pTVar33 = local_228;
      local_240 = pTVar17;
      if (pTVar17 != (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)0x0) {
        local_1a8 = local_228;
        AlgoImpl::
        StableSortInternal<int,FIdentityFunctor,TDereferenceWrapper<int,__UGeometryScriptLibrary_MeshBoneWeightFunctions::PruneBoneWeights_::__l2::<lambda_1>::operator()_::__l2::<lambda_2>_>_>
                  ((int *)local_258.Data,(uint)local_250,local_268,(<lambda_2> *)&local_1a8);
        uVar18 = (ulonglong)(int)(uint)local_250;
        local_238 = (uint)local_250;
        pFVar23 = local_258.Data + uVar18 * 4;
        FVar26.Data = local_258.Data;
        local_1c0 = pFVar23;
        while( true ) {
          local_1d0 = FVar26.Data;
          if ((uint)local_250 != (int)uVar18) {
            local_268 = (FIdentityFunctor)0x0;
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_268);
          }
          if (FVar26.Data == pFVar23) break;
          uVar3 = *(uint *)FVar26.Data;
          uVar28 = (pFVar31->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                   (pFVar31->VertexRefCounts).RefCounts.CurBlockUsed;
          uVar18 = 0;
          if (((uVar28 != 0) &&
              (pFVar7 = (pFVar31->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
              uVar18 = 0, 0xfffd < (ushort)(**(short **)pFVar7 - 1U))) &&
             (uVar18 = 1, 1 < (int)uVar28)) {
            do {
              sVar29 = *(short *)(*(longlong *)(pFVar7 + (uVar18 >> 9) * 8) +
                                 (ulonglong)((uint)uVar18 & 0x1ff) * 2);
              if ((sVar29 != 0) && (sVar29 != -1)) break;
              uVar24 = (uint)uVar18 + 1;
              uVar18 = (ulonglong)uVar24;
            } while ((int)uVar24 < (int)uVar28);
          }
          local_260 = uVar28;
          if ((uint)uVar18 != uVar28) {
LAB_14cdb55b0:
            uVar30 = (ulonglong)((uint)uVar18 & 0x1ff);
            local_c8.AllocatorInstance.SecondaryData =
                 (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
            local_c8.ArrayNum = 0;
            local_c8.ArrayMax = 0xc;
            FVar21 = (ForElementType<UE::AnimationCore::FBoneWeight>)
                     (*(longlong *)
                       ((pTVar17->VertexBoneWeights).Blocks.AllocatorInstance.Data +
                       (uVar18 >> 9) * 8) + uVar30 * 0x40);
            if ((ForElementType<UE::AnimationCore::FBoneWeight>)&local_c8 != FVar21) {
              iVar12 = *(int *)((longlong)FVar21 + 0x38);
              if (*(ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar21 + 0x30) !=
                  (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
                FVar21 = *(ForElementType<UE::AnimationCore::FBoneWeight> *)
                          ((longlong)FVar21 + 0x30);
              }
              local_c8.ArrayNum = iVar12;
              UE::Core::Private::
              ReallocForCopy<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AnimationCore::FBoneWeight>_>
                        (4,2,iVar12,0xc,&local_c8.AllocatorInstance,iVar12,&local_c8.ArrayMax);
              FVar22 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_c8;
              if (local_c8.AllocatorInstance.SecondaryData !=
                  (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
                FVar22 = local_c8.AllocatorInstance.SecondaryData;
              }
              uVar28 = local_260;
              if (iVar12 != 0) {
                memcpy((void *)FVar22,(void *)FVar21,(longlong)iVar12 << 2);
                uVar28 = local_260;
              }
            }
            FVar21 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_c8;
            if (local_c8.AllocatorInstance.SecondaryData !=
                (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
              FVar21 = local_c8.AllocatorInstance.SecondaryData;
            }
            for (FVar22 = FVar21;
                FVar22 != (ForElementType<UE::AnimationCore::FBoneWeight>)
                          ((longlong)FVar21 + (longlong)local_c8.ArrayNum * 4);
                FVar22 = (ForElementType<UE::AnimationCore::FBoneWeight>)((longlong)FVar22 + 4)) {
              sVar29 = (short)uVar3;
              if (sVar29 == *(short *)FVar22) {
                uVar24 = (uint)((longlong)FVar22 - (longlong)FVar21 >> 2);
                if (uVar24 != 0xffffffff) {
                  uVar28 = 0;
                  if ((int)uVar3 < pTVar33->ArrayNum) {
                    uVar28 = ~uVar3 >> 0x1f;
                  }
                  if ((uVar28 == 0) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar11)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  uVar32 = (ushort)*(undefined4 *)
                                    ((pTVar33->AllocatorInstance).Data + (longlong)(int)uVar3 * 4);
                  if (local_c8.ArrayNum == 1) {
                    local_220.bHasDefaultBoneIndex = false;
                    local_220.bBlendZeroInfluence = true;
                    local_220._14_2_ = 0;
                    local_248[0].RawWeight = 0xffff;
                    local_188 = local_248;
                    local_220.NormalizeType = Always;
                    local_128._12_4_ = uStack_17c;
                    local_128.ArrayNum = 1;
                    local_1a0.Container = &local_88;
                    local_220.MaxWeightCount = 0xc;
                    local_88.AllocatorInstance.SecondaryData =
                         (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
                    local_88.ArrayNum = 0;
                    local_88.ArrayMax = 0xc;
                    local_248[0].BoneIndex = uVar32;
                    local_220._8_4_ = local_c8.ArrayNum;
                    iStack_180 = local_c8.ArrayNum;
                    local_128.DataPtr = local_188;
                    UE::AnimationCore::
                    TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
                    ::
                    SetBoneWeights<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>
                              (&local_1a0,&local_128,&local_220);
                    if (local_88.AllocatorInstance.SecondaryData ==
                        (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
                      local_c8.AllocatorInstance.InlineData[0] =
                           local_88.AllocatorInstance.InlineData[0];
                      local_c8.AllocatorInstance.InlineData[1] =
                           local_88.AllocatorInstance.InlineData[1];
                      local_c8.AllocatorInstance.InlineData[2] =
                           local_88.AllocatorInstance.InlineData[2];
                      local_c8.AllocatorInstance.InlineData[3] =
                           local_88.AllocatorInstance.InlineData[3];
                      local_c8.AllocatorInstance.InlineData[4] =
                           local_88.AllocatorInstance.InlineData[4];
                      local_c8.AllocatorInstance.InlineData[5] =
                           local_88.AllocatorInstance.InlineData[5];
                      local_c8.AllocatorInstance.InlineData[6] =
                           local_88.AllocatorInstance.InlineData[6];
                      local_c8.AllocatorInstance.InlineData[7] =
                           local_88.AllocatorInstance.InlineData[7];
                      local_c8.AllocatorInstance.InlineData[8] =
                           local_88.AllocatorInstance.InlineData[8];
                      local_c8.AllocatorInstance.InlineData[9] =
                           local_88.AllocatorInstance.InlineData[9];
                      local_c8.AllocatorInstance.InlineData[10] =
                           local_88.AllocatorInstance.InlineData[10];
                      local_c8.AllocatorInstance.InlineData[0xb] =
                           local_88.AllocatorInstance.InlineData[0xb];
                      local_c8.AllocatorInstance.InlineData[0xc] =
                           local_88.AllocatorInstance.InlineData[0xc];
                      local_c8.AllocatorInstance.InlineData[0xd] =
                           local_88.AllocatorInstance.InlineData[0xd];
                      local_c8.AllocatorInstance.InlineData[0xe] =
                           local_88.AllocatorInstance.InlineData[0xe];
                      local_c8.AllocatorInstance.InlineData[0xf] =
                           local_88.AllocatorInstance.InlineData[0xf];
                      local_c8.AllocatorInstance.InlineData[0x20] =
                           local_88.AllocatorInstance.InlineData[0x20];
                      local_c8.AllocatorInstance.InlineData[0x21] =
                           local_88.AllocatorInstance.InlineData[0x21];
                      local_c8.AllocatorInstance.InlineData[0x22] =
                           local_88.AllocatorInstance.InlineData[0x22];
                      local_c8.AllocatorInstance.InlineData[0x23] =
                           local_88.AllocatorInstance.InlineData[0x23];
                      local_c8.AllocatorInstance.InlineData[0x24] =
                           local_88.AllocatorInstance.InlineData[0x24];
                      local_c8.AllocatorInstance.InlineData[0x25] =
                           local_88.AllocatorInstance.InlineData[0x25];
                      local_c8.AllocatorInstance.InlineData[0x26] =
                           local_88.AllocatorInstance.InlineData[0x26];
                      local_c8.AllocatorInstance.InlineData[0x27] =
                           local_88.AllocatorInstance.InlineData[0x27];
                      local_c8.AllocatorInstance.InlineData[0x28] =
                           local_88.AllocatorInstance.InlineData[0x28];
                      local_c8.AllocatorInstance.InlineData[0x29] =
                           local_88.AllocatorInstance.InlineData[0x29];
                      local_c8.AllocatorInstance.InlineData[0x2a] =
                           local_88.AllocatorInstance.InlineData[0x2a];
                      local_c8.AllocatorInstance.InlineData[0x2b] =
                           local_88.AllocatorInstance.InlineData[0x2b];
                      local_c8.AllocatorInstance.InlineData[0x2c] =
                           local_88.AllocatorInstance.InlineData[0x2c];
                      local_c8.AllocatorInstance.InlineData[0x2d] =
                           local_88.AllocatorInstance.InlineData[0x2d];
                      local_c8.AllocatorInstance.InlineData[0x2e] =
                           local_88.AllocatorInstance.InlineData[0x2e];
                      local_c8.AllocatorInstance.InlineData[0x2f] =
                           local_88.AllocatorInstance.InlineData[0x2f];
                      local_c8.AllocatorInstance.InlineData[0x10] =
                           local_88.AllocatorInstance.InlineData[0x10];
                      local_c8.AllocatorInstance.InlineData[0x11] =
                           local_88.AllocatorInstance.InlineData[0x11];
                      local_c8.AllocatorInstance.InlineData[0x12] =
                           local_88.AllocatorInstance.InlineData[0x12];
                      local_c8.AllocatorInstance.InlineData[0x13] =
                           local_88.AllocatorInstance.InlineData[0x13];
                      local_c8.AllocatorInstance.InlineData[0x14] =
                           local_88.AllocatorInstance.InlineData[0x14];
                      local_c8.AllocatorInstance.InlineData[0x15] =
                           local_88.AllocatorInstance.InlineData[0x15];
                      local_c8.AllocatorInstance.InlineData[0x16] =
                           local_88.AllocatorInstance.InlineData[0x16];
                      local_c8.AllocatorInstance.InlineData[0x17] =
                           local_88.AllocatorInstance.InlineData[0x17];
                      local_c8.AllocatorInstance.InlineData[0x18] =
                           local_88.AllocatorInstance.InlineData[0x18];
                      local_c8.AllocatorInstance.InlineData[0x19] =
                           local_88.AllocatorInstance.InlineData[0x19];
                      local_c8.AllocatorInstance.InlineData[0x1a] =
                           local_88.AllocatorInstance.InlineData[0x1a];
                      local_c8.AllocatorInstance.InlineData[0x1b] =
                           local_88.AllocatorInstance.InlineData[0x1b];
                      local_c8.AllocatorInstance.InlineData[0x1c] =
                           local_88.AllocatorInstance.InlineData[0x1c];
                      local_c8.AllocatorInstance.InlineData[0x1d] =
                           local_88.AllocatorInstance.InlineData[0x1d];
                      local_c8.AllocatorInstance.InlineData[0x1e] =
                           local_88.AllocatorInstance.InlineData[0x1e];
                      local_c8.AllocatorInstance.InlineData[0x1f] =
                           local_88.AllocatorInstance.InlineData[0x1f];
                    }
                    FVar21 = local_88.AllocatorInstance.SecondaryData;
                    if (local_c8.AllocatorInstance.SecondaryData !=
                        (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
                      FMemory::Free((void *)local_c8.AllocatorInstance.SecondaryData);
                      FVar21 = local_88.AllocatorInstance.SecondaryData;
                    }
                    local_c8.ArrayNum = local_88.ArrayNum;
                    local_88.AllocatorInstance.SecondaryData =
                         (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
                    local_88.ArrayNum = 0;
                    local_c8.ArrayMax = local_88.ArrayMax;
                    local_88.ArrayMax = 0xc;
                    local_c8.AllocatorInstance.SecondaryData = FVar21;
                    goto LAB_14cdb5af5;
                  }
                  if (**(char **)((longlong)local_198 + 0x10) == '\0') {
                    local_1e0.Container = &local_c8;
                    local_210.bHasDefaultBoneIndex = false;
                    local_210.bBlendZeroInfluence = true;
                    local_210._14_2_ = 0;
                    FVar21 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_c8;
                    if (local_c8.AllocatorInstance.SecondaryData !=
                        (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
                      FVar21 = local_c8.AllocatorInstance.SecondaryData;
                    }
                    local_210.NormalizeType = Always;
                    local_210.MaxWeightCount = 0xc;
                    local_210.WeightThreshold = 1;
                    local_210.DefaultBoneIndex = 0;
                    FVar22 = FVar21;
                    goto joined_r0x00014cdb5896;
                  }
                  if (**(char **)((longlong)local_198 + 0x10) != '\x01') goto LAB_14cdb5af5;
                  local_200.MaxWeightCount = 0xc;
                  local_200.WeightThreshold = 1;
                  local_200.DefaultBoneIndex = 0;
                  local_200.bHasDefaultBoneIndex = false;
                  local_200.bBlendZeroInfluence = true;
                  local_200.NormalizeType = None;
                  uVar28 = 0;
                  if ((int)uVar24 < local_c8.ArrayNum) {
                    uVar28 = ~uVar24 >> 0x1f;
                  }
                  if ((uVar28 == 0) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar11)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  FVar21 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_c8;
                  if (local_c8.AllocatorInstance.SecondaryData !=
                      (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
                    FVar21 = local_c8.AllocatorInstance.SecondaryData;
                  }
                  local_25c = *(FBoneWeight *)((longlong)FVar21 + (longlong)(int)uVar24 * 4);
                  local_1d8.Container = &local_c8;
                  FVar22 = FVar21;
                  goto joined_r0x00014cdb59a9;
                }
                break;
              }
            }
            if (local_c8.AllocatorInstance.SecondaryData !=
                (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
              FMemory::Free((void *)local_c8.AllocatorInstance.SecondaryData);
              uVar28 = local_260;
            }
            goto LAB_14cdb5ba7;
          }
LAB_14cdb5c22:
          uVar18 = (ulonglong)local_238;
          FVar26.Data = local_1d0 + 4;
        }
        goto LAB_14cdb5342;
      }
      local_1b0 = **(FName **)((longlong)this + 0x18);
      pFVar14 = FText::FromName(&local_e8,&local_1b0);
      pFVar15 = FText::AsLocalizable_Advanced_LocText
                          (&local_138,L"UGeometryScriptLibrary_MeshBoneWeightFunctions",
                           L"PruneBoneWeights_UnknownProfile",L"Unknown skin weight profile \'{0}\'"
                          );
      pFVar16 = FTextFormat::FTextFormat(&local_d8,pFVar15,Default);
      pFVar14 = FText::Format<FText>(&local_148,pFVar16,pFVar14);
      UE::Geometry::AppendWarning
                ((UGeometryScriptDebug *)**(undefined8 **)this,InvalidInputs,pFVar14);
      local_178.TextData.Reference = local_138.TextData.Reference;
      if (local_148.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_148.TextData.Reference + 0x10))();
        local_178.TextData.Reference = local_138.TextData.Reference;
      }
      goto LAB_14cdb5337;
    }
    pFVar6 = (FName *)(pTVar25->AttribValues).AllocatorInstance.Data;
    local_1b8 = *pFVar20;
    for (pFVar19 = pFVar6; pFVar19 != pFVar6 + (pTVar25->AttribValues).ArrayNum;
        pFVar19 = pFVar19 + 1) {
      if (*pFVar19 == local_1b8) {
        local_264 = (uint)((longlong)pFVar19 - (longlong)pFVar6 >> 3);
        if ((int)local_264 < 1) goto LAB_14cdb5227;
        iVar12 = (int)pFVar27;
        if ((local_258.Data <= (FScriptContainerElement *)&local_264) &&
           ((FScriptContainerElement *)&local_264 < local_258.Data + (longlong)local_250._4_4_ * 4))
        {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar11) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar12 = (uint)local_250;
        }
        if (iVar12 == local_250._4_4_) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_258,(int *)((longlong)&local_250 + 4));
        }
        local_250 = CONCAT44(local_250._4_4_,iVar12 + 1U);
        pFVar20 = pFVar20 + 1;
        *(uint *)(local_258.Data + (longlong)iVar12 * 4) = local_264;
        pFVar27 = (FDynamicMeshAttributeSet *)(ulonglong)(iVar12 + 1U);
        goto LAB_14cdb51d0;
      }
    }
    local_264 = 0xffffffff;
LAB_14cdb5227:
    if (*(char *)(*(longlong *)((longlong)this + 0x10) + 1) == '\0') {
      if (local_264 == 0) {
        pFVar14 = FText::AsLocalizable_Advanced_LocText
                            (&local_178,L"UGeometryScriptLibrary_MeshBoneWeightFunctions",
                             L"PruneBoneWeights_RootBoneInvalid",
                             L"Pruning the root bone is not allowed");
        UE::Geometry::AppendError
                  ((UGeometryScriptDebug *)**(undefined8 **)this,InvalidInputs,pFVar14);
      }
      else {
        pFVar14 = FText::FromName(&local_108,&local_1b8);
        pFVar15 = FText::AsLocalizable_Advanced_LocText
                            (&local_158,L"UGeometryScriptLibrary_MeshBoneWeightFunctions",
                             L"PruneBoneWeights_InvalidBone",L"Invalid bone \'{0}\'");
        pFVar16 = FTextFormat::FTextFormat(&local_f8,pFVar15,Default);
        pFVar14 = FText::Format<FText>(&local_168,pFVar16,pFVar14);
        UE::Geometry::AppendError
                  ((UGeometryScriptDebug *)**(undefined8 **)this,InvalidInputs,pFVar14);
        local_178.TextData.Reference = local_158.TextData.Reference;
        if (local_168.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_168.TextData.Reference + 0x10))();
          local_178.TextData.Reference = local_158.TextData.Reference;
        }
      }
LAB_14cdb5337:
      if (local_178.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_178.TextData.Reference + 0x10))();
      }
LAB_14cdb5342:
      if (local_258.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_258.Data);
      }
      return;
    }
    pFVar20 = pFVar20 + 1;
  } while( true );
joined_r0x00014cdb5896:
  if (FVar22 == (ForElementType<UE::AnimationCore::FBoneWeight>)
                ((longlong)FVar21 + (longlong)local_c8.ArrayNum * 4)) goto LAB_14cdb5af5;
  if (sVar29 == *(short *)FVar22) {
    iVar12 = (int)((longlong)FVar22 - (longlong)FVar21 >> 2);
    if (iVar12 != -1) {
      UE::AnimationCore::FBoneWeights::
      TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>
      ::Remove(&local_c8,iVar12);
      UE::AnimationCore::
      TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
      ::CullWeights(&local_1e0,&local_210);
      UE::AnimationCore::
      TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
      ::NormalizeWeights(&local_1e0,Always);
    }
    goto LAB_14cdb5af5;
  }
  FVar22 = (ForElementType<UE::AnimationCore::FBoneWeight>)((longlong)FVar22 + 4);
  goto joined_r0x00014cdb5896;
joined_r0x00014cdb59a9:
  if (FVar22 == (ForElementType<UE::AnimationCore::FBoneWeight>)
                ((longlong)FVar21 + (longlong)local_c8.ArrayNum * 4)) goto LAB_14cdb5a05;
  if (sVar29 == *(short *)FVar22) {
    iVar12 = (int)((longlong)FVar22 - (longlong)FVar21 >> 2);
    if (iVar12 != -1) {
      UE::AnimationCore::FBoneWeights::
      TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>
      ::Remove(&local_c8,iVar12);
      UE::AnimationCore::
      TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
      ::CullWeights(&local_1d8,&local_200);
    }
    goto LAB_14cdb5a05;
  }
  FVar22 = (ForElementType<UE::AnimationCore::FBoneWeight>)((longlong)FVar22 + 4);
  goto joined_r0x00014cdb59a9;
LAB_14cdb5a05:
  FVar21 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_c8;
  if (local_c8.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
    FVar21 = local_c8.AllocatorInstance.SecondaryData;
  }
  for (FVar22 = FVar21;
      FVar22 != (ForElementType<UE::AnimationCore::FBoneWeight>)
                ((longlong)FVar21 + (longlong)local_c8.ArrayNum * 4);
      FVar22 = (ForElementType<UE::AnimationCore::FBoneWeight>)((longlong)FVar22 + 4)) {
    if (uVar32 == *(ushort *)FVar22) {
      uVar28 = (uint)((longlong)FVar22 - (longlong)FVar21 >> 2);
      if (uVar28 != 0xffffffff) {
        uVar24 = 0;
        if ((int)uVar28 < local_c8.ArrayNum) {
          uVar24 = ~uVar28 >> 0x1f;
        }
        if ((uVar24 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        FVar21 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_c8;
        if (local_c8.AllocatorInstance.SecondaryData !=
            (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
          FVar21 = local_c8.AllocatorInstance.SecondaryData;
        }
        local_25c = (FBoneWeight)
                    ((uint)(ushort)(local_25c.RawWeight +
                                   *(short *)((uchar *)((longlong)FVar21 + 2) +
                                             (longlong)(int)uVar28 * 4)) << 0x10);
      }
      break;
    }
  }
  local_1c8.Container = &local_c8;
  local_25c.BoneIndex = uVar32;
  local_1f0.bHasDefaultBoneIndex = false;
  local_1f0.bBlendZeroInfluence = true;
  local_1f0._14_2_ = 0;
  local_1f0.NormalizeType = Always;
  local_1f0.MaxWeightCount = 0xc;
  local_1f0.WeightThreshold = 1;
  local_1f0.DefaultBoneIndex = 0;
  UE::AnimationCore::
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  ::
  AddBoneWeight<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>
            (&local_1c8,local_25c,&local_1f0);
LAB_14cdb5af5:
  iVar12 = local_c8.ArrayNum;
  FVar21 = (ForElementType<UE::AnimationCore::FBoneWeight>)
           (*(longlong *)
             ((local_240->VertexBoneWeights).Blocks.AllocatorInstance.Data + (uVar18 >> 9) * 8) +
           uVar30 * 0x40);
  if (FVar21 != (ForElementType<UE::AnimationCore::FBoneWeight>)&local_c8) {
    iVar4 = *(int *)((longlong)FVar21 + 0x3c);
    *(int *)((ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar21 + 0x38))->
            InlineData = local_c8.ArrayNum;
    puVar1 = (uchar *)((longlong)FVar21 + 0x3c);
    FVar22 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_c8;
    if (local_c8.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
      FVar22 = local_c8.AllocatorInstance.SecondaryData;
    }
    if ((local_c8.ArrayNum == 0) && (iVar4 == 0)) {
      puVar1[0] = '\f';
      puVar1[1] = '\0';
      puVar1[2] = '\0';
      puVar1[3] = '\0';
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AnimationCore::FBoneWeight>_>
                (4,2,local_c8.ArrayNum,iVar4,
                 (ForElementType<UE::AnimationCore::FBoneWeight> *)FVar21,local_c8.ArrayNum,
                 (int *)puVar1);
      if (*(ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar21 + 0x30) !=
          (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
        FVar21 = *(ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar21 + 0x30);
      }
      if (iVar12 != 0) {
        memcpy((void *)FVar21,(void *)FVar22,(longlong)iVar12 << 2);
      }
    }
  }
  pFVar31 = local_230;
  pTVar33 = local_228;
  uVar28 = local_260;
  if (local_c8.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
    FMemory::Free((void *)local_c8.AllocatorInstance.SecondaryData);
    pFVar31 = local_230;
    pTVar33 = local_228;
    uVar28 = local_260;
  }
LAB_14cdb5ba7:
  uVar24 = (uint)uVar18 + 1;
  uVar18 = (ulonglong)uVar24;
  pTVar17 = local_240;
  if ((int)uVar24 < (int)uVar28) {
    do {
      lVar9 = (ulonglong)((uint)uVar18 & 0x1ff) * 2;
      lVar10 = *(longlong *)
                ((pFVar31->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                (uVar18 >> 9) * 8);
      if ((*(short *)(lVar9 + lVar10) != 0) && (*(short *)(lVar9 + lVar10) != -1))
      goto LAB_14cdb55b0;
      uVar24 = (uint)uVar18 + 1;
      uVar18 = (ulonglong)uVar24;
    } while ((int)uVar24 < (int)uVar28);
  }
  pFVar23 = local_1c0;
  if (uVar24 != uVar28) goto LAB_14cdb55b0;
  goto LAB_14cdb5c22;
}

// operator() @ 14cdb6750

bool __thiscall
`UGeometryScriptLibrary_MeshBoneWeightFunctions::SetAllVertexBoneWeights'::__l2::<lambda_1>::
operator()(void *this,FDynamicMesh3 *param_1,
          TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *param_2)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  
  uVar5 = 0;
  uVar6 = (param_1->VertexRefCounts).RefCounts.CurBlockUsed +
          (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200;
  if ((uVar6 != 0) &&
     (pFVar2 = (param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
     0xfffd < (ushort)(**(short **)pFVar2 - 1U))) {
    uVar5 = 1;
    uVar4 = 1;
    if ((int)uVar6 < 2) goto joined_r0x00014cdb67e7;
    do {
      lVar1 = (ulonglong)((uint)uVar5 & 0x1ff) * 2;
      if ((*(short *)(lVar1 + *(longlong *)(pFVar2 + (uVar5 >> 9) * 8)) != 0) &&
         (*(short *)(lVar1 + *(longlong *)(pFVar2 + (uVar5 >> 9) * 8)) != -1)) break;
      uVar4 = (uint)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
    } while ((int)uVar4 < (int)uVar6);
  }
  uVar4 = (uint)uVar5;
joined_r0x00014cdb67e7:
  do {
    if (uVar4 == uVar6) {
      return true;
    }
    while( true ) {
      UE::AnimationCore::FBoneWeights::operator=
                ((FBoneWeights *)
                 ((ulonglong)((uint)uVar5 & 0x1ff) * 0x40 +
                 *(longlong *)
                  ((param_2->VertexBoneWeights).Blocks.AllocatorInstance.Data + (uVar5 >> 9) * 8)),
                 *(FBoneWeights **)this);
      uVar4 = (uint)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
      if ((int)uVar6 <= (int)uVar4) break;
      pFVar2 = (param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
      while( true ) {
        lVar1 = (uVar5 >> 9) * 8;
        lVar3 = (ulonglong)((uint)uVar5 & 0x1ff) * 2;
        if ((*(short *)(lVar3 + *(longlong *)(pFVar2 + lVar1)) != 0) &&
           (*(short *)(lVar3 + *(longlong *)(pFVar2 + lVar1)) != -1)) break;
        uVar4 = (uint)uVar5 + 1;
        uVar5 = (ulonglong)uVar4;
        if ((int)uVar6 <= (int)uVar4) goto joined_r0x00014cdb67e7;
      }
    }
  } while( true );
}

// operator() @ 14cdb6a80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`UGeometryScriptLibrary_MeshBoneWeightFunctions::SetVertexBoneWeights'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1,
          TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *pTVar9;
  bool bVar10;
  undefined1 uVar11;
  uint uVar12;
  FText *pFVar13;
  int iVar14;
  longlong lVar15;
  ForElementType<UE::AnimationCore::FBoneWeight> _Dst;
  uint uVar16;
  ForElementType<UE::AnimationCore::FBoneWeight> _Src;
  uint uVar17;
  ForElementType<UE::AnimationCore::FBoneWeight> FVar18;
  longlong lVar19;
  float fVar20;
  undefined1 auStackY_188 [32];
  FBoneWeight local_138 [2];
  ForAnyElementType local_130;
  int local_128;
  int iStack_124;
  FBoneWeightsSettings local_120;
  TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *local_110;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_108 [2];
  FBoneWeight *local_f8;
  int iStack_f0;
  undefined4 uStack_ec;
  FText local_e8;
  TArrayView<UE::AnimationCore::FBoneWeight_const_,int> local_d8;
  TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  local_c8;
  ulonglong local_88;
  
  fVar8 = __real_477fff00;
  fVar7 = __real_3f000000;
  fVar6 = __real_3f800000;
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_188;
  uVar17 = **(uint **)this;
  if ((((int)uVar17 < 0) ||
      ((int)((param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
            (param_1->VertexRefCounts).RefCounts.CurBlockUsed) <= (int)uVar17)) ||
     (0xfffd < (ushort)(*(short *)(*(longlong *)
                                    ((param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.
                                     Data + (ulonglong)(uVar17 >> 9) * 8) +
                                  (ulonglong)(uVar17 & 0x1ff) * 2) - 1U))) {
    bVar10 = false;
  }
  else {
    uVar17 = 0;
    iVar2 = *(int *)(*(longlong *)((longlong)this + 8) + 8);
    local_130.Data = (FScriptContainerElement *)0x0;
    local_128 = 0;
    iStack_124 = 0;
    local_110 = param_2;
    if (0 < iVar2) {
      lVar19 = 0;
      do {
        plVar3 = *(longlong **)((longlong)this + 8);
        uVar16 = ~uVar17 >> 0x1f;
        uVar12 = 0;
        if ((int)uVar17 < (int)plVar3[1]) {
          uVar12 = uVar16;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          uVar11 = (*pcVar5)();
          return (bool)uVar11;
        }
        if (*(int *)(*plVar3 + lVar19 * 8) < 0) {
          pFVar13 = FText::AsLocalizable_Advanced_LocText
                              (&local_e8,L"UGeometryScriptLibrary_MeshBoneWeightFunctions",
                               L"SetVertexBoneWeights_InvalidInput",
                               L"SetVertexBoneWeights: Invalid bone index provided; falling back to 0 as bone index."
                              );
          UE::Geometry::AppendWarning
                    ((UGeometryScriptDebug *)**(undefined8 **)((longlong)this + 0x10),InvalidInputs,
                     pFVar13);
          if (local_e8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
          }
        }
        plVar3 = *(longlong **)((longlong)this + 8);
        uVar12 = 0;
        if ((int)uVar17 < (int)plVar3[1]) {
          uVar12 = uVar16;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          uVar11 = (*pcVar5)();
          return (bool)uVar11;
        }
        plVar4 = *(longlong **)((longlong)this + 8);
        iVar14 = *(int *)(*plVar3 + lVar19 * 8);
        if (iVar14 < 0) {
          iVar14 = 0;
        }
        local_138[0].BoneIndex = (ushort)iVar14;
        uVar12 = 0;
        if ((int)uVar17 < (int)plVar4[1]) {
          uVar12 = uVar16;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          uVar11 = (*pcVar5)();
          return (bool)uVar11;
        }
        fVar20 = *(float *)(*plVar4 + 4 + lVar19 * 8);
        if (fVar6 <= fVar20) {
          fVar20 = fVar6;
        }
        if (fVar20 <= 0.0) {
          fVar20 = 0.0;
        }
        local_138[0].RawWeight = (ushort)(int)(fVar20 * fVar8 + fVar7);
        if (((local_130.Data <= local_138) &&
            (local_138 < (FBoneWeight *)(local_130.Data + (longlong)iStack_124 * 4))) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          uVar11 = (*pcVar5)();
          return (bool)uVar11;
        }
        if (local_128 == iStack_124) {
          local_128 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x204,&local_130,&iStack_124);
        }
        lVar15 = (longlong)local_128;
        uVar17 = uVar17 + 1;
        lVar19 = lVar19 + 1;
        local_128 = local_128 + 1;
        *(FBoneWeight *)(local_130.Data + lVar15 * 4) = local_138[0];
      } while (lVar19 < iVar2);
    }
    pTVar9 = local_110;
    iVar2 = local_128;
    local_f8 = (FBoneWeight *)local_130.Data;
    local_120.bHasDefaultBoneIndex = false;
    local_120.bBlendZeroInfluence = true;
    local_120._14_2_ = 0;
    local_120.NormalizeType = Always;
    local_120.MaxWeightCount = 0xc;
    local_120.WeightThreshold = 1;
    local_120.DefaultBoneIndex = 0;
    if ((local_128 < 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      uVar11 = (*pcVar5)();
      return (bool)uVar11;
    }
    local_108[0].Container = &local_c8;
    iStack_f0 = iVar2;
    local_d8._12_4_ = uStack_ec;
    local_d8.ArrayNum = iVar2;
    local_d8.DataPtr = local_f8;
    local_c8.AllocatorInstance.SecondaryData = (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
    local_c8.ArrayNum = 0;
    local_c8.ArrayMax = 0xc;
    UE::AnimationCore::
    TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
    ::
    SetBoneWeights<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>
              (local_108,&local_d8,&local_120);
    iVar2 = local_c8.ArrayNum;
    FVar18 = (ForElementType<UE::AnimationCore::FBoneWeight>)
             (*(longlong *)
               ((pTVar9->VertexBoneWeights).Blocks.AllocatorInstance.Data +
               (ulonglong)(**(uint **)this >> 9) * 8) + (ulonglong)(**(uint **)this & 0x1ff) * 0x40)
    ;
    if (FVar18 != (ForElementType<UE::AnimationCore::FBoneWeight>)&local_c8) {
      lVar19 = (longlong)local_c8.ArrayNum;
      piVar1 = (int *)((longlong)FVar18 + 0x3c);
      *(int *)((longlong)FVar18 + 0x38) = local_c8.ArrayNum;
      _Src = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_c8;
      if (local_c8.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
        _Src = local_c8.AllocatorInstance.SecondaryData;
      }
      if ((local_c8.ArrayNum == 0) && (*piVar1 == 0)) {
        *piVar1 = 0xc;
      }
      else {
        UE::Core::Private::
        ReallocForCopy<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AnimationCore::FBoneWeight>_>
                  (4,2,local_c8.ArrayNum,*piVar1,
                   (ForElementType<UE::AnimationCore::FBoneWeight> *)FVar18,local_c8.ArrayNum,piVar1
                  );
        if (iVar2 != 0) {
          _Dst = *(ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar18 + 0x30);
          if (*(ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar18 + 0x30) ==
              (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
            _Dst = FVar18;
          }
          memcpy((void *)_Dst,(void *)_Src,lVar19 << 2);
        }
      }
    }
    if (local_c8.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
      FMemory::Free((void *)local_c8.AllocatorInstance.SecondaryData);
    }
    if ((FBoneWeight *)local_130.Data != (FBoneWeight *)0x0) {
      FMemory::Free(local_130.Data);
    }
    bVar10 = true;
  }
  return bVar10;
}

// operator() @ 14cdb7680

void __thiscall
`UGeometryScriptLibrary_MeshBoneWeightFunctions::TransferBoneWeightsFromMesh'::__l2::<lambda_1>::
operator()(void *this,FDynamicMesh3 *param_1)

{
  FDynamicMeshAttributeSet *this_00;
  int iVar1;
  FText *pFVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  FName local_res10 [3];
  undefined1 local_148 [16];
  undefined8 local_138;
  FTransferBoneWeights *local_130;
  ETransferBoneWeightsMethod *local_128;
  FDynamicMesh3 *local_120;
  undefined8 local_118;
  FTransferBoneWeights local_108;
  
  this_00 = (param_1->AttributeSet).Ptr;
  if ((this_00 == (FDynamicMeshAttributeSet *)0x0) ||
     ((this_00->BoneNameAttrib).Ptr ==
      (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0)) {
    pwVar4 = L"Source Mesh has no bone attribute";
    pwVar3 = L"TransferBoneWeightsFromMesh_NoBones";
  }
  else {
    iVar1 = UE::Geometry::FDynamicMeshAttributeSet::GetNumBones(this_00);
    if (iVar1 != 0) {
      local_res10[0] = *(FName *)(*(longlong *)((longlong)this + 8) + 4);
      UE::Geometry::FTransferBoneWeights::FTransferBoneWeights
                (&local_108,param_1,local_res10,(TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0);
      local_128 = *(ETransferBoneWeightsMethod **)((longlong)this + 8);
      local_108.TransferMethod = *local_128;
      local_108.bUseParallel = true;
      local_138 = *(undefined8 *)((longlong)this + 0x18);
      local_130 = &local_108;
      local_118 = *(undefined8 *)this;
      local_148._8_8_ = &local_138;
      local_148._0_8_ =
           UE::Core::Private::Function::
           TFunctionRefCaller<``UGeometryScriptLibrary_MeshBoneWeightFunctions::TransferBoneWeightsFromMesh'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
           ::Call;
      local_120 = param_1;
      UDynamicMesh::EditMesh
                ((UDynamicMesh *)**(undefined8 **)((longlong)this + 0x10),
                 (TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_148,
                 AttributeEdit,Unknown,false);
      UE::Geometry::FTransferBoneWeights::~FTransferBoneWeights(&local_108);
      return;
    }
    pwVar4 = L"Source Mesh has an empty bone attribute";
    pwVar3 = L"TransferBoneWeightsFromMesh_EmptyBones";
  }
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)local_148,L"UGeometryScriptLibrary_MeshBoneWeightFunctions",pwVar3,
                      pwVar4);
  UE::Geometry::AppendError((UGeometryScriptDebug *)**(undefined8 **)this,InvalidInputs,pFVar2);
  if ((ITextData *)local_148._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_148._0_8_ + 0x10))();
  }
  return;
}

// operator() @ 14cdb8580

void __thiscall
`UGeometryScriptLibrary_MeshBoneWeightFunctions::MeshCopyBoneWeights'::__l5::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  FDynamicMeshAttributeSet *pFVar1;
  TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *pTVar2;
  TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *pTVar3;
  FDynamicMeshAttributeSet *this_00;
  
  pFVar1 = (param_1->AttributeSet).Ptr;
  if (pFVar1 != (FDynamicMeshAttributeSet *)0x0) {
    pTVar2 = UE::Geometry::FDynamicMeshAttributeSet::GetSkinWeightsAttribute
                       (pFVar1,**(FName **)this);
    pFVar1 = (param_1->AttributeSet).Ptr;
    this_00 = (FDynamicMeshAttributeSet *)0x0;
    if (pFVar1 != (FDynamicMeshAttributeSet *)0x0) {
      this_00 = pFVar1;
    }
    pTVar3 = UE::Geometry::FDynamicMeshAttributeSet::GetSkinWeightsAttribute
                       (this_00,**(FName **)((longlong)this + 8));
    if ((pTVar2 != (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)0x0) &&
       (pTVar3 != (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)0x0)) {
      pTVar3->_padding_ = pTVar2->_padding_;
      UE::Geometry::TDynamicVector<UE::AnimationCore::FBoneWeights,512>::operator=
                (&pTVar3->VertexBoneWeights,&pTVar2->VertexBoneWeights);
    }
  }
  return;
}

// operator() @ 14cdb8600

void __thiscall
`UGeometryScriptLibrary_MeshBoneWeightFunctions::MeshCreateBoneWeights'::__l5::<lambda_1>::
operator()(void *this,FDynamicMesh3 *param_1)

{
  TDynamicVector<UE::AnimationCore::FBoneWeights,512> *this_00;
  TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *pTVar1;
  FDynamicMeshAttributeSet *pFVar2;
  FDynamicMeshAttributeSet *this_01;
  FDynamicMeshAttributeSet *pFVar3;
  FBoneWeights local_48;
  
  if ((param_1->AttributeSet).Ptr == (FDynamicMeshAttributeSet *)0x0) {
    UE::Geometry::FDynamicMesh3::EnableAttributes(param_1);
  }
  pFVar3 = (param_1->AttributeSet).Ptr;
  this_01 = (FDynamicMeshAttributeSet *)0x0;
  pFVar2 = this_01;
  if (pFVar3 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar2 = pFVar3;
  }
  pTVar1 = UE::Geometry::FDynamicMeshAttributeSet::GetSkinWeightsAttribute(pFVar2,**(FName **)this);
  *(bool *)*(undefined8 *)((longlong)this + 8) =
       pTVar1 != (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)0x0;
  if (pTVar1 == (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)0x0) {
    if (**(char **)((longlong)this + 0x10) == '\0') goto LAB_14cdb868b;
  }
  else if (**(char **)((longlong)this + 0x10) == '\0') {
    return;
  }
  if (**(char **)((longlong)this + 8) != '\0') {
    pFVar3 = (param_1->AttributeSet).Ptr;
    pFVar2 = this_01;
    if (pFVar3 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar2 = pFVar3;
    }
    UE::Geometry::FDynamicMeshAttributeSet::RemoveSkinWeightsAttribute(pFVar2,**(FName **)this);
  }
LAB_14cdb868b:
  pFVar2 = ::operator_new(0x30);
  pFVar3 = this_01;
  if (pFVar2 != (FDynamicMeshAttributeSet *)0x0) {
    this_00 = (TDynamicVector<UE::AnimationCore::FBoneWeights,512> *)&pFVar2->ParentMesh;
    pFVar2->_padding_ = 0;
    pFVar2->_padding_ = (longlong)param_1;
    pFVar2->_padding_ =
         (longlong)
         &___7__TDynamicVertexSkinWeightsAttribute_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
    this_00->CurBlock = 0;
    this_00->CurBlockUsed = 0;
    (((TArray<UE::Geometry::TDynamicVector<UE::AnimationCore::FBoneWeights,512>::TBlock_*,TSizedDefaultAllocator<32>_>
       *)&pFVar2->UVLayers)->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (pFVar2->UVLayers).Array.ArrayNum = 0;
    (pFVar2->UVLayers).Array.ArrayMax = 0;
    UE::Geometry::TDynamicVector<UE::AnimationCore::FBoneWeights,512>::AddAllocatedBlock(this_00);
    local_48.BoneWeights.AllocatorInstance.InlineData[0] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[1] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[2] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[3] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[4] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[5] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[6] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[7] = '\0';
    local_48.BoneWeights.ArrayNum = 0;
    local_48.BoneWeights.ArrayMax = 0xc;
    local_48.BoneWeights.AllocatorInstance.InlineData[8] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[9] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[10] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0xb] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0xc] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0xd] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0xe] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0xf] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x10] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x11] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x12] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x13] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x14] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x15] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x16] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x17] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x18] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x19] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x1a] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x1b] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x1c] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x1d] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x1e] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x1f] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x20] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x21] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x22] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x23] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x24] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x25] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x26] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x27] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x28] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x29] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x2a] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x2b] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x2c] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x2d] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x2e] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x2f] = '\0';
    local_48.BoneWeights.AllocatorInstance.SecondaryData =
         (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
    UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>::Initialize
              ((TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)pFVar2,&local_48);
    pFVar3 = pFVar2;
  }
  pFVar2 = (param_1->AttributeSet).Ptr;
  if (pFVar2 != (FDynamicMeshAttributeSet *)0x0) {
    this_01 = pFVar2;
  }
  UE::Geometry::FDynamicMeshAttributeSet::AttachSkinWeightsAttribute
            (this_01,**(FName **)this,
             (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)pFVar3);
  return;
}

// BlendBoneWeights @ 14cdc7fd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_MeshBoneWeightFunctions::BlendBoneWeights
          (TArray<FGeometryScriptBoneWeight,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FGeometryScriptBoneWeight,TSizedDefaultAllocator<32>_> *param_2,float param_3,
          TArray<FGeometryScriptBoneWeight,TSizedDefaultAllocator<32>_> *param_4,
          UGeometryScriptDebug *param_5)

{
  ForElementType<UE::AnimationCore::FBoneWeight> FVar1;
  int iVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  TArray<FGeometryScriptBoneWeight,TSizedDefaultAllocator<32>_> *this;
  bool bVar9;
  undefined2 uVar10;
  int iVar11;
  FText *pFVar12;
  ForElementType<UE::AnimationCore::FBoneWeight> FVar13;
  longlong lVar14;
  ulonglong uVar15;
  FScriptContainerElement *pFVar16;
  float fVar17;
  undefined1 auStackY_2f8 [32];
  undefined1 local_2a8;
  undefined1 local_2a7;
  uchar local_2a6 [4];
  FBoneWeight local_2a2;
  undefined1 local_29e [2];
  FBoneWeightsSettings local_29c;
  FBoneWeightsSettings local_28c;
  FBoneWeightsSettings local_27c;
  TArray<FGeometryScriptBoneWeight,TSizedDefaultAllocator<32>_> *local_268;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_260;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_258;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_250;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_248;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_240;
  ForElementType<UE::AnimationCore::FBoneWeight> local_238;
  int iStack_230;
  undefined4 uStack_22c;
  ForElementType<UE::AnimationCore::FBoneWeight> local_228;
  int iStack_220;
  undefined4 uStack_21c;
  FText local_218;
  FText local_208;
  TArrayView<UE::AnimationCore::FBoneWeight_const_,int> local_1f8;
  TArrayView<UE::AnimationCore::FBoneWeight_const_,int> local_1e8;
  ForElementType<UE::AnimationCore::FBoneWeight> local_1d8;
  int local_1a0;
  int local_19c;
  ForElementType<UE::AnimationCore::FBoneWeight> local_198;
  int local_160;
  int local_15c;
  TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  local_158;
  TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  local_118;
  TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  local_d8;
  ulonglong local_98;
  
  fVar8 = __real_477fff00;
  fVar7 = __real_3f000000;
  fVar6 = __real_3f800000;
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  pFVar16 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar4 = pFVar16 + (longlong)iVar2 * 8;
  local_1d8.SecondaryData = (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
  local_1a0 = 0;
  local_19c = 0xc;
  local_268 = param_4;
  do {
    if (param_1->ArrayNum != iVar2) {
      local_2a8 = 0;
      `TCheckedPointerIterator<FGeometryScriptBoneWeight_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_2a8);
    }
    this = local_268;
    if (pFVar16 == pFVar4) {
      pFVar16 = (param_2->AllocatorInstance).Data;
      iVar2 = param_2->ArrayNum;
      local_198.SecondaryData = (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
      local_160 = 0;
      pFVar4 = pFVar16 + (longlong)iVar2 * 8;
      local_15c = 0xc;
      do {
        if (param_2->ArrayNum != iVar2) {
          local_2a7 = 0;
          `TCheckedPointerIterator<FGeometryScriptBoneWeight_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_2a7);
        }
        iVar11 = local_160;
        if (pFVar16 == pFVar4) {
          local_27c.bHasDefaultBoneIndex = false;
          local_27c.bBlendZeroInfluence = true;
          local_27c._14_2_ = 0;
          local_27c.NormalizeType = Always;
          local_238 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_198;
          if (local_198.SecondaryData != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
            local_238 = local_198.SecondaryData;
          }
          local_27c.MaxWeightCount = 0xc;
          local_27c.WeightThreshold = 1;
          local_27c.DefaultBoneIndex = 0;
          local_29c.bHasDefaultBoneIndex = false;
          local_29c.bBlendZeroInfluence = true;
          local_29c._14_2_ = 0;
          local_29c.NormalizeType = Always;
          local_29c.MaxWeightCount = 0xc;
          local_29c.WeightThreshold = 1;
          local_29c.DefaultBoneIndex = 0;
          if ((local_160 < 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_260.Container = &local_d8;
          iStack_230 = iVar11;
          local_1f8._12_4_ = uStack_22c;
          local_1f8.ArrayNum = iVar11;
          local_1f8.DataPtr = (FBoneWeight *)local_238;
          local_d8.AllocatorInstance.SecondaryData =
               (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
          local_d8.ArrayNum = 0;
          local_d8.ArrayMax = 0xc;
          UE::AnimationCore::
          TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
          ::
          SetBoneWeights<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>
                    (&local_260,&local_1f8,&local_29c);
          iStack_220 = local_1a0;
          local_28c.bHasDefaultBoneIndex = false;
          local_28c.bBlendZeroInfluence = true;
          local_28c._14_2_ = 0;
          local_228 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_1d8;
          if (local_1d8.SecondaryData != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
            local_228 = local_1d8.SecondaryData;
          }
          local_28c.NormalizeType = Always;
          local_28c.MaxWeightCount = 0xc;
          local_28c.WeightThreshold = 1;
          local_28c.DefaultBoneIndex = 0;
          if ((local_1a0 < 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_258.Container = &local_118;
          local_1e8._12_4_ = uStack_21c;
          local_1e8.ArrayNum = iStack_220;
          local_1e8.DataPtr = (FBoneWeight *)local_228;
          local_118.AllocatorInstance.SecondaryData =
               (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
          local_118.ArrayNum = 0;
          local_118.ArrayMax = 0xc;
          UE::AnimationCore::
          TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
          ::
          SetBoneWeights<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>
                    (&local_258,&local_1e8,&local_28c);
          local_240.Container = &local_158;
          local_158.AllocatorInstance.SecondaryData =
               (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
          local_248.Container = &local_118;
          local_158.ArrayNum = 0;
          local_250.Container = &local_d8;
          local_158.ArrayMax = 0xc;
          UE::AnimationCore::
          TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
          ::
          Blend<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>,UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>,TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>
                    (&local_240,&local_248,&local_250,param_3,&local_27c);
          if (local_118.AllocatorInstance.SecondaryData !=
              (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
            FMemory::Free((void *)local_118.AllocatorInstance.SecondaryData);
          }
          if (local_d8.AllocatorInstance.SecondaryData !=
              (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
            FMemory::Free((void *)local_d8.AllocatorInstance.SecondaryData);
          }
          TArray<FGeometryScriptBoneWeight,TSizedDefaultAllocator<32>_>::SetNum
                    (this,local_158.ArrayNum,Default);
          iVar2 = local_158.ArrayNum;
          fVar6 = __real_37800080;
          uVar15 = (ulonglong)local_158.ArrayNum;
          FVar13 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_158;
          if (local_158.AllocatorInstance.SecondaryData !=
              (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
            FVar13 = local_158.AllocatorInstance.SecondaryData;
          }
          FVar1 = (ForElementType<UE::AnimationCore::FBoneWeight>)((longlong)FVar13 + uVar15 * 4);
          while( true ) {
            if ((uint)uVar15 != iVar2) {
              `TCheckedPointerIterator<UE::AnimationCore::FBoneWeight_const_,int,0>::operator!='::
              __l2::<lambda_1>::operator()(local_29e);
            }
            if (FVar13 == FVar1) break;
            uVar3 = *(uint *)FVar13;
            iVar11 = this->ArrayNum;
            if (iVar11 == this->ArrayMax) {
              iVar11 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x408,&this->AllocatorInstance,&this->ArrayMax);
            }
            this->ArrayNum = iVar11 + 1;
            FVar13 = (ForElementType<UE::AnimationCore::FBoneWeight>)((longlong)FVar13 + 4);
            pFVar4 = (this->AllocatorInstance).Data;
            *(uint *)(pFVar4 + (longlong)iVar11 * 8) = uVar3 & 0xffff;
            *(float *)(pFVar4 + (longlong)iVar11 * 8 + 4) = (float)(uVar3 >> 0x10) * fVar6;
            uVar15 = (ulonglong)(uint)local_158.ArrayNum;
          }
          if (local_158.AllocatorInstance.SecondaryData !=
              (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
            FMemory::Free((void *)local_158.AllocatorInstance.SecondaryData);
          }
          if (local_198.SecondaryData != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
            FMemory::Free((void *)local_198.SecondaryData);
          }
          if (local_1d8.SecondaryData != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
            FMemory::Free((void *)local_1d8.SecondaryData);
          }
          return;
        }
        if (*(int *)pFVar16 < 0) {
          pFVar12 = FText::AsLocalizable_Advanced_LocText
                              (&local_208,L"UGeometryScriptLibrary_MeshBoneWeightFunctions",
                               L"BlendBoneWeights_InvalidInput",
                               L"BlendBoneWeights: Invalid bone index provided; falling back to 0 as bone index."
                              );
          UE::Geometry::AppendWarning(param_5,InvalidInputs,pFVar12);
          if (local_208.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_208.TextData.Reference + 0x10))();
          }
        }
        iVar11 = *(int *)pFVar16;
        fVar17 = *(float *)(pFVar16 + 4);
        if (fVar6 <= *(float *)(pFVar16 + 4)) {
          fVar17 = fVar6;
        }
        if (iVar11 < 0) {
          iVar11 = 0;
        }
        if (fVar17 <= 0.0) {
          fVar17 = 0.0;
        }
        local_2a2.RawWeight = (ushort)(int)(fVar17 * fVar8 + fVar7);
        local_2a2.BoneIndex = (ushort)iVar11;
        FVar13 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_198;
        if (local_198.SecondaryData != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
          FVar13 = local_198.SecondaryData;
        }
        if ((ulonglong)FVar13 <= &local_2a2) {
          FVar13 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_198;
          if (local_198.SecondaryData != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
            FVar13 = local_198.SecondaryData;
          }
          if ((&local_2a2 < (FBoneWeight *)((longlong)FVar13 + (longlong)local_15c * 4)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        if (local_160 == local_15c) {
          local_160 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AnimationCore::FBoneWeight>_>
                                (0x204,&local_198,&local_15c);
        }
        lVar14 = (longlong)local_160;
        FVar13 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_198;
        if (local_198.SecondaryData != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
          FVar13 = local_198.SecondaryData;
        }
        pFVar16 = pFVar16 + 8;
        local_160 = local_160 + 1;
        *(FBoneWeight *)((longlong)FVar13 + lVar14 * 4) = local_2a2;
      } while( true );
    }
    if (*(int *)pFVar16 < 0) {
      pFVar12 = FText::AsLocalizable_Advanced_LocText
                          (&local_218,L"UGeometryScriptLibrary_MeshBoneWeightFunctions",
                           L"BlendBoneWeights_InvalidInput",
                           L"BlendBoneWeights: Invalid bone index provided; falling back to 0 as bone index."
                          );
      UE::Geometry::AppendWarning(param_5,InvalidInputs,pFVar12);
      if (local_218.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_218.TextData.Reference + 0x10))();
      }
    }
    iVar11 = *(int *)pFVar16;
    fVar17 = *(float *)(pFVar16 + 4);
    if (fVar6 <= *(float *)(pFVar16 + 4)) {
      fVar17 = fVar6;
    }
    if (iVar11 < 0) {
      iVar11 = 0;
    }
    if (fVar17 <= 0.0) {
      fVar17 = 0.0;
    }
    uVar10 = (undefined2)(int)(fVar17 * fVar8 + fVar7);
    local_2a6[2] = (char)uVar10;
    local_2a6[3] = (char)((ushort)uVar10 >> 8);
    local_2a6[0] = (char)(short)iVar11;
    local_2a6[1] = (char)((ushort)(short)iVar11 >> 8);
    FVar13 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_1d8;
    if (local_1d8.SecondaryData != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
      FVar13 = local_1d8.SecondaryData;
    }
    if ((ulonglong)FVar13 <= local_2a6) {
      FVar13 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_1d8;
      if (local_1d8.SecondaryData != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
        FVar13 = local_1d8.SecondaryData;
      }
      if ((local_2a6 < (uchar *)((longlong)FVar13 + (longlong)local_19c * 4)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (local_1a0 == local_19c) {
      local_1a0 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AnimationCore::FBoneWeight>_>
                            (0x204,&local_1d8,&local_19c);
    }
    lVar14 = (longlong)local_1a0;
    FVar13 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_1d8;
    if (local_1d8.SecondaryData != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
      FVar13 = local_1d8.SecondaryData;
    }
    pFVar16 = pFVar16 + 8;
    local_1a0 = local_1a0 + 1;
    *(uchar (*) [4])((longlong)FVar13 + lVar14 * 4) = local_2a6;
  } while( true );
}

// ComputeSmoothBoneWeights @ 14cdcd6c0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshBoneWeightFunctions::ComputeSmoothBoneWeights
          (UDynamicMesh *param_1,USkeleton *param_2,FGeometryScriptSmoothBoneWeightsOptions *param_3
          ,FGeometryScriptBoneWeightProfile param_4,UGeometryScriptDebug *param_5)

{
  FText *pFVar1;
  USkeleton *local_res10 [2];
  FName local_res20;
  undefined1 local_38 [16];
  USkeleton **local_28;
  FName *local_20;
  FGeometryScriptSmoothBoneWeightsOptions *local_18;
  
  local_res10[0] = param_2;
  local_res20 = param_4.ProfileName;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_38,L"UGeometryScriptLibrary_MeshBoneWeightFunctions",
                        L"ComputeSmoothBoneWeights_InvalidInput",
                        L"ComputeSmoothBoneWeights: TargetMesh is Null");
    UE::Geometry::AppendError(param_5,InvalidInputs,pFVar1);
    if ((ITextData *)local_38._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_38._0_8_ + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  if (param_2 == (USkeleton *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_38,L"UGeometryScriptLibrary_MeshBoneWeightFunctions",
                        L"ComputeSmoothBoneWeights_InvalidSkeleton",
                        L"ComputeSmoothBoneWeights: Skeleton is Null");
    UE::Geometry::AppendError(param_5,InvalidInputs,pFVar1);
    if ((ITextData *)local_38._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_38._0_8_ + 0x10))();
      return param_1;
    }
  }
  else {
    local_28 = local_res10;
    local_20 = &local_res20;
    local_38._8_8_ = &local_28;
    local_38._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_MeshBoneWeightFunctions::ComputeSmoothBoneWeights'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
         ::Call;
    local_18 = param_3;
    UDynamicMesh::EditMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_38,
               AttributeEdit,Unknown,false);
  }
  return param_1;
}

// CopyBonesFromMesh @ 14cdd0650

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshBoneWeightFunctions::CopyBonesFromMesh
          (UDynamicMesh *param_1,UDynamicMesh *param_2,
          FGeometryScriptCopyBonesFromMeshOptions param_3,UGeometryScriptDebug *param_4)

{
  FText *pFVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  UDynamicMesh *local_res10;
  FGeometryScriptCopyBonesFromMeshOptions local_res18 [4];
  UGeometryScriptDebug *local_res20;
  undefined1 local_38 [16];
  UDynamicMesh **local_28;
  UGeometryScriptDebug **local_20;
  FGeometryScriptCopyBonesFromMeshOptions *local_18;
  
  local_res10 = param_2;
  local_res18[0] = param_3;
  local_res20 = param_4;
  if (param_1 == (UDynamicMesh *)0x0) {
    pwVar3 = L"CopyBonesFromMesh: SourceMesh is Null";
    pwVar2 = L"CopyBonesFromMesh_InvalidSourceMesh";
  }
  else {
    if (param_2 != (UDynamicMesh *)0x0) {
      local_28 = &local_res10;
      local_20 = &local_res20;
      local_18 = local_res18;
      local_38._8_8_ = &local_28;
      local_38._0_8_ =
           UE::Core::Private::Function::
           TFunctionRefCaller<`UGeometryScriptLibrary_MeshBoneWeightFunctions::CopyBonesFromMesh'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
           ::Call;
      UDynamicMesh::EditMesh
                (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_38,
                 GeneralEdit,Unknown,false);
      return local_res10;
    }
    pwVar3 = L"CopyBonesFromMesh: TargetMesh is Null";
    pwVar2 = L"CopyBonesFromMesh_InvalidTargetMesh";
  }
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)local_38,L"UGeometryScriptLibrary_MeshBoneWeightFunctions",pwVar2,
                      pwVar3);
  UE::Geometry::AppendError(local_res20,InvalidInputs,pFVar1);
  if ((ITextData *)local_38._0_8_ == (ITextData *)0x0) {
    return local_res10;
  }
  (**(code **)((longlong)*(ITextData *)local_38._0_8_ + 0x10))();
  return local_res10;
}

// CopyBonesFromSkeleton @ 14cdd0730

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshBoneWeightFunctions::CopyBonesFromSkeleton
          (USkeleton *param_1,UDynamicMesh *param_2,FGeometryScriptCopyBonesFromMeshOptions param_3,
          UGeometryScriptDebug *param_4)

{
  FText *pFVar1;
  USkeleton *local_res8 [2];
  FGeometryScriptCopyBonesFromMeshOptions local_res18 [4];
  UGeometryScriptDebug *local_res20;
  undefined1 local_38 [16];
  USkeleton **local_28;
  FGeometryScriptCopyBonesFromMeshOptions *local_20;
  UGeometryScriptDebug **local_18;
  
  local_res8[0] = param_1;
  local_res18[0] = param_3;
  local_res20 = param_4;
  if (param_1 == (USkeleton *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_38,L"UGeometryScriptLibrary_MeshBoneWeightFunctions",
                        L"CopyBonesFromSkeleton_InvalidSourceSkeleton",
                        L"CopyBonesFromMesh: SourceSkeleton is Null");
    UE::Geometry::AppendError(local_res20,InvalidInputs,pFVar1);
    if ((ITextData *)local_38._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_38._0_8_ + 0x10))();
      return param_2;
    }
  }
  else {
    if (param_2 == (UDynamicMesh *)0x0) {
      pFVar1 = FText::AsLocalizable_Advanced_LocText
                         ((FText *)local_38,L"UGeometryScriptLibrary_MeshBoneWeightFunctions",
                          L"CopyBonesFromSkeleton_InvalidTargetMesh",
                          L"CopyBonesFromMesh: TargetMesh is Null");
      UE::Geometry::AppendError(local_res20,InvalidInputs,pFVar1);
      if ((ITextData *)local_38._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_38._0_8_ + 0x10))();
      }
      return (UDynamicMesh *)0x0;
    }
    local_28 = local_res8;
    local_20 = local_res18;
    local_18 = &local_res20;
    local_38._8_8_ = &local_28;
    local_38._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_MeshBoneWeightFunctions::CopyBonesFromSkeleton'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
         ::Call;
    UDynamicMesh::EditMesh
              (param_2,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_38,
               AttributeEdit,Unknown,false);
  }
  return param_2;
}

// DiscardBonesFromMesh @ 14cdd3950

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshBoneWeightFunctions::DiscardBonesFromMesh
          (UDynamicMesh *param_1,UGeometryScriptDebug *param_2)

{
  FText *pFVar1;
  undefined1 local_res8 [8];
  undefined1 local_18 [16];
  
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_18,L"UGeometryScriptLibrary_MeshBoneWeightFunctions",
                        L"DiscardBonesFromMesh_InvalidTargetMesh",
                        L"DiscardBonesFromMesh: TargetMesh is Null");
    UE::Geometry::AppendError(param_2,InvalidInputs,pFVar1);
    if ((ITextData *)local_18._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_18._0_8_ + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  local_18._8_8_ = local_res8;
  local_res8[0] = 0;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshBoneWeightFunctions::DiscardBonesFromMesh'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_18,
             AttributeEdit,Unknown,false);
  return param_1;
}

// GetAllBonesInfo @ 14cdd4ac0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshBoneWeightFunctions::GetAllBonesInfo
          (UDynamicMesh *param_1,
          TArray<FGeometryScriptBoneInfo,TSizedDefaultAllocator<32>_> *param_2,
          UGeometryScriptDebug *param_3)

{
  FText *pFVar1;
  UGeometryScriptDebug *local_res18 [2];
  UGeometryScriptDebug **local_28;
  TArray<FGeometryScriptBoneInfo,TSizedDefaultAllocator<32>_> *local_20;
  undefined1 local_18 [16];
  
  local_res18[0] = param_3;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_18,L"UGeometryScriptLibrary_MeshBoneWeightFunctions",
                        L"GetAllBonesInfo_InvalidTargetMesh",L"GetAllBonesInfo: TargetMesh is Null")
    ;
    UE::Geometry::AppendError(local_res18[0],InvalidInputs,pFVar1);
    if ((ITextData *)local_18._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_18._0_8_ + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  local_28 = local_res18;
  local_18._8_8_ = &local_28;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshBoneWeightFunctions::GetAllBonesInfo'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
       ::Call;
  local_20 = param_2;
  UDynamicMesh::ProcessMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)local_18);
  return param_1;
}

// GetBoneChildren @ 14cdd4c40

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshBoneWeightFunctions::GetBoneChildren
          (UDynamicMesh *param_1,FName param_2,bool param_3,bool *param_4,
          TArray<FGeometryScriptBoneInfo,TSizedDefaultAllocator<32>_> *param_5,
          UGeometryScriptDebug *param_6)

{
  FText *pFVar1;
  FName local_res10;
  undefined1 local_res18 [16];
  undefined1 local_48 [16];
  UGeometryScriptDebug **local_38;
  FName *local_30;
  bool *local_28;
  TArray<FGeometryScriptBoneInfo,TSizedDefaultAllocator<32>_> *local_20;
  undefined1 *local_18;
  
  local_res10 = param_2;
  local_res18[0] = param_3;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_48,L"UGeometryScriptLibrary_MeshBoneWeightFunctions",
                        L"GetBoneChildren_InvalidTargetMesh",L"GetBoneChildren: TargetMesh is Null")
    ;
    UE::Geometry::AppendError(param_6,InvalidInputs,pFVar1);
    if ((ITextData *)local_48._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_48._0_8_ + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  local_38 = &param_6;
  local_30 = &local_res10;
  local_20 = param_5;
  local_18 = local_res18;
  local_48._8_8_ = &local_38;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshBoneWeightFunctions::GetBoneChildren'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
       ::Call;
  local_28 = param_4;
  UDynamicMesh::ProcessMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)local_48);
  return param_1;
}

// GetBoneIndex @ 14cdd6340

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshBoneWeightFunctions::GetBoneIndex
          (UDynamicMesh *param_1,FName param_2,bool *param_3,int *param_4,
          UGeometryScriptDebug *param_5)

{
  FText *pFVar1;
  FName local_res10 [3];
  undefined1 local_38 [16];
  UGeometryScriptDebug **local_28;
  int *local_20;
  FName *local_18;
  bool *local_10;
  
  local_res10[0] = param_2;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_38,L"UGeometryScriptLibrary_MeshBoneWeightFunctions",
                        L"GetBoneIndex_InvalidTargetMesh",L"GetBoneIndex: TargetMesh is Null");
    UE::Geometry::AppendError(param_5,InvalidInputs,pFVar1);
    if ((ITextData *)local_38._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_38._0_8_ + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  local_28 = &param_5;
  local_18 = local_res10;
  local_38._8_8_ = &local_28;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshBoneWeightFunctions::GetBoneIndex'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
       ::Call;
  local_20 = param_4;
  local_10 = param_3;
  UDynamicMesh::ProcessMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)local_38);
  return param_1;
}

// GetBoneInfo @ 14cdd63f0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshBoneWeightFunctions::GetBoneInfo
          (UDynamicMesh *param_1,FName param_2,bool *param_3,FGeometryScriptBoneInfo *param_4,
          UGeometryScriptDebug *param_5)

{
  FText *pFVar1;
  FName local_res10 [3];
  undefined1 local_38 [16];
  UGeometryScriptDebug **local_28;
  FName *local_20;
  bool *local_18;
  FGeometryScriptBoneInfo *local_10;
  
  local_res10[0] = param_2;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_38,L"UGeometryScriptLibrary_MeshBoneWeightFunctions",
                        L"GetBoneInfo_InvalidTargetMesh",L"GetBoneInfo: TargetMesh is Null");
    UE::Geometry::AppendError(param_5,InvalidInputs,pFVar1);
    if ((ITextData *)local_38._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_38._0_8_ + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  local_28 = &param_5;
  local_20 = local_res10;
  local_38._8_8_ = &local_28;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshBoneWeightFunctions::GetBoneInfo'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
       ::Call;
  local_18 = param_3;
  local_10 = param_4;
  UDynamicMesh::ProcessMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)local_38);
  return param_1;
}

// GetLargestVertexBoneWeight @ 14cdd6ff0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshBoneWeightFunctions::GetLargestVertexBoneWeight
          (UDynamicMesh *param_1,int param_2,FGeometryScriptBoneWeight *param_3,bool *param_4,
          FGeometryScriptBoneWeightProfile param_5)

{
  uint local_res8 [2];
  int local_res10 [2];
  FName local_res20;
  int *local_68;
  bool *local_60;
  code *local_58;
  undefined4 **local_50;
  code *local_48;
  undefined8 **local_40;
  FName *local_38;
  FGeometryScriptBoneWeightProfile *local_30;
  uint *local_28;
  code **local_20;
  
  *param_4 = false;
  local_68 = local_res10;
  local_50 = &local_68;
  local_58 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshBoneWeightFunctions::GetLargestVertexBoneWeight'::__l2::<lambda_1>,UE::AnimationCore::FBoneWeight,UE::Geometry::FDynamicMesh3_const_&,UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_const_&>
             ::Call;
  local_res20 = param_5.ProfileName;
  param_5.ProfileName.ComparisonIndex.Value._0_1_ = 0;
  local_res8[0] = 0;
  if (param_1 != (UDynamicMesh *)0x0) {
    local_38 = &local_res20;
    local_30 = &param_5;
    local_28 = local_res8;
    local_20 = &local_58;
    local_40 = &local_38;
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshBoneWeightQuery<UE::AnimationCore::FBoneWeight>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_res10[0] = param_2;
    local_60 = param_4;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_48)
    ;
    if (*param_4 != false) {
      param_3->BoneIndex = local_res8[0] & 0xffff;
      param_3->Weight = (float)(local_res8[0] >> 0x10) * __real_37800080;
    }
  }
  return param_1;
}

// GetMaxBoneWeightIndex @ 14cdd7950

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshBoneWeightFunctions::GetMaxBoneWeightIndex
          (UDynamicMesh *param_1,bool *param_2,int *param_3,FGeometryScriptBoneWeightProfile param_4
          )

{
  bool local_res8 [8];
  undefined1 local_res10 [8];
  int *local_res18;
  FName local_res20;
  code *local_58;
  int **local_50;
  code *local_48;
  undefined8 **local_40;
  FName *local_38;
  bool *local_30;
  undefined1 *local_28;
  code **local_20;
  
  *param_3 = -1;
  local_50 = &local_res18;
  local_58 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshBoneWeightFunctions::GetMaxBoneWeightIndex'::__l2::<lambda_1>,bool,UE::Geometry::FDynamicMesh3_const_&,UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_const_&>
             ::Call;
  local_res8[0] = false;
  local_res10[0] = 0;
  if (param_1 != (UDynamicMesh *)0x0) {
    local_38 = &local_res20;
    local_30 = local_res8;
    local_28 = local_res10;
    local_20 = &local_58;
    local_40 = &local_38;
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshBoneWeightQuery<bool>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_res18 = param_3;
    local_res20 = param_4.ProfileName;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_48)
    ;
    *param_2 = local_res8[0];
    return param_1;
  }
  *param_2 = false;
  return (UDynamicMesh *)0x0;
}

// GetPrivateStaticClass @ 14cdd86e0

UClass * __cdecl UGeometryScriptLibrary_MeshBoneWeightFunctions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshBoneWeightFunctions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_MeshBoneWeightFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshBoneWeightFunctions.
                InnerSingleton,StaticRegisterNativesUGeometryScriptLibrary_MeshBoneWeightFunctions,
               0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryScriptLibrary_MeshBoneWeightFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshBoneWeightFunctions>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshBoneWeightFunctions.InnerSingleton;
}

// GetRootBoneName @ 14cdd8ce0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshBoneWeightFunctions::GetRootBoneName
          (UDynamicMesh *param_1,FName *param_2,UGeometryScriptDebug *param_3)

{
  FText *pFVar1;
  UGeometryScriptDebug *local_res18 [2];
  UGeometryScriptDebug **local_28;
  FName *local_20;
  undefined1 local_18 [16];
  
  local_res18[0] = param_3;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_18,L"UGeometryScriptLibrary_MeshBoneWeightFunctions",
                        L"GetRootBoneName_InvalidTargetMesh",L"GetRootBoneName: TargetMesh is Null")
    ;
    UE::Geometry::AppendError(local_res18[0],InvalidInputs,pFVar1);
    if ((ITextData *)local_18._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_18._0_8_ + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  local_28 = local_res18;
  local_18._8_8_ = &local_28;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshBoneWeightFunctions::GetRootBoneName'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
       ::Call;
  local_20 = param_2;
  UDynamicMesh::ProcessMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)local_18);
  return param_1;
}

// GetVertexBoneWeights @ 14cddb7b0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshBoneWeightFunctions::GetVertexBoneWeights
          (UDynamicMesh *param_1,int param_2,
          TArray<FGeometryScriptBoneWeight,TSizedDefaultAllocator<32>_> *param_3,bool *param_4,
          FGeometryScriptBoneWeightProfile param_5)

{
  undefined1 local_res8 [8];
  int local_res10 [2];
  FName local_res18;
  int *local_58;
  TArray<FGeometryScriptBoneWeight,TSizedDefaultAllocator<32>_> *local_50;
  code *local_48;
  undefined4 **local_40;
  code *local_38;
  undefined8 **local_30;
  FName *local_28;
  undefined1 *local_20;
  FGeometryScriptBoneWeightProfile *local_18;
  code **local_10;
  
  local_58 = local_res10;
  local_40 = &local_58;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshBoneWeightFunctions::GetVertexBoneWeights'::__l2::<lambda_1>,bool,UE::Geometry::FDynamicMesh3_const_&,UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_const_&>
             ::Call;
  local_res18 = param_5.ProfileName;
  local_res8[0] = 0;
  param_5.ProfileName.ComparisonIndex.Value._0_1_ = false;
  if (param_1 != (UDynamicMesh *)0x0) {
    local_28 = &local_res18;
    local_20 = local_res8;
    local_18 = &param_5;
    local_10 = &local_48;
    local_30 = &local_28;
    local_38 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshBoneWeightQuery<bool>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_res10[0] = param_2;
    local_50 = param_3;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_38)
    ;
    *param_4 = param_5.ProfileName.ComparisonIndex.Value._0_1_;
    return param_1;
  }
  *param_4 = false;
  return (UDynamicMesh *)0x0;
}

// MeshCopyBoneWeights @ 14cddf720

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshBoneWeightFunctions::MeshCopyBoneWeights
          (UDynamicMesh *param_1,bool *param_2,FGeometryScriptBoneWeightProfile param_3,
          FGeometryScriptBoneWeightProfile param_4)

{
  FName local_res18;
  FName local_res20;
  FName *local_28;
  FName *local_20;
  code *local_18;
  undefined8 **local_10;
  
  *param_2 = false;
  if (param_1 != (UDynamicMesh *)0x0) {
    local_28 = &local_res20;
    local_20 = &local_res18;
    local_10 = &local_28;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshBoneWeightFunctions::MeshCopyBoneWeights'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
               ::Call;
    local_res18 = param_3.ProfileName;
    local_res20 = param_4.ProfileName;
    UDynamicMesh::EditMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_18,
               GeneralEdit,Unknown,false);
  }
  return param_1;
}

// MeshCreateBoneWeights @ 14cddf790

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshBoneWeightFunctions::MeshCreateBoneWeights
          (UDynamicMesh *param_1,bool *param_2,bool param_3,FGeometryScriptBoneWeightProfile param_4
          )

{
  undefined1 local_res18 [8];
  FName local_res20;
  code *local_38;
  undefined8 **local_30;
  FName *local_28;
  bool *local_20;
  undefined1 *local_18;
  
  *param_2 = false;
  if (param_1 != (UDynamicMesh *)0x0) {
    local_28 = &local_res20;
    local_18 = local_res18;
    local_30 = &local_28;
    local_38 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshBoneWeightFunctions::MeshCreateBoneWeights'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
               ::Call;
    local_res18[0] = param_3;
    local_res20 = param_4.ProfileName;
    local_20 = param_2;
    UDynamicMesh::EditMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_38,
               GeneralEdit,Unknown,false);
  }
  return param_1;
}

// MeshHasBoneWeights @ 14cddf800

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshBoneWeightFunctions::MeshHasBoneWeights
          (UDynamicMesh *param_1,bool *param_2,FGeometryScriptBoneWeightProfile param_3)

{
  bool local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  FName local_res20;
  code *local_58;
  undefined1 *local_50;
  code *local_48;
  undefined8 **local_40;
  FName *local_38;
  bool *local_30;
  undefined1 *local_28;
  code **local_20;
  
  local_res10[0] = 0;
  local_50 = local_res10;
  local_58 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshBoneWeightFunctions::MeshHasBoneWeights'::__l2::<lambda_1>,bool,UE::Geometry::FDynamicMesh3_const_&,UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_const_&>
             ::Call;
  local_res8[0] = false;
  local_res18[0] = 0;
  if (param_1 != (UDynamicMesh *)0x0) {
    local_38 = &local_res20;
    local_30 = local_res8;
    local_28 = local_res18;
    local_20 = &local_58;
    local_40 = &local_38;
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshBoneWeightQuery<bool>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_res20 = param_3.ProfileName;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_48)
    ;
    *param_2 = local_res8[0];
    return param_1;
  }
  *param_2 = false;
  return (UDynamicMesh *)0x0;
}

// PruneBoneWeights @ 14cde1ca0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshBoneWeightFunctions::PruneBoneWeights
          (UDynamicMesh *param_1,TArray<FName,TSizedDefaultAllocator<32>_> *param_2,
          FGeometryScriptPruneBoneWeightsOptions param_3,FGeometryScriptBoneWeightProfile param_4,
          UGeometryScriptDebug *param_5)

{
  FText *pFVar1;
  FGeometryScriptPruneBoneWeightsOptions local_res18 [4];
  FName local_res20;
  undefined1 local_38 [16];
  UGeometryScriptDebug **local_28;
  TArray<FName,TSizedDefaultAllocator<32>_> *local_20;
  FGeometryScriptPruneBoneWeightsOptions *local_18;
  FName *local_10;
  
  local_res18[0] = param_3;
  local_res20 = param_4.ProfileName;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_38,L"UGeometryScriptLibrary_MeshBoneWeightFunctions",
                        L"PruneBoneWeights_InvalidInput",L"PruneBoneWeights: TargetMesh is Null");
    UE::Geometry::AppendError(param_5,InvalidInputs,pFVar1);
    if ((ITextData *)local_38._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_38._0_8_ + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  if (param_2->ArrayNum != 0) {
    local_28 = &param_5;
    local_18 = local_res18;
    local_10 = &local_res20;
    local_38._8_8_ = &local_28;
    local_38._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_MeshBoneWeightFunctions::PruneBoneWeights'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
         ::Call;
    local_20 = param_2;
    UDynamicMesh::EditMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_38,
               AttributeEdit,Unknown,false);
  }
  return param_1;
}

// SetAllVertexBoneWeights @ 14cde3990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshBoneWeightFunctions::SetAllVertexBoneWeights
          (UDynamicMesh *param_1,
          TArray<FGeometryScriptBoneWeight,TSizedDefaultAllocator<32>_> *param_2,
          FGeometryScriptBoneWeightProfile param_3,UGeometryScriptDebug *param_4)

{
  int iVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  FName FVar6;
  bool bVar7;
  uint uVar8;
  UDynamicMesh *pUVar9;
  FText *pFVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  float fVar17;
  undefined1 auStack_1d8 [32];
  undefined1 local_188;
  undefined1 local_187 [3];
  FBoneWeight local_184;
  ForAnyElementType local_180;
  int local_178;
  int iStack_174;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_170;
  FBoneWeightsSettings local_168;
  FName local_158;
  UDynamicMesh *local_150;
  TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  *local_148;
  FName local_140;
  FBoneWeight *local_138;
  int iStack_130;
  undefined4 uStack_12c;
  code *local_128;
  TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  **local_120;
  code *local_118;
  FName **local_110;
  FName *local_108;
  undefined1 *local_100;
  undefined1 *local_f8;
  code **local_f0;
  FText local_e8;
  TArrayView<UE::AnimationCore::FBoneWeight_const_,int> local_d8;
  TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  local_c8;
  ulonglong local_88;
  
  fVar5 = __real_477fff00;
  fVar4 = __real_3f000000;
  fVar3 = __real_3f800000;
  local_88 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  iVar1 = param_2->ArrayNum;
  uVar14 = 0;
  local_180.Data = (FScriptContainerElement *)0x0;
  local_178 = 0;
  iStack_174 = 0;
  uVar16 = uVar14;
  local_158 = param_3.ProfileName;
  local_150 = param_1;
  if (0 < (longlong)iVar1) {
    do {
      uVar13 = (uint)uVar14;
      uVar15 = ~uVar13 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar13 < param_2->ArrayNum) {
        uVar8 = uVar15;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar2 = (code *)swi(3);
        pUVar9 = (UDynamicMesh *)(*pcVar2)();
        return pUVar9;
      }
      if (*(int *)((param_2->AllocatorInstance).Data + uVar16 * 8) < 0) {
        pFVar10 = FText::AsLocalizable_Advanced_LocText
                            (&local_e8,L"UGeometryScriptLibrary_MeshBoneWeightFunctions",
                             L"SetAllVertexBoneWeights_InvalidInput",
                             L"SetAllVertexBoneWeights: Invalid bone index provided; falling back to 0 as bone index."
                            );
        UE::Geometry::AppendWarning(param_4,InvalidInputs,pFVar10);
        if (local_e8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
        }
      }
      uVar8 = 0;
      if ((int)uVar13 < param_2->ArrayNum) {
        uVar8 = uVar15;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar2 = (code *)swi(3);
        pUVar9 = (UDynamicMesh *)(*pcVar2)();
        return pUVar9;
      }
      iVar11 = *(int *)((param_2->AllocatorInstance).Data + uVar16 * 8);
      if (iVar11 < 0) {
        iVar11 = 0;
      }
      local_184.BoneIndex = (ushort)iVar11;
      uVar8 = 0;
      if ((int)uVar13 < param_2->ArrayNum) {
        uVar8 = uVar15;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar2 = (code *)swi(3);
        pUVar9 = (UDynamicMesh *)(*pcVar2)();
        return pUVar9;
      }
      fVar17 = *(float *)((param_2->AllocatorInstance).Data + uVar16 * 8 + 4);
      if (fVar3 <= fVar17) {
        fVar17 = fVar3;
      }
      if (fVar17 <= 0.0) {
        fVar17 = 0.0;
      }
      local_184.RawWeight = (ushort)(int)(fVar17 * fVar5 + fVar4);
      if (((local_180.Data <= &local_184) &&
          (&local_184 < (FBoneWeight *)(local_180.Data + (longlong)iStack_174 * 4))) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar2 = (code *)swi(3);
        pUVar9 = (UDynamicMesh *)(*pcVar2)();
        return pUVar9;
      }
      if (local_178 == iStack_174) {
        local_178 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x204,&local_180,&iStack_174);
      }
      lVar12 = (longlong)local_178;
      uVar14 = (ulonglong)(uVar13 + 1);
      uVar16 = uVar16 + 1;
      local_178 = local_178 + 1;
      *(FBoneWeight *)(local_180.Data + lVar12 * 4) = local_184;
    } while ((longlong)uVar16 < (longlong)iVar1);
  }
  pUVar9 = local_150;
  FVar6 = local_158;
  iVar1 = local_178;
  local_138 = (FBoneWeight *)local_180.Data;
  local_168.bHasDefaultBoneIndex = false;
  local_168.bBlendZeroInfluence = true;
  local_168._14_2_ = 0;
  local_168.NormalizeType = Always;
  local_168.MaxWeightCount = 0xc;
  local_168.WeightThreshold = 1;
  local_168.DefaultBoneIndex = 0;
  if ((local_178 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    pUVar9 = (UDynamicMesh *)(*pcVar2)();
    return pUVar9;
  }
  local_170.Container = &local_c8;
  iStack_130 = iVar1;
  local_d8._12_4_ = uStack_12c;
  local_d8.ArrayNum = iVar1;
  local_d8.DataPtr = local_138;
  local_c8.AllocatorInstance.SecondaryData = (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
  local_c8.ArrayNum = 0;
  local_c8.ArrayMax = 0xc;
  UE::AnimationCore::
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  ::
  SetBoneWeights<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>
            (&local_170,&local_d8,&local_168);
  local_148 = &local_c8;
  local_120 = &local_148;
  local_128 = UE::Core::Private::Function::
              TFunctionRefCaller<`UGeometryScriptLibrary_MeshBoneWeightFunctions::SetAllVertexBoneWeights'::__l2::<lambda_1>,bool,UE::Geometry::FDynamicMesh3_&,UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_&>
              ::Call;
  local_188 = 0;
  local_187[0] = 0;
  local_140 = FVar6;
  if (pUVar9 != (UDynamicMesh *)0x0) {
    local_108 = &local_140;
    local_100 = &local_188;
    local_f8 = local_187;
    local_f0 = &local_128;
    local_110 = &local_108;
    local_118 = UE::Core::Private::Function::
                TFunctionRefCaller<`SimpleMeshBoneWeightEdit<bool>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
                ::Call;
    UDynamicMesh::EditMesh
              (pUVar9,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_118,
               GeneralEdit,Unknown,false);
  }
  if (local_c8.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
    FMemory::Free((void *)local_c8.AllocatorInstance.SecondaryData);
  }
  if ((FBoneWeight *)local_180.Data != (FBoneWeight *)0x0) {
    FMemory::Free(local_180.Data);
  }
  return pUVar9;
}

// SetVertexBoneWeights @ 14cde5810

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshBoneWeightFunctions::SetVertexBoneWeights
          (UDynamicMesh *param_1,int param_2,
          TArray<FGeometryScriptBoneWeight,TSizedDefaultAllocator<32>_> *param_3,bool *param_4,
          FGeometryScriptBoneWeightProfile param_5,UGeometryScriptDebug *param_6)

{
  undefined1 local_res8 [8];
  int local_res10 [2];
  FName local_res18 [2];
  code *local_78;
  undefined4 **local_70;
  code *local_68;
  undefined8 **local_60;
  int *local_58;
  TArray<FGeometryScriptBoneWeight,TSizedDefaultAllocator<32>_> *local_50;
  UGeometryScriptDebug **local_48;
  FName *local_40;
  undefined1 *local_38;
  FGeometryScriptBoneWeightProfile *local_30;
  code **local_28;
  
  local_58 = local_res10;
  local_48 = &param_6;
  local_70 = &local_58;
  local_78 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshBoneWeightFunctions::SetVertexBoneWeights'::__l2::<lambda_1>,bool,UE::Geometry::FDynamicMesh3_&,UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_&>
             ::Call;
  local_res18[0] = param_5.ProfileName;
  local_res8[0] = 0;
  param_5.ProfileName.ComparisonIndex.Value._0_1_ = false;
  if (param_1 != (UDynamicMesh *)0x0) {
    local_40 = local_res18;
    local_38 = local_res8;
    local_30 = &param_5;
    local_28 = &local_78;
    local_60 = &local_40;
    local_68 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshBoneWeightEdit<bool>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
               ::Call;
    local_res10[0] = param_2;
    local_50 = param_3;
    UDynamicMesh::EditMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_68,
               GeneralEdit,Unknown,false);
    *param_4 = param_5.ProfileName.ComparisonIndex.Value._0_1_;
    return param_1;
  }
  *param_4 = false;
  return (UDynamicMesh *)0x0;
}

// StaticRegisterNativesUGeometryScriptLibrary_MeshBoneWeightFunctions @ 14cde71e0

void __cdecl
UGeometryScriptLibrary_MeshBoneWeightFunctions::
StaticRegisterNativesUGeometryScriptLibrary_MeshBoneWeightFunctions(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x14;
  local_18.DataPtr =
       Z_Construct_UClass_UGeometryScriptLibrary_MeshBoneWeightFunctions_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TransferBoneWeightsFromMesh @ 14cde73e0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshBoneWeightFunctions::TransferBoneWeightsFromMesh
          (UDynamicMesh *param_1,UDynamicMesh *param_2,
          FGeometryScriptTransferBoneWeightsOptions *param_3,FGeometryScriptMeshSelection *param_4,
          UGeometryScriptDebug *param_5)

{
  UDynamicMesh *pUVar1;
  FText *pFVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  UDynamicMesh *local_res10 [3];
  undefined1 local_38 [16];
  UGeometryScriptDebug **local_28;
  FGeometryScriptTransferBoneWeightsOptions *local_20;
  UDynamicMesh **local_18;
  FGeometryScriptMeshSelection *local_10;
  
  local_res10[0] = param_2;
  if (param_1 == (UDynamicMesh *)0x0) {
    pwVar4 = L"TransferBoneWeightsFromMesh: Source Mesh is Null";
    pwVar3 = L"TransferBoneWeightsFromMesh_InvalidSourceMesh";
  }
  else {
    if (param_2 != (UDynamicMesh *)0x0) {
      local_28 = &param_5;
      local_18 = local_res10;
      local_38._8_8_ = &local_28;
      local_38._0_8_ =
           UE::Core::Private::Function::
           TFunctionRefCaller<`UGeometryScriptLibrary_MeshBoneWeightFunctions::TransferBoneWeightsFromMesh'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
           ::Call;
      local_20 = param_3;
      local_10 = param_4;
      UDynamicMesh::ProcessMesh
                (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)local_38
                );
      goto LAB_14cde7490;
    }
    pwVar4 = L"TransferBoneWeightsFromMesh: Target Mesh is Null";
    pwVar3 = L"TransferBoneWeightsFromMesh_InvalidTargetMesh";
  }
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)local_38,L"UGeometryScriptLibrary_MeshBoneWeightFunctions",pwVar3,
                      pwVar4);
  UE::Geometry::AppendError(param_5,InvalidInputs,pFVar2);
  if ((ITextData *)local_38._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_38._0_8_ + 0x10))();
  }
LAB_14cde7490:
  pUVar1 = local_res10[0];
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_4->GeoSelection).SharedReferenceCount.ReferenceController);
  return pUVar1;
}

// execBlendBoneWeights @ 14cdf5680

void __cdecl
UGeometryScriptLibrary_MeshBoneWeightFunctions::execBlendBoneWeights
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FGeometryScriptBoneWeight,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FGeometryScriptBoneWeight,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FGeometryScriptBoneWeight,TSizedDefaultAllocator<32>_> *pTVar4;
  float local_res10 [4];
  UGeometryScriptDebug *local_res20;
  TArray<FGeometryScriptBoneWeight,TSizedDefaultAllocator<32>_> local_58;
  TArray<FGeometryScriptBoneWeight,TSizedDefaultAllocator<32>_> local_48;
  TArray<FGeometryScriptBoneWeight,TSizedDefaultAllocator<32>_> local_38;
  
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  pTVar4 = &local_38;
  if ((TArray<FGeometryScriptBoneWeight,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<FGeometryScriptBoneWeight,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar4 = (TArray<FGeometryScriptBoneWeight,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
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
  local_res10[0] = 0.0;
  pTVar3 = &local_48;
  if ((TArray<FGeometryScriptBoneWeight,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<FGeometryScriptBoneWeight,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar3 = (TArray<FGeometryScriptBoneWeight,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
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
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_res20 = (UGeometryScriptDebug *)0x0;
  pTVar2 = &local_58;
  if ((TArray<FGeometryScriptBoneWeight,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<FGeometryScriptBoneWeight,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<FGeometryScriptBoneWeight,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  BlendBoneWeights(pTVar4,pTVar3,local_res10[0],pTVar2,local_res20);
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// execComputeSmoothBoneWeights @ 14cdf8cf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_MeshBoneWeightFunctions::execComputeSmoothBoneWeights
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  longlong lVar4;
  UDynamicMesh *pUVar5;
  bool bVar6;
  int iVar7;
  FText *pFVar8;
  longlong lVar9;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined2 local_f8;
  ITextData *local_f0;
  uint local_e8;
  undefined2 local_e0;
  ITextData *local_d8;
  uint local_d0;
  longlong local_c8;
  FName local_c0;
  longlong local_b8;
  UDynamicMesh *local_b0;
  uint local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 local_98 [8];
  longlong local_90;
  FName local_88;
  code *local_80;
  longlong **local_78;
  longlong *local_70;
  FName *local_68;
  undefined8 *local_60;
  FText local_58;
  FText local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_b0 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b0);
  }
  local_b8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  local_a8 = local_a8 & 0xffffff00;
  uStack_a4 = 0x3e4ccccd;
  uStack_a0 = 5;
  uStack_9c = 0x100;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  local_c0 = FSkeletalMeshAttributesShared::DefaultSkinWeightProfileName;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c0);
  }
  local_c8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  pUVar5 = local_b0;
  lVar4 = local_c8;
  local_38 = CONCAT44(uStack_a4,local_a8);
  uStack_30 = CONCAT44(uStack_9c,uStack_a0);
  local_88 = local_c0;
  local_90 = local_b8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_b0 == (UDynamicMesh *)0x0) {
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       (&local_58,L"UGeometryScriptLibrary_MeshBoneWeightFunctions",
                        L"ComputeSmoothBoneWeights_InvalidInput",
                        L"ComputeSmoothBoneWeights: TargetMesh is Null");
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(pFVar8);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_f0 = (pFVar8->TextData).Reference;
    local_f8 = 0x200;
    if (local_f0 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_f0 + 8))(local_f0,local_res10);
    }
    local_e8 = pFVar8->Flags;
    if (lVar4 != 0) {
      if (((*(undefined2 **)(lVar4 + 0x28) <= &local_f8) &&
          (&local_f8 < *(undefined2 **)(lVar4 + 0x28) + (longlong)*(int *)(lVar4 + 0x34) * 0xc)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar7 = *(int *)(lVar4 + 0x30);
      if (iVar7 == *(int *)(lVar4 + 0x34)) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,(ForAnyElementType *)(lVar4 + 0x28),(int *)(lVar4 + 0x34));
      }
      lVar9 = (longlong)iVar7;
      *(int *)(lVar4 + 0x30) = iVar7 + 1;
      pFVar2 = ((ForAnyElementType *)(lVar4 + 0x28))->Data;
      pFVar2[lVar9 * 0x18] = local_f8._0_1_;
      pFVar2[lVar9 * 0x18 + 1] = local_f8._1_1_;
      *(undefined8 *)(pFVar2 + lVar9 * 0x18 + 8) = 0;
      *(ITextData **)(pFVar2 + lVar9 * 0x18 + 8) = local_f0;
      if (local_f0 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_f0 + 8))(local_f0,local_res18);
      }
      *(uint *)(pFVar2 + lVar9 * 0x18 + 0x10) = local_e8;
    }
    if (local_f0 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_f0 + 0x10))();
    }
    if (local_58.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
    }
    *(undefined8 *)param_3 = 0;
  }
  else {
    if (local_b8 == 0) {
      pFVar8 = FText::AsLocalizable_Advanced_LocText
                         (&local_48,L"UGeometryScriptLibrary_MeshBoneWeightFunctions",
                          L"ComputeSmoothBoneWeights_InvalidSkeleton",
                          L"ComputeSmoothBoneWeights: Skeleton is Null");
      if (1 < (byte)LogGeometry._0_1_) {
        FText::ToString(pFVar8);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
      }
      local_d8 = (pFVar8->TextData).Reference;
      local_e0 = 0x200;
      if (local_d8 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_d8 + 8))(local_d8,local_res20);
      }
      local_d0 = pFVar8->Flags;
      if (lVar4 != 0) {
        if (((*(undefined2 **)(lVar4 + 0x28) <= &local_e0) &&
            (&local_e0 < *(undefined2 **)(lVar4 + 0x28) + (longlong)*(int *)(lVar4 + 0x34) * 0xc))
           && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar7 = *(int *)(lVar4 + 0x30);
        if (iVar7 == *(int *)(lVar4 + 0x34)) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,(ForAnyElementType *)(lVar4 + 0x28),(int *)(lVar4 + 0x34));
        }
        lVar9 = (longlong)iVar7;
        *(int *)(lVar4 + 0x30) = iVar7 + 1;
        pFVar2 = ((ForAnyElementType *)(lVar4 + 0x28))->Data;
        pFVar2[lVar9 * 0x18] = local_e0._0_1_;
        pFVar2[lVar9 * 0x18 + 1] = local_e0._1_1_;
        *(undefined8 *)(pFVar2 + lVar9 * 0x18 + 8) = 0;
        *(ITextData **)(pFVar2 + lVar9 * 0x18 + 8) = local_d8;
        if (local_d8 != (ITextData *)0x0) {
          (**(code **)((longlong)*local_d8 + 8))(local_d8,local_98);
        }
        *(uint *)(pFVar2 + lVar9 * 0x18 + 0x10) = local_d0;
      }
      if (local_d8 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_d8 + 0x10))();
      }
      if (local_48.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
      }
    }
    else {
      local_70 = &local_90;
      local_68 = &local_88;
      local_60 = &local_38;
      local_78 = &local_70;
      local_80 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UGeometryScriptLibrary_MeshBoneWeightFunctions::ComputeSmoothBoneWeights'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
                 ::Call;
      UDynamicMesh::EditMesh
                (local_b0,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_80,
                 AttributeEdit,Unknown,false);
    }
    *(UDynamicMesh **)param_3 = pUVar5;
  }
  return;
}

// execCopyBonesFromMesh @ 14cdfab60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_MeshBoneWeightFunctions::execCopyBonesFromMesh
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  undefined1 *puVar2;
  FProperty *pFVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  FText *pFVar8;
  undefined2 local_res10 [4];
  undefined2 local_res18 [4];
  undefined1 local_res20 [8];
  longlong local_d8;
  undefined2 local_d0;
  ITextData *local_c8;
  uint local_c0;
  undefined2 local_b8;
  ITextData *local_b0;
  uint local_a8;
  longlong local_a0;
  longlong local_98;
  UDynamicMesh *local_90;
  longlong local_88;
  undefined1 local_80 [4];
  undefined1 local_7c [4];
  undefined1 local_78 [8];
  code *local_70;
  longlong **local_68;
  longlong *local_60;
  longlong *local_58;
  undefined2 *local_50;
  FText local_48;
  FText local_38;
  
  local_90 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_90,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_90);
  }
  local_98 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_res10[0] = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_a0 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a0,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a0);
  }
  local_88 = local_a0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res18[0] = local_res10[0];
  local_d8 = local_98;
  if (local_90 == (UDynamicMesh *)0x0) {
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       (&local_48,L"UGeometryScriptLibrary_MeshBoneWeightFunctions",
                        L"CopyBonesFromMesh_InvalidSourceMesh",
                        L"CopyBonesFromMesh: SourceMesh is Null");
    lVar5 = local_88;
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(pFVar8);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_c8 = (pFVar8->TextData).Reference;
    local_d0 = 0x200;
    if (local_c8 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_c8 + 8))(local_c8,local_res20);
    }
    local_c0 = pFVar8->Flags;
    if (lVar5 != 0) {
      if (((*(undefined2 **)(lVar5 + 0x28) <= &local_d0) &&
          (&local_d0 < *(undefined2 **)(lVar5 + 0x28) + (longlong)*(int *)(lVar5 + 0x34) * 0xc)) &&
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
      iVar7 = *(int *)(lVar5 + 0x30);
      if (iVar7 == *(int *)(lVar5 + 0x34)) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,(ForAnyElementType *)(lVar5 + 0x28),(int *)(lVar5 + 0x34));
      }
      *(int *)(lVar5 + 0x30) = iVar7 + 1;
      puVar2 = (undefined1 *)(*(longlong *)(lVar5 + 0x28) + (longlong)iVar7 * 0x18);
      *puVar2 = (undefined1)local_d0;
      puVar2[1] = local_d0._1_1_;
      *(undefined8 *)(puVar2 + 8) = 0;
      *(ITextData **)(puVar2 + 8) = local_c8;
      if (local_c8 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_c8 + 8))(local_c8,local_80);
      }
      *(uint *)(puVar2 + 0x10) = local_c0;
    }
    if (local_c8 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_c8 + 0x10))();
    }
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
  }
  else if (local_98 == 0) {
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       (&local_38,L"UGeometryScriptLibrary_MeshBoneWeightFunctions",
                        L"CopyBonesFromMesh_InvalidTargetMesh",
                        L"CopyBonesFromMesh: TargetMesh is Null");
    lVar5 = local_88;
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(pFVar8);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_b0 = (pFVar8->TextData).Reference;
    local_b8 = 0x200;
    if (local_b0 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_b0 + 8))(local_b0,local_7c);
    }
    local_a8 = pFVar8->Flags;
    if (lVar5 != 0) {
      if (((*(undefined2 **)(lVar5 + 0x28) <= &local_b8) &&
          (&local_b8 < *(undefined2 **)(lVar5 + 0x28) + (longlong)*(int *)(lVar5 + 0x34) * 0xc)) &&
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
      iVar7 = *(int *)(lVar5 + 0x30);
      if (iVar7 == *(int *)(lVar5 + 0x34)) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,(ForAnyElementType *)(lVar5 + 0x28),(int *)(lVar5 + 0x34));
      }
      *(int *)(lVar5 + 0x30) = iVar7 + 1;
      puVar2 = (undefined1 *)(*(longlong *)(lVar5 + 0x28) + (longlong)iVar7 * 0x18);
      *puVar2 = (undefined1)local_b8;
      puVar2[1] = local_b8._1_1_;
      *(undefined8 *)(puVar2 + 8) = 0;
      *(ITextData **)(puVar2 + 8) = local_b0;
      if (local_b0 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_b0 + 8))(local_b0,local_78);
      }
      *(uint *)(puVar2 + 0x10) = local_a8;
    }
    if (local_b0 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_b0 + 0x10))();
    }
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
    }
  }
  else {
    local_60 = &local_d8;
    local_58 = &local_88;
    local_50 = local_res18;
    local_68 = &local_60;
    local_70 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshBoneWeightFunctions::CopyBonesFromMesh'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
               ::Call;
    UDynamicMesh::EditMesh
              (local_90,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_70,
               GeneralEdit,Unknown,false);
  }
  *(longlong *)param_3 = local_d8;
  return;
}

// execCopyBonesFromSkeleton @ 14cdfaff0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_MeshBoneWeightFunctions::execCopyBonesFromSkeleton
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  FProperty *pFVar2;
  code *pcVar3;
  UDynamicMesh *pUVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  FText *pFVar8;
  undefined2 local_res10 [4];
  undefined2 local_res18 [4];
  undefined1 local_res20 [8];
  undefined2 local_d8;
  ITextData *local_d0;
  uint local_c8;
  undefined2 local_c0;
  ITextData *local_b8;
  uint local_b0;
  longlong local_a8;
  UDynamicMesh *local_a0;
  longlong local_98;
  longlong local_90;
  undefined1 local_88 [4];
  undefined1 local_84 [4];
  undefined1 local_80 [8];
  longlong local_78;
  code *local_70;
  longlong **local_68;
  longlong *local_60;
  undefined2 *local_58;
  longlong *local_50;
  FText local_48;
  FText local_38;
  
  local_98 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_a0 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a0);
  }
  local_res10[0] = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_a8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  pUVar4 = local_a0;
  local_90 = local_a8;
  local_res18[0] = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_78 = local_98;
  if (local_98 == 0) {
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       (&local_48,L"UGeometryScriptLibrary_MeshBoneWeightFunctions",
                        L"CopyBonesFromSkeleton_InvalidSourceSkeleton",
                        L"CopyBonesFromMesh: SourceSkeleton is Null");
    lVar5 = local_90;
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(pFVar8);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_d0 = (pFVar8->TextData).Reference;
    local_d8 = 0x200;
    if (local_d0 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_d0 + 8))(local_d0,local_res20);
    }
    local_c8 = pFVar8->Flags;
    if (lVar5 != 0) {
      if (((*(undefined2 **)(lVar5 + 0x28) <= &local_d8) &&
          (&local_d8 < *(undefined2 **)(lVar5 + 0x28) + (longlong)*(int *)(lVar5 + 0x34) * 0xc)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar7 = *(int *)(lVar5 + 0x30);
      if (iVar7 == *(int *)(lVar5 + 0x34)) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,(ForAnyElementType *)(lVar5 + 0x28),(int *)(lVar5 + 0x34));
      }
      *(int *)(lVar5 + 0x30) = iVar7 + 1;
      puVar1 = (undefined1 *)(*(longlong *)(lVar5 + 0x28) + (longlong)iVar7 * 0x18);
      *puVar1 = (undefined1)local_d8;
      puVar1[1] = local_d8._1_1_;
      *(undefined8 *)(puVar1 + 8) = 0;
      *(ITextData **)(puVar1 + 8) = local_d0;
      if (local_d0 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_d0 + 8))(local_d0,local_88);
      }
      *(uint *)(puVar1 + 0x10) = local_c8;
    }
    if (local_d0 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_d0 + 0x10))();
    }
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
  }
  else {
    if (local_a0 == (UDynamicMesh *)0x0) {
      pFVar8 = FText::AsLocalizable_Advanced_LocText
                         (&local_38,L"UGeometryScriptLibrary_MeshBoneWeightFunctions",
                          L"CopyBonesFromSkeleton_InvalidTargetMesh",
                          L"CopyBonesFromMesh: TargetMesh is Null");
      lVar5 = local_90;
      if (1 < (byte)LogGeometry._0_1_) {
        FText::ToString(pFVar8);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
      }
      local_b8 = (pFVar8->TextData).Reference;
      local_c0 = 0x200;
      if (local_b8 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_b8 + 8))(local_b8,local_84);
      }
      local_b0 = pFVar8->Flags;
      if (lVar5 != 0) {
        if (((*(undefined2 **)(lVar5 + 0x28) <= &local_c0) &&
            (&local_c0 < *(undefined2 **)(lVar5 + 0x28) + (longlong)*(int *)(lVar5 + 0x34) * 0xc))
           && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar7 = *(int *)(lVar5 + 0x30);
        if (iVar7 == *(int *)(lVar5 + 0x34)) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,(ForAnyElementType *)(lVar5 + 0x28),(int *)(lVar5 + 0x34));
        }
        *(int *)(lVar5 + 0x30) = iVar7 + 1;
        puVar1 = (undefined1 *)(*(longlong *)(lVar5 + 0x28) + (longlong)iVar7 * 0x18);
        *puVar1 = (undefined1)local_c0;
        puVar1[1] = local_c0._1_1_;
        *(undefined8 *)(puVar1 + 8) = 0;
        *(ITextData **)(puVar1 + 8) = local_b8;
        if (local_b8 != (ITextData *)0x0) {
          (**(code **)((longlong)*local_b8 + 8))(local_b8,local_80);
        }
        *(uint *)(puVar1 + 0x10) = local_b0;
      }
      if (local_b8 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_b8 + 0x10))();
      }
      if (local_38.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
      }
      *(undefined8 *)param_3 = 0;
      return;
    }
    local_60 = &local_78;
    local_58 = local_res18;
    local_50 = &local_90;
    local_68 = &local_60;
    local_70 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshBoneWeightFunctions::CopyBonesFromSkeleton'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
               ::Call;
    UDynamicMesh::EditMesh
              (local_a0,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_70,
               AttributeEdit,Unknown,false);
  }
  *(UDynamicMesh **)param_3 = pUVar4;
  return;
}

// execDiscardBonesFromMesh @ 14ce009d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_MeshBoneWeightFunctions::execDiscardBonesFromMesh
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  FProperty *pFVar2;
  code *pcVar3;
  longlong lVar4;
  UDynamicMesh *pUVar5;
  bool bVar6;
  int iVar7;
  FText *this;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  longlong local_78;
  UDynamicMesh *local_70;
  code *local_68;
  undefined1 *local_60;
  FText local_58;
  undefined2 local_48;
  ITextData *local_40;
  uint local_38;
  
  local_70 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_70,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_70);
  }
  local_78 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  pUVar5 = local_70;
  lVar4 = local_78;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_70 == (UDynamicMesh *)0x0) {
    this = FText::AsLocalizable_Advanced_LocText
                     (&local_58,L"UGeometryScriptLibrary_MeshBoneWeightFunctions",
                      L"DiscardBonesFromMesh_InvalidTargetMesh",
                      L"DiscardBonesFromMesh: TargetMesh is Null");
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(this);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_40 = (this->TextData).Reference;
    local_48 = 0x200;
    if (local_40 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_40 + 8))(local_40,local_res18);
    }
    local_38 = this->Flags;
    if (lVar4 != 0) {
      if (((*(undefined2 **)(lVar4 + 0x28) <= &local_48) &&
          (&local_48 < *(undefined2 **)(lVar4 + 0x28) + (longlong)*(int *)(lVar4 + 0x34) * 0xc)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar7 = *(int *)(lVar4 + 0x30);
      if (iVar7 == *(int *)(lVar4 + 0x34)) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,(ForAnyElementType *)(lVar4 + 0x28),(int *)(lVar4 + 0x34));
      }
      *(int *)(lVar4 + 0x30) = iVar7 + 1;
      puVar1 = (undefined1 *)(*(longlong *)(lVar4 + 0x28) + (longlong)iVar7 * 0x18);
      *puVar1 = (undefined1)local_48;
      puVar1[1] = local_48._1_1_;
      *(undefined8 *)(puVar1 + 8) = 0;
      *(ITextData **)(puVar1 + 8) = local_40;
      if (local_40 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_40 + 8))(local_40,local_res20);
      }
      *(uint *)(puVar1 + 0x10) = local_38;
    }
    if (local_40 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_40 + 0x10))();
    }
    if (local_58.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
    }
    *(undefined8 *)param_3 = 0;
    return;
  }
  local_60 = local_res10;
  local_res10[0] = 0;
  local_68 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshBoneWeightFunctions::DiscardBonesFromMesh'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
             ::Call;
  UDynamicMesh::EditMesh
            (local_70,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_68,
             AttributeEdit,Unknown,false);
  *(UDynamicMesh **)param_3 = pUVar5;
  return;
}

// execGetAllBonesInfo @ 14ce029d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_MeshBoneWeightFunctions::execGetAllBonesInfo
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  FProperty *pFVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  FText *this;
  void **ppvVar7;
  UDynamicMesh *pUVar8;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  longlong local_res20;
  UDynamicMesh *local_98;
  longlong local_90;
  void *local_88;
  undefined8 local_80;
  longlong *local_78;
  void **local_70;
  code *local_68;
  longlong **local_60;
  FText local_58;
  undefined2 local_48;
  ITextData *local_40;
  uint local_38;
  
  local_98 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_88 = (void *)0x0;
  local_80 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_res20 = 0;
  ppvVar7 = &local_88;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar7 = (void **)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  pUVar8 = local_98;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_90 = local_res20;
  if (local_98 == (UDynamicMesh *)0x0) {
    this = FText::AsLocalizable_Advanced_LocText
                     (&local_58,L"UGeometryScriptLibrary_MeshBoneWeightFunctions",
                      L"GetAllBonesInfo_InvalidTargetMesh",L"GetAllBonesInfo: TargetMesh is Null");
    lVar4 = local_90;
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(this);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_40 = (this->TextData).Reference;
    local_48 = 0x200;
    if (local_40 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_40 + 8))(local_40,local_res10);
    }
    local_38 = this->Flags;
    if (lVar4 != 0) {
      if (((*(undefined2 **)(lVar4 + 0x28) <= &local_48) &&
          (&local_48 < *(undefined2 **)(lVar4 + 0x28) + (longlong)*(int *)(lVar4 + 0x34) * 0xc)) &&
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
      *(int *)(lVar4 + 0x30) = iVar6 + 1;
      puVar1 = (undefined1 *)(*(longlong *)(lVar4 + 0x28) + (longlong)iVar6 * 0x18);
      *puVar1 = (undefined1)local_48;
      puVar1[1] = local_48._1_1_;
      *(undefined8 *)(puVar1 + 8) = 0;
      *(ITextData **)(puVar1 + 8) = local_40;
      if (local_40 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_40 + 8))(local_40,local_res18);
      }
      *(uint *)(puVar1 + 0x10) = local_38;
    }
    if (local_40 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_40 + 0x10))();
    }
    pUVar8 = (UDynamicMesh *)0x0;
    if (local_58.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
    }
  }
  else {
    local_78 = &local_90;
    local_60 = &local_78;
    local_68 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshBoneWeightFunctions::GetAllBonesInfo'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_70 = ppvVar7;
    UDynamicMesh::ProcessMesh
              (local_98,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_68
              );
  }
  *(UDynamicMesh **)param_3 = pUVar8;
  if (local_88 != (void *)0x0) {
    FMemory::Free(local_88);
  }
  return;
}

// execGetBoneChildren @ 14ce02e90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_MeshBoneWeightFunctions::execGetBoneChildren
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  FProperty *pFVar2;
  code *pcVar3;
  longlong lVar4;
  int iVar5;
  FText *this;
  void **ppvVar6;
  UDynamicMesh *pUVar7;
  uchar *puVar8;
  bool bVar9;
  uchar local_res10 [8];
  undefined1 local_res18 [8];
  int local_res20 [2];
  undefined8 local_d8;
  undefined2 local_d0;
  ITextData *local_c8;
  uint local_c0;
  longlong local_b8;
  UDynamicMesh *local_b0;
  void *local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined1 local_90 [4];
  undefined1 local_8c [4];
  undefined8 local_88;
  code *local_80;
  longlong **local_78;
  longlong *local_70;
  undefined8 *local_68;
  uchar *local_60;
  void **local_58;
  undefined1 *local_50;
  FText local_48;
  
  local_b0 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b0);
  }
  local_d8 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d8);
  }
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  bVar9 = local_res20[0] != 0;
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_a8 = (void *)0x0;
  local_a0 = 0;
  puVar8 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar8 = param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  local_b8 = 0;
  ppvVar6 = &local_a8;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar6 = (void **)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  pUVar7 = local_b0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_98 = local_b8;
  local_88 = local_d8;
  local_res18[0] = bVar9;
  if (local_b0 == (UDynamicMesh *)0x0) {
    this = FText::AsLocalizable_Advanced_LocText
                     (&local_48,L"UGeometryScriptLibrary_MeshBoneWeightFunctions",
                      L"GetBoneChildren_InvalidTargetMesh",L"GetBoneChildren: TargetMesh is Null");
    lVar4 = local_98;
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(this);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_c8 = (this->TextData).Reference;
    local_d0 = 0x200;
    if (local_c8 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_c8 + 8))(local_c8,local_90);
    }
    local_c0 = this->Flags;
    if (lVar4 != 0) {
      if (((*(undefined2 **)(lVar4 + 0x28) <= &local_d0) &&
          (&local_d0 < *(undefined2 **)(lVar4 + 0x28) + (longlong)*(int *)(lVar4 + 0x34) * 0xc)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar5 = *(int *)(lVar4 + 0x30);
      if (iVar5 == *(int *)(lVar4 + 0x34)) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,(ForAnyElementType *)(lVar4 + 0x28),(int *)(lVar4 + 0x34));
      }
      *(int *)(lVar4 + 0x30) = iVar5 + 1;
      puVar1 = (undefined1 *)(*(longlong *)(lVar4 + 0x28) + (longlong)iVar5 * 0x18);
      *puVar1 = (undefined1)local_d0;
      puVar1[1] = local_d0._1_1_;
      *(undefined8 *)(puVar1 + 8) = 0;
      *(ITextData **)(puVar1 + 8) = local_c8;
      if (local_c8 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_c8 + 8))(local_c8,local_8c);
      }
      *(uint *)(puVar1 + 0x10) = local_c0;
    }
    if (local_c8 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_c8 + 0x10))();
    }
    pUVar7 = (UDynamicMesh *)0x0;
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
  }
  else {
    local_70 = &local_98;
    local_68 = &local_88;
    local_50 = local_res18;
    local_78 = &local_70;
    local_80 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshBoneWeightFunctions::GetBoneChildren'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_60 = puVar8;
    local_58 = ppvVar6;
    UDynamicMesh::ProcessMesh
              (local_b0,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_80
              );
  }
  *(UDynamicMesh **)param_3 = pUVar7;
  if (local_a8 != (void *)0x0) {
    FMemory::Free(local_a8);
  }
  return;
}

// execGetBoneIndex @ 14ce03260

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_MeshBoneWeightFunctions::execGetBoneIndex
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  FProperty *pFVar2;
  code *pcVar3;
  UDynamicMesh *pUVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  FText *this;
  uchar *puVar8;
  uchar *puVar9;
  uchar local_res10 [8];
  uchar local_res18 [8];
  undefined1 local_res20 [8];
  undefined8 local_b8;
  undefined2 local_b0;
  ITextData *local_a8;
  uint local_a0;
  longlong local_98;
  UDynamicMesh *local_90;
  longlong local_88;
  undefined1 local_80 [8];
  undefined8 local_78;
  code *local_70;
  longlong **local_68;
  longlong *local_60;
  uchar *local_58;
  undefined8 *local_50;
  uchar *local_48;
  FText local_40;
  
  local_90 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_90,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_90);
  }
  local_b8 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  puVar9 = param_2->MostRecentPropertyAddress;
  local_res18[0] = '\0';
  local_res18[1] = '\0';
  local_res18[2] = '\0';
  local_res18[3] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar8 = local_res10;
  if (puVar9 != (uchar *)0x0) {
    puVar8 = puVar9;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_98 = 0;
  puVar9 = local_res18;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar9 = param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  pUVar4 = local_90;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_88 = local_98;
  local_78 = local_b8;
  if (local_90 == (UDynamicMesh *)0x0) {
    this = FText::AsLocalizable_Advanced_LocText
                     (&local_40,L"UGeometryScriptLibrary_MeshBoneWeightFunctions",
                      L"GetBoneIndex_InvalidTargetMesh",L"GetBoneIndex: TargetMesh is Null");
    lVar5 = local_88;
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(this);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_a8 = (this->TextData).Reference;
    local_b0 = 0x200;
    if (local_a8 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_a8 + 8))(local_a8,local_res20);
    }
    local_a0 = this->Flags;
    if (lVar5 != 0) {
      if (((*(undefined2 **)(lVar5 + 0x28) <= &local_b0) &&
          (&local_b0 < *(undefined2 **)(lVar5 + 0x28) + (longlong)*(int *)(lVar5 + 0x34) * 0xc)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar7 = *(int *)(lVar5 + 0x30);
      if (iVar7 == *(int *)(lVar5 + 0x34)) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,(ForAnyElementType *)(lVar5 + 0x28),(int *)(lVar5 + 0x34));
      }
      *(int *)(lVar5 + 0x30) = iVar7 + 1;
      puVar1 = (undefined1 *)(*(longlong *)(lVar5 + 0x28) + (longlong)iVar7 * 0x18);
      *puVar1 = (undefined1)local_b0;
      puVar1[1] = local_b0._1_1_;
      *(undefined8 *)(puVar1 + 8) = 0;
      *(ITextData **)(puVar1 + 8) = local_a8;
      if (local_a8 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_a8 + 8))(local_a8,local_80);
      }
      *(uint *)(puVar1 + 0x10) = local_a0;
    }
    if (local_a8 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_a8 + 0x10))();
    }
    if (local_40.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_40.TextData.Reference + 0x10))();
    }
    *(undefined8 *)param_3 = 0;
  }
  else {
    local_60 = &local_88;
    local_50 = &local_78;
    local_68 = &local_60;
    local_70 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshBoneWeightFunctions::GetBoneIndex'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_58 = puVar9;
    local_48 = puVar8;
    UDynamicMesh::ProcessMesh
              (local_90,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_70
              );
    *(UDynamicMesh **)param_3 = pUVar4;
  }
  return;
}

// execGetBoneInfo @ 14ce035d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_MeshBoneWeightFunctions::execGetBoneInfo
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  FProperty *pFVar2;
  undefined2 *puVar3;
  code *pcVar4;
  UDynamicMesh *pUVar5;
  longlong lVar6;
  bool bVar7;
  int iVar8;
  FText *this;
  uchar *puVar9;
  uchar *puVar10;
  undefined1 auStack_1f8 [32];
  undefined2 *local_1d8;
  undefined2 *local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  uchar local_1a8 [8];
  undefined8 local_1a0;
  undefined2 local_198;
  ITextData *local_190;
  uint local_188;
  longlong local_180;
  UDynamicMesh *local_178;
  longlong local_170;
  undefined1 local_168 [4];
  undefined1 local_164 [4];
  undefined8 local_160;
  code *local_158;
  longlong **local_150;
  longlong *local_148;
  undefined8 *local_140;
  uchar *local_138;
  uchar *local_130;
  FText local_128;
  uchar local_118 [16];
  double local_108 [2];
  double local_f8 [2];
  double local_e8 [2];
  double local_d8 [2];
  double local_c8 [2];
  double local_b8 [2];
  double local_a8 [2];
  double local_98 [2];
  double local_88 [2];
  double local_78 [2];
  double local_68 [2];
  double local_58 [2];
  FLinearColor_u_0 local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  local_178 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_178,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_178);
  }
  local_1a0 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1a0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1a0);
  }
  local_1a8[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_1a8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_1a8);
  }
  local_b8[0] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
  local_b8[1] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
  local_58[0] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
  local_58[1] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
  puVar10 = local_1a8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar10 = param_2->MostRecentPropertyAddress;
  }
  local_118[0] = 0xff;
  local_118[1] = 0xff;
  local_118[2] = 0xff;
  local_118[3] = 0xff;
  local_118[4] = '\0';
  local_118[5] = '\0';
  local_118[6] = '\0';
  local_118[7] = '\0';
  local_118[8] = '\0';
  local_118[9] = '\0';
  local_118[10] = '\0';
  local_118[0xb] = '\0';
  local_48 = FLinearColor::White.field0_0x0;
  local_118[0xc] = 0xff;
  local_118[0xd] = 0xff;
  local_118[0xe] = 0xff;
  local_118[0xf] = 0xff;
  local_108[0] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
  local_108[1] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
  local_f8[0] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
  local_f8[1] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
  local_e8[0] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
  local_e8[1] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
  local_d8[0] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
  local_d8[1] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
  local_c8[0] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
  local_c8[1] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
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
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_118,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_118);
  }
  local_180 = 0;
  puVar9 = local_118;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar9 = param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_180,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_180);
  }
  pUVar5 = local_178;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_170 = local_180;
  local_160 = local_1a0;
  if (local_178 == (UDynamicMesh *)0x0) {
    this = FText::AsLocalizable_Advanced_LocText
                     (&local_128,L"UGeometryScriptLibrary_MeshBoneWeightFunctions",
                      L"GetBoneInfo_InvalidTargetMesh",L"GetBoneInfo: TargetMesh is Null");
    lVar6 = local_170;
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(this);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_190 = (this->TextData).Reference;
    local_198 = 0x200;
    if (local_190 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_190 + 8))(local_190,local_168);
    }
    local_188 = this->Flags;
    if (lVar6 != 0) {
      puVar3 = *(undefined2 **)(lVar6 + 0x28);
      if ((puVar3 <= &local_198) && (&local_198 < puVar3 + (longlong)*(int *)(lVar6 + 0x34) * 0xc))
      {
        local_1c0 = (longlong)*(int *)(lVar6 + 0x30);
        local_1b8 = 0x18;
        local_1d8 = &local_198;
        local_1d0 = puVar3;
        local_1c8 = (longlong)*(int *)(lVar6 + 0x34);
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar8 = *(int *)(lVar6 + 0x30);
      if (iVar8 == *(int *)(lVar6 + 0x34)) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,(ForAnyElementType *)(lVar6 + 0x28),(int *)(lVar6 + 0x34));
      }
      *(int *)(lVar6 + 0x30) = iVar8 + 1;
      puVar1 = (undefined1 *)(*(longlong *)(lVar6 + 0x28) + (longlong)iVar8 * 0x18);
      *puVar1 = (undefined1)local_198;
      puVar1[1] = local_198._1_1_;
      *(undefined8 *)(puVar1 + 8) = 0;
      *(ITextData **)(puVar1 + 8) = local_190;
      if (local_190 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_190 + 8))(local_190,local_164);
      }
      *(uint *)(puVar1 + 0x10) = local_188;
    }
    if (local_190 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_190 + 0x10))();
    }
    if (local_128.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_128.TextData.Reference + 0x10))();
    }
    *(undefined8 *)param_3 = 0;
  }
  else {
    local_148 = &local_170;
    local_140 = &local_160;
    local_150 = &local_148;
    local_158 = UE::Core::Private::Function::
                TFunctionRefCaller<`UGeometryScriptLibrary_MeshBoneWeightFunctions::GetBoneInfo'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
                ::Call;
    local_138 = puVar10;
    local_130 = puVar9;
    UDynamicMesh::ProcessMesh
              (local_178,
               (TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_158);
    *(UDynamicMesh **)param_3 = pUVar5;
  }
  return;
}

// execGetLargestVertexBoneWeight @ 14ce04570

void __cdecl
UGeometryScriptLibrary_MeshBoneWeightFunctions::execGetLargestVertexBoneWeight
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  uint *puVar1;
  FProperty *pFVar2;
  UDynamicMesh *pUVar3;
  uchar *puVar4;
  uint *puVar5;
  uchar local_res10 [8];
  undefined1 local_res18 [8];
  undefined4 local_res20 [2];
  uint local_a8 [2];
  uint local_a0 [4];
  FName local_90;
  UDynamicMesh *local_88;
  FName local_80;
  uint *local_78;
  uchar *local_70;
  code *local_68;
  uint **local_60;
  code *local_58;
  FName **local_50;
  FName *local_48;
  undefined1 *local_40;
  uint *local_38;
  code **local_30;
  
  local_88 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_a0[0] = 0;
  local_a0[1] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_a0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_a0);
  }
  puVar1 = (uint *)param_2->MostRecentPropertyAddress;
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar5 = local_a0;
  if (puVar1 != (uint *)0x0) {
    puVar5 = puVar1;
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
  puVar4 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar4 = param_2->MostRecentPropertyAddress;
  }
  local_90 = FSkeletalMeshAttributesShared::DefaultSkinWeightProfileName;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_90,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_90);
  }
  pUVar3 = local_88;
  local_res18[0] = 0;
  local_a8[0] = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_a0[2] = local_res20[0];
  local_78 = local_a0 + 2;
  local_60 = &local_78;
  local_68 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshBoneWeightFunctions::GetLargestVertexBoneWeight'::__l2::<lambda_1>,UE::AnimationCore::FBoneWeight,UE::Geometry::FDynamicMesh3_const_&,UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_const_&>
             ::Call;
  *puVar4 = '\0';
  local_80 = local_90;
  if (local_88 != (UDynamicMesh *)0x0) {
    local_48 = &local_80;
    local_40 = local_res18;
    local_38 = local_a8;
    local_30 = &local_68;
    local_50 = &local_48;
    local_58 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshBoneWeightQuery<UE::AnimationCore::FBoneWeight>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_70 = puVar4;
    UDynamicMesh::ProcessMesh
              (local_88,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_58
              );
    if (*puVar4 != '\0') {
      *puVar5 = local_a8[0] & 0xffff;
      puVar5[1] = (uint)((float)(local_a8[0] >> 0x10) * __real_37800080);
    }
  }
  *(UDynamicMesh **)param_3 = pUVar3;
  return;
}

// execGetMaxBoneWeightIndex @ 14ce05930

void __cdecl
UGeometryScriptLibrary_MeshBoneWeightFunctions::execGetMaxBoneWeightIndex
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  UDynamicMesh *this;
  uchar *puVar3;
  uchar *puVar4;
  uchar local_res10 [8];
  uchar local_res18 [8];
  undefined1 local_res20 [8];
  uchar local_98 [8];
  FName local_90;
  UDynamicMesh *local_88;
  uchar *local_80;
  FName local_78;
  code *local_70;
  uchar **local_68;
  code *local_60;
  undefined8 **local_58;
  FName *local_50;
  uchar *local_48;
  undefined1 *local_40;
  code **local_38;
  
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
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  puVar4 = param_2->MostRecentPropertyAddress;
  local_98[0] = '\0';
  local_98[1] = '\0';
  local_98[2] = '\0';
  local_98[3] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar3 = local_res10;
  if (puVar4 != (uchar *)0x0) {
    puVar3 = puVar4;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_98);
  }
  puVar4 = local_98;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar4 = param_2->MostRecentPropertyAddress;
  }
  local_90 = FSkeletalMeshAttributesShared::DefaultSkinWeightProfileName;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_90,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_90);
  }
  this = local_88;
  FVar2 = local_90;
  local_68 = &local_80;
  local_70 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshBoneWeightFunctions::GetMaxBoneWeightIndex'::__l2::<lambda_1>,bool,UE::Geometry::FDynamicMesh3_const_&,UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_const_&>
             ::Call;
  local_res18[0] = '\0';
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_80 = puVar4;
  puVar4[0] = 0xff;
  puVar4[1] = 0xff;
  puVar4[2] = 0xff;
  puVar4[3] = 0xff;
  local_78 = FVar2;
  local_res20[0] = 0;
  if (this == (UDynamicMesh *)0x0) {
    *puVar3 = '\0';
  }
  else {
    local_50 = &local_78;
    local_48 = local_res18;
    local_40 = local_res20;
    local_38 = &local_70;
    local_58 = &local_50;
    local_60 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshBoneWeightQuery<bool>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    UDynamicMesh::ProcessMesh
              (this,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_60);
    *puVar3 = local_res18[0];
  }
  *(UDynamicMesh **)param_3 = this;
  return;
}

// execGetRootBoneName @ 14ce05d70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_MeshBoneWeightFunctions::execGetRootBoneName
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  FProperty *pFVar2;
  code *pcVar3;
  UDynamicMesh *pUVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  FText *this;
  uchar *puVar8;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  uchar local_res20 [8];
  longlong local_88;
  UDynamicMesh *local_80;
  longlong local_78;
  longlong *local_70;
  uchar *local_68;
  code *local_60;
  longlong **local_58;
  FText local_50;
  undefined2 local_40;
  ITextData *local_38;
  uint local_30;
  
  local_80 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_80,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_80);
  }
  local_res20[0] = '\0';
  local_res20[1] = '\0';
  local_res20[2] = '\0';
  local_res20[3] = '\0';
  local_res20[4] = '\0';
  local_res20[5] = '\0';
  local_res20[6] = '\0';
  local_res20[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_88 = 0;
  puVar8 = local_res20;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar8 = param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  pUVar4 = local_80;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_78 = local_88;
  if (local_80 == (UDynamicMesh *)0x0) {
    this = FText::AsLocalizable_Advanced_LocText
                     (&local_50,L"UGeometryScriptLibrary_MeshBoneWeightFunctions",
                      L"GetRootBoneName_InvalidTargetMesh",L"GetRootBoneName: TargetMesh is Null");
    lVar5 = local_78;
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(this);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_38 = (this->TextData).Reference;
    local_40 = 0x200;
    if (local_38 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38 + 8))(local_38,local_res10);
    }
    local_30 = this->Flags;
    if (lVar5 != 0) {
      if (((*(undefined2 **)(lVar5 + 0x28) <= &local_40) &&
          (&local_40 < *(undefined2 **)(lVar5 + 0x28) + (longlong)*(int *)(lVar5 + 0x34) * 0xc)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar7 = *(int *)(lVar5 + 0x30);
      if (iVar7 == *(int *)(lVar5 + 0x34)) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,(ForAnyElementType *)(lVar5 + 0x28),(int *)(lVar5 + 0x34));
      }
      *(int *)(lVar5 + 0x30) = iVar7 + 1;
      puVar1 = (undefined1 *)(*(longlong *)(lVar5 + 0x28) + (longlong)iVar7 * 0x18);
      *puVar1 = (undefined1)local_40;
      puVar1[1] = local_40._1_1_;
      *(undefined8 *)(puVar1 + 8) = 0;
      *(ITextData **)(puVar1 + 8) = local_38;
      if (local_38 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_38 + 8))(local_38,local_res18);
      }
      *(uint *)(puVar1 + 0x10) = local_30;
    }
    if (local_38 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38 + 0x10))();
    }
    if (local_50.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_50.TextData.Reference + 0x10))();
    }
    *(undefined8 *)param_3 = 0;
    return;
  }
  local_70 = &local_78;
  local_58 = &local_70;
  local_60 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshBoneWeightFunctions::GetRootBoneName'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  local_68 = puVar8;
  UDynamicMesh::ProcessMesh
            (local_80,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_60);
  *(UDynamicMesh **)param_3 = pUVar4;
  return;
}

// execGetVertexBoneWeights @ 14ce09ad0

void __cdecl
UGeometryScriptLibrary_MeshBoneWeightFunctions::execGetVertexBoneWeights
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  void **ppvVar1;
  FProperty *pFVar2;
  UDynamicMesh *pUVar3;
  uchar *puVar4;
  void **ppvVar5;
  uchar local_res10 [8];
  uchar local_res18 [8];
  undefined1 local_res20 [8];
  undefined4 local_b8 [2];
  undefined4 local_b0 [2];
  UDynamicMesh *local_a8;
  FName local_a0;
  void *local_98;
  undefined8 local_90;
  FName local_88;
  undefined4 *local_80;
  void **local_78;
  code *local_70;
  undefined4 **local_68;
  code *local_60;
  undefined8 **local_58;
  FName *local_50;
  undefined1 *local_48;
  uchar *local_40;
  code **local_38;
  
  local_a8 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  local_b8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_b8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_b8);
  }
  local_98 = (void *)0x0;
  local_90 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  ppvVar1 = (void **)param_2->MostRecentPropertyAddress;
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  ppvVar5 = &local_98;
  if (ppvVar1 != (void **)0x0) {
    ppvVar5 = ppvVar1;
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
  puVar4 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar4 = param_2->MostRecentPropertyAddress;
  }
  local_a0 = FSkeletalMeshAttributesShared::DefaultSkinWeightProfileName;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a0);
  }
  pUVar3 = local_a8;
  local_res20[0] = 0;
  local_b0[0] = local_b8[0];
  local_80 = local_b0;
  local_68 = &local_80;
  local_70 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshBoneWeightFunctions::GetVertexBoneWeights'::__l2::<lambda_1>,bool,UE::Geometry::FDynamicMesh3_const_&,UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_const_&>
             ::Call;
  local_88 = local_a0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res18[0] = '\0';
  local_78 = ppvVar5;
  if (local_a8 != (UDynamicMesh *)0x0) {
    local_50 = &local_88;
    local_48 = local_res20;
    local_40 = local_res18;
    local_38 = &local_70;
    local_58 = &local_50;
    local_60 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshBoneWeightQuery<bool>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    UDynamicMesh::ProcessMesh
              (local_a8,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_60
              );
  }
  *puVar4 = local_res18[0];
  *(UDynamicMesh **)param_3 = pUVar3;
  if (local_98 != (void *)0x0) {
    FMemory::Free(local_98);
  }
  return;
}

// execMeshCopyBoneWeights @ 14ce0ce10

void __cdecl
UGeometryScriptLibrary_MeshBoneWeightFunctions::execMeshCopyBoneWeights
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDynamicMesh *pUVar2;
  uchar *puVar3;
  uchar local_res10 [8];
  FName local_res18;
  FName local_res20;
  UDynamicMesh *local_68;
  FName local_60;
  FName local_58;
  FName *local_50;
  FName *local_48;
  code *local_40;
  undefined8 **local_38;
  
  local_68 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  puVar3 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  local_res20 = FSkeletalMeshAttributesShared::DefaultSkinWeightProfileName;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18 = FSkeletalMeshAttributesShared::DefaultSkinWeightProfileName;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  pUVar2 = local_68;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_60 = local_res18;
  local_58 = local_res20;
  *puVar3 = '\0';
  if (local_68 != (UDynamicMesh *)0x0) {
    local_50 = &local_60;
    local_48 = &local_58;
    local_38 = &local_50;
    local_40 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshBoneWeightFunctions::MeshCopyBoneWeights'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
               ::Call;
    UDynamicMesh::EditMesh
              (local_68,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_40,
               GeneralEdit,Unknown,false);
  }
  *(UDynamicMesh **)param_3 = pUVar2;
  return;
}

// execMeshCreateBoneWeights @ 14ce0cfc0

void __cdecl
UGeometryScriptLibrary_MeshBoneWeightFunctions::execMeshCreateBoneWeights
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDynamicMesh *pUVar2;
  uchar *puVar3;
  bool bVar4;
  uchar local_res10 [8];
  undefined1 local_res18 [8];
  int local_res20 [2];
  FName local_68;
  UDynamicMesh *local_60;
  FName local_58;
  code *local_50;
  undefined8 **local_48;
  FName *local_40;
  uchar *local_38;
  undefined1 *local_30;
  
  local_60 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_60,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_60);
  }
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20[0] = 0;
  puVar3 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  bVar4 = local_res20[0] != 0;
  local_68 = FSkeletalMeshAttributesShared::DefaultSkinWeightProfileName;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  pUVar2 = local_60;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_58 = local_68;
  local_res18[0] = bVar4;
  *puVar3 = '\0';
  if (local_60 != (UDynamicMesh *)0x0) {
    local_40 = &local_58;
    local_30 = local_res18;
    local_48 = &local_40;
    local_50 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshBoneWeightFunctions::MeshCreateBoneWeights'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
               ::Call;
    local_38 = puVar3;
    UDynamicMesh::EditMesh
              (local_60,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_50,
               GeneralEdit,Unknown,false);
  }
  *(UDynamicMesh **)param_3 = pUVar2;
  return;
}

// execMeshHasBoneWeights @ 14ce0d170

void __cdecl
UGeometryScriptLibrary_MeshBoneWeightFunctions::execMeshHasBoneWeights
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDynamicMesh *pUVar2;
  uchar *puVar3;
  uchar local_res10 [8];
  uchar local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_88 [8];
  UDynamicMesh *local_80;
  FName local_78;
  FName local_70;
  code *local_68;
  undefined1 *local_60;
  code *local_58;
  undefined8 **local_50;
  FName *local_48;
  uchar *local_40;
  undefined1 *local_38;
  code **local_30;
  
  local_80 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_80,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_80);
  }
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  puVar3 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  local_78 = FSkeletalMeshAttributesShared::DefaultSkinWeightProfileName;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  pUVar2 = local_80;
  local_res20[0] = 0;
  local_res18[0] = '\0';
  local_88[0] = 0;
  local_60 = local_res20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_68 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshBoneWeightFunctions::MeshHasBoneWeights'::__l2::<lambda_1>,bool,UE::Geometry::FDynamicMesh3_const_&,UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_const_&>
             ::Call;
  local_70 = local_78;
  if (local_80 == (UDynamicMesh *)0x0) {
    *puVar3 = '\0';
  }
  else {
    local_48 = &local_70;
    local_40 = local_res18;
    local_38 = local_88;
    local_30 = &local_68;
    local_50 = &local_48;
    local_58 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshBoneWeightQuery<bool>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    UDynamicMesh::ProcessMesh
              (local_80,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_58
              );
    *puVar3 = local_res18[0];
  }
  *(UDynamicMesh **)param_3 = pUVar2;
  return;
}

// execPruneBoneWeights @ 14ce0d300

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_MeshBoneWeightFunctions::execPruneBoneWeights
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  FProperty *pFVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  FText *this;
  void **ppvVar7;
  UDynamicMesh *pUVar8;
  undefined2 local_res10 [4];
  undefined2 local_res18 [4];
  undefined1 local_res20 [8];
  undefined2 local_c8;
  ITextData *local_c0;
  uint local_b8;
  longlong local_b0;
  FName local_a8;
  UDynamicMesh *local_a0;
  void *local_98;
  undefined8 local_90;
  longlong local_88;
  undefined1 local_80 [8];
  FName local_78;
  code *local_70;
  longlong **local_68;
  longlong *local_60;
  void **local_58;
  undefined2 *local_50;
  FName *local_48;
  FText local_40;
  
  local_a0 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a0);
  }
  local_98 = (void *)0x0;
  local_90 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_res10[0] = 0x100;
  ppvVar7 = &local_98;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar7 = (void **)param_2->MostRecentPropertyAddress;
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_a8 = FSkeletalMeshAttributesShared::DefaultSkinWeightProfileName;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  local_b0 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b0);
  }
  pUVar8 = local_a0;
  local_88 = local_b0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_78 = local_a8;
  local_res18[0] = local_res10[0];
  if (local_a0 == (UDynamicMesh *)0x0) {
    this = FText::AsLocalizable_Advanced_LocText
                     (&local_40,L"UGeometryScriptLibrary_MeshBoneWeightFunctions",
                      L"PruneBoneWeights_InvalidInput",L"PruneBoneWeights: TargetMesh is Null");
    lVar4 = local_88;
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(this);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_c0 = (this->TextData).Reference;
    local_c8 = 0x200;
    if (local_c0 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_c0 + 8))(local_c0,local_res20);
    }
    local_b8 = this->Flags;
    if (lVar4 != 0) {
      if (((*(undefined2 **)(lVar4 + 0x28) <= &local_c8) &&
          (&local_c8 < *(undefined2 **)(lVar4 + 0x28) + (longlong)*(int *)(lVar4 + 0x34) * 0xc)) &&
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
      *(int *)(lVar4 + 0x30) = iVar6 + 1;
      puVar1 = (undefined1 *)(*(longlong *)(lVar4 + 0x28) + (longlong)iVar6 * 0x18);
      *puVar1 = (undefined1)local_c8;
      puVar1[1] = local_c8._1_1_;
      *(undefined8 *)(puVar1 + 8) = 0;
      *(ITextData **)(puVar1 + 8) = local_c0;
      if (local_c0 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_c0 + 8))(local_c0,local_80);
      }
      *(uint *)(puVar1 + 0x10) = local_b8;
    }
    if (local_c0 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_c0 + 0x10))();
    }
    pUVar8 = (UDynamicMesh *)0x0;
    if (local_40.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_40.TextData.Reference + 0x10))();
    }
  }
  else if (*(int *)(ppvVar7 + 1) != 0) {
    local_60 = &local_88;
    local_50 = local_res18;
    local_48 = &local_78;
    local_68 = &local_60;
    local_70 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshBoneWeightFunctions::PruneBoneWeights'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
               ::Call;
    local_58 = ppvVar7;
    UDynamicMesh::EditMesh
              (local_a0,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_70,
               AttributeEdit,Unknown,false);
  }
  *(UDynamicMesh **)param_3 = pUVar8;
  if (local_98 != (void *)0x0) {
    FMemory::Free(local_98);
  }
  return;
}

// execSetAllVertexBoneWeights @ 14ce0f700

void __cdecl
UGeometryScriptLibrary_MeshBoneWeightFunctions::execSetAllVertexBoneWeights
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDynamicMesh *pUVar2;
  TArray<FGeometryScriptBoneWeight,TSizedDefaultAllocator<32>_> *pTVar3;
  UGeometryScriptDebug *local_res10;
  FName local_res18;
  UDynamicMesh *local_res20;
  TArray<FGeometryScriptBoneWeight,TSizedDefaultAllocator<32>_> local_28;
  
  local_res20 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pTVar3 = &local_28;
  if ((TArray<FGeometryScriptBoneWeight,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<FGeometryScriptBoneWeight,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar3 = (TArray<FGeometryScriptBoneWeight,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  local_res18 = FSkeletalMeshAttributesShared::DefaultSkinWeightProfileName;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = SetAllVertexBoneWeights
                     (local_res20,pTVar3,(FGeometryScriptBoneWeightProfile)local_res18,local_res10);
  *(UDynamicMesh **)param_3 = pUVar2;
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// execSetVertexBoneWeights @ 14ce14430

void __cdecl
UGeometryScriptLibrary_MeshBoneWeightFunctions::execSetVertexBoneWeights
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  void **ppvVar1;
  FProperty *pFVar2;
  UDynamicMesh *pUVar3;
  uchar *puVar4;
  void **ppvVar5;
  uchar local_res10 [8];
  uchar local_res18 [8];
  undefined1 local_res20 [8];
  undefined4 local_c8 [2];
  undefined4 local_c0 [2];
  undefined8 local_b8;
  UDynamicMesh *local_b0;
  FName local_a8;
  void *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  FName local_88;
  code *local_80;
  undefined4 **local_78;
  code *local_70;
  undefined8 **local_68;
  undefined4 *local_60;
  void **local_58;
  undefined8 *local_50;
  FName *local_48;
  undefined1 *local_40;
  uchar *local_38;
  code **local_30;
  
  local_b0 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b0);
  }
  local_c8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_c8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_c8);
  }
  local_a0 = (void *)0x0;
  local_98 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a0);
  }
  ppvVar1 = (void **)param_2->MostRecentPropertyAddress;
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  ppvVar5 = &local_a0;
  if (ppvVar1 != (void **)0x0) {
    ppvVar5 = ppvVar1;
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
  puVar4 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar4 = param_2->MostRecentPropertyAddress;
  }
  local_a8 = FSkeletalMeshAttributesShared::DefaultSkinWeightProfileName;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  local_b8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  pUVar3 = local_b0;
  local_res20[0] = 0;
  local_90 = local_b8;
  local_c0[0] = local_c8[0];
  local_60 = local_c0;
  local_50 = &local_90;
  local_78 = &local_60;
  local_80 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshBoneWeightFunctions::SetVertexBoneWeights'::__l2::<lambda_1>,bool,UE::Geometry::FDynamicMesh3_&,UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_&>
             ::Call;
  local_88 = local_a8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res18[0] = '\0';
  local_58 = ppvVar5;
  if (local_b0 != (UDynamicMesh *)0x0) {
    local_48 = &local_88;
    local_40 = local_res20;
    local_38 = local_res18;
    local_30 = &local_80;
    local_68 = &local_48;
    local_70 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshBoneWeightEdit<bool>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
               ::Call;
    UDynamicMesh::EditMesh
              (local_b0,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_70,
               GeneralEdit,Unknown,false);
  }
  *puVar4 = local_res18[0];
  *(UDynamicMesh **)param_3 = pUVar3;
  if (local_a0 != (void *)0x0) {
    FMemory::Free(local_a0);
  }
  return;
}

// execTransferBoneWeightsFromMesh @ 14ce16260

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_MeshBoneWeightFunctions::execTransferBoneWeightsFromMesh
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  FText *pFVar7;
  longlong lVar8;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  longlong local_188;
  undefined2 local_180;
  ITextData *local_178;
  uint local_170;
  undefined2 local_168;
  ITextData *local_160;
  uint local_158;
  longlong local_150;
  longlong local_148;
  UDynamicMesh *local_140;
  longlong local_138 [2];
  FGeometryScriptMeshSelection local_128;
  undefined2 local_118;
  undefined2 uStack_116;
  FNameEntryId FStack_114;
  uint uStack_110;
  uint uStack_10c;
  uint uStack_108;
  undefined4 uStack_104;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined1 local_d8 [8];
  code *local_d0;
  longlong **local_c8;
  FGeometrySelection *local_b8;
  TReferenceControllerBase<1> *pTStack_b0;
  longlong *local_a8;
  undefined8 *local_a0;
  longlong *local_98;
  FGeometrySelection **local_90;
  FText local_88;
  FText local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_140 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_140,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_140);
  }
  local_148 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_148,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_148);
  }
  FStack_114 = FSkeletalMeshAttributesShared::DefaultSkinWeightProfileName.ComparisonIndex.Value;
  uStack_110 = FSkeletalMeshAttributesShared::DefaultSkinWeightProfileName.Number;
  uStack_100 = ___xmm_bff0000000000000bff0000000000000;
  uStack_f8 = _UNK_15076c718;
  local_118 = 0;
  local_f0 = CONCAT31(local_f0._1_3_,1);
  local_ec = 0;
  uStack_e8 = 0;
  uStack_e4 = 0;
  uStack_e0 = 0;
  uStack_10c = FStack_114.Value;
  uStack_108 = uStack_110;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_118,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_118);
  }
  FGeometryScriptMeshSelection::FGeometryScriptMeshSelection(&local_128);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_128,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_128);
  }
  local_150 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_150,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_150);
  }
  local_b8 = local_128.GeoSelection.Object;
  pTStack_b0 = local_128.GeoSelection.SharedReferenceCount.ReferenceController;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_128.GeoSelection.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_128.GeoSelection.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_128.GeoSelection.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  local_68 = CONCAT44(FStack_114.Value,CONCAT22(uStack_116,local_118));
  uStack_60 = CONCAT44(uStack_10c,uStack_110);
  local_58 = CONCAT44(uStack_104,uStack_108);
  local_138[0] = local_150;
  uStack_40 = CONCAT44(local_ec,local_f0);
  uStack_50 = uStack_100;
  local_38 = CONCAT44(uStack_e4,uStack_e8);
  uStack_30 = CONCAT44(uStack_dc,uStack_e0);
  local_48 = uStack_f8;
  local_188 = local_148;
  if (local_140 == (UDynamicMesh *)0x0) {
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_88,L"UGeometryScriptLibrary_MeshBoneWeightFunctions",
                        L"TransferBoneWeightsFromMesh_InvalidSourceMesh",
                        L"TransferBoneWeightsFromMesh: Source Mesh is Null");
    lVar4 = local_138[0];
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(pFVar7);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_178 = (pFVar7->TextData).Reference;
    local_180 = 0x200;
    if (local_178 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_178 + 8))(local_178,local_res10);
    }
    local_170 = pFVar7->Flags;
    if (lVar4 != 0) {
      if (((*(undefined2 **)(lVar4 + 0x28) <= &local_180) &&
          (&local_180 < *(undefined2 **)(lVar4 + 0x28) + (longlong)*(int *)(lVar4 + 0x34) * 0xc)) &&
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
      lVar8 = (longlong)iVar6;
      *(int *)(lVar4 + 0x30) = iVar6 + 1;
      pFVar2 = ((ForAnyElementType *)(lVar4 + 0x28))->Data;
      pFVar2[lVar8 * 0x18] = local_180._0_1_;
      pFVar2[lVar8 * 0x18 + 1] = local_180._1_1_;
      *(undefined8 *)(pFVar2 + lVar8 * 0x18 + 8) = 0;
      *(ITextData **)(pFVar2 + lVar8 * 0x18 + 8) = local_178;
      if (local_178 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_178 + 8))(local_178,local_res18);
      }
      *(uint *)(pFVar2 + lVar8 * 0x18 + 0x10) = local_170;
    }
    if (local_178 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_178 + 0x10))();
    }
    if (local_88.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
    }
  }
  else if (local_148 == 0) {
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_78,L"UGeometryScriptLibrary_MeshBoneWeightFunctions",
                        L"TransferBoneWeightsFromMesh_InvalidTargetMesh",
                        L"TransferBoneWeightsFromMesh: Target Mesh is Null");
    lVar4 = local_138[0];
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(pFVar7);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_160 = (pFVar7->TextData).Reference;
    local_168 = 0x200;
    if (local_160 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_160 + 8))(local_160,local_res20);
    }
    local_158 = pFVar7->Flags;
    if (lVar4 != 0) {
      if (((*(undefined2 **)(lVar4 + 0x28) <= &local_168) &&
          (&local_168 < *(undefined2 **)(lVar4 + 0x28) + (longlong)*(int *)(lVar4 + 0x34) * 0xc)) &&
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
      lVar8 = (longlong)iVar6;
      *(int *)(lVar4 + 0x30) = iVar6 + 1;
      pFVar2 = ((ForAnyElementType *)(lVar4 + 0x28))->Data;
      pFVar2[lVar8 * 0x18] = local_168._0_1_;
      pFVar2[lVar8 * 0x18 + 1] = local_168._1_1_;
      *(undefined8 *)(pFVar2 + lVar8 * 0x18 + 8) = 0;
      *(ITextData **)(pFVar2 + lVar8 * 0x18 + 8) = local_160;
      if (local_160 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_160 + 8))(local_160,local_d8);
      }
      *(uint *)(pFVar2 + lVar8 * 0x18 + 0x10) = local_158;
    }
    if (local_160 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_160 + 0x10))();
    }
    if (local_78.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
    }
  }
  else {
    local_a8 = local_138;
    local_a0 = &local_68;
    local_98 = &local_188;
    local_90 = &local_b8;
    local_c8 = &local_a8;
    local_d0 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshBoneWeightFunctions::TransferBoneWeightsFromMesh'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    UDynamicMesh::ProcessMesh
              (local_140,
               (TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_d0);
  }
  lVar4 = local_188;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_b0);
  *(longlong *)param_3 = lVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_128.GeoSelection.SharedReferenceCount.ReferenceController);
  return;
}

