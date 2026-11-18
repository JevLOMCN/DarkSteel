// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 12

// StaticClass @ 14cbce7d0

UClass * __cdecl UModifyGeometrySelectionCommand::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UModifyGeometrySelectionCommand.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"ModifyGeometrySelectionCommand",
               &Z_Registration_Info_UClass_UModifyGeometrySelectionCommand.InnerSingleton,
               StaticRegisterNativesUModifyGeometrySelectionCommand,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UModifyGeometrySelectionCommand>,
               InternalVTableHelperCtorCaller<UModifyGeometrySelectionCommand>,local_res8,
               UGeometrySelectionEditCommand::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UModifyGeometrySelectionCommand.InnerSingleton;
}

// UModifyGeometrySelectionCommand @ 14cbdda60

UModifyGeometrySelectionCommand * __thiscall
UModifyGeometrySelectionCommand::UModifyGeometrySelectionCommand
          (UModifyGeometrySelectionCommand *this,FVTableHelper *param_1)

{
  UGeometrySelectionEditCommand::UGeometrySelectionEditCommand
            ((UGeometrySelectionEditCommand *)this,param_1);
  *(undefined ***)this = &___7UModifyGeometrySelectionCommand__6B_;
  return this;
}

// UModifyGeometrySelectionCommand @ 14cbdda90

UModifyGeometrySelectionCommand * __thiscall
UModifyGeometrySelectionCommand::UModifyGeometrySelectionCommand
          (UModifyGeometrySelectionCommand *this,FObjectInitializer *param_1)

{
  UGeometrySelectionEditCommand::UGeometrySelectionEditCommand
            ((UGeometrySelectionEditCommand *)this,param_1);
  *(undefined ***)this = &___7UModifyGeometrySelectionCommand__6B_;
  return this;
}

// ~UModifyGeometrySelectionCommand @ 14cbe0470

void __thiscall
UModifyGeometrySelectionCommand::~UModifyGeometrySelectionCommand
          (UModifyGeometrySelectionCommand *this)

{
  *(undefined ***)this = &___7UModifyGeometrySelectionCommand__6B_;
  UGeometrySelectionEditCommand::~UGeometrySelectionEditCommand
            ((UGeometrySelectionEditCommand *)this);
  return;
}

// AllowEmptySelection @ 14cbe66d0

bool __thiscall
UModifyGeometrySelectionCommand::AllowEmptySelection(UModifyGeometrySelectionCommand *this)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(longlong *)this + 0x2e8))();
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*(longlong *)this + 0x2e8))(this);
    if (iVar1 != 10) {
      return false;
    }
  }
  return true;
}

// CanExecuteCommandForSelection @ 14cbe8580

bool __thiscall
UModifyGeometrySelectionCommand::CanExecuteCommandForSelection
          (UModifyGeometrySelectionCommand *this,UGeometrySelectionEditCommandArguments *param_1)

{
  if (((param_1->SelectionHandle).Identifier.TargetType != MeshContainer) &&
     ((param_1->SelectionHandle).Identifier.ObjectType != DynamicMesh)) {
    return false;
  }
  return true;
}

// ExecuteCommandForSelection @ 14cbeb8c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UModifyGeometrySelectionCommand::ExecuteCommandForSelection
          (UModifyGeometrySelectionCommand *this,UGeometrySelectionEditCommandArguments *param_1,
          UInteractiveCommandResult **param_2)

