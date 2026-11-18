// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IESFile
// Functions: 6

// FIESConverter @ 14e6718f0

FIESConverter * __thiscall
FIESConverter::FIESConverter(FIESConverter *this,uchar *param_1,uint param_2)

{
  TSharedPtr<FIESLoader,1> *pTVar1;
  int *piVar2;
  int *piVar3;
  atomic<int> *paVar4;
  atomic<int> aVar5;
  FIESLoader *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  code *pcVar8;
  float fVar9;
  float fVar10;
  bool bVar11;
  int iVar12;
  TSharedRef<FIESLoader,1> *pTVar13;
  FIESConverter *pFVar14;
  uint uVar15;
  TReferenceControllerBase<1> *pTVar16;
  FScriptContainerElement *pFVar17;
  FScriptContainerElement *pFVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  ushort local_res8 [4];
  uchar *local_res10;
  uint local_res18 [2];
  TSharedRef<FIESLoader,1> local_98;
  longlong local_88 [10];
  
  pTVar1 = &this->Impl;
  piVar2 = &(this->RawData).ArrayNum;
  (this->RawData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar3 = &(this->RawData).ArrayMax;
  *piVar2 = 0;
  *piVar3 = 0;
  pTVar1->Object = (FIESLoader *)0x0;
  (this->Impl).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_res10 = param_1;
  local_res18[0] = param_2;
  pTVar13 = MakeShared<FIESLoader,1,unsigned_char_const_*_&,unsigned_int_&>
                      (&local_98,&local_res10,local_res18);
  pTVar16 = (pTVar13->SharedReferenceCount).ReferenceController;
  pFVar6 = pTVar13->Object;
  if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pTVar1 != (TSharedPtr<FIESLoader,1> *)local_88) {
    pTVar1->Object = pFVar6;
    pTVar7 = (this->Impl).SharedReferenceCount.ReferenceController;
    if (pTVar16 != pTVar7) {
      (this->Impl).SharedReferenceCount.ReferenceController = pTVar16;
      pTVar16 = (TReferenceControllerBase<1> *)0x0;
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar4 = &pTVar7->SharedReferenceCount;
        aVar5 = *paVar4;
        *paVar4 = (atomic<int>)((int)*paVar4 + -1);
        UNLOCK();
        if (aVar5 == (atomic<int>)0x1) {
          (**(code **)pTVar7->_padding_)(pTVar7);
          LOCK();
          paVar4 = &pTVar7->WeakReferenceCount;
          aVar5 = *paVar4;
          *paVar4 = (atomic<int>)((int)*paVar4 + -1);
          UNLOCK();
          if (aVar5 == (atomic<int>)0x1) {
            (**(code **)(pTVar7->_padding_ + 8))(pTVar7,1);
          }
        }
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  if (pTVar1->Object == (FIESLoader *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar11) {
      pcVar8 = (code *)swi(3);
      pFVar14 = (FIESConverter *)(*pcVar8)();
      return pFVar14;
    }
  }
  if ((pTVar1->Object->Error).Data.ArrayNum < 2) {
    if (pTVar1->Object == (FIESLoader *)0x0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      if (bVar11) {
        pcVar8 = (code *)swi(3);
        pFVar14 = (FIESConverter *)(*pcVar8)();
        return pFVar14;
      }
    }
    pFVar6 = pTVar1->Object;
    if (1 < (pFVar6->Error).Data.ArrayNum) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\IESFile\\Private\\IESLoader.cpp"
                          ,0x171,L"");
      if (bVar11) {
        pcVar8 = (code *)swi(3);
        pFVar14 = (FIESConverter *)(*pcVar8)();
        return pFVar14;
      }
    }
    if (*piVar2 != 0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("!OutData.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\IESFile\\Private\\IESLoader.cpp"
                          ,0x176,L"");
      if (bVar11) {
        pcVar8 = (code *)swi(3);
        pFVar14 = (FIESConverter *)(*pcVar8)();
        return pFVar14;
      }
    }
    iVar12 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (1,1,0x80000,(ForAnyElementType *)this,piVar2,piVar3);
    memset((this->RawData).AllocatorInstance.Data + iVar12,0,0x80000);
    pFVar17 = (this->RawData).AllocatorInstance.Data;
    fVar20 = FIESLoader::ComputeMax(pFVar6);
    fVar10 = __real_3f340000;
    fVar9 = __real_3fb40000;
    fVar20 = __real_3f800000 / fVar20;
    uVar15 = 0;
    do {
      pFVar18 = pFVar17;
      uVar19 = 0;
      do {
        local_res8[0] = 0;
        fVar21 = FIESLoader::Interpolate2D(pFVar6,(float)uVar15 * fVar9,(float)uVar19 * fVar10);
        FGenericPlatformMath::StoreHalf(local_res8,fVar21 * fVar20);
        pFVar17 = pFVar18 + 8;
        uVar19 = uVar19 + 1;
        *(ushort *)pFVar18 = local_res8[0];
        *(ushort *)(pFVar18 + 2) = local_res8[0];
        *(ushort *)(pFVar18 + 4) = local_res8[0];
        *(ushort *)(pFVar18 + 6) = local_res8[0];
        pFVar18 = pFVar17;
      } while (uVar19 < 0x100);
      uVar15 = uVar15 + 1;
    } while (uVar15 < 0x100);
    this->Multiplier = 1.0;
  }
  return this;
}

// GetBrightness @ 14e672650

float __thiscall FIESConverter::GetBrightness(FIESConverter *this)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if ((this->Impl).Object != (FIESLoader *)0x0) {
    return ((this->Impl).Object)->Brightness;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    fVar3 = (float)(*pcVar1)();
    return fVar3;
  }
  return ((this->Impl).Object)->Brightness;
}

// GetError @ 14e6726c0

wchar_t * __thiscall FIESConverter::GetError(FIESConverter *this)

{
  FIESLoader *pFVar1;
  code *pcVar2;
  bool bVar3;
  wchar_t *pwVar4;
  
  if ((this->Impl).Object == (FIESLoader *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pwVar4 = (wchar_t *)(*pcVar2)();
      return pwVar4;
    }
  }
  pFVar1 = (this->Impl).Object;
  if ((pFVar1->Error).Data.ArrayNum < 2) {
    return (wchar_t *)0x0;
  }
  return (wchar_t *)(pFVar1->Error).Data.AllocatorInstance.Data;
}

// GetHeight @ 14e672810

uint __thiscall FIESConverter::GetHeight(FIESConverter *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if ((this->Impl).Object == (FIESLoader *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  return 0x100;
}

// GetWidth @ 14e672950

uint __thiscall FIESConverter::GetWidth(FIESConverter *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if ((this->Impl).Object == (FIESLoader *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  return 0x100;
}

// IsValid @ 14e673150

bool __thiscall FIESConverter::IsValid(FIESConverter *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if ((this->Impl).Object == (FIESLoader *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return (((this->Impl).Object)->Error).Data.ArrayNum < 2;
}

