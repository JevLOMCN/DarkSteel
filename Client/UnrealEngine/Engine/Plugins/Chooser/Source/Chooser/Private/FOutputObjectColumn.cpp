// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chooser
// Functions: 7

// StaticStruct @ 14a86ff90

UScriptStruct * __cdecl FOutputObjectColumn::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FOutputObjectColumn.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Chooser();
    Z_Registration_Info_UScriptStruct_FOutputObjectColumn.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FOutputObjectColumn,(UObject *)pUVar1,
                         L"OutputObjectColumn");
  }
  return Z_Registration_Info_UScriptStruct_FOutputObjectColumn.OuterSingleton;
}

// FOutputObjectColumn @ 14a87d660

FOutputObjectColumn * __thiscall FOutputObjectColumn::FOutputObjectColumn(FOutputObjectColumn *this)

{
  this->_padding_ = (longlong)&___7FOutputObjectColumn__6B_;
  FInstancedStruct::FInstancedStruct(&this->InputValue);
  (this->RowValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RowValues).ArrayNum = 0;
  (this->RowValues).ArrayMax = 0;
  FInstancedStruct::FInstancedStruct(&(this->FallbackValue).Value);
  return this;
}

// Compile @ 14a8830b0

void __thiscall
FOutputObjectColumn::Compile(FOutputObjectColumn *this,IHasContextClass *param_1,bool param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  longlong *plVar6;
  UPackage *pUVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined7 in_register_00000081;
  undefined1 local_res8 [8];
  
  plVar6 = (longlong *)
           (**(code **)(this->_padding_ + 0x58))
                     (this,param_1,CONCAT71(in_register_00000081,param_2));
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x28))(plVar6,param_1,param_2);
  }
  iVar1 = (this->RowValues).ArrayNum;
  pFVar8 = (this->RowValues).AllocatorInstance.Data;
  pFVar9 = pFVar8 + (longlong)iVar1 * 0x10;
  do {
    if ((this->RowValues).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FChooserOutputObjectRowData,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar8 == pFVar9) {
      return;
    }
    plVar6 = *(longlong **)(pFVar8 + 8);
    if ((plVar6 != (longlong *)0x0) && (lVar3 = *(longlong *)pFVar8, lVar3 != 0)) {
      if (Z_Registration_Info_UScriptStruct_FObjectChooserBase.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar7 = Z_Construct_UPackage__Script_Chooser();
        Z_Registration_Info_UScriptStruct_FObjectChooserBase.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FObjectChooserBase,(UObject *)pUVar7,
                             L"ObjectChooserBase");
        if (Z_Registration_Info_UScriptStruct_FObjectChooserBase.OuterSingleton !=
            (UScriptStruct *)0x0) goto LAB_14a88316e;
LAB_14a883192:
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Struct->IsChildOf(TBaseStructure<T>::Get())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                           ,0xd3,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      else {
LAB_14a88316e:
        iVar2 = (int)(Z_Registration_Info_UScriptStruct_FObjectChooserBase.OuterSingleton)->
                     _padding_;
        if ((*(int *)(lVar3 + 0x38) < iVar2) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar2 * 8) !=
            &(Z_Registration_Info_UScriptStruct_FObjectChooserBase.OuterSingleton)->_padding_)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (!bVar5) goto LAB_14a883192;
      }
      (**(code **)(*plVar6 + 8))(plVar6,param_1,param_2);
    }
    pFVar8 = pFVar8 + 0x10;
  } while( true );
}

// GetInputValue @ 14a88a5a0

FChooserParameterBase * __thiscall FOutputObjectColumn::GetInputValue(FOutputObjectColumn *this)

{
  FChooserParameterBase *pFVar1;
  
  pFVar1 = FInstancedStruct::GetMutablePtr<FChooserParameterBase>(&this->InputValue);
  return pFVar1;
}

// HasFilters @ 14a88b950

bool __thiscall FOutputObjectColumn::HasFilters(FOutputObjectColumn *this)

{
  return false;
}

// HasOutputs @ 14a88b9d0

bool __thiscall FOutputObjectColumn::HasOutputs(FOutputObjectColumn *this)

{
  return true;
}

// SetOutputs @ 14a88f850

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOutputObjectColumn::SetOutputs
          (FOutputObjectColumn *this,FChooserEvaluationContext *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FObjectChooserBase *pFVar4;
  undefined8 uVar5;
  FChooserParameterObjectBase *pFVar6;
  FInstancedStruct *this_00;
  FString local_38;
  FAssetLog local_28;
  
  if (((this->InputValue).StructMemory != (uchar *)0x0) &&
     ((this->InputValue).ScriptStruct.field0_0x0.DebugPtr != (UScriptStruct *)0x0)) {
    if (param_2 == -2) {
      this_00 = &(this->FallbackValue).Value;
    }
    else {
      if ((param_2 < 0) || ((this->RowValues).ArrayNum <= param_2)) {
        if ((byte)LogChooser._0_1_ < 2) {
          return;
        }
        ::FString::PrintfImpl
                  (&local_38,L"Invalid index %d passed to FOutputObjectColumn::SetOutputs");
        local_28.Object = (param_1->DebuggingInfo).CurrentChooser;
        local_28.Path = (wchar_t *)0x0;
        local_28.PackagePath = (FPackagePath *)0x0;
        UE::Core::Private::RecordAssetLog
                  ((FName *)&LogChooser.field_0x4,Error,&local_28,&local_38,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Chooser\\Source\\Chooser\\Private\\OutputObjectColumn.cpp"
                   ,0x32);
        if (local_38.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return;
        }
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
        return;
      }
      uVar3 = 0;
      if (param_2 < (this->RowValues).ArrayNum) {
        uVar3 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      this_00 = (FInstancedStruct *)
                ((this->RowValues).AllocatorInstance.Data + (longlong)param_2 * 0x10);
    }
    pFVar4 = FInstancedStruct::GetPtr<FObjectChooserBase>(this_00);
    if (pFVar4 != (FObjectChooserBase *)0x0) {
      uVar5 = (**(code **)((longlong)*pFVar4 + 0x18))(pFVar4,param_1);
      pFVar6 = UE::StructUtils::GetStructRef<FChooserParameterObjectBase>
                         ((this->InputValue).ScriptStruct.field0_0x0.DebugPtr,
                          (this->InputValue).StructMemory);
      (**(code **)((longlong)*pFVar6 + 0x50))(pFVar6,param_1,uVar5);
    }
  }
  return;
}

