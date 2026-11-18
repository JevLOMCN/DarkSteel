// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 6

// StaticStruct @ 14a4c6570

UScriptStruct * __cdecl FRigDispatch_SetComponentContent::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigDispatch_SetComponentContent.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigDispatch_SetComponentContent.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigDispatch_SetComponentContent,
                         (UObject *)pUVar1,L"RigDispatch_SetComponentContent");
  }
  return Z_Registration_Info_UScriptStruct_FRigDispatch_SetComponentContent.OuterSingleton;
}

// GetArgumentInfos @ 14a4c6790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> * __thiscall
FRigDispatch_SetComponentContent::GetArgumentInfos
          (FRigDispatch_SetComponentContent *this,FRigVMRegistryHandle *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  bool bVar9;
  int iVar10;
  TRigVMTypeIndex *pTVar11;
  FRigVMTemplateArgumentInfo *pFVar12;
  TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> *pTVar13;
  longlong *plVar14;
  FName *pFVar15;
  undefined1 auStackY_158 [32];
  undefined1 local_108 [8];
  FName local_100;
  FName local_f8;
  TArray<FRigVMTemplateArgument::ETypeCategory,TSizedDefaultAllocator<32>_> local_f0;
  FName local_e0;
  TRigVMTypeIndex local_d8;
  TRigVMTypeIndex local_c8;
  code *local_b8 [2];
  undefined **local_a8;
  code *local_a0;
  undefined8 local_90;
  undefined1 local_88 [64];
  ForAnyElementType local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_158;
  puVar1 = &this->field_0x98;
  if (*(int *)&this->field_0xa0 == 0) {
    pTVar11 = FRigDispatch_ComponentBase::GetComponentKeyType(param_1);
    iVar10 = *(int *)&this->field_0xa0;
    if (iVar10 == *(int *)&this->field_0xa4) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x1050,(ForAnyElementType *)puVar1,(int *)&this->field_0xa4);
    }
    *(int *)&this->field_0xa0 = iVar10 + 1;
    local_100 = pTVar11->Name;
    iVar2 = pTVar11->Index;
    lVar3 = *(longlong *)puVar1;
    FLazyName::Resolve(&FRigDispatch_ComponentBase::KeyArgName);
    local_d8.Name = local_100;
    local_d8.Index = iVar2;
    FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo
              ((FRigVMTemplateArgumentInfo *)(lVar3 + (longlong)iVar10 * 0x50),local_f8,Input,
               &local_d8);
    *(int *)&this->field_0xc0 = iVar10;
    local_108[0] = 10;
    local_a8 = &
               ___7__TFunction_OwnedObject_P6A_NAEBVTRigVMTypeIndex__AEBUFRigVMRegistryHandle___Z_0A__0A__Function_Private_Core_UE__6B_
    ;
    local_90 = 0;
    local_a0 = FRigDispatch_ComponentBase::IsTypeSupported;
    local_f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<bool_(__cdecl*)(TRigVMTypeIndex_const_&,FRigVMRegistryHandle_const_&),bool,TRigVMTypeIndex_const_&,FRigVMRegistryHandle_const_&>
                  ::Call;
    local_f0.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,1,0,&local_f0.AllocatorInstance,1,&local_f0.ArrayMax);
    memcpy(local_f0.AllocatorInstance.Data,local_108,1);
    FLazyName::Resolve(&FRigDispatch_ComponentBase::ComponentArgName);
    pFVar12 = FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo
                        ((FRigVMTemplateArgumentInfo *)local_88,local_100,Input,&local_f0,
                         (TFunction<bool___cdecl(TRigVMTypeIndex_const_&,FRigVMRegistryHandle_const_&)>
                          *)local_b8);
    if ((*(FRigVMTemplateArgumentInfo **)puVar1 <= pFVar12) &&
       (pFVar12 < *(FRigVMTemplateArgumentInfo **)puVar1 + *(int *)&this->field_0xa4)) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar9) {
        pcVar4 = (code *)swi(3);
        pTVar13 = (TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar13;
      }
    }
    iVar10 = *(int *)&this->field_0xa0;
    if (iVar10 == *(int *)&this->field_0xa4) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x1050,(ForAnyElementType *)puVar1,(int *)&this->field_0xa4);
    }
    *(int *)&this->field_0xa0 = iVar10 + 1;
    pFVar15 = (FName *)(*(longlong *)puVar1 + (longlong)iVar10 * 0x50);
    *pFVar15 = pFVar12->Name;
    *(ERigVMPinDirection *)&pFVar15[1].ComparisonIndex.Value = pFVar12->Direction;
    uVar8 = *(undefined4 *)&(pFVar12->FactoryCallback).field_0x4;
    pFVar15[2].ComparisonIndex = (FNameEntryId)*(undefined4 *)&(pFVar12->FactoryCallback).field_0x0;
    pFVar15[2].Number = uVar8;
    uVar8 = *(undefined4 *)&(pFVar12->FactoryCallback).field_0x2c;
    pFVar15[7].ComparisonIndex = (FNameEntryId)*(undefined4 *)&(pFVar12->FactoryCallback).field_0x28
    ;
    pFVar15[7].Number = uVar8;
    *(undefined8 *)&(pFVar12->FactoryCallback).field_0x28 = 0;
    uVar5 = *(uint *)&(pFVar12->FactoryCallback).field_0x14;
    uVar6 = *(uint *)&(pFVar12->FactoryCallback).field_0x18;
    uVar7 = *(uint *)&(pFVar12->FactoryCallback).field_0x1c;
    pFVar15[4].ComparisonIndex.Value = *(uint *)&(pFVar12->FactoryCallback).field_0x10;
    pFVar15[4].Number = uVar5;
    pFVar15[5].ComparisonIndex.Value = uVar6;
    pFVar15[5].Number = uVar7;
    uVar8 = *(undefined4 *)&(pFVar12->FactoryCallback).field_0x24;
    pFVar15[6].ComparisonIndex = (FNameEntryId)*(undefined4 *)&(pFVar12->FactoryCallback).field_0x20
    ;
    pFVar15[6].Number = uVar8;
    if (pFVar15[2] != (FName)0x0) {
      *(undefined8 *)&pFVar12->FactoryCallback = 0;
    }
    pFVar15[8].ComparisonIndex = 0;
    pFVar15[8].Number = 0;
    pFVar15[8] = (FName)(pFVar12->TypeIndices).AllocatorInstance.Data;
    (pFVar12->TypeIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar15[9].ComparisonIndex.Value = (pFVar12->TypeIndices).ArrayNum;
    pFVar15[9].Number = (pFVar12->TypeIndices).ArrayMax;
    (pFVar12->TypeIndices).ArrayNum = 0;
    (pFVar12->TypeIndices).ArrayMax = 0;
    *(int *)&this->field_0xc4 = iVar10;
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data);
    }
    if (local_88._16_8_ != 0) {
      plVar14 = (longlong *)(local_88 + 0x20);
      if ((longlong *)local_88._56_8_ != (longlong *)0x0) {
        plVar14 = (longlong *)local_88._56_8_;
      }
      (**(code **)(*plVar14 + 0x10))();
    }
    if (local_f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.AllocatorInstance.Data);
    }
    iVar10 = *(int *)&this->field_0xa0;
    if (iVar10 == *(int *)&this->field_0xa4) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x1050,(ForAnyElementType *)puVar1,(int *)&this->field_0xa4);
    }
    *(int *)&this->field_0xa0 = iVar10 + 1;
    iVar2 = RigVMTypeUtils::TypeIndex::Bool.Index;
    local_f8 = RigVMTypeUtils::TypeIndex::Bool.Name;
    lVar3 = *(longlong *)puVar1;
    FLazyName::Resolve(&FRigDispatch_ComponentBase::SuccessArgName);
    local_c8.Name = local_f8;
    local_c8.Index = iVar2;
    FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo
              ((FRigVMTemplateArgumentInfo *)(lVar3 + (longlong)iVar10 * 0x50),local_e0,Output,
               &local_c8);
    *(int *)&this->field_0xc8 = iVar10;
  }
  return (TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> *)puVar1;
}

