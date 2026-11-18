// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 4

// StaticStruct @ 14e104bf0

UScriptStruct * __cdecl FOptimusComponentBindingAction_RemoveBinding::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FOptimusComponentBindingAction_RemoveBinding.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OptimusCore();
    Z_Registration_Info_UScriptStruct_FOptimusComponentBindingAction_RemoveBinding.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FOptimusComponentBindingAction_RemoveBinding,
                         (UObject *)pUVar1,L"OptimusComponentBindingAction_RemoveBinding");
  }
  return Z_Registration_Info_UScriptStruct_FOptimusComponentBindingAction_RemoveBinding.
         OuterSingleton;
}

// Do @ 14e104c70

bool __thiscall
FOptimusComponentBindingAction_RemoveBinding::Do
          (FOptimusComponentBindingAction_RemoveBinding *this,IOptimusPathResolver *param_1)

{
  int iVar1;
  bool bVar2;
  UOptimusComponentSourceBinding *pUVar3;
  UOptimusDeformer *this_00;
  UClass *pUVar4;
  
  pUVar3 = (UOptimusComponentSourceBinding *)
           (**(code **)((longlong)*param_1 + 0x40))(param_1,this->ComponentBindingName);
  if (pUVar3 == (UOptimusComponentSourceBinding *)0x0) {
    return false;
  }
  this_00 = (UOptimusDeformer *)(**(code **)((longlong)*param_1 + 8))(param_1);
  if (this_00 != (UOptimusDeformer *)0x0) {
    pUVar4 = UOptimusDeformer::StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) goto LAB_14e104cd3;
  }
  this_00 = (UOptimusDeformer *)0x0;
LAB_14e104cd3:
  bVar2 = UOptimusDeformer::RemoveComponentBindingDirect(this_00,pUVar3);
  return bVar2;
}

// Undo @ 14e104cf0

bool __thiscall
FOptimusComponentBindingAction_RemoveBinding::Undo
          (FOptimusComponentBindingAction_RemoveBinding *this,IOptimusPathResolver *param_1)

{
  int iVar1;
  UOptimusComponentSource *pUVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  UOptimusDeformer *this_00;
  UClass *pUVar7;
  UClass *pUVar8;
  UOptimusComponentSourceBinding *pUVar9;
  FTopLevelAssetPath local_18;
  
  if (param_1 != (IOptimusPathResolver *)0x0) {
    this_00 = (UOptimusDeformer *)(**(code **)((longlong)*param_1 + 8))(param_1);
    if (this_00 != (UOptimusDeformer *)0x0) {
      pUVar7 = UOptimusDeformer::StaticClass();
      iVar1 = (int)pUVar7->_padding_;
      if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar7->_padding_)) goto LAB_14e104d3d;
    }
  }
  this_00 = (UOptimusDeformer *)0x0;
