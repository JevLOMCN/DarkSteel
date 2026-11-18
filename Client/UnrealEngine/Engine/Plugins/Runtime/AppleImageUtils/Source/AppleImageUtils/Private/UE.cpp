// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppleImageUtils
// Functions: 4

// Construct<FAppleImageUtilsImageConversionResult> @ 14cfa79e0

void __cdecl
UE::CoreUObject::Private::Construct<FAppleImageUtilsImageConversionResult>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FAppleImageUtilsImageConversionResult> @ 14cfa7a00

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FAppleImageUtilsImageConversionResult>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FAppleImageUtilsImageConversionResult> @ 14cfa7a20

void __cdecl
UE::CoreUObject::Private::Destruct<FAppleImageUtilsImageConversionResult>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FAppleImageUtilsImageConversionResult> @ 14cfa7a60

bool __cdecl
UE::CoreUObject::Private::Copy<FAppleImageUtilsImageConversionResult>
          (void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  FString *pFVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  FString *this;
  FString *pFVar5;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar2 = (FString *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      ::FString::operator=(this,pFVar2);
      pFVar5 = this + 1;
      if (pFVar5 != pFVar2 + 1) {
        iVar3 = pFVar2[1].Data.ArrayNum;
        piVar1 = &this[1].Data.ArrayMax;
        _Src = pFVar2[1].Data.AllocatorInstance.Data;
        iVar4 = *piVar1;
        this[1].Data.ArrayNum = iVar3;
        if ((iVar3 == 0) && (iVar4 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,iVar3,iVar4,(ForAnyElementType *)pFVar5,iVar3,piVar1);
          if (iVar3 != 0) {
            memcpy((pFVar5->Data).AllocatorInstance.Data,_Src,(longlong)iVar3);
          }
        }
      }
      param_3 = param_3 + -1;
      this = this + 2;
    } while (param_3 != 0);
  }
  return true;
}

