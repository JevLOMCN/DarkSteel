// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 5

// StaticStruct @ 14e1052e0

UScriptStruct * __cdecl FOptimusComponentBindingAction_SetComponentSource::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FOptimusComponentBindingAction_SetComponentSource.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OptimusCore();
    Z_Registration_Info_UScriptStruct_FOptimusComponentBindingAction_SetComponentSource.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FOptimusComponentBindingAction_SetComponentSource
                         ,(UObject *)pUVar1,L"OptimusComponentBindingAction_SetComponentSource");
  }
  return Z_Registration_Info_UScriptStruct_FOptimusComponentBindingAction_SetComponentSource.
         OuterSingleton;
}

// Do @ 14e105320

bool __thiscall
FOptimusComponentBindingAction_SetComponentSource::Do
          (FOptimusComponentBindingAction_SetComponentSource *this,IOptimusPathResolver *param_1)

{
  bool bVar1;
  FTopLevelAssetPath local_18;
  
  local_18.PackageName = (this->NewComponentSourceClassPath).PackageName;
  local_18.AssetName = (this->NewComponentSourceClassPath).AssetName;
  bVar1 = SetComponentSource(this,param_1,&local_18);
  return bVar1;
}

// Undo @ 14e105350

bool __thiscall
FOptimusComponentBindingAction_SetComponentSource::Undo
          (FOptimusComponentBindingAction_SetComponentSource *this,IOptimusPathResolver *param_1)

{
  bool bVar1;
  FTopLevelAssetPath local_18;
  
  local_18.PackageName = (this->OldComponentSourceClassPath).PackageName;
  local_18.AssetName = (this->OldComponentSourceClassPath).AssetName;
  bVar1 = SetComponentSource(this,param_1,&local_18);
  return bVar1;
}

// FOptimusComponentBindingAction_SetComponentSource @ 14e150d20

FOptimusComponentBindingAction_SetComponentSource * __thiscall
FOptimusComponentBindingAction_SetComponentSource::FOptimusComponentBindingAction_SetComponentSource
          (FOptimusComponentBindingAction_SetComponentSource *this,
          UOptimusComponentSourceBinding *param_1,UOptimusComponentSource *param_2)

{
  int iVar1;
  UClass *pUVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  FName FVar7;
  bool bVar8;
  FOptimusComponentBindingAction_SetComponentSource *pFVar9;
  FTopLevelAssetPath *pFVar10;
  UClass *pUVar11;
  FName *this_00;
  FString *pFVar12;
  UClass *this_01;
  wchar_t *pwVar13;
  undefined1 local_res8 [8];
  FString local_48;
  FTopLevelAssetPath local_38;
  FTopLevelAssetPath local_28;
  
  this_01 = (UClass *)0x0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FOptimusComponentBindingAction_SetComponentSource__6B_;
  (this->BindingName).ComparisonIndex = 0;
  (this->BindingName).Number = 0;
  (this->NewComponentSourceClassPath).PackageName.ComparisonIndex = 0;
  (this->NewComponentSourceClassPath).PackageName.Number = 0;
  (this->NewComponentSourceClassPath).AssetName.ComparisonIndex = 0;
  (this->NewComponentSourceClassPath).AssetName.Number = 0;
  (this->OldComponentSourceClassPath).PackageName.ComparisonIndex = 0;
  (this->OldComponentSourceClassPath).PackageName.Number = 0;
  (this->OldComponentSourceClassPath).AssetName.ComparisonIndex = 0;
  (this->OldComponentSourceClassPath).AssetName.Number = 0;
  if (param_1 == (UOptimusComponentSourceBinding *)0x0) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2192620421386338120>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Actions\\OptimusComponentBindingActions.cpp"
                       ,0xb8,"InComponentBinding");
    if (bVar8) {
code_r0x00014e150dc6:
      pcVar3 = (code *)swi(3);
      pFVar9 = (FOptimusComponentBindingAction_SetComponentSource *)(*pcVar3)();
      return pFVar9;
    }
  }
  else if (param_2 == (UOptimusComponentSource *)0x0) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2192620421386338120>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Actions\\OptimusComponentBindingActions.cpp"
                       ,0xb8,"InComponentSource");
    if (bVar8) goto code_r0x00014e150dc6;
  }
  else {
    this->BindingName = param_1->BindingName;
    pFVar10 = UStruct::GetStructPathName(*(UStruct **)&param_2->field_0x10,&local_38);
    FVar7 = pFVar10->AssetName;
    (this->NewComponentSourceClassPath).PackageName = pFVar10->PackageName;
    (this->NewComponentSourceClassPath).AssetName = FVar7;
    pUVar2 = (param_1->ComponentType).Class.field0_0x0.DebugPtr;
    if ((pUVar2 != (UClass *)0x0) &&
       (pUVar11 = UOptimusComponentSource::StaticClass(), pUVar11 != (UClass *)0x0)) {
      iVar1 = (int)pUVar11->_padding_;
      if (((int)pUVar2->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar11->_padding_)) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      if (bVar8) {
        this_01 = (param_1->ComponentType).Class.field0_0x0.DebugPtr;
      }
    }
    pFVar10 = UStruct::GetStructPathName((UStruct *)this_01,&local_28);
    uVar4 = (pFVar10->PackageName).Number;
    uVar5 = (pFVar10->AssetName).ComparisonIndex.Value;
    uVar6 = (pFVar10->AssetName).Number;
    (this->OldComponentSourceClassPath).PackageName.ComparisonIndex.Value =
         (pFVar10->PackageName).ComparisonIndex.Value;
    (this->OldComponentSourceClassPath).PackageName.Number = uVar4;
    (this->OldComponentSourceClassPath).AssetName.ComparisonIndex.Value = uVar5;
    (this->OldComponentSourceClassPath).AssetName.Number = uVar6;
    this_00 = (FName *)(**(code **)(*(longlong *)param_2 + 0x2b8))(param_2,local_res8);
    pFVar12 = ::FName::ToString(this_00,&local_48);
    if ((pFVar12->Data).ArrayNum == 0) {
      pwVar13 = L"";
    }
    else {
      pwVar13 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
    }
    FOptimusAction::SetTitlef<wchar_t_const_*>
              ((FOptimusAction *)this,
               (TCheckedFormatStringPrivate<wchar_t,wchar_t_const_*>)0x152e04dd8,pwVar13);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  return this;
}