// IsMutable @ 14a4c6b00

bool __thiscall FRigDispatch_SetComponentContent::IsMutable(FRigDispatch_SetComponentContent *this)

{
  return true;
}

// GetDispatchFunctionImpl @ 14a4c6b10

_func___cdecl_void_FRigVMExtendedExecuteContext_ptr_TArrayView<FRigVMMemoryHandle,int>_TArrayView<FRigVMPredicateBranch,int>
* __thiscall
FRigDispatch_SetComponentContent::GetDispatchFunctionImpl
          (FRigDispatch_SetComponentContent *this,
          TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
          *param_1,FRigVMRegistryHandle *param_2)

{
  return Execute;
}

// FRigDispatch_SetComponentContent @ 14a50af30

FRigDispatch_SetComponentContent * __thiscall
FRigDispatch_SetComponentContent::FRigDispatch_SetComponentContent
          (FRigDispatch_SetComponentContent *this)

{
  UPackage *pUVar1;
  
  FRigVMDispatchFactory::FRigVMDispatchFactory((FRigVMDispatchFactory *)this);
  *(undefined8 *)&this->field_0xb8 = 0xffffffffffffffff;
  *(undefined8 *)&this->field_0xa8 = 0;
  *(undefined8 *)&this->field_0xb0 = 0;
  *(undefined ***)this = &___7FRigDispatch_SetComponentContent__6B_;
  *(undefined8 *)&this->field_0xc0 = 0xffffffffffffffff;
  *(undefined4 *)&this->field_0xc8 = 0xffffffff;
  if (Z_Registration_Info_UScriptStruct_FRigDispatch_SetComponentContent.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigDispatch_SetComponentContent.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigDispatch_SetComponentContent,
                         (UObject *)pUVar1,L"RigDispatch_SetComponentContent");
  }
  *(UScriptStruct **)&this->field_0x28 =
       Z_Registration_Info_UScriptStruct_FRigDispatch_SetComponentContent.OuterSingleton;
  return this;
}

