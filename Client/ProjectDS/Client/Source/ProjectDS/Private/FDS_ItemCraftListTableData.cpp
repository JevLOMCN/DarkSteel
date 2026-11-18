// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 4

// StaticStruct @ 14b68a6f0

UScriptStruct * __cdecl FDS_ItemCraftListTableData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_ItemCraftListTableData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_ItemCraftListTableData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_ItemCraftListTableData,(UObject *)pUVar1,
                         L"DS_ItemCraftListTableData");
  }
  return Z_Registration_Info_UScriptStruct_FDS_ItemCraftListTableData.OuterSingleton;
}

// CheckCondition @ 14be78290

void __thiscall
FDS_ItemCraftListTableData::CheckCondition(FDS_ItemCraftListTableData *this,int *param_1)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res8 [4];
  
  if (this->ItemCraftListTableRow == (FDS_ItemCraftListTableRow *)0x0) {
    this->IsCondition = false;
    return;
  }
  if (this->ItemCraftListTableRow->RecipeActiveCondition == NpcRelationGrade) {
    UDS_NpcRelationData::GetData
              ((ulong64)local_res8,UDS_PlayerData::MainPlayerEntityID,SUB41(*param_1,0));
    bVar1 = FWeakObjectPtr::IsValid(local_res8);
    if (bVar1) {
      pUVar2 = FWeakObjectPtr::Get(local_res8);
      this->IsCondition =
           this->ItemCraftListTableRow->RecipeActiveValue <= *(int *)&pUVar2[3].field_0x14;
      return;
    }
    this->IsCondition = false;
    return;
  }
  this->IsCondition = true;
  return;
}

// CheckEnoughMaterial @ 14be78320

void __thiscall FDS_ItemCraftListTableData::CheckEnoughMaterial(FDS_ItemCraftListTableData *this)

