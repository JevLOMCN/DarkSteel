// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 33

// ~IPCGAttributeAccessor @ 1497e2b70

void __thiscall IPCGAttributeAccessor::~IPCGAttributeAccessor(IPCGAttributeAccessor *this)

{
  return;
}

// IsAttribute @ 14981f8d0

bool __thiscall IPCGAttributeAccessor::IsAttribute(IPCGAttributeAccessor *this)

{
  return false;
}

// Prepare @ 1498252e0

void __thiscall
IPCGAttributeAccessor::Prepare
          (IPCGAttributeAccessor *this,IPCGAttributeAccessorKeys *param_1,int param_2,bool param_3)

{
  return;
}

// GetRange<int> @ 149deefc0

bool __thiscall
IPCGAttributeAccessor::GetRange<int>
          (IPCGAttributeAccessor *this,TArrayView<int,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(this->_padding_ + 0x18))();
  return (bool)uVar1;
}

// GetRange<float> @ 149deeff0

bool __thiscall
IPCGAttributeAccessor::GetRange<float>
          (IPCGAttributeAccessor *this,TArrayView<float,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(this->_padding_ + 0x38))();
  return (bool)uVar1;
}

// GetRange<double> @ 149def020

bool __thiscall
IPCGAttributeAccessor::GetRange<double>
          (IPCGAttributeAccessor *this,TArrayView<double,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(this->_padding_ + 0x48))();
  return (bool)uVar1;
}

// GetRange<UE::Math::TQuat<double>_> @ 149def050

bool __thiscall
IPCGAttributeAccessor::GetRange<UE::Math::TQuat<double>_>
          (IPCGAttributeAccessor *this,TArrayView<UE::Math::TQuat<double>,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(this->_padding_ + 0x88))();
  return (bool)uVar1;
}

// GetRange<UE::Math::TRotator<double>_> @ 149def080

bool __thiscall
IPCGAttributeAccessor::GetRange<UE::Math::TRotator<double>_>
          (IPCGAttributeAccessor *this,TArrayView<UE::Math::TRotator<double>,int> *param_1,
          int param_2,IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(this->_padding_ + 200))();
  return (bool)uVar1;
}

// GetRange<UE::Math::TTransform<double>_> @ 149def0b0

bool __thiscall
IPCGAttributeAccessor::GetRange<UE::Math::TTransform<double>_>
          (IPCGAttributeAccessor *this,TArrayView<UE::Math::TTransform<double>,int> *param_1,
          int param_2,IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(this->_padding_ + 0x98))();
  return (bool)uVar1;
}

// GetRange<UE::Math::TVector2<double>_> @ 149def0e0

bool __thiscall
IPCGAttributeAccessor::GetRange<UE::Math::TVector2<double>_>
          (IPCGAttributeAccessor *this,TArrayView<UE::Math::TVector2<double>,int> *param_1,
          int param_2,IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(this->_padding_ + 0x58))();
  return (bool)uVar1;
}

// GetRange<UE::Math::TVector4<double>_> @ 149def110

bool __thiscall
IPCGAttributeAccessor::GetRange<UE::Math::TVector4<double>_>
          (IPCGAttributeAccessor *this,TArrayView<UE::Math::TVector4<double>,int> *param_1,
          int param_2,IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(this->_padding_ + 0x78))();
  return (bool)uVar1;
}

// GetRange<UE::Math::TVector<double>_> @ 149def140

bool __thiscall
IPCGAttributeAccessor::GetRange<UE::Math::TVector<double>_>
          (IPCGAttributeAccessor *this,TArrayView<UE::Math::TVector<double>,int> *param_1,
          int param_2,IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(this->_padding_ + 0x68))();
  return (bool)uVar1;
}

// GetRange<FSoftClassPath> @ 149def170

bool __thiscall
IPCGAttributeAccessor::GetRange<FSoftClassPath>
          (IPCGAttributeAccessor *this,TArrayView<FSoftClassPath,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(this->_padding_ + 0xf8))();
  return (bool)uVar1;
}

// GetRange<FSoftObjectPath> @ 149def1a0

bool __thiscall
IPCGAttributeAccessor::GetRange<FSoftObjectPath>
          (IPCGAttributeAccessor *this,TArrayView<FSoftObjectPath,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(this->_padding_ + 0xe8))();
  return (bool)uVar1;
}

// GetRange<FName> @ 149def1d0

bool __thiscall
IPCGAttributeAccessor::GetRange<FName>
          (IPCGAttributeAccessor *this,TArrayView<FName,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(this->_padding_ + 0xd8))();
  return (bool)uVar1;
}

// GetRange<FString> @ 149def200

bool __thiscall
IPCGAttributeAccessor::GetRange<FString>
          (IPCGAttributeAccessor *this,TArrayView<FString,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(this->_padding_ + 0xa8))();
  return (bool)uVar1;
}

// GetRange<__int64> @ 149def230

bool __thiscall
IPCGAttributeAccessor::GetRange<__int64>
          (IPCGAttributeAccessor *this,TArrayView<__int64,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(this->_padding_ + 0x28))();
  return (bool)uVar1;
}

// GetRange<bool> @ 149def260

