// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosVDRuntime
// Functions: 3

// StaticStruct @ 1436c7ab0

UScriptStruct * __cdecl FChaosVDCollisionResponseParams::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDCollisionResponseParams.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UScriptStruct_FChaosVDCollisionResponseParams.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDCollisionResponseParams,(UObject *)pUVar1
                         ,L"ChaosVDCollisionResponseParams");
  }
  return Z_Registration_Info_UScriptStruct_FChaosVDCollisionResponseParams.OuterSingleton;
}

// operator= @ 1436d6440

FChaosVDCollisionResponseParams * __thiscall
FChaosVDCollisionResponseParams::operator=
          (FChaosVDCollisionResponseParams *this,FChaosVDCollisionResponseParams *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  ForElementType<unsigned_char> _Dst;
  ForElementType<unsigned_char> _Src;
  
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  if (this != param_1) {
    iVar2 = (this->FlagsPerChannel).ArrayMax;
    piVar1 = &(this->FlagsPerChannel).ArrayMax;
    _Src = (param_1->FlagsPerChannel).AllocatorInstance.SecondaryData;
    iVar3 = (param_1->FlagsPerChannel).ArrayNum;
    if (_Src == (ForElementType<unsigned_char>)0x0) {
      _Src = (ForElementType<unsigned_char>)&param_1->FlagsPerChannel;
    }
    (this->FlagsPerChannel).ArrayNum = iVar3;
    if ((iVar3 == 0) && (iVar2 == 0)) {
      *piVar1 = 0x20;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_>
                (1,1,iVar3,iVar2,&(this->FlagsPerChannel).AllocatorInstance,iVar3,piVar1);
      _Dst = (this->FlagsPerChannel).AllocatorInstance.SecondaryData;
      if (iVar3 != 0) {
        if (_Dst == (ForElementType<unsigned_char>)0x0) {
          _Dst = (ForElementType<unsigned_char>)&this->FlagsPerChannel;
        }
        memcpy((void *)_Dst,(void *)_Src,(longlong)iVar3);
      }
    }
  }
  return this;
}

// Serialize @ 1436dbef0

bool __thiscall
FChaosVDCollisionResponseParams::Serialize(FChaosVDCollisionResponseParams *this,FArchive *param_1)

{
  ::operator<<(param_1,(bool *)&this->_padding_);
  if ((char)this->_padding_ != '\0') {
    TArrayPrivateFriend::
    Serialize<unsigned_char,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
              (param_1,&this->FlagsPerChannel);
  }
  return (bool)((byte)~param_1->field_0x29 >> 1 & 1);
}

