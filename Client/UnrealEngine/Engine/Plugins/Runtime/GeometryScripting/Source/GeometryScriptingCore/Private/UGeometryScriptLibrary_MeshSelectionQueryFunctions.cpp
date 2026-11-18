// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 12

// StaticClass @ 14ce1ff70

UClass * __cdecl UGeometryScriptLibrary_MeshSelectionQueryFunctions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSelectionQueryFunctions.InnerSingleton
      == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_MeshSelectionQueryFunctions"
               ,&Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSelectionQueryFunctions.
                 InnerSingleton,
               StaticRegisterNativesUGeometryScriptLibrary_MeshSelectionQueryFunctions,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryScriptLibrary_MeshSelectionQueryFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshSelectionQueryFunctions>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSelectionQueryFunctions.
         InnerSingleton;
}

// UGeometryScriptLibrary_MeshSelectionQueryFunctions @ 14ce26be0

UGeometryScriptLibrary_MeshSelectionQueryFunctions * __thiscall
UGeometryScriptLibrary_MeshSelectionQueryFunctions::
UGeometryScriptLibrary_MeshSelectionQueryFunctions
          (UGeometryScriptLibrary_MeshSelectionQueryFunctions *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UGeometryScriptLibrary_MeshSelectionQueryFunctions__6B_;
  return this;
}

// UGeometryScriptLibrary_MeshSelectionQueryFunctions @ 14ce26c10

UGeometryScriptLibrary_MeshSelectionQueryFunctions * __thiscall
UGeometryScriptLibrary_MeshSelectionQueryFunctions::
UGeometryScriptLibrary_MeshSelectionQueryFunctions
          (UGeometryScriptLibrary_MeshSelectionQueryFunctions *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UGeometryScriptLibrary_MeshSelectionQueryFunctions__6B_;
  return this;
}

// ~UGeometryScriptLibrary_MeshSelectionQueryFunctions @ 14ce27430

void __thiscall
UGeometryScriptLibrary_MeshSelectionQueryFunctions::
~UGeometryScriptLibrary_MeshSelectionQueryFunctions
          (UGeometryScriptLibrary_MeshSelectionQueryFunctions *this)

