// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 6

// StaticStruct @ 14978cff0

UScriptStruct * __cdecl FPCGKernelAttributeTable::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGKernelAttributeTable.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGKernelAttributeTable.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGKernelAttributeTable,(UObject *)pUVar1,
                         L"PCGKernelAttributeTable");
  }
  return Z_Registration_Info_UScriptStruct_FPCGKernelAttributeTable.OuterSingleton;
}

// AddAttribute @ 1497eaee0

/* WARNING: Type propagation algorithm not settling */

int __thiscall
FPCGKernelAttributeTable::AddAttribute
          (FPCGKernelAttributeTable *this,FPCGKernelAttributeKey *param_1)

{
  int *piVar1;
  FPCGKernelAttributeKey *pFVar2;
  code *pcVar3;
  FName FVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  FName *pFVar8;
  FPCGKernelAttributeKey *pFVar9;
  
  pFVar2 = (FPCGKernelAttributeKey *)(this->AttributeTable).AllocatorInstance.Data;
  iVar6 = (this->AttributeTable).ArrayNum;
  if (pFVar2 != pFVar2 + iVar6) {
    pFVar9 = pFVar2;
    do {
      if ((((pFVar9->Type == param_1->Type) &&
           ((pFVar9->Identifier).Name == (param_1->Identifier).Name)) &&
          ((pFVar9->Identifier).MetadataDomain.Flag == (param_1->Identifier).MetadataDomain.Flag))
         && ((pFVar9->Identifier).MetadataDomain.CustomFlag ==
             (param_1->Identifier).MetadataDomain.CustomFlag)) {
        iVar7 = (int)(((longlong)pFVar9 - (longlong)pFVar2) / 0x60);
        if (iVar7 != -1) {
          return iVar7;
        }
        goto LAB_1497eaf46;
      }
      pFVar9 = pFVar9 + 1;
    } while (pFVar9 != pFVar2 + iVar6);
  }
  iVar7 = -1;
LAB_1497eaf46:
  if (0x5f < iVar6) {
    return iVar7;
  }
  if (((pFVar2 <= param_1) && (param_1 < pFVar2 + (this->AttributeTable).ArrayMax)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    iVar6 = (*pcVar3)();
    return iVar6;
  }
  iVar7 = (this->AttributeTable).ArrayNum;
  piVar1 = &(this->AttributeTable).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x860,(ForAnyElementType *)this,piVar1);
  }
  (this->AttributeTable).ArrayNum = iVar7 + 1;
  FVar4 = *(FName *)&(param_1->Identifier).MetadataDomain;
  pFVar8 = (FName *)((this->AttributeTable).AllocatorInstance.Data + (longlong)iVar7 * 0x60);
  *pFVar8 = (param_1->Identifier).Name;
  pFVar8[1] = FVar4;
  pFVar8[2] = (param_1->Identifier).MetadataDomain.DebugName;
  *(EPCGKernelAttributeType *)&pFVar8[3].ComparisonIndex.Value = param_1->Type;
  FPCGAttributePropertySelector::FPCGAttributePropertySelector
            ((FPCGAttributePropertySelector *)(pFVar8 + 4),
             (FPCGAttributePropertySelector *)&param_1->Name);
  pFVar8[4] = (FName)&___7FPCGAttributePropertyOutputNoSourceSelector__6B_;
  return iVar6;
}

// AddAttribute @ 1497eb060

int __thiscall
FPCGKernelAttributeTable::AddAttribute
          (FPCGKernelAttributeTable *this,FPCGAttributeIdentifier *param_1,
          EPCGKernelAttributeType param_2)

{
  int iVar1;
  undefined1 local_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  FString *local_20;
  undefined8 local_18;
  undefined1 local_10;
  
  local_68._0_8_ = param_1->Name;
  local_68[8] = (param_1->MetadataDomain).Flag;
  local_68._9_3_ = *(undefined3 *)&(param_1->MetadataDomain).field_0x1;
  local_68._12_4_ = (param_1->MetadataDomain).CustomFlag;
  local_68._16_8_ = (param_1->MetadataDomain).DebugName;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = (FString *)0x0;
  local_18 = 0;
  local_10 = 0;
  local_68._32_8_ = &___7FPCGAttributePropertyOutputNoSourceSelector__6B_;
  local_68[0x18] = param_2;
  iVar1 = AddAttribute(this,(FPCGKernelAttributeKey *)local_68);
  DestructItems<FString,int>(local_20,(int)local_18);
  if (local_20 != (FString *)0x0) {
    FMemory::Free(local_20);
  }
  return iVar1;
}

// DebugLog @ 1497fe450

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FPCGKernelAttributeTable::DebugLog(FPCGKernelAttributeTable *this)

