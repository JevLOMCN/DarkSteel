// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 14727c150

UScriptStruct * __cdecl FForceFeedbackAttenuationSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FForceFeedbackAttenuationSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FForceFeedbackAttenuationSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FForceFeedbackAttenuationSettings,
                         (UObject *)pUVar1,L"ForceFeedbackAttenuationSettings");
  }
  return Z_Registration_Info_UScriptStruct_FForceFeedbackAttenuationSettings.OuterSingleton;
}

// operator= @ 1478acad0

FForceFeedbackAttenuationSettings * __thiscall
FForceFeedbackAttenuationSettings::operator=
          (FForceFeedbackAttenuationSettings *this,FForceFeedbackAttenuationSettings *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  void *_Src;
  undefined8 uVar3;
  
  this->field_0x8 = param_1->field_0x8;
  this->field_0x9 = param_1->field_0x9;
  this->field_0xa = param_1->field_0xa;
  *(undefined4 *)&this->field_0xc = *(undefined4 *)&param_1->field_0xc;
  uVar3 = *(undefined8 *)&param_1->field_0x18;
  puVar1 = &this->field_0xa8;
  *(undefined8 *)&this->field_0x10 = *(undefined8 *)&param_1->field_0x10;
  *(undefined8 *)&this->field_0x18 = uVar3;
  *(undefined8 *)&this->field_0x20 = *(undefined8 *)&param_1->field_0x20;
  *(undefined4 *)&this->field_0x28 = *(undefined4 *)&param_1->field_0x28;
  *(undefined4 *)&this->field_0x2c = *(undefined4 *)&param_1->field_0x2c;
  *(undefined4 *)&this->field_0x30 = *(undefined4 *)&param_1->field_0x30;
  *(undefined4 *)&this->field_0x34 = *(undefined4 *)&param_1->field_0x34;
  *(undefined4 *)&this->field_0xa0 = *(undefined4 *)&param_1->field_0xa0;
  this->field_0xa4 = param_1->field_0xa4;
  this->field_0xa5 = param_1->field_0xa5;
  if (puVar1 != &param_1->field_0xa8) {
    iVar2 = *(int *)&param_1->field_0xb0;
    _Src = *(void **)&param_1->field_0xa8;
    *(int *)&this->field_0xb0 = iVar2;
    if ((iVar2 == 0) && (*(int *)&this->field_0xb4 == 0)) {
      *(undefined4 *)&this->field_0xb4 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x1c,4,iVar2,*(int *)&this->field_0xb4,(ForAnyElementType *)puVar1,iVar2,
                 (int *)&this->field_0xb4);
      if (iVar2 != 0) {
        memcpy(*(void **)puVar1,_Src,(longlong)iVar2 * 0x1c);
      }
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (*(UObject **)&param_1->field_0xb8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(*(UObject **)&param_1->field_0xb8);
  }
  *(undefined8 *)&this->field_0xb8 = *(undefined8 *)&param_1->field_0xb8;
  return this;
}