{
  *(undefined ***)this = &___7UGeometryScriptLibrary_MeshSelectionQueryFunctions__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// operator() @ 14ce38ef0

void __thiscall
`UGeometryScriptLibrary_MeshSelectionQueryFunctions::GetMeshSelectionBoundaryLoops'::__l2::
<lambda_1>::operator()(void *this,FDynamicMesh3 *param_1)

{
  int *piVar1;
  uint *puVar2;
  undefined8 *puVar3;
  FScriptContainerElement *pFVar4;
  ForAnyElementType *pFVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  longlong lVar9;
  FSharedReferencer<1> FVar10;
  undefined8 uVar11;
  bool bVar12;
  uint uVar13;
  atomic<int> aVar14;
  int iVar15;
  TReferenceControllerBase<1> *pTVar16;
  ulonglong uVar17;
  TReferenceControllerBase<1> *pTVar18;
  uint *puVar19;
  TReferenceControllerBase<1> *pTVar20;
  undefined1 local_res18 [8];
  uint local_res20;
  TReferenceControllerBase<1> *local_1e8;
  FSharedReferencer<1> local_1e0;
  FScriptContainerElement local_1d8;
  FScriptContainerElement local_1d0 [8];
  TReferenceControllerBase<1> *local_1c8;
  FSharedReferencer<1> local_1c0;
  longlong local_1b8;
  TArray<int,TSizedDefaultAllocator<32>_> local_1b0;
  undefined8 local_1a0;
  FSharedReferencer<1> local_198;
  undefined8 local_190;
  FSharedReferencer<1> local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  TArray<int,TSizedDefaultAllocator<32>_> *local_168;
  code *local_160;
  TArray<int,TSizedDefaultAllocator<32>_> **local_158;
  undefined1 local_148 [136];
  TOptional<TArray<bool,TSizedDefaultAllocator<32>_>_>_u_0 local_c0;
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_a8;
  undefined8 local_68;
  undefined4 local_60;
  ForAnyElementType local_58;
  
  local_168 = &local_1b0;
  local_158 = &local_168;
  local_1b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b0.ArrayNum = 0;
  local_1b0.ArrayMax = 0;
  local_160 = UE::Core::Private::Function::
              TFunctionRefCaller<``UGeometryScriptLibrary_MeshSelectionQueryFunctions::GetMeshSelectionBoundaryLoops'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,int>
              ::Call;
  FGeometryScriptMeshSelection::ProcessByTriangleID
            (*(FGeometryScriptMeshSelection **)this,param_1,
             (TFunctionRef<void___cdecl(int)> *)&local_160,false);
  UE::Geometry::FMeshRegionBoundaryLoops::FMeshRegionBoundaryLoops
            ((FMeshRegionBoundaryLoops *)local_148,param_1,&local_1b0,false);
  bVar12 = UE::Geometry::FMeshRegionBoundaryLoops::Compute((FMeshRegionBoundaryLoops *)local_148);
  *(bool *)*(undefined8 *)((longlong)this + 8) = !bVar12;
  **(int **)((longlong)this + 0x10) = local_148._16_4_;
  pFVar5 = *(ForAnyElementType **)((longlong)this + 0x18);
  uVar13 = **(uint **)((longlong)this + 0x10);
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
  }
  if (*(int *)((longlong)&pFVar5[1].Data + 4) < (int)uVar13) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar13,pFVar5,*(int *)&pFVar5[1].Data,(int *)((longlong)&pFVar5[1].Data + 4));
  }
  pFVar5 = *(ForAnyElementType **)((longlong)this + 0x20);
  uVar13 = **(uint **)((longlong)this + 0x10);
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
  }
  piVar1 = (int *)((longlong)&pFVar5[1].Data + 4);
  if (*piVar1 < (int)uVar13) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar13,pFVar5,*(int *)&pFVar5[1].Data,piVar1);
  }
  local_res20 = 0;
  if (0 < **(int **)((longlong)this + 0x10)) {
    local_1b8 = 0;
    do {
      lVar9 = local_1b8;
      uVar13 = 0;
      if ((int)local_res20 < (int)local_148._16_4_) {
        uVar13 = ~local_res20 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar11 = local_148._8_8_;
      local_1e8 = (TReferenceControllerBase<1> *)0x0;
      local_1e0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_1d8 = (FScriptContainerElement)0x0;
      pTVar16 = ::operator_new(0x20);
      if (pTVar16 == (TReferenceControllerBase<1> *)0x0) {
        local_198.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        pTVar18 = (TReferenceControllerBase<1> *)&DAT_00000010;
      }
      else {
        pTVar18 = pTVar16 + 1;
        pTVar16->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_V__TArray_U__TVector_N_Math_UE__V__TSizedDefaultAllocator__0CA______00_SharedPointerInternals__6B_
        ;
        pTVar16->SharedReferenceCount = (atomic<int>)0x1;
        pTVar16->WeakReferenceCount = (atomic<int>)0x1;
        pTVar16[1]._padding_ = 0;
        pTVar16[1].SharedReferenceCount = (atomic<int>)0x0;
        pTVar16[1].WeakReferenceCount = (atomic<int>)0x0;
        if ((pTVar18 == (TReferenceControllerBase<1> *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("InObject != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x246,L""), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        LOCK();
        pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
        UNLOCK();
        local_198.ReferenceController = pTVar16;
      }
      FVar10.ReferenceController = local_198.ReferenceController;
      local_1a0 = 0;
      local_1e8 = pTVar18;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&local_1e0,&local_198);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_198.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar10.ReferenceController);
      if ((local_1e8 == (TReferenceControllerBase<1> *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      local_1e8->SharedReferenceCount = (atomic<int>)0x0;
      if ((int)local_1e8->WeakReferenceCount < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,(ForAnyElementType *)local_1e8,0,(int *)&local_1e8->WeakReferenceCount);
      }
      local_1d8 = (FScriptContainerElement)0x1;
      if ((local_1e8 == (TReferenceControllerBase<1> *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar13 = *(uint *)(uVar11 + lVar9 + 0x10);
      if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
      }
      if ((int)local_1e8->WeakReferenceCount < (int)uVar13) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,uVar13,(ForAnyElementType *)local_1e8,(int)local_1e8->SharedReferenceCount
                   ,(int *)&local_1e8->WeakReferenceCount);
      }
      puVar19 = *(uint **)(uVar11 + lVar9 + 8);
      pTVar16 = (TReferenceControllerBase<1> *)(uVar11 + lVar9 + 8);
      iVar15 = *(int *)(uVar11 + lVar9 + 0x10);
      puVar2 = puVar19 + iVar15;
      while( true ) {
        if (*(int *)(uVar11 + lVar9 + 0x10) != iVar15) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res18);
        }
        if (puVar19 == puVar2) break;
        uVar13 = *puVar19;
        if ((local_1e8 == (TReferenceControllerBase<1> *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pTVar18 = local_1e8;
        uVar17 = (ulonglong)(uVar13 & 0x1ff);
        lVar6 = *(longlong *)
                 ((param_1->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar13 >> 9) * 8);
        puVar3 = (undefined8 *)(lVar6 + uVar17 * 0x18);
        local_180 = *puVar3;
        uStack_178 = puVar3[1];
        local_170 = *(undefined8 *)(lVar6 + 0x10 + uVar17 * 0x18);
        if ((((FScriptContainerElement *)local_1e8->_padding_ <=
              (FScriptContainerElement *)&local_180) &&
            ((FScriptContainerElement *)&local_180 <
             (FScriptContainerElement *)local_1e8->_padding_ +
             (longlong)(int)local_1e8->WeakReferenceCount * 0x18)) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        aVar14 = pTVar18->SharedReferenceCount;
        if (aVar14 == pTVar18->WeakReferenceCount) {
          aVar14 = (atomic<int>)
                   UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,(ForAnyElementType *)pTVar18,(int *)&pTVar18->WeakReferenceCount
                             );
        }
        puVar19 = puVar19 + 1;
        pTVar18->SharedReferenceCount = (atomic<int>)((int)aVar14 + 1);
        pFVar7 = (FScriptContainerElement *)pTVar18->_padding_;
        pFVar4 = pFVar7 + (longlong)(int)aVar14 * 0x18;
        *(undefined8 *)pFVar4 = local_180;
        *(undefined8 *)(pFVar4 + 8) = uStack_178;
        *(undefined8 *)(pFVar7 + (longlong)(int)aVar14 * 0x18 + 0x10) = local_170;
      }
      local_1d0[0] = (FScriptContainerElement)0x0;
      local_1c8 = (TReferenceControllerBase<1> *)0x0;
      local_1c0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pTVar18 = ::operator_new(0x20);
      if (pTVar18 == (TReferenceControllerBase<1> *)0x0) {
        local_188.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        pTVar20 = (TReferenceControllerBase<1> *)&DAT_00000010;
      }
      else {
        pTVar18->SharedReferenceCount = (atomic<int>)0x1;
        pTVar20 = pTVar18 + 1;
        pTVar18->WeakReferenceCount = (atomic<int>)0x1;
        pTVar18->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_V__TArray_HV__TSizedDefaultAllocator__0CA______00_SharedPointerInternals__6B_
        ;
        pTVar18[1]._padding_ = 0;
        pTVar18[1].SharedReferenceCount = (atomic<int>)0x0;
        pTVar18[1].WeakReferenceCount = (atomic<int>)0x0;
        if ((pTVar20 == (TReferenceControllerBase<1> *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("InObject != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x246,L""), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        LOCK();
        pTVar18->SharedReferenceCount = (atomic<int>)((int)pTVar18->SharedReferenceCount + 1);
        UNLOCK();
        local_188.ReferenceController = pTVar18;
      }
      FVar10.ReferenceController = local_188.ReferenceController;
      local_190 = 0;
      local_1c8 = pTVar20;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&local_1c0,&local_188);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_188.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar10.ReferenceController);
      uVar13 = local_res20;
      if ((local_1c8 == (TReferenceControllerBase<1> *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      local_1c8->SharedReferenceCount = (atomic<int>)0x0;
      if ((int)local_1c8->WeakReferenceCount < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,(ForAnyElementType *)local_1c8,0,(int *)&local_1c8->WeakReferenceCount);
      }
      local_1d0[0] = (FScriptContainerElement)0x3;
      if ((local_1c8 == (TReferenceControllerBase<1> *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x44d,L""), bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pTVar18 = local_1c8;
      if (local_1c8 != pTVar16) {
        if ((FScriptContainerElement *)local_1c8->_padding_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((FScriptContainerElement *)local_1c8->_padding_);
        }
        pTVar18->_padding_ = (longlong)pTVar16->_padding_;
        pTVar16->_padding_ = 0;
        pTVar18->SharedReferenceCount = *(atomic<int> *)(uVar11 + lVar9 + 0x10);
        pTVar18->WeakReferenceCount = *(atomic<int> *)(uVar11 + lVar9 + 0x14);
        *(undefined8 *)(uVar11 + lVar9 + 0x10) = 0;
      }
      pFVar5 = *(ForAnyElementType **)((longlong)this + 0x20);
      if (((pFVar5->Data <= (FScriptContainerElement *)&local_1e8) &&
          ((FScriptContainerElement *)&local_1e8 <
           pFVar5->Data + (longlong)*(int *)((longlong)&pFVar5[1].Data + 4) * 0x18)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar15 = *(int *)&pFVar5[1].Data;
      piVar1 = (int *)((longlong)&pFVar5[1].Data + 4);
      if (iVar15 == *piVar1) {
        iVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,pFVar5,piVar1);
      }
      *(int *)&pFVar5[1].Data = iVar15 + 1;
      pFVar4 = pFVar5->Data + (longlong)iVar15 * 0x18;
      *(TReferenceControllerBase<1> **)pFVar4 = local_1e8;
      *(TReferenceControllerBase<1> **)(pFVar4 + 8) = local_1e0.ReferenceController;
      if (local_1e0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_1e0.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_1e0.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar4[0x10] = local_1d8;
      pFVar5 = *(ForAnyElementType **)((longlong)this + 0x18);
      if (((pFVar5->Data <= local_1d0) &&
          (local_1d0 < pFVar5->Data + (longlong)*(int *)((longlong)&pFVar5[1].Data + 4) * 0x18)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar15 = *(int *)&pFVar5[1].Data;
      piVar1 = (int *)((longlong)&pFVar5[1].Data + 4);
      if (iVar15 == *piVar1) {
        iVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,pFVar5,piVar1);
      }
      *(int *)&pFVar5[1].Data = iVar15 + 1;
      pFVar4 = pFVar5->Data + (longlong)iVar15 * 0x18;
      *pFVar4 = local_1d0[0];
      *(TReferenceControllerBase<1> **)(pFVar4 + 8) = local_1c8;
      *(TReferenceControllerBase<1> **)(pFVar4 + 0x10) = local_1c0.ReferenceController;
      if (local_1c0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_1c0.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_1c0.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1c0.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1e0.ReferenceController);
      local_res20 = uVar13 + 1;
      local_1b8 = local_1b8 + 0x40;
    } while ((int)local_res20 < **(int **)((longlong)this + 0x10));
  }
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  if (local_a8._12_4_ != -1) {
    local_60 = 0;
    if ((ForElementType<FSetElementId>)local_68 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_68);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_a8);
  }
  if ((local_c0.TypedValue.ArrayMax != -1) &&
     (local_c0.TypedValue.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_c0.TypedValue.AllocatorInstance.Data);
  }
  if (local_148._68_4_ != -1) {
    local_148._128_4_ = 0;
    if ((ForElementType<FSetElementId>)local_148._120_8_ != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_148._120_8_);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)(local_148 + 0x38));
  }
  if ((local_148._44_4_ != -1) &&
     ((FScriptContainerElement *)local_148._32_8_ != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_148._32_8_);
  }
  DestructItems<UE::Geometry::FEdgeLoop,int>((FEdgeLoop *)local_148._8_8_,local_148._16_4_);
  if ((FEdgeLoop *)local_148._8_8_ != (FEdgeLoop *)0x0) {
    FMemory::Free((void *)local_148._8_8_);
  }
  if (local_1b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b0.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14ce39790

void __thiscall
`UGeometryScriptLibrary_MeshSelectionQueryFunctions::GetMeshSelectionBoundingBox'::__l2::<lambda_1>
::operator()(void *this,FDynamicMesh3 *param_1)

{
  EGeometryScriptMeshSelectionType EVar1;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  EVar1 = FGeometryScriptMeshSelection::GetSelectionType(*(FGeometryScriptMeshSelection **)this);
  if (EVar1 == Vertices) {
    local_28._0_8_ = *(undefined8 *)((longlong)this + 8);
    local_18._8_8_ = local_28;
    local_18._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<``UGeometryScriptLibrary_MeshSelectionQueryFunctions::GetMeshSelectionBoundingBox'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>,void,int>
         ::Call;
    local_28._8_8_ = param_1;
    FGeometryScriptMeshSelection::ProcessByVertexID
              (*(FGeometryScriptMeshSelection **)this,param_1,
               (TFunctionRef<void___cdecl(int)> *)local_18,false);
    return;
  }
  EVar1 = FGeometryScriptMeshSelection::GetSelectionType(*(FGeometryScriptMeshSelection **)this);
  local_18._0_8_ = *(undefined8 *)((longlong)this + 8);
  local_28._8_8_ = local_18;
  local_18._8_8_ = param_1;
  if (EVar1 == Edges) {
    local_28._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<``UGeometryScriptLibrary_MeshSelectionQueryFunctions::GetMeshSelectionBoundingBox'::__l2::<lambda_1>::operator()'::__l9::<lambda_2>,void,int>
         ::Call;
    FGeometryScriptMeshSelection::ProcessByEdgeID
              (*(FGeometryScriptMeshSelection **)this,param_1,
               (TFunctionRef<void___cdecl(int)> *)local_28,false);
    return;
  }
  local_28._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<``UGeometryScriptLibrary_MeshSelectionQueryFunctions::GetMeshSelectionBoundingBox'::__l2::<lambda_1>::operator()'::__l11::<lambda_3>,void,int>
       ::Call;
  FGeometryScriptMeshSelection::ProcessByTriangleID
            (*(FGeometryScriptMeshSelection **)this,param_1,
             (TFunctionRef<void___cdecl(int)> *)local_28,false);
  return;
}

// GetMeshSelectionBoundaryLoops @ 14ce6bcd0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshSelectionQueryFunctions::GetMeshSelectionBoundaryLoops
          (UDynamicMesh *param_1,FGeometryScriptMeshSelection *param_2,
          TArray<FGeometryScriptIndexList,TSizedDefaultAllocator<32>_> *param_3,
          TArray<FGeometryScriptPolyPath,TSizedDefaultAllocator<32>_> *param_4,int *param_5,
          bool *param_6,UGeometryScriptDebug *param_7)

{
  FText *pFVar1;
  undefined1 local_48 [16];
  FGeometryScriptMeshSelection *local_38;
  bool *local_30;
  int *local_28;
  TArray<FGeometryScriptIndexList,TSizedDefaultAllocator<32>_> *local_20;
  TArray<FGeometryScriptPolyPath,TSizedDefaultAllocator<32>_> *local_18;
  
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_48,L"UGeometryScriptLibrary_MeshSelectionQueryFunctions",
                        L"GetMeshSelectionBoundaryLoops_InvalidInput",
                        L"GetMeshSelectionBoundaryLoops: TargetMesh is Null");
    UE::Geometry::AppendError(param_7,InvalidInputs,pFVar1);
    if ((ITextData *)local_48._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_48._0_8_ + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->GeoSelection).SharedReferenceCount.ReferenceController);
    return (UDynamicMesh *)0x0;
  }
  local_28 = param_5;
  local_30 = param_6;
  *param_6 = true;
  *param_5 = 0;
  local_48._8_8_ = &local_38;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshSelectionQueryFunctions::GetMeshSelectionBoundaryLoops'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
       ::Call;
  local_38 = param_2;
  local_20 = param_3;
  local_18 = param_4;
  UDynamicMesh::ProcessMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)local_48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->GeoSelection).SharedReferenceCount.ReferenceController);
  return param_1;
}