bool __thiscall
IPCGAttributeAccessor::GetRange<bool>
          (IPCGAttributeAccessor *this,TArrayView<bool,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(this->_padding_ + 0xb8))();
  return (bool)uVar1;
}

// SetRange<int> @ 149e2d860

bool __thiscall
IPCGAttributeAccessor::SetRange<int>
          (IPCGAttributeAccessor *this,TArrayView<int_const_,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(this->_padding_ + 0x20))();
  return (bool)uVar1;
}

// SetRange<float> @ 149e2d890

bool __thiscall
IPCGAttributeAccessor::SetRange<float>
          (IPCGAttributeAccessor *this,TArrayView<float_const_,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(this->_padding_ + 0x40))();
  return (bool)uVar1;
}

// SetRange<double> @ 149e2d8c0

bool __thiscall
IPCGAttributeAccessor::SetRange<double>
          (IPCGAttributeAccessor *this,TArrayView<double_const_,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(this->_padding_ + 0x50))();
  return (bool)uVar1;
}

// SetRange<UE::Math::TQuat<double>_> @ 149e2d8f0

bool __thiscall
IPCGAttributeAccessor::SetRange<UE::Math::TQuat<double>_>
          (IPCGAttributeAccessor *this,TArrayView<UE::Math::TQuat<double>_const_,int> *param_1,
          int param_2,IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(this->_padding_ + 0x90))();
  return (bool)uVar1;
}

// SetRange<UE::Math::TRotator<double>_> @ 149e2d920

bool __thiscall
IPCGAttributeAccessor::SetRange<UE::Math::TRotator<double>_>
          (IPCGAttributeAccessor *this,TArrayView<UE::Math::TRotator<double>_const_,int> *param_1,
          int param_2,IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(this->_padding_ + 0xd0))();
  return (bool)uVar1;
}

// SetRange<UE::Math::TTransform<double>_> @ 149e2d950

bool __thiscall
IPCGAttributeAccessor::SetRange<UE::Math::TTransform<double>_>
          (IPCGAttributeAccessor *this,TArrayView<UE::Math::TTransform<double>_const_,int> *param_1,
          int param_2,IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(this->_padding_ + 0xa0))();
  return (bool)uVar1;
}

// SetRange<UE::Math::TVector2<double>_> @ 149e2d980

bool __thiscall
IPCGAttributeAccessor::SetRange<UE::Math::TVector2<double>_>
          (IPCGAttributeAccessor *this,TArrayView<UE::Math::TVector2<double>_const_,int> *param_1,
          int param_2,IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(this->_padding_ + 0x60))();
  return (bool)uVar1;
}

// SetRange<UE::Math::TVector4<double>_> @ 149e2d9b0

bool __thiscall
IPCGAttributeAccessor::SetRange<UE::Math::TVector4<double>_>
          (IPCGAttributeAccessor *this,TArrayView<UE::Math::TVector4<double>_const_,int> *param_1,
          int param_2,IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(this->_padding_ + 0x80))();
  return (bool)uVar1;
}

// SetRange<UE::Math::TVector<double>_> @ 149e2d9e0

bool __thiscall
IPCGAttributeAccessor::SetRange<UE::Math::TVector<double>_>
          (IPCGAttributeAccessor *this,TArrayView<UE::Math::TVector<double>_const_,int> *param_1,
          int param_2,IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(this->_padding_ + 0x70))();
  return (bool)uVar1;
}

// SetRange<FSoftClassPath> @ 149e2da10

bool __thiscall
IPCGAttributeAccessor::SetRange<FSoftClassPath>
          (IPCGAttributeAccessor *this,TArrayView<FSoftClassPath_const_,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(this->_padding_ + 0x100))();
  return (bool)uVar1;
}

// SetRange<FSoftObjectPath> @ 149e2da40

bool __thiscall
IPCGAttributeAccessor::SetRange<FSoftObjectPath>
          (IPCGAttributeAccessor *this,TArrayView<FSoftObjectPath_const_,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(this->_padding_ + 0xf0))();
  return (bool)uVar1;
}

// SetRange<FName> @ 149e2da70

bool __thiscall
IPCGAttributeAccessor::SetRange<FName>
          (IPCGAttributeAccessor *this,TArrayView<FName_const_,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(this->_padding_ + 0xe0))();
  return (bool)uVar1;
}

// SetRange<FString> @ 149e2daa0

bool __thiscall
IPCGAttributeAccessor::SetRange<FString>
          (IPCGAttributeAccessor *this,TArrayView<FString_const_,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(this->_padding_ + 0xb0))();
  return (bool)uVar1;
}

// SetRange<__int64> @ 149e2dad0

bool __thiscall
IPCGAttributeAccessor::SetRange<__int64>
          (IPCGAttributeAccessor *this,TArrayView<__int64_const_,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(this->_padding_ + 0x30))();
  return (bool)uVar1;
}

// SetRange<bool> @ 149e2db00

bool __thiscall
IPCGAttributeAccessor::SetRange<bool>
          (IPCGAttributeAccessor *this,TArrayView<bool_const_,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(this->_padding_ + 0xc0))();
  return (bool)uVar1;
}

