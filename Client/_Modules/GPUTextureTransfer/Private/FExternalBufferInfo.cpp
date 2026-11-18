// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GPUTextureTransfer
// Functions: 1

// ~FExternalBufferInfo @ 14d7577e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::GPUTextureTransfer::Private::FTextureTransferBase::FExternalBufferInfo::~FExternalBufferInfo
          (FExternalBufferInfo *this)

{
  DVPSync *pDVar1;
  DVPStatus DVar2;
  
  pDVar1 = (this->GPUMemorySync).Ptr;
  if (pDVar1 != (DVPSync *)0x0) {
    DVar2 = dvpFreeSyncObject(pDVar1->DVPSyncObject);
    if ((DVar2 != DVP_STATUS_OK) && (1 < (byte)LogGPUTextureTransfer._0_1_)) {
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGPUTextureTransfer);
    }
    FMemory::Free(pDVar1->Semaphore);
    ::operator_delete(pDVar1,0x18);
  }
  pDVar1 = (this->SystemMemorySync).Ptr;
  if (pDVar1 != (DVPSync *)0x0) {
    DVar2 = dvpFreeSyncObject(pDVar1->DVPSyncObject);
    if ((DVar2 != DVP_STATUS_OK) && (1 < (byte)LogGPUTextureTransfer._0_1_)) {
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGPUTextureTransfer);
    }
    FMemory::Free(pDVar1->Semaphore);
    ::operator_delete(pDVar1,0x18);
  }
  return;
}