// GetMeshSelectionBoundingBox @ 14ce6bdb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshSelectionQueryFunctions::GetMeshSelectionBoundingBox
          (UDynamicMesh *param_1,FGeometryScriptMeshSelection *param_2,TBox<double> *param_3,
          bool *param_4,UGeometryScriptDebug *param_5)

{
  FText *pFVar1;
  undefined1 local_d8 [32];
  double local_b8;
  double dStack_b0;
  double dStack_a8;
  double dStack_a0;
  undefined1 local_98;
  undefined4 uStack_97;
  undefined2 uStack_93;
  undefined1 uStack_91;
  double local_90;
  double dStack_88;
  double local_80;
  double dStack_78;
  double local_70;
  double dStack_68;
  FGeometryScriptMeshSelection *local_60;
  double *local_58;
  
  dStack_78 = _UNK_150a9e6d8;
  local_80 = ___xmm_ffefffffffffffff7fefffffffffffff;
  dStack_68 = _UNK_1508ffb58;
  local_70 = ___xmm_ffefffffffffffffffefffffffffffff;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_d8,L"UGeometryScriptLibrary_MeshSelectionQueryFunctions",
                        L"GetMeshSelectionBoundingBox_InvalidInput",
                        L"GetMeshSelectionBoundingBox: TargetMesh is Null");
    UE::Geometry::AppendError(param_5,InvalidInputs,pFVar1);
    if ((ITextData *)local_d8._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_d8._0_8_ + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->GeoSelection).SharedReferenceCount.ReferenceController);
    return (UDynamicMesh *)0x0;
  }
  local_58 = &local_90;
  local_d8._8_8_ = &local_60;
  local_90 = ___xmm_7fefffffffffffff7fefffffffffffff;
  dStack_88 = _UNK_150a9e648;
  local_d8._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshSelectionQueryFunctions::GetMeshSelectionBoundingBox'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
       ::Call;
  *param_4 = true;
  local_60 = param_2;
  UDynamicMesh::ProcessMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)local_d8);
  if (((((dStack_78 == __real_ffefffffffffffff) && (local_70 == __real_ffefffffffffffff)) &&
       (dStack_68 == __real_ffefffffffffffff)) &&
      ((local_90 == __real_7fefffffffffffff && (dStack_88 == __real_7fefffffffffffff)))) &&
     (local_80 == __real_7fefffffffffffff)) {
    local_98 = 0;
    uStack_97 = 0;
    (param_3->Min).field0_0x0._s_0.X = 0.0;
    (param_3->Min).field0_0x0._s_0.Y = 0.0;
    uStack_93 = 0;
    uStack_91 = 0;
    (param_3->Min).field0_0x0._s_0.Z = 0.0;
    (param_3->Max).field0_0x0._s_0.X = 0.0;
    (param_3->Max).field0_0x0._s_0.Y = 0.0;
    (param_3->Max).field0_0x0._s_0.Z = 0.0;
  }
  else {
    *param_4 = false;
    local_b8 = local_80;
    dStack_b0 = dStack_78;
    dStack_a8 = local_70;
    dStack_a0 = dStack_68;
    if (((dStack_78 < local_90) || (local_70 < dStack_88)) || (dStack_68 < local_80)) {
      local_98 = 0;
    }
    else {
      local_98 = 1;
    }
    (param_3->Min).field0_0x0._s_0.X = local_90;
    (param_3->Min).field0_0x0._s_0.Y = dStack_88;
    (param_3->Min).field0_0x0._s_0.Z = local_80;
    (param_3->Max).field0_0x0._s_0.X = dStack_78;
    (param_3->Max).field0_0x0._s_0.Y = local_70;
    (param_3->Max).field0_0x0._s_0.Z = dStack_68;
  }
  param_3->IsValid = local_98;
  param_3->Pad[0] = (char)uStack_97;
  param_3->Pad[1] = (char)((uint)uStack_97 >> 8);
  param_3->Pad[2] = (char)((uint)uStack_97 >> 0x10);
  param_3->Pad[3] = (char)((uint)uStack_97 >> 0x18);
  param_3->Pad[4] = (char)uStack_93;
  param_3->Pad[5] = (char)((ushort)uStack_93 >> 8);
  param_3->Pad[6] = uStack_91;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->GeoSelection).SharedReferenceCount.ReferenceController);
  return param_1;
}

