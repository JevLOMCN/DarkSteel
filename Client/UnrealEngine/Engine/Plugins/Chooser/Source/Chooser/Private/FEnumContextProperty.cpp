// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chooser
// Functions: 6

// StaticStruct @ 14a873b10

UScriptStruct * __cdecl FEnumContextProperty::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FEnumContextProperty.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Chooser();
    Z_Registration_Info_UScriptStruct_FEnumContextProperty.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FEnumContextProperty,(UObject *)pUVar1,
                         L"EnumContextProperty");
  }
  return Z_Registration_Info_UScriptStruct_FEnumContextProperty.OuterSingleton;
}

// GetValue @ 14a873c10

bool __thiscall
FEnumContextProperty::GetValue
          (FEnumContextProperty *this,FChooserEvaluationContext *param_1,uchar *param_2)

{
  bool bVar1;
  
  bVar1 = FChooserPropertyBinding::GetValue<unsigned_char>
                    ((FChooserPropertyBinding *)&this->Binding,param_1,param_2);
  return bVar1;
}

// SetValue @ 14a873c20

bool __thiscall
FEnumContextProperty::SetValue
          (FEnumContextProperty *this,FChooserEvaluationContext *param_1,uchar param_2)

{
  uint uVar1;
  bool bVar2;
  byte bVar3;
  byte *pbVar4;
  FResolvedPropertyChainResult local_38;
  
  uVar1 = (uint)param_2;
  local_38.Container = (uchar *)0x0;
  local_38.PropertyOffset = 0;
  local_38.PropertyType = None;
  local_38.Mask = 0;
  local_38.Function = (UFunction *)0x0;
  local_38.StructType = (UStruct *)0x0;
  bVar2 = UE::Chooser::ResolvePropertyChain
                    (param_1,(FChooserPropertyBinding *)&this->Binding,&local_38);
  if ((!bVar2) || (local_38.Function != (UFunction *)0x0)) {
    return false;
  }
  if (local_38.PropertyType != None) {
    if (local_38.PropertyType == Bool) {
      pbVar4 = local_38.Container + local_38.PropertyOffset;
      if (local_38.Mask != 0xff) {
        bVar3 = local_38.Mask;
        if (param_2 == '\0') {
          bVar3 = 0;
        }
        *pbVar4 = bVar3 | ~local_38.Mask & *pbVar4;
        return true;
      }
      *pbVar4 = param_2 != '\0';
      return true;
    }
    if (local_38.PropertyType == Int32) {
      *(uint *)(local_38.Container + local_38.PropertyOffset) = uVar1;
      return true;
    }
    if (local_38.PropertyType == Float) {
      *(float *)(local_38.Container + local_38.PropertyOffset) = (float)uVar1;
      return true;
    }
    if (local_38.PropertyType == Double) {
      *(double *)(local_38.Container + local_38.PropertyOffset) = (double)uVar1;
      return true;
    }
  }
  local_38.Container[local_38.PropertyOffset] = param_2;
  return true;
}

// PostLoad @ 14a873d60

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FEnumContextProperty::PostLoad(FEnumContextProperty *this)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *this_00;
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  iVar3 = (this->PropertyBindingChain_DEPRECATED).ArrayNum;
  this_00 = &this->PropertyBindingChain_DEPRECATED;
  if (0 < iVar3) {
    puVar1 = &(this->Binding).field_0x8;
    if ((TArray<FName,TSizedDefaultAllocator<32>_> *)puVar1 != this_00) {
      puVar2 = &(this->Binding).field_0x14;
      _Src = (this_00->AllocatorInstance).Data;
      *(int *)&(this->Binding).field_0x10 = iVar3;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar3,*(int *)puVar2,(ForAnyElementType *)puVar1,iVar3,(int *)puVar2);
      memcpy(*(void **)puVar1,_Src,(longlong)iVar3 << 3);
    }
    TArray<FName,TSizedDefaultAllocator<32>_>::SetNum(this_00,0,Default);
  }
  return;
}

// Compile @ 14a873df0

void __thiscall
FEnumContextProperty::Compile(FEnumContextProperty *this,IHasContextClass *param_1,bool param_2)

{
  FChooserPropertyBinding::Compile((FChooserPropertyBinding *)&this->Binding,param_1,param_2);
  return;
}

// HasCompileErrors @ 14a873e00

bool __thiscall FEnumContextProperty::HasCompileErrors(FEnumContextProperty *this,FText *param_1)

{
  return false;
}