{
  FGeometrySelection *pFVar1;
  IGeometrySelector *pIVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  FWeakObjectPtr FVar7;
  EObjectType EVar8;
  ulonglong uVar9;
  bool bVar10;
  int iVar11;
  UObject *pUVar12;
  UClass *pUVar13;
  UGeometrySelectionEditCommandResult *pUVar14;
  undefined1 auStackY_168 [32];
  undefined1 local_138;
  undefined1 local_137;
  undefined1 local_136;
  undefined1 local_135;
  undefined1 local_134 [4];
  FGeometrySelectionEditor local_130;
  FGeometrySelectionEditor *local_118;
  code *local_110;
  undefined1 *local_108;
  code *local_100;
  undefined1 *local_f8;
  code *local_f0;
  FGeometrySelectionEditor **local_e8;
  code *local_e0;
  undefined1 *local_d8;
  code *local_d0;
  undefined1 *local_c8;
  code *local_c0;
  undefined1 *local_b8;
  undefined1 local_a8 [8];
  ForAnyElementType local_a0;
  undefined8 local_98;
  TBitArray<FDefaultBitArrayAllocator> local_90;
  undefined8 uStack_70;
  ForElementType<FSetElementId> local_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_168;
  if (param_2 == (UInteractiveCommandResult **)0x0) {
    bVar10 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<8578708823093542963>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\Commands\\ModifyGeometrySelectionCommand.cpp"
                        ,0x33,"Result != nullptr");
    if (bVar10) {
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
  if ((param_1->SelectionHandle).Selector == (IGeometrySelector *)0x0) {
    bVar10 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<8578708823093542968>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\Commands\\ModifyGeometrySelectionCommand.cpp"
                        ,0x38,"SelectionArgs->SelectionHandle.Selector != nullptr");
    if (bVar10) {
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
  if ((((param_1->SelectionHandle).Identifier.TargetType != MeshContainer) &&
      ((param_1->SelectionHandle).Identifier.ObjectType != DynamicMesh)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("SelectionArgs->IsMatchingType(FGeometryIdentifier::ETargetType::MeshContainer, FGeometryIdentifier::EObjectType::DynamicMesh)"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\Commands\\ModifyGeometrySelectionCommand.cpp"
                          ,0x3f,L""), bVar10)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pUVar12 = FWeakObjectPtr::Get(&(param_1->SelectionHandle).Identifier.TargetObject.WeakPtr);
  if (pUVar12 != (UObject *)0x0) {
    pUVar13 = Z_Construct_UClass_UDynamicMesh_NoRegister();
    iVar11 = (int)pUVar13->_padding_;
    if ((iVar11 <= *(int *)(*(longlong *)&pUVar12->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar12->field_0x10 + 0x30) + (longlong)iVar11 * 8) ==
        &pUVar13->_padding_)) goto LAB_14cbeba3d;
  }
  bVar10 = ::FDebug::CheckVerifyFailedImpl2
                     ("MeshObject != nullptr",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\Commands\\ModifyGeometrySelectionCommand.cpp"
                      ,0x43,L"");
  if (bVar10) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_14cbeba3d:
  pFVar1 = (param_1->SelectionHandle).Selection;
  pUVar12 = GetTransientPackageAsObject();
  pUVar14 = NewObject<UGeometrySelectionEditCommandResult>(pUVar12);
  EVar8 = (param_1->SelectionHandle).Identifier.ObjectType;
  FVar7 = (param_1->SelectionHandle).Identifier.TargetObject.WeakPtr;
  (pUVar14->SourceHandle).Identifier.TargetType = (param_1->SelectionHandle).Identifier.TargetType;
  (pUVar14->SourceHandle).Identifier.ObjectType = EVar8;
  (pUVar14->SourceHandle).Identifier.TargetObject.WeakPtr = FVar7;
  uVar4 = *(undefined4 *)((longlong)&(param_1->SelectionHandle).Selection + 4);
  uVar5 = *(undefined4 *)&(param_1->SelectionHandle).Selector;
  uVar6 = *(undefined4 *)((longlong)&(param_1->SelectionHandle).Selector + 4);
  *(undefined4 *)&(pUVar14->SourceHandle).Selection =
       *(undefined4 *)&(param_1->SelectionHandle).Selection;
  *(undefined4 *)((longlong)&(pUVar14->SourceHandle).Selection + 4) = uVar4;
  *(undefined4 *)&(pUVar14->SourceHandle).Selector = uVar5;
  *(undefined4 *)((longlong)&(pUVar14->SourceHandle).Selector + 4) = uVar6;
  (pUVar14->OutputSelection).ElementType = pFVar1->ElementType;
  (pUVar14->OutputSelection).TopologyType = pFVar1->TopologyType;
  iVar11 = (**(code **)(*(longlong *)this + 0x2e8))(this);
  if (iVar11 == 0) {
    pIVar2 = (param_1->SelectionHandle).Selector;
    local_108 = &local_138;
    local_110 = UE::Core::Private::Function::
                TFunctionRefCaller<`UModifyGeometrySelectionCommand::ExecuteCommandForSelection'::__l61::<lambda_1>,bool,UE::Geometry::FGeoSelectionID>
                ::Call;
    local_138 = 0;
    (**(code **)(pIVar2->_padding_ + 0x48))(pIVar2,&pUVar14->OutputSelection,&local_110,0);
  }
  else {
    iVar11 = (**(code **)(*(longlong *)this + 0x2e8))(this);
    if (iVar11 == 1) {
      pIVar2 = (param_1->SelectionHandle).Selector;
      local_f8 = &local_137;
      local_100 = UE::Core::Private::Function::
                  TFunctionRefCaller<`UModifyGeometrySelectionCommand::ExecuteCommandForSelection'::__l65::<lambda_2>,bool,UE::Geometry::FGeoSelectionID>
                  ::Call;
      local_137 = 0;
      (**(code **)(pIVar2->_padding_ + 0x48))(pIVar2,&pUVar14->OutputSelection,&local_100,1);
    }
    else {
      iVar11 = (**(code **)(*(longlong *)this + 0x2e8))(this);
      if (iVar11 == 10) {
        local_130.QueryConfig.TopologyType = Polygroup;
        local_130.TargetSelection = (FGeometrySelection *)0x0;
        local_130.QueryConfig.ElementType = Face;
        local_130.QueryConfig.bOnlyVisible = true;
        local_130.QueryConfig.bHitBackFaces = false;
        local_130.bEnableTopologyIDFiltering = false;
        UE::Geometry::FGeometrySelectionEditor::Initialize
                  (&local_130,pFVar1,pFVar1->TopologyType == Polygroup);
        pIVar2 = (param_1->SelectionHandle).Selector;
        local_118 = &local_130;
        local_e8 = &local_118;
        local_f0 = UE::Core::Private::Function::
                   TFunctionRefCaller<`UModifyGeometrySelectionCommand::ExecuteCommandForSelection'::__l69::<lambda_3>,bool,UE::Geometry::FGeoSelectionID>
                   ::Call;
        (**(code **)(pIVar2->_padding_ + 0x48))(pIVar2,&pUVar14->OutputSelection,&local_f0,0);
      }
      else {
        iVar11 = (**(code **)(*(longlong *)this + 0x2e8))(this);
        if (iVar11 == 0xb) {
          pIVar2 = (param_1->SelectionHandle).Selector;
          local_d8 = &local_136;
          local_e0 = UE::Core::Private::Function::
                     TFunctionRefCaller<`UModifyGeometrySelectionCommand::ExecuteCommandForSelection'::__l73::<lambda_4>,bool,UE::Geometry::FGeoSelectionID>
                     ::Call;
          local_136 = 0;
          (**(code **)(pIVar2->_padding_ + 0x48))(pIVar2,&pUVar14->OutputSelection,&local_e0,1);
          UE::Geometry::CombineSelectionInPlace(&pUVar14->OutputSelection,pFVar1,Subtract);
        }
        else {
          iVar11 = (**(code **)(*(longlong *)this + 0x2e8))(this);
          if (iVar11 == 0x14) {
            pIVar2 = (param_1->SelectionHandle).Selector;
            local_c8 = &local_135;
            local_d0 = UE::Core::Private::Function::
                       TFunctionRefCaller<`UModifyGeometrySelectionCommand::ExecuteCommandForSelection'::__l77::<lambda_5>,bool,UE::Geometry::FGeoSelectionID>
                       ::Call;
            local_135 = 0;
            (**(code **)(pIVar2->_padding_ + 0x48))(pIVar2,&pUVar14->OutputSelection,&local_d0,2);
            UE::Geometry::CombineSelectionInPlace(&pUVar14->OutputSelection,pFVar1,Add);
          }
          else {
            iVar11 = (**(code **)(*(longlong *)this + 0x2e8))(this);
            if (iVar11 == 0x15) {
              local_a8._0_4_ = (pUVar14->OutputSelection).ElementType;
              local_b8 = local_134;
              pIVar2 = (param_1->SelectionHandle).Selector;
              local_a8._4_4_ = (pUVar14->OutputSelection).TopologyType;
              local_a0.Data = (FScriptContainerElement *)0x0;
              local_98 = 0;
              local_90.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
              local_90.NumBits = ___xmm_00000000ffffffff0000008000000000;
              local_90.MaxBits = _UNK_150631d94;
              uStack_70 = _UNK_150631d98;
              local_60 = (ForElementType<FSetElementId>)0x0;
              local_58 = 0;
              local_c0 = UE::Core::Private::Function::
                         TFunctionRefCaller<`UModifyGeometrySelectionCommand::ExecuteCommandForSelection'::__l81::<lambda_6>,bool,UE::Geometry::FGeoSelectionID>
                         ::Call;
              local_134[0] = 0;
              (**(code **)(pIVar2->_padding_ + 0x48))(pIVar2,local_a8,&local_c0,2);
              UE::Geometry::FGeometrySelection::operator=(&pUVar14->OutputSelection,pFVar1);
              UE::Geometry::CombineSelectionInPlace
                        (&pUVar14->OutputSelection,(FGeometrySelection *)local_a8,Subtract);
              local_58 = 0;
              if (local_60 != (ForElementType<FSetElementId>)0x0) {
                FMemory::Free((void *)local_60);
              }
              uVar9 = local_98 >> 0x20;
              local_98 = local_98 & 0xffffffff00000000;
              if ((int)uVar9 != 0) {
                UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x10,8,0,&local_a0,0,(int *)((longlong)&local_98 + 4));
              }
              iVar11 = local_90.MaxBits;
              uStack_70 = 0xffffffff;
              local_90._24_8_ = (ulonglong)(uint)local_90.MaxBits << 0x20;
              if (0x80 < (uint)iVar11) {
                local_90.NumBits = 0;
                local_90.MaxBits = 0x80;
                TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_90,0);
              }
              if (local_90.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
                FMemory::Free((void *)local_90.AllocatorInstance.SecondaryData);
              }
              if (local_a0.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_a0.Data);
              }
            }
          }
        }
      }
    }
  }
  *param_2 = (UInteractiveCommandResult *)pUVar14;
  return;
}

