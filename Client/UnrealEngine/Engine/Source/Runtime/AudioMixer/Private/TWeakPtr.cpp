// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 3

// UEOpEquals<Audio::FMixerSubmix_const_> @ 1464d6da0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

bool __thiscall
TWeakPtr<Audio::FMixerSubmix_const_,1>::UEOpEquals<Audio::FMixerSubmix_const_>
          (TWeakPtr<Audio::FMixerSubmix_const_,1> *this,
          TWeakPtr<Audio::FMixerSubmix_const_,1> *param_1)

{
  FMixerSubmix *pFVar1;
  atomic<int> aVar2;
  int iVar3;
  atomic<int> aVar4;
  int iVar5;
  FMixerSubmix *pFVar6;
  FMixerSubmix *pFVar7;
  FMixerSubmix *pFVar8;
  FMixerSubmix *pFVar9;
  bool bVar10;
  
  pFVar1 = (FMixerSubmix *)(this->WeakReferenceCount).ReferenceController;
  pFVar9 = (FMixerSubmix *)0x0;
  pFVar7 = pFVar1;
  pFVar8 = pFVar9;
  if (pFVar1 != (FMixerSubmix *)0x0) {
    aVar2 = *(atomic<int> *)&pFVar1->field_0x8;
    do {
      pFVar7 = pFVar9;
      pFVar8 = (FMixerSubmix *)0x0;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1464d6de1;
      LOCK();
      aVar4 = *(atomic<int> *)&pFVar1->field_0x8;
      bVar10 = aVar2 == aVar4;
      if (bVar10) {
        *(atomic<int> *)&pFVar1->field_0x8 = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar10);
    pFVar7 = pFVar1;
    pFVar8 = this->Object;
  }
LAB_1464d6de1:
  pFVar1 = (FMixerSubmix *)(param_1->WeakReferenceCount).ReferenceController;
  pFVar6 = pFVar1;
  if (pFVar1 != (FMixerSubmix *)0x0) {
    iVar3 = *(int *)&pFVar1->field_0x8;
    do {
      pFVar6 = pFVar9;
      if (iVar3 == 0) goto LAB_1464d6e02;
      LOCK();
      iVar5 = *(int *)&pFVar1->field_0x8;
      bVar10 = iVar3 == iVar5;
      if (bVar10) {
        *(int *)&pFVar1->field_0x8 = iVar3 + 1;
        iVar5 = iVar3;
      }
      UNLOCK();
      iVar3 = iVar5;
    } while (!bVar10);
    pFVar9 = param_1->Object;
    pFVar6 = pFVar1;
  }
LAB_1464d6e02:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar7);
  return pFVar8 == pFVar9;
}

// UEOpEquals<Audio::FMixerSubmix> @ 1464d6e40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

bool __thiscall
TWeakPtr<Audio::FMixerSubmix,1>::UEOpEquals<Audio::FMixerSubmix>
          (TWeakPtr<Audio::FMixerSubmix,1> *this,TWeakPtr<Audio::FMixerSubmix,1> *param_1)

{
  FMixerSubmix *pFVar1;
  atomic<int> aVar2;
  int iVar3;
  atomic<int> aVar4;
  int iVar5;
  FMixerSubmix *pFVar6;
  FMixerSubmix *pFVar7;
  FMixerSubmix *pFVar8;
  FMixerSubmix *pFVar9;
  bool bVar10;
  
  pFVar1 = (FMixerSubmix *)(this->WeakReferenceCount).ReferenceController;
  pFVar9 = (FMixerSubmix *)0x0;
  pFVar7 = pFVar1;
  pFVar8 = pFVar9;
  if (pFVar1 != (FMixerSubmix *)0x0) {
    aVar2 = *(atomic<int> *)&pFVar1->field_0x8;
    do {
      pFVar7 = pFVar9;
      pFVar8 = (FMixerSubmix *)0x0;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1464d6e81;
      LOCK();
      aVar4 = *(atomic<int> *)&pFVar1->field_0x8;
      bVar10 = aVar2 == aVar4;
      if (bVar10) {
        *(atomic<int> *)&pFVar1->field_0x8 = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar10);
    pFVar7 = pFVar1;
    pFVar8 = this->Object;
  }
LAB_1464d6e81:
  pFVar1 = (FMixerSubmix *)(param_1->WeakReferenceCount).ReferenceController;
  pFVar6 = pFVar1;
  if (pFVar1 != (FMixerSubmix *)0x0) {
    iVar3 = *(int *)&pFVar1->field_0x8;
    do {
      pFVar6 = pFVar9;
      if (iVar3 == 0) goto LAB_1464d6ea2;
      LOCK();
      iVar5 = *(int *)&pFVar1->field_0x8;
      bVar10 = iVar3 == iVar5;
      if (bVar10) {
        *(int *)&pFVar1->field_0x8 = iVar3 + 1;
        iVar5 = iVar3;
      }
      UNLOCK();
      iVar3 = iVar5;
    } while (!bVar10);
    pFVar9 = param_1->Object;
    pFVar6 = pFVar1;
  }
LAB_1464d6ea2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar7);
  return pFVar8 == pFVar9;
}

// UEOpEquals<ISubmixBufferListener> @ 14653c100

bool __thiscall
TWeakPtr<ISubmixBufferListener,1>::UEOpEquals<ISubmixBufferListener>
          (TWeakPtr<ISubmixBufferListener,1> *this,TWeakPtr<ISubmixBufferListener,1> *param_1)

{
  ISubmixBufferListener *pIVar1;
  atomic<int> aVar2;
  int iVar3;
  atomic<int> aVar4;
  int iVar5;
  ISubmixBufferListener *pIVar6;
  ISubmixBufferListener *pIVar7;
  ISubmixBufferListener *pIVar8;
  ISubmixBufferListener *pIVar9;
  bool bVar10;
  
  pIVar1 = (ISubmixBufferListener *)(this->WeakReferenceCount).ReferenceController;
  pIVar9 = (ISubmixBufferListener *)0x0;
  pIVar7 = pIVar1;
  pIVar8 = pIVar9;
  if (pIVar1 != (ISubmixBufferListener *)0x0) {
    aVar2 = *(atomic<int> *)&pIVar1->field_0x8;
    do {
      pIVar7 = pIVar9;
      pIVar8 = (ISubmixBufferListener *)0x0;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14653c141;
      LOCK();
      aVar4 = *(atomic<int> *)&pIVar1->field_0x8;
      bVar10 = aVar2 == aVar4;
      if (bVar10) {
        *(atomic<int> *)&pIVar1->field_0x8 = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar10);
    pIVar7 = pIVar1;
    pIVar8 = this->Object;
  }
LAB_14653c141:
  pIVar1 = (ISubmixBufferListener *)(param_1->WeakReferenceCount).ReferenceController;
  pIVar6 = pIVar1;
  if (pIVar1 != (ISubmixBufferListener *)0x0) {
    iVar3 = *(int *)&pIVar1->field_0x8;
    do {
      pIVar6 = pIVar9;
      if (iVar3 == 0) goto LAB_14653c162;
      LOCK();
      iVar5 = *(int *)&pIVar1->field_0x8;
      bVar10 = iVar3 == iVar5;
      if (bVar10) {
        *(int *)&pIVar1->field_0x8 = iVar3 + 1;
        iVar5 = iVar3;
      }
      UNLOCK();
      iVar3 = iVar5;
    } while (!bVar10);
    pIVar9 = param_1->Object;
    pIVar6 = pIVar1;
  }
LAB_14653c162:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pIVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pIVar7);
  return pIVar8 == pIVar9;
}

