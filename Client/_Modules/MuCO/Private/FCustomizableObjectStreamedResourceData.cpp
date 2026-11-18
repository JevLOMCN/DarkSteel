// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 5

// StaticStruct @ 14ac04710

UScriptStruct * __cdecl FCustomizableObjectStreamedResourceData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCustomizableObjectStreamedResourceData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CustomizableObject();
    Z_Registration_Info_UScriptStruct_FCustomizableObjectStreamedResourceData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCustomizableObjectStreamedResourceData,
                         (UObject *)pUVar1,L"CustomizableObjectStreamedResourceData");
  }
  return Z_Registration_Info_UScriptStruct_FCustomizableObjectStreamedResourceData.OuterSingleton;
}

// GetLoadedData @ 14ac1ec80

FCustomizableObjectResourceData * __thiscall
FCustomizableObjectStreamedResourceData::GetLoadedData
          (FCustomizableObjectStreamedResourceData *this)

{
  code *pcVar1;
  bool bVar2;
  FCustomizableObjectResourceData *pFVar3;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectStreamedResourceData.cpp"
                       ,0x2c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FCustomizableObjectResourceData *)(*pcVar1)();
      return pFVar3;
    }
  }
  if ((this->Container).field0_0x0.DebugPtr == (UCustomizableObjectResourceDataContainer *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Container",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectStreamedResourceData.cpp"
                       ,0x2d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FCustomizableObjectResourceData *)(*pcVar1)();
      return pFVar3;
    }
  }
  return &((this->Container).field0_0x0.DebugPtr)->Data;
}

// Hold @ 14ac25ab0

void __thiscall
FCustomizableObjectStreamedResourceData::Hold(FCustomizableObjectStreamedResourceData *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UCustomizableObjectResourceDataContainer *pUVar4;
  UClass *pUVar5;
  
  bVar3 = IsInGameThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectStreamedResourceData.cpp"
                       ,0x3e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pUVar4 = (UCustomizableObjectResourceDataContainer *)
           TPersistentObjectPtr<FSoftObjectPath>::Get((TPersistentObjectPtr<FSoftObjectPath> *)this)
  ;
  if (pUVar4 != (UCustomizableObjectResourceDataContainer *)0x0) {
    pUVar5 = Z_Construct_UClass_UCustomizableObjectResourceDataContainer_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) goto LAB_14ac25b21;
  }
  pUVar4 = (UCustomizableObjectResourceDataContainer *)0x0;
LAB_14ac25b21:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 != (UCustomizableObjectResourceDataContainer *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->Container).field0_0x0.DebugPtr = pUVar4;
  return;
}

// IsLoaded @ 14ac27950

bool __thiscall
FCustomizableObjectStreamedResourceData::IsLoaded(FCustomizableObjectStreamedResourceData *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectStreamedResourceData.cpp"
                       ,0x25,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return (this->Container).field0_0x0.DebugPtr != (UCustomizableObjectResourceDataContainer *)0x0;
}

// Release @ 14ac2dc90

void __thiscall
FCustomizableObjectStreamedResourceData::Release(FCustomizableObjectStreamedResourceData *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectStreamedResourceData.cpp"
                       ,0x34,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (this->Container).field0_0x0.DebugPtr = (UCustomizableObjectResourceDataContainer *)0x0;
  return;
}

