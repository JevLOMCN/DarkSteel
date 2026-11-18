// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 10

// StaticClass @ 14cbd1630

UClass * __cdecl UDeleteGeometrySelectionCommand::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDeleteGeometrySelectionCommand.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"DeleteGeometrySelectionCommand",
               &Z_Registration_Info_UClass_UDeleteGeometrySelectionCommand.InnerSingleton,
               StaticRegisterNativesUDeleteGeometrySelectionCommand,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDeleteGeometrySelectionCommand>,
               InternalVTableHelperCtorCaller<UDeleteGeometrySelectionCommand>,local_res8,
               UGeometrySelectionEditCommand::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDeleteGeometrySelectionCommand.InnerSingleton;
}

// UDeleteGeometrySelectionCommand @ 14cbdd420

UDeleteGeometrySelectionCommand * __thiscall
UDeleteGeometrySelectionCommand::UDeleteGeometrySelectionCommand
          (UDeleteGeometrySelectionCommand *this,FVTableHelper *param_1)

{
  UGeometrySelectionEditCommand::UGeometrySelectionEditCommand
            ((UGeometrySelectionEditCommand *)this,param_1);
  *(undefined ***)this = &___7UDeleteGeometrySelectionCommand__6B_;
  return this;
}

// UDeleteGeometrySelectionCommand @ 14cbdd450

UDeleteGeometrySelectionCommand * __thiscall
UDeleteGeometrySelectionCommand::UDeleteGeometrySelectionCommand
          (UDeleteGeometrySelectionCommand *this,FObjectInitializer *param_1)

{
  UGeometrySelectionEditCommand::UGeometrySelectionEditCommand
            ((UGeometrySelectionEditCommand *)this,param_1);
  *(undefined ***)this = &___7UDeleteGeometrySelectionCommand__6B_;
  return this;
}

// ~UDeleteGeometrySelectionCommand @ 14cbe02d0

void __thiscall
UDeleteGeometrySelectionCommand::~UDeleteGeometrySelectionCommand
          (UDeleteGeometrySelectionCommand *this)

{
  *(undefined ***)this = &___7UDeleteGeometrySelectionCommand__6B_;
  UGeometrySelectionEditCommand::~UGeometrySelectionEditCommand
            ((UGeometrySelectionEditCommand *)this);
  return;
}