LAB_14e104d3d:
  local_18.PackageName = (this->ComponentSourceClassPath).PackageName;
  local_18.AssetName = (this->ComponentSourceClassPath).AssetName;
  pUVar7 = Z_Construct_UClass_UClass_NoRegister();
  pUVar7 = (UClass *)StaticFindObject(pUVar7,&local_18,None);
  if (pUVar7 != (UClass *)0x0) {
    pUVar8 = Z_Construct_UClass_UClass_NoRegister();
    iVar1 = (int)pUVar8->_padding_;
    if ((iVar1 <= *(int *)(pUVar7->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar8->_padding_)) {
      if ((pUVar7->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
        UClass::InternalCreateDefaultObjectWrapper(pUVar7);
      }
      pUVar2 = (UOptimusComponentSource *)(pUVar7->ClassDefaultObject).field0_0x0.DebugPtr;
      pUVar7 = UOptimusComponentSource::StaticClass();
      lVar3 = *(longlong *)&pUVar2->field_0x10;
      iVar1 = (int)pUVar7->_padding_;
      if ((*(int *)(lVar3 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar7->_padding_)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ret->IsA(T::StaticClass())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                           ,0x1181,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
      }
      pUVar9 = UOptimusDeformer::CreateComponentBindingDirect
                         (this_00,pUVar2,this->ComponentBindingName);
      if (pUVar9 != (UOptimusComponentSourceBinding *)0x0) {
        TArray<FName,TSizedDefaultAllocator<32>_>::operator=
                  (&pUVar9->ComponentTags,&this->ComponentTags);
        bVar5 = UOptimusDeformer::AddComponentBindingDirect
                          (this_00,pUVar9,this->ComponentBindingIndex);
        if (bVar5) {
          return true;
        }
        Optimus::RemoveObject((UObject *)pUVar9);
      }
    }
  }
  return false;
}

// FOptimusComponentBindingAction_RemoveBinding @ 14e150b00

FOptimusComponentBindingAction_RemoveBinding * __thiscall
FOptimusComponentBindingAction_RemoveBinding::FOptimusComponentBindingAction_RemoveBinding
          (FOptimusComponentBindingAction_RemoveBinding *this,
          UOptimusComponentSourceBinding *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  FOptimusComponentBindingAction_RemoveBinding *pFVar5;
  UOptimusComponentSource *pUVar6;
  FTopLevelAssetPath *pFVar7;
  UOptimusComponentSourceBindingContainer *pUVar8;
  FString *pFVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  wchar_t *pwVar12;
  FString local_28;
  FTopLevelAssetPath local_18;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FOptimusComponentBindingAction_RemoveBinding__6B_;
  (this->ComponentBindingName).ComparisonIndex = 0;
  (this->ComponentBindingName).Number = 0;
  (this->ComponentSourceClassPath).PackageName.ComparisonIndex = 0;
  (this->ComponentSourceClassPath).PackageName.Number = 0;
  (this->ComponentSourceClassPath).AssetName.ComparisonIndex = 0;
  (this->ComponentSourceClassPath).AssetName.Number = 0;
  (this->ComponentTags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ComponentTags).ArrayNum = 0;
  (this->ComponentTags).ArrayMax = 0;
  this->ComponentBindingIndex = 0;
  if (param_1 == (UOptimusComponentSourceBinding *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2192620421386338217>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Actions\\OptimusComponentBindingActions.cpp"
                       ,0x57,"InBinding");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FOptimusComponentBindingAction_RemoveBinding *)(*pcVar2)();
      return pFVar5;
    }
  }
  else {
    pUVar6 = UOptimusComponentSourceBinding::GetComponentSource(param_1);
    pFVar7 = UStruct::GetStructPathName(*(UStruct **)&pUVar6->field_0x10,&local_18);
    FVar3 = pFVar7->AssetName;
    (this->ComponentSourceClassPath).PackageName = pFVar7->PackageName;
    (this->ComponentSourceClassPath).AssetName = FVar3;
    this->ComponentBindingName = param_1->BindingName;
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=
              (&this->ComponentTags,&param_1->ComponentTags);
    pUVar8 = CastChecked<UOptimusComponentSourceBindingContainer,UObject>
                       ((UObject *)param_1->_padding_);
    pFVar1 = (pUVar8->Bindings).AllocatorInstance.Data;
    for (pFVar11 = pFVar1; pFVar11 != pFVar1 + (longlong)(pUVar8->Bindings).ArrayNum * 8;
        pFVar11 = pFVar11 + 8) {
      if ((*(UOptimusComponentSourceBinding **)pFVar11 != (UOptimusComponentSourceBinding *)0x0) &&
         (*(UOptimusComponentSourceBinding **)pFVar11 == param_1)) {
        iVar10 = (int)((longlong)pFVar11 - (longlong)pFVar1 >> 3);
        goto LAB_14e150bf0;
      }
    }
    iVar10 = -1;
LAB_14e150bf0:
    this->ComponentBindingIndex = iVar10;
    pFVar9 = ::FName::ToString(&this->ComponentBindingName,&local_28);
    if ((pFVar9->Data).ArrayNum == 0) {
      pwVar12 = L"";
    }
    else {
      pwVar12 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
    }
    FOptimusAction::SetTitlef<wchar_t_const_*>
              ((FOptimusAction *)this,
               (TCheckedFormatStringPrivate<wchar_t,wchar_t_const_*>)0x152e04d50,pwVar12);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return this;
}

