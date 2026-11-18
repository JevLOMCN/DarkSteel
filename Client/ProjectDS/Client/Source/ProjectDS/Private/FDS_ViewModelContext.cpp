// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 3

// ~FDS_ViewModelContext @ 14b5d9fb0

void __thiscall FDS_ViewModelContext::~FDS_ViewModelContext(FDS_ViewModelContext *this)

{
  this->_padding_ = (longlong)&___7FDS_ViewModelContext__6B_;
  return;
}

// StaticStruct @ 14b5fd990

UScriptStruct * __cdecl FDS_ViewModelContext::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_ViewModelContext.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_ViewModelContext.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_ViewModelContext,(UObject *)pUVar1,
                         L"DS_ViewModelContext");
  }
  return Z_Registration_Info_UScriptStruct_FDS_ViewModelContext.OuterSingleton;
}

// AddReferencedObjects @ 14bf3fd30

void __thiscall
FDS_ViewModelContext::AddReferencedObjects(FDS_ViewModelContext *this,FReferenceCollector *param_1)

{
  int iVar1;
  UScriptStruct *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UScriptStruct *)this->DerivedStaticStruct;
  if (pUVar2 != (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      FReferenceCollector::AddPropertyReferencesWithStructARO(param_1,pUVar2,this,(UObject *)0x0);
    }
  }
  return;
}

