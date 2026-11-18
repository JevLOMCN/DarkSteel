// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chooser
// Functions: 6

// StaticStruct @ 14a870b40

UScriptStruct * __cdecl FBoolContextProperty::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBoolContextProperty.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Chooser();
    Z_Registration_Info_UScriptStruct_FBoolContextProperty.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBoolContextProperty,(UObject *)pUVar1,
                         L"BoolContextProperty");
  }
  return Z_Registration_Info_UScriptStruct_FBoolContextProperty.OuterSingleton;
}

// GetValue @ 14a870c00

bool __thiscall
FBoolContextProperty::GetValue
          (FBoolContextProperty *this,FChooserEvaluationContext *param_1,bool *param_2)

{
  bool bVar1;
  
  bVar1 = FChooserPropertyBinding::GetValue<bool>(&this->Binding,param_1,param_2);
  return bVar1;
}

// SetValue @ 14a870c70

bool __thiscall
FBoolContextProperty::SetValue
          (FBoolContextProperty *this,FChooserEvaluationContext *param_1,bool param_2)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  FResolvedPropertyChainResult local_38;
  
  local_38.Container = (uchar *)0x0;
  local_38.PropertyOffset = 0;
  local_38.PropertyType = None;
  local_38.Mask = 0;
  local_38.Function = (UFunction *)0x0;
  local_38.StructType = (UStruct *)0x0;
  bVar1 = UE::Chooser::ResolvePropertyChain(param_1,&this->Binding,&local_38);
  if ((!bVar1) || (local_38.Function != (UFunction *)0x0)) {
    return false;
  }
  if (local_38.PropertyType != None) {
    if (local_38.PropertyType == Bool) {
      if (local_38.Mask != 0xff) {
        bVar2 = local_38.Mask;
        if (!param_2) {
          bVar2 = 0;
        }
        param_2 = (bool)(bVar2 | ~local_38.Mask & local_38.Container[local_38.PropertyOffset]);
      }
      local_38.Container[local_38.PropertyOffset] = param_2;
      return true;
    }
    uVar3 = (uint)param_2;
    if (local_38.PropertyType == Int32) {
      *(uint *)(local_38.Container + local_38.PropertyOffset) = uVar3;
      return true;
    }
    if (local_38.PropertyType == Float) {
      *(float *)(local_38.Container + local_38.PropertyOffset) = (float)uVar3;
      return true;
    }
    if (local_38.PropertyType == Double) {
      *(double *)(local_38.Container + local_38.PropertyOffset) = (double)uVar3;
      return true;
    }
  }
  local_38.Container[local_38.PropertyOffset] = param_2;
  return true;
}

// PostLoad @ 14a870da0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FBoolContextProperty::PostLoad(FBoolContextProperty *this)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *this_00;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  
  iVar3 = (this->PropertyBindingChain_DEPRECATED).ArrayNum;
  this_00 = &this->PropertyBindingChain_DEPRECATED;
  if (0 < iVar3) {
    pTVar1 = &(this->Binding).PropertyBindingChain;
    if (pTVar1 != this_00) {
      piVar2 = &(this->Binding).PropertyBindingChain.ArrayMax;
      _Src = (this_00->AllocatorInstance).Data;
      iVar4 = *piVar2;
      (this->Binding).PropertyBindingChain.ArrayNum = iVar3;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar3,iVar4,&pTVar1->AllocatorInstance,iVar3,piVar2);
      memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 3);
    }
    TArray<FName,TSizedDefaultAllocator<32>_>::SetNum(this_00,0,Default);
  }
  return;
}

// Compile @ 14a870e30

void __thiscall
FBoolContextProperty::Compile(FBoolContextProperty *this,IHasContextClass *param_1,bool param_2)

{
  FChooserPropertyBinding::Compile(&this->Binding,param_1,param_2);
  return;
}

// HasCompileErrors @ 14a870e40

bool __thiscall FBoolContextProperty::HasCompileErrors(FBoolContextProperty *this,FText *param_1)

{
  return false;
}