// GetPrivateStaticClass @ 14ce6d470

UClass * __cdecl UGeometryScriptLibrary_MeshSelectionQueryFunctions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSelectionQueryFunctions.InnerSingleton
      == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_MeshSelectionQueryFunctions"
               ,&Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSelectionQueryFunctions.
                 InnerSingleton,
               StaticRegisterNativesUGeometryScriptLibrary_MeshSelectionQueryFunctions,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryScriptLibrary_MeshSelectionQueryFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshSelectionQueryFunctions>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSelectionQueryFunctions.
         InnerSingleton;
}

// StaticRegisterNativesUGeometryScriptLibrary_MeshSelectionQueryFunctions @ 14ce75140

void __cdecl
UGeometryScriptLibrary_MeshSelectionQueryFunctions::
StaticRegisterNativesUGeometryScriptLibrary_MeshSelectionQueryFunctions(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr =
       Z_Construct_UClass_UGeometryScriptLibrary_MeshSelectionQueryFunctions_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetMeshSelectionBoundaryLoops @ 14ce92fd0

void __cdecl
UGeometryScriptLibrary_MeshSelectionQueryFunctions::execGetMeshSelectionBoundaryLoops
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FGeometryScriptPolyPath **ppFVar1;
  FProperty *pFVar2;
  UGeometryScriptDebug *pUVar3;
  FText *pFVar4;
  uchar *puVar5;
  UDynamicMesh *pUVar6;
  FGeometryScriptPolyPath **ppFVar7;
  FGeometryScriptIndexList **ppFVar8;
  uchar *puVar9;
  uchar local_res10 [8];
  undefined8 *local_res18;
  uchar local_res20 [8];
  FGeometryScriptPolyPath *local_c8;
  undefined8 local_c0;
  FGeometryScriptIndexList *local_b8;
  undefined8 local_b0;
  UGeometryScriptDebug *local_a8;
  UDynamicMesh *local_a0;
  FGeometryScriptMeshSelection local_98;
  undefined1 local_88 [16];
  FGeometrySelection *local_78;
  TReferenceControllerBase<1> *pTStack_70;
  FGeometrySelection **local_68;
  uchar *local_60;
  uchar *local_58;
  FGeometryScriptIndexList **local_50;
  FGeometryScriptPolyPath **local_48;
  
  local_a0 = (UDynamicMesh *)0x0;
  local_res18 = param_3;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a0);
  }
  FGeometryScriptMeshSelection::FGeometryScriptMeshSelection(&local_98);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_b8 = (FGeometryScriptIndexList *)0x0;
  local_b0 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  local_c8 = (FGeometryScriptPolyPath *)0x0;
  local_c0 = 0;
  ppFVar8 = &local_b8;
  if ((FGeometryScriptIndexList **)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptIndexList **)0x0) {
    ppFVar8 = (FGeometryScriptIndexList **)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  ppFVar1 = (FGeometryScriptPolyPath **)param_2->MostRecentPropertyAddress;
  local_res20[0] = '\0';
  local_res20[1] = '\0';
  local_res20[2] = '\0';
  local_res20[3] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  ppFVar7 = &local_c8;
  if (ppFVar1 != (FGeometryScriptPolyPath **)0x0) {
    ppFVar7 = ppFVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  puVar5 = param_2->MostRecentPropertyAddress;
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar9 = local_res20;
  if (puVar5 != (uchar *)0x0) {
    puVar9 = puVar5;
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
  local_a8 = (UGeometryScriptDebug *)0x0;
  puVar5 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar5 = param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  pUVar6 = local_a0;
  pUVar3 = local_a8;
  local_78 = local_98.GeoSelection.Object;
  pTStack_70 = local_98.GeoSelection.SharedReferenceCount.ReferenceController;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_98.GeoSelection.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_98.GeoSelection.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_98.GeoSelection.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  if (local_a0 == (UDynamicMesh *)0x0) {
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_88,L"UGeometryScriptLibrary_MeshSelectionQueryFunctions",
                        L"GetMeshSelectionBoundaryLoops_InvalidInput",
                        L"GetMeshSelectionBoundaryLoops: TargetMesh is Null");
    UE::Geometry::AppendError(pUVar3,InvalidInputs,pFVar4);
    pUVar6 = (UDynamicMesh *)0x0;
    if ((ITextData *)local_88._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_88._0_8_ + 0x10))();
    }
  }
  else {
    local_68 = &local_78;
    *puVar5 = '\x01';
    local_88._8_8_ = &local_68;
    puVar9[0] = '\0';
    puVar9[1] = '\0';
    puVar9[2] = '\0';
    puVar9[3] = '\0';
    local_88._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_MeshSelectionQueryFunctions::GetMeshSelectionBoundaryLoops'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
         ::Call;
    local_60 = puVar5;
    local_58 = puVar9;
    local_50 = ppFVar8;
    local_48 = ppFVar7;
    UDynamicMesh::ProcessMesh
              (local_a0,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)local_88)
    ;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_70);
  *local_res18 = pUVar6;
  DestructItems<FGeometryScriptPolyPath,int>(local_c8,(int)local_c0);
  if (local_c8 != (FGeometryScriptPolyPath *)0x0) {
    FMemory::Free(local_c8);
  }
  DestructItems<FGeometryScriptIndexList,int>(local_b8,(int)local_b0);
  if (local_b8 != (FGeometryScriptIndexList *)0x0) {
    FMemory::Free(local_b8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.GeoSelection.SharedReferenceCount.ReferenceController);
  return;
}