{
  int iVar1;
  int iVar2;
  FDS_ItemCraftListTableRow *pFVar3;
  FScriptContainerElement *pFVar4;
  long64 lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  UObject *pUVar10;
  int *piVar11;
  int *piVar12;
  longlong lVar13;
  size_t _Size;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  longlong lVar18;
  EDS_InventoryType local_res8 [8];
  FWeakObjectPtr local_res10;
  ForAnyElementType local_78;
  int local_70;
  int local_6c;
  ForAnyElementType local_68;
  int local_60;
  int local_5c;
  ForAnyElementType local_58;
  int local_50;
  int local_4c;
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  
  pFVar3 = this->ItemCraftListTableRow;
  if (pFVar3 == (FDS_ItemCraftListTableRow *)0x0) {
    this->IsEnough = false;
    return;
  }
  uVar15 = 0;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = (pFVar3->ID_IngredientItem).ArrayNum;
  lVar13 = (longlong)local_40;
  pFVar4 = (pFVar3->ID_IngredientItem).AllocatorInstance.Data;
  if (local_40 == 0) {
    local_3c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_40,0,&local_48,local_40,&local_3c);
    memcpy(local_48.Data,pFVar4,lVar13 << 2);
  }
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = (this->ItemCraftListTableRow->IngredientItemValue).ArrayNum;
  lVar13 = (longlong)local_50;
  pFVar4 = (this->ItemCraftListTableRow->IngredientItemValue).AllocatorInstance.Data;
  if (local_50 == 0) {
    local_4c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_50,0,&local_58,local_50,&local_4c);
    memcpy(local_58.Data,pFVar4,lVar13 << 2);
  }
  lVar13 = (longlong)local_40;
  if (0 < local_40) {
    lVar18 = 0;
    do {
      if (((-1 < (int)uVar15) && ((int)uVar15 < local_40)) && ((int)uVar15 < local_50)) {
        uVar8 = 0;
        if ((int)uVar15 < local_40) {
          uVar8 = ~uVar15 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar1 = *(int *)(local_48.Data + lVar18 * 4);
        uVar8 = 0;
        if ((int)uVar15 < local_50) {
          uVar8 = ~uVar15 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar2 = *(int *)(local_58.Data + lVar18 * 4);
        if ((iVar1 != 0) && (iVar2 != 0)) {
          DS_ItemDataUtil::GetItemDataByTID((int)&local_res10);
          bVar7 = FWeakObjectPtr::IsValid(&local_res10);
          if (bVar7) {
            pUVar10 = FWeakObjectPtr::Get(&local_res10);
            local_res8[0] = PlayerNormal;
            piVar11 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
                      ::FindOrAddImpl<enum_EDS_InventoryType_const_&>
                                (&pUVar10[10].field_0x18,1,local_res8);
            piVar12 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
                      ::FindOrAddImpl<enum_EDS_InventoryType_const_&>
                                (&pUVar10[8].field_0x18,(uint)local_res8[0],local_res8);
            if (iVar2 <= *piVar11 + *piVar12) goto LAB_14be78560;
          }
          this->IsEnough = false;
          goto LAB_14be787e4;
        }
      }
LAB_14be78560:
      uVar15 = uVar15 + 1;
      lVar18 = lVar18 + 1;
    } while (lVar18 < lVar13);
  }
  uVar14 = 0;
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = (this->ItemCraftListTableRow->MoneyType).ArrayNum;
  _Size = (size_t)local_60;
  pFVar4 = (this->ItemCraftListTableRow->MoneyType).AllocatorInstance.Data;
  if (local_60 == 0) {
    local_5c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_60,0,&local_68,local_60,&local_5c);
    memcpy(local_68.Data,pFVar4,_Size);
  }
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70 = (this->ItemCraftListTableRow->MoneyValue).ArrayNum;
  lVar13 = (longlong)local_70;
  pFVar4 = (this->ItemCraftListTableRow->MoneyValue).AllocatorInstance.Data;
  if (local_70 == 0) {
    local_6c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_70,0,&local_78,local_70,&local_6c);
    memcpy(local_78.Data,pFVar4,lVar13 << 3);
  }
  lVar13 = (longlong)local_60;
  uVar16 = uVar14;
  if (0 < local_60) {
    do {
      uVar15 = (uint)uVar14;
      if (((-1 < (int)uVar15) && ((int)uVar15 < local_60)) && ((int)uVar15 < local_70)) {
        uVar17 = ~uVar15 >> 0x1f;
        uVar8 = 0;
        if ((int)uVar15 < local_60) {
          uVar8 = uVar17;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (local_68.Data[uVar16] != (FScriptContainerElement)0x0) {
          uVar9 = 0;
          uVar8 = uVar9;
          if ((int)uVar15 < local_70) {
            uVar8 = uVar17;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (*(longlong *)(local_78.Data + uVar16 * 8) != 0) {
            uVar8 = uVar9;
            if ((int)uVar15 < local_70) {
              uVar8 = uVar17;
            }
            if ((uVar8 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            lVar5 = *(long64 *)(local_78.Data + uVar16 * 8);
            if ((int)uVar15 < local_60) {
              uVar9 = uVar17;
            }
            if ((uVar9 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            bVar7 = UDS_MoneyDataSet::CheckEnoughMoney((EDS_MoneyType)local_68.Data[uVar16],lVar5);
            if (!bVar7) {
              bVar7 = false;
              goto LAB_14be787c4;
            }
          }
        }
      }
      uVar14 = (ulonglong)(uVar15 + 1);
      uVar16 = uVar16 + 1;
    } while ((longlong)uVar16 < lVar13);
  }
  bVar7 = true;
LAB_14be787c4:
  this->IsEnough = bVar7;
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
LAB_14be787e4:
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return;
}

// CheckRecipe @ 14be78850

void __thiscall FDS_ItemCraftListTableData::CheckRecipe(FDS_ItemCraftListTableData *this)

{
  this->HasRecipe = true;
  return;
}

