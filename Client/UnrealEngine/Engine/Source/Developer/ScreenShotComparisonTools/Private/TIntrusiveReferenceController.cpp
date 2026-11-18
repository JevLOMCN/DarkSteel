// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ScreenShotComparisonTools
// Functions: 3

// DestroyObject @ 148c469c0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>::
DestroyObject(TIntrusiveReferenceController<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>
              *this)

{
  void *pvVar1;
  
  DestructItems<FComparisonReport,int>
            (*(FComparisonReport **)(this->ObjectStorage).Pad,
             *(int *)((this->ObjectStorage).Pad + 8));
  pvVar1 = *(void **)(this->ObjectStorage).Pad;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 148c46a00

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TFutureState<FImageComparisonResult>,1>::
DestroyObject(TIntrusiveReferenceController<TFutureState<FImageComparisonResult>,1> *this)

{
  FEvent *pFVar1;
  uchar *puVar2;
  uchar *puVar3;
  
  if ((this->ObjectStorage).Pad[0x68] != '\0') {
    FImageComparisonResult::~FImageComparisonResult
              ((FImageComparisonResult *)((this->ObjectStorage).Pad + 0x70));
  }
  pFVar1 = *(FEvent **)((this->ObjectStorage).Pad + 0x60);
  if (pFVar1 != (FEvent *)0x0) {
    FGenericPlatformProcess::ReturnSynchEventToPool(pFVar1);
    (this->ObjectStorage).Pad[0x60] = '\0';
    (this->ObjectStorage).Pad[0x61] = '\0';
    (this->ObjectStorage).Pad[0x62] = '\0';
    (this->ObjectStorage).Pad[99] = '\0';
    (this->ObjectStorage).Pad[100] = '\0';
    (this->ObjectStorage).Pad[0x65] = '\0';
    (this->ObjectStorage).Pad[0x66] = '\0';
    (this->ObjectStorage).Pad[0x67] = '\0';
  }
  if (*(longlong *)((this->ObjectStorage).Pad + 0x30) != 0) {
    puVar2 = *(uchar **)((this->ObjectStorage).Pad + 0x58);
    puVar3 = (this->ObjectStorage).Pad + 0x40;
    if (puVar2 != (uchar *)0x0) {
      puVar3 = puVar2;
    }
    (**(code **)(*(longlong *)puVar3 + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x000148c46a56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ObjectStorage);
  return;
}

// DestroyObject @ 148c46a70

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TFutureState<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>_>,1>
::DestroyObject(TIntrusiveReferenceController<TFutureState<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>_>,1>
                *this)

{
  FEvent *pFVar1;
  uchar *puVar2;
  uchar *puVar3;
  
  if ((this->ObjectStorage).Pad[0x68] != '\0') {
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x78));
  }
  pFVar1 = *(FEvent **)((this->ObjectStorage).Pad + 0x60);
  if (pFVar1 != (FEvent *)0x0) {
    FGenericPlatformProcess::ReturnSynchEventToPool(pFVar1);
    (this->ObjectStorage).Pad[0x60] = '\0';
    (this->ObjectStorage).Pad[0x61] = '\0';
    (this->ObjectStorage).Pad[0x62] = '\0';
    (this->ObjectStorage).Pad[99] = '\0';
    (this->ObjectStorage).Pad[100] = '\0';
    (this->ObjectStorage).Pad[0x65] = '\0';
    (this->ObjectStorage).Pad[0x66] = '\0';
    (this->ObjectStorage).Pad[0x67] = '\0';
  }
  if (*(longlong *)((this->ObjectStorage).Pad + 0x30) != 0) {
    puVar2 = *(uchar **)((this->ObjectStorage).Pad + 0x58);
    puVar3 = (this->ObjectStorage).Pad + 0x40;
    if (puVar2 != (uchar *)0x0) {
      puVar3 = puVar2;
    }
    (**(code **)(*(longlong *)puVar3 + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x000148c46ac6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ObjectStorage);
  return;
}