// operator() @ 14cbe0ce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`UDeleteGeometrySelectionCommand::ExecuteCommandForSelection'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  undefined8 uVar3;
  void *_Src;
  FDynamicMeshChange *pFVar4;
  FDynamicMeshChange *this_00;
  code *pcVar5;
  undefined8 *puVar6;
  bool bVar7;
  FPolygroupSet *pFVar8;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar9;
  TUniquePtr<UE::Geometry::FDynamicMeshChange,TDefaultDelete<UE::Geometry::FDynamicMeshChange>_>
  TVar10;
  int iVar11;
  ForAnyElementType FVar12;
  int iVar13;
  int iVar14;
  ForAnyElementType FVar15;
  longlong lVar16;
  undefined1 auStackY_3d8 [32];
  undefined1 local_398;
  undefined1 local_397;
  undefined1 local_396 [6];
  ForAnyElementType local_390;
  int local_388;
  int local_384;
  uint local_380 [2];
  undefined8 local_378;
  void *local_370;
  FMeshConnectedComponents local_368;
  FScriptContainerElement *local_350;
  int *piStack_348;
  undefined8 local_340;
  TArray<int,TSizedDefaultAllocator<32>_> local_338;
  undefined1 local_328 [16];
  int local_318;
  undefined4 uStack_314;
  int local_310;
  int local_30c;
  int local_308 [2];
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_300;
  undefined8 *local_2f8;
  FScriptContainerElement *local_2f0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_2e8;
  FDynamicMeshEditor local_2e0;
  FDynamicMeshChange *local_2d8;
  code *local_2d0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **local_2c8;
  TArrayView<int_const_,int> local_2c0;
  code *local_2b0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **local_2a8;
  TArray<int,TSizedDefaultAllocator<32>_> local_2a0;
  code *local_288 [2];
  undefined **local_278;
  FDynamicMesh3 *local_270;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_268;
  undefined8 local_260;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_258;
  FPolygroupSet local_208;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_1e8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_198;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_148;
  FDynamicMeshChangeTracker local_f8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_3d8;
  local_370 = this;
  UE::Geometry::FDynamicMeshChangeTracker::FDynamicMeshChangeTracker(&local_f8,param_1);
  if ((*(int *)(**(longlong **)this + 0x54) == 2) && (*(int *)(**(longlong **)this + 0x50) == 2)) {
    local_300 = &local_1e8;
    local_2c8 = &local_300;
    local_2d0 = UE::Core::Private::Function::
                TFunctionRefCaller<``UDeleteGeometrySelectionCommand::ExecuteCommandForSelection'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>,void,int>
                ::Call;
    local_368.Components.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_368.Components.Array.ArrayNum = 0;
    local_368.Components.Array.ArrayMax = 0;
    local_1e8.Elements._0_8_ = 0;
    local_1e8.Elements._8_8_ = 0;
    local_1e8.Elements._32_8_ = 0;
    iVar13 = 0;
    local_1e8.Elements._40_4_ = 0;
    local_1e8.Elements._44_4_ = 0x80;
    local_1e8.Elements._48_4_ = 0xffffffff;
    local_1e8.Elements._52_4_ = 0;
    local_1e8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_1e8.HashSize = 0;
    local_368.Mesh = param_1;
    pFVar8 = UE::Geometry::FPolygroupSet::FPolygroupSet(&local_208,param_1);
    UE::Geometry::EnumeratePolygroupSelectionEdges
              ((FGeometrySelection *)**(undefined8 **)((longlong)this + 8),param_1,pFVar8,
               (TFunctionRef<void___cdecl(int)> *)&local_2d0);
    local_198.Elements._0_8_ = 0;
    local_198.Elements._8_8_ = 0;
    local_198.Elements._32_8_ = 0;
    local_198.Elements._40_4_ = 0;
    local_198.Elements._44_4_ = 0x80;
    local_198.Elements._48_4_ = 0xffffffff;
    local_198.Elements._52_4_ = 0;
    local_198.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_198.HashSize = 0;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Array(&local_1e8,&local_338);
    iVar11 = local_338.ArrayNum;
    pFVar1 = local_338.AllocatorInstance.Data + (longlong)iVar11 * 4;
    FVar15.Data = local_338.AllocatorInstance.Data;
    while( true ) {
      if (local_338.ArrayNum != iVar11) {
        local_398 = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_398);
      }
      if (FVar15.Data == pFVar1) break;
      local_380[0] = *(uint *)FVar15.Data;
      uVar3 = *(undefined8 *)
               (*(longlong *)
                 ((param_1->Edges).Blocks.AllocatorInstance.Data +
                 (ulonglong)(local_380[0] >> 9) * 8) + 8 + (ulonglong)(local_380[0] & 0x1ff) * 0x10)
      ;
      local_378 = uVar3;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (&local_1e8,&local_310,(bool *)local_380);
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (&local_198,&local_30c,(bool *)&local_378);
      if ((int)((ulonglong)uVar3 >> 0x20) != -1) {
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  (&local_198,local_308,(bool *)((longlong)&local_378 + 4));
      }
      FVar15.Data = FVar15.Data + 4;
    }
    if (local_338.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_338.AllocatorInstance.Data);
    }
    local_260 = 0;
    local_278 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<``UDeleteGeometrySelectionCommand::ExecuteCommandForSelection'::`2'::<lambda_1>::operator()'::`5'::<lambda_2>,0,0>
                 ::_vftable_;
    local_268 = &local_1e8;
    local_288[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<``UDeleteGeometrySelectionCommand::ExecuteCommandForSelection'::__l2::<lambda_1>::operator()'::__l5::<lambda_2>,bool,int,int>
                   ::Call;
    local_270 = param_1;
    pTVar9 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Array(&local_198,&local_2a0);
    UE::Geometry::FMeshConnectedComponents::FindTrianglesConnectedToSeeds
              (&local_368,pTVar9,(TFunction<bool___cdecl(int,int)> *)local_288);
    if (local_2a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2a0.AllocatorInstance.Data);
    }
    if (**(char **)((longlong)local_370 + 0x10) != '\0') {
      UE::Geometry::FDynamicMeshChangeTracker::BeginChange(&local_f8);
      piStack_348 = &local_368.Components.Array.ArrayNum;
      local_328._0_8_ = local_368.Components.Array.AllocatorInstance.Data;
      local_318 = local_368.Components.Array.ArrayNum;
      local_340 = CONCAT44(uStack_314,local_368.Components.Array.ArrayNum);
      local_2f0 = local_368.Components.Array.AllocatorInstance.Data +
                  (longlong)local_368.Components.Array.ArrayNum * 8;
      FVar15.Data = local_368.Components.Array.AllocatorInstance.Data;
      local_328._8_8_ = piStack_348;
      while( true ) {
        pFVar1 = local_2f0;
        local_350 = FVar15.Data;
        if (*piStack_348 != (int)local_340) {
          local_397 = 0;
          `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_397);
        }
        if (FVar15.Data == pFVar1) break;
        local_2f8 = *(undefined8 **)FVar15.Data;
        local_390.Data = (FScriptContainerElement *)0x0;
        local_388 = *(int *)(local_2f8 + 1);
        lVar16 = (longlong)local_388;
        _Src = (void *)*local_2f8;
        if (local_388 == 0) {
          local_384 = 0;
          iVar11 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,local_388,0,&local_390,local_388,&local_384);
          memcpy(local_390.Data,_Src,lVar16 << 2);
          iVar11 = local_388;
        }
        pFVar1 = local_390.Data + (longlong)iVar11 * 4;
        FVar12.Data = local_390.Data;
        iVar14 = iVar11;
        while( true ) {
          if (iVar14 != iVar11) {
            local_396[0] = 0;
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_396);
          }
          if (FVar12.Data == pFVar1) break;
          UE::Geometry::FDynamicMeshChangeTracker::SaveTriangle(&local_f8,*(int *)FVar12.Data,true);
          FVar12.Data = FVar12.Data + 4;
          iVar14 = local_388;
        }
        if (local_390.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_390.Data);
        }
        puVar6 = local_2f8;
        if ((*(int *)(local_2f8 + 1) < 1) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_2c0.DataPtr = (int *)*puVar6;
        uVar2 = *local_2c0.DataPtr;
        if ((param_1->TriangleGroups).bIsSet == false) {
          iVar11 = -1;
        }
        else {
          iVar11 = iVar13;
          if ((-1 < (int)uVar2) &&
             ((int)uVar2 <
              (int)((param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                   (param_1->TriangleRefCounts).RefCounts.CurBlockUsed))) {
            lVar16 = (ulonglong)(uVar2 >> 9) * 8;
            if ((ushort)(*(short *)(*(longlong *)
                                     ((param_1->TriangleRefCounts).RefCounts.Blocks.
                                      AllocatorInstance.Data + lVar16) +
                                   (ulonglong)(uVar2 & 0x1ff) * 2) - 1U) < 0xfffe) {
              iVar11 = *(int *)(*(longlong *)
                                 ((param_1->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data
                                 + lVar16) + (ulonglong)(uVar2 & 0x1ff) * 4);
            }
          }
        }
        iVar14 = *(int *)(puVar6 + 1);
        if ((iVar14 < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_2c0.ArrayNum = iVar14;
        FaceGroupUtil::SetGroupID(param_1,&local_2c0,iVar11);
        FVar15.Data = FVar15.Data + 8;
      }
    }
    this = local_370;
    local_198.HashSize = 0;
    if (local_198.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_198.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_198.Elements);
    local_1e8.HashSize = 0;
    if (local_1e8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_1e8.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_1e8.Elements);
    TIndirectArray<UE::Geometry::FMeshConnectedComponents::FComponent,TSizedDefaultAllocator<32>_>::
    ~TIndirectArray<UE::Geometry::FMeshConnectedComponents::FComponent,TSizedDefaultAllocator<32>_>
              (&local_368.Components);
  }
  else {
    local_2e8 = &local_148;
    local_2a8 = &local_2e8;
    local_148.Elements._0_8_ = 0;
    local_148.Elements._8_8_ = 0;
    local_2b0 = UE::Core::Private::Function::
                TFunctionRefCaller<``UDeleteGeometrySelectionCommand::ExecuteCommandForSelection'::__l2::<lambda_1>::operator()'::__l21::<lambda_3>,void,int>
                ::Call;
    local_148.Elements._32_8_ = 0;
    local_148.Elements._40_4_ = 0;
    local_148.Elements._44_4_ = 0x80;
    local_148.Elements._48_4_ = 0xffffffff;
    local_148.Elements._52_4_ = 0;
    local_148.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_148.HashSize = 0;
    UE::Geometry::EnumerateSelectionTriangles
              ((FGeometrySelection *)**(undefined8 **)((longlong)this + 8),param_1,
               (TFunctionRef<void___cdecl(int)> *)&local_2b0,(FPolygroupSet *)0x0);
    if (**(char **)((longlong)this + 0x10) != '\0') {
      UE::Geometry::FDynamicMeshChangeTracker::BeginChange(&local_f8);
      local_258.Elements._0_8_ = 0;
      local_258.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
      local_258.Elements._48_8_ = _UNK_150631d98;
      local_258.Elements._8_8_ = 0;
      local_258.Elements._32_8_ = 0;
      local_258.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_258.HashSize = 0;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=(&local_258,&local_148);
      UE::Geometry::FDynamicMeshChangeTracker::
      SaveTriangles<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
                (&local_f8,&local_258,true);
    }
    local_2e0.Mesh = param_1;
    pTVar9 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Array
                       (&local_148,(TArray<int,TSizedDefaultAllocator<32>_> *)local_328);
    UE::Geometry::FDynamicMeshEditor::RemoveTriangles(&local_2e0,pTVar9,true);
    if ((FScriptContainerElement *)local_328._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_328._0_8_);
    }
    local_148.HashSize = 0;
    if (local_148.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_148.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_148.Elements);
  }
  if (**(char **)((longlong)this + 0x10) != '\0') {
    TVar10 = UE::Geometry::FDynamicMeshChangeTracker::EndChange(&local_f8);
    pFVar4 = *(FDynamicMeshChange **)((longlong)this + 0x18);
    if (pFVar4 != TVar10.Ptr) {
      this_00 = (FDynamicMeshChange *)(pFVar4->OldVertices).AllocatorInstance.Data;
      (pFVar4->OldVertices).AllocatorInstance.Data =
           ((TVar10.Ptr)->OldVertices).AllocatorInstance.Data;
      ((TVar10.Ptr)->OldVertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (this_00 != (FDynamicMeshChange *)0x0) {
        UE::Geometry::FDynamicMeshChange::~FDynamicMeshChange(this_00);
        ::operator_delete(this_00,0x48);
      }
    }
    if (local_2d8 != (FDynamicMeshChange *)0x0) {
      UE::Geometry::FDynamicMeshChange::~FDynamicMeshChange(local_2d8);
      ::operator_delete(local_2d8,0x48);
    }
  }
  UE::Geometry::FDynamicMeshChangeTracker::~FDynamicMeshChangeTracker(&local_f8);
  return;
}

// CanExecuteCommandForSelection @ 14cbe8540

bool __thiscall
UDeleteGeometrySelectionCommand::CanExecuteCommandForSelection
          (UDeleteGeometrySelectionCommand *this,UGeometrySelectionEditCommandArguments *param_1)

{
  if (((param_1->SelectionHandle).Identifier.TargetType != MeshContainer) &&
     ((param_1->SelectionHandle).Identifier.ObjectType != DynamicMesh)) {
    return false;
  }
  return true;
}

// ExecuteCommandForSelection @ 14cbeb380

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDeleteGeometrySelectionCommand::ExecuteCommandForSelection
          (UDeleteGeometrySelectionCommand *this,UGeometrySelectionEditCommandArguments *param_1,
          UInteractiveCommandResult **param_2)

{
  int iVar1;
  IGeometrySelector *pIVar2;
  code *pcVar3;
  FDynamicMeshChange *pFVar4;
  bool bVar5;
  UDynamicMesh *this_00;
  UClass *pUVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  UGeometrySelectionEditCommandArguments *local_res10;
  char local_res20 [8];
  FDynamicMeshChange *local_88;
  FGeometrySelection *local_80;
  FDynamicMeshChange *local_78;
  code *local_70;
  UGeometrySelectionEditCommandArguments ***local_68;
  longlong *local_60 [2];
  undefined1 local_50 [16];
  UGeometrySelectionEditCommandArguments **local_40;
  FGeometrySelection **local_38;
  char *local_30;
  FDynamicMeshChange **local_28;
  
  pIVar2 = (param_1->SelectionHandle).Selector;
  local_res10 = param_1;
  if (pIVar2 == (IGeometrySelector *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8450232585899999270>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\Commands\\DeleteGeometrySelectionCommand.cpp"
                       ,0x26,"BaseSelector != nullptr");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((byte)LogGeometry._0_1_ < 3) {
      return;
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    return;
  }
  if (param_2 != (UInteractiveCommandResult **)0x0) {
    *param_2 = (UInteractiveCommandResult *)0x0;
  }
  if ((((param_1->SelectionHandle).Identifier.TargetType != MeshContainer) &&
      ((param_1->SelectionHandle).Identifier.ObjectType != DynamicMesh)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("SelectionArgs->IsMatchingType(FGeometryIdentifier::ETargetType::MeshContainer, FGeometryIdentifier::EObjectType::DynamicMesh)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\Commands\\DeleteGeometrySelectionCommand.cpp"
                         ,0x33,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this_00 = (UDynamicMesh *)
            FWeakObjectPtr::Get(&(local_res10->SelectionHandle).Identifier.TargetObject.WeakPtr);
  if (this_00 != (UDynamicMesh *)0x0) {
    pUVar6 = Z_Construct_UClass_UDynamicMesh_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar6->_padding_)) goto LAB_14cbeb4a0;
  }
  this_00 = (UDynamicMesh *)0x0;
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("MeshObject != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\Commands\\DeleteGeometrySelectionCommand.cpp"
                     ,0x3c,L"");
  if (bVar5) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_14cbeb4a0:
  local_80 = (local_res10->SelectionHandle).Selection;
  if (*(int *)&(local_80->Selection).Elements.field_0x8 !=
      *(int *)&(local_80->Selection).Elements.field_0x34) {
    local_res20[0] = (**(code **)(local_res10->_padding_ + 0x2b8))();
    local_88 = (FDynamicMeshChange *)0x0;
    local_40 = &local_res10;
    local_38 = &local_80;
    local_30 = local_res20;
    local_28 = &local_88;
    local_68 = &local_40;
    local_70 = UE::Core::Private::Function::
               TFunctionRefCaller<`UDeleteGeometrySelectionCommand::ExecuteCommandForSelection'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
               ::Call;
    UDynamicMesh::EditMesh
              (this_00,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_70,
               GeneralEdit,Unknown,false);
    if (local_res20[0] != '\0') {
      if (local_88 == (FDynamicMeshChange *)0x0) {
        return;
      }
      plVar7 = (longlong *)(**(code **)(local_res10->_padding_ + 0x2c0))();
      pcVar3 = *(code **)(*plVar7 + 0x18);
      uVar8 = (**(code **)(*(longlong *)this + 0x2b0))(this,local_60);
      (*pcVar3)(plVar7,uVar8);
      if (local_60[0] != (longlong *)0x0) {
        (**(code **)(*local_60[0] + 0x10))();
      }
      pcVar3 = *(code **)(pIVar2->_padding_ + 0xd8);
      uVar8 = (**(code **)(*(longlong *)this + 0x2b0))(this,local_50);
      local_78 = local_88;
      local_88 = (FDynamicMeshChange *)0x0;
      uVar9 = (**(code **)(local_res10->_padding_ + 0x2c0))();
      (*pcVar3)(pIVar2,uVar9,1,&local_78,uVar8);
      plVar7 = (longlong *)(**(code **)(local_res10->_padding_ + 0x2c0))();
      (**(code **)(*plVar7 + 0x20))(plVar7);
    }
    pFVar4 = local_88;
    if (local_88 != (FDynamicMeshChange *)0x0) {
      UE::Geometry::FDynamicMeshChange::~FDynamicMeshChange(local_88);
      ::operator_delete(pFVar4,0x48);
    }
  }
  return;
}

// GetCommandShortString @ 14cbee1e0

FText * __thiscall
UDeleteGeometrySelectionCommand::GetCommandShortString
          (UDeleteGeometrySelectionCommand *this,FText *__return_storage_ptr__)

{
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"UDeleteGeometrySelectionCommand",L"ShortString",
             L"Delete Selection");
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14cbef730

UClass * __cdecl UDeleteGeometrySelectionCommand::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDeleteGeometrySelectionCommand.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"DeleteGeometrySelectionCommand",
               &Z_Registration_Info_UClass_UDeleteGeometrySelectionCommand.InnerSingleton,
               StaticRegisterNativesUDeleteGeometrySelectionCommand,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDeleteGeometrySelectionCommand>,
               InternalVTableHelperCtorCaller<UDeleteGeometrySelectionCommand>,local_res8,
               UGeometrySelectionEditCommand::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDeleteGeometrySelectionCommand.InnerSingleton;
}

// StaticRegisterNativesUDeleteGeometrySelectionCommand @ 14cbf6b30

void __cdecl
UDeleteGeometrySelectionCommand::StaticRegisterNativesUDeleteGeometrySelectionCommand(void)

{
  return;
}