{
  char cVar1;
  int iVar2;
  UEnum *this_00;
  UPackage *pUVar3;
  FText *this_01;
  FName *pFVar4;
  FName *pFVar5;
  FName *this_02;
  FName *pFVar6;
  undefined1 local_res8 [8];
  FString local_68;
  FString local_58;
  FString local_48;
  FText local_38;
  
  if (Z_Registration_Info_UEnum_EPCGKernelAttributeType.OuterSingleton == (UEnum *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGKernelAttributeType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGKernelAttributeType,(UObject *)pUVar3,
                       L"EPCGKernelAttributeType");
  }
  this_00 = Z_Registration_Info_UEnum_EPCGKernelAttributeType.OuterSingleton;
  iVar2 = (this->AttributeTable).ArrayNum;
  this_02 = (FName *)(this->AttributeTable).AllocatorInstance.Data;
  pFVar6 = this_02 + (longlong)iVar2 * 0xc;
  do {
    if ((this->AttributeTable).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FPCGKernelAttributeKey_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (this_02 == pFVar6) {
      return;
    }
    if (3 < (byte)LogPCG._0_1_) {
      this_01 = UEnum::GetDisplayNameTextByValue
                          (this_00,&local_38,(ulonglong)(byte)this_02[3].ComparisonIndex.Value);
      FText::ToString(this_01);
      pFVar4 = (FName *)(this->AttributeTable).AllocatorInstance.Data;
      pFVar5 = pFVar4 + (longlong)(this->AttributeTable).ArrayNum * 0xc;
      if (pFVar4 != pFVar5) {
        do {
          if (((((char)pFVar4[3].ComparisonIndex.Value == (char)this_02[3].ComparisonIndex.Value) &&
               (*pFVar4 == *this_02)) &&
              ((char)pFVar4[1].ComparisonIndex.Value == (char)this_02[1].ComparisonIndex.Value)) &&
             (pFVar4[1].Number == this_02[1].Number)) break;
          pFVar4 = pFVar4 + 0xc;
        } while (pFVar4 != pFVar5);
      }
      cVar1 = (char)this_02[1].ComparisonIndex.Value;
      if (cVar1 == -2) {
        ::FString::FString(&local_68,L"INVALID");
      }
      else if (cVar1 == '\0') {
        ::FName::ToString(this_02,&local_68);
      }
      else {
        ::FName::ToString(this_02,&local_48);
        ::FName::ToString(this_02 + 2,&local_58);
        ::FString::PrintfImpl(&local_68,L"%s.%s");
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
      }
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (local_38.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
      }
    }
    this_02 = this_02 + 0xc;
  } while( true );
}

// GetAttributeId @ 14980fea0

int __thiscall
FPCGKernelAttributeTable::GetAttributeId
          (FPCGKernelAttributeTable *this,FPCGKernelAttributeKey *param_1)

{
  FName *pFVar1;
  int iVar2;
  int iVar3;
  FName *pFVar4;
  
  pFVar1 = (FName *)(this->AttributeTable).AllocatorInstance.Data;
  if (pFVar1 != pFVar1 + (longlong)(this->AttributeTable).ArrayNum * 0xc) {
    pFVar4 = pFVar1;
    do {
      if (((((EPCGKernelAttributeType)pFVar4[3].ComparisonIndex.Value == param_1->Type) &&
           (*pFVar4 == (param_1->Identifier).Name)) &&
          ((EPCGMetadataDomainFlag)pFVar4[1].ComparisonIndex.Value ==
           (param_1->Identifier).MetadataDomain.Flag)) &&
         (pFVar4[1].Number == (param_1->Identifier).MetadataDomain.CustomFlag)) {
        iVar3 = (int)(((longlong)pFVar4 - (longlong)pFVar1) / 0x60);
        iVar2 = -1;
        if (-1 < iVar3) {
          iVar2 = iVar3 + 0x20;
        }
        return iVar2;
      }
      pFVar4 = pFVar4 + 0xc;
    } while (pFVar4 != pFVar1 + (longlong)(this->AttributeTable).ArrayNum * 0xc);
  }
  return -1;
}

// GetAttributeId @ 14980ff30

int __thiscall
FPCGKernelAttributeTable::GetAttributeId
          (FPCGKernelAttributeTable *this,FPCGAttributeIdentifier *param_1,
          EPCGKernelAttributeType param_2)

{
  int iVar1;
  undefined1 local_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined1 local_10;
  
  local_68._0_8_ = param_1->Name;
  local_68[8] = (param_1->MetadataDomain).Flag;
  local_68._9_3_ = *(undefined3 *)&(param_1->MetadataDomain).field_0x1;
  local_68._12_4_ = (param_1->MetadataDomain).CustomFlag;
  local_68._16_8_ = (param_1->MetadataDomain).DebugName;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  local_68._32_8_ = &___7FPCGAttributePropertyOutputNoSourceSelector__6B_;
  local_68[0x18] = param_2;
  iVar1 = GetAttributeId(this,(FPCGKernelAttributeKey *)local_68);
  DestructItems<FString,int>((FString *)0x0,0);
  return iVar1;
}