// SetComponentSource @ 14e21c940

bool __thiscall
FOptimusComponentBindingAction_SetComponentSource::SetComponentSource
          (FOptimusComponentBindingAction_SetComponentSource *this,IOptimusPathResolver *param_1,
          FTopLevelAssetPath *param_2)

{
  int iVar1;
  UObject *pUVar2;
  longlong lVar3;
  TObjectPtr<UOptimusComponentSourceBindingContainer>_u_0 TVar4;
  longlong *plVar5;
  UOptimusDeformer *pUVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 uVar9;
  UClass *pUVar10;
  UClass *pUVar11;
  UOptimusDeformer *this_00;
  UObject *pUVar12;
  longlong *plVar13;
  UOptimusDeformer *pUVar14;
  FTopLevelAssetPath local_28;
  
  pUVar10 = Z_Construct_UClass_UClass_NoRegister();
  local_28.PackageName = param_2->PackageName;
  local_28.AssetName = param_2->AssetName;
  pUVar10 = (UClass *)StaticFindObject(pUVar10,&local_28,None);
  if (pUVar10 == (UClass *)0x0) {
    return false;
  }
  pUVar11 = Z_Construct_UClass_UClass_NoRegister();
  iVar1 = (int)pUVar11->_padding_;
  if (*(int *)(pUVar10->_padding_ + 0x38) < iVar1) {
    return false;
  }
  if ((longlong *)*(undefined1 **)(*(longlong *)(pUVar10->_padding_ + 0x30) + (longlong)iVar1 * 8)
      != &pUVar11->_padding_) {
    return false;
  }
  if ((pUVar10->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar10);
  }
  pUVar2 = (pUVar10->ClassDefaultObject).field0_0x0.DebugPtr;
  pUVar10 = UOptimusComponentSource::StaticClass();
  lVar3 = *(longlong *)&pUVar2->field_0x10;
  iVar1 = (int)pUVar10->_padding_;
  if (((*(int *)(lVar3 + 0x38) < iVar1) ||
      ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
       &pUVar10->_padding_)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ret->IsA(T::StaticClass())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                         ,0x1181,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    uVar9 = (*pcVar7)();
    return (bool)uVar9;
  }
  pUVar14 = (UOptimusDeformer *)0x0;
  if ((param_1 != (IOptimusPathResolver *)0x0) &&
     (this_00 = (UOptimusDeformer *)(**(code **)((longlong)*param_1 + 8))(param_1),
     this_00 != (UOptimusDeformer *)0x0)) {
    pUVar10 = UOptimusDeformer::StaticClass();
    iVar1 = (int)pUVar10->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar10->_padding_)) goto LAB_14e21ca55;
  }
  this_00 = pUVar14;
LAB_14e21ca55:
  pUVar12 = (UObject *)
            (**(code **)(this_00->_padding_ + 0x40))(&this_00->_padding_,this->BindingName);
  if (pUVar12 != (UObject *)0x0) {
    TVar4 = (this_00->Bindings).field0_0x0;
    plVar5 = *(longlong **)((longlong)TVar4 + 0x28);
    for (plVar13 = plVar5; plVar13 != plVar5 + ((TVar4.DebugPtr)->Bindings).ArrayNum;
        plVar13 = plVar13 + 1) {
      if (((UObject *)*plVar13 != (UObject *)0x0) && ((UObject *)*plVar13 == pUVar12)) {
        if ((int)((longlong)plVar13 - (longlong)plVar5 >> 3) == -1) {
          return false;
        }
        lVar3 = *(longlong *)&pUVar12[1].field_0x8;
        if ((lVar3 != 0) &&
           (pUVar10 = UOptimusComponentSource::StaticClass(), pUVar10 != (UClass *)0x0)) {
          iVar1 = (int)pUVar10->_padding_;
          if ((*(int *)(lVar3 + 0x38) < iVar1) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
              &pUVar10->_padding_)) {
            bVar8 = false;
          }
          else {
            bVar8 = true;
          }
          if (bVar8) {
            pUVar14 = *(UOptimusDeformer **)&pUVar12[1].field_0x8;
          }
        }
        pUVar6 = *(UOptimusDeformer **)&pUVar2->field_0x10;
        if (pUVar14 != pUVar6) {
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar6 != (UOptimusDeformer *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar6);
          }
          *(UOptimusDeformer **)&pUVar12[1].field_0x8 = pUVar6;
          UOptimusDeformer::Notify(this_00,ComponentBindingSourceChanged,pUVar12);
          UObjectBaseUtility::MarkPackageDirty((UObjectBaseUtility *)this_00);
        }
        return true;
      }
    }
  }
  return false;
}