// GetCommandShortString @ 14cbee260

FText * __thiscall
UModifyGeometrySelectionCommand::GetCommandShortString
          (UModifyGeometrySelectionCommand *this,FText *__return_storage_ptr__)

{
  undefined4 uVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  
  uVar1 = (**(code **)(*(longlong *)this + 0x2e8))();
  switch(uVar1) {
  default:
    pwVar3 = L"Select All";
    pwVar2 = L"ShortString_SelectAll";
    break;
  case 1:
    pwVar3 = L"Expand To Connected";
    pwVar2 = L"ShortString_ExpandToConnected";
    break;
  case 10:
    pwVar3 = L"Invert Selection";
    pwVar2 = L"ShortString_Invert";
    break;
  case 0xb:
    pwVar3 = L"Invert Selection (Connected)";
    pwVar2 = L"ShortString_InvertConnected";
    break;
  case 0x14:
    pwVar3 = L"Expand/Grow Selection";
    pwVar2 = L"ShortString_Expand";
    break;
  case 0x15:
    pwVar3 = L"Contract/Shrink Selection";
    pwVar2 = L"ShortString_Contract";
  }
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"UModifyGeometrySelectionCommand",pwVar2,pwVar3);
  return __return_storage_ptr__;
}

// GetModificationType @ 14cbee5f0

EModificationType __thiscall
UModifyGeometrySelectionCommand::GetModificationType(UModifyGeometrySelectionCommand *this)

{
  return SelectAll;
}

// GetPrivateStaticClass @ 14cbeff70

UClass * __cdecl UModifyGeometrySelectionCommand::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UModifyGeometrySelectionCommand.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"ModifyGeometrySelectionCommand",
               &Z_Registration_Info_UClass_UModifyGeometrySelectionCommand.InnerSingleton,
               StaticRegisterNativesUModifyGeometrySelectionCommand,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UModifyGeometrySelectionCommand>,
               InternalVTableHelperCtorCaller<UModifyGeometrySelectionCommand>,local_res8,
               UGeometrySelectionEditCommand::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UModifyGeometrySelectionCommand.InnerSingleton;
}

// IsModifySelectionCommand @ 14cbf23a0

bool __thiscall
UModifyGeometrySelectionCommand::IsModifySelectionCommand(UModifyGeometrySelectionCommand *this)

{
  return true;
}

// StaticRegisterNativesUModifyGeometrySelectionCommand @ 14cbf6c10

void __cdecl
UModifyGeometrySelectionCommand::StaticRegisterNativesUModifyGeometrySelectionCommand(void)

{
  return;
}

