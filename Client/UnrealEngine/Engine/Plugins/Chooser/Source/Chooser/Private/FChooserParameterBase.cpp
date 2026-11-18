// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chooser
// Functions: 9

// StaticStruct @ 14a8754c0

UScriptStruct * __cdecl FChooserParameterBase::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FChooserParameterBase.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_Chooser();
    Z_Registration_Info_UScriptStruct_FChooserParameterBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChooserParameterBase,(UObject *)pUVar1,
                         L"ChooserParameterBase");
  }
  return Z_Registration_Info_UScriptStruct_FChooserParameterBase.OuterSingleton;
}

// GetDebugName @ 14a875500

FString * __thiscall
FChooserParameterBase::GetDebugName(FChooserParameterBase *this,FString *__return_storage_ptr__)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  FString *pFVar3;
  FText local_18;
  
  FText::FText(&local_18);
  (**(code **)((longlong)*this + 8))(this,&local_18);
  pFVar3 = FText::ToString(&local_18);
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar2 = (pFVar3->Data).ArrayNum;
  _Src = (pFVar3->Data).AllocatorInstance.Data;
  piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
  (__return_storage_ptr__->Data).ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar2,0,(ForAnyElementType *)__return_storage_ptr__,iVar2,piVar1);
    memcpy((__return_storage_ptr__->Data).AllocatorInstance.Data,_Src,(longlong)iVar2 * 2);
  }
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetDisplayName @ 14a8755b0

void __thiscall FChooserParameterBase::GetDisplayName(FChooserParameterBase *this,FText *param_1)

{
  return;
}

// AddSearchNames @ 14a8755c0

void __thiscall
FChooserParameterBase::AddSearchNames
          (FChooserParameterBase *this,TStringBuilderBase<wchar_t> *param_1)

{
  return;
}

// ReplaceString @ 14a8755d0

void __thiscall
FChooserParameterBase::ReplaceString
          (FChooserParameterBase *this,TStringView<wchar_t> *param_1,Type param_2,bool param_3,
          TStringView<wchar_t> *param_4)

{
  return;
}

// PostLoad @ 14a8755e0

void __thiscall FChooserParameterBase::PostLoad(FChooserParameterBase *this)

{
  return;
}

// Compile @ 14a8755f0

void __thiscall
FChooserParameterBase::Compile(FChooserParameterBase *this,IHasContextClass *param_1,bool param_2)

{
  return;
}

// HasCompileErrors @ 14a875600

bool __thiscall FChooserParameterBase::HasCompileErrors(FChooserParameterBase *this,FText *param_1)

{
  return false;
}

// ~FChooserParameterBase @ 14a87e440

void __thiscall FChooserParameterBase::~FChooserParameterBase(FChooserParameterBase *this)

{
  *this = (FChooserParameterBase)&___7FChooserParameterBase__6B_;
  return;
}

