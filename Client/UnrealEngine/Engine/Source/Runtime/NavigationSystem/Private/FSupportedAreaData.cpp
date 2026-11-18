// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 2

// StaticStruct @ 146d620b0

UScriptStruct * __cdecl FSupportedAreaData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSupportedAreaData.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_NavigationSystem();
    Z_Registration_Info_UScriptStruct_FSupportedAreaData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSupportedAreaData,(UObject *)pUVar1,
                         L"SupportedAreaData");
  }
  return Z_Registration_Info_UScriptStruct_FSupportedAreaData.OuterSingleton;
}

// FSupportedAreaData @ 146d75230

FSupportedAreaData * __thiscall
FSupportedAreaData::FSupportedAreaData
          (FSupportedAreaData *this,TSubclassOf<UNavArea> param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  FName local_res8;
  ForAnyElementType local_18;
  int local_10;
  int iStack_c;
  
  pUVar6 = (UClass *)0x0;
  this->AreaID = param_2;
  (this->AreaClassName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AreaClassName).Data.ArrayNum = 0;
  (this->AreaClassName).Data.ArrayMax = 0;
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  if ((lVar2 != 0) && (pUVar5 = UNavArea::StaticClass(), pUVar5 != (UClass *)0x0)) {
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      pUVar6 = *(UClass **)param_1.Class.field0_0x0;
    }
  }
  (this->AreaClass).field0_0x0.DebugPtr = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  pUVar6 = (this->AreaClass).field0_0x0.DebugPtr;
  if (pUVar6 == (UClass *)0x0) {
    ::FString::operator=(&this->AreaClassName,L"Invalid");
  }
  else {
    local_res8 = (FName)pUVar6->_padding_;
    ::FName::ToString(&local_res8,(FString *)&stack0xffffffffffffffe8);
    if (this != (FSupportedAreaData *)&stack0xffffffffffffffe8) {
      pFVar3 = (this->AreaClassName).Data.AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (this->AreaClassName).Data.AllocatorInstance.Data = local_18.Data;
      (this->AreaClassName).Data.ArrayNum = local_10;
      (this->AreaClassName).Data.ArrayMax = iStack_c;
      local_10 = 0;
      iStack_c = 0;
      local_18.Data = (FScriptContainerElement *)0x0;
    }
    if (local_18.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data);
    }
  }
  return this;
}

