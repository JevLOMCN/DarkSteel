// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticStruct @ 14741e880

UScriptStruct * __cdecl FAnimCurveBase::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimCurveBase.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FAnimCurveBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimCurveBase,(UObject *)pUVar1,L"AnimCurveBase"
                        );
  }
  return Z_Registration_Info_UScriptStruct_FAnimCurveBase.OuterSingleton;
}

// GetCurveTypeFlag @ 147454cc0

bool __thiscall FAnimCurveBase::GetCurveTypeFlag(FAnimCurveBase *this,EAnimAssetCurveFlags param_1)

{
  return (this->CurveTypeFlags & param_1) != AACF_NONE;
}

// GetCurveTypeFlags @ 147454cd0

int __thiscall FAnimCurveBase::GetCurveTypeFlags(FAnimCurveBase *this)

{
  return this->CurveTypeFlags;
}

// PostSerialize @ 14746fbb0

void __thiscall FAnimCurveBase::PostSerialize(FAnimCurveBase *this,FArchive *param_1)

{
  return;
}

// PostSerializeFixup @ 14746fbc0

void __thiscall FAnimCurveBase::PostSerializeFixup(FAnimCurveBase *this,FArchive *param_1)

{
  return;
}

// Serialize @ 147476060

bool __thiscall FAnimCurveBase::Serialize(FAnimCurveBase *this,FArchive *param_1)

{
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFrameworkObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FAnimObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  return false;
}

// SetCurveTypeFlag @ 147476420

void __thiscall
FAnimCurveBase::SetCurveTypeFlag(FAnimCurveBase *this,EAnimAssetCurveFlags param_1,bool param_2)

{
  if (param_2) {
    this->CurveTypeFlags = this->CurveTypeFlags | param_1;
    return;
  }
  this->CurveTypeFlags = ~param_1 & this->CurveTypeFlags;
  return;
}

// SetCurveTypeFlags @ 147476440

void __thiscall FAnimCurveBase::SetCurveTypeFlags(FAnimCurveBase *this,int param_1)

{
  this->CurveTypeFlags = param_1;
  return;
}

// ToggleCurveTypeFlag @ 14747bc30

void __thiscall
FAnimCurveBase::ToggleCurveTypeFlag(FAnimCurveBase *this,EAnimAssetCurveFlags param_1)

{
  EAnimAssetCurveFlags EVar1;
  
  EVar1 = this->CurveTypeFlags;
  if ((param_1 & EVar1) == AACF_NONE) {
    this->CurveTypeFlags = EVar1 | param_1;
    return;
  }
  this->CurveTypeFlags = ~param_1 & EVar1;
  return;
}

