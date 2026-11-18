// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 147888810

UScriptStruct * __cdecl FCachedKeyToActionInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCachedKeyToActionInfo.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FCachedKeyToActionInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCachedKeyToActionInfo,(UObject *)pUVar1,
                         L"CachedKeyToActionInfo");
  }
  return Z_Registration_Info_UScriptStruct_FCachedKeyToActionInfo.OuterSingleton;
}

// FCachedKeyToActionInfo @ 1478a5c60

FCachedKeyToActionInfo * __thiscall
FCachedKeyToActionInfo::FCachedKeyToActionInfo(FCachedKeyToActionInfo *this)

{
  undefined8 local_res8;
  
  (this->PlayerInput).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_res8);
  this->KeyMapBuiltForIndex = 0;
  *(undefined8 *)&this->KeyToActionMap = 0;
  *(undefined8 *)&(this->KeyToActionMap).field_0x8 = 0;
  *(undefined8 *)&(this->KeyToActionMap).field_0x20 = 0;
  *(undefined4 *)&(this->KeyToActionMap).field_0x28 = 0;
  *(undefined4 *)&(this->KeyToActionMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->KeyToActionMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->KeyToActionMap).field_0x34 = 0;
  *(undefined8 *)&(this->KeyToActionMap).field_0x40 = 0;
  *(undefined4 *)&(this->KeyToActionMap).field_0x48 = 0;
  (this->AnyKeyToActionMap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnyKeyToActionMap).ArrayNum = 0;
  (this->AnyKeyToActionMap).ArrayMax = 0;
  return this;
}

