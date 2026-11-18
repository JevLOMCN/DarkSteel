// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkMessageBusFramework
// Functions: 2

// StaticStruct @ 14cfe72e0

UScriptStruct * __cdecl FLiveLinkByteArray::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkByteArray.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_LiveLinkMessageBusFramework();
    Z_Registration_Info_UScriptStruct_FLiveLinkByteArray.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkByteArray,(UObject *)pUVar1,
                         L"LiveLinkByteArray");
  }
  return Z_Registration_Info_UScriptStruct_FLiveLinkByteArray.OuterSingleton;
}

// operator= @ 14cfea200

FLiveLinkByteArray * __thiscall
FLiveLinkByteArray::operator=(FLiveLinkByteArray *this,FLiveLinkByteArray *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    iVar2 = (this->Bytes).ArrayMax;
    piVar1 = &(this->Bytes).ArrayMax;
    _Src = (param_1->Bytes).AllocatorInstance.Data;
    iVar3 = (param_1->Bytes).ArrayNum;
    (this->Bytes).ArrayNum = iVar3;
    if ((iVar3 == 0) && (iVar2 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar3,iVar2,(ForAnyElementType *)this,iVar3,piVar1);
    if (iVar3 != 0) {
      memcpy((this->Bytes).AllocatorInstance.Data,_Src,(longlong)iVar3);
    }
  }
  return this;
}

