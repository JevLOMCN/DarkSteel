// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Messaging
// Functions: 2

// ~IMessageContext @ 142d3f160

void __thiscall IMessageContext::~IMessageContext(IMessageContext *this)

{
  *this = (IMessageContext)&___7IMessageContext__6B_;
  return;
}

// GetMessageTypePathName @ 142d47810

FTopLevelAssetPath * __thiscall
IMessageContext::GetMessageTypePathName
          (IMessageContext *this,FTopLevelAssetPath *__return_storage_ptr__)

{
  bool bVar1;
  longlong lVar2;
  FWeakObjectPtr *pFVar3;
  UStruct *this_00;
  
  lVar2 = (**(code **)((longlong)*this + 0x18))();
  if (lVar2 != 0) {
    pFVar3 = (FWeakObjectPtr *)(**(code **)((longlong)*this + 0x20))(this);
    bVar1 = FWeakObjectPtr::IsValid(pFVar3,false,true);
    if (bVar1) {
      pFVar3 = (FWeakObjectPtr *)(**(code **)((longlong)*this + 0x20))(this);
      this_00 = (UStruct *)FWeakObjectPtr::Get(pFVar3);
      UStruct::GetStructPathName(this_00,__return_storage_ptr__);
      return __return_storage_ptr__;
    }
  }
  (__return_storage_ptr__->PackageName).ComparisonIndex = 0;
  (__return_storage_ptr__->PackageName).Number = 0;
  (__return_storage_ptr__->AssetName).ComparisonIndex = 0;
  (__return_storage_ptr__->AssetName).Number = 0;
  return __return_storage_ptr__;
}

