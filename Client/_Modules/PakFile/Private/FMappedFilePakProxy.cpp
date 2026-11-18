// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PakFile
// Functions: 1

// MapRegion @ 142a83be0

IMappedFileRegion * __thiscall
FMappedFilePakProxy::MapRegion
          (FMappedFilePakProxy *this,long64 param_1,long64 param_2,FFileMappingFlags param_3)

{
  IMappedFileHandle *pIVar1;
  TReferenceControllerBase<1> *pTVar2;
  ulong64 uVar3;
  code *pcVar4;
  bool bVar5;
  IMappedFileRegion *pIVar6;
  undefined8 *puVar7;
  longlong lVar8;
  
  if (this->_padding_ <= param_1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Offset < GetFileSize()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                       ,0xf7b,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pIVar6 = (IMappedFileRegion *)(*pcVar4)();
      return pIVar6;
    }
  }
  lVar8 = this->_padding_ - param_1;
  if (param_2 < lVar8) {
    lVar8 = param_2;
  }
  if (lVar8 < 1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("BytesToMap > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                       ,0xf7d,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pIVar6 = (IMappedFileRegion *)(*pcVar4)();
      return pIVar6;
    }
  }
  if ((this->LowerLevel).Object == (IMappedFileHandle *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pIVar6 = (IMappedFileRegion *)(*pcVar4)();
      return pIVar6;
    }
  }
  pIVar1 = (this->LowerLevel).Object;
  puVar7 = (undefined8 *)
           (**(code **)(pIVar1->_padding_ + 8))
                     (pIVar1,this->OffsetInPak + param_1,lVar8,param_3.Flags);
  pIVar6 = ::operator_new(0x48);
  if (pIVar6 == (IMappedFileRegion *)0x0) {
    if (puVar7 != (undefined8 *)0x0) {
      (**(code **)*puVar7)(puVar7,1);
    }
    pIVar6 = (IMappedFileRegion *)0x0;
  }
  else {
    lVar8 = this->OffsetInPak;
    pTVar2 = (this->LowerLevel).SharedReferenceCount.ReferenceController;
    pIVar1 = (this->LowerLevel).Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((puVar7[1] == 0) || (puVar7[2] == 0)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("MappedPtr && MappedSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\MappedFileHandle.h"
                         ,0x19,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pIVar6 = (IMappedFileRegion *)(*pcVar4)();
        return pIVar6;
      }
    }
    uVar3 = puVar7[2];
    if ((puVar7[1] == 0) || (uVar3 == 0)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("MappedPtr && MappedSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\MappedFileHandle.h"
                         ,0x19,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pIVar6 = (IMappedFileRegion *)(*pcVar4)();
        return pIVar6;
      }
    }
    IMappedFileRegion::IMappedFileRegion
              (pIVar6,(uchar *)puVar7[1],uVar3,&this->DebugFilename,param_1 + lVar8);
    pIVar6->_padding_ = (longlong)&___7FMappedRegionPakProxy__6B_;
    pIVar6[1]._padding_ = (longlong)pIVar1;
    pIVar6[1].MappedPtr = (uchar *)pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    pIVar6[1].MappedSize = (ulong64)puVar7;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  return pIVar6;
}

