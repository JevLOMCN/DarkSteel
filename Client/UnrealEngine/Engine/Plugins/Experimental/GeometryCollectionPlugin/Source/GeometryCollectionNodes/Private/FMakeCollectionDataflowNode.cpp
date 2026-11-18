// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 10

// StaticStruct @ 14e833a00

UScriptStruct * __cdecl FMakeCollectionDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMakeCollectionDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMakeCollectionDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMakeCollectionDataflowNode,(UObject *)pUVar1,
                         L"MakeCollectionDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FMakeCollectionDataflowNode.OuterSingleton;
}

// GetType @ 14e833c60

FName __thiscall FMakeCollectionDataflowNode::GetType(FMakeCollectionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FMakeCollectionDataflowNode");
  return in_RDX;
}

// IsA @ 14e833c90

bool __thiscall FMakeCollectionDataflowNode::IsA(FMakeCollectionDataflowNode *this,FName param_1)

{
  int iVar1;
  int iVar2;
  FString *pFVar3;
  FString *pFVar4;
  bool bVar5;
  FName local_res10;
  FName local_res18 [2];
  FString local_28;
  FString local_18;
  
  local_res10 = param_1;
  pFVar3 = ::FName::ToString(&local_res10,&local_18);
  ::FName::FName(local_res18,"FMakeCollectionDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e833cf8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e833cf8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e833d16;
      }
    }
  }
  bVar5 = true;
LAB_14e833d16:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e833d50

FStructOnScope * __thiscall
FMakeCollectionDataflowNode::NewStructOnScope(FMakeCollectionDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FMakeCollectionDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FMakeCollectionDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FMakeCollectionDataflowNode,(UObject *)pUVar2,
                           L"MakeCollectionDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FMakeCollectionDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e833e50

void __thiscall
FMakeCollectionDataflowNode::SerializeInternal(FMakeCollectionDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMakeCollectionDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMakeCollectionDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMakeCollectionDataflowNode,(UObject *)pUVar1,
                         L"MakeCollectionDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FMakeCollectionDataflowNode.OuterSingleton
             ,param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FMakeCollectionDataflowNode.OuterSingleton
             ,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e833ecd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e833ee0

FName __thiscall FMakeCollectionDataflowNode::GetDisplayName(FMakeCollectionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"MakeCollection");
  return in_RDX;
}

// GetCategory @ 14e833f10

FName __thiscall FMakeCollectionDataflowNode::GetCategory(FMakeCollectionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Generators|Collection");
  return in_RDX;
}

// GetTags @ 14e833f40

FString * __thiscall
FMakeCollectionDataflowNode::GetTags
          (FMakeCollectionDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e833f70

UScriptStruct * __thiscall
FMakeCollectionDataflowNode::TypedScriptStruct(FMakeCollectionDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMakeCollectionDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMakeCollectionDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMakeCollectionDataflowNode,(UObject *)pUVar1,
                         L"MakeCollectionDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FMakeCollectionDataflowNode.OuterSingleton;
}

// Evaluate @ 14e8342a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMakeCollectionDataflowNode::Evaluate
          (FMakeCollectionDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  FManagedArrayCollection *pFVar1;
  float *pfVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  undefined1 *puVar6;
  FManagedArrayCollection *pFVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_608 [32];
  longlong local_5e8;
  longlong local_5e0;
  undefined1 local_5d8 [8];
  float fStack_5d0;
  float fStack_5cc;
  FLinearColor_u_0 local_5c8;
  FManagedArrayCollection local_5b8;
  FGeometryCollection local_508;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_608;
  pFVar1 = &this->Collection;
  puVar6 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FManagedArrayCollection *)puVar6 == pFVar1) {
    if (this->bAddRootTransform == false) {
      pFVar7 = FManagedArrayCollection::FManagedArrayCollection(&local_5b8);
      FDataflowNode::SetValue<FManagedArrayCollection,FManagedArrayCollection>
                ((FDataflowNode *)this,param_1,pFVar7,pFVar1);
      FManagedArrayCollection::~FManagedArrayCollection(&local_5b8);
    }
    else {
      local_5c8 = FLinearColor::White.field0_0x0;
      FGeometryCollection::FGeometryCollection
                (&local_508,(FGeometryCollectionDefaults *)&local_5c8._s_0);
      uVar5 = FManagedArrayCollection::AddElements
                        ((FManagedArrayCollection *)&local_508,1,
                         FTransformCollection::TransformGroup);
      lVar9 = (longlong)(int)uVar5;
      uVar10 = ~uVar5 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar5 < (int)local_508._padding_) {
        uVar8 = uVar10;
      }
      if (uVar8 == 0) {
        local_5e0 = (longlong)(int)local_508._padding_;
        local_5e8 = lVar9;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      *(undefined4 *)(local_508._padding_ + lVar9 * 4) = 0xffffffff;
      uVar8 = 0;
      if ((int)uVar5 < (int)local_508._padding_) {
        uVar8 = uVar10;
      }
      _local_5d8 = FLinearColor::White.field0_0x0;
      fVar11 = FLinearColor::White.field0_0x0._0_4_;
      fVar12 = FLinearColor::White.field0_0x0._4_4_;
      fVar13 = FLinearColor::White.field0_0x0._8_4_;
      fVar14 = FLinearColor::White.field0_0x0._12_4_;
      if (uVar8 == 0) {
        local_5e0 = (longlong)(int)local_508._padding_;
        local_5e8 = lVar9;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        fVar11 = (float)local_5d8._0_4_;
        fVar12 = (float)local_5d8._4_4_;
        fVar13 = fStack_5d0;
        fVar14 = fStack_5cc;
      }
      pfVar2 = (float *)(lVar9 * 0x10 + local_508._padding_);
      *pfVar2 = fVar11;
      pfVar2[1] = fVar12;
      pfVar2[2] = fVar13;
      pfVar2[3] = fVar14;
      uVar8 = 0;
      if ((int)uVar5 < (int)local_508._padding_) {
        uVar8 = uVar10;
      }
      if (uVar8 == 0) {
        local_5e0 = (longlong)(int)local_508._padding_;
        local_5e8 = lVar9;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      ::FString::operator=((FString *)(local_508._padding_ + lVar9 * 0x10),L"Root");
      FDataflowNode::SetValue<FManagedArrayCollection_const_&,FManagedArrayCollection>
                ((FDataflowNode *)this,param_1,(FManagedArrayCollection *)&local_508,pFVar1);
      FGeometryCollection::~FGeometryCollection(&local_508);
    }
  }
  return;
}

