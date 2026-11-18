// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 1

// operator= @ 14640da40

FSplineCurves * __thiscall FSplineCurves::operator=(FSplineCurves *this,FSplineCurves *param_1)

{
  FInterpCurveQuat *pFVar1;
  undefined1 *puVar2;
  FInterpCurveFloat *pFVar3;
  int iVar4;
  void *pvVar5;
  
  FInterpCurveVector::operator=(&this->Position,&param_1->Position);
  pFVar1 = &this->Rotation;
  if (pFVar1 != &param_1->Rotation) {
    iVar4 = *(int *)&(param_1->Rotation).field_0x8;
    puVar2 = &(this->Rotation).field_0xc;
    pvVar5 = *(void **)&param_1->Rotation;
    *(int *)&(this->Rotation).field_0x8 = iVar4;
    if ((iVar4 == 0) && (*(int *)puVar2 == 0)) {
      *(undefined4 *)puVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x80,0x10,iVar4,*(int *)puVar2,(ForAnyElementType *)pFVar1,iVar4,(int *)puVar2);
      if (iVar4 != 0) {
        memcpy(*(void **)pFVar1,pvVar5,(longlong)iVar4 << 7);
      }
    }
  }
  (this->Rotation).field_0x10 = (param_1->Rotation).field_0x10;
  *(undefined4 *)&(this->Rotation).field_0x14 = *(undefined4 *)&(param_1->Rotation).field_0x14;
  FInterpCurveVector::operator=(&this->Scale,&param_1->Scale);
  pFVar3 = &this->ReparamTable;
  if (pFVar3 != &param_1->ReparamTable) {
    iVar4 = *(int *)&(param_1->ReparamTable).field_0x8;
    puVar2 = &(this->ReparamTable).field_0xc;
    pvVar5 = *(void **)&param_1->ReparamTable;
    *(int *)&(this->ReparamTable).field_0x8 = iVar4;
    if ((iVar4 == 0) && (*(int *)puVar2 == 0)) {
      *(undefined4 *)puVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x14,4,iVar4,*(int *)puVar2,(ForAnyElementType *)pFVar3,iVar4,(int *)puVar2);
      if (iVar4 != 0) {
        memcpy(*(void **)pFVar3,pvVar5,(longlong)iVar4 * 0x14);
      }
    }
  }
  (this->ReparamTable).field_0x10 = (param_1->ReparamTable).field_0x10;
  *(undefined4 *)&(this->ReparamTable).field_0x14 =
       *(undefined4 *)&(param_1->ReparamTable).field_0x14;
  this->Version = param_1->Version;
  return this;
}

