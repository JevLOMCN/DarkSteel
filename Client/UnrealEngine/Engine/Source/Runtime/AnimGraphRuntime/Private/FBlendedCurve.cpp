// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 3

// FBlendedCurve @ 146406ee0

FBlendedCurve * __thiscall FBlendedCurve::FBlendedCurve(FBlendedCurve *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  this->field_0x10 = 0;
  *(undefined8 *)&this->field_0x18 = 0;
  return this;
}

// ~FBlendedCurve @ 146409360

void __thiscall FBlendedCurve::~FBlendedCurve(FBlendedCurve *this)

{
  return;
}

// operator= @ 14640ca40

FBlendedCurve * __thiscall FBlendedCurve::operator=(FBlendedCurve *this,FBlendedCurve *param_1)

{
  int iVar1;
  void *_Src;
  
  if (this != param_1) {
    _Src = *(void **)param_1;
    iVar1 = *(int *)&param_1->field_0x8;
    *(int *)&this->field_0x8 = iVar1;
    if ((iVar1 == 0) && (*(int *)&this->field_0xc == 0)) {
      *(undefined4 *)&this->field_0xc = 0;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                (0x10,4,iVar1,*(int *)&this->field_0xc,
                 (ForElementType<UE::Anim::FCurveElement> *)this,iVar1,(int *)&this->field_0xc);
      if (iVar1 != 0) {
        memcpy(*(void **)this,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  this->field_0x10 = param_1->field_0x10;
  *(undefined8 *)&this->field_0x18 = *(undefined8 *)&param_1->field_0x18;
  return this;
}