// Execute @ 14a523a20

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigDispatch_SetComponentContent::Execute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  FRigVMDispatchFactory *pFVar2;
  uchar *puVar3;
  UStruct *pUVar4;
  code *pcVar5;
  FField *pFVar6;
  bool bVar7;
  FRigVMMemoryHandle *pFVar8;
  FRigComponentKey *pFVar9;
  uchar *puVar10;
  FProperty *pFVar11;
  UScriptStruct *pUVar12;
  FControlRigExecuteContext *pFVar13;
  FRigBaseComponent *pFVar14;
  UStruct *pUVar15;
  uchar *_Dst;
  uchar *_Src;
  TFieldIterator<FProperty> local_38;
  
  pFVar2 = param_1->Factory;
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)&pFVar2[1].FactoryNameString.Data.AllocatorInstance.Data);
  if (pFVar8->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar9 = (FRigComponentKey *)pFVar8->Ptr;
  }
  else {
    pFVar9 = (FRigComponentKey *)
             FRigVMPropertyPath::GetData_Internal(pFVar8->PropertyPath,pFVar8->Ptr,pFVar8->Property)
    ;
  }
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)
                                       &pFVar2[1].FactoryNameString.Data.AllocatorInstance.Data + 4)
                     );
  if (pFVar8->PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar10 = pFVar8->Ptr;
  }
  else {
    puVar10 = FRigVMPropertyPath::GetData_Internal
                        (pFVar8->PropertyPath,pFVar8->Ptr,pFVar8->Property);
  }
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,pFVar2[1].FactoryNameString.Data.ArrayNum);
  puVar3 = pFVar8->Ptr;
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[]
                     (param_2,*(int *)((longlong)
                                       &pFVar2[1].FactoryNameString.Data.AllocatorInstance.Data + 4)
                     );
  if (pFVar8->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar11 = pFVar8->Property;
  }
  else {
    pFVar11 = FRigVMPropertyPath::GetTailProperty(pFVar8->PropertyPath);
  }
  if (((pFVar11 == (FProperty *)0x0) || ((*(uint *)(pFVar11->_padding_ + 0x18) >> 0x14 & 1) == 0))
     && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("StructProperty",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Units\\Hierarchy\\RigUnit_Component.cpp"
                            ,0x10f,L""), pFVar11 = (FProperty *)0x0, bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pUVar4 = (UStruct *)pFVar11[1]._padding_;
  if ((pUVar4 != (UStruct *)0x0) &&
     (pUVar12 = FRigBaseComponent::StaticStruct(), pUVar12 != (UScriptStruct *)0x0)) {
    iVar1 = (int)pUVar12->_padding_;
    if (((int)pUVar4->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) != &pUVar12->_padding_
       )) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (bVar7) goto LAB_14a523b74;
  }
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("ComponentStruct && ComponentStruct->IsChildOf(FRigBaseComponent::StaticStruct())"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Units\\Hierarchy\\RigUnit_Component.cpp"
                     ,0x111,L"");
  if (bVar7) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_14a523b74:
  pFVar13 = FRigVMExtendedExecuteContext::GetPublicDataSafe<FControlRigExecuteContext>(param_1);
  pFVar14 = URigHierarchy::FindComponent(pFVar13->Hierarchy,pFVar9);
  if ((pFVar14 == (FRigBaseComponent *)0x0) ||
     (pUVar15 = (UStruct *)(**(code **)(pFVar14->_padding_ + 0x48))(pFVar14), pUVar15 != pUVar4)) {
    *puVar3 = '\0';
  }
  else {
    if (pUVar4 == (UStruct *)0x0) {
      local_38.Field = (FField *)0x0;
    }
    else {
      local_38.Field = pUVar4->ChildProperties;
    }
    local_38.InterfaceIndex = -1;
    local_38.bIncludeSuper = true;
    local_38.bIncludeDeprecated = true;
    local_38.bIncludeInterface = false;
    local_38.Struct = pUVar4;
    TFieldIterator<FProperty>::IterateToNext(&local_38);
    pFVar6 = local_38.Field;
    while (pFVar6 != (FField *)0x0) {
      local_38.Field = pFVar6;
      if (((int)pFVar6[1]._padding_ < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((puVar10 == (uchar *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      _Src = puVar10 + *(int *)((longlong)&pFVar6[1].Owner.Container + 4);
      if (((int)pFVar6[1]._padding_ < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      _Dst = (uchar *)((longlong)&pFVar14->_padding_ +
                      (longlong)*(int *)((longlong)&pFVar6[1].Owner.Container + 4));
      if (_Dst != _Src) {
        if ((*(uint *)&pFVar6[1].ClassPrivate >> 0x1e & 1) == 0) {
          (**(code **)(pFVar6->_padding_ + 0xf0))(pFVar6,_Dst,_Src,(int)pFVar6[1]._padding_);
        }
        else {
          memcpy(_Dst,_Src,
                 (longlong)*(int *)((longlong)&pFVar6[1]._padding_ + 4) *
                 (longlong)(int)pFVar6[1]._padding_);
        }
      }
      local_38.Field = (local_38.Field)->Next;
      TFieldIterator<FProperty>::IterateToNext(&local_38);
      pFVar6 = local_38.Field;
    }
    *puVar3 = '\x01';
  }
  return;
}

