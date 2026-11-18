// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 10

// StaticClass @ 14cbd2e10

UClass * __cdecl UDisconnectGeometrySelectionCommand::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDisconnectGeometrySelectionCommand.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"DisconnectGeometrySelectionCommand",
               &Z_Registration_Info_UClass_UDisconnectGeometrySelectionCommand.InnerSingleton,
               StaticRegisterNativesUDisconnectGeometrySelectionCommand,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDisconnectGeometrySelectionCommand>,
               InternalVTableHelperCtorCaller<UDisconnectGeometrySelectionCommand>,local_res8,
               UGeometrySelectionEditCommand::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDisconnectGeometrySelectionCommand.InnerSingleton;
}

// UDisconnectGeometrySelectionCommand @ 14cbdd480

UDisconnectGeometrySelectionCommand * __thiscall
UDisconnectGeometrySelectionCommand::UDisconnectGeometrySelectionCommand
          (UDisconnectGeometrySelectionCommand *this,FVTableHelper *param_1)

{
  UGeometrySelectionEditCommand::UGeometrySelectionEditCommand
            ((UGeometrySelectionEditCommand *)this,param_1);
  *(undefined ***)this = &___7UDisconnectGeometrySelectionCommand__6B_;
  return this;
}

// UDisconnectGeometrySelectionCommand @ 14cbdd4b0

UDisconnectGeometrySelectionCommand * __thiscall
UDisconnectGeometrySelectionCommand::UDisconnectGeometrySelectionCommand
          (UDisconnectGeometrySelectionCommand *this,FObjectInitializer *param_1)

{
  UGeometrySelectionEditCommand::UGeometrySelectionEditCommand
            ((UGeometrySelectionEditCommand *)this,param_1);
  *(undefined ***)this = &___7UDisconnectGeometrySelectionCommand__6B_;
  return this;
}

// ~UDisconnectGeometrySelectionCommand @ 14cbe02f0

void __thiscall
UDisconnectGeometrySelectionCommand::~UDisconnectGeometrySelectionCommand
          (UDisconnectGeometrySelectionCommand *this)

{
  *(undefined ***)this = &___7UDisconnectGeometrySelectionCommand__6B_;
  UGeometrySelectionEditCommand::~UGeometrySelectionEditCommand
            ((UGeometrySelectionEditCommand *)this);
  return;
}

// operator() @ 14cbe1410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`UDisconnectGeometrySelectionCommand::ExecuteCommandForSelection'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  FDynamicMeshChange *pFVar1;
  FDynamicMeshChange *this_00;
  int iVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  TUniquePtr<UE::Geometry::FDynamicMeshChange,TDefaultDelete<UE::Geometry::FDynamicMeshChange>_>
  TVar4;
  undefined1 auStackY_1c8 [32];
  FDynamicMeshChange *local_198;
  undefined1 local_190 [16];
  FDynamicMeshEditor local_180;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_178;
  undefined1 local_128 [32];
  ForAnyElementType local_108;
  int local_100;
  uint local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  TUniquePtr<UE::Geometry::FDynamicMeshAttributeChangeSet,TDefaultDelete<UE::Geometry::FDynamicMeshAttributeChangeSet>_>
  local_e8;
  int local_e0;
  FDynamicMeshChangeTracker local_d8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  local_fc = 0x80;
  local_128._0_8_ = (FScriptContainerElement *)0x0;
  local_198 = (FDynamicMeshChange *)local_128;
  local_190._8_8_ = &local_198;
  local_128._8_8_ = 0;
  local_108.Data = (FScriptContainerElement *)0x0;
  local_190._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<``UDisconnectGeometrySelectionCommand::ExecuteCommandForSelection'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,int>
       ::Call;
  local_100 = 0;
  local_f8 = 0xffffffff;
  local_f4 = 0;
  local_e8.Ptr = (FDynamicMeshAttributeChangeSet *)0x0;
  local_e0 = 0;
  UE::Geometry::EnumerateSelectionTriangles
            ((FGeometrySelection *)**(undefined8 **)this,param_1,
             (TFunctionRef<void___cdecl(int)> *)local_190,(FPolygroupSet *)0x0);
  UE::Geometry::FDynamicMeshChangeTracker::FDynamicMeshChangeTracker(&local_d8,param_1);
  if (**(char **)((longlong)this + 8) != '\0') {
    UE::Geometry::FDynamicMeshChangeTracker::BeginChange(&local_d8);
    local_178.Elements._0_8_ = 0;
    local_178.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
    local_178.Elements._48_8_ = _UNK_150631d98;
    local_178.Elements._8_8_ = 0;
    local_178.Elements._32_8_ = 0;
    local_178.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_178.HashSize = 0;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
              (&local_178,(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_128);
    UE::Geometry::FDynamicMeshChangeTracker::
    SaveTriangles<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>(&local_d8,&local_178,true)
    ;
  }
  local_180.Mesh = param_1;
  pTVar3 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Array
                     ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_128,
                      (TArray<int,TSizedDefaultAllocator<32>_> *)local_190);
  UE::Geometry::FDynamicMeshEditor::DisconnectTriangles(&local_180,pTVar3,false);
  if ((FScriptContainerElement *)local_190._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_190._0_8_);
  }
  if (**(char **)((longlong)this + 8) != '\0') {
    TVar4 = UE::Geometry::FDynamicMeshChangeTracker::EndChange(&local_d8);
    pFVar1 = *(FDynamicMeshChange **)((longlong)this + 0x10);
    if (pFVar1 != TVar4.Ptr) {
      this_00 = (FDynamicMeshChange *)(pFVar1->OldVertices).AllocatorInstance.Data;
      (pFVar1->OldVertices).AllocatorInstance.Data =
           ((TVar4.Ptr)->OldVertices).AllocatorInstance.Data;
      ((TVar4.Ptr)->OldVertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (this_00 != (FDynamicMeshChange *)0x0) {
        UE::Geometry::FDynamicMeshChange::~FDynamicMeshChange(this_00);
        ::operator_delete(this_00,0x48);
      }
    }
    pFVar1 = local_198;
    if (local_198 != (FDynamicMeshChange *)0x0) {
      UE::Geometry::FDynamicMeshChange::~FDynamicMeshChange(local_198);
      ::operator_delete(pFVar1,0x48);
    }
  }
  UE::Geometry::FDynamicMeshChangeTracker::~FDynamicMeshChangeTracker(&local_d8);
  local_e0 = 0;
  if (local_e8.Ptr != (FDynamicMeshAttributeChangeSet *)0x0) {
    FMemory::Free(local_e8.Ptr);
  }
  iVar2 = SUB84(local_128._8_8_,4);
  local_128._8_8_ = local_128._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)local_128,0,(int *)(local_128 + 0xc));
  }
  local_f8 = 0xffffffff;
  local_f4 = 0;
  local_100 = 0;
  if (0x80 < local_fc) {
    local_fc = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_128 + 0x10),0);
  }
  if (local_108.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data);
  }
  if ((FScriptContainerElement *)local_128._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_128._0_8_);
  }
  return;
}

