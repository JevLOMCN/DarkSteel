// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProceduralVegetation
// Functions: 2

// StaticStruct @ 14da57f90

UScriptStruct * __cdecl FPVFloatRamp::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPVFloatRamp.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProceduralVegetation();
    Z_Registration_Info_UScriptStruct_FPVFloatRamp.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPVFloatRamp,(UObject *)pUVar1,L"PVFloatRamp");
  }
  return Z_Registration_Info_UScriptStruct_FPVFloatRamp.OuterSingleton;
}

// operator= @ 14da68120

FPVFloatRamp * __thiscall FPVFloatRamp::operator=(FPVFloatRamp *this,FPVFloatRamp *param_1)

{
  TArray<FRichCurveKey,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  TArray<FRichCurveKey,TSizedDefaultAllocator<32>_> *pTVar5;
  
  pTVar1 = &(this->EditorCurveData).Keys;
  *(int *)&(this->EditorCurveData)._padding_ = (int)(param_1->EditorCurveData)._padding_;
  *(undefined1 *)((longlong)&(this->EditorCurveData)._padding_ + 4) =
       *(undefined1 *)((longlong)&(param_1->EditorCurveData)._padding_ + 4);
  pTVar5 = &(param_1->EditorCurveData).Keys;
  *(undefined1 *)((longlong)&(this->EditorCurveData)._padding_ + 5) =
       *(undefined1 *)((longlong)&(param_1->EditorCurveData)._padding_ + 5);
  if (pTVar1 != pTVar5) {
    iVar3 = (this->EditorCurveData).Keys.ArrayMax;
    piVar2 = &(this->EditorCurveData).Keys.ArrayMax;
    _Src = (pTVar5->AllocatorInstance).Data;
    iVar4 = (param_1->EditorCurveData).Keys.ArrayNum;
    (this->EditorCurveData).Keys.ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar3 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x1c,4,iVar4,iVar3,&pTVar1->AllocatorInstance,iVar4,piVar2);
      if (iVar4 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar4 * 0x1c);
      }
    }
  }
  return this;
}