// execGetMeshSelectionBoundingBox @ 14ce93320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UGeometryScriptLibrary_MeshSelectionQueryFunctions::execGetMeshSelectionBoundingBox
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  double *pdVar2;
  FProperty *pFVar3;
  bool bVar4;
  UGeometryScriptDebug *pUVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  FText *pFVar11;
  double *pdVar12;
  uchar *puVar13;
  UDynamicMesh *this;
  undefined1 auStack_178 [32];
  uchar local_158 [8];
  UGeometryScriptDebug *local_150;
  UDynamicMesh *local_148 [2];
  FGeometryScriptMeshSelection local_138;
  undefined1 local_128 [32];
  double local_108;
  double dStack_100;
  double dStack_f8;
  double dStack_f0;
  undefined1 local_e8;
  undefined4 uStack_e7;
  undefined2 uStack_e3;
  undefined1 uStack_e1;
  double local_e0;
  double dStack_d8;
  double local_d0;
  double dStack_c8;
  double local_c0;
  double dStack_b8;
  FGeometrySelection **local_b0;
  double *local_a8;
  FGeometrySelection *local_98;
  TReferenceControllerBase<1> *pTStack_90;
  double local_88 [6];
  undefined1 local_58;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStack_178;
  local_148[0] = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_148,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_148);
  }
  FGeometryScriptMeshSelection::FGeometryScriptMeshSelection(&local_138);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_138,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_138);
  }
  local_58 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_88,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_88);
  }
  pdVar2 = (double *)param_2->MostRecentPropertyAddress;
  local_158[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pdVar12 = local_88;
  if (pdVar2 != (double *)0x0) {
    pdVar12 = pdVar2;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_158,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_158);
  }
  local_150 = (UGeometryScriptDebug *)0x0;
  puVar13 = local_158;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar13 = param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_150,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_150);
  }
  this = local_148[0];
  pUVar5 = local_150;
  local_98 = local_138.GeoSelection.Object;
  pTStack_90 = local_138.GeoSelection.SharedReferenceCount.ReferenceController;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_138.GeoSelection.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_138.GeoSelection.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_138.GeoSelection.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  if (local_148[0] == (UDynamicMesh *)0x0) {
    pFVar11 = FText::AsLocalizable_Advanced_LocText
                        ((FText *)local_128,L"UGeometryScriptLibrary_MeshSelectionQueryFunctions",
                         L"GetMeshSelectionBoundingBox_InvalidInput",
                         L"GetMeshSelectionBoundingBox: TargetMesh is Null");
    UE::Geometry::AppendError(pUVar5,InvalidInputs,pFVar11);
    this = (UDynamicMesh *)0x0;
    if ((ITextData *)local_128._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_128._0_8_ + 0x10))();
    }
  }
  else {
    local_b0 = &local_98;
    local_a8 = &local_e0;
    local_128._8_8_ = &local_b0;
    local_e0 = ___xmm_7fefffffffffffff7fefffffffffffff;
    dStack_d8 = _UNK_150a9e648;
    local_128._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_MeshSelectionQueryFunctions::GetMeshSelectionBoundingBox'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
         ::Call;
    *puVar13 = '\x01';
    local_d0 = ___xmm_ffefffffffffffff7fefffffffffffff;
    dStack_c8 = _UNK_150a9e6d8;
    local_c0 = ___xmm_ffefffffffffffffffefffffffffffff;
    dStack_b8 = _UNK_1508ffb58;
    UDynamicMesh::ProcessMesh
              (this,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)local_128);
    dVar10 = dStack_b8;
    dVar9 = local_c0;
    dVar8 = local_d0;
    dVar7 = dStack_d8;
    dVar6 = local_e0;
    if (((((dStack_c8 == __real_ffefffffffffffff) && (local_c0 == __real_ffefffffffffffff)) &&
         (dStack_b8 == __real_ffefffffffffffff)) &&
        ((local_e0 == __real_7fefffffffffffff && (dStack_d8 == __real_7fefffffffffffff)))) &&
       (local_d0 == __real_7fefffffffffffff)) {
      local_e8 = 0;
      uStack_e7 = 0;
      *pdVar12 = 0.0;
      pdVar12[1] = 0.0;
      uStack_e3 = 0;
      uStack_e1 = 0;
      pdVar12[2] = 0.0;
      pdVar12[3] = 0.0;
      pdVar12[4] = 0.0;
      pdVar12[5] = 0.0;
    }
    else {
      bVar4 = dStack_c8 < local_e0;
      *puVar13 = '\0';
      local_108 = dVar8;
      dStack_100 = dStack_c8;
      dStack_f8 = local_c0;
      dStack_f0 = dVar10;
      if (((bVar4) || (dVar9 < dVar7)) || (dVar10 < dVar8)) {
        local_e8 = 0;
      }
      else {
        local_e8 = 1;
      }
      *pdVar12 = dVar6;
      pdVar12[1] = dVar7;
      pdVar12[2] = dVar8;
      pdVar12[3] = dStack_c8;
      pdVar12[4] = local_c0;
      pdVar12[5] = dVar10;
    }
    pdVar12[6] = (double)CONCAT17(uStack_e1,CONCAT25(uStack_e3,CONCAT41(uStack_e7,local_e8)));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_90);
  *(UDynamicMesh **)param_3 = this;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_138.GeoSelection.SharedReferenceCount.ReferenceController);
  return;
}

