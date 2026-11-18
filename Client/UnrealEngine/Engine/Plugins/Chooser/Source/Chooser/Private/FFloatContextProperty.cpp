// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chooser
// Functions: 6

// StaticStruct @ 14a86c280

UScriptStruct * __cdecl FFloatContextProperty::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FFloatContextProperty.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_Chooser();
    Z_Registration_Info_UScriptStruct_FFloatContextProperty.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFloatContextProperty,(UObject *)pUVar1,
                         L"FloatContextProperty");
  }
  return Z_Registration_Info_UScriptStruct_FFloatContextProperty.OuterSingleton;
}

// GetValue @ 14a86c2c0

bool __thiscall
FFloatContextProperty::GetValue
          (FFloatContextProperty *this,FChooserEvaluationContext *param_1,double *param_2)

{
  bool bVar1;
  
  bVar1 = FChooserPropertyBinding::GetValue<double>(&this->Binding,param_1,param_2);
  return bVar1;
}

// SetValue @ 14a86c2d0

bool __thiscall
FFloatContextProperty::SetValue
          (FFloatContextProperty *this,FChooserEvaluationContext *param_1,double param_2)

{
  bool bVar1;
  byte bVar2;
  byte *pbVar3;
  FResolvedPropertyChainResult local_48;
  
  local_48.Container = (uchar *)0x0;
  local_48.PropertyOffset = 0;
  local_48.PropertyType = None;
  local_48.Mask = 0;
  local_48.Function = (UFunction *)0x0;
  local_48.StructType = (UStruct *)0x0;
  bVar1 = UE::Chooser::ResolvePropertyChain(param_1,&this->Binding,&local_48);
  if ((!bVar1) || (local_48.Function != (UFunction *)0x0)) {
    return false;
  }
  if (local_48.PropertyType != None) {
    if (local_48.PropertyType == Bool) {
      pbVar3 = local_48.Container + local_48.PropertyOffset;
      if (local_48.Mask != 0xff) {
        bVar2 = 0;
        if (param_2 != 0.0) {
          bVar2 = local_48.Mask;
        }
        *pbVar3 = *pbVar3 & ~local_48.Mask | bVar2;
        return true;
      }
      if (param_2 == 0.0) {
        *pbVar3 = 0;
        return true;
      }
      *pbVar3 = 1;
      return true;
    }
    if (local_48.PropertyType == Int32) {
      *(int *)(local_48.Container + local_48.PropertyOffset) = (int)param_2;
      return true;
    }
    if (local_48.PropertyType == Float) {
      *(float *)(local_48.Container + local_48.PropertyOffset) = (float)param_2;
      return true;
    }
  }
  *(double *)(local_48.Container + local_48.PropertyOffset) = param_2;
  return true;
}

// PostLoad @ 14a86c430

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FFloatContextProperty::PostLoad(FFloatContextProperty *this)

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

// Compile @ 14a86c4c0

void __thiscall
FFloatContextProperty::Compile(FFloatContextProperty *this,IHasContextClass *param_1,bool param_2)

{
  FChooserPropertyBinding::Compile(&this->Binding,param_1,param_2);
  return;
}

// HasCompileErrors @ 14a86c4f0

bool __thiscall FFloatContextProperty::HasCompileErrors(FFloatContextProperty *this,FText *param_1)

{
  return false;
}