// CanExecuteCommandForSelection @ 14cbe8560

bool __thiscall
UDisconnectGeometrySelectionCommand::CanExecuteCommandForSelection
          (UDisconnectGeometrySelectionCommand *this,UGeometrySelectionEditCommandArguments *param_1
          )

{
  if (((param_1->SelectionHandle).Identifier.TargetType != MeshContainer) &&
     ((param_1->SelectionHandle).Identifier.ObjectType != DynamicMesh)) {
    return false;
  }
  return true;
}

// ExecuteCommandForSelection @ 14cbeb620

void __thiscall
UDisconnectGeometrySelectionCommand::ExecuteCommandForSelection
          (UDisconnectGeometrySelectionCommand *this,UGeometrySelectionEditCommandArguments *param_1
          ,UInteractiveCommandResult **param_2)

{
  int iVar1;
  code *pcVar2;
  FWeakObjectPtr FVar3;
  IGeometrySelector *pIVar4;
  EObjectType EVar5;
  FDynamicMeshChange *pFVar6;
  bool bVar7;
  UDynamicMesh *this_00;
  UClass *pUVar8;
  longlong *plVar9;
  undefined8 uVar10;
  FMeshChange *this_01;
  UDynamicMesh *pUVar11;
  UObject *pUVar12;
  UGeometrySelectionEditCommandResult *pUVar13;
  char local_res10 [8];
  FDynamicMeshChange *local_res18;
  FGeometrySelection *local_res20;
  FDynamicMeshChange *local_98;
  UDynamicMesh *local_90;
  code *local_88;
  FGeometrySelection ***local_80;
  longlong *local_78 [2];
  longlong *local_68 [2];
  FGeometrySelection **local_58;
  char *local_50;
  FDynamicMeshChange **local_48;
  
  pUVar11 = (UDynamicMesh *)0x0;
  if (param_2 != (UInteractiveCommandResult **)0x0) {
    *param_2 = (UInteractiveCommandResult *)0x0;
  }
  if ((((param_1->SelectionHandle).Identifier.TargetType != MeshContainer) &&
      ((param_1->SelectionHandle).Identifier.ObjectType != DynamicMesh)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("SelectionArgs->IsMatchingType(FGeometryIdentifier::ETargetType::MeshContainer, FGeometryIdentifier::EObjectType::DynamicMesh)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\Commands\\DisconnectGeometrySelectionCommand.cpp"
                         ,0x28,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this_00 = (UDynamicMesh *)
            FWeakObjectPtr::Get(&(param_1->SelectionHandle).Identifier.TargetObject.WeakPtr);
  if (this_00 != (UDynamicMesh *)0x0) {
    pUVar8 = Z_Construct_UClass_UDynamicMesh_NoRegister();
    iVar1 = (int)pUVar8->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar8->_padding_)) goto LAB_14cbeb6da;
  }
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("MeshObject != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\Commands\\DisconnectGeometrySelectionCommand.cpp"
                     ,0x2c,L"");
  this_00 = pUVar11;
  if (bVar7) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14cbeb6da:
  local_res20 = (param_1->SelectionHandle).Selection;
  if (*(int *)&(local_res20->Selection).Elements.field_0x8 !=
      *(int *)&(local_res20->Selection).Elements.field_0x34) {
    local_res10[0] = (**(code **)(param_1->_padding_ + 0x2b8))(param_1);
    local_res18 = (FDynamicMeshChange *)0x0;
    local_58 = &local_res20;
    local_50 = local_res10;
    local_48 = &local_res18;
    local_80 = &local_58;
    local_88 = UE::Core::Private::Function::
               TFunctionRefCaller<`UDisconnectGeometrySelectionCommand::ExecuteCommandForSelection'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
               ::Call;
    UDynamicMesh::EditMesh
              (this_00,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_88,
               GeneralEdit,Unknown,false);
    if ((local_res10[0] != '\0') && (local_res18 != (FDynamicMeshChange *)0x0)) {
      plVar9 = (longlong *)(**(code **)(param_1->_padding_ + 0x2c0))(param_1);
      pcVar2 = *(code **)(*plVar9 + 0x18);
      uVar10 = (**(code **)(*(longlong *)this + 0x2b0))(this,local_78);
      (*pcVar2)(plVar9,uVar10);
      if (local_78[0] != (longlong *)0x0) {
        (**(code **)(*local_78[0] + 0x10))();
      }
      plVar9 = (longlong *)(**(code **)(param_1->_padding_ + 0x2c0))(param_1);
      pcVar2 = *(code **)(*plVar9 + 0x28);
      uVar10 = (**(code **)(*(longlong *)this + 0x2b0))(this,local_68);
      this_01 = ::operator_new(0x40);
      if (this_01 != (FMeshChange *)0x0) {
        local_98 = local_res18;
        local_res18 = (FDynamicMeshChange *)0x0;
        pUVar11 = (UDynamicMesh *)FMeshChange::FMeshChange(this_01,(FDynamicMeshChange *)&local_98);
      }
      local_90 = pUVar11;
      (*pcVar2)(plVar9,this_00,&local_90,uVar10);
      if (local_68[0] != (longlong *)0x0) {
        (**(code **)(*local_68[0] + 0x10))();
      }
      plVar9 = (longlong *)(**(code **)(param_1->_padding_ + 0x2c0))(param_1);
      (**(code **)(*plVar9 + 0x20))(plVar9);
    }
    if (param_2 != (UInteractiveCommandResult **)0x0) {
      pUVar12 = GetTransientPackageAsObject();
      pUVar13 = NewObject<UGeometrySelectionEditCommandResult>(pUVar12);
      EVar5 = (param_1->SelectionHandle).Identifier.ObjectType;
      FVar3 = (param_1->SelectionHandle).Identifier.TargetObject.WeakPtr;
      (pUVar13->SourceHandle).Identifier.TargetType =
           (param_1->SelectionHandle).Identifier.TargetType;
      (pUVar13->SourceHandle).Identifier.ObjectType = EVar5;
      (pUVar13->SourceHandle).Identifier.TargetObject.WeakPtr = FVar3;
      pIVar4 = (param_1->SelectionHandle).Selector;
      (pUVar13->SourceHandle).Selection = (param_1->SelectionHandle).Selection;
      (pUVar13->SourceHandle).Selector = pIVar4;
      UE::Geometry::FGeometrySelection::operator=
                (&pUVar13->OutputSelection,(pUVar13->SourceHandle).Selection);
      *param_2 = (UInteractiveCommandResult *)pUVar13;
    }
    pFVar6 = local_res18;
    if (local_res18 != (FDynamicMeshChange *)0x0) {
      UE::Geometry::FDynamicMeshChange::~FDynamicMeshChange(local_res18);
      ::operator_delete(pFVar6,0x48);
    }
  }
  return;
}

// GetCommandShortString @ 14cbee220

FText * __thiscall
UDisconnectGeometrySelectionCommand::GetCommandShortString
          (UDisconnectGeometrySelectionCommand *this,FText *__return_storage_ptr__)

{
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"UDisconnectGeometrySelectionCommand",L"ShortString",
             L"Disconnect Selection");
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14cbef7f0

UClass * __cdecl UDisconnectGeometrySelectionCommand::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDisconnectGeometrySelectionCommand.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"DisconnectGeometrySelectionCommand",
               &Z_Registration_Info_UClass_UDisconnectGeometrySelectionCommand.InnerSingleton,
               StaticRegisterNativesUDisconnectGeometrySelectionCommand,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDisconnectGeometrySelectionCommand>,
               InternalVTableHelperCtorCaller<UDisconnectGeometrySelectionCommand>,local_res8,
               UGeometrySelectionEditCommand::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDisconnectGeometrySelectionCommand.InnerSingleton;
}

// StaticRegisterNativesUDisconnectGeometrySelectionCommand @ 14cbf6b40

void __cdecl
UDisconnectGeometrySelectionCommand::StaticRegisterNativesUDisconnectGeometrySelectionCommand(void)

{
  return;
}

