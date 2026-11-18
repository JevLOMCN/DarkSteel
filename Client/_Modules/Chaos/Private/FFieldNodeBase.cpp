// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 9

// ~FFieldNodeBase @ 143f4b090

void __thiscall FFieldNodeBase::~FFieldNodeBase(FFieldNodeBase *this)

{
  this->_padding_ = (longlong)&___7FFieldNodeBase__6B_;
  return;
}

// operator== @ 143f4be30

bool __thiscall FFieldNodeBase::operator==(FFieldNodeBase *this,FFieldNodeBase *param_1)

{
  if (((this->Name).ComparisonIndex.Value == (param_1->Name).ComparisonIndex.Value) &&
     ((this->Name).Number == (param_1->Name).Number)) {
    return true;
  }
  return false;
}

// ComputeFieldBounds @ 143f5a6b0

void __thiscall
FFieldNodeBase::ComputeFieldBounds
          (FFieldNodeBase *this,TVector<double> *param_1,TVector<double> *param_2,
          TVector<double> *param_3)

{
  undefined8 uVar1;
  
  (param_1->field0_0x0)._s_0.X = -3.4028234663852886e+38;
  (param_1->field0_0x0)._s_0.Y = -3.4028234663852886e+38;
  (param_1->field0_0x0)._s_0.Z = -3.4028234663852886e+38;
  (param_2->field0_0x0)._s_0.X = 3.4028234663852886e+38;
  (param_2->field0_0x0)._s_0.Y = 3.4028234663852886e+38;
  (param_2->field0_0x0)._s_0.Z = 3.4028234663852886e+38;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (param_3->field0_0x0)._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (param_3->field0_0x0)._s_0.Y = (double)uVar1;
  (param_3->field0_0x0)._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return;
}

// EvalMaxMagnitude @ 143f5f4c0

float __thiscall FFieldNodeBase::EvalMaxMagnitude(FFieldNodeBase *this)

{
  return __real_3f800000;
}

// FillSetupCount @ 143f67330

void __thiscall FFieldNodeBase::FillSetupCount(FFieldNodeBase *this,int *param_1,int *param_2)

{
  return;
}

// FillSetupDatas @ 143f68f60

void __thiscall
FFieldNodeBase::FillSetupDatas
          (FFieldNodeBase *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<float,TSizedDefaultAllocator<32>_> *param_2,float param_3)

{
  return;
}

// SerializationType @ 143f73a40

ESerializationType __thiscall FFieldNodeBase::SerializationType(FFieldNodeBase *this)

{
  code *pcVar1;
  bool bVar2;
  ESerializationType EVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldSystem.h"
                     ,0x1b9,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    EVar3 = (*pcVar1)();
    return EVar3;
  }
  return FieldNode_Null;
}

// Serialize @ 143f73fb0

void __thiscall FFieldNodeBase::Serialize(FFieldNodeBase *this,FArchive *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143f73fbd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&this->Name);
  return;
}

// Type @ 143f774d0

EFieldType __thiscall FFieldNodeBase::Type(FFieldNodeBase *this)

{
  code *pcVar1;
  bool bVar2;
  EFieldType EVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldSystem.h"
                     ,0x1b8,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    EVar3 = (*pcVar1)();
    return EVar3;
  }
  return EField_None;
}

