// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 2

// StaticStruct @ 14a4df910

UScriptStruct * __cdecl FRigUnit_GetAnimationChannelBase::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_GetAnimationChannelBase.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_GetAnimationChannelBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_GetAnimationChannelBase,
                         (UObject *)pUVar1,L"RigUnit_GetAnimationChannelBase");
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_GetAnimationChannelBase.OuterSingleton;
}

// UpdateCache @ 14a5a35e0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __cdecl
FRigUnit_GetAnimationChannelBase::UpdateCache
          (URigHierarchy *param_1,FName *param_2,FName *param_3,FRigElementKey *param_4,int *param_5
          )

{
  FName FVar1;
  FRigBaseElement *pFVar2;
  undefined3 uVar3;
  FNameEntryId FVar4;
  ForAnyElementType _Src;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  FRigControlElement *pFVar9;
  longlong lVar10;
  UScriptStruct *pUVar11;
  FString *pFVar12;
  FName *this;
  uint uVar13;
  FRigBaseElement **ppFVar14;
  uint uVar15;
  undefined1 local_98 [8];
  uint uStack_90;
  FString local_88;
  TArrayView<FRigBaseElement_*_const,int> local_78;
  FRigHierarchyModulePath local_68;
  
  if ((param_1 != (URigHierarchy *)0x0) && (((uint)param_1->_padding_ >> 0x1e & 1) == 0)) {
    bVar5 = ::FName::IsWithinBounds((FNameEntryId)(param_4->Name).ComparisonIndex.Value);
    if ((!bVar5) || ((param_4->Name == (FName)0x0 || (param_4->Type == None)))) {
      *param_5 = -1;
    }
    FVar1 = *param_3;
    uVar6 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
    uVar6 = uVar6 + FVar1.Number;
    FVar1 = *param_2;
    uVar7 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
    uVar13 = (FVar1.Number - uVar6) + uVar7 ^ uVar6 >> 0xd;
    uVar7 = (-0x61c88647 - uVar13) - uVar6 ^ uVar13 << 8;
    uVar15 = (uVar6 - uVar13) - uVar7 ^ uVar7 >> 0xd;
    uVar13 = (uVar13 - uVar15) - uVar7 ^ uVar15 >> 0xc;
    uVar6 = (uVar7 - uVar13) - uVar15 ^ uVar13 << 0x10;
    uVar15 = (uVar15 - uVar6) - uVar13 ^ uVar6 >> 5;
    uVar7 = (uVar13 - uVar15) - uVar6 ^ uVar15 >> 3;
    uVar6 = (uVar6 - uVar7) - uVar15 ^ uVar7 << 10;
    uVar13 = (uVar15 - uVar6) - uVar7 ^ uVar6 >> 0xf;
    uVar6 = param_1->TopologyVersion - uVar13 ^ uVar13 >> 0xd;
    uVar7 = (-0x61c88647 - uVar6) - uVar13 ^ uVar6 << 8;
    uVar13 = (uVar13 - uVar7) - uVar6 ^ uVar7 >> 0xd;
    uVar6 = (uVar6 - uVar13) - uVar7 ^ uVar13 >> 0xc;
    uVar7 = (uVar7 - uVar6) - uVar13 ^ uVar6 << 0x10;
    uVar13 = (uVar13 - uVar7) - uVar6 ^ uVar7 >> 5;
    uVar6 = (uVar6 - uVar13) - uVar7 ^ uVar13 >> 3;
    uVar7 = (uVar7 - uVar6) - uVar13 ^ uVar6 << 10;
    uVar6 = (uVar13 - uVar7) - uVar6 ^ uVar7 >> 0xf;
    if (uVar6 == *param_5) {
      return true;
    }
    local_98._4_4_ = (*param_2).ComparisonIndex;
    uStack_90 = (*param_2).Number;
    local_98[0] = Control;
    iVar8 = URigHierarchy::GetIndex(param_1,(FRigElementKey *)local_98,true);
    pFVar9 = URigHierarchy::Get<FRigControlElement>(param_1,iVar8);
    if (pFVar9 != (FRigControlElement *)0x0) {
      ::FName::ToString(param_3,&local_88);
      _Src.Data = local_88.Data.AllocatorInstance.Data;
      local_68.ModulePath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar8 = local_88.Data.ArrayNum;
      local_68.ModulePath.Data.ArrayNum = iVar8;
      if (iVar8 == 0) {
        local_68.ModulePath.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar8,0,(ForAnyElementType *)&local_68,iVar8,
                   &local_68.ModulePath.Data.ArrayMax);
        memcpy(local_68.ModulePath.Data.AllocatorInstance.Data,_Src.Data,(longlong)iVar8 * 2);
      }
      local_68.CachedModuleNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data =
           (ForAnyElementType)(FScriptContainerElement *)0x0;
      local_68.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayNum = 0;
      local_68.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayMax = -1;
      local_68.CachedElementNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data =
           (ForAnyElementType)(FScriptContainerElement *)0x0;
      local_68.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayNum = 0;
      local_68._44_8_ = 0xffffffffffffffff;
      local_68.CachedModuleFName.field0_0x0.TypedValue.Number = 0;
      local_68.CachedElementFName.field0_0x0.TypedValue.ComparisonIndex.Value =
           (FNameEntryId)0xffffffff;
      local_68.CachedElementFName.field0_0x0.TypedValue.Number = 0;
      FRigHierarchyModulePath::Split(&local_68,(FString *)0x0,&local_88);
      if ((local_68.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
         (local_68.CachedElementNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0)) {
        FMemory::Free((void *)local_68.CachedElementNameString.field0_0x0.TypedValue.Data.
                              AllocatorInstance.Data);
      }
      if ((local_68.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
         (local_68.CachedModuleNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0)) {
        FMemory::Free((void *)local_68.CachedModuleNameString.field0_0x0.TypedValue.Data.
                              AllocatorInstance.Data);
      }
      if (local_68.ModulePath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.ModulePath.Data.AllocatorInstance.Data);
      }
      URigHierarchy::GetChildren(param_1,&local_78,(FRigBaseElement *)pFVar9);
      for (ppFVar14 = local_78.DataPtr; ppFVar14 != local_78.DataPtr + local_78.ArrayNum;
          ppFVar14 = ppFVar14 + 1) {
        pFVar2 = *ppFVar14;
        if (pFVar2 != (FRigBaseElement *)0x0) {
          lVar10 = (**(code **)(pFVar2->_padding_ + 0x10))(pFVar2);
          pUVar11 = FRigControlElement::StaticStruct();
          if (pUVar11 != (UScriptStruct *)0x0) {
            iVar8 = (int)pUVar11->_padding_;
            if ((*(int *)(lVar10 + 0x38) < iVar8) ||
               ((longlong *)*(undefined1 **)(*(longlong *)(lVar10 + 0x30) + (longlong)iVar8 * 8) !=
                &pUVar11->_padding_)) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            if ((bVar5) &&
               (*(char *)&pFVar2[5].CachedNameString.Data.AllocatorInstance.Data == '\x01')) {
              this = (FName *)((longlong)&pFVar2[5].CachedNameString.Data.AllocatorInstance.Data + 4
                              );
              if (*this == (FName)0x0) {
                this = &(pFVar2->Key).Name;
              }
              pFVar12 = ::FName::ToString(this,(FString *)local_98);
              iVar8 = (pFVar12->Data).ArrayNum;
              if (iVar8 == local_88.Data.ArrayNum) {
                if (iVar8 < 2) {
                  bVar5 = true;
                }
                else {
                  iVar8 = wcscmp((wchar_t *)(pFVar12->Data).AllocatorInstance.Data,
                                 (wchar_t *)local_88.Data.AllocatorInstance.Data);
                  bVar5 = iVar8 == 0;
                }
              }
              else {
                bVar5 = local_88.Data.ArrayNum + iVar8 == 1;
              }
              if ((void *)CONCAT44(local_98._4_4_,local_98._0_4_) != (void *)0x0) {
                FMemory::Free((void *)CONCAT44(local_98._4_4_,local_98._0_4_));
              }
              if (bVar5) {
                uVar3 = *(undefined3 *)&(pFVar2->Key).field_0x1;
                FVar4.Value = (pFVar2->Key).Name.ComparisonIndex.Value;
                param_4->Type = (pFVar2->Key).Type;
                *(undefined3 *)&param_4->field_0x1 = uVar3;
                (param_4->Name).ComparisonIndex = (FNameEntryId)FVar4.Value;
                (param_4->Name).Number = (pFVar2->Key).Name.Number;
                *param_5 = uVar6;
                if (local_88.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
                  return true;
                }
                FMemory::Free(local_88.Data.AllocatorInstance.Data);
                return true;
              }
            }
          }
        }
      }
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
    }
  }
  return false;
}

